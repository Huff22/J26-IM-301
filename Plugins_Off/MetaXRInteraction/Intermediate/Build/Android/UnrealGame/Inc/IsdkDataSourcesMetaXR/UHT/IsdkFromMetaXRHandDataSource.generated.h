// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkFromMetaXRHandDataSource.h"

#ifdef ISDKDATASOURCESMETAXR_IsdkFromMetaXRHandDataSource_generated_h
#error "IsdkFromMetaXRHandDataSource.generated.h already included, missing '#pragma once' in IsdkFromMetaXRHandDataSource.h"
#endif
#define ISDKDATASOURCESMETAXR_IsdkFromMetaXRHandDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;
class UMotionControllerComponent;

// ********** Begin ScriptStruct FBoneOVRToOXRMap **************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics; \
	ISDKDATASOURCESMETAXR_API static class UScriptStruct* StaticStruct();


struct FBoneOVRToOXRMap;
// ********** End ScriptStruct FBoneOVRToOXRMap ****************************************************

// ********** Begin Class UIsdkFromMetaXRHandDataSource ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAllowInvalidTrackedData); \
	DECLARE_FUNCTION(execGetRootPoseHighConfidenceConditional_Implementation); \
	DECLARE_FUNCTION(execGetRootPoseConnectedConditional_Implementation); \
	DECLARE_FUNCTION(execGetAllowInvalidTrackedData); \
	DECLARE_FUNCTION(execGetMotionController);


ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkFromMetaXRHandDataSource(); \
	friend struct Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkFromMetaXRHandDataSource, UIsdkExternalHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsdkDataSourcesMetaXR"), Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkFromMetaXRHandDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkFromMetaXRHandDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkFromMetaXRHandDataSource(UIsdkFromMetaXRHandDataSource&&) = delete; \
	UIsdkFromMetaXRHandDataSource(const UIsdkFromMetaXRHandDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkFromMetaXRHandDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkFromMetaXRHandDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkFromMetaXRHandDataSource) \
	NO_API virtual ~UIsdkFromMetaXRHandDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_88_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkFromMetaXRHandDataSource;

// ********** End Class UIsdkFromMetaXRHandDataSource **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
