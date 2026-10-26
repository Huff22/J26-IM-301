// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Debug/IsdkHasDebugSegments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHasDebugSegments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHasDebugSegments();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkHasDebugSegments ************************************************
void UIsdkHasDebugSegments::StaticRegisterNativesUIsdkHasDebugSegments()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHasDebugSegments;
UClass* UIsdkHasDebugSegments::GetPrivateStaticClass()
{
	using TClass = UIsdkHasDebugSegments;
	if (!Z_Registration_Info_UClass_UIsdkHasDebugSegments.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHasDebugSegments"),
			Z_Registration_Info_UClass_UIsdkHasDebugSegments.InnerSingleton,
			StaticRegisterNativesUIsdkHasDebugSegments,
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
	return Z_Registration_Info_UClass_UIsdkHasDebugSegments.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHasDebugSegments_NoRegister()
{
	return UIsdkHasDebugSegments::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHasDebugSegments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Debug/IsdkHasDebugSegments.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkHasDebugSegments>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkHasDebugSegments_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHasDebugSegments_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHasDebugSegments_Statics::ClassParams = {
	&UIsdkHasDebugSegments::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHasDebugSegments_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHasDebugSegments_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHasDebugSegments()
{
	if (!Z_Registration_Info_UClass_UIsdkHasDebugSegments.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHasDebugSegments.OuterSingleton, Z_Construct_UClass_UIsdkHasDebugSegments_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHasDebugSegments.OuterSingleton;
}
UIsdkHasDebugSegments::UIsdkHasDebugSegments(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHasDebugSegments);
// ********** End Interface UIsdkHasDebugSegments **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Debug_IsdkHasDebugSegments_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHasDebugSegments, UIsdkHasDebugSegments::StaticClass, TEXT("UIsdkHasDebugSegments"), &Z_Registration_Info_UClass_UIsdkHasDebugSegments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHasDebugSegments), 3174987218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Debug_IsdkHasDebugSegments_h__Script_OculusInteraction_280526984(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Debug_IsdkHasDebugSegments_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Debug_IsdkHasDebugSegments_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
