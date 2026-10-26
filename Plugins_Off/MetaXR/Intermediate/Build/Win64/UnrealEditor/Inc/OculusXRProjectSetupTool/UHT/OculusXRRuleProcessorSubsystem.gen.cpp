// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRRuleProcessorSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRRuleProcessorSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem();
OCULUSXRPROJECTSETUPTOOL_API UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRProjectSetupTool();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRRuleProcessorSubsystem ******************************************
void UOculusXRRuleProcessorSubsystem::StaticRegisterNativesUOculusXRRuleProcessorSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem;
UClass* UOculusXRRuleProcessorSubsystem::GetPrivateStaticClass()
{
	using TClass = UOculusXRRuleProcessorSubsystem;
	if (!Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRRuleProcessorSubsystem"),
			Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton,
			StaticRegisterNativesUOculusXRRuleProcessorSubsystem,
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
	return Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_NoRegister()
{
	return UOculusXRRuleProcessorSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The rule processor handles registration and querying of rules\n */" },
#endif
		{ "IncludePath", "OculusXRRuleProcessorSubsystem.h" },
		{ "ModuleRelativePath", "Public/OculusXRRuleProcessorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rule processor handles registration and querying of rules" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRRuleProcessorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRProjectSetupTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::ClassParams = {
	&UOculusXRRuleProcessorSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRRuleProcessorSubsystem()
{
	if (!Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton, Z_Construct_UClass_UOculusXRRuleProcessorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem.OuterSingleton;
}
UOculusXRRuleProcessorSubsystem::UOculusXRRuleProcessorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRRuleProcessorSubsystem);
UOculusXRRuleProcessorSubsystem::~UOculusXRRuleProcessorSubsystem() {}
// ********** End Class UOculusXRRuleProcessorSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRRuleProcessorSubsystem, UOculusXRRuleProcessorSubsystem::StaticClass, TEXT("UOculusXRRuleProcessorSubsystem"), &Z_Registration_Info_UClass_UOculusXRRuleProcessorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRRuleProcessorSubsystem), 340062798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_1836481974(TEXT("/Script/OculusXRProjectSetupTool"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRProjectSetupTool_Public_OculusXRRuleProcessorSubsystem_h__Script_OculusXRProjectSetupTool_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
