// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorTelemetry/IsdkTelemetryPrivacySettings.h"

#ifdef OCULUSINTERACTIONEDITOR_IsdkTelemetryPrivacySettings_generated_h
#error "IsdkTelemetryPrivacySettings.generated.h already included, missing '#pragma once' in IsdkTelemetryPrivacySettings.h"
#endif
#define OCULUSINTERACTIONEDITOR_IsdkTelemetryPrivacySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkTelemetryPrivacySettings ********************************************
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUIsdkTelemetryPrivacySettings(); \
	friend struct Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkTelemetryPrivacySettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionEditor"), Z_Construct_UClass_UIsdkTelemetryPrivacySettings_NoRegister) \
	DECLARE_SERIALIZER(UIsdkTelemetryPrivacySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkTelemetryPrivacySettings*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OCULUSINTERACTIONEDITOR_API UIsdkTelemetryPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkTelemetryPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OCULUSINTERACTIONEDITOR_API, UIsdkTelemetryPrivacySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkTelemetryPrivacySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkTelemetryPrivacySettings(UIsdkTelemetryPrivacySettings&&) = delete; \
	UIsdkTelemetryPrivacySettings(const UIsdkTelemetryPrivacySettings&) = delete; \
	OCULUSINTERACTIONEDITOR_API virtual ~UIsdkTelemetryPrivacySettings();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_31_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_34_INCLASS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkTelemetryPrivacySettings;

// ********** End Class UIsdkTelemetryPrivacySettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
