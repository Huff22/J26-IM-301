// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Internal/BlankComponent/IsdkBlankComponent.h"

#ifdef OCULUSINTERACTION_IsdkBlankComponent_generated_h
#error "IsdkBlankComponent.generated.h already included, missing '#pragma once' in IsdkBlankComponent.h"
#endif
#define OCULUSINTERACTION_IsdkBlankComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkISurfacePatch;

// ********** Begin Class UIsdkBlankComponent ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSurfacePatch); \
	DECLARE_FUNCTION(execSetVectorOfSomething); \
	DECLARE_FUNCTION(execGetSurfacePatch); \
	DECLARE_FUNCTION(execGetVectorOfSomething);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkBlankComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkBlankComponent(); \
	friend struct Z_Construct_UClass_UIsdkBlankComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkBlankComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkBlankComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkBlankComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkBlankComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkBlankComponent(UIsdkBlankComponent&&) = delete; \
	UIsdkBlankComponent(const UIsdkBlankComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkBlankComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkBlankComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkBlankComponent) \
	NO_API virtual ~UIsdkBlankComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_47_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkBlankComponent;

// ********** End Class UIsdkBlankComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Internal_BlankComponent_IsdkBlankComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
