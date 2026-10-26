// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitDestructibleMesh.h"

#ifdef MRUTILITYKIT_MRUtilityKitDestructibleMesh_generated_h
#error "MRUtilityKitDestructibleMesh.generated.h already included, missing '#pragma once' in MRUtilityKitDestructibleMesh.h"
#endif
#define MRUTILITYKIT_MRUtilityKitDestructibleMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMRUKDestructibleGlobalMesh;
class AMRUKRoom;
class UPrimitiveComponent;

// ********** Begin Delegate FOnMeshesGenerated ****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_23_DELEGATE \
static void FOnMeshesGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshesGenerated);


// ********** End Delegate FOnMeshesGenerated ******************************************************

// ********** Begin Class UMRUKDestructibleMeshComponent *******************************************
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMRUKDestructibleMeshComponent(); \
	friend struct Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMRUKDestructibleMeshComponent, UProceduralMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UMRUKDestructibleMeshComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMRUKDestructibleMeshComponent(UMRUKDestructibleMeshComponent&&) = delete; \
	UMRUKDestructibleMeshComponent(const UMRUKDestructibleMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMRUKDestructibleMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMRUKDestructibleMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMRUKDestructibleMeshComponent) \
	NO_API virtual ~UMRUKDestructibleMeshComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_17_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMRUKDestructibleMeshComponent;

// ********** End Class UMRUKDestructibleMeshComponent *********************************************

// ********** Begin Class AMRUKDestructibleGlobalMesh **********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveGlobalMeshSegment); \
	DECLARE_FUNCTION(execCreateDestructibleMesh);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKDestructibleGlobalMesh(); \
	friend struct Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKDestructibleGlobalMesh, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister) \
	DECLARE_SERIALIZER(AMRUKDestructibleGlobalMesh)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKDestructibleGlobalMesh(AMRUKDestructibleGlobalMesh&&) = delete; \
	AMRUKDestructibleGlobalMesh(const AMRUKDestructibleGlobalMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKDestructibleGlobalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKDestructibleGlobalMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRUKDestructibleGlobalMesh) \
	NO_API virtual ~AMRUKDestructibleGlobalMesh();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_73_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKDestructibleGlobalMesh;

// ********** End Class AMRUKDestructibleGlobalMesh ************************************************

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner ***************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRoomRemoved); \
	DECLARE_FUNCTION(execOnRoomCreated); \
	DECLARE_FUNCTION(execAddDestructibleGlobalMesh); \
	DECLARE_FUNCTION(execFindDestructibleMeshForRoom);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKDestructibleGlobalMeshSpawner(); \
	friend struct Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKDestructibleGlobalMeshSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_NoRegister) \
	DECLARE_SERIALIZER(AMRUKDestructibleGlobalMeshSpawner)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRUKDestructibleGlobalMeshSpawner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKDestructibleGlobalMeshSpawner(AMRUKDestructibleGlobalMeshSpawner&&) = delete; \
	AMRUKDestructibleGlobalMeshSpawner(const AMRUKDestructibleGlobalMeshSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKDestructibleGlobalMeshSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKDestructibleGlobalMeshSpawner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUKDestructibleGlobalMeshSpawner) \
	NO_API virtual ~AMRUKDestructibleGlobalMeshSpawner();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_134_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKDestructibleGlobalMeshSpawner;

// ********** End Class AMRUKDestructibleGlobalMeshSpawner *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
