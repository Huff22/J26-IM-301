// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableVisuals/IsdkInteractableColorVisual.h"
#include "Interaction/IsdkIInteractableState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractableColorVisual() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableColorVisual();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkColorState();
OCULUSINTERACTIONPREBUILTS_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkColorTransition();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkColorState ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkColorState;
class UScriptStruct* FIsdkColorState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkColorState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkColorState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkColorState, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkColorState"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkColorState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkColorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionCurve_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionDuration_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransitionCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkColorState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkColorState, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_TransitionCurve = { "TransitionCurve", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkColorState, TransitionCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionCurve_MetaData), NewProp_TransitionCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkColorState, TransitionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionDuration_MetaData), NewProp_TransitionDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_TransitionCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewProp_TransitionDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkColorState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkColorState",
	Z_Construct_UScriptStruct_FIsdkColorState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkColorState_Statics::PropPointers),
	sizeof(FIsdkColorState),
	alignof(FIsdkColorState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkColorState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkColorState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkColorState()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkColorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkColorState.InnerSingleton, Z_Construct_UScriptStruct_FIsdkColorState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkColorState.InnerSingleton;
}
// ********** End ScriptStruct FIsdkColorState *****************************************************

// ********** Begin ScriptStruct FIsdkColorTransition **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkColorTransition;
class UScriptStruct* FIsdkColorTransition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkColorTransition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkColorTransition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkColorTransition, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("IsdkColorTransition"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkColorTransition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkColorTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkColorTransition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkColorTransition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	&NewStructOps,
	"IsdkColorTransition",
	nullptr,
	0,
	sizeof(FIsdkColorTransition),
	alignof(FIsdkColorTransition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkColorTransition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkColorTransition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkColorTransition()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkColorTransition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkColorTransition.InnerSingleton, Z_Construct_UScriptStruct_FIsdkColorTransition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkColorTransition.InnerSingleton;
}
// ********** End ScriptStruct FIsdkColorTransition ************************************************

// ********** Begin Class UIsdkInteractableColorVisual Function GetColorState **********************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics
{
	struct IsdkInteractableColorVisual_eventGetColorState_Parms
	{
		EIsdkInteractableState State;
		FIsdkColorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetColorState_Parms, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetColorState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::IsdkInteractableColorVisual_eventGetColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::IsdkInteractableColorVisual_eventGetColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetColorState)
{
	P_GET_ENUM(EIsdkInteractableState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkColorState*)Z_Param__Result=P_THIS->GetColorState(EIsdkInteractableState(Z_Param_State));
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetColorState ************************

// ********** Begin Class UIsdkInteractableColorVisual Function GetDisabledColorState **************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics
{
	struct IsdkInteractableColorVisual_eventGetDisabledColorState_Parms
	{
		FIsdkColorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetDisabledColorState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetDisabledColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::IsdkInteractableColorVisual_eventGetDisabledColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::IsdkInteractableColorVisual_eventGetDisabledColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetDisabledColorState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkColorState*)Z_Param__Result=P_THIS->GetDisabledColorState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetDisabledColorState ****************

// ********** Begin Class UIsdkInteractableColorVisual Function GetHoverColorState *****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics
{
	struct IsdkInteractableColorVisual_eventGetHoverColorState_Parms
	{
		FIsdkColorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetHoverColorState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetHoverColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::IsdkInteractableColorVisual_eventGetHoverColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::IsdkInteractableColorVisual_eventGetHoverColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetHoverColorState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkColorState*)Z_Param__Result=P_THIS->GetHoverColorState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetHoverColorState *******************

// ********** Begin Class UIsdkInteractableColorVisual Function GetInteractable ********************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics
{
	struct IsdkInteractableColorVisual_eventGetInteractable_Parms
	{
		TScriptInterface<IIsdkIInteractableState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetInteractable_Parms, ReturnValue), Z_Construct_UClass_UIsdkIInteractableState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetInteractable", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::IsdkInteractableColorVisual_eventGetInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::IsdkInteractableColorVisual_eventGetInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIInteractableState>*)Z_Param__Result=P_THIS->GetInteractable();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetInteractable **********************

// ********** Begin Class UIsdkInteractableColorVisual Function GetNormalColorState ****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics
{
	struct IsdkInteractableColorVisual_eventGetNormalColorState_Parms
	{
		FIsdkColorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetNormalColorState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetNormalColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::IsdkInteractableColorVisual_eventGetNormalColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::IsdkInteractableColorVisual_eventGetNormalColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetNormalColorState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkColorState*)Z_Param__Result=P_THIS->GetNormalColorState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetNormalColorState ******************

// ********** Begin Class UIsdkInteractableColorVisual Function GetSelectColorState ****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics
{
	struct IsdkInteractableColorVisual_eventGetSelectColorState_Parms
	{
		FIsdkColorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventGetSelectColorState_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "GetSelectColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::IsdkInteractableColorVisual_eventGetSelectColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::IsdkInteractableColorVisual_eventGetSelectColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execGetSelectColorState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkColorState*)Z_Param__Result=P_THIS->GetSelectColorState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function GetSelectColorState ******************

// ********** Begin Class UIsdkInteractableColorVisual Function HandleStateChange ******************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics
{
	struct IsdkInteractableColorVisual_eventHandleStateChange_Parms
	{
		FIsdkInteractableStateEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventHandleStateChange_Parms, Event), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 138227056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "HandleStateChange", Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::IsdkInteractableColorVisual_eventHandleStateChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::IsdkInteractableColorVisual_eventHandleStateChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execHandleStateChange)
{
	P_GET_STRUCT_REF(FIsdkInteractableStateEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStateChange(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function HandleStateChange ********************

// ********** Begin Class UIsdkInteractableColorVisual Function SetColorState **********************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics
{
	struct IsdkInteractableColorVisual_eventSetColorState_Parms
	{
		EIsdkInteractableState State;
		FIsdkColorState ColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorState_Parms, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_ColorState = { "ColorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorState_Parms, ColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::NewProp_ColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::IsdkInteractableColorVisual_eventSetColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::IsdkInteractableColorVisual_eventSetColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetColorState)
{
	P_GET_ENUM(EIsdkInteractableState,Z_Param_State);
	P_GET_STRUCT(FIsdkColorState,Z_Param_ColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorState(EIsdkInteractableState(Z_Param_State),Z_Param_ColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetColorState ************************

// ********** Begin Class UIsdkInteractableColorVisual Function SetColorStates *********************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics
{
	struct IsdkInteractableColorVisual_eventSetColorStates_Parms
	{
		FIsdkColorState InNormalColorState;
		FIsdkColorState InHoverColorState;
		FIsdkColorState InSelectColorState;
		FIsdkColorState InDisabledColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InNormalColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InHoverColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSelectColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InDisabledColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InNormalColorState = { "InNormalColorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorStates_Parms, InNormalColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InHoverColorState = { "InHoverColorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorStates_Parms, InHoverColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InSelectColorState = { "InSelectColorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorStates_Parms, InSelectColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InDisabledColorState = { "InDisabledColorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetColorStates_Parms, InDisabledColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(0, nullptr) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InNormalColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InHoverColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InSelectColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::NewProp_InDisabledColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetColorStates", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::IsdkInteractableColorVisual_eventSetColorStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::IsdkInteractableColorVisual_eventSetColorStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetColorStates)
{
	P_GET_STRUCT(FIsdkColorState,Z_Param_InNormalColorState);
	P_GET_STRUCT(FIsdkColorState,Z_Param_InHoverColorState);
	P_GET_STRUCT(FIsdkColorState,Z_Param_InSelectColorState);
	P_GET_STRUCT(FIsdkColorState,Z_Param_InDisabledColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorStates(Z_Param_InNormalColorState,Z_Param_InHoverColorState,Z_Param_InSelectColorState,Z_Param_InDisabledColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetColorStates ***********************

// ********** Begin Class UIsdkInteractableColorVisual Function SetDisabledColorState **************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics
{
	struct IsdkInteractableColorVisual_eventSetDisabledColorState_Parms
	{
		FIsdkColorState ColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::NewProp_ColorState = { "ColorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetDisabledColorState_Parms, ColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorState_MetaData), NewProp_ColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::NewProp_ColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetDisabledColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::IsdkInteractableColorVisual_eventSetDisabledColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::IsdkInteractableColorVisual_eventSetDisabledColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetDisabledColorState)
{
	P_GET_STRUCT_REF(FIsdkColorState,Z_Param_Out_ColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisabledColorState(Z_Param_Out_ColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetDisabledColorState ****************

// ********** Begin Class UIsdkInteractableColorVisual Function SetHoverColorState *****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics
{
	struct IsdkInteractableColorVisual_eventSetHoverColorState_Parms
	{
		FIsdkColorState ColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::NewProp_ColorState = { "ColorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetHoverColorState_Parms, ColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorState_MetaData), NewProp_ColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::NewProp_ColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetHoverColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::IsdkInteractableColorVisual_eventSetHoverColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::IsdkInteractableColorVisual_eventSetHoverColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetHoverColorState)
{
	P_GET_STRUCT_REF(FIsdkColorState,Z_Param_Out_ColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoverColorState(Z_Param_Out_ColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetHoverColorState *******************

// ********** Begin Class UIsdkInteractableColorVisual Function SetImmediateTransitionToState ******
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics
{
	struct IsdkInteractableColorVisual_eventSetImmediateTransitionToState_Parms
	{
		EIsdkInteractableState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetImmediateTransitionToState_Parms, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetImmediateTransitionToState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::IsdkInteractableColorVisual_eventSetImmediateTransitionToState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::IsdkInteractableColorVisual_eventSetImmediateTransitionToState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetImmediateTransitionToState)
{
	P_GET_ENUM(EIsdkInteractableState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImmediateTransitionToState(EIsdkInteractableState(Z_Param_State));
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetImmediateTransitionToState ********

// ********** Begin Class UIsdkInteractableColorVisual Function SetInteractable ********************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics
{
	struct IsdkInteractableColorVisual_eventSetInteractable_Parms
	{
		TScriptInterface<IIsdkIInteractableState> InInteractable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::NewProp_InInteractable = { "InInteractable", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetInteractable_Parms, InInteractable), Z_Construct_UClass_UIsdkIInteractableState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::NewProp_InInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetInteractable", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::IsdkInteractableColorVisual_eventSetInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::IsdkInteractableColorVisual_eventSetInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetInteractable)
{
	P_GET_TINTERFACE(IIsdkIInteractableState,Z_Param_InInteractable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInteractable(Z_Param_InInteractable);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetInteractable **********************

// ********** Begin Class UIsdkInteractableColorVisual Function SetNormalColorState ****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics
{
	struct IsdkInteractableColorVisual_eventSetNormalColorState_Parms
	{
		FIsdkColorState ColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::NewProp_ColorState = { "ColorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetNormalColorState_Parms, ColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorState_MetaData), NewProp_ColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::NewProp_ColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetNormalColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::IsdkInteractableColorVisual_eventSetNormalColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::IsdkInteractableColorVisual_eventSetNormalColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetNormalColorState)
{
	P_GET_STRUCT_REF(FIsdkColorState,Z_Param_Out_ColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNormalColorState(Z_Param_Out_ColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetNormalColorState ******************

// ********** Begin Class UIsdkInteractableColorVisual Function SetSelectColorState ****************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics
{
	struct IsdkInteractableColorVisual_eventSetSelectColorState_Parms
	{
		FIsdkColorState ColorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::NewProp_ColorState = { "ColorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetSelectColorState_Parms, ColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorState_MetaData), NewProp_ColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::NewProp_ColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetSelectColorState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::IsdkInteractableColorVisual_eventSetSelectColorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::IsdkInteractableColorVisual_eventSetSelectColorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetSelectColorState)
{
	P_GET_STRUCT_REF(FIsdkColorState,Z_Param_Out_ColorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectColorState(Z_Param_Out_ColorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetSelectColorState ******************

// ********** Begin Class UIsdkInteractableColorVisual Function SetTransitionToState ***************
struct Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics
{
	struct IsdkInteractableColorVisual_eventSetTransitionToState_Parms
	{
		EIsdkInteractableState State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableColorVisual_eventSetTransitionToState_Parms, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableColorVisual, nullptr, "SetTransitionToState", Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::IsdkInteractableColorVisual_eventSetTransitionToState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::IsdkInteractableColorVisual_eventSetTransitionToState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableColorVisual::execSetTransitionToState)
{
	P_GET_ENUM(EIsdkInteractableState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransitionToState(EIsdkInteractableState(Z_Param_State));
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableColorVisual Function SetTransitionToState *****************

// ********** Begin Class UIsdkInteractableColorVisual *********************************************
void UIsdkInteractableColorVisual::StaticRegisterNativesUIsdkInteractableColorVisual()
{
	UClass* Class = UIsdkInteractableColorVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetColorState", &UIsdkInteractableColorVisual::execGetColorState },
		{ "GetDisabledColorState", &UIsdkInteractableColorVisual::execGetDisabledColorState },
		{ "GetHoverColorState", &UIsdkInteractableColorVisual::execGetHoverColorState },
		{ "GetInteractable", &UIsdkInteractableColorVisual::execGetInteractable },
		{ "GetNormalColorState", &UIsdkInteractableColorVisual::execGetNormalColorState },
		{ "GetSelectColorState", &UIsdkInteractableColorVisual::execGetSelectColorState },
		{ "HandleStateChange", &UIsdkInteractableColorVisual::execHandleStateChange },
		{ "SetColorState", &UIsdkInteractableColorVisual::execSetColorState },
		{ "SetColorStates", &UIsdkInteractableColorVisual::execSetColorStates },
		{ "SetDisabledColorState", &UIsdkInteractableColorVisual::execSetDisabledColorState },
		{ "SetHoverColorState", &UIsdkInteractableColorVisual::execSetHoverColorState },
		{ "SetImmediateTransitionToState", &UIsdkInteractableColorVisual::execSetImmediateTransitionToState },
		{ "SetInteractable", &UIsdkInteractableColorVisual::execSetInteractable },
		{ "SetNormalColorState", &UIsdkInteractableColorVisual::execSetNormalColorState },
		{ "SetSelectColorState", &UIsdkInteractableColorVisual::execSetSelectColorState },
		{ "SetTransitionToState", &UIsdkInteractableColorVisual::execSetTransitionToState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractableColorVisual;
UClass* UIsdkInteractableColorVisual::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractableColorVisual;
	if (!Z_Registration_Info_UClass_UIsdkInteractableColorVisual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractableColorVisual"),
			Z_Registration_Info_UClass_UIsdkInteractableColorVisual.InnerSingleton,
			StaticRegisterNativesUIsdkInteractableColorVisual,
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
	return Z_Registration_Info_UClass_UIsdkInteractableColorVisual.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractableColorVisual_NoRegister()
{
	return UIsdkInteractableColorVisual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractableColorVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Interactable Color Visual" },
		{ "IncludePath", "InteractableVisuals/IsdkInteractableColorVisual.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "BlueprintGetter", "GetInteractable" },
		{ "BlueprintSetter", "SetInteractable" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalColorState_MetaData[] = {
		{ "BlueprintGetter", "GetNormalColorState" },
		{ "BlueprintSetter", "SetNormalColorState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverColorState_MetaData[] = {
		{ "BlueprintGetter", "GetHoverColorState" },
		{ "BlueprintSetter", "SetHoverColorState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectColorState_MetaData[] = {
		{ "BlueprintGetter", "GetSelectColorState" },
		{ "BlueprintSetter", "SetSelectColorState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledColorState_MetaData[] = {
		{ "BlueprintGetter", "GetDisabledColorState" },
		{ "BlueprintSetter", "SetDisabledColorState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/InteractableVisuals/IsdkInteractableColorVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterial;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectColorState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledColorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetColorState, "GetColorState" }, // 2663734719
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetDisabledColorState, "GetDisabledColorState" }, // 3305101734
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetHoverColorState, "GetHoverColorState" }, // 3238816040
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetInteractable, "GetInteractable" }, // 1204480294
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetNormalColorState, "GetNormalColorState" }, // 3388885953
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_GetSelectColorState, "GetSelectColorState" }, // 2569530262
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_HandleStateChange, "HandleStateChange" }, // 1627773439
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorState, "SetColorState" }, // 3762906355
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetColorStates, "SetColorStates" }, // 1391923232
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetDisabledColorState, "SetDisabledColorState" }, // 1203181656
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetHoverColorState, "SetHoverColorState" }, // 2958393917
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetImmediateTransitionToState, "SetImmediateTransitionToState" }, // 2291029253
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetInteractable, "SetInteractable" }, // 3321254777
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetNormalColorState, "SetNormalColorState" }, // 4178873005
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetSelectColorState, "SetSelectColorState" }, // 1778581434
		{ &Z_Construct_UFunction_UIsdkInteractableColorVisual_SetTransitionToState, "SetTransitionToState" }, // 3303604238
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractableColorVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial_MetaData), NewProp_DynamicMaterial_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, Interactable), Z_Construct_UClass_UIsdkIInteractableState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_NormalColorState = { "NormalColorState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, NormalColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalColorState_MetaData), NewProp_NormalColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_HoverColorState = { "HoverColorState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, HoverColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverColorState_MetaData), NewProp_HoverColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_SelectColorState = { "SelectColorState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, SelectColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectColorState_MetaData), NewProp_SelectColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_DisabledColorState = { "DisabledColorState", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableColorVisual, DisabledColorState), Z_Construct_UScriptStruct_FIsdkColorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledColorState_MetaData), NewProp_DisabledColorState_MetaData) }; // 3958540073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_DynamicMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_NormalColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_HoverColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_SelectColorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::NewProp_DisabledColorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::ClassParams = {
	&UIsdkInteractableColorVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInteractableColorVisual()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractableColorVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractableColorVisual.OuterSingleton, Z_Construct_UClass_UIsdkInteractableColorVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractableColorVisual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInteractableColorVisual);
UIsdkInteractableColorVisual::~UIsdkInteractableColorVisual() {}
// ********** End Class UIsdkInteractableColorVisual ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkColorState::StaticStruct, Z_Construct_UScriptStruct_FIsdkColorState_Statics::NewStructOps, TEXT("IsdkColorState"), &Z_Registration_Info_UScriptStruct_FIsdkColorState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkColorState), 3958540073U) },
		{ FIsdkColorTransition::StaticStruct, Z_Construct_UScriptStruct_FIsdkColorTransition_Statics::NewStructOps, TEXT("IsdkColorTransition"), &Z_Registration_Info_UScriptStruct_FIsdkColorTransition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkColorTransition), 1093089846U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractableColorVisual, UIsdkInteractableColorVisual::StaticClass, TEXT("UIsdkInteractableColorVisual"), &Z_Registration_Info_UClass_UIsdkInteractableColorVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractableColorVisual), 3599710987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_3167565955(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractableVisuals_IsdkInteractableColorVisual_h__Script_OculusInteractionPrebuilts_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
