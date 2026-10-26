// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRFaceTrackingComponent.h"

#ifdef OCULUSXRMOVEMENT_OculusXRFaceTrackingComponent_generated_h
#error "OculusXRFaceTrackingComponent.generated.h already included, missing '#pragma once' in OculusXRFaceTrackingComponent.h"
#endif
#define OCULUSXRMOVEMENT_OculusXRFaceTrackingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRFaceExpression : uint8;

// ********** Begin Class UOculusXRFaceTrackingComponent *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearExpressionValues); \
	DECLARE_FUNCTION(execGetExpressionValue); \
	DECLARE_FUNCTION(execSetExpressionValue);


OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRFaceTrackingComponent(); \
	friend struct Z_Construct_UClass_UOculusXRFaceTrackingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRFaceTrackingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRFaceTrackingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMovement"), Z_Construct_UClass_UOculusXRFaceTrackingComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRFaceTrackingComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRFaceTrackingComponent(UOculusXRFaceTrackingComponent&&) = delete; \
	UOculusXRFaceTrackingComponent(const UOculusXRFaceTrackingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRFaceTrackingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRFaceTrackingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRFaceTrackingComponent) \
	NO_API virtual ~UOculusXRFaceTrackingComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_12_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRFaceTrackingComponent;

// ********** End Class UOculusXRFaceTrackingComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRFaceTrackingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
