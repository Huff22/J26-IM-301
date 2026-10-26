// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneActor.h"

#ifdef OCULUSXRSCENE_OculusXRSceneActor_generated_h
#error "OculusXRSceneActor.generated.h already included, missing '#pragma once' in OculusXRSceneActor.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
struct FOculusXRRoomLayout;

// ********** Begin ScriptStruct FOculusXRSpawnedSceneAnchorProperties *****************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRSpawnedSceneAnchorProperties_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOculusXRSpawnedSceneAnchorProperties;
// ********** End ScriptStruct FOculusXRSpawnedSceneAnchorProperties *******************************

// ********** Begin Class AOculusXRSceneActor ******************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRoomLayouts); \
	DECLARE_FUNCTION(execGetActorsBySemanticLabel); \
	DECLARE_FUNCTION(execSetVisibilityToSceneAnchorsBySemanticLabel); \
	DECLARE_FUNCTION(execSetVisibilityToAllSceneAnchors); \
	DECLARE_FUNCTION(execClearScene); \
	DECLARE_FUNCTION(execPopulateScene); \
	DECLARE_FUNCTION(execIsRoomLayoutValid); \
	DECLARE_FUNCTION(execIsScenePopulated); \
	DECLARE_FUNCTION(execLaunchCaptureFlow);


OCULUSXRSCENE_API UClass* Z_Construct_UClass_AOculusXRSceneActor_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOculusXRSceneActor(); \
	friend struct Z_Construct_UClass_AOculusXRSceneActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRSCENE_API UClass* Z_Construct_UClass_AOculusXRSceneActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AOculusXRSceneActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRScene"), Z_Construct_UClass_AOculusXRSceneActor_NoRegister) \
	DECLARE_SERIALIZER(AOculusXRSceneActor)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AOculusXRSceneActor(AOculusXRSceneActor&&) = delete; \
	AOculusXRSceneActor(const AOculusXRSceneActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOculusXRSceneActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOculusXRSceneActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOculusXRSceneActor) \
	NO_API virtual ~AOculusXRSceneActor();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_70_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AOculusXRSceneActor;

// ********** End Class AOculusXRSceneActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneActor_h

// ********** Begin Enum EOculusXRLaunchCaptureFlowWhenMissingScene ********************************
#define FOREACH_ENUM_EOCULUSXRLAUNCHCAPTUREFLOWWHENMISSINGSCENE(op) \
	op(NEVER) \
	op(ONCE) \
	op(ALWAYS) 
// ********** End Enum EOculusXRLaunchCaptureFlowWhenMissingScene **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
