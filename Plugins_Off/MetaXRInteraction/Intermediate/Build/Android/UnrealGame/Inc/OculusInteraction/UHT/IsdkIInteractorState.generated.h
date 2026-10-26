// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkIInteractorState.h"

#ifdef OCULUSINTERACTION_IsdkIInteractorState_generated_h
#error "IsdkIInteractorState.generated.h already included, missing '#pragma once' in IsdkIInteractorState.h"
#endif
#define OCULUSINTERACTION_IsdkIInteractorState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractorStateEvent;

// ********** Begin ScriptStruct FIsdkInteractorStateEvent *****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkInteractorStateEvent;
// ********** End ScriptStruct FIsdkInteractorStateEvent *******************************************

// ********** Begin Delegate FIsdkInteractorStateChanged *******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_69_DELEGATE \
OCULUSINTERACTION_API void FIsdkInteractorStateChanged_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractorStateChanged, FIsdkInteractorStateEvent const& InteractorState);


// ********** End Delegate FIsdkInteractorStateChanged *********************************************

// ********** Begin Interface UIsdkIInteractorState ************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIInteractorState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIInteractorState(UIsdkIInteractorState&&) = delete; \
	UIsdkIInteractorState(const UIsdkIInteractorState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIInteractorState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIInteractorState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIInteractorState) \
	virtual ~UIsdkIInteractorState() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIInteractorState(); \
	friend struct Z_Construct_UClass_UIsdkIInteractorState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIInteractorState, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIInteractorState_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIInteractorState)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIInteractorState() {} \
public: \
	typedef UIsdkIInteractorState UClassType; \
	typedef IIsdkIInteractorState ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_77_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h_80_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIInteractorState;

// ********** End Interface UIsdkIInteractorState **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
