// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkExternalHandDataModifierTestFixtures.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkExternalHandDataModifierTestFixtures() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkExternalHandDataModifierTestFixtures ********************************
void UIsdkExternalHandDataModifierTestFixtures::StaticRegisterNativesUIsdkExternalHandDataModifierTestFixtures()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures;
UClass* UIsdkExternalHandDataModifierTestFixtures::GetPrivateStaticClass()
{
	using TClass = UIsdkExternalHandDataModifierTestFixtures;
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkExternalHandDataModifierTestFixtures"),
			Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.InnerSingleton,
			StaticRegisterNativesUIsdkExternalHandDataModifierTestFixtures,
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
	return Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_NoRegister()
{
	return UIsdkExternalHandDataModifierTestFixtures::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkExternalHandDataModifierTestFixtures.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkExternalHandDataModifierTestFixtures.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkExternalHandDataModifierTestFixtures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::ClassParams = {
	&UIsdkExternalHandDataModifierTestFixtures::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures()
{
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.OuterSingleton, Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures.OuterSingleton;
}
UIsdkExternalHandDataModifierTestFixtures::UIsdkExternalHandDataModifierTestFixtures() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkExternalHandDataModifierTestFixtures);
UIsdkExternalHandDataModifierTestFixtures::~UIsdkExternalHandDataModifierTestFixtures() {}
// ********** End Class UIsdkExternalHandDataModifierTestFixtures **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkExternalHandDataModifierTestFixtures_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkExternalHandDataModifierTestFixtures, UIsdkExternalHandDataModifierTestFixtures::StaticClass, TEXT("UIsdkExternalHandDataModifierTestFixtures"), &Z_Registration_Info_UClass_UIsdkExternalHandDataModifierTestFixtures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkExternalHandDataModifierTestFixtures), 2255528606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkExternalHandDataModifierTestFixtures_h__Script_OculusInteraction_1759050128(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkExternalHandDataModifierTestFixtures_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkExternalHandDataModifierTestFixtures_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
