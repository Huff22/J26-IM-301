// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkControllerDataSource.h"

#ifdef OCULUSINTERACTION_IsdkControllerDataSource_generated_h
#error "IsdkControllerDataSource.generated.h already included, missing '#pragma once' in IsdkControllerDataSource.h"
#endif
#define OCULUSINTERACTION_IsdkControllerDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkControllerDataSource ************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerDataSource(); \
	friend struct Z_Construct_UClass_UIsdkControllerDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerDataSource, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkControllerDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkControllerDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerDataSource(UIsdkControllerDataSource&&) = delete; \
	UIsdkControllerDataSource(const UIsdkControllerDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerDataSource) \
	NO_API virtual ~UIsdkControllerDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_29_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_33_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerDataSource;

// ********** End Class UIsdkControllerDataSource **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
