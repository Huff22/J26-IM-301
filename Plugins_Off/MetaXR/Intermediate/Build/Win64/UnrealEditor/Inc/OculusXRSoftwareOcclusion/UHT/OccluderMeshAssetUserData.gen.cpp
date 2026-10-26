// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OccluderMeshAssetUserData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOccluderMeshAssetUserData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
OCULUSXRSOFTWAREOCCLUSION_API UClass* Z_Construct_UClass_UOccluderMeshAssetUserData();
OCULUSXRSOFTWAREOCCLUSION_API UClass* Z_Construct_UClass_UOccluderMeshAssetUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRSoftwareOcclusion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOccluderMeshAssetUserData ***********************************************
void UOccluderMeshAssetUserData::StaticRegisterNativesUOccluderMeshAssetUserData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOccluderMeshAssetUserData;
UClass* UOccluderMeshAssetUserData::GetPrivateStaticClass()
{
	using TClass = UOccluderMeshAssetUserData;
	if (!Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OccluderMeshAssetUserData"),
			Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton,
			StaticRegisterNativesUOccluderMeshAssetUserData,
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
	return Z_Registration_Info_UClass_UOccluderMeshAssetUserData.InnerSingleton;
}
UClass* Z_Construct_UClass_UOccluderMeshAssetUserData_NoRegister()
{
	return UOccluderMeshAssetUserData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOccluderMeshAssetUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This AssertUserData is used to hold both LODForOccluderMesh and CustomOccluderMesh for UStaticMeshes or USkeletalMeshes.\n * Note that LODForOccluderMesh and CustomOccluderMesh are exclusive.\n */" },
#endif
		{ "IncludePath", "OccluderMeshAssetUserData.h" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This AssertUserData is used to hold both LODForOccluderMesh and CustomOccluderMesh for UStaticMeshes or USkeletalMeshes.\nNote that LODForOccluderMesh and CustomOccluderMesh are exclusive." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMesh_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh for software occlusion\n\x09 *  Mutually exclusive with LODForOccluderMesh\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh" },
		{ "EditCondition", "LODForOccluderMesh < 0" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh for software occlusion\nMutually exclusive with LODForOccluderMesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMeshScale_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh scale if different with that of the parent component\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh Scale" },
		{ "EditCondition", "CustomOccluderMesh != nullptr" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh scale if different with that of the parent component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomOccluderMeshOffset_MetaData[] = {
		{ "Category", "CustomOccluder" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies the custom occluder mesh offset if different with that of the parent component\n\x09 */" },
#endif
		{ "DisplayName", "Custom Occluder Mesh Offset" },
		{ "EditCondition", "CustomOccluderMesh != nullptr" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies the custom occluder mesh offset if different with that of the parent component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODForOccluderMesh_MetaData[] = {
		{ "Category", "LOD" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Specifies which staticmesh LOD to use as occluder geometry for software occlusion. Not suitable for skeletal meshes.\n\x09 *  Mutually exclusive with CustomOccluderMesh\n\x09 *  Set to -1 to not use this mesh as occluder\n\x09 */" },
#endif
		{ "DisplayName", "Parent StaticMesh LOD For Occluder Mesh" },
		{ "ModuleRelativePath", "Private/OccluderMeshAssetUserData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies which staticmesh LOD to use as occluder geometry for software occlusion. Not suitable for skeletal meshes.\nMutually exclusive with CustomOccluderMesh\nSet to -1 to not use this mesh as occluder" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomOccluderMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOccluderMeshScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomOccluderMeshOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODForOccluderMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOccluderMeshAssetUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMesh = { "CustomOccluderMesh", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMesh_MetaData), NewProp_CustomOccluderMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMeshScale = { "CustomOccluderMeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMeshScale_MetaData), NewProp_CustomOccluderMeshScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMeshOffset = { "CustomOccluderMeshOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, CustomOccluderMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomOccluderMeshOffset_MetaData), NewProp_CustomOccluderMeshOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_LODForOccluderMesh = { "LODForOccluderMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOccluderMeshAssetUserData, LODForOccluderMesh), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODForOccluderMesh_MetaData), NewProp_LODForOccluderMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMeshScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_CustomOccluderMeshOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::NewProp_LODForOccluderMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRSoftwareOcclusion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::ClassParams = {
	&UOccluderMeshAssetUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::PropPointers),
	0,
	0x002010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOccluderMeshAssetUserData()
{
	if (!Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton, Z_Construct_UClass_UOccluderMeshAssetUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOccluderMeshAssetUserData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOccluderMeshAssetUserData);
UOccluderMeshAssetUserData::~UOccluderMeshAssetUserData() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOccluderMeshAssetUserData)
// ********** End Class UOccluderMeshAssetUserData *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOccluderMeshAssetUserData, UOccluderMeshAssetUserData::StaticClass, TEXT("UOccluderMeshAssetUserData"), &Z_Registration_Info_UClass_UOccluderMeshAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOccluderMeshAssetUserData), 432976633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_3769160431(TEXT("/Script/OculusXRSoftwareOcclusion"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRSoftwareOcclusion_Private_OccluderMeshAssetUserData_h__Script_OculusXRSoftwareOcclusion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
