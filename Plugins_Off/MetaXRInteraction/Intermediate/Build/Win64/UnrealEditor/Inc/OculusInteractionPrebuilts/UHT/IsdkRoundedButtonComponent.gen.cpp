// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkRoundedButtonComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRoundedButtonComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetBackplaneFillColor ***************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics
{
	struct IsdkRoundedButtonComponent_eventGetBackplaneFillColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetBackplaneFillColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetBackplaneFillColor", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::IsdkRoundedButtonComponent_eventGetBackplaneFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::IsdkRoundedButtonComponent_eventGetBackplaneFillColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetBackplaneFillColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetBackplaneFillColor();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetBackplaneFillColor *****************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetButtonMesh ***********************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics
{
	struct IsdkRoundedButtonComponent_eventGetButtonMesh_Parms
	{
		UStaticMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetButtonMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetButtonMesh", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::IsdkRoundedButtonComponent_eventGetButtonMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::IsdkRoundedButtonComponent_eventGetButtonMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetButtonMesh)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetButtonMesh();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetButtonMesh *************************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetCornerRadius *********************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics
{
	struct IsdkRoundedButtonComponent_eventGetCornerRadius_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetCornerRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetCornerRadius", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::IsdkRoundedButtonComponent_eventGetCornerRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::IsdkRoundedButtonComponent_eventGetCornerRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetCornerRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCornerRadius();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetCornerRadius ***********************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetCreateBackplane ******************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics
{
	struct IsdkRoundedButtonComponent_eventGetCreateBackplane_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkRoundedButtonComponent_eventGetCreateBackplane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRoundedButtonComponent_eventGetCreateBackplane_Parms), &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetCreateBackplane", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::IsdkRoundedButtonComponent_eventGetCreateBackplane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::IsdkRoundedButtonComponent_eventGetCreateBackplane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetCreateBackplane)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCreateBackplane();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetCreateBackplane ********************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetInteractableColorVisual **********
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics
{
	struct IsdkRoundedButtonComponent_eventGetInteractableColorVisual_Parms
	{
		UIsdkInteractableColorVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetInteractableColorVisual_Parms, ReturnValue), Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetInteractableColorVisual", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::IsdkRoundedButtonComponent_eventGetInteractableColorVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::IsdkRoundedButtonComponent_eventGetInteractableColorVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetInteractableColorVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkInteractableColorVisual**)Z_Param__Result=P_THIS->GetInteractableColorVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetInteractableColorVisual ************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetInteractionButtonPress ***********
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics
{
	struct IsdkRoundedButtonComponent_eventGetInteractionButtonPress_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetInteractionButtonPress_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetInteractionButtonPress", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::IsdkRoundedButtonComponent_eventGetInteractionButtonPress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::IsdkRoundedButtonComponent_eventGetInteractionButtonPress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetInteractionButtonPress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetInteractionButtonPress();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetInteractionButtonPress *************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetInteractionButtonRelease *********
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics
{
	struct IsdkRoundedButtonComponent_eventGetInteractionButtonRelease_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetInteractionButtonRelease_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetInteractionButtonRelease", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::IsdkRoundedButtonComponent_eventGetInteractionButtonRelease_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::IsdkRoundedButtonComponent_eventGetInteractionButtonRelease_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetInteractionButtonRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetInteractionButtonRelease();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetInteractionButtonRelease ***********

// ********** Begin Class UIsdkRoundedButtonComponent Function GetLabelColor ***********************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics
{
	struct IsdkRoundedButtonComponent_eventGetLabelColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetLabelColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetLabelColor", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::IsdkRoundedButtonComponent_eventGetLabelColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::IsdkRoundedButtonComponent_eventGetLabelColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetLabelColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLabelColor();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetLabelColor *************************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetLabelSize ************************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics
{
	struct IsdkRoundedButtonComponent_eventGetLabelSize_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetLabelSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetLabelSize", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::IsdkRoundedButtonComponent_eventGetLabelSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::IsdkRoundedButtonComponent_eventGetLabelSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetLabelSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLabelSize();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetLabelSize **************************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetLabelText ************************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics
{
	struct IsdkRoundedButtonComponent_eventGetLabelText_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetLabelText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetLabelText", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::IsdkRoundedButtonComponent_eventGetLabelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::IsdkRoundedButtonComponent_eventGetLabelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetLabelText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLabelText();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetLabelText **************************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetPokeButtonVisual *****************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics
{
	struct IsdkRoundedButtonComponent_eventGetPokeButtonVisual_Parms
	{
		UIsdkPokeButtonVisual* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetPokeButtonVisual_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetPokeButtonVisual", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::IsdkRoundedButtonComponent_eventGetPokeButtonVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::IsdkRoundedButtonComponent_eventGetPokeButtonVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetPokeButtonVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeButtonVisual**)Z_Param__Result=P_THIS->GetPokeButtonVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetPokeButtonVisual *******************

// ********** Begin Class UIsdkRoundedButtonComponent Function GetPokeInteractable *****************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics
{
	struct IsdkRoundedButtonComponent_eventGetPokeInteractable_Parms
	{
		UIsdkPokeInteractable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventGetPokeInteractable_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "GetPokeInteractable", Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::IsdkRoundedButtonComponent_eventGetPokeInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::IsdkRoundedButtonComponent_eventGetPokeInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execGetPokeInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractable**)Z_Param__Result=P_THIS->GetPokeInteractable();
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function GetPokeInteractable *******************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetBackplaneFillColor ***************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics
{
	struct IsdkRoundedButtonComponent_eventSetBackplaneFillColor_Parms
	{
		FLinearColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventSetBackplaneFillColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetBackplaneFillColor", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::IsdkRoundedButtonComponent_eventSetBackplaneFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::IsdkRoundedButtonComponent_eventSetBackplaneFillColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetBackplaneFillColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackplaneFillColor(Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetBackplaneFillColor *****************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetCornerRadius *********************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics
{
	struct IsdkRoundedButtonComponent_eventSetCornerRadius_Parms
	{
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventSetCornerRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetCornerRadius", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::IsdkRoundedButtonComponent_eventSetCornerRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::IsdkRoundedButtonComponent_eventSetCornerRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetCornerRadius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCornerRadius(Z_Param_Radius);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetCornerRadius ***********************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetCreateBackplane ******************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics
{
	struct IsdkRoundedButtonComponent_eventSetCreateBackplane_Parms
	{
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::NewProp_Value_SetBit(void* Obj)
{
	((IsdkRoundedButtonComponent_eventSetCreateBackplane_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkRoundedButtonComponent_eventSetCreateBackplane_Parms), &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetCreateBackplane", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::IsdkRoundedButtonComponent_eventSetCreateBackplane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::IsdkRoundedButtonComponent_eventSetCreateBackplane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetCreateBackplane)
{
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCreateBackplane(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetCreateBackplane ********************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetLabelColor ***********************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics
{
	struct IsdkRoundedButtonComponent_eventSetLabelColor_Parms
	{
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventSetLabelColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetLabelColor", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::IsdkRoundedButtonComponent_eventSetLabelColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::IsdkRoundedButtonComponent_eventSetLabelColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetLabelColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLabelColor(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetLabelColor *************************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetLabelSize ************************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics
{
	struct IsdkRoundedButtonComponent_eventSetLabelSize_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventSetLabelSize_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetLabelSize", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::IsdkRoundedButtonComponent_eventSetLabelSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::IsdkRoundedButtonComponent_eventSetLabelSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetLabelSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLabelSize(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetLabelSize **************************

// ********** Begin Class UIsdkRoundedButtonComponent Function SetLabelText ************************
struct Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics
{
	struct IsdkRoundedButtonComponent_eventSetLabelText_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRoundedButtonComponent_eventSetLabelText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRoundedButtonComponent, nullptr, "SetLabelText", Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::IsdkRoundedButtonComponent_eventSetLabelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::IsdkRoundedButtonComponent_eventSetLabelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRoundedButtonComponent::execSetLabelText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLabelText(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UIsdkRoundedButtonComponent Function SetLabelText **************************

// ********** Begin Class UIsdkRoundedButtonComponent **********************************************
void UIsdkRoundedButtonComponent::StaticRegisterNativesUIsdkRoundedButtonComponent()
{
	UClass* Class = UIsdkRoundedButtonComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBackplaneFillColor", &UIsdkRoundedButtonComponent::execGetBackplaneFillColor },
		{ "GetButtonMesh", &UIsdkRoundedButtonComponent::execGetButtonMesh },
		{ "GetCornerRadius", &UIsdkRoundedButtonComponent::execGetCornerRadius },
		{ "GetCreateBackplane", &UIsdkRoundedButtonComponent::execGetCreateBackplane },
		{ "GetInteractableColorVisual", &UIsdkRoundedButtonComponent::execGetInteractableColorVisual },
		{ "GetInteractionButtonPress", &UIsdkRoundedButtonComponent::execGetInteractionButtonPress },
		{ "GetInteractionButtonRelease", &UIsdkRoundedButtonComponent::execGetInteractionButtonRelease },
		{ "GetLabelColor", &UIsdkRoundedButtonComponent::execGetLabelColor },
		{ "GetLabelSize", &UIsdkRoundedButtonComponent::execGetLabelSize },
		{ "GetLabelText", &UIsdkRoundedButtonComponent::execGetLabelText },
		{ "GetPokeButtonVisual", &UIsdkRoundedButtonComponent::execGetPokeButtonVisual },
		{ "GetPokeInteractable", &UIsdkRoundedButtonComponent::execGetPokeInteractable },
		{ "SetBackplaneFillColor", &UIsdkRoundedButtonComponent::execSetBackplaneFillColor },
		{ "SetCornerRadius", &UIsdkRoundedButtonComponent::execSetCornerRadius },
		{ "SetCreateBackplane", &UIsdkRoundedButtonComponent::execSetCreateBackplane },
		{ "SetLabelColor", &UIsdkRoundedButtonComponent::execSetLabelColor },
		{ "SetLabelSize", &UIsdkRoundedButtonComponent::execSetLabelSize },
		{ "SetLabelText", &UIsdkRoundedButtonComponent::execSetLabelText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRoundedButtonComponent;
UClass* UIsdkRoundedButtonComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkRoundedButtonComponent;
	if (!Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRoundedButtonComponent"),
			Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.InnerSingleton,
			StaticRegisterNativesUIsdkRoundedButtonComponent,
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
	return Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent_NoRegister()
{
	return UIsdkRoundedButtonComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Rounded Button" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "IsdkRoundedButtonComponent.h" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PressColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledColor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionButtonPress_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionButtonPress" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionButtonRelease_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionButtonRelease" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableColorVisual_MetaData[] = {
		{ "BlueprintGetter", "GetInteractableColorVisual" },
		{ "Category", "InteractionSDK|Material Props" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventAudioPlayer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonLabel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonMesh_MetaData[] = {
		{ "BlueprintGetter", "GetButtonMesh" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackplaneMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonSize_MetaData[] = {
		{ "Category", "InteractionSDK|Poke Visual" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
		{ "ToolTip", "Does nothing when changed after begin play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualOffset_MetaData[] = {
		{ "Category", "InteractionSDK|Poke Visual" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
		{ "ToolTip", "Does nothing when changed after begin play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwoSidedMaterial_MetaData[] = {
		{ "Category", "InteractionSDK|Poke Visual" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelSize_MetaData[] = {
		{ "BlueprintGetter", "GetLabelSize" },
		{ "BlueprintSetter", "SetLabelSize" },
		{ "Category", "InteractionSDK|Poke Visual|Label" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelText_MetaData[] = {
		{ "BlueprintGetter", "GetLabelText" },
		{ "BlueprintSetter", "SetLabelText" },
		{ "Category", "InteractionSDK|Poke Visual|Label" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LabelColor_MetaData[] = {
		{ "BlueprintGetter", "GetLabelColor" },
		{ "BlueprintSetter", "SetLabelColor" },
		{ "Category", "InteractionSDK|Poke Visual|Label" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateBackplane_MetaData[] = {
		{ "BlueprintGetter", "GetCreateBackplane" },
		{ "BlueprintSetter", "SetCreateBackplane" },
		{ "Category", "InteractionSDK" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackplaneFillColor_MetaData[] = {
		{ "BlueprintGetter", "GetBackplaneFillColor" },
		{ "BlueprintSetter", "SetBackplaneFillColor" },
		{ "Category", "InteractionSDK|Material Props" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "BlueprintGetter", "GetCornerRadius" },
		{ "BlueprintSetter", "SetCornerRadius" },
		{ "Category", "InteractionSDK|Material Props" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractable_MetaData[] = {
		{ "BlueprintGetter", "GetPokeInteractable" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeButtonVisual_MetaData[] = {
		{ "BlueprintGetter", "GetPokeButtonVisual" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointablePlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClippedPlaneSurface_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkRoundedButtonComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionButtonPress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionButtonRelease;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableColorVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointerEventAudioPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonLabel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackplaneMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualOffset;
	static void NewProp_bTwoSidedMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoSidedMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LabelText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColor;
	static void NewProp_CreateBackplane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateBackplane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackplaneFillColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeButtonVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointablePlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClippedPlaneSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetBackplaneFillColor, "GetBackplaneFillColor" }, // 3446487548
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetButtonMesh, "GetButtonMesh" }, // 1346144553
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCornerRadius, "GetCornerRadius" }, // 1467447309
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetCreateBackplane, "GetCreateBackplane" }, // 2991160428
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractableColorVisual, "GetInteractableColorVisual" }, // 1484006110
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonPress, "GetInteractionButtonPress" }, // 3780631553
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetInteractionButtonRelease, "GetInteractionButtonRelease" }, // 900940033
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelColor, "GetLabelColor" }, // 3206484719
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelSize, "GetLabelSize" }, // 3967737518
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetLabelText, "GetLabelText" }, // 2597883249
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeButtonVisual, "GetPokeButtonVisual" }, // 2272427370
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_GetPokeInteractable, "GetPokeInteractable" }, // 1006091592
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetBackplaneFillColor, "SetBackplaneFillColor" }, // 351988331
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCornerRadius, "SetCornerRadius" }, // 1441537108
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetCreateBackplane, "SetCreateBackplane" }, // 4047803691
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelColor, "SetLabelColor" }, // 261763000
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelSize, "SetLabelSize" }, // 3348734747
		{ &Z_Construct_UFunction_UIsdkRoundedButtonComponent_SetLabelText, "SetLabelText" }, // 304260556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRoundedButtonComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_NormalColor = { "NormalColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, NormalColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalColor_MetaData), NewProp_NormalColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_HoverColor = { "HoverColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, HoverColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverColor_MetaData), NewProp_HoverColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PressColor = { "PressColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, PressColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PressColor_MetaData), NewProp_PressColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_DisabledColor = { "DisabledColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, DisabledColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledColor_MetaData), NewProp_DisabledColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractionButtonPress = { "InteractionButtonPress", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, InteractionButtonPress), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionButtonPress_MetaData), NewProp_InteractionButtonPress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractionButtonRelease = { "InteractionButtonRelease", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, InteractionButtonRelease), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionButtonRelease_MetaData), NewProp_InteractionButtonRelease_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractableColorVisual = { "InteractableColorVisual", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, InteractableColorVisual), Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableColorVisual_MetaData), NewProp_InteractableColorVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PointerEventAudioPlayer = { "PointerEventAudioPlayer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, PointerEventAudioPlayer), Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventAudioPlayer_MetaData), NewProp_PointerEventAudioPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonLabel = { "ButtonLabel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, ButtonLabel), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonLabel_MetaData), NewProp_ButtonLabel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonMesh = { "ButtonMesh", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, ButtonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonMesh_MetaData), NewProp_ButtonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_BackplaneMesh = { "BackplaneMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, BackplaneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackplaneMesh_MetaData), NewProp_BackplaneMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonSize = { "ButtonSize", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, ButtonSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonSize_MetaData), NewProp_ButtonSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_VisualOffset = { "VisualOffset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, VisualOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualOffset_MetaData), NewProp_VisualOffset_MetaData) };
void Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_bTwoSidedMaterial_SetBit(void* Obj)
{
	((UIsdkRoundedButtonComponent*)Obj)->bTwoSidedMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_bTwoSidedMaterial = { "bTwoSidedMaterial", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRoundedButtonComponent), &Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_bTwoSidedMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwoSidedMaterial_MetaData), NewProp_bTwoSidedMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelSize = { "LabelSize", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, LabelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelSize_MetaData), NewProp_LabelSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelText = { "LabelText", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, LabelText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelText_MetaData), NewProp_LabelText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelColor = { "LabelColor", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, LabelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LabelColor_MetaData), NewProp_LabelColor_MetaData) };
void Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CreateBackplane_SetBit(void* Obj)
{
	((UIsdkRoundedButtonComponent*)Obj)->CreateBackplane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CreateBackplane = { "CreateBackplane", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRoundedButtonComponent), &Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CreateBackplane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateBackplane_MetaData), NewProp_CreateBackplane_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_BackplaneFillColor = { "BackplaneFillColor", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, BackplaneFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackplaneFillColor_MetaData), NewProp_BackplaneFillColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0041000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, CornerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PokeInteractable = { "PokeInteractable", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, PokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractable_MetaData), NewProp_PokeInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PokeButtonVisual = { "PokeButtonVisual", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, PokeButtonVisual), Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeButtonVisual_MetaData), NewProp_PokeButtonVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PointablePlane = { "PointablePlane", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, PointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointablePlane_MetaData), NewProp_PointablePlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ClippedPlaneSurface = { "ClippedPlaneSurface", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, ClippedPlaneSurface), Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClippedPlaneSurface_MetaData), NewProp_ClippedPlaneSurface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_TransitionCurve = { "TransitionCurve", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRoundedButtonComponent, TransitionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionCurve_MetaData), NewProp_TransitionCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_NormalColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_HoverColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PressColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_DisabledColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractionButtonPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractionButtonRelease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_InteractableColorVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PointerEventAudioPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_BackplaneMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ButtonSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_VisualOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_bTwoSidedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_LabelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CreateBackplane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_BackplaneFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PokeInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PokeButtonVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_PointablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_ClippedPlaneSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::NewProp_TransitionCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::ClassParams = {
	&UIsdkRoundedButtonComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRoundedButtonComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.OuterSingleton, Z_Construct_UClass_UIsdkRoundedButtonComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRoundedButtonComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRoundedButtonComponent);
UIsdkRoundedButtonComponent::~UIsdkRoundedButtonComponent() {}
// ********** End Class UIsdkRoundedButtonComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRoundedButtonComponent, UIsdkRoundedButtonComponent::StaticClass, TEXT("UIsdkRoundedButtonComponent"), &Z_Registration_Info_UClass_UIsdkRoundedButtonComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRoundedButtonComponent), 2407661123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h__Script_OculusInteractionPrebuilts_3688104782(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkRoundedButtonComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
