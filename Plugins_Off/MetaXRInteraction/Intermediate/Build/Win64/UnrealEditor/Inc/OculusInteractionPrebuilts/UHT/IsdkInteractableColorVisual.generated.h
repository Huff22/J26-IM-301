// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractableVisuals/IsdkInteractableColorVisual.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkInteractableColorVisual_generated_h
#error "IsdkInteractableColorVisual.generated.h already included, missing '#pragma once' in IsdkInteractableColorVisual.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkInteractableColorVisual_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIInteractableState;
enum class EIsdkInteractableState : uint8;
struct FIsdkColorState;
struct FIsdkInteractableStateEvent;

// ********** Begin ScriptStruct FIsdkColorState ***************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkColorState_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkColorState;
// ********** End ScriptStruct FIsdkColorState *****************************************************

// ********** Begin ScriptStruct FIsdkColorTransition **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkColorTransition_Statics; \
	OCULUSINTERACTIONPREBUILTS_API static class UScriptStruct* StaticStruct();


struct FIsdkColorTransition;
// ********** End ScriptStruct FIsdkColorTransition ************************************************

// ********** Begin Class UIsdkInteractableColorVisual *********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStateChange); \
	DECLARE_FUNCTION(execSetDisabledColorState); \
	DECLARE_FUNCTION(execSetSelectColorState); \
	DECLARE_FUNCTION(execSetHoverColorState); \
	DECLARE_FUNCTION(execSetNormalColorState); \
	DECLARE_FUNCTION(execGetDisabledColorState); \
	DECLARE_FUNCTION(execGetSelectColorState); \
	DECLARE_FUNCTION(execGetHoverColorState); \
	DECLARE_FUNCTION(execGetNormalColorState); \
	DECLARE_FUNCTION(execSetInteractable); \
	DECLARE_FUNCTION(execGetInteractable); \
	DECLARE_FUNCTION(execSetColorStates); \
	DECLARE_FUNCTION(execGetColorState); \
	DECLARE_FUNCTION(execSetColorState); \
	DECLARE_FUNCTION(execSetImmediateTransitionToState); \
	DECLARE_FUNCTION(execSetTransitionToState);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractableColorVisual(); \
	friend struct Z_Construct_UClass_UIsdkInteractableColorVisual_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractableColorVisual, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractableColorVisual)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractableColorVisual(UIsdkInteractableColorVisual&&) = delete; \
	UIsdkInteractableColorVisual(const UIsdkInteractableColorVisual&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractableColorVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractableColorVisual); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkInteractableColorVisual) \
	NO_API virtual ~UIsdkInteractableColorVisual();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_112_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractableColorVisual;

// ********** End Class UIsdkInteractableColorVisual ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
