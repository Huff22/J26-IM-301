// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRControllerLegacyPoseTransformComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRControllerLegacyPoseTransformComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRInput();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRControllerLegacyPoseTransformComponent **************************
void UOculusXRControllerLegacyPoseTransformComponent::StaticRegisterNativesUOculusXRControllerLegacyPoseTransformComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent;
UClass* UOculusXRControllerLegacyPoseTransformComponent::GetPrivateStaticClass()
{
	using TClass = UOculusXRControllerLegacyPoseTransformComponent;
	if (!Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRControllerLegacyPoseTransformComponent"),
			Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton,
			StaticRegisterNativesUOculusXRControllerLegacyPoseTransformComponent,
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
	return Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_NoRegister()
{
	return UOculusXRControllerLegacyPoseTransformComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusHand" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead.\n */" },
#endif
		{ "DeprecationMessage", "Please use OculusXRLegacyPoseTransformComponent instead." },
		{ "DisplayName", "[Deprecated] OculusXR Controller Legacy Pose Transform Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "OculusXRControllerLegacyPoseTransformComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRControllerLegacyPoseTransformComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is deprecated, please use OculusXRLegacyPoseTransformComponent instead." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRControllerLegacyPoseTransformComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::ClassParams = {
	&UOculusXRControllerLegacyPoseTransformComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent()
{
	if (!Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton, Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRControllerLegacyPoseTransformComponent);
UOculusXRControllerLegacyPoseTransformComponent::~UOculusXRControllerLegacyPoseTransformComponent() {}
// ********** End Class UOculusXRControllerLegacyPoseTransformComponent ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRControllerLegacyPoseTransformComponent, UOculusXRControllerLegacyPoseTransformComponent::StaticClass, TEXT("UOculusXRControllerLegacyPoseTransformComponent"), &Z_Registration_Info_UClass_UOculusXRControllerLegacyPoseTransformComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRControllerLegacyPoseTransformComponent), 3472446363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_3312547977(TEXT("/Script/OculusXRInput"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRInput_Public_OculusXRControllerLegacyPoseTransformComponent_h__Script_OculusXRInput_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
