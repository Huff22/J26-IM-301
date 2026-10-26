// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestDataSources.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestDataSources() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestDataSourcesActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestDataSourcesActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestDataSourcesActor ************************************************
void AIsdkTestDataSourcesActor::StaticRegisterNativesAIsdkTestDataSourcesActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestDataSourcesActor;
UClass* AIsdkTestDataSourcesActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestDataSourcesActor;
	if (!Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestDataSourcesActor"),
			Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestDataSourcesActor,
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
	return Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestDataSourcesActor_NoRegister()
{
	return AIsdkTestDataSourcesActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestDataSources.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestDataSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDataSourceExternal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestDataSources.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDataModifierOneEuro_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestDataSources.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestDataSourceExternal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestDataModifierOneEuro;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestDataSourcesActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::NewProp_TestDataSourceExternal = { "TestDataSourceExternal", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestDataSourcesActor, TestDataSourceExternal), Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDataSourceExternal_MetaData), NewProp_TestDataSourceExternal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::NewProp_TestDataModifierOneEuro = { "TestDataModifierOneEuro", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestDataSourcesActor, TestDataModifierOneEuro), Z_Construct_UClass_UIsdkOneEuroFilterDataModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDataModifierOneEuro_MetaData), NewProp_TestDataModifierOneEuro_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::NewProp_TestDataSourceExternal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::NewProp_TestDataModifierOneEuro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::ClassParams = {
	&AIsdkTestDataSourcesActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestDataSourcesActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.OuterSingleton, Z_Construct_UClass_AIsdkTestDataSourcesActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestDataSourcesActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestDataSourcesActor);
AIsdkTestDataSourcesActor::~AIsdkTestDataSourcesActor() {}
// ********** End Class AIsdkTestDataSourcesActor **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestDataSources_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestDataSourcesActor, AIsdkTestDataSourcesActor::StaticClass, TEXT("AIsdkTestDataSourcesActor"), &Z_Registration_Info_UClass_AIsdkTestDataSourcesActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestDataSourcesActor), 4036523247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestDataSources_h__Script_OculusInteractionEditor_66860448(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestDataSources_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestDataSources_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
