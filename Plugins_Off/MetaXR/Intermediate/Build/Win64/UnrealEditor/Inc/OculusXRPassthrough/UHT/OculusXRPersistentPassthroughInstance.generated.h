// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPersistentPassthroughInstance.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPersistentPassthroughInstance_generated_h
#error "OculusXRPersistentPassthroughInstance.generated.h already included, missing '#pragma once' in OculusXRPersistentPassthroughInstance.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPersistentPassthroughInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOculusXRStereoLayerShapeReconstructed;

// ********** Begin Delegate FOculusXRPassthrough_LayerResumed_Single ******************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_15_DELEGATE \
OCULUSXRPASSTHROUGH_API void FOculusXRPassthrough_LayerResumed_Single_DelegateWrapper(const FScriptDelegate& OculusXRPassthrough_LayerResumed_Single);


// ********** End Delegate FOculusXRPassthrough_LayerResumed_Single ********************************

// ********** Begin ScriptStruct FOculusXRPersistentPassthroughParameters **************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusXRPersistentPassthroughParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FOculusXRPersistentPassthroughParameters;
// ********** End ScriptStruct FOculusXRPersistentPassthroughParameters ****************************

// ********** Begin Class UOculusXRPersistentPassthroughInstance ***********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnAnyLayerResumedEvent); \
	DECLARE_FUNCTION(execGetShape); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execSetVisible);


OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPersistentPassthroughInstance(); \
	friend struct Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPersistentPassthroughInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPersistentPassthroughInstance_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPersistentPassthroughInstance)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPersistentPassthroughInstance(UOculusXRPersistentPassthroughInstance&&) = delete; \
	UOculusXRPersistentPassthroughInstance(const UOculusXRPersistentPassthroughInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPersistentPassthroughInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPersistentPassthroughInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRPersistentPassthroughInstance) \
	NO_API virtual ~UOculusXRPersistentPassthroughInstance();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_99_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPersistentPassthroughInstance;

// ********** End Class UOculusXRPersistentPassthroughInstance *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPersistentPassthroughInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
