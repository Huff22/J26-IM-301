// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRAnchorComponent.h"

#ifdef OCULUSXRANCHORS_OculusXRAnchorComponent_generated_h
#error "OculusXRAnchorComponent.generated.h already included, missing '#pragma once' in OculusXRAnchorComponent.h"
#endif
#define OCULUSXRANCHORS_OculusXRAnchorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRSpaceStorageLocation : uint8;
struct FOculusXRUInt64;
struct FOculusXRUUID;

// ********** Begin Class UOculusXRAnchorComponent *************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSaved); \
	DECLARE_FUNCTION(execIsStoredAtLocation); \
	DECLARE_FUNCTION(execGetUUID); \
	DECLARE_FUNCTION(execHasValidHandle); \
	DECLARE_FUNCTION(execSetHandle); \
	DECLARE_FUNCTION(execGetHandle);


OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRAnchorComponent(); \
	friend struct Z_Construct_UClass_UOculusXRAnchorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRAnchorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRAnchorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRAnchors"), Z_Construct_UClass_UOculusXRAnchorComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRAnchorComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRAnchorComponent(UOculusXRAnchorComponent&&) = delete; \
	UOculusXRAnchorComponent(const UOculusXRAnchorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRAnchorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRAnchorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRAnchorComponent) \
	NO_API virtual ~UOculusXRAnchorComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_9_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRAnchorComponent;

// ********** End Class UOculusXRAnchorComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
