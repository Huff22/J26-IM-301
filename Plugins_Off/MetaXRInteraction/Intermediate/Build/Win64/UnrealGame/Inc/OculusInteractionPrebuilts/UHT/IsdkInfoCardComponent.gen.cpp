// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InfoCard/IsdkInfoCardComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInfoCardComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkInfoCardComponent Function SetRoundedMaterialProperties *************
struct Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInfoCardComponent, nullptr, "SetRoundedMaterialProperties", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInfoCardComponent::execSetRoundedMaterialProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRoundedMaterialProperties();
	P_NATIVE_END;
}
// ********** End Class UIsdkInfoCardComponent Function SetRoundedMaterialProperties ***************

// ********** Begin Class UIsdkInfoCardComponent ***************************************************
void UIsdkInfoCardComponent::StaticRegisterNativesUIsdkInfoCardComponent()
{
	UClass* Class = UIsdkInfoCardComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetRoundedMaterialProperties", &UIsdkInfoCardComponent::execSetRoundedMaterialProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInfoCardComponent;
UClass* UIsdkInfoCardComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInfoCardComponent;
	if (!Z_Registration_Info_UClass_UIsdkInfoCardComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInfoCardComponent"),
			Z_Registration_Info_UClass_UIsdkInfoCardComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInfoCardComponent,
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
	return Z_Registration_Info_UClass_UIsdkInfoCardComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInfoCardComponent_NoRegister()
{
	return UIsdkInfoCardComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInfoCardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "InfoCard/IsdkInfoCardComponent.h" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyText_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundedBoxMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/InfoCard/IsdkInfoCardComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BodyText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInfoCardComponent_SetRoundedMaterialProperties, "SetRoundedMaterialProperties" }, // 4265094022
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInfoCardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInfoCardComponent, LabelText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_BodyText = { "BodyText", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInfoCardComponent, BodyText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyText_MetaData), NewProp_BodyText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInfoCardComponent, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundedBoxMaterial_MetaData), NewProp_RoundedBoxMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInfoCardComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_LabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_BodyText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInfoCardComponent_Statics::NewProp_RoundedBoxMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInfoCardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInfoCardComponent_Statics::ClassParams = {
	&UIsdkInfoCardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInfoCardComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInfoCardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInfoCardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInfoCardComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInfoCardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInfoCardComponent.OuterSingleton, Z_Construct_UClass_UIsdkInfoCardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInfoCardComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInfoCardComponent);
UIsdkInfoCardComponent::~UIsdkInfoCardComponent() {}
// ********** End Class UIsdkInfoCardComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInfoCardComponent, UIsdkInfoCardComponent::StaticClass, TEXT("UIsdkInfoCardComponent"), &Z_Registration_Info_UClass_UIsdkInfoCardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInfoCardComponent), 3040135252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardComponent_h__Script_OculusInteractionPrebuilts_1619508249(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
