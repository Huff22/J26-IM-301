// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkInteractorComponent.h"

#ifdef OCULUSINTERACTION_IsdkInteractorComponent_generated_h
#error "IsdkInteractorComponent.generated.h already included, missing '#pragma once' in IsdkInteractorComponent.h"
#endif
#define OCULUSINTERACTION_IsdkInteractorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EIsdkInteractorState : uint8;
struct FGameplayTagContainer;
struct FIsdkInteractionPointerEvent;

// ********** Begin Delegate FIsdkInteractorBroadcastPointerEvent **********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_55_DELEGATE \
OCULUSINTERACTION_API void FIsdkInteractorBroadcastPointerEvent_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractorBroadcastPointerEvent, FIsdkInteractionPointerEvent const& BroadcastPointerEvent);


// ********** End Delegate FIsdkInteractorBroadcastPointerEvent ************************************

// ********** Begin Class UIsdkInteractorComponent *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayTagContainer_Implementation); \
	DECLARE_FUNCTION(execGetCurrentState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractorComponent(); \
	friend struct Z_Construct_UClass_UIsdkInteractorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractorComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkInteractorComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkInteractorComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractorComponent(UIsdkInteractorComponent&&) = delete; \
	UIsdkInteractorComponent(const UIsdkInteractorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractorComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkInteractorComponent) \
	NO_API virtual ~UIsdkInteractorComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_71_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractorComponent;

// ********** End Class UIsdkInteractorComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
