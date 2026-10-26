// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUtilityKitDestructibleMesh.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMRUtilityKitDestructibleMesh() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_AMRUKRoom_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister();
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode();
MRUTILITYKIT_API UFunction* Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnMeshesGenerated ****************************************************
struct Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKDestructibleMeshComponent, nullptr, "OnMeshesGenerated__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UMRUKDestructibleMeshComponent::FOnMeshesGenerated_DelegateWrapper(const FMulticastScriptDelegate& OnMeshesGenerated)
{
	OnMeshesGenerated.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnMeshesGenerated ******************************************************

// ********** Begin Class UMRUKDestructibleMeshComponent *******************************************
void UMRUKDestructibleMeshComponent::StaticRegisterNativesUMRUKDestructibleMeshComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent;
UClass* UMRUKDestructibleMeshComponent::GetPrivateStaticClass()
{
	using TClass = UMRUKDestructibleMeshComponent;
	if (!Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKDestructibleMeshComponent"),
			Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.InnerSingleton,
			StaticRegisterNativesUMRUKDestructibleMeshComponent,
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
	return Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister()
{
	return UMRUKDestructibleMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Destructible mesh component. Creates mesh segments for the given geometry.\n * The segments will be created async.\n * In addition, its possible to define areas that are indestructible.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Destructible Mesh Component" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "MRUtilityKitDestructibleMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Destructible mesh component. Creates mesh segments for the given geometry.\nThe segments will be created async.\nIn addition, its possible to define areas that are indestructible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMeshesGenerated_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMeshMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Material to display on the global mesh\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to display on the global mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedTop_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Area on the top of the mesh that should be indestructible.\n\x09 * The area is given in centimeters 1.0 == 1 cm.\n\x09 * -1.0 means no reserved area.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area on the top of the mesh that should be indestructible.\nThe area is given in centimeters 1.0 == 1 cm.\n-1.0 means no reserved area." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedBottom_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Area on the bottom of the mesh that should be indestructible.\n\x09 * The area is given in centimeters 1.0 == 1 cm\n\x09 * -1.0 means no reserved area.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area on the bottom of the mesh that should be indestructible.\nThe area is given in centimeters 1.0 == 1 cm\n-1.0 means no reserved area." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMeshesGenerated;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalMeshMaterial;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReservedTop;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReservedBottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature, "OnMeshesGenerated__DelegateSignature" }, // 202275699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKDestructibleMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_OnMeshesGenerated = { "OnMeshesGenerated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDestructibleMeshComponent, OnMeshesGenerated), Z_Construct_UDelegateFunction_UMRUKDestructibleMeshComponent_OnMeshesGenerated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMeshesGenerated_MetaData), NewProp_OnMeshesGenerated_MetaData) }; // 202275699
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_GlobalMeshMaterial = { "GlobalMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDestructibleMeshComponent, GlobalMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalMeshMaterial_MetaData), NewProp_GlobalMeshMaterial_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_ReservedTop = { "ReservedTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDestructibleMeshComponent, ReservedTop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedTop_MetaData), NewProp_ReservedTop_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_ReservedBottom = { "ReservedBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKDestructibleMeshComponent, ReservedBottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedBottom_MetaData), NewProp_ReservedBottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_OnMeshesGenerated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_GlobalMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_ReservedTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::NewProp_ReservedBottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProceduralMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::ClassParams = {
	&UMRUKDestructibleMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKDestructibleMeshComponent()
{
	if (!Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.OuterSingleton, Z_Construct_UClass_UMRUKDestructibleMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKDestructibleMeshComponent);
UMRUKDestructibleMeshComponent::~UMRUKDestructibleMeshComponent() {}
// ********** End Class UMRUKDestructibleMeshComponent *********************************************

// ********** Begin Class AMRUKDestructibleGlobalMesh Function CreateDestructibleMesh **************
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics
{
	struct MRUKDestructibleGlobalMesh_eventCreateDestructibleMesh_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Create a destructible mesh for the given room. If the global mesh has not yet been loaded\n\x09 * this function will attempt to load the global mesh from the device.\n\x09 * @param Room The room\n\x09 */" },
#endif
		{ "CPP_Default_Room", "None" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a destructible mesh for the given room. If the global mesh has not yet been loaded\nthis function will attempt to load the global mesh from the device.\n@param Room The room" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMesh_eventCreateDestructibleMesh_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMesh, nullptr, "CreateDestructibleMesh", Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::MRUKDestructibleGlobalMesh_eventCreateDestructibleMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::MRUKDestructibleGlobalMesh_eventCreateDestructibleMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMesh::execCreateDestructibleMesh)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDestructibleMesh(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMesh Function CreateDestructibleMesh ****************

// ********** Begin Class AMRUKDestructibleGlobalMesh Function RemoveGlobalMeshSegment *************
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics
{
	struct MRUKDestructibleGlobalMesh_eventRemoveGlobalMeshSegment_Parms
	{
		UPrimitiveComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Remove a segment of the global mesh. Takes care of not removing the reserved global mesh segment.\n\x09 * @param Mesh The mesh to remove\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a segment of the global mesh. Takes care of not removing the reserved global mesh segment.\n@param Mesh The mesh to remove" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMesh_eventRemoveGlobalMeshSegment_Parms, Mesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMesh, nullptr, "RemoveGlobalMeshSegment", Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::MRUKDestructibleGlobalMesh_eventRemoveGlobalMeshSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::MRUKDestructibleGlobalMesh_eventRemoveGlobalMeshSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMesh::execRemoveGlobalMeshSegment)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveGlobalMeshSegment(Z_Param_Mesh);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMesh Function RemoveGlobalMeshSegment ***************

// ********** Begin Class AMRUKDestructibleGlobalMesh **********************************************
void AMRUKDestructibleGlobalMesh::StaticRegisterNativesAMRUKDestructibleGlobalMesh()
{
	UClass* Class = AMRUKDestructibleGlobalMesh::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDestructibleMesh", &AMRUKDestructibleGlobalMesh::execCreateDestructibleMesh },
		{ "RemoveGlobalMeshSegment", &AMRUKDestructibleGlobalMesh::execRemoveGlobalMeshSegment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh;
UClass* AMRUKDestructibleGlobalMesh::GetPrivateStaticClass()
{
	using TClass = AMRUKDestructibleGlobalMesh;
	if (!Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKDestructibleGlobalMesh"),
			Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.InnerSingleton,
			StaticRegisterNativesAMRUKDestructibleGlobalMesh,
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
	return Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.InnerSingleton;
}
UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister()
{
	return AMRUKDestructibleGlobalMesh::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Actor that constructs a destructible mesh for the given room\n * The actor will automatically attach to the global mesh anchor of the given room to take it location and orientation.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Destructible Global Mesh" },
		{ "IncludePath", "MRUtilityKitDestructibleMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor that constructs a destructible mesh for the given room\nThe actor will automatically attach to the global mesh anchor of the given room to take it location and orientation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestructibleMeshComponent_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitX_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the X axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the X axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitY_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the Y axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the Y axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitZ_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the Z axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the Z axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestructibleMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_CreateDestructibleMesh, "CreateDestructibleMesh" }, // 2255173697
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMesh_RemoveGlobalMeshSegment, "RemoveGlobalMeshSegment" }, // 2503137075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKDestructibleGlobalMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_DestructibleMeshComponent = { "DestructibleMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMesh, DestructibleMeshComponent), Z_Construct_UClass_UMRUKDestructibleMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestructibleMeshComponent_MetaData), NewProp_DestructibleMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitX = { "PointsPerUnitX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMesh, PointsPerUnitX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitX_MetaData), NewProp_PointsPerUnitX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitY = { "PointsPerUnitY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMesh, PointsPerUnitY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitY_MetaData), NewProp_PointsPerUnitY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitZ = { "PointsPerUnitZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMesh, PointsPerUnitZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitZ_MetaData), NewProp_PointsPerUnitZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_DestructibleMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::NewProp_PointsPerUnitZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::ClassParams = {
	&AMRUKDestructibleGlobalMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMesh()
{
	if (!Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.OuterSingleton, Z_Construct_UClass_AMRUKDestructibleGlobalMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKDestructibleGlobalMesh);
AMRUKDestructibleGlobalMesh::~AMRUKDestructibleGlobalMesh() {}
// ********** End Class AMRUKDestructibleGlobalMesh ************************************************

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner Function AddDestructibleGlobalMesh ****
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics
{
	struct MRUKDestructibleGlobalMeshSpawner_eventAddDestructibleGlobalMesh_Parms
	{
		AMRUKRoom* Room;
		AMRUKDestructibleGlobalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Add new destructible mesh for the given room. A mesh will only get spawned if no\n\x09 * destructible mesh has been spawned for the room yet.\n\x09 * @param Room The room.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add new destructible mesh for the given room. A mesh will only get spawned if no\ndestructible mesh has been spawned for the room yet.\n@param Room The room." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventAddDestructibleGlobalMesh_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventAddDestructibleGlobalMesh_Parms, ReturnValue), Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner, nullptr, "AddDestructibleGlobalMesh", Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::MRUKDestructibleGlobalMeshSpawner_eventAddDestructibleGlobalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::MRUKDestructibleGlobalMeshSpawner_eventAddDestructibleGlobalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMeshSpawner::execAddDestructibleGlobalMesh)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKDestructibleGlobalMesh**)Z_Param__Result=P_THIS->AddDestructibleGlobalMesh(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMeshSpawner Function AddDestructibleGlobalMesh ******

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner Function FindDestructibleMeshForRoom **
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics
{
	struct MRUKDestructibleGlobalMeshSpawner_eventFindDestructibleMeshForRoom_Parms
	{
		AMRUKRoom* Room;
		AMRUKDestructibleGlobalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find the destructible mesh that has been spawned for the given room.\n\x09 * @param Room Room to look for the destructible mesh\n\x09 * @return The destructible mesh\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find the destructible mesh that has been spawned for the given room.\n@param Room Room to look for the destructible mesh\n@return The destructible mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventFindDestructibleMeshForRoom_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventFindDestructibleMeshForRoom_Parms, ReturnValue), Z_Construct_UClass_AMRUKDestructibleGlobalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::NewProp_Room,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner, nullptr, "FindDestructibleMeshForRoom", Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::MRUKDestructibleGlobalMeshSpawner_eventFindDestructibleMeshForRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::MRUKDestructibleGlobalMeshSpawner_eventFindDestructibleMeshForRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMeshSpawner::execFindDestructibleMeshForRoom)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMRUKDestructibleGlobalMesh**)Z_Param__Result=P_THIS->FindDestructibleMeshForRoom(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMeshSpawner Function FindDestructibleMeshForRoom ****

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner Function OnRoomCreated ****************
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics
{
	struct MRUKDestructibleGlobalMeshSpawner_eventOnRoomCreated_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventOnRoomCreated_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner, nullptr, "OnRoomCreated", Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::MRUKDestructibleGlobalMeshSpawner_eventOnRoomCreated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::MRUKDestructibleGlobalMeshSpawner_eventOnRoomCreated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMeshSpawner::execOnRoomCreated)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomCreated(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMeshSpawner Function OnRoomCreated ******************

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner Function OnRoomRemoved ****************
struct Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics
{
	struct MRUKDestructibleGlobalMeshSpawner_eventOnRoomRemoved_Parms
	{
		AMRUKRoom* Room;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Room;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::NewProp_Room = { "Room", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKDestructibleGlobalMeshSpawner_eventOnRoomRemoved_Parms, Room), Z_Construct_UClass_AMRUKRoom_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::NewProp_Room,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner, nullptr, "OnRoomRemoved", Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::MRUKDestructibleGlobalMeshSpawner_eventOnRoomRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::MRUKDestructibleGlobalMeshSpawner_eventOnRoomRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMRUKDestructibleGlobalMeshSpawner::execOnRoomRemoved)
{
	P_GET_OBJECT(AMRUKRoom,Z_Param_Room);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRoomRemoved(Z_Param_Room);
	P_NATIVE_END;
}
// ********** End Class AMRUKDestructibleGlobalMeshSpawner Function OnRoomRemoved ******************

// ********** Begin Class AMRUKDestructibleGlobalMeshSpawner ***************************************
void AMRUKDestructibleGlobalMeshSpawner::StaticRegisterNativesAMRUKDestructibleGlobalMeshSpawner()
{
	UClass* Class = AMRUKDestructibleGlobalMeshSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDestructibleGlobalMesh", &AMRUKDestructibleGlobalMeshSpawner::execAddDestructibleGlobalMesh },
		{ "FindDestructibleMeshForRoom", &AMRUKDestructibleGlobalMeshSpawner::execFindDestructibleMeshForRoom },
		{ "OnRoomCreated", &AMRUKDestructibleGlobalMeshSpawner::execOnRoomCreated },
		{ "OnRoomRemoved", &AMRUKDestructibleGlobalMeshSpawner::execOnRoomRemoved },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner;
UClass* AMRUKDestructibleGlobalMeshSpawner::GetPrivateStaticClass()
{
	using TClass = AMRUKDestructibleGlobalMeshSpawner;
	if (!Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKDestructibleGlobalMeshSpawner"),
			Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.InnerSingleton,
			StaticRegisterNativesAMRUKDestructibleGlobalMeshSpawner,
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
	return Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.InnerSingleton;
}
UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_NoRegister()
{
	return AMRUKDestructibleGlobalMeshSpawner::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * The destructible global mesh spawner allows to spawn (automatically) destructible global meshes\n * when new rooms are created.\n * A destructible global mesh is a version of the global mesh that can be destructed during runtime.\n * The bulk of the work is performed in UDestructibleMeshComponent. It will perform on start a one time\n * preprocessing step to segment the given global mesh into smaller chunks. After that the chunks can be used\n * during the game and removed (e.g. with ray casts) at any time during the game simulating as if the global\n * mesh would crack down. To enhance the visual quality when cracking the (e.g. removing mesh chunks) global mesh\n * a particle system could be used. The system allows to define areas that should be non destructible.\n */" },
#endif
		{ "DisplayName", "MR Utility Kit Destructible Global Mesh Spawner" },
		{ "IncludePath", "MRUtilityKitDestructibleMesh.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The destructible global mesh spawner allows to spawn (automatically) destructible global meshes\nwhen new rooms are created.\nA destructible global mesh is a version of the global mesh that can be destructed during runtime.\nThe bulk of the work is performed in UDestructibleMeshComponent. It will perform on start a one time\npreprocessing step to segment the given global mesh into smaller chunks. After that the chunks can be used\nduring the game and removed (e.g. with ray casts) at any time during the game simulating as if the global\nmesh would crack down. To enhance the visual quality when cracking the (e.g. removing mesh chunks) global mesh\na particle system could be used. The system allows to define areas that should be non destructible." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMode_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether destructible meshes should be spawned automatically.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether destructible meshes should be spawned automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMeshMaterial_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Material to display on the global mesh\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to display on the global mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitX_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the X axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the X axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitY_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the Y axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the Y axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsPerUnitZ_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The number of points per unit along the Z axis\n\x09 * Increase this value to get smaller cracks in the global mesh.\n\x09 * Decrease this value to get bigger cracks in the global mesh.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The number of points per unit along the Z axis\nIncrease this value to get smaller cracks in the global mesh.\nDecrease this value to get bigger cracks in the global mesh." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedTop_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Area on the top of the mesh that should be indestructible.\n\x09 * The area is given in centimeters 1.0 == 1 cm\n\x09 * -1.0 means no reserved area.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area on the top of the mesh that should be indestructible.\nThe area is given in centimeters 1.0 == 1 cm\n-1.0 means no reserved area." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReservedBottom_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Area on the bottom of the mesh that should be indestructible.\n\x09 * The area is given in centimeters 1.0 == 1 cm\n\x09 * -1.0 means no reserved area.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUtilityKitDestructibleMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Area on the bottom of the mesh that should be indestructible.\nThe area is given in centimeters 1.0 == 1 cm\n-1.0 means no reserved area." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GlobalMeshMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointsPerUnitZ;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReservedTop;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReservedBottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_AddDestructibleGlobalMesh, "AddDestructibleGlobalMesh" }, // 1325425446
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_FindDestructibleMeshForRoom, "FindDestructibleMeshForRoom" }, // 882750614
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomCreated, "OnRoomCreated" }, // 4225364506
		{ &Z_Construct_UFunction_AMRUKDestructibleGlobalMeshSpawner_OnRoomRemoved, "OnRoomRemoved" }, // 157896472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMRUKDestructibleGlobalMeshSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_SpawnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_SpawnMode = { "SpawnMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, SpawnMode), Z_Construct_UEnum_MRUtilityKit_EMRUKSpawnMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMode_MetaData), NewProp_SpawnMode_MetaData) }; // 3644066624
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_GlobalMeshMaterial = { "GlobalMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, GlobalMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalMeshMaterial_MetaData), NewProp_GlobalMeshMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitX = { "PointsPerUnitX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, PointsPerUnitX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitX_MetaData), NewProp_PointsPerUnitX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitY = { "PointsPerUnitY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, PointsPerUnitY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitY_MetaData), NewProp_PointsPerUnitY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitZ = { "PointsPerUnitZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, PointsPerUnitZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsPerUnitZ_MetaData), NewProp_PointsPerUnitZ_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_ReservedTop = { "ReservedTop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, ReservedTop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedTop_MetaData), NewProp_ReservedTop_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_ReservedBottom = { "ReservedBottom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMRUKDestructibleGlobalMeshSpawner, ReservedBottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReservedBottom_MetaData), NewProp_ReservedBottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_SpawnMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_SpawnMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_GlobalMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_PointsPerUnitZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_ReservedTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::NewProp_ReservedBottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::ClassParams = {
	&AMRUKDestructibleGlobalMeshSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner()
{
	if (!Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.OuterSingleton, Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner.OuterSingleton;
}
AMRUKDestructibleGlobalMeshSpawner::AMRUKDestructibleGlobalMeshSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMRUKDestructibleGlobalMeshSpawner);
AMRUKDestructibleGlobalMeshSpawner::~AMRUKDestructibleGlobalMeshSpawner() {}
// ********** End Class AMRUKDestructibleGlobalMeshSpawner *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h__Script_MRUtilityKit_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKDestructibleMeshComponent, UMRUKDestructibleMeshComponent::StaticClass, TEXT("UMRUKDestructibleMeshComponent"), &Z_Registration_Info_UClass_UMRUKDestructibleMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKDestructibleMeshComponent), 4222152737U) },
		{ Z_Construct_UClass_AMRUKDestructibleGlobalMesh, AMRUKDestructibleGlobalMesh::StaticClass, TEXT("AMRUKDestructibleGlobalMesh"), &Z_Registration_Info_UClass_AMRUKDestructibleGlobalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKDestructibleGlobalMesh), 2369731297U) },
		{ Z_Construct_UClass_AMRUKDestructibleGlobalMeshSpawner, AMRUKDestructibleGlobalMeshSpawner::StaticClass, TEXT("AMRUKDestructibleGlobalMeshSpawner"), &Z_Registration_Info_UClass_AMRUKDestructibleGlobalMeshSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMRUKDestructibleGlobalMeshSpawner), 1522471827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h__Script_MRUtilityKit_3504742369(TEXT("/Script/MRUtilityKit"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h__Script_MRUtilityKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUtilityKitDestructibleMesh_h__Script_MRUtilityKit_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
