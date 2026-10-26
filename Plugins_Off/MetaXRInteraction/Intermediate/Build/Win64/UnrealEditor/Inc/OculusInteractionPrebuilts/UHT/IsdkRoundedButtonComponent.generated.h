// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkRoundedButtonComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRoundedButtonComponent_generated_h
#error "IsdkRoundedButtonComponent.generated.h already included, missing '#pragma once' in IsdkRoundedButtonComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRoundedButtonComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAudioComponent;
class UIsdkInteractableColorVisual;
class UIsdkPokeButtonVisual;
class UIsdkPokeInteractable;
class UStaticMeshComponent;
struct FLinearColor;

// ********** Begin Class UIsdkRoundedButtonComponent **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPokeButtonVisual); \
	DECLARE_FUNCTION(execGetPokeInteractable); \
	DECLARE_FUNCTION(execGetLabelColor); \
	DECLARE_FUNCTION(execSetLabelColor); \
	DECLARE_FUNCTION(execGetLabelText); \
	DECLARE_FUNCTION(execSetLabelText); \
	DECLARE_FUNCTION(execGetLabelSize); \
	DECLARE_FUNCTION(execSetLabelSize); \
	DECLARE_FUNCTION(execGetCreateBackplane); \
	DECLARE_FUNCTION(execSetCreateBackplane); \
	DECLARE_FUNCTION(execGetBackplaneFillColor); \
	DECLARE_FUNCTION(execSetBackplaneFillColor); \
	DECLARE_FUNCTION(execGetCornerRadius); \
	DECLARE_FUNCTION(execSetCornerRadius); \
	DECLARE_FUNCTION(execGetInteractableColorVisual); \
	DECLARE_FUNCTION(execGetButtonMesh); \
	DECLARE_FUNCTION(execGetInteractionButtonRelease); \
	DECLARE_FUNCTION(execGetInteractionButtonPress);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRoundedButtonComponent(); \
	friend struct Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRoundedButtonComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRoundedButtonComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRoundedButtonComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRoundedButtonComponent(UIsdkRoundedButtonComponent&&) = delete; \
	UIsdkRoundedButtonComponent(const UIsdkRoundedButtonComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRoundedButtonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRoundedButtonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkRoundedButtonComponent) \
	NO_API virtual ~UIsdkRoundedButtonComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_36_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRoundedButtonComponent;

// ********** End Class UIsdkRoundedButtonComponent ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
