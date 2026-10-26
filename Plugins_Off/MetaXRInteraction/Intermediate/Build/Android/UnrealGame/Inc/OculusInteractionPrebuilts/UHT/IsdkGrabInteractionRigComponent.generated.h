// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkGrabInteractionRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkGrabInteractionRigComponent_generated_h
#error "IsdkGrabInteractionRigComponent.generated.h already included, missing '#pragma once' in IsdkGrabInteractionRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkGrabInteractionRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditionalGroupAll;
class UIsdkRigComponent;

// ********** Begin Class UIsdkGrabInteractionRigComponent *****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleRigPalmUnselect); \
	DECLARE_FUNCTION(execHandleRigPalmSelect); \
	DECLARE_FUNCTION(execHandleRigPinchUnselect); \
	DECLARE_FUNCTION(execHandleRigPinchSelect); \
	DECLARE_FUNCTION(execHandleIsEnabledConditionalChanged); \
	DECLARE_FUNCTION(execGetEnabledConditional);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabInteractionRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkGrabInteractionRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabInteractionRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkGrabInteractionRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabInteractionRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabInteractionRigComponent(UIsdkGrabInteractionRigComponent&&) = delete; \
	UIsdkGrabInteractionRigComponent(const UIsdkGrabInteractionRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabInteractionRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabInteractionRigComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabInteractionRigComponent) \
	NO_API virtual ~UIsdkGrabInteractionRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_44_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabInteractionRigComponent;

// ********** End Class UIsdkGrabInteractionRigComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkGrabInteractionRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
