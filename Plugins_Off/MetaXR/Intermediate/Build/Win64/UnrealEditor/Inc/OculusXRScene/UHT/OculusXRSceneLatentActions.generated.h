// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneLatentActions.h"

#ifdef OCULUSXRSCENE_OculusXRSceneLatentActions_generated_h
#error "OculusXRSceneLatentActions.generated.h already included, missing '#pragma once' in OculusXRSceneLatentActions.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneLatentActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOculusXRAsyncAction_LaunchCaptureFlow;
struct FOculusXRUInt64;

// ********** Begin Delegate FOculusXRAsyncAction_CaptureFlowFinished ******************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_15_DELEGATE \
static void FOculusXRAsyncAction_CaptureFlowFinished_DelegateWrapper(const FMulticastScriptDelegate& OculusXRAsyncAction_CaptureFlowFinished);


// ********** End Delegate FOculusXRAsyncAction_CaptureFlowFinished ********************************

// ********** Begin Class UOculusXRAsyncAction_LaunchCaptureFlow ***********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCaptureFinish); \
	DECLARE_FUNCTION(execLaunchCaptureFlowAsync);


OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAsyncAction_LaunchCaptureFlow(); \
	friend struct Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAsyncAction_LaunchCaptureFlow, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRScene"), Z_Construct_UClass_UOculusXRAsyncAction_LaunchCaptureFlow_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAsyncAction_LaunchCaptureFlow)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusXRAsyncAction_LaunchCaptureFlow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAsyncAction_LaunchCaptureFlow(UOculusXRAsyncAction_LaunchCaptureFlow&&) = delete; \
	UOculusXRAsyncAction_LaunchCaptureFlow(const UOculusXRAsyncAction_LaunchCaptureFlow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAsyncAction_LaunchCaptureFlow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAsyncAction_LaunchCaptureFlow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAsyncAction_LaunchCaptureFlow) \
	NO_API virtual ~UOculusXRAsyncAction_LaunchCaptureFlow();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_10_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAsyncAction_LaunchCaptureFlow;

// ********** End Class UOculusXRAsyncAction_LaunchCaptureFlow *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneLatentActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
