// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkRigModifier.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkRigModifier_generated_h
#error "IsdkRigModifier.generated.h already included, missing '#pragma once' in IsdkRigModifier.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkRigModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkRigComponent;

// ********** Begin Class UIsdkRigModifier *********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShutdownRigModifier); \
	DECLARE_FUNCTION(execInitializeRigModifier);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_CALLBACK_WRAPPERS
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRigModifier(); \
	friend struct Z_Construct_UClass_UIsdkRigModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRigModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkRigModifier_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRigModifier)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRigModifier(UIsdkRigModifier&&) = delete; \
	UIsdkRigModifier(const UIsdkRigModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRigModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRigModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkRigModifier) \
	NO_API virtual ~UIsdkRigModifier();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_41_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRigModifier;

// ********** End Class UIsdkRigModifier ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
