// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMRFunctionLibrary.h"

#ifdef OCULUSXRMR_OculusXRMRFunctionLibrary_generated_h
#error "OculusXRMRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRMRFunctionLibrary.h"
#endif
#define OCULUSXRMR_OculusXRMRFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOculusXRMR_Settings;
class USceneComponent;

// ********** Begin Class UOculusXRMRFunctionLibrary ***********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusXRMRSettings);


OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMR"), Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRMRFunctionLibrary)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMRFunctionLibrary); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRMRFunctionLibrary(UOculusXRMRFunctionLibrary&&) = delete; \
	UOculusXRMRFunctionLibrary(const UOculusXRMRFunctionLibrary&) = delete; \
	NO_API virtual ~UOculusXRMRFunctionLibrary();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_18_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_RPC_WRAPPERS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRMRFunctionLibrary;

// ********** End Class UOculusXRMRFunctionLibrary *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
