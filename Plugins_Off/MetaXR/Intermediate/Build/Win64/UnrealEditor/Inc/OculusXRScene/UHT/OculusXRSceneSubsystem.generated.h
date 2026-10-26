// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRSceneSubsystem.h"

#ifdef OCULUSXRSCENE_OculusXRSceneSubsystem_generated_h
#error "OculusXRSceneSubsystem.generated.h already included, missing '#pragma once' in OculusXRSceneSubsystem.h"
#endif
#define OCULUSXRSCENE_OculusXRSceneSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EOculusXRBoundaryVisibility : uint8;

// ********** Begin Class UOculusXRSceneSubsystem **************************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRequestedBoundaryVisibility); \
	DECLARE_FUNCTION(execGetRequestedBoundaryVisibility); \
	DECLARE_FUNCTION(execGetBoundaryVisibility);


OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneSubsystem_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRSceneSubsystem(); \
	friend struct Z_Construct_UClass_UOculusXRSceneSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRSceneSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRSceneSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusXRScene"), Z_Construct_UClass_UOculusXRSceneSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRSceneSubsystem)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRSceneSubsystem(UOculusXRSceneSubsystem&&) = delete; \
	UOculusXRSceneSubsystem(const UOculusXRSceneSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRSceneSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRSceneSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOculusXRSceneSubsystem) \
	NO_API virtual ~UOculusXRSceneSubsystem();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_11_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRSceneSubsystem;

// ********** End Class UOculusXRSceneSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRSceneSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
