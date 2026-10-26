// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRPassthroughColorLutAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughColorLutAsset() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLutFactory();
OCULUSXREDITOR_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_OculusXREditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRPassthroughColorLutFactory **************************************
void UOculusXRPassthroughColorLutFactory::StaticRegisterNativesUOculusXRPassthroughColorLutFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory;
UClass* UOculusXRPassthroughColorLutFactory::GetPrivateStaticClass()
{
	using TClass = UOculusXRPassthroughColorLutFactory;
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRPassthroughColorLutFactory"),
			Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.InnerSingleton,
			StaticRegisterNativesUOculusXRPassthroughColorLutFactory,
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
	return Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_NoRegister()
{
	return UOculusXRPassthroughColorLutFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "OculusXRPassthroughColorLutAsset.h" },
		{ "ModuleRelativePath", "Private/OculusXRPassthroughColorLutAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughColorLutFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXREditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::ClassParams = {
	&UOculusXRPassthroughColorLutFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRPassthroughColorLutFactory()
{
	if (!Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.OuterSingleton, Z_Construct_UClass_UOculusXRPassthroughColorLutFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPassthroughColorLutFactory);
UOculusXRPassthroughColorLutFactory::~UOculusXRPassthroughColorLutFactory() {}
// ********** End Class UOculusXRPassthroughColorLutFactory ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRPassthroughColorLutAsset_h__Script_OculusXREditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughColorLutFactory, UOculusXRPassthroughColorLutFactory::StaticClass, TEXT("UOculusXRPassthroughColorLutFactory"), &Z_Registration_Info_UClass_UOculusXRPassthroughColorLutFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughColorLutFactory), 1804108786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRPassthroughColorLutAsset_h__Script_OculusXREditor_4104790217(TEXT("/Script/OculusXREditor"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRPassthroughColorLutAsset_h__Script_OculusXREditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXREditor_Private_OculusXRPassthroughColorLutAsset_h__Script_OculusXREditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
