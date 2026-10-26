// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKit.h"

#ifdef MRUTILITYKIT_MRUtilityKit_generated_h
#error "MRUtilityKit.generated.h already included, missing '#pragma once' in MRUtilityKit.h"
#endif
#define MRUTILITYKIT_MRUtilityKit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMRUKHit **********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKHit_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKHit;
// ********** End ScriptStruct FMRUKHit ************************************************************

// ********** Begin ScriptStruct FMRUKLabelFilter **************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKLabelFilter_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKLabelFilter;
// ********** End ScriptStruct FMRUKLabelFilter ****************************************************

// ********** Begin ScriptStruct FMRUKPlaneUV ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKPlaneUV_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKPlaneUV;
// ********** End ScriptStruct FMRUKPlaneUV ********************************************************

// ********** Begin ScriptStruct FMRUKTexCoordModes ************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKTexCoordModes_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKTexCoordModes;
// ********** End ScriptStruct FMRUKTexCoordModes **************************************************

// ********** Begin ScriptStruct FMRUKSpawnActor ***************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKSpawnActor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKSpawnActor;
// ********** End ScriptStruct FMRUKSpawnActor *****************************************************

// ********** Begin ScriptStruct FMRUKSpawnGroup ***************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_324_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKSpawnGroup_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKSpawnGroup;
// ********** End ScriptStruct FMRUKSpawnGroup *****************************************************

// ********** Begin ScriptStruct FMRUKEnvironmentRaycastHit ****************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h_445_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKEnvironmentRaycastHit_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMRUKEnvironmentRaycastHit;
// ********** End ScriptStruct FMRUKEnvironmentRaycastHit ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKit_h

// ********** Begin Enum EMRUKSceneModel ***********************************************************
#define FOREACH_ENUM_EMRUKSCENEMODEL(op) \
	op(EMRUKSceneModel::V1) \
	op(EMRUKSceneModel::V2) \
	op(EMRUKSceneModel::V2FallbackV1) 

enum class EMRUKSceneModel : uint8;
template<> struct TIsUEnumClass<EMRUKSceneModel> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSceneModel>();
// ********** End Enum EMRUKSceneModel *************************************************************

// ********** Begin Enum EMRUKInitStatus ***********************************************************
#define FOREACH_ENUM_EMRUKINITSTATUS(op) \
	op(EMRUKInitStatus::None) \
	op(EMRUKInitStatus::Busy) \
	op(EMRUKInitStatus::Complete) \
	op(EMRUKInitStatus::Failed) 

enum class EMRUKInitStatus : uint8;
template<> struct TIsUEnumClass<EMRUKInitStatus> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKInitStatus>();
// ********** End Enum EMRUKInitStatus *************************************************************

// ********** Begin Enum EMRUKCoordModeU ***********************************************************
#define FOREACH_ENUM_EMRUKCOORDMODEU(op) \
	op(EMRUKCoordModeU::Metric) \
	op(EMRUKCoordModeU::MetricSeamless) \
	op(EMRUKCoordModeU::MaintainAspectRatio) \
	op(EMRUKCoordModeU::MaintainAspectRatioSeamless) \
	op(EMRUKCoordModeU::Stretch) 

enum class EMRUKCoordModeU : uint8;
template<> struct TIsUEnumClass<EMRUKCoordModeU> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCoordModeU>();
// ********** End Enum EMRUKCoordModeU *************************************************************

// ********** Begin Enum EMRUKCoordModeV ***********************************************************
#define FOREACH_ENUM_EMRUKCOORDMODEV(op) \
	op(EMRUKCoordModeV::Metric) \
	op(EMRUKCoordModeV::MaintainAspectRatio) \
	op(EMRUKCoordModeV::Stretch) 

enum class EMRUKCoordModeV : uint8;
template<> struct TIsUEnumClass<EMRUKCoordModeV> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCoordModeV>();
// ********** End Enum EMRUKCoordModeV *************************************************************

// ********** Begin Enum EMRUKSpawnerSelectionMode *************************************************
#define FOREACH_ENUM_EMRUKSPAWNERSELECTIONMODE(op) \
	op(EMRUKSpawnerSelectionMode::Random) \
	op(EMRUKSpawnerSelectionMode::ClosestSize) \
	op(EMRUKSpawnerSelectionMode::Custom) 

enum class EMRUKSpawnerSelectionMode : uint8;
template<> struct TIsUEnumClass<EMRUKSpawnerSelectionMode> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnerSelectionMode>();
// ********** End Enum EMRUKSpawnerSelectionMode ***************************************************

// ********** Begin Enum EMRUKSpawnerScalingMode ***************************************************
#define FOREACH_ENUM_EMRUKSPAWNERSCALINGMODE(op) \
	op(EMRUKSpawnerScalingMode::Stretch) \
	op(EMRUKSpawnerScalingMode::UniformScaling) \
	op(EMRUKSpawnerScalingMode::UniformXYScale) \
	op(EMRUKSpawnerScalingMode::NoScaling) \
	op(EMRUKSpawnerScalingMode::Custom) 

