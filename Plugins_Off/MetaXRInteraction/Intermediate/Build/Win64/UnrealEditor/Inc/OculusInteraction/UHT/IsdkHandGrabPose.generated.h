// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/Grabbable/IsdkHandGrabPose.h"

#ifdef OCULUSINTERACTION_IsdkHandGrabPose_generated_h
#error "IsdkHandGrabPose.generated.h already included, missing '#pragma once' in IsdkHandGrabPose.h"
#endif
#define OCULUSINTERACTION_IsdkHandGrabPose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandGrabPose;
class UIsdkHandMeshComponent;
class UIsdkHandPoseData;

// ********** Begin Class UIsdkHandGrabPose ********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDebugVisual); \
	DECLARE_FUNCTION(execIsDebugVisualActive); \
	DECLARE_FUNCTION(execGetMirrorHandGrabPose); \
	DECLARE_FUNCTION(execGetMirrorHandPoseData); \
	DECLARE_FUNCTION(execDestroyDebugVisual); \
	DECLARE_FUNCTION(execInitializeDebugVisual); \
	DECLARE_FUNCTION(execToggleHandPoseEditing);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabPose_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandGrabPose(); \
	friend struct Z_Construct_UClass_UIsdkHandGrabPose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabPose_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandGrabPose, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandGrabPose_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandGrabPose)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandGrabPose(UIsdkHandGrabPose&&) = delete; \
	UIsdkHandGrabPose(const UIsdkHandGrabPose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandGrabPose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandGrabPose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandGrabPose) \
	NO_API virtual ~UIsdkHandGrabPose();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_35_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandGrabPose;

// ********** End Class UIsdkHandGrabPose **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
