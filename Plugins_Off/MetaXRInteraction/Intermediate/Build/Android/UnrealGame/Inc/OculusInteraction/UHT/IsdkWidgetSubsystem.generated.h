// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/IsdkWidgetSubsystem.h"

#ifdef OCULUSINTERACTION_IsdkWidgetSubsystem_generated_h
#error "IsdkWidgetSubsystem.generated.h already included, missing '#pragma once' in IsdkWidgetSubsystem.h"
#endif
#define OCULUSINTERACTION_IsdkWidgetSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FIsdkVirtualUserInfo;

// ********** Begin Class UIsdkWidgetSubsystemBase *************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkWidgetSubsystemBase(); \
	friend struct Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkWidgetSubsystemBase, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkWidgetSubsystemBase_NoRegister) \
	DECLARE_SERIALIZER(UIsdkWidgetSubsystemBase)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkWidgetSubsystemBase(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkWidgetSubsystemBase(UIsdkWidgetSubsystemBase&&) = delete; \
	UIsdkWidgetSubsystemBase(const UIsdkWidgetSubsystemBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkWidgetSubsystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkWidgetSubsystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkWidgetSubsystemBase) \
	NO_API virtual ~UIsdkWidgetSubsystemBase();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_29_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_32_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkWidgetSubsystemBase;

// ********** End Class UIsdkWidgetSubsystemBase ***************************************************

// ********** Begin ScriptStruct FIsdkVirtualUserInfo **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkVirtualUserInfo;
// ********** End ScriptStruct FIsdkVirtualUserInfo ************************************************

// ********** Begin Class UIsdkWidgetSubsystem *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVirtualUserInfo); \
	DECLARE_FUNCTION(execUnregisterVirtualUserInfo); \
	DECLARE_FUNCTION(execRegisterVirtualUserInfo);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystem_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkWidgetSubsystem(); \
	friend struct Z_Construct_UClass_UIsdkWidgetSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkWidgetSubsystem, UIsdkWidgetSubsystemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkWidgetSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UIsdkWidgetSubsystem)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkWidgetSubsystem(UIsdkWidgetSubsystem&&) = delete; \
	UIsdkWidgetSubsystem(const UIsdkWidgetSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkWidgetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkWidgetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkWidgetSubsystem) \
	NO_API virtual ~UIsdkWidgetSubsystem();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_54_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkWidgetSubsystem;

// ********** End Class UIsdkWidgetSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
