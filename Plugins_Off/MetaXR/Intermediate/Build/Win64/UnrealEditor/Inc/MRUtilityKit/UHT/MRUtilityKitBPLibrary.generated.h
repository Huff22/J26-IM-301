// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitBPLibrary.h"

#ifdef MRUTILITYKIT_MRUtilityKitBPLibrary_generated_h
#error "MRUtilityKitBPLibrary.generated.h already included, missing '#pragma once' in MRUtilityKitBPLibrary.h"
#endif
#define MRUTILITYKIT_MRUtilityKitBPLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMRUKAnchor;
class UMRUKLoadFromDevice;
class UMRUKLoadFromJson;
class UObject;
class UProceduralMeshComponent;
class USceneComponent;
class UTexture2D;
class UTextureRenderTarget2D;
enum class EMRUKSceneModel : uint8;
struct FLinearColor;
struct FOculusXRUInt64;

// ********** Begin ScriptStruct FMRUKMeshSegment **************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKMeshSegment_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKMeshSegment;
// ********** End ScriptStruct FMRUKMeshSegment ****************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_28_DELEGATE \
static void FMRUKLoaded_DelegateWrapper(const FMulticastScriptDelegate& MRUKLoaded);


// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromDevice ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSceneLoaded); \
	DECLARE_FUNCTION(execLoadSceneFromDeviceAsync);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKLoadFromDevice(); \
	friend struct Z_Construct_UClass_UMRUKLoadFromDevice_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKLoadFromDevice, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKLoadFromDevice_NoRegister) \
	DECLARE_SERIALIZER(UMRUKLoadFromDevice)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKLoadFromDevice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKLoadFromDevice(UMRUKLoadFromDevice&&) = delete; \
	UMRUKLoadFromDevice(const UMRUKLoadFromDevice&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKLoadFromDevice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKLoadFromDevice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKLoadFromDevice) \
	NO_API virtual ~UMRUKLoadFromDevice();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_23_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKLoadFromDevice;

// ********** End Class UMRUKLoadFromDevice ********************************************************

// ********** Begin Delegate FMRUKLoaded ***********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_57_DELEGATE \
static void FMRUKLoaded_DelegateWrapper(const FMulticastScriptDelegate& MRUKLoaded);


// ********** End Delegate FMRUKLoaded *************************************************************

// ********** Begin Class UMRUKLoadFromJson ********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSceneLoaded); \
	DECLARE_FUNCTION(execLoadSceneFromJsonAsync);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromJson_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKLoadFromJson(); \
	friend struct Z_Construct_UClass_UMRUKLoadFromJson_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKLoadFromJson_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKLoadFromJson, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKLoadFromJson_NoRegister) \
	DECLARE_SERIALIZER(UMRUKLoadFromJson)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKLoadFromJson(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKLoadFromJson(UMRUKLoadFromJson&&) = delete; \
	UMRUKLoadFromJson(const UMRUKLoadFromJson&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKLoadFromJson); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKLoadFromJson); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKLoadFromJson) \
	NO_API virtual ~UMRUKLoadFromJson();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_52_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKLoadFromJson;

// ********** End Class UMRUKLoadFromJson **********************************************************

// ********** Begin Class UMRUKBPLibrary ***********************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMatrixColumn); \
	DECLARE_FUNCTION(execConstructTexture2D); \
	DECLARE_FUNCTION(execComputeDirectionAwayFromClosestWall); \
	DECLARE_FUNCTION(execSetScaleRecursivelyAdjustingForRotation); \
	DECLARE_FUNCTION(execComputeCentroid); \
	DECLARE_FUNCTION(execIsUnrealEngineMetaFork); \
	DECLARE_FUNCTION(execRecalculateProceduralMeshAndTangents); \
	DECLARE_FUNCTION(execLoadGlobalMeshFromDevice);


MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKBPLibrary(); \
	friend struct Z_Construct_UClass_UMRUKBPLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKBPLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKBPLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMRUKBPLibrary)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMRUKBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKBPLibrary(UMRUKBPLibrary&&) = delete; \
	UMRUKBPLibrary(const UMRUKBPLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKBPLibrary) \
	NO_API virtual ~UMRUKBPLibrary();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_84_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKBPLibrary;

// ********** End Class UMRUKBPLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitBPLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
