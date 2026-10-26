// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkControllerDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkControllerDataSource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkControllerDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkControllerDataSource ************************************************
void UIsdkControllerDataSource::StaticRegisterNativesUIsdkControllerDataSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkControllerDataSource;
UClass* UIsdkControllerDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkControllerDataSource;
	if (!Z_Registration_Info_UClass_UIsdkControllerDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkControllerDataSource"),
			Z_Registration_Info_UClass_UIsdkControllerDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkControllerDataSource,
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
	return Z_Registration_Info_UClass_UIsdkControllerDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkControllerDataSource_NoRegister()
{
	return UIsdkControllerDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkControllerDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/* Data source Actor Component for Controllers that implements the IsdkIRootPose interface */" },
		{ "IncludePath", "DataSources/IsdkControllerDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkControllerDataSource.h" },
		{ "ToolTip", "Data source Actor Component for Controllers that implements the IsdkIRootPose interface" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkControllerDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkControllerDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkControllerDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkControllerDataSource, IIsdkIRootPose), false },  // 2159373520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkControllerDataSource_Statics::ClassParams = {
	&UIsdkControllerDataSource::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkControllerDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkControllerDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkControllerDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkControllerDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkControllerDataSource.OuterSingleton, Z_Construct_UClass_UIsdkControllerDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkControllerDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkControllerDataSource);
UIsdkControllerDataSource::~UIsdkControllerDataSource() {}
// ********** End Class UIsdkControllerDataSource **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkControllerDataSource, UIsdkControllerDataSource::StaticClass, TEXT("UIsdkControllerDataSource"), &Z_Registration_Info_UClass_UIsdkControllerDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkControllerDataSource), 2432328758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h__Script_OculusInteraction_2089212669(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkControllerDataSource_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
