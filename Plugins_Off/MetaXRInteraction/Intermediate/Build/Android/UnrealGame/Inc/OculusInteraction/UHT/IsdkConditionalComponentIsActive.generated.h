// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/IsdkConditionalComponentIsActive.h"

#ifdef OCULUSINTERACTION_IsdkConditionalComponentIsActive_generated_h
#error "IsdkConditionalComponentIsActive.generated.h already included, missing '#pragma once' in IsdkConditionalComponentIsActive.h"
#endif
#define OCULUSINTERACTION_IsdkConditionalComponentIsActive_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UActorComponent;

// ********** Begin Class UIsdkConditionalComponentIsActive ****************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleComponentDeactivated); \
	DECLARE_FUNCTION(execHandleComponentActivated); \
	DECLARE_FUNCTION(execSetComponent); \
	DECLARE_FUNCTION(execGetComponent);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkConditionalComponentIsActive(); \
	friend struct Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConditionalComponentIsActive, UIsdkConditional, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConditionalComponentIsActive)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConditionalComponentIsActive(UIsdkConditionalComponentIsActive&&) = delete; \
	UIsdkConditionalComponentIsActive(const UIsdkConditionalComponentIsActive&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkConditionalComponentIsActive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConditionalComponentIsActive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkConditionalComponentIsActive) \
	NO_API virtual ~UIsdkConditionalComponentIsActive();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_40_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConditionalComponentIsActive;

// ********** End Class UIsdkConditionalComponentIsActive ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
