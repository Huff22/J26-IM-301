// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkRuntimeSettings.h"

#ifdef OCULUSINTERACTION_IsdkRuntimeSettings_generated_h
#error "IsdkRuntimeSettings.generated.h already included, missing '#pragma once' in IsdkRuntimeSettings.h"
#endif
#define OCULUSINTERACTION_IsdkRuntimeSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkRuntimeSettings *****************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRuntimeSettings_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkRuntimeSettings(); \
	friend struct Z_Construct_UClass_UIsdkRuntimeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRuntimeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkRuntimeSettings_NoRegister) \
	DECLARE_SERIALIZER(UIsdkRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkRuntimeSettings(UIsdkRuntimeSettings&&) = delete; \
	UIsdkRuntimeSettings(const UIsdkRuntimeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkRuntimeSettings) \
	NO_API virtual ~UIsdkRuntimeSettings();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_47_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_50_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkRuntimeSettings;

// ********** End Class UIsdkRuntimeSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
