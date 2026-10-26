// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "MetaXRIsdkEngineTelemetry.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/App.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

IMPLEMENT_MODULE(FMetaXRIsdkEngineTelemetryModule, MetaXRIsdkEngineTelemetry)
DEFINE_LOG_CATEGORY(LogIsdkEngineTelemetry);

FMetaXRIsdkEngineTelemetryModule::EngineTelemetryInitType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryInitialize = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShutDownType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShutDown = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetUnifiedConsentType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetUnifiedConsent = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySendUnifiedEventType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySendUnifiedEvent = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySaveUnifiedConsentType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySaveUnifiedConsent = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShouldPromptConsentType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShouldPromptConsent = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetConsentTextType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetConsentText = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetNotifyTextType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetNotifyText = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShouldShowNotificationType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryShouldShowNotification = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySetNotifyShownType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetrySetNotifyShown = nullptr;
FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetSettingsChangedTextType
    FMetaXRIsdkEngineTelemetryModule::EngineTelemetryGetSettingsChangedText = nullptr;

void FMetaXRIsdkEngineTelemetryModule::StartupModule()
{
#if PLATFORM_WINDOWS
  const FString BaseDir = IPluginManager::Get().FindPlugin("OculusInteraction")->GetBaseDir();
  const FString DllPath = FPaths::Combine(
      *BaseDir, TEXT("Source/Thirdparty/EngineTelemetry/lib/Win64/EngineTelemetry.dll"));
  void* DllHandle = FPlatformProcess::GetDllHandle(*DllPath);




  if (DllHandle)
  {
    UE_LOG(LogIsdkEngineTelemetry, Log, TEXT("Loaded EngineTelemetry dll"));

    EngineTelemetryInitialize = (EngineTelemetryInitType)FPlatformProcess::GetDllExport(
        DllHandle, TEXT("engineTelemetry_Init"));
    EngineTelemetryShutDown = (EngineTelemetryShutDownType)FPlatformProcess::GetDllExport(
        DllHandle, TEXT("engineTelemetry_ShutDown"));
    EngineTelemetryGetUnifiedConsent =
        (EngineTelemetryGetUnifiedConsentType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_GetUnifiedConsent"));
    EngineTelemetrySendUnifiedEvent =
        (EngineTelemetrySendUnifiedEventType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_SendUnifiedEvent"));
    EngineTelemetrySaveUnifiedConsent =
        (EngineTelemetrySaveUnifiedConsentType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_SaveUnifiedConsent"));
    EngineTelemetryShouldPromptConsent =
        (EngineTelemetryShouldPromptConsentType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_ShouldShowTelemetryConsentWindow"));
    EngineTelemetryShouldShowNotification =
        (EngineTelemetryShouldShowNotificationType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_ShouldShowTelemetryNotification"));
    EngineTelemetryGetConsentText =
        (EngineTelemetryGetConsentTextType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_GetConsentMarkdownText"));
    EngineTelemetryGetNotifyText =
        (EngineTelemetryGetNotifyTextType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_GetConsentNotificationMarkdownText"));
    EngineTelemetrySetNotifyShown =
        (EngineTelemetrySetNotifyShownType)FPlatformProcess::GetDllExport(
            DllHandle, TEXT("engineTelemetry_SetNotificationShown"));
    EngineTelemetryGetSettingsChangedText =
        (EngineTelemetryGetSettingsChangedTextType)
        FPlatformProcess::GetDllExport(DllHandle, TEXT("engineTelemetry_GetConsentSettingsChangeText"));

    if (EngineTelemetryInitialize && EngineTelemetryShutDown && EngineTelemetryGetUnifiedConsent &&
        EngineTelemetrySendUnifiedEvent && EngineTelemetrySaveUnifiedConsent &&
        EngineTelemetryShouldPromptConsent && EngineTelemetryShouldShowNotification &&
        EngineTelemetryGetConsentText && EngineTelemetrySetNotifyShown &&
        EngineTelemetryGetNotifyText && EngineTelemetryGetSettingsChangedText)
    {
      SetWrapperReady(true);
      InitializeTelemetry();
    }
    else
    {
      UE_LOG(
          LogIsdkEngineTelemetry,
          Warning,
          TEXT("StartupModule() - Failed to bind one or more library functions, telemetry unavailable"));
      SetWrapperReady(false);
    }
  }
  else
  {
    // The wrapper should fail elegantly if the DLL is not found, as the developer may remove it or it not be included in the package for whatever reason. No errors should be thrown as this will disrupt packaging.
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("StartupModule() - Failed to load EngineTelemetry.dll, telemetry unavailable"));
    SetWrapperReady(false);
  }
#endif
}

void FMetaXRIsdkEngineTelemetryModule::ShutdownModule()
{
#if PLATFORM_WINDOWS
  ShutDownTelemetry();
  EngineTelemetryInitialize = nullptr;
  EngineTelemetryShutDown = nullptr;
  EngineTelemetryGetUnifiedConsent = nullptr;
  EngineTelemetrySendUnifiedEvent = nullptr;
  EngineTelemetrySaveUnifiedConsent = nullptr;
  EngineTelemetryShouldPromptConsent = nullptr;
  EngineTelemetryShouldShowNotification = nullptr;
  EngineTelemetryGetConsentText = nullptr;
  EngineTelemetryGetNotifyText = nullptr;
  EngineTelemetrySetNotifyShown = nullptr;
  EngineTelemetryGetSettingsChangedText = nullptr;

#endif
}

void FMetaXRIsdkEngineTelemetryModule::InitializeTelemetry()
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryInitialize)
  {
    EngineTelemetryInitialize();
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("InitializeTelemetry() - Initialize library function not bound."));
  }
#endif
}

void FMetaXRIsdkEngineTelemetryModule::ShutDownTelemetry()
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryShutDown)
  {
    EngineTelemetryShutDown();
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("ShutDownTelemetry() - ShutDown library function not bound."));
  }
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::GetUnifiedConsent(int ConsentType)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryGetUnifiedConsent)
  {
    return EngineTelemetryGetUnifiedConsent(ConsentType);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("GetUnifiedConsent() - GetUnifiedConsent function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::SendUnifiedEvent(
    int bIsEssential,
    const char* EventName,
    const char* EventMetadataJson,
    const char* ProjectName,
    const char* EventEntrypoint,
    const char* ProjectGuid,
    const char* EventType,
    const char* EventTarget,
    const char* ErrorMsg,
    const char* bIsInternalBuild,
    const char* BatchMode)
{
#if PLATFORM_WINDOWS
  const char* ProjectNameCStr = ProjectName;
  if (ProjectNameCStr == nullptr || ProjectNameCStr[0] == '\0')
  {
    FString ProjectNameStr = FApp::GetProjectName();
    ProjectNameCStr = TCHAR_TO_UTF8(*ProjectNameStr);
  }

  if (EngineTelemetrySendUnifiedEvent)
  {
    return EngineTelemetrySendUnifiedEvent(
        bIsEssential,
        "interaction_sdk",
        EventName,
        EventMetadataJson,
        ProjectNameCStr,
        EventEntrypoint,
        ProjectGuid,
        EventType,
        EventTarget,
        ErrorMsg,
        bIsInternalBuild,
        BatchMode);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("SendUnifiedEvent() - SendUnifiedEvent function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::SaveUnifiedConsent(int ToolID, bool bGivesConsent)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetrySaveUnifiedConsent)
  {
    return EngineTelemetrySaveUnifiedConsent(ToolID, bGivesConsent);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("SaveUnifiedConsent() - SaveUnifiedConsent function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::ShouldPromptConsent(int ToolID)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryShouldPromptConsent)
  {
    return EngineTelemetryShouldPromptConsent(ToolID);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("ShouldPromptConsent() - ShouldPromptConsent function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::ShouldShowNotification(int ToolID)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryShouldShowNotification)
  {
    return EngineTelemetryShouldShowNotification(ToolID);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("EngineTelemetryShouldShowNotification() - EngineTelemetryShouldShowNotification function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::GetConsentMarkdownText(char* OutText)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryGetConsentText)
  {
    return EngineTelemetryGetConsentText(OutText);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("GetConsentText() - GetConsentText function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::GetNotifyMarkdownText(
    const char* ChangeLocationText,
    char* OutText)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryGetNotifyText)
  {
    return EngineTelemetryGetNotifyText(ChangeLocationText, OutText);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("GetNotifyText() - GetNotifyText function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::GetSettingsChangedText(char* OutText)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetryGetSettingsChangedText)
  {
    return EngineTelemetryGetSettingsChangedText(OutText);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("GetSettingsChangedText() - GetSettingsChangedText function not bound."));
    return false;
  }
#else
  return false;
#endif
}

bool FMetaXRIsdkEngineTelemetryModule::SetNotifyShown(int ToolID)
{
#if PLATFORM_WINDOWS
  if (EngineTelemetrySetNotifyShown)
  {
    return EngineTelemetrySetNotifyShown(ToolID);
  }
  else
  {
    UE_LOG(
        LogIsdkEngineTelemetry,
        Warning,
        TEXT("SetNotifyShown() - SetNotifyShown function not bound."));
    return false;
  }
#else
  return false;
#endif
}
