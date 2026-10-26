// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitGuardianSpawner.h"

#ifdef MRUTILITYKIT_MRUtilityKitGuardianSpawner_generated_h
#error "MRUtilityKitGuardianSpawner.generated.h already included, missing '#pragma once' in MRUtilityKitGuardianSpawner.h"
#endif
#define MRUTILITYKIT_MRUtilityKitGuardianSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMRUKRoom;
class UMaterialInstance;

// ********** Begin Class AMRUKGuardianSpawner *****************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRoomRemoved); \
	DECLARE_FUNCTION(execOnRoomUpdated); \
	DECLARE_FUNCTION(execOnRoomCreated); \
	DECLARE_FUNCTION(execDestroyGuardians); \
	DECLARE_FUNCTION(execSetGridDensity); \
	DECLARE_FUNCTION(execSetGuardianMaterial); \
	DECLARE_FUNCTION(execSpawnGuardians);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUKGuardianSpawner(); \
	friend struct Z_Construct_UClass_AMRUKGuardianSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKGuardianSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUKGuardianSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUKGuardianSpawner_NoRegister) \
	DECLARE_SERIALIZER(AMRUKGuardianSpawner)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUKGuardianSpawner(AMRUKGuardianSpawner&&) = delete; \
	AMRUKGuardianSpawner(const AMRUKGuardianSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUKGuardianSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUKGuardianSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRUKGuardianSpawner) \
	NO_API virtual ~AMRUKGuardianSpawner();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_17_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUKGuardianSpawner;

// ********** End Class AMRUKGuardianSpawner *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitGuardianSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
