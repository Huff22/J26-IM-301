// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMultiPlayerTestingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRMultiPlayerTestingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem();
OCULUSXRHMD_API UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRHMD();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRMultiPlayerTestingSubsystem *************************************
void UOculusXRMultiPlayerTestingSubsystem::StaticRegisterNativesUOculusXRMultiPlayerTestingSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem;
UClass* UOculusXRMultiPlayerTestingSubsystem::GetPrivateStaticClass()
{
	using TClass = UOculusXRMultiPlayerTestingSubsystem;
	if (!Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRMultiPlayerTestingSubsystem"),
			Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton,
			StaticRegisterNativesUOculusXRMultiPlayerTestingSubsystem,
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
	return Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_NoRegister()
{
	return UOculusXRMultiPlayerTestingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The rule processor handles registration and querying of rules\n */" },
#endif
		{ "IncludePath", "OculusXRMultiPlayerTestingSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRMultiPlayerTestingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rule processor handles registration and querying of rules" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMultiPlayerTestingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRHMD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::ClassParams = {
	&UOculusXRMultiPlayerTestingSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem()
{
	if (!Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem.OuterSingleton;
}
UOculusXRMultiPlayerTestingSubsystem::UOculusXRMultiPlayerTestingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMultiPlayerTestingSubsystem);
UOculusXRMultiPlayerTestingSubsystem::~UOculusXRMultiPlayerTestingSubsystem() {}
// ********** End Class UOculusXRMultiPlayerTestingSubsystem ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMultiPlayerTestingSubsystem, UOculusXRMultiPlayerTestingSubsystem::StaticClass, TEXT("UOculusXRMultiPlayerTestingSubsystem"), &Z_Registration_Info_UClass_UOculusXRMultiPlayerTestingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMultiPlayerTestingSubsystem), 1119451086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_4237013142(TEXT("/Script/OculusXRHMD"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRHMD_Public_OculusXRMultiPlayerTestingSubsystem_h__Script_OculusXRHMD_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
