// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitDistanceMapGenerator.h"

#ifdef MRUTILITYKIT_MRUtilityKitDistanceMapGenerator_generated_h
#error "MRUtilityKitDistanceMapGenerator.generated.h already included, missing '#pragma once' in MRUtilityKitDistanceMapGenerator.h"
#endif
#define MRUTILITYKIT_MRUtilityKitDistanceMapGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AMRUKAnchor;
class AMRUKRoom;
class UCanvasRenderTarget2D;
class UTexture;
struct FMinimalViewInfo;

// ********** Begin Delegate FOnReady **************************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_49_DELEGATE \
static void FOnReady_DelegateWrapper(const FMulticastScriptDelegate& OnReady);


// ********** End Delegate FOnReady ****************************************************************

// ********** Begin Class AMRUKDistanceMapGenerator ************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateMaskMeshOfAnchor); \
	DECLARE_FUNCTION(execCreateMaskMeshOfAnchor); \
	DECLARE_FUNCTION(execOnRoomUpdated); \
	DECLARE_FUNCTION(execOnRoomCreated); \
	DECLARE_FUNCTION(execGetSceneCaptureView); \
	DECLARE_FUNCTION(execGetDistanceMapRenderTarget); \
	DECLARE_FUNCTION(execGetDistanceMap); \
	DECLARE_FUNCTION(execRemoveMaskMeshesFromRoom); \
	DECLARE_FUNCTION(execCreateMaskMeshesForRoom); \
	DECLARE_FUNCTION(execCaptureDistanceMap);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDistanceMapGenerator_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKDistanceMapGenerator(); \
	friend struct Z_Construct_UClass_AMRUKDistanceMapGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDistanceMapGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKDistanceMapGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKDistanceMapGenerator_NoRegister) \
	DECLARE_SERIALIZER(AMRUKDistanceMapGenerator)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKDistanceMapGenerator(AMRUKDistanceMapGenerator&&) = delete; \
	AMRUKDistanceMapGenerator(const AMRUKDistanceMapGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKDistanceMapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKDistanceMapGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRUKDistanceMapGenerator) \
	NO_API virtual ~AMRUKDistanceMapGenerator();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_43_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKDistanceMapGenerator;

// ********** End Class AMRUKDistanceMapGenerator **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDistanceMapGenerator_h

// ********** Begin Enum EMRUKDistanceMapGenerationMode ********************************************
#define FOREACH_ENUM_EMRUKDISTANCEMAPGENERATIONMODE(op) \
	op(EMRUKDistanceMapGenerationMode::None) \
	op(EMRUKDistanceMapGenerationMode::FreeSpace) \
	op(EMRUKDistanceMapGenerationMode::OccupiedSpace) \
	op(EMRUKDistanceMapGenerationMode::AllSpace) 

enum class EMRUKDistanceMapGenerationMode : uint8;
template<> struct TIsUEnumClass<EMRUKDistanceMapGenerationMode> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKDistanceMapGenerationMode>();
// ********** End Enum EMRUKDistanceMapGenerationMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
