// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRLiveLinkRetargetFaceVisemesAsset.h"
#include "OculusXRAnimCurveMapping.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRLiveLinkRetargetFaceVisemesAsset() {}

// ********** Begin Cross Module References ********************************************************
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_NoRegister();
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression();
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping();
UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRLiveLinkRetargetFaceVisemesAsset ********************************
void UOculusXRLiveLinkRetargetFaceVisemesAsset::StaticRegisterNativesUOculusXRLiveLinkRetargetFaceVisemesAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset;
UClass* UOculusXRLiveLinkRetargetFaceVisemesAsset::GetPrivateStaticClass()
{
	using TClass = UOculusXRLiveLinkRetargetFaceVisemesAsset;
	if (!Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRLiveLinkRetargetFaceVisemesAsset"),
			Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.InnerSingleton,
			StaticRegisterNativesUOculusXRLiveLinkRetargetFaceVisemesAsset,
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
	return Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_NoRegister()
{
	return UOculusXRLiveLinkRetargetFaceVisemesAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "OculusXRHMD" },
		{ "DisplayName", "MetaXR MovementSDK LiveLink retarget face visemes asset" },
		{ "IncludePath", "OculusXRLiveLinkRetargetFaceVisemesAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetFaceVisemesAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveRemapping_MetaData[] = {
		{ "Category", "OculusXR|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Map face expression to Skeleton's animation curve mapping names.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRLiveLinkRetargetFaceVisemesAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map face expression to Skeleton's animation curve mapping names." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveRemapping_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveRemapping_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveRemapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveRemapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRLiveLinkRetargetFaceVisemesAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_ValueProp = { "CurveRemapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FOculusXRAnimCurveMapping, METADATA_PARAMS(0, nullptr) }; // 2878122118
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_Key_KeyProp = { "CurveRemapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRMovement_EOculusXRFaceVisemesExpression, METADATA_PARAMS(0, nullptr) }; // 2005766261
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping = { "CurveRemapping", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRLiveLinkRetargetFaceVisemesAsset, CurveRemapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveRemapping_MetaData), NewProp_CurveRemapping_MetaData) }; // 2005766261 2878122118
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::NewProp_CurveRemapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::ClassParams = {
	&UOculusXRLiveLinkRetargetFaceVisemesAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset()
{
	if (!Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.OuterSingleton, Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRLiveLinkRetargetFaceVisemesAsset);
UOculusXRLiveLinkRetargetFaceVisemesAsset::~UOculusXRLiveLinkRetargetFaceVisemesAsset() {}
// ********** End Class UOculusXRLiveLinkRetargetFaceVisemesAsset **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetFaceVisemesAsset_h__Script_OculusXRMovement_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset, UOculusXRLiveLinkRetargetFaceVisemesAsset::StaticClass, TEXT("UOculusXRLiveLinkRetargetFaceVisemesAsset"), &Z_Registration_Info_UClass_UOculusXRLiveLinkRetargetFaceVisemesAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRLiveLinkRetargetFaceVisemesAsset), 1723252484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetFaceVisemesAsset_h__Script_OculusXRMovement_2521535635(TEXT("/Script/OculusXRMovement"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetFaceVisemesAsset_h__Script_OculusXRMovement_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRLiveLinkRetargetFaceVisemesAsset_h__Script_OculusXRMovement_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
