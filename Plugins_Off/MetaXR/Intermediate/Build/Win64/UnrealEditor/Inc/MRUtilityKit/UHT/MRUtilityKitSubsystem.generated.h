// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitSubsystem.h"

#ifdef MRUTILITYKIT_MRUtilityKitSubsystem_generated_h
#error "MRUtilityKitSubsystem.generated.h already included, missing '#pragma once' in MRUtilityKitSubsystem.h"
#endif
#define MRUTILITYKIT_MRUtilityKitSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FMRUKSpawnGroup;
class AActor;
class AMRUKAnchor;
class AMRUKRoom;
class UMaterialInterface;
enum class EMRUKEnvironmentRaycasterStatus : uint8;
enum class EMRUKPositioningMethod : uint8;
enum class EMRUKSceneModel : uint8;
struct FMRUKEnvironmentRaycastHit;
struct FMRUKHit;
struct FMRUKLabelFilter;
struct FOculusXRUInt64;
struct FRandomStream;

// ********** Begin Delegate FOnLoaded *************************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_43_DELEGATE \
static void FOnLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnLoaded, bool Success);


// ********** End Delegate FOnLoaded ***************************************************************

// ********** Begin Delegate FOnCaptureComplete ****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_44_DELEGATE \
static void FOnCaptureComplete_DelegateWrapper(const FMulticastScriptDelegate& OnCaptureComplete, bool Success);


// ********** End Delegate FOnCaptureComplete ******************************************************

// ********** Begin Delegate FOnRoomCreated ********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_45_DELEGATE \
static void FOnRoomCreated_DelegateWrapper(const FMulticastScriptDelegate& OnRoomCreated, AMRUKRoom* Room);


// ********** End Delegate FOnRoomCreated **********************************************************

// ********** Begin Delegate FOnRoomUpdated ********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_46_DELEGATE \
static void FOnRoomUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnRoomUpdated, AMRUKRoom* Room);


// ********** End Delegate FOnRoomUpdated **********************************************************

// ********** Begin Delegate FOnRoomRemoved ********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_47_DELEGATE \
static void FOnRoomRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnRoomRemoved, AMRUKRoom* Room);


// ********** End Delegate FOnRoomRemoved **********************************************************

// ********** Begin Class UMRUKSubsystem ***********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSceneCaptureComplete); \
	DECLARE_FUNCTION(execRaycastEnvironment); \
	DECLARE_FUNCTION(execEnvironmentRaycasterStatus); \
	DECLARE_FUNCTION(execDestroyEnvironmentRaycaster); \
	DECLARE_FUNCTION(execCreateEnvironmentRaycaster); \
	DECLARE_FUNCTION(execLaunchSceneCapture); \
	DECLARE_FUNCTION(execSpawnInteriorFromStream); \
	DECLARE_FUNCTION(execSpawnInterior); \
	DECLARE_FUNCTION(execIsPositionInSceneVolume); \
	DECLARE_FUNCTION(execGetLargestSurface); \
	DECLARE_FUNCTION(execGetKeyWall); \
	DECLARE_FUNCTION(execGetBestPoseFromRaycast); \
	DECLARE_FUNCTION(execTryGetClosestSeatPose); \
	DECLARE_FUNCTION(execTryGetClosestSurfacePosition); \
	DECLARE_FUNCTION(execClearScene); \
	DECLARE_FUNCTION(execLoadSceneFromDevice); \
	DECLARE_FUNCTION(execLoadSceneFromJsonString); \
	DECLARE_FUNCTION(execSaveSceneToJsonString); \
	DECLARE_FUNCTION(execGetCurrentRoom); \
	DECLARE_FUNCTION(execRaycastAll); \
	DECLARE_FUNCTION(execRaycast);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKSubsystem(); \
	friend struct Z_Construct_UClass_UMRUKSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMRUKSubsystem)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKSubsystem(UMRUKSubsystem&&) = delete; \
	UMRUKSubsystem(const UMRUKSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMRUKSubsystem) \
	NO_API virtual ~UMRUKSubsystem();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_37_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKSubsystem;

// ********** End Class UMRUKSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
