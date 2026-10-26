// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkConsoleTest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConsoleTest() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMockConsoleReceiver();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkMockConsoleReceiver_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkMockConsoleReceiver *************************************************
void UIsdkMockConsoleReceiver::StaticRegisterNativesUIsdkMockConsoleReceiver()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkMockConsoleReceiver;
UClass* UIsdkMockConsoleReceiver::GetPrivateStaticClass()
{
	using TClass = UIsdkMockConsoleReceiver;
	if (!Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkMockConsoleReceiver"),
			Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.InnerSingleton,
			StaticRegisterNativesUIsdkMockConsoleReceiver,
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
	return Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkMockConsoleReceiver_NoRegister()
{
	return UIsdkMockConsoleReceiver::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkConsoleTest.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkConsoleTest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkMockConsoleReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister, (int32)VTABLE_OFFSET(UIsdkMockConsoleReceiver, IIsdkConsoleReceiver), false },  // 101292119
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::ClassParams = {
	&UIsdkMockConsoleReceiver::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkMockConsoleReceiver()
{
	if (!Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.OuterSingleton, Z_Construct_UClass_UIsdkMockConsoleReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkMockConsoleReceiver.OuterSingleton;
}
UIsdkMockConsoleReceiver::UIsdkMockConsoleReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkMockConsoleReceiver);
UIsdkMockConsoleReceiver::~UIsdkMockConsoleReceiver() {}
// ********** End Class UIsdkMockConsoleReceiver ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkConsoleTest_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkMockConsoleReceiver, UIsdkMockConsoleReceiver::StaticClass, TEXT("UIsdkMockConsoleReceiver"), &Z_Registration_Info_UClass_UIsdkMockConsoleReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkMockConsoleReceiver), 3992997641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkConsoleTest_h__Script_OculusInteraction_1897256681(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkConsoleTest_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Private_Tests_IsdkConsoleTest_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
