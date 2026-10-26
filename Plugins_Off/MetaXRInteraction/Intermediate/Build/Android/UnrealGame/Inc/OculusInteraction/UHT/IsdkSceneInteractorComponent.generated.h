// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkSceneInteractorComponent.h"

#ifdef OCULUSINTERACTION_IsdkSceneInteractorComponent_generated_h
#error "IsdkSceneInteractorComponent.generated.h already included, missing '#pragma once' in IsdkSceneInteractorComponent.h"
#endif
#define OCULUSINTERACTION_IsdkSceneInteractorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkSceneInteractorComponent;
enum class EIsdkInteractorState : uint8;
struct FGameplayTagContainer;

// ********** Begin Delegate FSceneInteractorEnabledStateChanged ***********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_40_DELEGATE \
OCULUSINTERACTION_API void FSceneInteractorEnabledStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractorEnabledStateChanged, UIsdkSceneInteractorComponent* Sender, bool NewState);


// ********** End Delegate FSceneInteractorEnabledStateChanged *************************************

// ********** Begin Class UIsdkSceneInteractorComponent ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGameplayTagContainer_Implementation); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execDisable); \
	DECLARE_FUNCTION(execEnable); \
	DECLARE_FUNCTION(execGetInteractorState);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkSceneInteractorComponent(); \
	friend struct Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkSceneInteractorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkSceneInteractorComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkSceneInteractorComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkSceneInteractorComponent(UIsdkSceneInteractorComponent&&) = delete; \
	UIsdkSceneInteractorComponent(const UIsdkSceneInteractorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkSceneInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkSceneInteractorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkSceneInteractorComponent) \
	NO_API virtual ~UIsdkSceneInteractorComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_58_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkSceneInteractorComponent;

// ********** End Class UIsdkSceneInteractorComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
