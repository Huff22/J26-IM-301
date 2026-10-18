/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "EditorTelemetry/IsdkEditorTelemetry.h"
#include "UnrealEdGlobals.h"
#include "Editor.h"
#include "Editor/UnrealEdEngine.h"
#include "EditorTelemetry/IsdkEditorTelemetryNotifications.h"
#include "ISettingsModule.h"
#include "MetaXRIsdkEngineTelemetry.h"

DEFINE_LOG_CATEGORY(LogOculusInteractionEditorTelemetry);

FIsdkEditorTelemetry& FIsdkEditorTelemetry::Get()
{
  static FIsdkEditorTelemetry IsdkEditorTelemetryInstance = FIsdkEditorTelemetry();
  return IsdkEditorTelemetryInstance;
}

void FIsdkEditorTelemetry::StartSession(bool bMetaXRPresent)
{
  FMetaXRIsdkEngineTelemetryModule& EngineTelemetryModule =
      FModuleManager::Get().GetModuleChecked<FMetaXRIsdkEngineTelemetryModule>(
          TEXT("MetaXRIsdkEngineTelemetry"));

  // We poll the EngineTelemetry DLL wrapper if it's been setup correctly, if not we return
  bTelemetryWrapperReady = EngineTelemetryModule.GetTelemetryWrapperReady();

  if (!bTelemetryWrapperReady)
  {
    UE_LOG(LogOculusInteractionEditorTelemetry, Display, TEXT("ISDK Editor Telemetry disabled"));
    return;
  }

  const bool bEmptyConsent =
      FMetaXRIsdkEngineTelemetryModule::ShouldPromptConsent(IsdkEngineTelemetry::UNREAL_TOOL_ID);
  const bool bShowPrivacyNotify =
      FMetaXRIsdkEngineTelemetryModule::ShouldShowNotification(IsdkEngineTelemetry::UNREAL_TOOL_ID);
  // Check if we need to prompt consent, but only if MetaXR plugin isn't present, as it will handle
  // it otherwise
  if (bEmptyConsent && !bMetaXRPresent)
  {
    char ConsentText[2048];
    FMetaXRIsdkEngineTelemetryModule::GetConsentMarkdownText(ConsentText);
    IsdkEditorTelemetryNotifications::SpawnFullConsent(ConsentText);
  }
  // Check if we need to show notification of telemetry usage
  else if (bShowPrivacyNotify && !bMetaXRPresent)
  {
    // Show notification
    char NotifyText[1024];
    FMetaXRIsdkEngineTelemetryModule::GetNotifyMarkdownText(
        "<a id=\"PrivacySettings\">Settings</>", NotifyText);
    IsdkEditorTelemetryNotifications::SpawnNotificationWindow(NotifyText);
    // Set that we've shown it
    FMetaXRIsdkEngineTelemetryModule::SetNotifyShown(IsdkEngineTelemetry::UNREAL_TOOL_ID);
  }

  // Create our hooks for EditorDelegates
  // Send session start event
  FMetaXRIsdkEngineTelemetryModule::SendUnifiedEvent(1, "ISDK_EditorSession_Start", "", "");

  // Opening a Map
  FEditorDelegates::OnMapOpened.AddLambda(
      [this](const FString& MapName, bool Unused)
      {
        // Send an event if they've opened a samples map
        if (MapName.Contains("OculusInteractionSamples/Content/Levels/"))
        {
          const FString BaseMapName = FPaths::GetBaseFilename(MapName);
          FMetaXRIsdkEngineTelemetryModule::SendUnifiedEvent(
              1, "ISDK_EditorSession_SampleMapOpen", TCHAR_TO_ANSI(*BaseMapName), "");
        }
        // Otherwise send a generic non-ISDK map signal
        else
        {
          FMetaXRIsdkEngineTelemetryModule::SendUnifiedEvent(
              1, "ISDK_EditorSession_CustomMapOpen", "", "");
        }
      });
}

void FIsdkEditorTelemetry::EndSession()
{
  FMetaXRIsdkEngineTelemetryModule::SendUnifiedEvent(1, "ISDK_EditorSession_End", "", "");
}

void FIsdkEditorTelemetry::HandleConsentEssentialClicked()
{
  FMetaXRIsdkEngineTelemetryModule::SaveUnifiedConsent(IsdkEngineTelemetry::UNREAL_TOOL_ID, false);
}

void FIsdkEditorTelemetry::HandleConsentAdditionalClicked()
{
  FMetaXRIsdkEngineTelemetryModule::SaveUnifiedConsent(IsdkEngineTelemetry::UNREAL_TOOL_ID, true);
}
