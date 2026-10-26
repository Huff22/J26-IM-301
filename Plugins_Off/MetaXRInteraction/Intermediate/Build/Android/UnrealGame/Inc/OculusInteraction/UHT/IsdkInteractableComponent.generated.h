// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkInteractableComponent.h"

#ifdef OCULUSINTERACTION_IsdkInteractableComponent_generated_h
#error "IsdkInteractableComponent.generated.h already included, missing '#pragma once' in IsdkInteractableComponent.h"
#endif
#define OCULUSINTERACTION_IsdkInteractableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EIsdkInteractableState : uint8;
struct FGameplayTagContainer;

// ********** Begin Class UIsdkInteractableComponent ***********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayTagContainer_Implementation); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetInteractableState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractableComponent(); \
	friend struct Z_Construct_UClass_UIsdkInteractableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractableComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkInteractableComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkInteractableComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractableComponent(UIsdkInteractableComponent&&) = delete; \
	UIsdkInteractableComponent(const UIsdkInteractableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractableComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkInteractableComponent) \
	NO_API virtual ~UIsdkInteractableComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_55_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractableComponent;

// ********** End Class UIsdkInteractableComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
