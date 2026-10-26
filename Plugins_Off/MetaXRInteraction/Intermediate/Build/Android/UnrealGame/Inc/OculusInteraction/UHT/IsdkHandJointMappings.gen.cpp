// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkHandJointMappings.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandJointMappings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandJointMappings();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandJointMappings_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandJointMappings ***************************************************
void UIsdkHandJointMappings::StaticRegisterNativesUIsdkHandJointMappings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandJointMappings;
UClass* UIsdkHandJointMappings::GetPrivateStaticClass()
{
	using TClass = UIsdkHandJointMappings;
	if (!Z_Registration_Info_UClass_UIsdkHandJointMappings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandJointMappings"),
			Z_Registration_Info_UClass_UIsdkHandJointMappings.InnerSingleton,
			StaticRegisterNativesUIsdkHandJointMappings,
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
	return Z_Registration_Info_UClass_UIsdkHandJointMappings.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandJointMappings_NoRegister()
{
	return UIsdkHandJointMappings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandJointMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Hand Joint Mappings" },
		{ "IncludePath", "DataSources/IsdkHandJointMappings.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandJointMappings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbJointMappings_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Array mapping indices and thumb joint data */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandJointMappings.h" },
		{ "ToolTip", "Array mapping indices and thumb joint data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerJointMappings_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Array mapping indices and finger joint data */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandJointMappings.h" },
		{ "ToolTip", "Array mapping indices and finger joint data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbJointMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbJointMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerJointMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerJointMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandJointMappings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_ThumbJointMappings_Inner = { "ThumbJointMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, METADATA_PARAMS(0, nullptr) }; // 1556225157
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_ThumbJointMappings = { "ThumbJointMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandJointMappings, ThumbJointMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbJointMappings_MetaData), NewProp_ThumbJointMappings_MetaData) }; // 1556225157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_FingerJointMappings_Inner = { "FingerJointMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, METADATA_PARAMS(0, nullptr) }; // 320220292
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_FingerJointMappings = { "FingerJointMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandJointMappings, FingerJointMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerJointMappings_MetaData), NewProp_FingerJointMappings_MetaData) }; // 320220292
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandJointMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_ThumbJointMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_ThumbJointMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_FingerJointMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandJointMappings_Statics::NewProp_FingerJointMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandJointMappings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandJointMappings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandJointMappings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandJointMappings_Statics::ClassParams = {
	&UIsdkHandJointMappings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkHandJointMappings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandJointMappings_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandJointMappings_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandJointMappings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandJointMappings()
{
	if (!Z_Registration_Info_UClass_UIsdkHandJointMappings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandJointMappings.OuterSingleton, Z_Construct_UClass_UIsdkHandJointMappings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandJointMappings.OuterSingleton;
}
UIsdkHandJointMappings::UIsdkHandJointMappings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandJointMappings);
UIsdkHandJointMappings::~UIsdkHandJointMappings() {}
// ********** End Class UIsdkHandJointMappings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandJointMappings_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandJointMappings, UIsdkHandJointMappings::StaticClass, TEXT("UIsdkHandJointMappings"), &Z_Registration_Info_UClass_UIsdkHandJointMappings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandJointMappings), 2618616558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandJointMappings_h__Script_OculusInteraction_4285191043(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandJointMappings_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandJointMappings_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
