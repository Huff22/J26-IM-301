// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkControllerMeshComponent.h"

#ifdef OCULUSINTERACTION_IsdkControllerMeshComponent_generated_h
#error "IsdkControllerMeshComponent.generated.h already included, missing '#pragma once' in IsdkControllerMeshComponent.h"
#endif
#define OCULUSINTERACTION_IsdkControllerMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIHandPointerPose;
class IIsdkIRootPose;
class UIsdkConditionalPoseOverride;
class USceneComponent;

// ********** Begin Class UIsdkControllerMeshComponent *********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFinalRootPose_Implementation); \
	DECLARE_FUNCTION(execGetCurrentRootPose_Implementation); \
	DECLARE_FUNCTION(execGetPoseOverride_Implementation); \
	DECLARE_FUNCTION(execSetRootPoseDataSource); \
	DECLARE_FUNCTION(execSetMotionController); \
	DECLARE_FUNCTION(execSetHandPointerPoseDataSource); \
	DECLARE_FUNCTION(execGetPointerPoseComponent); \
	DECLARE_FUNCTION(execGetRootPoseDataSource); \
	DECLARE_FUNCTION(execGetHandPointerPoseDataSource);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerMeshComponent(); \
	friend struct Z_Construct_UClass_UIsdkControllerMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerMeshComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkControllerMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkControllerMeshComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerMeshComponent(UIsdkControllerMeshComponent&&) = delete; \
	UIsdkControllerMeshComponent(const UIsdkControllerMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerMeshComponent) \
	NO_API virtual ~UIsdkControllerMeshComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_31_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerMeshComponent;

// ********** End Class UIsdkControllerMeshComponent ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkControllerMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
