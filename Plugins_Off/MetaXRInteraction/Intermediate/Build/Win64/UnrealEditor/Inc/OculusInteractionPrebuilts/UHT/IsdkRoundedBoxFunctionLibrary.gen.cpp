// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRoundedBoxFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkRoundedBoxProperties *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties;
class UScriptStruct* FIsdkRoundedBoxProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkRoundedBoxProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerBorderRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterBorderRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerBorderRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterBorderRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkRoundedBoxProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_InnerBorderRadius = { "InnerBorderRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, InnerBorderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerBorderRadius_MetaData), NewProp_InnerBorderRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_OuterBorderRadius = { "OuterBorderRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, OuterBorderRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterBorderRadius_MetaData), NewProp_OuterBorderRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, CornerRadius), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillColor_MetaData), NewProp_FillColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRoundedBoxProperties, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutlineColor_MetaData), NewProp_OutlineColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_InnerBorderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_OuterBorderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_FillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewProp_OutlineColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkRoundedBoxProperties",
	Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::PropPointers),
	sizeof(FIsdkRoundedBoxProperties),
	alignof(FIsdkRoundedBoxProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.InnerSingleton, Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties.InnerSingleton;
}
// ********** End ScriptStruct FIsdkRoundedBoxProperties *******************************************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function CreateRoundedBox *****************
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms
	{
		AActor* Target;
		FIsdkRoundedBoxProperties Properties;
		USceneComponent* Parent;
		UStaticMeshComponent* MeshComponent;
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		bool TwoSided;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "CPP_Default_TwoSided", "true" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static void NewProp_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms, Properties), Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties, METADATA_PARAMS(0, nullptr) }; // 2585525129
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_TwoSided_SetBit(void* Obj)
{
	((IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms*)Obj)->TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms), &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::NewProp_TwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "CreateRoundedBox", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::IsdkRoundedBoxFunctionLibrary_eventCreateRoundedBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execCreateRoundedBox)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FIsdkRoundedBoxProperties,Z_Param_Properties);
	P_GET_OBJECT(USceneComponent,Z_Param_Parent);
	P_GET_OBJECT_REF(UStaticMeshComponent,Z_Param_Out_MeshComponent);
	P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_RoundedBoxMaterial);
	P_GET_UBOOL(Z_Param_TwoSided);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::CreateRoundedBox(Z_Param_Target,Z_Param_Properties,Z_Param_Parent,P_ARG_GC_BARRIER(Z_Param_Out_MeshComponent),P_ARG_GC_BARRIER(Z_Param_Out_RoundedBoxMaterial),Z_Param_TwoSided);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function CreateRoundedBox *******************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetMeshComponentScale ************
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms
	{
		UStaticMeshComponent* MeshComponent;
		FVector2D Size;
		float OuterBorderRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterBorderRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_OuterBorderRadius = { "OuterBorderRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms, OuterBorderRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::NewProp_OuterBorderRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetMeshComponentScale", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::IsdkRoundedBoxFunctionLibrary_eventSetMeshComponentScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetMeshComponentScale)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterBorderRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetMeshComponentScale(Z_Param_MeshComponent,Z_Param_Size,Z_Param_OuterBorderRadius);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetMeshComponentScale **************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxDimensions **********
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms
	{
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		FVector2D Size;
		float InnerBorderRadius;
		float OuterBorderRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerBorderRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterBorderRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_InnerBorderRadius = { "InnerBorderRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms, InnerBorderRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_OuterBorderRadius = { "OuterBorderRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms, OuterBorderRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_InnerBorderRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::NewProp_OuterBorderRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetRoundedBoxDimensions", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxDimensions)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_RoundedBoxMaterial);
	P_GET_STRUCT(FVector2D,Z_Param_Size);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InnerBorderRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterBorderRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetRoundedBoxDimensions(Z_Param_RoundedBoxMaterial,Z_Param_Size,Z_Param_InnerBorderRadius,Z_Param_OuterBorderRadius);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxDimensions ************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialBorderColor *
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialBorderColor_Parms
	{
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialBorderColor_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialBorderColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetRoundedBoxMaterialBorderColor", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialBorderColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialBorderColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialBorderColor)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_RoundedBoxMaterial);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetRoundedBoxMaterialBorderColor(Z_Param_RoundedBoxMaterial,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialBorderColor ***

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialColor *******
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialColor_Parms
	{
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialColor_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetRoundedBoxMaterialColor", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialColor)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_RoundedBoxMaterial);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetRoundedBoxMaterialColor(Z_Param_RoundedBoxMaterial,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialColor *********

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialCornerRadius 
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialCornerRadius_Parms
	{
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		FVector4 Radii;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Radii;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialCornerRadius_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::NewProp_Radii = { "Radii", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialCornerRadius_Parms, Radii), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::NewProp_Radii,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetRoundedBoxMaterialCornerRadius", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialCornerRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialCornerRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialCornerRadius)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_RoundedBoxMaterial);
	P_GET_STRUCT(FVector4,Z_Param_Radii);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetRoundedBoxMaterialCornerRadius(Z_Param_RoundedBoxMaterial,Z_Param_Radii);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialCornerRadius **

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialParameters **
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialParameters_Parms
	{
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		FIsdkRoundedBoxProperties Properties;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialParameters_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialParameters_Parms, Properties), Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties, METADATA_PARAMS(0, nullptr) }; // 2585525129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetRoundedBoxMaterialParameters", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::IsdkRoundedBoxFunctionLibrary_eventSetRoundedBoxMaterialParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialParameters)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_RoundedBoxMaterial);
	P_GET_STRUCT(FIsdkRoundedBoxProperties,Z_Param_Properties);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetRoundedBoxMaterialParameters(Z_Param_RoundedBoxMaterial,Z_Param_Properties);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetRoundedBoxMaterialParameters ****

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary Function SetupRoundedBox ******************
struct Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics
{
	struct IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms
	{
		AActor* Target;
		FIsdkRoundedBoxProperties Properties;
		USceneComponent* Parent;
		UStaticMeshComponent* MeshComponent;
		UMaterialInstanceDynamic* RoundedBoxMaterial;
		bool TwoSided;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "CPP_Default_TwoSided", "true" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundedBoxMaterial;
	static void NewProp_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms, Properties), Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties, METADATA_PARAMS(0, nullptr) }; // 2585525129
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms, Parent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_RoundedBoxMaterial = { "RoundedBoxMaterial", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms, RoundedBoxMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_TwoSided_SetBit(void* Obj)
{
	((IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms*)Obj)->TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms), &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_RoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::NewProp_TwoSided,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, nullptr, "SetupRoundedBox", Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::IsdkRoundedBoxFunctionLibrary_eventSetupRoundedBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedBoxFunctionLibrary::execSetupRoundedBox)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_STRUCT(FIsdkRoundedBoxProperties,Z_Param_Properties);
	P_GET_OBJECT(USceneComponent,Z_Param_Parent);
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComponent);
	P_GET_OBJECT_REF(UMaterialInstanceDynamic,Z_Param_Out_RoundedBoxMaterial);
	P_GET_UBOOL(Z_Param_TwoSided);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRoundedBoxFunctionLibrary::SetupRoundedBox(Z_Param_Target,Z_Param_Properties,Z_Param_Parent,Z_Param_MeshComponent,P_ARG_GC_BARRIER(Z_Param_Out_RoundedBoxMaterial),Z_Param_TwoSided);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedBoxFunctionLibrary Function SetupRoundedBox ********************

// ********** Begin Class UIsdkRoundedBoxFunctionLibrary *******************************************
void UIsdkRoundedBoxFunctionLibrary::StaticRegisterNativesUIsdkRoundedBoxFunctionLibrary()
{
	UClass* Class = UIsdkRoundedBoxFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateRoundedBox", &UIsdkRoundedBoxFunctionLibrary::execCreateRoundedBox },
		{ "SetMeshComponentScale", &UIsdkRoundedBoxFunctionLibrary::execSetMeshComponentScale },
		{ "SetRoundedBoxDimensions", &UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxDimensions },
		{ "SetRoundedBoxMaterialBorderColor", &UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialBorderColor },
		{ "SetRoundedBoxMaterialColor", &UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialColor },
		{ "SetRoundedBoxMaterialCornerRadius", &UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialCornerRadius },
		{ "SetRoundedBoxMaterialParameters", &UIsdkRoundedBoxFunctionLibrary::execSetRoundedBoxMaterialParameters },
		{ "SetupRoundedBox", &UIsdkRoundedBoxFunctionLibrary::execSetupRoundedBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary;
UClass* UIsdkRoundedBoxFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UIsdkRoundedBoxFunctionLibrary;
	if (!Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRoundedBoxFunctionLibrary"),
			Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUIsdkRoundedBoxFunctionLibrary,
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
	return Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_NoRegister()
{
	return UIsdkRoundedBoxFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RoundedBoxVisuals/IsdkRoundedBoxFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_CreateRoundedBox, "CreateRoundedBox" }, // 3896583238
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetMeshComponentScale, "SetMeshComponentScale" }, // 3866221788
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxDimensions, "SetRoundedBoxDimensions" }, // 680366404
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialBorderColor, "SetRoundedBoxMaterialBorderColor" }, // 2527836501
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialColor, "SetRoundedBoxMaterialColor" }, // 2660996405
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialCornerRadius, "SetRoundedBoxMaterialCornerRadius" }, // 956938068
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetRoundedBoxMaterialParameters, "SetRoundedBoxMaterialParameters" }, // 1464035589
		{ &Z_Construct_UFunction_UIsdkRoundedBoxFunctionLibrary_SetupRoundedBox, "SetupRoundedBox" }, // 161440761
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRoundedBoxFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::ClassParams = {
	&UIsdkRoundedBoxFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.OuterSingleton, Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary.OuterSingleton;
}
UIsdkRoundedBoxFunctionLibrary::UIsdkRoundedBoxFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRoundedBoxFunctionLibrary);
UIsdkRoundedBoxFunctionLibrary::~UIsdkRoundedBoxFunctionLibrary() {}
// ********** End Class UIsdkRoundedBoxFunctionLibrary *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkRoundedBoxProperties::StaticStruct, Z_Construct_UScriptStruct_FIsdkRoundedBoxProperties_Statics::NewStructOps, TEXT("IsdkRoundedBoxProperties"), &Z_Registration_Info_UScriptStruct_FIsdkRoundedBoxProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkRoundedBoxProperties), 2585525129U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRoundedBoxFunctionLibrary, UIsdkRoundedBoxFunctionLibrary::StaticClass, TEXT("UIsdkRoundedBoxFunctionLibrary"), &Z_Registration_Info_UClass_UIsdkRoundedBoxFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRoundedBoxFunctionLibrary), 1338550903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_1475124813(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_RoundedBoxVisuals_IsdkRoundedBoxFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
