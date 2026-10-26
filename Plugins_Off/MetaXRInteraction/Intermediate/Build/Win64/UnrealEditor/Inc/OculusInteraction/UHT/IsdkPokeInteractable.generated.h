// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkPokeInteractable.h"

#ifdef OCULUSINTERACTION_IsdkPokeInteractable_generated_h
#error "IsdkPokeInteractable.generated.h already included, missing '#pragma once' in IsdkPokeInteractable.h"
#endif
#define OCULUSINTERACTION_IsdkPokeInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkISurfacePatch;
class UIsdkPokeInteractableConfigDataAsset;
struct FIsdkInteractionPointerEvent;
struct FIsdkPokeInteractable_Config;
struct FIsdkPokeInteractableConfigOffsets;

// ********** Begin ScriptStruct FIsdkPokeInteractableConfigOffsets ********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkPokeInteractableConfigOffsets;
// ********** End ScriptStruct FIsdkPokeInteractableConfigOffsets **********************************

// ********** Begin Class UIsdkPokeInteractableConfigDataAsset *************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetToDefaultPanelConfig);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeInteractableConfigDataAsset(); \
	friend struct Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeInteractableConfigDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeInteractableConfigDataAsset)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkPokeInteractableConfigDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeInteractableConfigDataAsset(UIsdkPokeInteractableConfigDataAsset&&) = delete; \
	UIsdkPokeInteractableConfigDataAsset(const UIsdkPokeInteractableConfigDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeInteractableConfigDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeInteractableConfigDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkPokeInteractableConfigDataAsset) \
	NO_API virtual ~UIsdkPokeInteractableConfigDataAsset();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_66_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeInteractableConfigDataAsset;

// ********** End Class UIsdkPokeInteractableConfigDataAsset ***************************************

// ********** Begin Class UIsdkPokeInteractable ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePointerEvent); \
	DECLARE_FUNCTION(execSetSurfacePatch); \
	DECLARE_FUNCTION(execSetConfigAsset); \
	DECLARE_FUNCTION(execSetConfigOffsets); \
	DECLARE_FUNCTION(execGetSurfacePatch); \
	DECLARE_FUNCTION(execGetCurrentConfig); \
	DECLARE_FUNCTION(execGetConfigAsset); \
	DECLARE_FUNCTION(execGetConfigOffsets);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeInteractable(); \
	friend struct Z_Construct_UClass_UIsdkPokeInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeInteractable, UIsdkInteractableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkPokeInteractable*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeInteractable(UIsdkPokeInteractable&&) = delete; \
	UIsdkPokeInteractable(const UIsdkPokeInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPokeInteractable) \
	NO_API virtual ~UIsdkPokeInteractable();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_108_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeInteractable;

// ********** End Class UIsdkPokeInteractable ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
