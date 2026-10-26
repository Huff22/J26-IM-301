// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkFromOpenXRHandDataSource.h"

#ifdef ISDKDATASOURCESOPENXR_IsdkFromOpenXRHandDataSource_generated_h
#error "IsdkFromOpenXRHandDataSource.generated.h already included, missing '#pragma once' in IsdkFromOpenXRHandDataSource.h"
#endif
#define ISDKDATASOURCESOPENXR_IsdkFromOpenXRHandDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;
class UMotionControllerComponent;

// ********** Begin Class UIsdkFromOpenXRHandDataSource ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllowInvalidTrackedData); \
	DECLARE_FUNCTION(execSetMotionController); \
	DECLARE_FUNCTION(execGetRootPoseHighConfidenceConditional_Implementation); \
	DECLARE_FUNCTION(execGetRootPoseConnectedConditional_Implementation); \
	DECLARE_FUNCTION(execGetAllowInvalidTrackedData); \
	DECLARE_FUNCTION(execGetMotionController);


ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkFromOpenXRHandDataSource(); \
	friend struct Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkFromOpenXRHandDataSource, UIsdkExternalHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsdkDataSourcesOpenXR"), Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkFromOpenXRHandDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkFromOpenXRHandDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkFromOpenXRHandDataSource(UIsdkFromOpenXRHandDataSource&&) = delete; \
	UIsdkFromOpenXRHandDataSource(const UIsdkFromOpenXRHandDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkFromOpenXRHandDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkFromOpenXRHandDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkFromOpenXRHandDataSource) \
	NO_API virtual ~UIsdkFromOpenXRHandDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_53_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkFromOpenXRHandDataSource;

// ********** End Class UIsdkFromOpenXRHandDataSource **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
