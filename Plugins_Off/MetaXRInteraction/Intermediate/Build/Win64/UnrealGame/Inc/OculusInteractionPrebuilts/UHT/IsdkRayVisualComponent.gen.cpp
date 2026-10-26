// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractorVisuals/IsdkRayVisualComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRayVisualComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayVisualComponent Function GetCursorMaterial ***********************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics
{
	struct IsdkRayVisualComponent_eventGetCursorMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the material being used by the Cursor component\n   * @return UMaterialInterface* Material in use for the Cursor component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the material being used by the Cursor component\n@return UMaterialInterface* Material in use for the Cursor component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetCursorMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetCursorMaterial", Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::IsdkRayVisualComponent_eventGetCursorMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::IsdkRayVisualComponent_eventGetCursorMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetCursorMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetCursorMaterial();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetCursorMaterial *************************

// ********** Begin Class UIsdkRayVisualComponent Function GetCursorMaterialInstance ***************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics
{
	struct IsdkRayVisualComponent_eventGetCursorMaterialInstance_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the material instance being used by the Cursor component\n   * @return UMaterialInterface* Material instance in use for the Cursor component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the material instance being used by the Cursor component\n@return UMaterialInterface* Material instance in use for the Cursor component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetCursorMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetCursorMaterialInstance", Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::IsdkRayVisualComponent_eventGetCursorMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::IsdkRayVisualComponent_eventGetCursorMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetCursorMaterialInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetCursorMaterialInstance();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetCursorMaterialInstance *****************

// ********** Begin Class UIsdkRayVisualComponent Function GetCursorMesh ***************************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics
{
	struct IsdkRayVisualComponent_eventGetCursorMesh_Parms
	{
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the static mesh being used by the Cursor component\n   * @return UStaticMesh* Mesh in use for the Cursor component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the static mesh being used by the Cursor component\n@return UStaticMesh* Mesh in use for the Cursor component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetCursorMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetCursorMesh", Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::IsdkRayVisualComponent_eventGetCursorMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::IsdkRayVisualComponent_eventGetCursorMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetCursorMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=P_THIS->GetCursorMesh();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetCursorMesh *****************************

// ********** Begin Class UIsdkRayVisualComponent Function GetPinchArrowMaterial *******************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics
{
	struct IsdkRayVisualComponent_eventGetPinchArrowMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the material being used by the PinchArrow component\n   * @return UMaterialInterface* Material in use for the PinchArrow component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the material being used by the PinchArrow component\n@return UMaterialInterface* Material in use for the PinchArrow component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetPinchArrowMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetPinchArrowMaterial", Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::IsdkRayVisualComponent_eventGetPinchArrowMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::IsdkRayVisualComponent_eventGetPinchArrowMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetPinchArrowMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetPinchArrowMaterial();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetPinchArrowMaterial *********************

// ********** Begin Class UIsdkRayVisualComponent Function GetPinchArrowMaterialInstance ***********
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics
{
	struct IsdkRayVisualComponent_eventGetPinchArrowMaterialInstance_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the material instance being used by the PinchArrow component\n   * @return UMaterialInterface* Material instance in use for the PinchArrow component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the material instance being used by the PinchArrow component\n@return UMaterialInterface* Material instance in use for the PinchArrow component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetPinchArrowMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetPinchArrowMaterialInstance", Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::IsdkRayVisualComponent_eventGetPinchArrowMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::IsdkRayVisualComponent_eventGetPinchArrowMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetPinchArrowMaterialInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetPinchArrowMaterialInstance();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetPinchArrowMaterialInstance *************

// ********** Begin Class UIsdkRayVisualComponent Function GetPinchArrowMesh ***********************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics
{
	struct IsdkRayVisualComponent_eventGetPinchArrowMesh_Parms
	{
		USkeletalMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the static mesh being used by the PinchArrow component\n   * @return UStaticMesh* Mesh in use for the PinchArrow component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the static mesh being used by the PinchArrow component\n@return UStaticMesh* Mesh in use for the PinchArrow component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetPinchArrowMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetPinchArrowMesh", Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::IsdkRayVisualComponent_eventGetPinchArrowMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::IsdkRayVisualComponent_eventGetPinchArrowMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetPinchArrowMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USkeletalMesh**)Z_Param__Result=P_THIS->GetPinchArrowMesh();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetPinchArrowMesh *************************

// ********** Begin Class UIsdkRayVisualComponent Function GetTranslucentSortPriority **************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics
{
	struct IsdkRayVisualComponent_eventGetTranslucentSortPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the translucence sort priority, used by UPrimiveComponent for rendering\n   * @return int32 The translucence sort priority set for rendering\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Gets the translucence sort priority, used by UPrimiveComponent for rendering\n@return int32 The translucence sort priority set for rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventGetTranslucentSortPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "GetTranslucentSortPriority", Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::IsdkRayVisualComponent_eventGetTranslucentSortPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::IsdkRayVisualComponent_eventGetTranslucentSortPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execGetTranslucentSortPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTranslucentSortPriority();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function GetTranslucentSortPriority ****************

// ********** Begin Class UIsdkRayVisualComponent Function Initialize ******************************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the meshes and materials for the Cursor and PinchArrow components\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the meshes and materials for the Cursor and PinchArrow components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "Initialize", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function Initialize ********************************

// ********** Begin Class UIsdkRayVisualComponent Function SetCursorMaterial ***********************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics
{
	struct IsdkRayVisualComponent_eventSetCursorMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the material to be used by the Cursor component\n   * @param InMaterial New material to use for the Cursor component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the material to be used by the Cursor component\n@param InMaterial New material to use for the Cursor component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventSetCursorMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "SetCursorMaterial", Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::IsdkRayVisualComponent_eventSetCursorMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::IsdkRayVisualComponent_eventSetCursorMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execSetCursorMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCursorMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function SetCursorMaterial *************************

// ********** Begin Class UIsdkRayVisualComponent Function SetCursorMesh ***************************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics
{
	struct IsdkRayVisualComponent_eventSetCursorMesh_Parms
	{
		UStaticMesh* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the static mesh to be used by the Cursor component\n   * @param Mesh New mesh to use for the Cursor component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the static mesh to be used by the Cursor component\n@param Mesh New mesh to use for the Cursor component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventSetCursorMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "SetCursorMesh", Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::IsdkRayVisualComponent_eventSetCursorMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::IsdkRayVisualComponent_eventSetCursorMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execSetCursorMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCursorMesh(Z_Param_Mesh);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function SetCursorMesh *****************************

// ********** Begin Class UIsdkRayVisualComponent Function SetPinchArrowMaterial *******************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics
{
	struct IsdkRayVisualComponent_eventSetPinchArrowMaterial_Parms
	{
		UMaterialInterface* InMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the material to be used by the PinchArrow component\n   * @param InMaterial New material to use for the PinchArrow component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the material to be used by the PinchArrow component\n@param InMaterial New material to use for the PinchArrow component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventSetPinchArrowMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::NewProp_InMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "SetPinchArrowMaterial", Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::IsdkRayVisualComponent_eventSetPinchArrowMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::IsdkRayVisualComponent_eventSetPinchArrowMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execSetPinchArrowMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPinchArrowMaterial(Z_Param_InMaterial);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function SetPinchArrowMaterial *********************

// ********** Begin Class UIsdkRayVisualComponent Function SetPinchArrowMesh ***********************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics
{
	struct IsdkRayVisualComponent_eventSetPinchArrowMesh_Parms
	{
		USkeletalMesh* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the static mesh to be used by the PinchArrow component\n   * @param Mesh New mesh to use for the PinchArrow component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the static mesh to be used by the PinchArrow component\n@param Mesh New mesh to use for the PinchArrow component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventSetPinchArrowMesh_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "SetPinchArrowMesh", Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::IsdkRayVisualComponent_eventSetPinchArrowMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::IsdkRayVisualComponent_eventSetPinchArrowMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execSetPinchArrowMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPinchArrowMesh(Z_Param_Mesh);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function SetPinchArrowMesh *************************

// ********** Begin Class UIsdkRayVisualComponent Function SetTranslucentSortPriority **************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics
{
	struct IsdkRayVisualComponent_eventSetTranslucentSortPriority_Parms
	{
		int32 InTranslucentSortPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the translucence sort priority, used by UPrimiveComponent for rendering\n   * @param InTranslucentSortPriority The translucence sort priority to use for rendering\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Sets the translucence sort priority, used by UPrimiveComponent for rendering\n@param InTranslucentSortPriority The translucence sort priority to use for rendering" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InTranslucentSortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::NewProp_InTranslucentSortPriority = { "InTranslucentSortPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventSetTranslucentSortPriority_Parms, InTranslucentSortPriority), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::NewProp_InTranslucentSortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "SetTranslucentSortPriority", Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::IsdkRayVisualComponent_eventSetTranslucentSortPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::IsdkRayVisualComponent_eventSetTranslucentSortPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execSetTranslucentSortPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InTranslucentSortPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTranslucentSortPriority(Z_Param_InTranslucentSortPriority);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function SetTranslucentSortPriority ****************

// ********** Begin Class UIsdkRayVisualComponent Function UpdateMaterialInstanceParameters ********
struct Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Updates Material Instances with new values for both the Cursor (AccentColor, Color,\n   * ShadowColor) and PinchArrow (Color) components\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Updates Material Instances with new values for both the Cursor (AccentColor, Color,\nShadowColor) and PinchArrow (Color) components" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "UpdateMaterialInstanceParameters", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execUpdateMaterialInstanceParameters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMaterialInstanceParameters();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function UpdateMaterialInstanceParameters **********

// ********** Begin Class UIsdkRayVisualComponent Function UpdateVisual ****************************
struct Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics
{
	struct IsdkRayVisualComponent_eventUpdateVisual_Parms
	{
		FTransform PointerPoseTransform;
		FTransform CursorTransform;
		bool CollisionHitValid;
		float RaySelectStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief With passed in transforms and cursor state and ray strength, update the PinchArrow and\n   * Cursor components\n   * @param PointerPoseTransform The new transform of the pointer pose component\n   * @param CursorTransform The new transform of the cursor component\n   * @param CollisionHitValid If there is currently a collision hit from the Cursor\n   * @param RaySelectStrength Strength to utilize for both cursor and pinch arrow\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief With passed in transforms and cursor state and ray strength, update the PinchArrow and\nCursor components\n@param PointerPoseTransform The new transform of the pointer pose component\n@param CursorTransform The new transform of the cursor component\n@param CollisionHitValid If there is currently a collision hit from the Cursor\n@param RaySelectStrength Strength to utilize for both cursor and pinch arrow" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerPoseTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorTransform;
	static void NewProp_CollisionHitValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionHitValid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaySelectStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_PointerPoseTransform = { "PointerPoseTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventUpdateVisual_Parms, PointerPoseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CursorTransform = { "CursorTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventUpdateVisual_Parms, CursorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CollisionHitValid_SetBit(void* Obj)
{
	((IsdkRayVisualComponent_eventUpdateVisual_Parms*)Obj)->CollisionHitValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CollisionHitValid = { "CollisionHitValid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRayVisualComponent_eventUpdateVisual_Parms), &Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CollisionHitValid_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_RaySelectStrength = { "RaySelectStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualComponent_eventUpdateVisual_Parms, RaySelectStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_PointerPoseTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CursorTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_CollisionHitValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::NewProp_RaySelectStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualComponent, nullptr, "UpdateVisual", Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::IsdkRayVisualComponent_eventUpdateVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::IsdkRayVisualComponent_eventUpdateVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualComponent::execUpdateVisual)
{
	P_GET_STRUCT(FTransform,Z_Param_PointerPoseTransform);
	P_GET_STRUCT(FTransform,Z_Param_CursorTransform);
	P_GET_UBOOL(Z_Param_CollisionHitValid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RaySelectStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateVisual(Z_Param_PointerPoseTransform,Z_Param_CursorTransform,Z_Param_CollisionHitValid,Z_Param_RaySelectStrength);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualComponent Function UpdateVisual ******************************

// ********** Begin Class UIsdkRayVisualComponent **************************************************
void UIsdkRayVisualComponent::StaticRegisterNativesUIsdkRayVisualComponent()
{
	UClass* Class = UIsdkRayVisualComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCursorMaterial", &UIsdkRayVisualComponent::execGetCursorMaterial },
		{ "GetCursorMaterialInstance", &UIsdkRayVisualComponent::execGetCursorMaterialInstance },
		{ "GetCursorMesh", &UIsdkRayVisualComponent::execGetCursorMesh },
		{ "GetPinchArrowMaterial", &UIsdkRayVisualComponent::execGetPinchArrowMaterial },
		{ "GetPinchArrowMaterialInstance", &UIsdkRayVisualComponent::execGetPinchArrowMaterialInstance },
		{ "GetPinchArrowMesh", &UIsdkRayVisualComponent::execGetPinchArrowMesh },
		{ "GetTranslucentSortPriority", &UIsdkRayVisualComponent::execGetTranslucentSortPriority },
		{ "Initialize", &UIsdkRayVisualComponent::execInitialize },
		{ "SetCursorMaterial", &UIsdkRayVisualComponent::execSetCursorMaterial },
		{ "SetCursorMesh", &UIsdkRayVisualComponent::execSetCursorMesh },
		{ "SetPinchArrowMaterial", &UIsdkRayVisualComponent::execSetPinchArrowMaterial },
		{ "SetPinchArrowMesh", &UIsdkRayVisualComponent::execSetPinchArrowMesh },
		{ "SetTranslucentSortPriority", &UIsdkRayVisualComponent::execSetTranslucentSortPriority },
		{ "UpdateMaterialInstanceParameters", &UIsdkRayVisualComponent::execUpdateMaterialInstanceParameters },
		{ "UpdateVisual", &UIsdkRayVisualComponent::execUpdateVisual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayVisualComponent;
UClass* UIsdkRayVisualComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkRayVisualComponent;
	if (!Z_Registration_Info_UClass_UIsdkRayVisualComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRayVisualComponent"),
			Z_Registration_Info_UClass_UIsdkRayVisualComponent.InnerSingleton,
			StaticRegisterNativesUIsdkRayVisualComponent,
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
	return Z_Registration_Info_UClass_UIsdkRayVisualComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister()
{
	return UIsdkRayVisualComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayVisualComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * @class UIsdkRayVisualComponent\n * @brief Scene Component containing all relevant data for a ray visual\n *\n * Includes configuration parameters, getters and setters for related meshes and materials for the\n * ray visual\n * @see AIsdkRayVisual\n * @addtogroup InteractionSDKPrebuilts\n */" },
		{ "DisplayName", "ISDK Ray Visual Component" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@class UIsdkRayVisualComponent\n@brief Scene Component containing all relevant data for a ray visual\n\nIncludes configuration parameters, getters and setters for related meshes and materials for the\nray visual\n@see AIsdkRayVisual\n@addtogroup InteractionSDKPrebuilts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindInputActions_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief When true, during BeginPlay this actor will bind the configured input actions to the\n   * PlayerController at index 0.\n   * If false, a manual call to BindInputActionEvents must be made to bind the input actions.\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief When true, during BeginPlay this actor will bind the configured input actions to the\nPlayerController at index 0.\nIf false, a manual call to BindInputActionEvents must be made to bind the input actions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HmdDataSource_MetaData[] = {
		{ "Comment", "/**\n   * @brief Object implementing IIsdkIHmdDataSource to be used as the headset data source for this\n   * component\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Object implementing IIsdkIHmdDataSource to be used as the headset data source for this\ncomponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrow_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cursor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrowStrengthCurve_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrowMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrowMaterial_MetaData[] = {
		{ "BlueprintGetter", "GetPinchArrowMaterial" },
		{ "BlueprintSetter", "SetPinchArrowMaterial" },
		{ "Category", "InteractionSDK|Pinch Arrow|Material" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorMaterial_MetaData[] = {
		{ "BlueprintGetter", "GetCursorMaterial" },
		{ "BlueprintSetter", "SetCursorMaterial" },
		{ "Category", "InteractionSDK|Cursor|Material" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrowMesh_MetaData[] = {
		{ "BlueprintGetter", "GetPinchArrowMesh" },
		{ "BlueprintSetter", "SetPinchArrowMesh" },
		{ "Category", "InteractionSDK|Pinch Arrow" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorMesh_MetaData[] = {
		{ "BlueprintGetter", "GetCursorMesh" },
		{ "BlueprintSetter", "SetCursorMesh" },
		{ "Category", "InteractionSDK|Cursor" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowArrow_MetaData[] = {
		{ "Category", "InteractionSDK|Pinch Arrow" },
		{ "Comment", "/**\n   * @brief If the Arrow element of the cursor should be rendered\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief If the Arrow element of the cursor should be rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNames_MetaData[] = {
		{ "Category", "InteractionSDK|Pinch Arrow" },
		{ "Comment", "/**\n   * @brief Morph target names used for the PinchArrow\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Morph target names used for the PinchArrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchArrowColor_MetaData[] = {
		{ "Category", "InteractionSDK|Pinch Arrow|Material" },
		{ "Comment", "/**\n   * @brief Linear color used when rendering the PinchArrow\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Linear color used when rendering the PinchArrow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowCursor_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor" },
		{ "Comment", "/**\n   * @brief If the cursor element of the cursor should be rendered\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief If the cursor element of the cursor should be rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceDistance_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor" },
		{ "Comment", "/**\n   * @brief Distance at which the scale of the cursor is 1.0\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Distance at which the scale of the cursor is 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorSizeMinMax_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor" },
		{ "Comment", "/**\n   * @brief Cursor size range used for the scale change based on the current pinch strength\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Cursor size range used for the scale change based on the current pinch strength" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorAccentColor_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor|Material" },
		{ "Comment", "/**\n   * @brief Linear accent color to be used when rendering the Cursor\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Linear accent color to be used when rendering the Cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorColor_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor|Material" },
		{ "Comment", "/**\n   * @brief Linear color to be used when rendering the Cursor\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Linear color to be used when rendering the Cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorShadowColor_MetaData[] = {
		{ "Category", "InteractionSDK|Cursor|Material" },
		{ "Comment", "/**\n   * @brief Linear color to be used when rendering the Cursor's shadow\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
		{ "ToolTip", "@brief Linear color to be used when rendering the Cursor's shadow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPriority_MetaData[] = {
		{ "BlueprintGetter", "GetTranslucentSortPriority" },
		{ "BlueprintSetter", "SetTranslucentSortPriority" },
		{ "Category", "InteractionSDK|Cursor|Material" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoBindInputActions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindInputActions;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HmdDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchArrow;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchArrowStrengthCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchArrowMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchArrowMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchArrowMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorMesh;
	static void NewProp_ShowArrow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowArrow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MorphTargetNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinchArrowColor;
	static void NewProp_ShowCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowCursor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferenceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorSizeMinMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CursorShadowColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucentSortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterial, "GetCursorMaterial" }, // 1036878746
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMaterialInstance, "GetCursorMaterialInstance" }, // 1693300418
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetCursorMesh, "GetCursorMesh" }, // 2474258795
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterial, "GetPinchArrowMaterial" }, // 3040240690
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMaterialInstance, "GetPinchArrowMaterialInstance" }, // 3139886926
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetPinchArrowMesh, "GetPinchArrowMesh" }, // 2367870064
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_GetTranslucentSortPriority, "GetTranslucentSortPriority" }, // 933768491
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_Initialize, "Initialize" }, // 2404141445
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMaterial, "SetCursorMaterial" }, // 394341930
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_SetCursorMesh, "SetCursorMesh" }, // 1310393416
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMaterial, "SetPinchArrowMaterial" }, // 2070066662
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_SetPinchArrowMesh, "SetPinchArrowMesh" }, // 764925747
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_SetTranslucentSortPriority, "SetTranslucentSortPriority" }, // 2377141861
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateMaterialInstanceParameters, "UpdateMaterialInstanceParameters" }, // 3527153561
		{ &Z_Construct_UFunction_UIsdkRayVisualComponent_UpdateVisual, "UpdateVisual" }, // 1118597999
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayVisualComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_bAutoBindInputActions_SetBit(void* Obj)
{
	((UIsdkRayVisualComponent*)Obj)->bAutoBindInputActions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_bAutoBindInputActions = { "bAutoBindInputActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRayVisualComponent), &Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_bAutoBindInputActions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBindInputActions_MetaData), NewProp_bAutoBindInputActions_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_HmdDataSource = { "HmdDataSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, HmdDataSource), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HmdDataSource_MetaData), NewProp_HmdDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrow = { "PinchArrow", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrow), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrow_MetaData), NewProp_PinchArrow_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, Cursor), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cursor_MetaData), NewProp_Cursor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowStrengthCurve = { "PinchArrowStrengthCurve", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrowStrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrowStrengthCurve_MetaData), NewProp_PinchArrowStrengthCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMaterialInstance = { "CursorMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorMaterialInstance_MetaData), NewProp_CursorMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMaterialInstance = { "PinchArrowMaterialInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrowMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrowMaterialInstance_MetaData), NewProp_PinchArrowMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMaterial = { "PinchArrowMaterial", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrowMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrowMaterial_MetaData), NewProp_PinchArrowMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMaterial = { "CursorMaterial", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorMaterial_MetaData), NewProp_CursorMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMesh = { "PinchArrowMesh", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrowMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrowMesh_MetaData), NewProp_PinchArrowMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMesh = { "CursorMesh", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorMesh_MetaData), NewProp_CursorMesh_MetaData) };
void Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowArrow_SetBit(void* Obj)
{
	((UIsdkRayVisualComponent*)Obj)->ShowArrow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowArrow = { "ShowArrow", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRayVisualComponent), &Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowArrow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowArrow_MetaData), NewProp_ShowArrow_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_MorphTargetNames_Inner = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_MorphTargetNames = { "MorphTargetNames", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, MorphTargetNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetNames_MetaData), NewProp_MorphTargetNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowColor = { "PinchArrowColor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, PinchArrowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchArrowColor_MetaData), NewProp_PinchArrowColor_MetaData) };
void Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowCursor_SetBit(void* Obj)
{
	((UIsdkRayVisualComponent*)Obj)->ShowCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowCursor = { "ShowCursor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRayVisualComponent), &Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowCursor_MetaData), NewProp_ShowCursor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ReferenceDistance = { "ReferenceDistance", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, ReferenceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceDistance_MetaData), NewProp_ReferenceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorSizeMinMax = { "CursorSizeMinMax", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorSizeMinMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorSizeMinMax_MetaData), NewProp_CursorSizeMinMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorAccentColor = { "CursorAccentColor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorAccentColor_MetaData), NewProp_CursorAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorColor = { "CursorColor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorColor_MetaData), NewProp_CursorColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorShadowColor = { "CursorShadowColor", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, CursorShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorShadowColor_MetaData), NewProp_CursorShadowColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_TranslucentSortPriority = { "TranslucentSortPriority", nullptr, (EPropertyFlags)0x0040000000000805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayVisualComponent, TranslucentSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSortPriority_MetaData), NewProp_TranslucentSortPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRayVisualComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_bAutoBindInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_HmdDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_Cursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowStrengthCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowArrow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_MorphTargetNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_MorphTargetNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_PinchArrowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ShowCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_ReferenceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorSizeMinMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_CursorShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayVisualComponent_Statics::NewProp_TranslucentSortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRayVisualComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayVisualComponent_Statics::ClassParams = {
	&UIsdkRayVisualComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRayVisualComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayVisualComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRayVisualComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkRayVisualComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayVisualComponent.OuterSingleton, Z_Construct_UClass_UIsdkRayVisualComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayVisualComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRayVisualComponent);
UIsdkRayVisualComponent::~UIsdkRayVisualComponent() {}
// ********** End Class UIsdkRayVisualComponent ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayVisualComponent, UIsdkRayVisualComponent::StaticClass, TEXT("UIsdkRayVisualComponent"), &Z_Registration_Info_UClass_UIsdkRayVisualComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayVisualComponent), 2734708636U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h__Script_OculusInteractionPrebuilts_3806155323(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
