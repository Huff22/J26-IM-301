// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IsdkConditionalGroup.h"

#ifdef OCULUSINTERACTION_IsdkConditionalGroup_generated_h
#error "IsdkConditionalGroup.generated.h already included, missing '#pragma once' in IsdkConditionalGroup.h"
#endif
#define OCULUSINTERACTION_IsdkConditionalGroup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;

// ********** Begin Class UIsdkConditionalGroup ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execAddConditional); \
	DECLARE_FUNCTION(execRemoveConditional); \
	DECLARE_FUNCTION(execGetConditionals);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkConditionalGroup(); \
	friend struct Z_Construct_UClass_UIsdkConditionalGroup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConditionalGroup, UIsdkConditional, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConditionalGroup_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConditionalGroup)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConditionalGroup(UIsdkConditionalGroup&&) = delete; \
	UIsdkConditionalGroup(const UIsdkConditionalGroup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkConditionalGroup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConditionalGroup); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkConditionalGroup) \
	NO_API virtual ~UIsdkConditionalGroup();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_44_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConditionalGroup;

// ********** End Class UIsdkConditionalGroup ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
