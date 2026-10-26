// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPSTSettings.h"

#ifdef OCULUSXRPROJECTSETUPTOOL_OculusXRPSTSettings_generated_h
#error "OculusXRPSTSettings.generated.h already included, missing '#pragma once' in OculusXRPSTSettings.h"
#endif
#define OCULUSXRPROJECTSETUPTOOL_OculusXRPSTSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXRPSTSettings *****************************************************
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPSTSettings(); \
	friend struct Z_Construct_UClass_UOculusXRPSTSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRPSTSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPSTSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRProjectSetupTool"), Z_Construct_UClass_UOculusXRPSTSettings_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPSTSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRPSTSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPSTSettings(UOculusXRPSTSettings&&) = delete; \
	UOculusXRPSTSettings(const UOculusXRPSTSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPSTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPSTSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPSTSettings) \
	NO_API virtual ~UOculusXRPSTSettings();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_12_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPSTSettings;

// ********** End Class UOculusXRPSTSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRPSTSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
