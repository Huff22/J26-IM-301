// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitSeatsComponent.h"

#ifdef MRUTILITYKIT_MRUtilityKitSeatsComponent_generated_h
#error "MRUtilityKitSeatsComponent.generated.h already included, missing '#pragma once' in MRUtilityKitSeatsComponent.h"
#endif
#define MRUTILITYKIT_MRUtilityKitSeatsComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMRUKSeatsComponent ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateSeatPoses);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKSeatsComponent(); \
	friend struct Z_Construct_UClass_UMRUKSeatsComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSeatsComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKSeatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKSeatsComponent_NoRegister) \
	DECLARE_SERIALIZER(UMRUKSeatsComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKSeatsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKSeatsComponent(UMRUKSeatsComponent&&) = delete; \
	UMRUKSeatsComponent(const UMRUKSeatsComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKSeatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKSeatsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKSeatsComponent) \
	NO_API virtual ~UMRUKSeatsComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_13_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKSeatsComponent;

// ********** End Class UMRUKSeatsComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSeatsComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
