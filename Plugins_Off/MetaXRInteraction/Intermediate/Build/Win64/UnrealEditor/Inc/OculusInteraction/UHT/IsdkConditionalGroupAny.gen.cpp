// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalGroupAny.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalGroupAny() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAny();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAny_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalGroupAny *************************************************
void UIsdkConditionalGroupAny::StaticRegisterNativesUIsdkConditionalGroupAny()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalGroupAny;
UClass* UIsdkConditionalGroupAny::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalGroupAny;
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupAny.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalGroupAny"),
			Z_Registration_Info_UClass_UIsdkConditionalGroupAny.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalGroupAny,
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
	return Z_Registration_Info_UClass_UIsdkConditionalGroupAny.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalGroupAny_NoRegister()
{
	return UIsdkConditionalGroupAny::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalGroupAny_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalGroupAny\n * @brief Conditional Group that resolves true if ANY contained conditional is true\n *\n * @see UIsdkConditional\n * @see UIsdkConditionalGroupAll\n * @see UIsdkConditionalGroupAny\n * @see UIsdkConditionalGroupNone\n * @see UIsdkConditionalGroupSingle\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalGroupAny.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroupAny.h" },
		{ "ToolTip", "@class UIsdkConditionalGroupAny\n@brief Conditional Group that resolves true if ANY contained conditional is true\n\n@see UIsdkConditional\n@see UIsdkConditionalGroupAll\n@see UIsdkConditionalGroupAny\n@see UIsdkConditionalGroupNone\n@see UIsdkConditionalGroupSingle\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalGroupAny>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditionalGroup,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::ClassParams = {
	&UIsdkConditionalGroupAny::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalGroupAny()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupAny.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalGroupAny.OuterSingleton, Z_Construct_UClass_UIsdkConditionalGroupAny_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalGroupAny.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalGroupAny);
UIsdkConditionalGroupAny::~UIsdkConditionalGroupAny() {}
// ********** End Class UIsdkConditionalGroupAny ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAny_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalGroupAny, UIsdkConditionalGroupAny::StaticClass, TEXT("UIsdkConditionalGroupAny"), &Z_Registration_Info_UClass_UIsdkConditionalGroupAny, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalGroupAny), 2835428675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAny_h__Script_OculusInteraction_898768558(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAny_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAny_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
