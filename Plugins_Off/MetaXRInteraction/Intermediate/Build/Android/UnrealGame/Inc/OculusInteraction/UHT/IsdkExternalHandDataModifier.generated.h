// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkExternalHandDataModifier.h"

#ifdef OCULUSINTERACTION_IsdkExternalHandDataModifier_generated_h
#error "IsdkExternalHandDataModifier.generated.h already included, missing '#pragma once' in IsdkExternalHandDataModifier.h"
#endif
#define OCULUSINTERACTION_IsdkExternalHandDataModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandData;
class UIsdkHandDataSource;

// ********** Begin Delegate FOnHandDataModified ***************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_92_DELEGATE \
static void FOnHandDataModified_DelegateWrapper(const FMulticastScriptDelegate& OnHandDataModified, UIsdkHandDataSource* HandData);


// ********** End Delegate FOnHandDataModified *****************************************************

// ********** Begin Class UIsdkExternalHandDataModifier ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInputDataSource); \
	DECLARE_FUNCTION(execOnModify); \
	DECLARE_FUNCTION(execGetInputDataSource);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkExternalHandDataModifier(); \
	friend struct Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkExternalHandDataModifier, UIsdkExternalHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkExternalHandDataModifier_NoRegister) \
	DECLARE_SERIALIZER(UIsdkExternalHandDataModifier)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkExternalHandDataModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkExternalHandDataModifier(UIsdkExternalHandDataModifier&&) = delete; \
	UIsdkExternalHandDataModifier(const UIsdkExternalHandDataModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkExternalHandDataModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkExternalHandDataModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkExternalHandDataModifier) \
	NO_API virtual ~UIsdkExternalHandDataModifier();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_41_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkExternalHandDataModifier;

// ********** End Class UIsdkExternalHandDataModifier **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
