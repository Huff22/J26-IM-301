// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkOneEuroFilterTestFixtures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkOneEuroFilterTestFixtures() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkOneEuroFilterTestFixtures *******************************************
void UIsdkOneEuroFilterTestFixtures::StaticRegisterNativesUIsdkOneEuroFilterTestFixtures()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures;
UClass* UIsdkOneEuroFilterTestFixtures::GetPrivateStaticClass()
{
	using TClass = UIsdkOneEuroFilterTestFixtures;
	if (!Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkOneEuroFilterTestFixtures"),
			Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.InnerSingleton,
			StaticRegisterNativesUIsdkOneEuroFilterTestFixtures,
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
	return Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_NoRegister()
{
	return UIsdkOneEuroFilterTestFixtures::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkOneEuroFilterTestFixtures.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkOneEuroFilterTestFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneEuroFilterDataModifier_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkOneEuroFilterTestFixtures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExternalHandDataSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkOneEuroFilterTestFixtures.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneEuroFilterDataModifier;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExternalHandDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkOneEuroFilterTestFixtures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::NewProp_OneEuroFilterDataModifier = { "OneEuroFilterDataModifier", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkOneEuroFilterTestFixtures, OneEuroFilterDataModifier), Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneEuroFilterDataModifier_MetaData), NewProp_OneEuroFilterDataModifier_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::NewProp_ExternalHandDataSource = { "ExternalHandDataSource", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkOneEuroFilterTestFixtures, ExternalHandDataSource), Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExternalHandDataSource_MetaData), NewProp_ExternalHandDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::NewProp_OneEuroFilterDataModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::NewProp_ExternalHandDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::ClassParams = {
	&UIsdkOneEuroFilterTestFixtures::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures()
{
	if (!Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.OuterSingleton, Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures.OuterSingleton;
}
UIsdkOneEuroFilterTestFixtures::UIsdkOneEuroFilterTestFixtures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkOneEuroFilterTestFixtures);
UIsdkOneEuroFilterTestFixtures::~UIsdkOneEuroFilterTestFixtures() {}
// ********** End Class UIsdkOneEuroFilterTestFixtures *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkOneEuroFilterTestFixtures_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkOneEuroFilterTestFixtures, UIsdkOneEuroFilterTestFixtures::StaticClass, TEXT("UIsdkOneEuroFilterTestFixtures"), &Z_Registration_Info_UClass_UIsdkOneEuroFilterTestFixtures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkOneEuroFilterTestFixtures), 3146820840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkOneEuroFilterTestFixtures_h__Script_OculusInteraction_3390101635(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkOneEuroFilterTestFixtures_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkOneEuroFilterTestFixtures_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
