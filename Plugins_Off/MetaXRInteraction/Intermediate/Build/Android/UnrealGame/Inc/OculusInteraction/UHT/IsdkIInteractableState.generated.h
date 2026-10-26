// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkIInteractableState.h"

#ifdef OCULUSINTERACTION_IsdkIInteractableState_generated_h
#error "IsdkIInteractableState.generated.h already included, missing '#pragma once' in IsdkIInteractableState.h"
#endif
#define OCULUSINTERACTION_IsdkIInteractableState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractableStateEvent;

// ********** Begin ScriptStruct FIsdkInteractableStateEvent ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkInteractableStateEvent;
// ********** End ScriptStruct FIsdkInteractableStateEvent *****************************************

// ********** Begin Delegate FIsdkInteractableStateChanged *****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_74_DELEGATE \
OCULUSINTERACTION_API void FIsdkInteractableStateChanged_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractableStateChanged, FIsdkInteractableStateEvent const& InteractableState);


// ********** End Delegate FIsdkInteractableStateChanged *******************************************

// ********** Begin Interface UIsdkIInteractableState **********************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIInteractableState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIInteractableState(UIsdkIInteractableState&&) = delete; \
	UIsdkIInteractableState(const UIsdkIInteractableState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIInteractableState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIInteractableState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIInteractableState) \
	virtual ~UIsdkIInteractableState() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIInteractableState(); \
	friend struct Z_Construct_UClass_UIsdkIInteractableState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIInteractableState, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIInteractableState_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIInteractableState)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIInteractableState() {} \
public: \
	typedef UIsdkIInteractableState UClassType; \
	typedef IIsdkIInteractableState ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_82_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h_85_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIInteractableState;

// ********** End Interface UIsdkIInteractableState ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
