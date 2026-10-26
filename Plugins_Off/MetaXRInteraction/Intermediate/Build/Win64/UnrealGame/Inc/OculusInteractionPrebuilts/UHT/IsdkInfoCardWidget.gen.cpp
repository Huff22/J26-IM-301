// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfoCard/IsdkInfoCardWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInfoCardWidget() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardWidget();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkInfoCardWidget ******************************************************
void UIsdkInfoCardWidget::StaticRegisterNativesUIsdkInfoCardWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInfoCardWidget;
UClass* UIsdkInfoCardWidget::GetPrivateStaticClass()
{
	using TClass = UIsdkInfoCardWidget;
	if (!Z_Registration_Info_UClass_UIsdkInfoCardWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInfoCardWidget"),
			Z_Registration_Info_UClass_UIsdkInfoCardWidget.InnerSingleton,
			StaticRegisterNativesUIsdkInfoCardWidget,
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
	return Z_Registration_Info_UClass_UIsdkInfoCardWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInfoCardWidget_NoRegister()
{
	return UIsdkInfoCardWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInfoCardWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InfoCard/IsdkInfoCardWidget.h" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BodyText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInfoCardWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UIsdkInfoCardWidget_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInfoCardWidget, LabelText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UIsdkInfoCardWidget_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInfoCardWidget, BodyText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyText_MetaData), NewProp_BodyText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInfoCardWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInfoCardWidget_Statics::NewProp_LabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInfoCardWidget_Statics::NewProp_BodyText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInfoCardWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInfoCardWidget_Statics::ClassParams = {
	&UIsdkInfoCardWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkInfoCardWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInfoCardWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInfoCardWidget()
{
	if (!Z_Registration_Info_UClass_UIsdkInfoCardWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInfoCardWidget.OuterSingleton, Z_Construct_UClass_UIsdkInfoCardWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInfoCardWidget.OuterSingleton;
}
UIsdkInfoCardWidget::UIsdkInfoCardWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInfoCardWidget);
UIsdkInfoCardWidget::~UIsdkInfoCardWidget() {}
// ********** End Class UIsdkInfoCardWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInfoCardWidget, UIsdkInfoCardWidget::StaticClass, TEXT("UIsdkInfoCardWidget"), &Z_Registration_Info_UClass_UIsdkInfoCardWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInfoCardWidget), 1055437824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h__Script_OculusInteractionPrebuilts_2328110470(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