enum class EMRUKSpawnerScalingMode : uint8;
template<> struct TIsUEnumClass<EMRUKSpawnerScalingMode> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnerScalingMode>();
// ********** End Enum EMRUKSpawnerScalingMode *****************************************************

// ********** Begin Enum EMRUKAlignMode ************************************************************
#define FOREACH_ENUM_EMRUKALIGNMODE(op) \
	op(EMRUKAlignMode::None) \
	op(EMRUKAlignMode::Default) \
	op(EMRUKAlignMode::CenterOnCenter) \
	op(EMRUKAlignMode::BottomOnBottom) \
	op(EMRUKAlignMode::TopOnTop) \
	op(EMRUKAlignMode::LeftOnLeft) \
	op(EMRUKAlignMode::RightOnRight) \
	op(EMRUKAlignMode::FrontOnFront) \
	op(EMRUKAlignMode::BackOnBack) \
	op(EMRUKAlignMode::BottomOnTop) \
	op(EMRUKAlignMode::TopOnBottom) \
	op(EMRUKAlignMode::LeftOnRight) \
	op(EMRUKAlignMode::RightOnLeft) \
	op(EMRUKAlignMode::FrontOnBack) \
	op(EMRUKAlignMode::BackOnFront) \
	op(EMRUKAlignMode::Custom) 

enum class EMRUKAlignMode : uint8;
template<> struct TIsUEnumClass<EMRUKAlignMode> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKAlignMode>();
// ********** End Enum EMRUKAlignMode **************************************************************

// ********** Begin Enum EMRUKComponentType ********************************************************
#define FOREACH_ENUM_EMRUKCOMPONENTTYPE(op) \
	op(EMRUKComponentType::None) \
	op(EMRUKComponentType::Plane) \
	op(EMRUKComponentType::Volume) \
	op(EMRUKComponentType::Mesh) \
	op(EMRUKComponentType::All) 

enum class EMRUKComponentType;
template<> struct TIsUEnumClass<EMRUKComponentType> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKComponentType>();
// ********** End Enum EMRUKComponentType **********************************************************

// ********** Begin Enum EMRUKFallbackToProceduralOverwrite ****************************************
#define FOREACH_ENUM_EMRUKFALLBACKTOPROCEDURALOVERWRITE(op) \
	op(EMRUKFallbackToProceduralOverwrite::Default) \
	op(EMRUKFallbackToProceduralOverwrite::Fallback) \
	op(EMRUKFallbackToProceduralOverwrite::NoFallback) 

enum class EMRUKFallbackToProceduralOverwrite : uint8;
template<> struct TIsUEnumClass<EMRUKFallbackToProceduralOverwrite> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKFallbackToProceduralOverwrite>();
// ********** End Enum EMRUKFallbackToProceduralOverwrite ******************************************

// ********** Begin Enum EMRUKSpawnMode ************************************************************
#define FOREACH_ENUM_EMRUKSPAWNMODE(op) \
	op(EMRUKSpawnMode::None) \
	op(EMRUKSpawnMode::CurrentRoomOnly) \
	op(EMRUKSpawnMode::AllRooms) 

enum class EMRUKSpawnMode : uint8;
template<> struct TIsUEnumClass<EMRUKSpawnMode> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKSpawnMode>();
// ********** End Enum EMRUKSpawnMode **************************************************************

// ********** Begin Enum EMRUKEnvironmentRaycastHitStatus ******************************************
#define FOREACH_ENUM_EMRUKENVIRONMENTRAYCASTHITSTATUS(op) \
	op(EMRUKEnvironmentRaycastHitStatus::Hit) \
	op(EMRUKEnvironmentRaycastHitStatus::NoHit) \
	op(EMRUKEnvironmentRaycastHitStatus::HitPointOccluded) \
	op(EMRUKEnvironmentRaycastHitStatus::HitPointOutsideFov) \
	op(EMRUKEnvironmentRaycastHitStatus::RayOccluded) \
	op(EMRUKEnvironmentRaycastHitStatus::Failure) 

enum class EMRUKEnvironmentRaycastHitStatus : uint8;
template<> struct TIsUEnumClass<EMRUKEnvironmentRaycastHitStatus> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKEnvironmentRaycastHitStatus>();
// ********** End Enum EMRUKEnvironmentRaycastHitStatus ********************************************

// ********** Begin Enum EMRUKEnvironmentRaycasterStatus *******************************************
#define FOREACH_ENUM_EMRUKENVIRONMENTRAYCASTERSTATUS(op) \
	op(EMRUKEnvironmentRaycasterStatus::Stopped) \
	op(EMRUKEnvironmentRaycasterStatus::Creating) \
	op(EMRUKEnvironmentRaycasterStatus::Ready) 

enum class EMRUKEnvironmentRaycasterStatus : uint8;
template<> struct TIsUEnumClass<EMRUKEnvironmentRaycasterStatus> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKEnvironmentRaycasterStatus>();
// ********** End Enum EMRUKEnvironmentRaycasterStatus *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
