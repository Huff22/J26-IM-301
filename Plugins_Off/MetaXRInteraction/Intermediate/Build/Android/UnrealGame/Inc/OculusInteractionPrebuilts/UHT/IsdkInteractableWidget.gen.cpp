// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkInteractableWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractableWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkInteractableWidget();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_AIsdkInteractableWidget_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkInteractableWidget **************************************************
void AIsdkInteractableWidget::StaticRegisterNativesAIsdkInteractableWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkInteractableWidget;
UClass* AIsdkInteractableWidget::GetPrivateStaticClass()
{
	using TClass = AIsdkInteractableWidget;
	if (!Z_Registration_Info_UClass_AIsdkInteractableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractableWidget"),
			Z_Registration_Info_UClass_AIsdkInteractableWidget.InnerSingleton,
			StaticRegisterNativesAIsdkInteractableWidget,
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
	return Z_Registration_Info_UClass_AIsdkInteractableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkInteractableWidget_NoRegister()
{
	return AIsdkInteractableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkInteractableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Interactable Widget" },
		{ "IncludePath", "IsdkInteractableWidget.h" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableWidgetComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkInteractableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkInteractableWidget_Statics::NewProp_InteractableWidgetComponent = { "InteractableWidgetComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkInteractableWidget, InteractableWidgetComponent), Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableWidgetComponent_MetaData), NewProp_InteractableWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkInteractableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkInteractableWidget_Statics::NewProp_InteractableWidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInteractableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkInteractableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInteractableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkInteractableWidget_Statics::ClassParams = {
	&AIsdkInteractableWidget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkInteractableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInteractableWidget_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkInteractableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkInteractableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkInteractableWidget()
{
	if (!Z_Registration_Info_UClass_AIsdkInteractableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkInteractableWidget.OuterSingleton, Z_Construct_UClass_AIsdkInteractableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkInteractableWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkInteractableWidget);
AIsdkInteractableWidget::~AIsdkInteractableWidget() {}
// ********** End Class AIsdkInteractableWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidget_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkInteractableWidget, AIsdkInteractableWidget::StaticClass, TEXT("AIsdkInteractableWidget"), &Z_Registration_Info_UClass_AIsdkInteractableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkInteractableWidget), 3589847708U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidget_h__Script_OculusInteractionPrebuilts_3019824881(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidget_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidget_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
