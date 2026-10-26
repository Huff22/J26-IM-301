// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/IsdkObjectDebugUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkObjectDebugUI() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkObjectDebugUI();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkObjectDebugUI_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkObjectDebugUI *******************************************************
void UIsdkObjectDebugUI::StaticRegisterNativesUIsdkObjectDebugUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkObjectDebugUI;
UClass* UIsdkObjectDebugUI::GetPrivateStaticClass()
{
	using TClass = UIsdkObjectDebugUI;
	if (!Z_Registration_Info_UClass_UIsdkObjectDebugUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkObjectDebugUI"),
			Z_Registration_Info_UClass_UIsdkObjectDebugUI.InnerSingleton,
			StaticRegisterNativesUIsdkObjectDebugUI,
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
	return Z_Registration_Info_UClass_UIsdkObjectDebugUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkObjectDebugUI_NoRegister()
{
	return UIsdkObjectDebugUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkObjectDebugUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Object Debug UI" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tools/IsdkObjectDebugUI.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tools/IsdkObjectDebugUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tools/IsdkObjectDebugUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkObjectDebugUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkObjectDebugUI_Statics::NewProp_TextComp = { "TextComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkObjectDebugUI, TextComp), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextComp_MetaData), NewProp_TextComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkObjectDebugUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkObjectDebugUI_Statics::NewProp_TextComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkObjectDebugUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkObjectDebugUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkObjectDebugUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkObjectDebugUI_Statics::ClassParams = {
	&UIsdkObjectDebugUI::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkObjectDebugUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkObjectDebugUI_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkObjectDebugUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkObjectDebugUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkObjectDebugUI()
{
	if (!Z_Registration_Info_UClass_UIsdkObjectDebugUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkObjectDebugUI.OuterSingleton, Z_Construct_UClass_UIsdkObjectDebugUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkObjectDebugUI.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkObjectDebugUI);
UIsdkObjectDebugUI::~UIsdkObjectDebugUI() {}
// ********** End Class UIsdkObjectDebugUI *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkObjectDebugUI_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkObjectDebugUI, UIsdkObjectDebugUI::StaticClass, TEXT("UIsdkObjectDebugUI"), &Z_Registration_Info_UClass_UIsdkObjectDebugUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkObjectDebugUI), 2349020178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkObjectDebugUI_h__Script_OculusInteraction_2009265811(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkObjectDebugUI_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkObjectDebugUI_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
