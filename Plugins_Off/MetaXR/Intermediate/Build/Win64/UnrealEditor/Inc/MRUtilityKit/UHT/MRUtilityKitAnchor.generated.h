// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitAnchor.h"

#ifdef MRUTILITYKIT_MRUtilityKitAnchor_generated_h
#error "MRUtilityKitAnchor.generated.h already included, missing '#pragma once' in MRUtilityKitAnchor.h"
#endif
#define MRUTILITYKIT_MRUtilityKitAnchor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UMaterialInterface;
class UProceduralMeshComponent;
enum class EMRUKSpawnerScalingMode : uint8;
struct FMRUKHit;
struct FMRUKLabelFilter;
struct FMRUKPlaneUV;
struct FRandomStream;

// ********** Begin Class AMRUKAnchor **************************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnInterior); \
	DECLARE_FUNCTION(execGetFacingDirection); \
	DECLARE_FUNCTION(execIsPositionInVolumeBounds); \
	DECLARE_FUNCTION(execGetClosestSurfacePosition); \
	DECLARE_FUNCTION(execPassesLabelFilter); \
	DECLARE_FUNCTION(execHasAnyLabel); \
	DECLARE_FUNCTION(execHasLabel); \
	DECLARE_FUNCTION(execGenerateProceduralAnchorMesh); \
	DECLARE_FUNCTION(execAttachProceduralMesh); \
	DECLARE_FUNCTION(execRaycastAll); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execGenerateRandomPositionOnPlaneFromStream); \
	DECLARE_FUNCTION(execGenerateRandomPositionOnPlane); \
	DECLARE_FUNCTION(execIsPositionInBoundary);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKAnchor(); \
	friend struct Z_Construct_UClass_AMRUKAnchor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKAnchor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKAnchor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKAnchor_NoRegister) \
	DECLARE_SERIALIZER(AMRUKAnchor)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKAnchor(AMRUKAnchor&&) = delete; \
	AMRUKAnchor(const AMRUKAnchor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKAnchor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKAnchor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKAnchor) \
	NO_API virtual ~AMRUKAnchor();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_23_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKAnchor;

// ********** End Class AMRUKAnchor ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitAnchor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
