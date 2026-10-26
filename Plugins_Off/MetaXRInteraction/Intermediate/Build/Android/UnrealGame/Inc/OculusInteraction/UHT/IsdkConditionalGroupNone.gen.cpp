// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalGroupNone.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalGroupNone() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupNone();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupNone_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalGroupNone ************************************************
void UIsdkConditionalGroupNone::StaticRegisterNativesUIsdkConditionalGroupNone()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalGroupNone;
UClass* UIsdkConditionalGroupNone::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalGroupNone;
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupNone.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalGroupNone"),
			Z_Registration_Info_UClass_UIsdkConditionalGroupNone.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalGroupNone,
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
	return Z_Registration_Info_UClass_UIsdkConditionalGroupNone.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalGroupNone_NoRegister()
{
	return UIsdkConditionalGroupNone::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalGroupNone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalGroupNone\n * @brief Conditional Group that resolves true if NO contained conditionals are true\n *\n * @see UIsdkConditional\n * @see UIsdkConditionalGroupAll\n * @see UIsdkConditionalGroupAny\n * @see UIsdkConditionalGroupNone\n * @see UIsdkConditionalGroupSingle\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalGroupNone.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroupNone.h" },
		{ "ToolTip", "@class UIsdkConditionalGroupNone\n@brief Conditional Group that resolves true if NO contained conditionals are true\n\n@see UIsdkConditional\n@see UIsdkConditionalGroupAll\n@see UIsdkConditionalGroupAny\n@see UIsdkConditionalGroupNone\n@see UIsdkConditionalGroupSingle\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalGroupNone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditionalGroup,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::ClassParams = {
	&UIsdkConditionalGroupNone::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalGroupNone()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroupNone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalGroupNone.OuterSingleton, Z_Construct_UClass_UIsdkConditionalGroupNone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalGroupNone.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalGroupNone);
UIsdkConditionalGroupNone::~UIsdkConditionalGroupNone() {}
// ********** End Class UIsdkConditionalGroupNone **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupNone_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalGroupNone, UIsdkConditionalGroupNone::StaticClass, TEXT("UIsdkConditionalGroupNone"), &Z_Registration_Info_UClass_UIsdkConditionalGroupNone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalGroupNone), 708103393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupNone_h__Script_OculusInteraction_4007552278(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupNone_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroupNone_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
