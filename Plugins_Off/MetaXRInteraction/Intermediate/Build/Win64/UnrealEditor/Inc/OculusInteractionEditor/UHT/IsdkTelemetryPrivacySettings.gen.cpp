// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorTelemetry/IsdkTelemetryPrivacySettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTelemetryPrivacySettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkTelemetryPrivacySettings ********************************************
void UIsdkTelemetryPrivacySettings::StaticRegisterNativesUIsdkTelemetryPrivacySettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings;
UClass* UIsdkTelemetryPrivacySettings::GetPrivateStaticClass()
{
	using TClass = UIsdkTelemetryPrivacySettings;
	if (!Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTelemetryPrivacySettings"),
			Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.InnerSingleton,
			StaticRegisterNativesUIsdkTelemetryPrivacySettings,
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
	return Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings_NoRegister()
{
	return UIsdkTelemetryPrivacySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Privacy settings interface for ISDK telemetry, only utilized if Meta XR isn't installed\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTelemetry/IsdkTelemetryPrivacySettings.h" },
		{ "ModuleRelativePath", "Private/EditorTelemetry/IsdkTelemetryPrivacySettings.h" },
		{ "ToolTip", "* Privacy settings interface for ISDK telemetry, only utilized if Meta XR isn't installed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/EditorTelemetry/IsdkTelemetryPrivacySettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTelemetryPrivacySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UIsdkTelemetryPrivacySettings*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkTelemetryPrivacySettings), &Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UIsdkTelemetryPrivacySettings, IImportantToggleSettingInterface), false },  // 2631109432
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::ClassParams = {
	&UIsdkTelemetryPrivacySettings::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkTelemetryPrivacySettings()
{
	if (!Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.OuterSingleton, Z_Construct_UClass_UIsdkTelemetryPrivacySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkTelemetryPrivacySettings);
UIsdkTelemetryPrivacySettings::~UIsdkTelemetryPrivacySettings() {}
// ********** End Class UIsdkTelemetryPrivacySettings **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkTelemetryPrivacySettings, UIsdkTelemetryPrivacySettings::StaticClass, TEXT("UIsdkTelemetryPrivacySettings"), &Z_Registration_Info_UClass_UIsdkTelemetryPrivacySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTelemetryPrivacySettings), 728416089U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h__Script_OculusInteractionEditor_3744906940(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_EditorTelemetry_IsdkTelemetryPrivacySettings_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
