// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utilities/IsdkDebugUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkDebugUtils() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkDebugUtils();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkDebugUtils_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkDebugUtils **********************************************************
void UIsdkDebugUtils::StaticRegisterNativesUIsdkDebugUtils()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkDebugUtils;
UClass* UIsdkDebugUtils::GetPrivateStaticClass()
{
	using TClass = UIsdkDebugUtils;
	if (!Z_Registration_Info_UClass_UIsdkDebugUtils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkDebugUtils"),
			Z_Registration_Info_UClass_UIsdkDebugUtils.InnerSingleton,
			StaticRegisterNativesUIsdkDebugUtils,
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
	return Z_Registration_Info_UClass_UIsdkDebugUtils.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkDebugUtils_NoRegister()
{
	return UIsdkDebugUtils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkDebugUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Miscellaneous functions helpful for debugging.  Tools here may be specific\n * to the ISDK library, or for general purpose use.\n */" },
		{ "IncludePath", "Utilities/IsdkDebugUtils.h" },
		{ "ModuleRelativePath", "Public/Utilities/IsdkDebugUtils.h" },
		{ "ToolTip", "Miscellaneous functions helpful for debugging.  Tools here may be specific\nto the ISDK library, or for general purpose use." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkDebugUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkDebugUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDebugUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkDebugUtils_Statics::ClassParams = {
	&UIsdkDebugUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkDebugUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkDebugUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkDebugUtils()
{
	if (!Z_Registration_Info_UClass_UIsdkDebugUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkDebugUtils.OuterSingleton, Z_Construct_UClass_UIsdkDebugUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkDebugUtils.OuterSingleton;
}
UIsdkDebugUtils::UIsdkDebugUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkDebugUtils);
UIsdkDebugUtils::~UIsdkDebugUtils() {}
// ********** End Class UIsdkDebugUtils ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkDebugUtils_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkDebugUtils, UIsdkDebugUtils::StaticClass, TEXT("UIsdkDebugUtils"), &Z_Registration_Info_UClass_UIsdkDebugUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkDebugUtils), 2768433348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkDebugUtils_h__Script_OculusInteraction_4102202372(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkDebugUtils_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Utilities_IsdkDebugUtils_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
