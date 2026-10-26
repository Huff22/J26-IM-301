// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MRUtilityKitPositionGenerator.h"

#ifdef MRUTILITYKIT_MRUtilityKitPositionGenerator_generated_h
#error "MRUtilityKitPositionGenerator.generated.h already included, missing '#pragma once' in MRUtilityKitPositionGenerator.h"
#endif
#define MRUTILITYKIT_MRUtilityKitPositionGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AMRUKRoom;

// ********** Begin ScriptStruct FMRUKRandomSpawnSettings ******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMRUKRandomSpawnSettings_Statics; \
	MRUTILITYKIT_API static class UScriptStruct* StaticStruct();


struct FMRUKRandomSpawnSettings;
// ********** End ScriptStruct FMRUKRandomSpawnSettings ********************************************

// ********** Begin Class AMRUtilityKitPositionGenerator *******************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSceneLoaded); \
	DECLARE_FUNCTION(execGenerateRandomPositionsOnSurfaceInRoom); \
	DECLARE_FUNCTION(execGenerateRandomPositionsOnSurface);


MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUtilityKitPositionGenerator_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRUtilityKitPositionGenerator(); \
	friend struct Z_Construct_UClass_AMRUtilityKitPositionGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUtilityKitPositionGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(AMRUtilityKitPositionGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MRUtilityKit"), Z_Construct_UClass_AMRUtilityKitPositionGenerator_NoRegister) \
	DECLARE_SERIALIZER(AMRUtilityKitPositionGenerator)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRUtilityKitPositionGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMRUtilityKitPositionGenerator(AMRUtilityKitPositionGenerator&&) = delete; \
	AMRUtilityKitPositionGenerator(const AMRUtilityKitPositionGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRUtilityKitPositionGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRUtilityKitPositionGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRUtilityKitPositionGenerator) \
	NO_API virtual ~AMRUtilityKitPositionGenerator();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_96_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMRUtilityKitPositionGenerator;

// ********** End Class AMRUtilityKitPositionGenerator *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitPositionGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
