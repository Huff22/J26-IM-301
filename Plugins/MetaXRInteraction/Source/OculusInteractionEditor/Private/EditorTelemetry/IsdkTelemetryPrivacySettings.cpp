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

#include "IsdkTelemetryPrivacySettings.h"
#include "Style/IsdkSettingsToggle.h"
#include "MetaXRIsdkEngineTelemetry.h"
#include "EditorTelemetry/IsdkEditorTelemetry.h"

#include <regex>

#define LOCTEXT_NAMESPACE "IsdkTelemetryPrivacySettings"

constexpr int CONSENT_NOTIFICATION_MAX_LENGTH = 1024;
TMap<FString, FString> GetLinks(const std::string& markdown, std::string& textWithoutLink)
{
  TMap<FString, FString> links;
  const std::regex linkRegex(R"(\[(.*?)\]\((.*?)\))");

  std::smatch matches;
  std::string::const_iterator searchStart(markdown.cbegin());
  while (std::regex_search(searchStart, markdown.cend(), matches, linkRegex))
  {
    links.Add(matches[1].str().c_str(), matches[2].str().c_str());
    searchStart = matches.suffix().first;
  }

  const std::string linkReplacement = "";
  textWithoutLink = std::regex_replace(markdown, linkRegex, linkReplacement);
  return links;
}

UIsdkTelemetryPrivacySettings::UIsdkTelemetryPrivacySettings(
    const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
  bIsEnabled =
      FMetaXRIsdkEngineTelemetryModule::GetUnifiedConsent(IsdkEngineTelemetry::UNREAL_TOOL_ID);

  char SettingsText[1024];

  FMetaXRIsdkEngineTelemetryModule::GetSettingsChangedText(SettingsText);

  std::string settingsDesc = "";
  Links = GetLinks(SettingsText, settingsDesc);
  Description = FText::FromString(settingsDesc.c_str());
}

void UIsdkTelemetryPrivacySettings::GetToggleCategoryAndPropertyNames(
    FName& OutCategory,
    FName& OutProperty) const
{
  OutCategory = FName("Options");
  OutProperty = FName("bIsEnabled");
}

FText UIsdkTelemetryPrivacySettings::GetFalseStateLabel() const
{
  return LOCTEXT("FalseStateLabel", "Only share essential data");
}

FText UIsdkTelemetryPrivacySettings::GetFalseStateTooltip() const
{
  return LOCTEXT("FalseStateTooltip", "Only share essential data");
}

FText UIsdkTelemetryPrivacySettings::GetFalseStateDescription() const
{
  return Description;
}

FText UIsdkTelemetryPrivacySettings::GetTrueStateLabel() const
{
  return LOCTEXT("TrueStateLabel", "Share additional data");
}

FText UIsdkTelemetryPrivacySettings::GetTrueStateTooltip() const
{
  return LOCTEXT("TrueStateTooltip", "Share additional data");
}

FText UIsdkTelemetryPrivacySettings::GetTrueStateDescription() const
{
  return Description;
}

FString UIsdkTelemetryPrivacySettings::GetAdditionalInfoUrl() const
{
  if (Links.Num() > 0)
  {
    return Links.begin().Value();
  }
  return FString();
}

FText UIsdkTelemetryPrivacySettings::GetAdditionalInfoUrlLabel() const
{
  if (Links.Num() > 0)
  {
    return FText::FromString(Links.begin().Key());
  }
  return FText();
}

#if WITH_EDITOR
void UIsdkTelemetryPrivacySettings::PostEditChangeProperty(
    struct FPropertyChangedEvent& PropertyChangedEvent)
{
  Super::PostEditChangeProperty(PropertyChangedEvent);

  const FName PropertyName = (PropertyChangedEvent.Property != nullptr)
      ? PropertyChangedEvent.Property->GetFName()
      : NAME_None;
  if (PropertyName == GET_MEMBER_NAME_CHECKED(UIsdkTelemetryPrivacySettings, bIsEnabled))
  {
    FMetaXRIsdkEngineTelemetryModule::SaveUnifiedConsent(
        IsdkEngineTelemetry::UNREAL_TOOL_ID, bIsEnabled);
  }
}
#endif

#undef LOCTEXT_NAMESPACE
