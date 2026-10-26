// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkPokeLimiterRigModifier.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkPokeLimiterRigModifier_generated_h
#error "IsdkPokeLimiterRigModifier.generated.h already included, missing '#pragma once' in IsdkPokeLimiterRigModifier.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkPokeLimiterRigModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkInteractionPointerEvent;

// ********** Begin Class UIsdkPokeLimiterRigModifier **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyRootPokeLimiting); \
	DECLARE_FUNCTION(execHandleRelayedPointerEvent);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPokeLimiterRigModifier(); \
	friend struct Z_Construct_UClass_UIsdkPokeLimiterRigModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeLimiterRigModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPokeLimiterRigModifier, UIsdkRigModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkPokeLimiterRigModifier_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPokeLimiterRigModifier)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPokeLimiterRigModifier(UIsdkPokeLimiterRigModifier&&) = delete; \
	UIsdkPokeLimiterRigModifier(const UIsdkPokeLimiterRigModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPokeLimiterRigModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPokeLimiterRigModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPokeLimiterRigModifier) \
	NO_API virtual ~UIsdkPokeLimiterRigModifier();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_42_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPokeLimiterRigModifier;

// ********** End Class UIsdkPokeLimiterRigModifier ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeLimiterRigModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
