// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRMR_PlaneMeshComponent.h"

#ifdef OCULUSXRMR_OculusXRMR_PlaneMeshComponent_generated_h
#error "OculusXRMR_PlaneMeshComponent.generated.h already included, missing '#pragma once' in OculusXRMR_PlaneMeshComponent.h"
#endif
#define OCULUSXRMR_OculusXRMR_PlaneMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FOculusXRMR_PlaneMeshTriangle;

// ********** Begin ScriptStruct FOculusXRMR_PlaneMeshTriangle *************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRMR_PlaneMeshTriangle_Statics; \
	OCULUSXRMR_API static class UScriptStruct* StaticStruct();


struct FOculusXRMR_PlaneMeshTriangle;
// ********** End ScriptStruct FOculusXRMR_PlaneMeshTriangle ***************************************

// ********** Begin Class UOculusXRMR_PlaneMeshComponent *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_RPC_WRAPPERS \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUOculusXRMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRMR"), Z_Construct_UClass_UOculusXRMR_PlaneMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRMR_PlaneMeshComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRMR_PlaneMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRMR_PlaneMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRMR_PlaneMeshComponent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRMR_PlaneMeshComponent(UOculusXRMR_PlaneMeshComponent&&) = delete; \
	UOculusXRMR_PlaneMeshComponent(const UOculusXRMR_PlaneMeshComponent&) = delete; \
	NO_API virtual ~UOculusXRMR_PlaneMeshComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_38_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_RPC_WRAPPERS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_INCLASS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRMR_PlaneMeshComponent;

// ********** End Class UOculusXRMR_PlaneMeshComponent *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Private_OculusXRMR_PlaneMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
