// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUKPassthroughCameraAccessFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMRUKPassthroughCameraAccessFactory() {}

// ********** Begin Cross Module References ********************************************************
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory();
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_NoRegister();
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory();
MRUTILITYKITPCAEDITOR_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MRUtilityKitPcaEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMRUKPassthroughCameraAccessFactory **************************************
void UMRUKPassthroughCameraAccessFactory::StaticRegisterNativesUMRUKPassthroughCameraAccessFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory;
UClass* UMRUKPassthroughCameraAccessFactory::GetPrivateStaticClass()
{
	using TClass = UMRUKPassthroughCameraAccessFactory;
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKPassthroughCameraAccessFactory"),
			Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton,
			StaticRegisterNativesUMRUKPassthroughCameraAccessFactory,
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
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_NoRegister()
{
	return UMRUKPassthroughCameraAccessFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MRUKPassthroughCameraAccessFactory.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccessFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKitPcaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::ClassParams = {
	&UMRUKPassthroughCameraAccessFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory()
{
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton, Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKPassthroughCameraAccessFactory);
UMRUKPassthroughCameraAccessFactory::~UMRUKPassthroughCameraAccessFactory() {}
// ********** End Class UMRUKPassthroughCameraAccessFactory ****************************************

// ********** Begin Class UMRUKPassthroughCameraAccessTextureFactory *******************************
void UMRUKPassthroughCameraAccessTextureFactory::StaticRegisterNativesUMRUKPassthroughCameraAccessTextureFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory;
UClass* UMRUKPassthroughCameraAccessTextureFactory::GetPrivateStaticClass()
{
	using TClass = UMRUKPassthroughCameraAccessTextureFactory;
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKPassthroughCameraAccessTextureFactory"),
			Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton,
			StaticRegisterNativesUMRUKPassthroughCameraAccessTextureFactory,
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
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_NoRegister()
{
	return UMRUKPassthroughCameraAccessTextureFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MRUKPassthroughCameraAccessFactory.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccessFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessTextureFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKitPcaEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::ClassParams = {
	&UMRUKPassthroughCameraAccessTextureFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory()
{
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton, Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKPassthroughCameraAccessTextureFactory);
UMRUKPassthroughCameraAccessTextureFactory::~UMRUKPassthroughCameraAccessTextureFactory() {}
// ********** End Class UMRUKPassthroughCameraAccessTextureFactory *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessFactory, UMRUKPassthroughCameraAccessFactory::StaticClass, TEXT("UMRUKPassthroughCameraAccessFactory"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessFactory), 3989307737U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessTextureFactory, UMRUKPassthroughCameraAccessTextureFactory::StaticClass, TEXT("UMRUKPassthroughCameraAccessTextureFactory"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessTextureFactory), 3401868360U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_1451271198(TEXT("/Script/MRUtilityKitPcaEditor"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKitPcaEditor_Public_MRUKPassthroughCameraAccessFactory_h__Script_MRUtilityKitPcaEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
