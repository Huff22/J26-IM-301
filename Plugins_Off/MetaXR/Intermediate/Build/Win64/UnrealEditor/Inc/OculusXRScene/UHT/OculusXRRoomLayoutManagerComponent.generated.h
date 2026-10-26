// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusXRRoomLayoutManagerComponent.h"

#ifdef OCULUSXRSCENE_OculusXRRoomLayoutManagerComponent_generated_h
#error "OculusXRRoomLayoutManagerComponent.generated.h already included, missing '#pragma once' in OculusXRRoomLayoutManagerComponent.h"
#endif
#define OCULUSXRSCENE_OculusXRRoomLayoutManagerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UProceduralMeshComponent;
struct FOculusXRRoomLayout;
struct FOculusXRUInt64;

// ********** Begin Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate ***********************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_26_DELEGATE \
static void FOculusXRRoomLayoutSceneCaptureCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OculusXRRoomLayoutSceneCaptureCompleteDelegate, FOculusXRUInt64 requestId, bool result);


// ********** End Delegate FOculusXRRoomLayoutSceneCaptureCompleteDelegate *************************

// ********** Begin Class UOculusXRRoomLayoutManagerComponent **************************************
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOculusRoomLayoutSceneCaptureComplete_Handler); \
	DECLARE_FUNCTION(execLoadTriangleMesh); \
	DECLARE_FUNCTION(execGetRoomLayout); \
	DECLARE_FUNCTION(execLaunchCaptureFlow);


OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_NoRegister();

#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusXRRoomLayoutManagerComponent(); \
	friend struct Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSXRSCENE_API UClass* Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UOculusXRRoomLayoutManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusXRScene"), Z_Construct_UClass_UOculusXRRoomLayoutManagerComponent_NoRegister) \
	DECLARE_SERIALIZER(UOculusXRRoomLayoutManagerComponent)


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOculusXRRoomLayoutManagerComponent(UOculusXRRoomLayoutManagerComponent&&) = delete; \
	UOculusXRRoomLayoutManagerComponent(const UOculusXRRoomLayoutManagerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusXRRoomLayoutManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusXRRoomLayoutManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusXRRoomLayoutManagerComponent) \
	NO_API virtual ~UOculusXRRoomLayoutManagerComponent();


#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_10_PROLOG
#define FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOculusXRRoomLayoutManagerComponent;

// ********** End Class UOculusXRRoomLayoutManagerComponent ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRScene_Public_OculusXRRoomLayoutManagerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
