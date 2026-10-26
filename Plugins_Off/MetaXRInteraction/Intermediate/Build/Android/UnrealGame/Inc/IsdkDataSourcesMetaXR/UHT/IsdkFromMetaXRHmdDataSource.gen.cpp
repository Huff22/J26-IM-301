// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkFromMetaXRHmdDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkFromMetaXRHmdDataSource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFromMetaXRHmdDataSource *********************************************
void UIsdkFromMetaXRHmdDataSource::StaticRegisterNativesUIsdkFromMetaXRHmdDataSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource;
UClass* UIsdkFromMetaXRHmdDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFromMetaXRHmdDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFromMetaXRHmdDataSource"),
			Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFromMetaXRHmdDataSource,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_NoRegister()
{
	return UIsdkFromMetaXRHmdDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkFromMetaXRHmdDataSource\n * @brief Manages HMD tracking data from the MetaXR plugin and helps integrate into your VR project.\n *\n * This class facilitates the integration of HMD tracking data from the MetaXR plugin by providing\n * access to essential information such as the headset's poses and tracking state. It ensures that\n * this data is updated each frame, maintaining its relevance throughout the application's\n * lifecycle. An instance of this data source is created in the Interaction SDK's prebuilt rig\n * component via UIsdkTrackedDataSourceRigComponent.\n *\n * @see IIsdkIHmdDataSource\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK From MetaXR HMD Data Source" },
		{ "IncludePath", "DataSources/IsdkFromMetaXRHmdDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHmdDataSource.h" },
		{ "ToolTip", "@class UIsdkFromMetaXRHmdDataSource\n@brief Manages HMD tracking data from the MetaXR plugin and helps integrate into your VR project.\n\nThis class facilitates the integration of HMD tracking data from the MetaXR plugin by providing\naccess to essential information such as the headset's poses and tracking state. It ensures that\nthis data is updated each frame, maintaining its relevance throughout the application's\nlifecycle. An instance of this data source is created in the Interaction SDK's prebuilt rig\ncomponent via UIsdkTrackedDataSourceRigComponent.\n\n@see IIsdkIHmdDataSource\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFromMetaXRHmdDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromMetaXRHmdDataSource, IIsdkIHmdDataSource), false },  // 1922529606
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::ClassParams = {
	&UIsdkFromMetaXRHmdDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource.OuterSingleton;
}
UIsdkFromMetaXRHmdDataSource::UIsdkFromMetaXRHmdDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFromMetaXRHmdDataSource);
UIsdkFromMetaXRHmdDataSource::~UIsdkFromMetaXRHmdDataSource() {}
// ********** End Class UIsdkFromMetaXRHmdDataSource ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHmdDataSource_h__Script_IsdkDataSourcesMetaXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFromMetaXRHmdDataSource, UIsdkFromMetaXRHmdDataSource::StaticClass, TEXT("UIsdkFromMetaXRHmdDataSource"), &Z_Registration_Info_UClass_UIsdkFromMetaXRHmdDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFromMetaXRHmdDataSource), 3955790853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHmdDataSource_h__Script_IsdkDataSourcesMetaXR_3826362946(TEXT("/Script/IsdkDataSourcesMetaXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHmdDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHmdDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
