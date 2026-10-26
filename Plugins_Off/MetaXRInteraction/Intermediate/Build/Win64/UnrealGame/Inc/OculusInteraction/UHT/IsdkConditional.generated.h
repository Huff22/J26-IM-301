// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IsdkConditional.h"

#ifdef OCULUSINTERACTION_IsdkConditional_generated_h
#error "IsdkConditional.generated.h already included, missing '#pragma once' in IsdkConditional.h"
#endif
#define OCULUSINTERACTION_IsdkConditional_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FIsdkResolvedValueChangedDynamicDelegate ******************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_32_DELEGATE \
OCULUSINTERACTION_API void FIsdkResolvedValueChangedDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkResolvedValueChangedDynamicDelegate, bool NewValue);


// ********** End Delegate FIsdkResolvedValueChangedDynamicDelegate ********************************

// ********** Begin Class UIsdkConditional *********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetResolvedValue);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkConditional(); \
	friend struct Z_Construct_UClass_UIsdkConditional_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConditional, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConditional_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConditional)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkConditional(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConditional(UIsdkConditional&&) = delete; \
	UIsdkConditional(const UIsdkConditional&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkConditional); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConditional); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkConditional) \
	NO_API virtual ~UIsdkConditional();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_47_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConditional;

// ********** End Class UIsdkConditional ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditional_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
