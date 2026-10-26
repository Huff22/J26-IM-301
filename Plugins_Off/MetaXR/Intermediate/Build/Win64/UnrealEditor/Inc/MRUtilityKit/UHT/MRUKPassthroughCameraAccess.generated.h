// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUKPassthroughCameraAccess.h"

#ifdef MRUTILITYKIT_MRUKPassthroughCameraAccess_generated_h
#error "MRUKPassthroughCameraAccess.generated.h already included, missing '#pragma once' in MRUKPassthroughCameraAccess.h"
#endif
#define MRUTILITYKIT_MRUKPassthroughCameraAccess_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EMRUKCameraEye : uint8;
enum class EMRUKCameraPlayState : uint8;
struct FDateTime;
struct FMRUKCameraIntrinsics;

// ********** Begin ScriptStruct FMRUKCameraIntrinsics *********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKCameraIntrinsics;
// ********** End ScriptStruct FMRUKCameraIntrinsics ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem ************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execWorldToViewportPoint); \
	DECLARE_FUNCTION(execViewportPointToWorldSpaceRay); \
	DECLARE_FUNCTION(execGetCameraIntrinsics); \
	DECLARE_FUNCTION(execGetCameraPose); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execGetSupportedResolutions);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKPassthroughCameraAccessSubsystem(); \
	friend struct Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKPassthroughCameraAccessSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMRUKPassthroughCameraAccessSubsystem)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKPassthroughCameraAccessSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKPassthroughCameraAccessSubsystem(UMRUKPassthroughCameraAccessSubsystem&&) = delete; \
	UMRUKPassthroughCameraAccessSubsystem(const UMRUKPassthroughCameraAccessSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKPassthroughCameraAccessSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKPassthroughCameraAccessSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMRUKPassthroughCameraAccessSubsystem) \
	NO_API virtual ~UMRUKPassthroughCameraAccessSubsystem();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_49_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKPassthroughCameraAccessSubsystem;

// ********** End Class UMRUKPassthroughCameraAccessSubsystem **************************************

// ********** Begin Class UMRUKPassthroughCameraAccess *********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnResume); \
	DECLARE_FUNCTION(execOnSuspend); \
	DECLARE_FUNCTION(execIsCameraPlaying); \
	DECLARE_FUNCTION(execGetCameraPlayState); \
	DECLARE_FUNCTION(execGetTimestamp); \
	DECLARE_FUNCTION(execWorldToViewportPoint); \
	DECLARE_FUNCTION(execViewportPointToWorldSpaceRay); \
	DECLARE_FUNCTION(execGetCameraIntrinsics); \
	DECLARE_FUNCTION(execGetCameraPose); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKPassthroughCameraAccess(); \
	friend struct Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKPassthroughCameraAccess, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister) \
	DECLARE_SERIALIZER(UMRUKPassthroughCameraAccess)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKPassthroughCameraAccess(UMRUKPassthroughCameraAccess&&) = delete; \
	UMRUKPassthroughCameraAccess(const UMRUKPassthroughCameraAccess&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKPassthroughCameraAccess); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKPassthroughCameraAccess); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMRUKPassthroughCameraAccess) \
	NO_API virtual ~UMRUKPassthroughCameraAccess();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_129_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKPassthroughCameraAccess;

// ********** End Class UMRUKPassthroughCameraAccess ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture **************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetAspectRatio);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKPassthroughCameraAccessTexture(); \
	friend struct Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKPassthroughCameraAccessTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_NoRegister) \
	DECLARE_SERIALIZER(UMRUKPassthroughCameraAccessTexture)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MRUTILITYKIT_API UMRUKPassthroughCameraAccessTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKPassthroughCameraAccessTexture(UMRUKPassthroughCameraAccessTexture&&) = delete; \
	UMRUKPassthroughCameraAccessTexture(const UMRUKPassthroughCameraAccessTexture&) = delete; \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKPassthroughCameraAccessTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKPassthroughCameraAccessTexture) \
	MRUTILITYKIT_API virtual ~UMRUKPassthroughCameraAccessTexture();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_225_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKPassthroughCameraAccessTexture;

// ********** End Class UMRUKPassthroughCameraAccessTexture ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h

// ********** Begin Enum EMRUKCameraEye ************************************************************
#define FOREACH_ENUM_EMRUKCAMERAEYE(op) \
	op(EMRUKCameraEye::Left) \
	op(EMRUKCameraEye::Right) \
	op(EMRUKCameraEye::Count) 

enum class EMRUKCameraEye : uint8;
template<> struct TIsUEnumClass<EMRUKCameraEye> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCameraEye>();
// ********** End Enum EMRUKCameraEye **************************************************************

// ********** Begin Enum EMRUKCameraPlayState ******************************************************
#define FOREACH_ENUM_EMRUKCAMERAPLAYSTATE(op) \
	op(EMRUKCameraPlayState::Stopped) \
	op(EMRUKCameraPlayState::Playing) \
	op(EMRUKCameraPlayState::PlaySuspended) 

enum class EMRUKCameraPlayState : uint8;
template<> struct TIsUEnumClass<EMRUKCameraPlayState> { enum { Value = true }; };
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCameraPlayState>();
// ********** End Enum EMRUKCameraPlayState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
