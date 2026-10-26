// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkSceneInteractableComponent.h"

#ifdef OCULUSINTERACTION_IsdkSceneInteractableComponent_generated_h
#error "IsdkSceneInteractableComponent.generated.h already included, missing '#pragma once' in IsdkSceneInteractableComponent.h"
#endif
#define OCULUSINTERACTION_IsdkSceneInteractableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkSceneInteractableComponent;
enum class EIsdkInteractableState : uint8;
struct FGameplayTagContainer;

// ********** Begin Delegate FSceneInteractableInteractorCountChanged ******************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_41_DELEGATE \
OCULUSINTERACTION_API void FSceneInteractableInteractorCountChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractableInteractorCountChanged, UIsdkSceneInteractableComponent* Sender, int32 NewCount);


// ********** End Delegate FSceneInteractableInteractorCountChanged ********************************

// ********** Begin Delegate FSceneInteractableEnabledStateChanged *********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_49_DELEGATE \
OCULUSINTERACTION_API void FSceneInteractableEnabledStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractableEnabledStateChanged, UIsdkSceneInteractableComponent* Sender, bool NewState);


// ********** End Delegate FSceneInteractableEnabledStateChanged ***********************************

// ********** Begin Class UIsdkSceneInteractableComponent ******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayTagContainer_Implementation); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable); \
	DECLARE_FUNCTION(execGetInteractableState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkSceneInteractableComponent(); \
	friend struct Z_Construct_UClass_UIsdkSceneInteractableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkSceneInteractableComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkSceneInteractableComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkSceneInteractableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkSceneInteractableComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkSceneInteractableComponent(UIsdkSceneInteractableComponent&&) = delete; \
	UIsdkSceneInteractableComponent(const UIsdkSceneInteractableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkSceneInteractableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkSceneInteractableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkSceneInteractableComponent) \
	NO_API virtual ~UIsdkSceneInteractableComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_68_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkSceneInteractableComponent;

// ********** End Class UIsdkSceneInteractableComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
