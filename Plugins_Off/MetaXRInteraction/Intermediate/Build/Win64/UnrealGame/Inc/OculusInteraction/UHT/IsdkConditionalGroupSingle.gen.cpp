// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalGroupSingle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalGroupSingle() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupSingle();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupSingle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalGroupSingle **********************************************
void UIsdkConditionalGroupSingle::StaticRegisterNativesUIsdkConditionalGroupSingle()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalGroupSingle;
UClass* UIsdkConditionalGroupSingle::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalGroupSingle;
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalGroupSingle"),
			Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalGroupSingle,
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
	return Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalGroupSingle_NoRegister()
{
	return UIsdkConditionalGroupSingle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalGroupSingle\n * @brief Conditional Group that resolves true if ONE and only one conditional is true\n *\n * @see UIsdkConditional\n * @see UIsdkConditionalGroupAll\n * @see UIsdkConditionalGroupAny\n * @see UIsdkConditionalGroupNone\n * @see UIsdkConditionalGroupSingle\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalGroupSingle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroupSingle.h" },
		{ "ToolTip", "@class UIsdkConditionalGroupSingle\n@brief Conditional Group that resolves true if ONE and only one conditional is true\n\n@see UIsdkConditional\n@see UIsdkConditionalGroupAll\n@see UIsdkConditionalGroupAny\n@see UIsdkConditionalGroupNone\n@see UIsdkConditionalGroupSingle\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalGroupSingle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditionalGroup,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::ClassParams = {
	&UIsdkConditionalGroupSingle::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalGroupSingle()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.OuterSingleton, Z_Construct_UClass_UIsdkConditionalGroupSingle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalGroupSingle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalGroupSingle);
UIsdkConditionalGroupSingle::~UIsdkConditionalGroupSingle() {}
// ********** End Class UIsdkConditionalGroupSingle ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupSingle_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalGroupSingle, UIsdkConditionalGroupSingle::StaticClass, TEXT("UIsdkConditionalGroupSingle"), &Z_Registration_Info_UClass_UIsdkConditionalGroupSingle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalGroupSingle), 2507439109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupSingle_h__Script_OculusInteraction_2875497560(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupSingle_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupSingle_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
