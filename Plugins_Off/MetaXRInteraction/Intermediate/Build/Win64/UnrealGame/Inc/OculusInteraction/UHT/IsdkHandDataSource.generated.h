// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkHandDataSource.h"

#ifdef OCULUSINTERACTION_IsdkHandDataSource_generated_h
#error "IsdkHandDataSource.generated.h already included, missing '#pragma once' in IsdkHandDataSource.h"
#endif
#define OCULUSINTERACTION_IsdkHandDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
class UIsdkHandData;

// ********** Begin Class UIsdkHandDataSource ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBoneMaps); \
	DECLARE_FUNCTION(execGetHandData_Implementation);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandDataSource(); \
	friend struct Z_Construct_UClass_UIsdkHandDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandDataSource, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkHandDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandDataSource(UIsdkHandDataSource&&) = delete; \
	UIsdkHandDataSource(const UIsdkHandDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandDataSource); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandDataSource) \
	NO_API virtual ~UIsdkHandDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_50_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandDataSource;

// ********** End Class UIsdkHandDataSource ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
