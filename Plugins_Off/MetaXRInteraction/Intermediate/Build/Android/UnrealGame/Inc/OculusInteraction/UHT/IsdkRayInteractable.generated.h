// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkRayInteractable.h"

#ifdef OCULUSINTERACTION_IsdkRayInteractable_generated_h
#error "IsdkRayInteractable.generated.h already included, missing '#pragma once' in IsdkRayInteractable.h"
#endif
#define OCULUSINTERACTION_IsdkRayInteractable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkISurface;
struct FIsdkInteractionPointerEvent;

// ********** Begin Class UIsdkRayInteractable *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePointerEvent); \
	DECLARE_FUNCTION(execSetSelectSurface); \
	DECLARE_FUNCTION(execSetSurface); \
	DECLARE_FUNCTION(execGetSelectSurface); \
	DECLARE_FUNCTION(execGetSurface);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRayInteractable(); \
	friend struct Z_Construct_UClass_UIsdkRayInteractable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRayInteractable, UIsdkInteractableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkRayInteractable_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRayInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkRayInteractable*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRayInteractable(UIsdkRayInteractable&&) = delete; \
	UIsdkRayInteractable(const UIsdkRayInteractable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRayInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRayInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkRayInteractable) \
	NO_API virtual ~UIsdkRayInteractable();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_49_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRayInteractable;

// ********** End Class UIsdkRayInteractable *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
