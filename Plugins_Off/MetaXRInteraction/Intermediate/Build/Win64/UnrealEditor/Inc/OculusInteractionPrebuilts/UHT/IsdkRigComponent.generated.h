// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRigComponent_generated_h
#error "IsdkRigComponent.generated.h already included, missing '#pragma once' in IsdkRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIHmdDataSource;
class UIsdkGrabberComponent;
class UIsdkGrabInteractionRigComponent;
class UIsdkInputActionsRigComponent;
class UIsdkInteractionGroupRigComponent;
class UIsdkPokeInteractionRigComponent;
class UIsdkPokeInteractor;
class UIsdkPokeLimiterVisual;
class UIsdkRayInteractionRigComponent;
class UIsdkRayInteractor;
class UIsdkRigModifier;
struct FIsdkVirtualUserInfo;

// ********** Begin Delegate FIsdkRigComponentLifecycleEvent ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_47_DELEGATE \
OCULUSINTERACTIONPREBUILTS_API void FIsdkRigComponentLifecycleEvent_DelegateWrapper(const FMulticastScriptDelegate& IsdkRigComponentLifecycleEvent);


// ********** End Delegate FIsdkRigComponentLifecycleEvent *****************************************

// ********** Begin Class UIsdkRigComponent ********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleVisualsDataSourcesCreatedEvent); \
	DECLARE_FUNCTION(execGetHmdDataSource); \
	DECLARE_FUNCTION(execGetActiveRigModifiers); \
	DECLARE_FUNCTION(execSetWidgetVirtualUser); \
	DECLARE_FUNCTION(execGetWidgetVirtualUser); \
	DECLARE_FUNCTION(execGetInteractionGroup); \
	DECLARE_FUNCTION(execGetInputActions); \
	DECLARE_FUNCTION(execGetGrabInteraction); \
	DECLARE_FUNCTION(execGetPokeInteraction); \
	DECLARE_FUNCTION(execGetRayInteraction); \
	DECLARE_FUNCTION(execGetGrabber); \
	DECLARE_FUNCTION(execGetPokeLimiterVisual); \
	DECLARE_FUNCTION(execGetRayInteractor); \
	DECLARE_FUNCTION(execGetPokeInteractor);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRigComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRigComponent(UIsdkRigComponent&&) = delete; \
	UIsdkRigComponent(const UIsdkRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRigComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkRigComponent) \
	NO_API virtual ~UIsdkRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_66_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRigComponent;

// ********** End Class UIsdkRigComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
