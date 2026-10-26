// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkFromOpenXRHmdDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkFromOpenXRHmdDataSource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFromOpenXRHmdDataSource *********************************************
void UIsdkFromOpenXRHmdDataSource::StaticRegisterNativesUIsdkFromOpenXRHmdDataSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource;
UClass* UIsdkFromOpenXRHmdDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFromOpenXRHmdDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFromOpenXRHmdDataSource"),
			Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFromOpenXRHmdDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_NoRegister()
{
	return UIsdkFromOpenXRHmdDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkFromOpenXRHmdDataSource\n * @brief Manages OpenXR HMD tracking data and helps integrate into your VR project.\n *\n * This class facilitates the integration of OpenXR HMD tracking data by providing access to\n * essential information such as the headset's poses and tracking state. It ensures that this data\n * is updated each frame, maintaining its relevance throughout the application's lifecycle. An\n * instance of this data source is created in the Interaction SDK's prebuilt rig component via\n * UIsdkTrackedDataSourceRigComponent.\n *\n * @see IIsdkIHmdDataSource\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "DataSources/IsdkFromOpenXRHmdDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHmdDataSource.h" },
		{ "ToolTip", "@class UIsdkFromOpenXRHmdDataSource\n@brief Manages OpenXR HMD tracking data and helps integrate into your VR project.\n\nThis class facilitates the integration of OpenXR HMD tracking data by providing access to\nessential information such as the headset's poses and tracking state. It ensures that this data\nis updated each frame, maintaining its relevance throughout the application's lifecycle. An\ninstance of this data source is created in the Interaction SDK's prebuilt rig component via\nUIsdkTrackedDataSourceRigComponent.\n\n@see IIsdkIHmdDataSource\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFromOpenXRHmdDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromOpenXRHmdDataSource, IIsdkIHmdDataSource), false },  // 1922529606
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::ClassParams = {
	&UIsdkFromOpenXRHmdDataSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFromOpenXRHmdDataSource);
UIsdkFromOpenXRHmdDataSource::~UIsdkFromOpenXRHmdDataSource() {}
// ********** End Class UIsdkFromOpenXRHmdDataSource ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHmdDataSource_h__Script_IsdkDataSourcesOpenXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFromOpenXRHmdDataSource, UIsdkFromOpenXRHmdDataSource::StaticClass, TEXT("UIsdkFromOpenXRHmdDataSource"), &Z_Registration_Info_UClass_UIsdkFromOpenXRHmdDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFromOpenXRHmdDataSource), 4060921889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHmdDataSource_h__Script_IsdkDataSourcesOpenXR_345724632(TEXT("/Script/IsdkDataSourcesOpenXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHmdDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHmdDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
