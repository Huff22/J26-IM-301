// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkFromOpenXRControllerDataSource.h"

#ifdef ISDKDATASOURCESOPENXR_IsdkFromOpenXRControllerDataSource_generated_h
#error "IsdkFromOpenXRControllerDataSource.generated.h already included, missing '#pragma once' in IsdkFromOpenXRControllerDataSource.h"
#endif
#define ISDKDATASOURCESOPENXR_IsdkFromOpenXRControllerDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;
class UMotionControllerComponent;

// ********** Begin Class UIsdkFromOpenXRControllerDataSource **************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRootPoseConnectedConditional_Implementation); \
	DECLARE_FUNCTION(execGetMotionController);


ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkFromOpenXRControllerDataSource(); \
	friend struct Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkFromOpenXRControllerDataSource, UIsdkExternalHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsdkDataSourcesOpenXR"), Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkFromOpenXRControllerDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkFromOpenXRControllerDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkFromOpenXRControllerDataSource(UIsdkFromOpenXRControllerDataSource&&) = delete; \
	UIsdkFromOpenXRControllerDataSource(const UIsdkFromOpenXRControllerDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkFromOpenXRControllerDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkFromOpenXRControllerDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkFromOpenXRControllerDataSource) \
	NO_API virtual ~UIsdkFromOpenXRControllerDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_53_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkFromOpenXRControllerDataSource;

// ********** End Class UIsdkFromOpenXRControllerDataSource ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
