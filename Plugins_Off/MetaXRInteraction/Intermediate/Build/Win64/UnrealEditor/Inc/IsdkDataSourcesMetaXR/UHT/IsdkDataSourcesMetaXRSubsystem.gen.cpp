// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkDataSourcesMetaXRSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkDataSourcesMetaXRSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkDataSourcesMetaXRSubsystem ******************************************
void UIsdkDataSourcesMetaXRSubsystem::StaticRegisterNativesUIsdkDataSourcesMetaXRSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem;
UClass* UIsdkDataSourcesMetaXRSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkDataSourcesMetaXRSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkDataSourcesMetaXRSubsystem"),
			Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkDataSourcesMetaXRSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_NoRegister()
{
	return UIsdkDataSourcesMetaXRSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkDataSourcesMetaXRSubsystem\n * @brief Manages the setup and lifecycle of data sources from the MetaXR plugin, such as hands,\n * controllers, and HMDs, within the Interaction SDK.\n *\n * This subsystem automates the creation and management of data sources originated from the MetaXR\n * plugin which are created through the UIsdkTrackedDataSourceRigComponent, making it easier to\n * integrate tracking into your project without needing to manually handle the setup.\n *\n * @see UIsdkFromMetaXRHandDataSource\n * @see UIsdkFromMetaXRControllerDataSource\n * @see UIsdkFromMetaXRHmdDataSource\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "IsdkDataSourcesMetaXRSubsystem.h" },
		{ "ModuleRelativePath", "Public/IsdkDataSourcesMetaXRSubsystem.h" },
		{ "ToolTip", "@class UIsdkDataSourcesMetaXRSubsystem\n@brief Manages the setup and lifecycle of data sources from the MetaXR plugin, such as hands,\ncontrollers, and HMDs, within the Interaction SDK.\n\nThis subsystem automates the creation and management of data sources originated from the MetaXR\nplugin which are created through the UIsdkTrackedDataSourceRigComponent, making it easier to\nintegrate tracking into your project without needing to manually handle the setup.\n\n@see UIsdkFromMetaXRHandDataSource\n@see UIsdkFromMetaXRControllerDataSource\n@see UIsdkFromMetaXRHmdDataSource\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkDataSourcesMetaXRSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, (int32)VTABLE_OFFSET(UIsdkDataSourcesMetaXRSubsystem, IIsdkITrackingDataSubsystem), false },  // 3351586210
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::ClassParams = {
	&UIsdkDataSourcesMetaXRSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkDataSourcesMetaXRSubsystem);
UIsdkDataSourcesMetaXRSubsystem::~UIsdkDataSourcesMetaXRSubsystem() {}
// ********** End Class UIsdkDataSourcesMetaXRSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_IsdkDataSourcesMetaXRSubsystem_h__Script_IsdkDataSourcesMetaXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkDataSourcesMetaXRSubsystem, UIsdkDataSourcesMetaXRSubsystem::StaticClass, TEXT("UIsdkDataSourcesMetaXRSubsystem"), &Z_Registration_Info_UClass_UIsdkDataSourcesMetaXRSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkDataSourcesMetaXRSubsystem), 312941018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_IsdkDataSourcesMetaXRSubsystem_h__Script_IsdkDataSourcesMetaXR_415660094(TEXT("/Script/IsdkDataSourcesMetaXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_IsdkDataSourcesMetaXRSubsystem_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_IsdkDataSourcesMetaXRSubsystem_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
