// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalGroupAll.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalGroupAll() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalGroupAll *************************************************
void UIsdkConditionalGroupAll::StaticRegisterNativesUIsdkConditionalGroupAll()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalGroupAll;
UClass* UIsdkConditionalGroupAll::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalGroupAll;
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupAll.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalGroupAll"),
			Z_Registration_Info_UClass_UIsdkConditionalGroupAll.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalGroupAll,
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
	return Z_Registration_Info_UClass_UIsdkConditionalGroupAll.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister()
{
	return UIsdkConditionalGroupAll::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalGroupAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalGroupAll\n * @brief Conditional Group that resolves true if ALL contained conditionals are true\n *\n * @see UIsdkConditional\n * @see UIsdkConditionalGroupAll\n * @see UIsdkConditionalGroupAny\n * @see UIsdkConditionalGroupNone\n * @see UIsdkConditionalGroupSingle\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalGroupAll.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroupAll.h" },
		{ "ToolTip", "@class UIsdkConditionalGroupAll\n@brief Conditional Group that resolves true if ALL contained conditionals are true\n\n@see UIsdkConditional\n@see UIsdkConditionalGroupAll\n@see UIsdkConditionalGroupAny\n@see UIsdkConditionalGroupNone\n@see UIsdkConditionalGroupSingle\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalGroupAll>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditionalGroup,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::ClassParams = {
	&UIsdkConditionalGroupAll::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalGroupAll()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupAll.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalGroupAll.OuterSingleton, Z_Construct_UClass_UIsdkConditionalGroupAll_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalGroupAll.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalGroupAll);
UIsdkConditionalGroupAll::~UIsdkConditionalGroupAll() {}
// ********** End Class UIsdkConditionalGroupAll ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAll_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalGroupAll, UIsdkConditionalGroupAll::StaticClass, TEXT("UIsdkConditionalGroupAll"), &Z_Registration_Info_UClass_UIsdkConditionalGroupAll, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalGroupAll), 2765215533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAll_h__Script_OculusInteraction_3820645655(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAll_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupAll_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
