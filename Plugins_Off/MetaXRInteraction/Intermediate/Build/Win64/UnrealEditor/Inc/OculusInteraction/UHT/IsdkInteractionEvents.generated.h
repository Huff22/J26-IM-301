// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkInteractionEvents.h"

#ifdef OCULUSINTERACTION_IsdkInteractionEvents_generated_h
#error "IsdkInteractionEvents.generated.h already included, missing '#pragma once' in IsdkInteractionEvents.h"
#endif
#define OCULUSINTERACTION_IsdkInteractionEvents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FIsdkIUpdateEventDelegate *********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_28_DELEGATE \
OCULUSINTERACTION_API void FIsdkIUpdateEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkIUpdateEventDelegate);


// ********** End Delegate FIsdkIUpdateEventDelegate ***********************************************

// ********** Begin Class UIsdkInteractionEvents ***************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractionEvents_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInteractionEvents(); \
	friend struct Z_Construct_UClass_UIsdkInteractionEvents_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractionEvents_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInteractionEvents, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkInteractionEvents_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInteractionEvents)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkInteractionEvents(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInteractionEvents(UIsdkInteractionEvents&&) = delete; \
	UIsdkInteractionEvents(const UIsdkInteractionEvents&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInteractionEvents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInteractionEvents); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkInteractionEvents) \
	NO_API virtual ~UIsdkInteractionEvents();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_32_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_35_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInteractionEvents;

// ********** End Class UIsdkInteractionEvents *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractionEvents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
