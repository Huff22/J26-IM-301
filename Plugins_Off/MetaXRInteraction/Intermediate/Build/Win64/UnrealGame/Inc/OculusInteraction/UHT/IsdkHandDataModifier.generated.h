// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkHandDataModifier.h"

#ifdef OCULUSINTERACTION_IsdkHandDataModifier_generated_h
#error "IsdkHandDataModifier.generated.h already included, missing '#pragma once' in IsdkHandDataModifier.h"
#endif
#define OCULUSINTERACTION_IsdkHandDataModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandDataSource;

// ********** Begin Class UIsdkHandDataModifier ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRecursiveUpdate); \
	DECLARE_FUNCTION(execGetRecursiveUpdate); \
	DECLARE_FUNCTION(execSetInputDataSource); \
	DECLARE_FUNCTION(execGetInputDataSource);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandDataModifier(); \
	friend struct Z_Construct_UClass_UIsdkHandDataModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandDataModifier, UIsdkHandDataSource, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandDataModifier_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandDataModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkHandDataModifier*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandDataModifier(UIsdkHandDataModifier&&) = delete; \
	UIsdkHandDataModifier(const UIsdkHandDataModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandDataModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandDataModifier); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandDataModifier) \
	NO_API virtual ~UIsdkHandDataModifier();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_46_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandDataModifier;

// ********** End Class UIsdkHandDataModifier ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
