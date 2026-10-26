// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRTelemetryPrivacySettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRTelemetryPrivacySettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister();
OCULUSXRTELEMETRY_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings();
OCULUSXRTELEMETRY_API UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRTelemetry();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRTelemetryPrivacySettings ****************************************
void UOculusXRTelemetryPrivacySettings::StaticRegisterNativesUOculusXRTelemetryPrivacySettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings;
UClass* UOculusXRTelemetryPrivacySettings::GetPrivateStaticClass()
{
	using TClass = UOculusXRTelemetryPrivacySettings;
	if (!Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRTelemetryPrivacySettings"),
			Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.InnerSingleton,
			StaticRegisterNativesUOculusXRTelemetryPrivacySettings,
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
	return Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_NoRegister()
{
	return UOculusXRTelemetryPrivacySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusXRTelemetryPrivacySettings.h" },
		{ "ModuleRelativePath", "Private/OculusXRTelemetryPrivacySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Private/OculusXRTelemetryPrivacySettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRTelemetryPrivacySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((UOculusXRTelemetryPrivacySettings*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRTelemetryPrivacySettings), &Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEnabled_MetaData), NewProp_bIsEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRTelemetry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UImportantToggleSettingInterface_NoRegister, (int32)VTABLE_OFFSET(UOculusXRTelemetryPrivacySettings, IImportantToggleSettingInterface), false },  // 2631109432
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::ClassParams = {
	&UOculusXRTelemetryPrivacySettings::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRTelemetryPrivacySettings()
{
	if (!Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton, Z_Construct_UClass_UOculusXRTelemetryPrivacySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRTelemetryPrivacySettings);
UOculusXRTelemetryPrivacySettings::~UOculusXRTelemetryPrivacySettings() {}
// ********** End Class UOculusXRTelemetryPrivacySettings ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h__Script_OculusXRTelemetry_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRTelemetryPrivacySettings, UOculusXRTelemetryPrivacySettings::StaticClass, TEXT("UOculusXRTelemetryPrivacySettings"), &Z_Registration_Info_UClass_UOculusXRTelemetryPrivacySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRTelemetryPrivacySettings), 4253046486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h__Script_OculusXRTelemetry_12961333(TEXT("/Script/OculusXRTelemetry"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h__Script_OculusXRTelemetry_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRTelemetry_Private_OculusXRTelemetryPrivacySettings_h__Script_OculusXRTelemetry_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
