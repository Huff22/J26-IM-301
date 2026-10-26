// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/IsdkWorldSubsystem.h"

#ifdef OCULUSINTERACTION_IsdkWorldSubsystem_generated_h
#error "IsdkWorldSubsystem.generated.h already included, missing '#pragma once' in IsdkWorldSubsystem.h"
#endif
#define OCULUSINTERACTION_IsdkWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FIsdkWorldFrameEventDelegate ******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_61_DELEGATE \
OCULUSINTERACTION_API void FIsdkWorldFrameEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkWorldFrameEventDelegate);


// ********** End Delegate FIsdkWorldFrameEventDelegate ********************************************

// ********** Begin Class UIsdkWorldSubsystem ******************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWorldSubsystem_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkWorldSubsystem(); \
	friend struct Z_Construct_UClass_UIsdkWorldSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWorldSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkWorldSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkWorldSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UIsdkWorldSubsystem)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_69_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkWorldSubsystem(UIsdkWorldSubsystem&&) = delete; \
	UIsdkWorldSubsystem(const UIsdkWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkWorldSubsystem) \
	NO_API virtual ~UIsdkWorldSubsystem();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_66_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_69_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkWorldSubsystem;

// ********** End Class UIsdkWorldSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
