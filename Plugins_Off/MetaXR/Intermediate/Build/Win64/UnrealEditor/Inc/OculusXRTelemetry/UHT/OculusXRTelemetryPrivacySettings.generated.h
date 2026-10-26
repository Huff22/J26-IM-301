// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRTelemetryPrivacySettings.h"

#ifdef OCULUSXRTELEMETRY_OculusXRTelemetryPrivacySettings_generated_h
#error "OculusXRTelemetryPrivacySettings.generated.h already included, missing '#pragma once' in OculusXRTelemetryPrivacySettings.h"
#endif
#define OCULUSXRTELEMETRY_OculusXRTelemetryPrivacySettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXRTelemetryPrivacySettings ****************************************
OCULUSXRTELEMETRY_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRTelemetryPrivacySettings(); \
	friend struct Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRTELEMETRY_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRTelemetryPrivacySettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRTelemetry"), Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRTelemetryPrivacySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UOculusXRTelemetryPrivacySettings*>(this); }


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OCULUSXRTELEMETRY_API UOculusXRTelemetryPrivacySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRTelemetryPrivacySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OCULUSXRTELEMETRY_API, UOculusXRTelemetryPrivacySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRTelemetryPrivacySettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRTelemetryPrivacySettings(UOculusXRTelemetryPrivacySettings&&) = delete; \
	UOculusXRTelemetryPrivacySettings(const UOculusXRTelemetryPrivacySettings&) = delete; \
	OCULUSXRTELEMETRY_API virtual ~UOculusXRTelemetryPrivacySettings();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_10_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_13_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRTelemetryPrivacySettings;

// ********** End Class UOculusXRTelemetryPrivacySettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
