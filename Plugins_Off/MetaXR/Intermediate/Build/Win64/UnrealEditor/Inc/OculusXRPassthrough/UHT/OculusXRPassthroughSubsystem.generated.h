// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRPassthroughSubsystem.h"

#ifdef OCULUSXRPASSTHROUGH_OculusXRPassthroughSubsystem_generated_h
#error "OculusXRPassthroughSubsystem.generated.h already included, missing '#pragma once' in OculusXRPassthroughSubsystem.h"
#endif
#define OCULUSXRPASSTHROUGH_OculusXRPassthroughSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UOculusXRPersistentPassthroughInstance;
struct FOculusXRPersistentPassthroughParameters;

// ********** Begin Delegate FOculusXRPassthrough_AnyLayerResumed **********************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_12_DELEGATE \
OCULUSXRPASSTHROUGH_API void FOculusXRPassthrough_AnyLayerResumed_DelegateWrapper(const FMulticastScriptDelegate& OculusXRPassthrough_AnyLayerResumed, int32 LayerID);


// ********** End Delegate FOculusXRPassthrough_AnyLayerResumed ************************************

// ********** Begin Class UOculusXRPassthroughSubsystem ********************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPersistentPassthrough); \
	DECLARE_FUNCTION(execDestroyPersistentPassthrough); \
	DECLARE_FUNCTION(execInitializePersistentPassthrough);


OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRPassthroughSubsystem(); \
	friend struct Z_Construct_UClass_UOculusXRPassthroughSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRPassthroughSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRPassthrough"), Z_Construct_UClass_UOculusXRPassthroughSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRPassthroughSubsystem)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRPassthroughSubsystem(UOculusXRPassthroughSubsystem&&) = delete; \
	UOculusXRPassthroughSubsystem(const UOculusXRPassthroughSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRPassthroughSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRPassthroughSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRPassthroughSubsystem) \
	NO_API virtual ~UOculusXRPassthroughSubsystem();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_14_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRPassthroughSubsystem;

// ********** End Class UOculusXRPassthroughSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
