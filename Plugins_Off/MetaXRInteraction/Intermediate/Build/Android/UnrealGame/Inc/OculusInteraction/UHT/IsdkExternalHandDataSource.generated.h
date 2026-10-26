// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkExternalHandDataSource.h"

#ifdef OCULUSINTERACTION_IsdkExternalHandDataSource_generated_h
#error "IsdkExternalHandDataSource.generated.h already included, missing '#pragma once' in IsdkExternalHandDataSource.h"
#endif
#define OCULUSINTERACTION_IsdkExternalHandDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandData;
struct FIsdkExternalHandPositionFrame_FingerJointMapping;
struct FIsdkExternalHandPositionFrame_ThumbJointMapping;

// ********** Begin Class UIsdkExternalHandDataSource **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPopulateOpenXRBoneMaps); \
	DECLARE_FUNCTION(execSetHandJointMappings); \
	DECLARE_FUNCTION(execSetHandData);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkExternalHandDataSource(); \
	friend struct Z_Construct_UClass_UIsdkExternalHandDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkExternalHandDataSource, UIsdkHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkExternalHandDataSource)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkExternalHandDataSource(UIsdkExternalHandDataSource&&) = delete; \
	UIsdkExternalHandDataSource(const UIsdkExternalHandDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkExternalHandDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkExternalHandDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkExternalHandDataSource) \
	NO_API virtual ~UIsdkExternalHandDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_52_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkExternalHandDataSource;

// ********** End Class UIsdkExternalHandDataSource ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
