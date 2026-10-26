// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkInteractableWidgetComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkInteractableWidgetComponent_generated_h
#error "IsdkInteractableWidgetComponent.generated.h already included, missing '#pragma once' in IsdkInteractableWidgetComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkInteractableWidgetComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAudioComponent;
class UIsdkPointableWidget;
class UIsdkPokeInteractable;
class UIsdkRayInteractable;
class UIsdkWidgetEventAudioPlayer;
class UWidgetComponent;

// ********** Begin Class UIsdkInteractableWidgetComponent *****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRoundedMaterialProperties); \
	DECLARE_FUNCTION(execGetWidgetEventAudioPlayer); \
	DECLARE_FUNCTION(execGetPointableWidget); \
	DECLARE_FUNCTION(execGetRayInteractable); \
	DECLARE_FUNCTION(execGetPokeInteractable); \
	DECLARE_FUNCTION(execGetSelectedEmptyAudio); \
	DECLARE_FUNCTION(execGetSelectedHoveredAudio); \
	DECLARE_FUNCTION(execGetWidget);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractableWidgetComponent(); \
	friend struct Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractableWidgetComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractableWidgetComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractableWidgetComponent(UIsdkInteractableWidgetComponent&&) = delete; \
	UIsdkInteractableWidgetComponent(const UIsdkInteractableWidgetComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractableWidgetComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractableWidgetComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkInteractableWidgetComponent) \
	NO_API virtual ~UIsdkInteractableWidgetComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_42_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractableWidgetComponent;

// ********** End Class UIsdkInteractableWidgetComponent *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h

// ********** Begin Enum EIsdkWidgetBlendMode ******************************************************
#define FOREACH_ENUM_EISDKWIDGETBLENDMODE(op) \
	op(EIsdkWidgetBlendMode::Masked) \
	op(EIsdkWidgetBlendMode::Transparent) 

enum class EIsdkWidgetBlendMode : uint8;
template<> struct TIsUEnumClass<EIsdkWidgetBlendMode> { enum { Value = true }; };
template<> OCULUSINTERACTIONPREBUILTS_API UEnum* StaticEnum<EIsdkWidgetBlendMode>();
// ********** End Enum EIsdkWidgetBlendMode ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
