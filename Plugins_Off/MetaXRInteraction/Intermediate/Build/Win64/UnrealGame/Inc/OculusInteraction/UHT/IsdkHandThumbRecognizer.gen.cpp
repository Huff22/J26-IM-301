// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandThumbRecognizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandThumbRecognizer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDigitRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandThumbRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandThumbRecognizer_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandThumbRecognizer *************************************************
void UIsdkHandThumbRecognizer::StaticRegisterNativesUIsdkHandThumbRecognizer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandThumbRecognizer;
UClass* UIsdkHandThumbRecognizer::GetPrivateStaticClass()
{
	using TClass = UIsdkHandThumbRecognizer;
	if (!Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandThumbRecognizer"),
			Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.InnerSingleton,
			StaticRegisterNativesUIsdkHandThumbRecognizer,
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
	return Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandThumbRecognizer_NoRegister()
{
	return UIsdkHandThumbRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * Child of UIsdkHandDigitRecognizer, used specifically for recognizing thumbs (non-finger)\n */" },
		{ "IncludePath", "HandPoseDetection/IsdkHandThumbRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandThumbRecognizer.h" },
		{ "ToolTip", "Child of UIsdkHandDigitRecognizer, used specifically for recognizing thumbs (non-finger)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CalcType_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The type of thumb (non-finger) action/position this is set to recognize */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandThumbRecognizer.h" },
		{ "ToolTip", "The type of thumb (non-finger) action/position this is set to recognize" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CalcType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CalcType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandThumbRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::NewProp_CalcType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::NewProp_CalcType = { "CalcType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandThumbRecognizer, CalcType), Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CalcType_MetaData), NewProp_CalcType_MetaData) }; // 2894301549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::NewProp_CalcType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::NewProp_CalcType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDigitRecognizer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::ClassParams = {
	&UIsdkHandThumbRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandThumbRecognizer()
{
	if (!Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.OuterSingleton, Z_Construct_UClass_UIsdkHandThumbRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandThumbRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandThumbRecognizer);
UIsdkHandThumbRecognizer::~UIsdkHandThumbRecognizer() {}
// ********** End Class UIsdkHandThumbRecognizer ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandThumbRecognizer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandThumbRecognizer, UIsdkHandThumbRecognizer::StaticClass, TEXT("UIsdkHandThumbRecognizer"), &Z_Registration_Info_UClass_UIsdkHandThumbRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandThumbRecognizer), 2160300385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandThumbRecognizer_h__Script_OculusInteraction_2568400611(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandThumbRecognizer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandThumbRecognizer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
