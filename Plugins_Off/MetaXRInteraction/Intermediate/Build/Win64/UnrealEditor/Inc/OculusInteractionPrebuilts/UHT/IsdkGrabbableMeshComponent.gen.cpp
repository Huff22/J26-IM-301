// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkGrabbableMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabbableMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabbableMeshComponent Function SetCollision ************************
struct Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics
{
	struct IsdkGrabbableMeshComponent_eventSetCollision_Parms
	{
		UShapeComponent* Coll;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coll_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Coll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::NewProp_Coll = { "Coll", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableMeshComponent_eventSetCollision_Parms, Coll), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coll_MetaData), NewProp_Coll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::NewProp_Coll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableMeshComponent, nullptr, "SetCollision", Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::IsdkGrabbableMeshComponent_eventSetCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::IsdkGrabbableMeshComponent_eventSetCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableMeshComponent::execSetCollision)
{
	P_GET_OBJECT(UShapeComponent,Z_Param_Coll);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCollision(Z_Param_Coll);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableMeshComponent Function SetCollision **************************

// ********** Begin Class UIsdkGrabbableMeshComponent Function SetMesh *****************************
struct Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics
{
	struct IsdkGrabbableMeshComponent_eventSetMesh_Parms
	{
		UStaticMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableMeshComponent_eventSetMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableMeshComponent, nullptr, "SetMesh", Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::IsdkGrabbableMeshComponent_eventSetMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::IsdkGrabbableMeshComponent_eventSetMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableMeshComponent::execSetMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableMeshComponent Function SetMesh *******************************

// ********** Begin Class UIsdkGrabbableMeshComponent **********************************************
void UIsdkGrabbableMeshComponent::StaticRegisterNativesUIsdkGrabbableMeshComponent()
{
	UClass* Class = UIsdkGrabbableMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCollision", &UIsdkGrabbableMeshComponent::execSetCollision },
		{ "SetMesh", &UIsdkGrabbableMeshComponent::execSetMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent;
UClass* UIsdkGrabbableMeshComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabbableMeshComponent;
	if (!Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabbableMeshComponent"),
			Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.InnerSingleton,
			StaticRegisterNativesUIsdkGrabbableMeshComponent,
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
	return Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent_NoRegister()
{
	return UIsdkGrabbableMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkGrabbableMeshComponent\n * @brief\n *\n * @addtogroup InteractionSDKPrebuilts\n */" },
		{ "DisplayName", "ISDK Grabbable Mesh Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "IsdkGrabbableMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
		{ "ToolTip", "@class UIsdkGrabbableMeshComponent\n@brief\n\n@addtogroup InteractionSDKPrebuilts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
		{ "UseComponentPicker", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grabbable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkGrabbableMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grabbable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetCollision, "SetCollision" }, // 4056135105
		{ &Z_Construct_UFunction_UIsdkGrabbableMeshComponent_SetMesh, "SetMesh" }, // 1392905340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabbableMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x001200000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Grabbable = { "Grabbable", nullptr, (EPropertyFlags)0x0042000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, Grabbable), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grabbable_MetaData), NewProp_Grabbable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0042000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableMeshComponent, Collision), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_MaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Grabbable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::NewProp_Collision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::ClassParams = {
	&UIsdkGrabbableMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabbableMeshComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.OuterSingleton, Z_Construct_UClass_UIsdkGrabbableMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabbableMeshComponent);
UIsdkGrabbableMeshComponent::~UIsdkGrabbableMeshComponent() {}
// ********** End Class UIsdkGrabbableMeshComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabbableMeshComponent, UIsdkGrabbableMeshComponent::StaticClass, TEXT("UIsdkGrabbableMeshComponent"), &Z_Registration_Info_UClass_UIsdkGrabbableMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabbableMeshComponent), 1315704947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h__Script_OculusInteractionPrebuilts_3440039723(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkGrabbableMeshComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
