// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRSurveySettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRSurveySettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRSurveySettings();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRSurveySettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXREditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRSurveySettings **************************************************
void UOculusXRSurveySettings::StaticRegisterNativesUOculusXRSurveySettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSurveySettings;
UClass* UOculusXRSurveySettings::GetPrivateStaticClass()
{
	using TClass = UOculusXRSurveySettings;
	if (!Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSurveySettings"),
			Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton,
			StaticRegisterNativesUOculusXRSurveySettings,
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
	return Z_Registration_Info_UClass_UOculusXRSurveySettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSurveySettings_NoRegister()
{
	return UOculusXRSurveySettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSurveySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusXRSurveySettings.h" },
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstLaunchDate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// First launch date stored as string\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First launch date stored as string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchCount_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of times the editor has been launched\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of times the editor has been launched" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSurveyShown_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the survey has been shown to the user\n" },
#endif
		{ "ModuleRelativePath", "Private/OculusXRSurveySettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the survey has been shown to the user" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstLaunchDate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LaunchCount;
	static void NewProp_bSurveyShown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurveyShown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSurveySettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_FirstLaunchDate = { "FirstLaunchDate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSurveySettings, FirstLaunchDate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstLaunchDate_MetaData), NewProp_FirstLaunchDate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_LaunchCount = { "LaunchCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSurveySettings, LaunchCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchCount_MetaData), NewProp_LaunchCount_MetaData) };
void Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_bSurveyShown_SetBit(void* Obj)
{
	((UOculusXRSurveySettings*)Obj)->bSurveyShown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_bSurveyShown = { "bSurveyShown", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRSurveySettings), &Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_bSurveyShown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSurveyShown_MetaData), NewProp_bSurveyShown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRSurveySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_FirstLaunchDate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_LaunchCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSurveySettings_Statics::NewProp_bSurveyShown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSurveySettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRSurveySettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSurveySettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSurveySettings_Statics::ClassParams = {
	&UOculusXRSurveySettings::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOculusXRSurveySettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSurveySettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSurveySettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSurveySettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSurveySettings()
{
	if (!Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton, Z_Construct_UClass_UOculusXRSurveySettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSurveySettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSurveySettings);
UOculusXRSurveySettings::~UOculusXRSurveySettings() {}
// ********** End Class UOculusXRSurveySettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSurveySettings, UOculusXRSurveySettings::StaticClass, TEXT("UOculusXRSurveySettings"), &Z_Registration_Info_UClass_UOculusXRSurveySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSurveySettings), 1581901772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_2830965953(TEXT("/Script/OculusXREditor"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRSurveySettings_h__Script_OculusXREditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
