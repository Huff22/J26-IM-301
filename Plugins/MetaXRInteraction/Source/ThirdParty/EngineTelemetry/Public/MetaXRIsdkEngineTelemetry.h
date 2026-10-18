// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogIsdkEngineTelemetry, Log, All);

namespace IsdkEngineTelemetry
{
    // Identifier for Unreal used by Unified Consent 
    constexpr int UNREAL_TOOL_ID = 2;
} // // namespace IsdkEngineTelemetry


/* Wrapper for the EngineTelemetry.dll utilized for managing Meta XR Unreal telemetry events and consent/privacy settings */
class METAXRISDKENGINETELEMETRY_API FMetaXRIsdkEngineTelemetryModule : public IModuleInterface
{
 public:
  /** IModuleInterface implementation */
  virtual void StartupModule() override;
  virtual void ShutdownModule() override;

  // Wrapper start up / shut down functions
  static void InitializeTelemetry();
  static void ShutDownTelemetry();

  // Returns the value of unified consent (true: essential+additional, false: just essential)
  static bool GetUnifiedConsent(int ToolID);

  // Saves a new unified consent value, which will store to be read by all Meta XR tools
  static bool SaveUnifiedConsent(int ToolID, bool bGivesConsent);

  // Whether or not we should prompt consent, normally this means there is no machine consent stored
  static bool ShouldPromptConsent(int ToolID);

  // Whether or not we should show a notification that we're using telemetry, normally only occurs if consent was given elsewhere but not used in this application before
  static bool ShouldShowNotification(int ToolID);

  // Send a telemetry event with the given parameters ("interaction_sdk" is hardcoded as ProductType)
  static bool SendUnifiedEvent(
      int bIsEssential,
      const char* EventName,
      const char* EventMetadataJson,
      const char* ProjectName = "",
      const char* EventEntrypoint = "",
      const char* ProjectGuid = "",
      const char* EventType = "",
      const char* EventTarget = "",
      const char* ErrorMsg = "",
      const char* bIsInternalBuild = "",
      const char* BatchMode = "");

  // Retrieve the consent text to use in the consent dialogue window (markdown format)
  static bool GetConsentMarkdownText(char* OutText);

  // Retrieve the notification text to use in the notification window (markdown format)
  static bool GetNotifyMarkdownText(const char* ChangeLocationText, char* OutText);

  // Retrieve the settings text to use in the Privacy Settings
  static bool GetSettingsChangedText(char* OutText);

  // Inform unified consent this application has shown a telemetry usage notification
  static bool SetNotifyShown(int ToolID);

  // Returns whether or not the DLL wrapper was setup successfully and is ready to be utilized
  bool GetTelemetryWrapperReady()
  {
    return bWrapperReady;
  }

 private:
  // Function types and pointers for DLL functions
  typedef void (*EngineTelemetryInitType)();
  typedef void (*EngineTelemetryShutDownType)();
  typedef bool (*EngineTelemetrySendEventType)(const char*, const char*, const char*);
  typedef bool (*EngineTelemetryGetUnifiedConsentType)(int);
  typedef bool (*EngineTelemetrySaveUnifiedConsentType)(int, bool);
  typedef bool (*EngineTelemetryShouldPromptConsentType)(int);
  typedef bool (*EngineTelemetryShouldShowNotificationType)(int);
  typedef bool (*EngineTelemetrySendUnifiedEventType)(
      int isEssential,
      const char* productType,
      const char* eventName,
      const char* event_metadata_json,
      const char* project_name,
      const char* event_entrypoint,
      const char* project_guid,
      const char* event_type,
      const char* event_target,
      const char* error_msg,
      const char* is_internal_build,
      const char* batch_mode);
  typedef bool (*EngineTelemetryGetConsentTextType)(char*);
  typedef bool (*EngineTelemetryGetNotifyTextType)(const char*, char*);
  typedef bool (*EngineTelemetryGetSettingsChangedTextType)(char*);
  typedef bool (*EngineTelemetrySetNotifyShownType)(int);

  static EngineTelemetryInitType EngineTelemetryInitialize;
  static EngineTelemetryShutDownType EngineTelemetryShutDown;
  static EngineTelemetryGetUnifiedConsentType EngineTelemetryGetUnifiedConsent;
  static EngineTelemetrySendUnifiedEventType EngineTelemetrySendUnifiedEvent;
  static EngineTelemetrySaveUnifiedConsentType EngineTelemetrySaveUnifiedConsent;
  static EngineTelemetryShouldPromptConsentType EngineTelemetryShouldPromptConsent;
  static EngineTelemetryShouldShowNotificationType EngineTelemetryShouldShowNotification;
  static EngineTelemetryGetConsentTextType EngineTelemetryGetConsentText;
  static EngineTelemetryGetNotifyTextType EngineTelemetryGetNotifyText;
  static EngineTelemetrySetNotifyShownType EngineTelemetrySetNotifyShown;
  static EngineTelemetryGetSettingsChangedTextType EngineTelemetryGetSettingsChangedText;


  void SetWrapperReady(bool bNewWrapperReady)
  {
    bWrapperReady = bNewWrapperReady;
  }

  bool bWrapperReady;
};
