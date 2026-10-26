// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRLegacyPoseTransformComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRLegacyPoseTransformComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRInput();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRLegacyPoseTransformComponent ************************************
void UOculusXRLegacyPoseTransformComponent::StaticRegisterNativesUOculusXRLegacyPoseTransformComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent;
UClass* UOculusXRLegacyPoseTransformComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRLegacyPoseTransformComponent;
	if (!Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRLegacyPoseTransformComponent"),
			Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRLegacyPoseTransformComponent,
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
	return Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_NoRegister()
{
	return UOculusXRLegacyPoseTransformComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Handles conversion of components created for the legacy Oculus controller pose into\n * the OpenXR Grip pose. Attach components that need to be transformed under this component.\n */" },
#endif
		{ "DisplayName", "OculusXR Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRLegacyPoseTransformComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles conversion of components created for the legacy Oculus controller pose into\nthe OpenXR Grip pose. Attach components that need to be transformed under this component." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::ClassParams = {
	&UOculusXRLegacyPoseTransformComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton, Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRLegacyPoseTransformComponent);
UOculusXRLegacyPoseTransformComponent::~UOculusXRLegacyPoseTransformComponent() {}
// ********** End Class UOculusXRLegacyPoseTransformComponent **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRLegacyPoseTransformComponent, UOculusXRLegacyPoseTransformComponent::StaticClass, TEXT("UOculusXRLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLegacyPoseTransformComponent), 3900144035U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_4007765101(TEXT("/Script/OculusXRInput"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
