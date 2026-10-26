// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkPokeButtonVisual.h"

#ifdef OCULUSINTERACTION_IsdkPokeButtonVisual_generated_h
#error "IsdkPokeButtonVisual.generated.h already included, missing '#pragma once' in IsdkPokeButtonVisual.h"
#endif
#define OCULUSINTERACTION_IsdkPokeButtonVisual_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkPokeInteractable;
struct FIsdkInteractableStateEvent;

// ********** Begin Class UIsdkPokeButtonVisual ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleWorldFrameStartedEvent); \
	DECLARE_FUNCTION(execHandleWorldFrameFinishedEvent); \
	DECLARE_FUNCTION(execHandleInteractableStateChanged); \
	DECLARE_FUNCTION(execSetPokeInteractable); \
	DECLARE_FUNCTION(execGetPokeInteractable);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeButtonVisual(); \
	friend struct Z_Construct_UClass_UIsdkPokeButtonVisual_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeButtonVisual, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeButtonVisual)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeButtonVisual(UIsdkPokeButtonVisual&&) = delete; \
	UIsdkPokeButtonVisual(const UIsdkPokeButtonVisual&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeButtonVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeButtonVisual); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPokeButtonVisual) \
	NO_API virtual ~UIsdkPokeButtonVisual();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_52_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeButtonVisual;

// ********** End Class UIsdkPokeButtonVisual ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
