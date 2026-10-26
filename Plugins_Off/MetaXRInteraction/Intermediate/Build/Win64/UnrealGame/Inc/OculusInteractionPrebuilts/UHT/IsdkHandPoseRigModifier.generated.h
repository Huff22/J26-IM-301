// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkHandPoseRigModifier.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkHandPoseRigModifier_generated_h
#error "IsdkHandPoseRigModifier.generated.h already included, missing '#pragma once' in IsdkHandPoseRigModifier.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkHandPoseRigModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractorStateEvent;

// ********** Begin Class UIsdkHandPoseRigModifier *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInteractorStateEvent);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandPoseRigModifier(); \
	friend struct Z_Construct_UClass_UIsdkHandPoseRigModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandPoseRigModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandPoseRigModifier, UIsdkRigModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkHandPoseRigModifier_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandPoseRigModifier)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandPoseRigModifier(UIsdkHandPoseRigModifier&&) = delete; \
	UIsdkHandPoseRigModifier(const UIsdkHandPoseRigModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandPoseRigModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandPoseRigModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandPoseRigModifier) \
	NO_API virtual ~UIsdkHandPoseRigModifier();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_37_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandPoseRigModifier;

// ********** End Class UIsdkHandPoseRigModifier ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHandPoseRigModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
