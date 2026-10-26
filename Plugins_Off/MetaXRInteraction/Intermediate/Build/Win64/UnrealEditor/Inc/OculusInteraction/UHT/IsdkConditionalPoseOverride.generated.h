// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IsdkConditionalPoseOverride.h"

#ifdef OCULUSINTERACTION_IsdkConditionalPoseOverride_generated_h
#error "IsdkConditionalPoseOverride.generated.h already included, missing '#pragma once' in IsdkConditionalPoseOverride.h"
#endif
#define OCULUSINTERACTION_IsdkConditionalPoseOverride_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkConditionalPoseOverride *********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRootOverrideActive); \
	DECLARE_FUNCTION(execIsJointsOverrideActive); \
	DECLARE_FUNCTION(execResetJointsOverride); \
	DECLARE_FUNCTION(execGetJointsOverride); \
	DECLARE_FUNCTION(execSetJointsOverride); \
	DECLARE_FUNCTION(execResetRootOverride); \
	DECLARE_FUNCTION(execGetRootOverride); \
	DECLARE_FUNCTION(execSetRootOverride);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkConditionalPoseOverride(); \
	friend struct Z_Construct_UClass_UIsdkConditionalPoseOverride_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConditionalPoseOverride, UIsdkConditional, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConditionalPoseOverride)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConditionalPoseOverride(UIsdkConditionalPoseOverride&&) = delete; \
	UIsdkConditionalPoseOverride(const UIsdkConditionalPoseOverride&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkConditionalPoseOverride); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConditionalPoseOverride); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkConditionalPoseOverride) \
	NO_API virtual ~UIsdkConditionalPoseOverride();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_33_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConditionalPoseOverride;

// ********** End Class UIsdkConditionalPoseOverride ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalPoseOverride_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
