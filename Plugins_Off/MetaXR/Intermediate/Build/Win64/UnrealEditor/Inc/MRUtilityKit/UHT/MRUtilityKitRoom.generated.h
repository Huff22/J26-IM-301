// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitRoom.h"

#ifdef MRUTILITYKIT_MRUtilityKitRoom_generated_h
#error "MRUtilityKitRoom.generated.h already included, missing '#pragma once' in MRUtilityKitRoom.h"
#endif
#define MRUTILITYKIT_MRUtilityKitRoom_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FMRUKSpawnGroup;
class AActor;
class AMRUKAnchor;
class UMaterialInterface;
enum class EMRUKPositioningMethod : uint8;
enum class EMRUKSpawnLocation : uint8;
struct FMRUKAnchorWithPlaneUVs;
struct FMRUKHit;
struct FMRUKLabelFilter;
struct FMRUKTexCoordModes;
struct FRandomStream;

// ********** Begin ScriptStruct FMRUKAnchorWithPlaneUVs *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKAnchorWithPlaneUVs_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKAnchorWithPlaneUVs;
// ********** End ScriptStruct FMRUKAnchorWithPlaneUVs *********************************************

// ********** Begin ScriptStruct FMRUKRoomFace *****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKRoomFace_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKRoomFace;
// ********** End ScriptStruct FMRUKRoomFace *******************************************************

// ********** Begin Class UMRUKRoomMesh ************************************************************
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomMesh_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKRoomMesh(); \
	friend struct Z_Construct_UClass_UMRUKRoomMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKRoomMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKRoomMesh, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKRoomMesh_NoRegister) \
	DECLARE_SERIALIZER(UMRUKRoomMesh)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKRoomMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKRoomMesh(UMRUKRoomMesh&&) = delete; \
	UMRUKRoomMesh(const UMRUKRoomMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKRoomMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKRoomMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKRoomMesh) \
	NO_API virtual ~UMRUKRoomMesh();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_119_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_122_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKRoomMesh;

// ********** End Class UMRUKRoomMesh **************************************************************

// ********** Begin Delegate FOnAnchorUpdated ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_152_DELEGATE \
static void FOnAnchorUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorUpdated, AMRUKAnchor* Anchor);


// ********** End Delegate FOnAnchorUpdated ********************************************************

// ********** Begin Delegate FOnAnchorCreated ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_153_DELEGATE \
static void FOnAnchorCreated_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorCreated, AMRUKAnchor* Anchor);


// ********** End Delegate FOnAnchorCreated ********************************************************

// ********** Begin Delegate FOnAnchorRemoved ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_154_DELEGATE \
static void FOnAnchorRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnAnchorRemoved, AMRUKAnchor* Anchor);


// ********** End Delegate FOnAnchorRemoved ********************************************************

// ********** Begin Class AMRUKRoom ****************************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddAnchorToRoom); \
	DECLARE_FUNCTION(execComputeCentroid); \
	DECLARE_FUNCTION(execGenerateProceduralSceneMesh); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromJsonString); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromDevice); \
	DECLARE_FUNCTION(execComputeWallMeshUVAdjustments); \
	DECLARE_FUNCTION(execIsWallAnchor); \
	DECLARE_FUNCTION(execSpawnInteriorFromStream); \
	DECLARE_FUNCTION(execSpawnInterior); \
	DECLARE_FUNCTION(execAttachProceduralMeshToWalls); \
	DECLARE_FUNCTION(execGetLargestSurface); \
	DECLARE_FUNCTION(execGetKeyWall); \
	DECLARE_FUNCTION(execGetBestPoseFromRaycast); \
	DECLARE_FUNCTION(execGetFirstAnchorByLabel); \
	DECLARE_FUNCTION(execGetAnchorsByLabel); \
	DECLARE_FUNCTION(execTryGetClosestSeatPose); \
	DECLARE_FUNCTION(execIsPositionInSceneVolume); \
	DECLARE_FUNCTION(execTryGetClosestSurfacePosition); \
	DECLARE_FUNCTION(execDoesRoomHave); \
	DECLARE_FUNCTION(execClearRoom); \
	DECLARE_FUNCTION(execRaycastAll); \
	DECLARE_FUNCTION(execRaycast); \
	DECLARE_FUNCTION(execGenerateRandomPositionOnSurface); \
	DECLARE_FUNCTION(execGenerateRandomPositionInRoomFromStream); \
	DECLARE_FUNCTION(execGenerateRandomPositionInRoom); \
	DECLARE_FUNCTION(execIsPositionInRoom); \
	DECLARE_FUNCTION(execGetCeilingAnchor); \
	DECLARE_FUNCTION(execGetFloorAnchor); \
	DECLARE_FUNCTION(execGetRoomEdges);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKRoom(); \
	friend struct Z_Construct_UClass_AMRUKRoom_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKRoom, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKRoom_NoRegister) \
	DECLARE_SERIALIZER(AMRUKRoom)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKRoom(AMRUKRoom&&) = delete; \
	AMRUKRoom(const AMRUKRoom&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKRoom); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKRoom); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKRoom) \
	NO_API virtual ~AMRUKRoom();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_146_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKRoom;

// ********** End Class AMRUKRoom ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitRoom_h

// ********** Begin Enum EMRUKSpawnLocation ********************************************************
#define FOREACH_ENUM_EMRUKSPAWNLOCATION(op) \
	op(EMRUKSpawnLocation::Floating) \
	op(EMRUKSpawnLocation::AnySurface) \
	op(EMRUKSpawnLocation::VerticalSurfaces) \
	op(EMRUKSpawnLocation::OnTopOfSurface) \
	op(EMRUKSpawnLocation::HangingDown) 

enum class EMRUKSpawnLocation : uint8;
template<> struct TIsUEnumClass<EMRUKSpawnLocation> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnLocation>();
// ********** End Enum EMRUKSpawnLocation **********************************************************

// ********** Begin Enum EMRUKRoomFilter ***********************************************************
#define FOREACH_ENUM_EMRUKROOMFILTER(op) \
	op(EMRUKRoomFilter::None) \
	op(EMRUKRoomFilter::CurrentRoomOnly) \
	op(EMRUKRoomFilter::AllRooms) 

enum class EMRUKRoomFilter : uint8;
template<> struct TIsUEnumClass<EMRUKRoomFilter> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKRoomFilter>();
// ********** End Enum EMRUKRoomFilter *************************************************************

// ********** Begin Enum EMRUKPositioningMethod ****************************************************
#define FOREACH_ENUM_EMRUKPOSITIONINGMETHOD(op) \
	op(EMRUKPositioningMethod::Center) \
	op(EMRUKPositioningMethod::Edge) \
	op(EMRUKPositioningMethod::Default) 

enum class EMRUKPositioningMethod : uint8;
template<> struct TIsUEnumClass<EMRUKPositioningMethod> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKPositioningMethod>();
// ********** End Enum EMRUKPositioningMethod ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
