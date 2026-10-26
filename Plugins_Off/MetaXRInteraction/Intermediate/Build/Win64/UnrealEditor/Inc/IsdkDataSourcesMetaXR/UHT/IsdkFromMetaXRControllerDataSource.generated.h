// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkFromMetaXRControllerDataSource.h"

#ifdef ISDKDATASOURCESMETAXR_IsdkFromMetaXRControllerDataSource_generated_h
#error "IsdkFromMetaXRControllerDataSource.generated.h already included, missing '#pragma once' in IsdkFromMetaXRControllerDataSource.h"
#endif
#define ISDKDATASOURCESMETAXR_IsdkFromMetaXRControllerDataSource_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditional;
class UMotionControllerComponent;

// ********** Begin Class UIsdkFromMetaXRControllerDataSource **************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRootPoseConnectedConditional_Implementation); \
	DECLARE_FUNCTION(execGetMotionController);


ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRControllerDataSource_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkFromMetaXRControllerDataSource(); \
	friend struct Z_Construct_UClass_UIsdkFromMetaXRControllerDataSource_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRControllerDataSource_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkFromMetaXRControllerDataSource, UIsdkExternalHandDataSource, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IsdkDataSourcesMetaXR"), Z_Construct_UClass_UIsdkFromMetaXRControllerDataSource_NoRegister) \
	DECLARE_SERIALIZER(UIsdkFromMetaXRControllerDataSource) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkFromMetaXRControllerDataSource*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkFromMetaXRControllerDataSource(UIsdkFromMetaXRControllerDataSource&&) = delete; \
	UIsdkFromMetaXRControllerDataSource(const UIsdkFromMetaXRControllerDataSource&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkFromMetaXRControllerDataSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkFromMetaXRControllerDataSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkFromMetaXRControllerDataSource) \
	NO_API virtual ~UIsdkFromMetaXRControllerDataSource();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_56_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkFromMetaXRControllerDataSource;

// ********** End Class UIsdkFromMetaXRControllerDataSource ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRControllerDataSource_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
