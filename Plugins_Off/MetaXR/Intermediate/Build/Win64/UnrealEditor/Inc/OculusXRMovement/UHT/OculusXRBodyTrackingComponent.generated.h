// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRBodyTrackingComponent.h"

#ifdef OCULUSXRMOVEMENT_OculusXRBodyTrackingComponent_generated_h
#error "OculusXRBodyTrackingComponent.generated.h already included, missing '#pragma once' in OculusXRBodyTrackingComponent.h"
#endif
#define OCULUSXRMOVEMENT_OculusXRBodyTrackingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOculusXRBodyTrackingComponent *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAllBoneTransforms);


OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRBodyTrackingComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRBodyTrackingComponent(); \
	friend struct Z_Construct_UClass_UOculusXRBodyTrackingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRBodyTrackingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRBodyTrackingComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMovement"), Z_Construct_UClass_UOculusXRBodyTrackingComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRBodyTrackingComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRBodyTrackingComponent(UOculusXRBodyTrackingComponent&&) = delete; \
	UOculusXRBodyTrackingComponent(const UOculusXRBodyTrackingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRBodyTrackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRBodyTrackingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRBodyTrackingComponent) \
	NO_API virtual ~UOculusXRBodyTrackingComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_20_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRBodyTrackingComponent;

// ********** End Class UOculusXRBodyTrackingComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRBodyTrackingComponent_h

// ********** Begin Enum EOculusXRBodyTrackingMode *************************************************
#define FOREACH_ENUM_EOCULUSXRBODYTRACKINGMODE(op) \
	op(EOculusXRBodyTrackingMode::PositionAndRotation) \
	op(EOculusXRBodyTrackingMode::RotationOnly) \
	op(EOculusXRBodyTrackingMode::NoTracking) 

enum class EOculusXRBodyTrackingMode : uint8;
template<> struct TIsUEnumClass<EOculusXRBodyTrackingMode> { enum { Value = true }; };
template<> OCULUSXRMOVEMENT_API UEnum* StaticEnum<EOculusXRBodyTrackingMode>();
// ********** End Enum EOculusXRBodyTrackingMode ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
