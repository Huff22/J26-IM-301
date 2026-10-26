// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRHMDRuntimeSettings.h"

#ifdef OCULUSXRHMD_OculusXRHMDRuntimeSettings_generated_h
#error "OculusXRHMDRuntimeSettings.generated.h already included, missing '#pragma once' in OculusXRHMDRuntimeSettings.h"
#endif
#define OCULUSXRHMD_OculusXRHMDRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXRHMDRuntimeSettings **********************************************
#if WITH_EDITOR
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execGetMetaXRSimulatorInstalledVersions);
#else // WITH_EDITOR
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRHMDRuntimeSettings(); \
	friend struct Z_Construct_UClass_UOculusXRHMDRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRHMDRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRHMDRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRHMD"), Z_Construct_UClass_UOculusXRHMDRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRHMDRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRHMDRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRHMDRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRHMDRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRHMDRuntimeSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRHMDRuntimeSettings(UOculusXRHMDRuntimeSettings&&) = delete; \
	UOculusXRHMDRuntimeSettings(const UOculusXRHMDRuntimeSettings&) = delete; \
	NO_API virtual ~UOculusXRHMDRuntimeSettings();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_26_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_RPC_WRAPPERS_EOD \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRHMDRuntimeSettings;

// ********** End Class UOculusXRHMDRuntimeSettings ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRHMDRuntimeSettings_h

// ********** Begin Enum EOculusXRSupportedDevices *************************************************
#define FOREACH_ENUM_EOCULUSXRSUPPORTEDDEVICES(op) \
	op(EOculusXRSupportedDevices::Quest2) \
	op(EOculusXRSupportedDevices::QuestPro) \
	op(EOculusXRSupportedDevices::Quest3) \
	op(EOculusXRSupportedDevices::Quest3S) 

enum class EOculusXRSupportedDevices : uint8;
template<> struct TIsUEnumClass<EOculusXRSupportedDevices> { enum { Value = true }; };
template<> OCULUSXRHMD_API UEnum* StaticEnum<EOculusXRSupportedDevices>();
// ********** End Enum EOculusXRSupportedDevices ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
