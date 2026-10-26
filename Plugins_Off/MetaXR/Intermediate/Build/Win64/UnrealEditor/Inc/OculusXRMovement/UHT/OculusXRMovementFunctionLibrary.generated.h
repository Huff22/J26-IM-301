// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMovementFunctionLibrary.h"

#ifdef OCULUSXRMOVEMENT_OculusXRMovementFunctionLibrary_generated_h
#error "OculusXRMovementFunctionLibrary.generated.h already included, missing '#pragma once' in OculusXRMovementFunctionLibrary.h"
#endif
#define OCULUSXRMOVEMENT_OculusXRMovementFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRBodyJointSet : uint8;
enum class EOculusXRBodyTrackingFidelity : uint8;
struct FOculusXRBodyState;
struct FOculusXREyeGazesState;
struct FOculusXRFaceState;
struct FOculusXRFaceVisemesState;

// ********** Begin Class UOculusXRMovementFunctionLibrary *****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopEyeTracking); \
	DECLARE_FUNCTION(execStartEyeTracking); \
	DECLARE_FUNCTION(execIsEyeTrackingSupported); \
	DECLARE_FUNCTION(execIsEyeTrackingEnabled); \
	DECLARE_FUNCTION(execTryGetEyeGazesState); \
	DECLARE_FUNCTION(execStopFaceTracking); \
	DECLARE_FUNCTION(execStartFaceTracking); \
	DECLARE_FUNCTION(execIsFaceTrackingSupported); \
	DECLARE_FUNCTION(execIsFaceTrackingEnabled); \
	DECLARE_FUNCTION(execTryGetFaceVisemesState); \
	DECLARE_FUNCTION(execSetFaceTrackingVisemesEnabled); \
	DECLARE_FUNCTION(execIsFaceTrackingVisemesEnabled); \
	DECLARE_FUNCTION(execIsFaceTrackingVisemesSupported); \
	DECLARE_FUNCTION(execTryGetFaceState); \
	DECLARE_FUNCTION(execStopBodyTracking); \
	DECLARE_FUNCTION(execStartBodyTracking); \
	DECLARE_FUNCTION(execStartBodyTrackingByJointSet); \
	DECLARE_FUNCTION(execSuggestBodyTrackingCalibrationOverride); \
	DECLARE_FUNCTION(execResetBodyTrackingCalibration); \
	DECLARE_FUNCTION(execRequestBodyTrackingFidelity); \
	DECLARE_FUNCTION(execIsBodyTrackingSupported); \
	DECLARE_FUNCTION(execIsBodyTrackingEnabled); \
	DECLARE_FUNCTION(execTryGetBodyState);


OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRMovementFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRMovementFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRMovement"), Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRMovementFunctionLibrary)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMovementFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRMovementFunctionLibrary(UOculusXRMovementFunctionLibrary&&) = delete; \
	UOculusXRMovementFunctionLibrary(const UOculusXRMovementFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMovementFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMovementFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMovementFunctionLibrary) \
	NO_API virtual ~UOculusXRMovementFunctionLibrary();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_10_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRMovementFunctionLibrary;

// ********** End Class UOculusXRMovementFunctionLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
