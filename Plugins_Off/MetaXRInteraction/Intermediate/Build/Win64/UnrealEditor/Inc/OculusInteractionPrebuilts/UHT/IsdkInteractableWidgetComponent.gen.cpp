// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkInteractableWidgetComponent.h"
#include "Interaction/IsdkPokeInteractable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractableWidgetComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointablePlane_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableWidget_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UEnum* Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkWidgetBlendMode ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkWidgetBlendMode;
static UEnum* EIsdkWidgetBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("EIsdkWidgetBlendMode"));
	}
	return Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.OuterSingleton;
}
template<> OCULUSINTERACTIONPREBUILTS_API UEnum* StaticEnum<EIsdkWidgetBlendMode>()
{
	return EIsdkWidgetBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Masked.Name", "EIsdkWidgetBlendMode::Masked" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
		{ "Transparent.Name", "EIsdkWidgetBlendMode::Transparent" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkWidgetBlendMode::Masked", (int64)EIsdkWidgetBlendMode::Masked },
		{ "EIsdkWidgetBlendMode::Transparent", (int64)EIsdkWidgetBlendMode::Transparent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	"EIsdkWidgetBlendMode",
	"EIsdkWidgetBlendMode",
	Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode()
{
	if (!Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.InnerSingleton, Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkWidgetBlendMode.InnerSingleton;
}
// ********** End Enum EIsdkWidgetBlendMode ********************************************************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetPointableWidget *************
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetPointableWidget_Parms
	{
		UIsdkPointableWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetPointableWidget_Parms, ReturnValue), Z_Construct_UClass_UIsdkPointableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetPointableWidget", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::IsdkInteractableWidgetComponent_eventGetPointableWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::IsdkInteractableWidgetComponent_eventGetPointableWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetPointableWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPointableWidget**)Z_Param__Result=P_THIS->GetPointableWidget();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetPointableWidget ***************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetPokeInteractable ************
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetPokeInteractable_Parms
	{
		UIsdkPokeInteractable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetPokeInteractable_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetPokeInteractable", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::IsdkInteractableWidgetComponent_eventGetPokeInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::IsdkInteractableWidgetComponent_eventGetPokeInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetPokeInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractable**)Z_Param__Result=P_THIS->GetPokeInteractable();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetPokeInteractable **************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetRayInteractable *************
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetRayInteractable_Parms
	{
		UIsdkRayInteractable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetRayInteractable_Parms, ReturnValue), Z_Construct_UClass_UIsdkRayInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetRayInteractable", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::IsdkInteractableWidgetComponent_eventGetRayInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::IsdkInteractableWidgetComponent_eventGetRayInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetRayInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkRayInteractable**)Z_Param__Result=P_THIS->GetRayInteractable();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetRayInteractable ***************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetSelectedEmptyAudio **********
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetSelectedEmptyAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetSelectedEmptyAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetSelectedEmptyAudio", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::IsdkInteractableWidgetComponent_eventGetSelectedEmptyAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::IsdkInteractableWidgetComponent_eventGetSelectedEmptyAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetSelectedEmptyAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetSelectedEmptyAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetSelectedEmptyAudio ************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetSelectedHoveredAudio ********
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetSelectedHoveredAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetSelectedHoveredAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetSelectedHoveredAudio", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::IsdkInteractableWidgetComponent_eventGetSelectedHoveredAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::IsdkInteractableWidgetComponent_eventGetSelectedHoveredAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetSelectedHoveredAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetSelectedHoveredAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetSelectedHoveredAudio **********

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetWidget **********************
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetWidget_Parms
	{
		UWidgetComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetWidget", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::IsdkInteractableWidgetComponent_eventGetWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::IsdkInteractableWidgetComponent_eventGetWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWidgetComponent**)Z_Param__Result=P_THIS->GetWidget();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetWidget ************************

// ********** Begin Class UIsdkInteractableWidgetComponent Function GetWidgetEventAudioPlayer ******
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics
{
	struct IsdkInteractableWidgetComponent_eventGetWidgetEventAudioPlayer_Parms
	{
		UIsdkWidgetEventAudioPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableWidgetComponent_eventGetWidgetEventAudioPlayer_Parms, ReturnValue), Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "GetWidgetEventAudioPlayer", Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::IsdkInteractableWidgetComponent_eventGetWidgetEventAudioPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::IsdkInteractableWidgetComponent_eventGetWidgetEventAudioPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execGetWidgetEventAudioPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkWidgetEventAudioPlayer**)Z_Param__Result=P_THIS->GetWidgetEventAudioPlayer();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function GetWidgetEventAudioPlayer ********

// ********** Begin Class UIsdkInteractableWidgetComponent Function SetRoundedMaterialProperties ***
struct Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableWidgetComponent, nullptr, "SetRoundedMaterialProperties", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableWidgetComponent::execSetRoundedMaterialProperties)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRoundedMaterialProperties();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableWidgetComponent Function SetRoundedMaterialProperties *****

// ********** Begin Class UIsdkInteractableWidgetComponent *****************************************
void UIsdkInteractableWidgetComponent::StaticRegisterNativesUIsdkInteractableWidgetComponent()
{
	UClass* Class = UIsdkInteractableWidgetComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPointableWidget", &UIsdkInteractableWidgetComponent::execGetPointableWidget },
		{ "GetPokeInteractable", &UIsdkInteractableWidgetComponent::execGetPokeInteractable },
		{ "GetRayInteractable", &UIsdkInteractableWidgetComponent::execGetRayInteractable },
		{ "GetSelectedEmptyAudio", &UIsdkInteractableWidgetComponent::execGetSelectedEmptyAudio },
		{ "GetSelectedHoveredAudio", &UIsdkInteractableWidgetComponent::execGetSelectedHoveredAudio },
		{ "GetWidget", &UIsdkInteractableWidgetComponent::execGetWidget },
		{ "GetWidgetEventAudioPlayer", &UIsdkInteractableWidgetComponent::execGetWidgetEventAudioPlayer },
		{ "SetRoundedMaterialProperties", &UIsdkInteractableWidgetComponent::execSetRoundedMaterialProperties },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent;
UClass* UIsdkInteractableWidgetComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractableWidgetComponent;
	if (!Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractableWidgetComponent"),
			Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInteractableWidgetComponent,
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
	return Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent_NoRegister()
{
	return UIsdkInteractableWidgetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "DisplayName", "ISDK Interactable Widget" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "IsdkInteractableWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "BlueprintGetter", "GetWidget" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Instanced (created in constructor)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
		{ "ToolTip", "Instanced (created in constructor)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInstance_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredAudio_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedHoveredAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEmptyAudio_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedEmptyAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClippedPlaneSurface_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointableWidget_MetaData[] = {
		{ "BlueprintGetter", "GetPointableWidget" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetEventAudioPlayer_MetaData[] = {
		{ "BlueprintGetter", "GetWidgetEventAudioPlayer" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractable_MetaData[] = {
		{ "BlueprintGetter", "GetPokeInteractable" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayInteractable_MetaData[] = {
		{ "BlueprintGetter", "GetRayInteractable" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointablePlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayPointablePlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaySelectPlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterialOneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransparentMaterialOneSided_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRoundedBoxMaterial_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component|Rounded Box Material" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component|Rounded Box Material" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component|Rounded Box Material" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component|Rounded Box Material" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTwoSided_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component|Rounded Box Material" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePokeInteractable_MetaData[] = {
		{ "Category", "InteractionSDK|Interactable|Poke Interactable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPokeInteractableConfigAsset_MetaData[] = {
		{ "Category", "InteractionSDK|Interactable|Poke Interactable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPokeInteractableConfigOffsets_MetaData[] = {
		{ "Category", "InteractionSDK|Interactable|Poke Interactable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateRayInteractable_MetaData[] = {
		{ "Category", "InteractionSDK|Interactable|Ray Interactable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetScale_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[] = {
		{ "Category", "InteractionSDK|Widget Component" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/IsdkInteractableWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedHoveredAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEmptyAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClippedPlaneSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointableWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetEventAudioPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointablePlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayPointablePlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RaySelectPlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterialOneSided;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransparentMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransparentMaterialOneSided;
	static void NewProp_bUseRoundedBoxMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRoundedBoxMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static void NewProp_bTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoSided;
	static void NewProp_bCreatePokeInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePokeInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPokeInteractableConfigAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPokeInteractableConfigOffsets;
	static void NewProp_bCreateRayInteractable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateRayInteractable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WidgetScale;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPointableWidget, "GetPointableWidget" }, // 3348527231
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetPokeInteractable, "GetPokeInteractable" }, // 3642943225
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetRayInteractable, "GetRayInteractable" }, // 310360408
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedEmptyAudio, "GetSelectedEmptyAudio" }, // 3569110738
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetSelectedHoveredAudio, "GetSelectedHoveredAudio" }, // 2319007787
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidget, "GetWidget" }, // 1215336775
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_GetWidgetEventAudioPlayer, "GetWidgetEventAudioPlayer" }, // 4082810168
		{ &Z_Construct_UFunction_UIsdkInteractableWidgetComponent_SetRoundedMaterialProperties, "SetRoundedMaterialProperties" }, // 2011438262
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractableWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetInstance = { "WidgetInstance", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, WidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetInstance_MetaData), NewProp_WidgetInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_SelectedHoveredAudio = { "SelectedHoveredAudio", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, SelectedHoveredAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredAudio_MetaData), NewProp_SelectedHoveredAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_SelectedEmptyAudio = { "SelectedEmptyAudio", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, SelectedEmptyAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEmptyAudio_MetaData), NewProp_SelectedEmptyAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_ClippedPlaneSurface = { "ClippedPlaneSurface", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, ClippedPlaneSurface), Z_Construct_UClass_UIsdkClippedPlaneSurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClippedPlaneSurface_MetaData), NewProp_ClippedPlaneSurface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PointableWidget = { "PointableWidget", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, PointableWidget), Z_Construct_UClass_UIsdkPointableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointableWidget_MetaData), NewProp_PointableWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetEventAudioPlayer = { "WidgetEventAudioPlayer", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, WidgetEventAudioPlayer), Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetEventAudioPlayer_MetaData), NewProp_WidgetEventAudioPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PokeInteractable = { "PokeInteractable", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, PokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractable_MetaData), NewProp_PokeInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RayInteractable = { "RayInteractable", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, RayInteractable), Z_Construct_UClass_UIsdkRayInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayInteractable_MetaData), NewProp_RayInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PointablePlane = { "PointablePlane", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, PointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointablePlane_MetaData), NewProp_PointablePlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RayPointablePlane = { "RayPointablePlane", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, RayPointablePlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayPointablePlane_MetaData), NewProp_RayPointablePlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RaySelectPlane = { "RaySelectPlane", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, RaySelectPlane), Z_Construct_UClass_UIsdkPointablePlane_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaySelectPlane_MetaData), NewProp_RaySelectPlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_MaskedMaterial = { "MaskedMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, MaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskedMaterial_MetaData), NewProp_MaskedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_MaskedMaterialOneSided = { "MaskedMaterialOneSided", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, MaskedMaterialOneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskedMaterialOneSided_MetaData), NewProp_MaskedMaterialOneSided_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_TransparentMaterial = { "TransparentMaterial", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, TransparentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterial_MetaData), NewProp_TransparentMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_TransparentMaterialOneSided = { "TransparentMaterialOneSided", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, TransparentMaterialOneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransparentMaterialOneSided_MetaData), NewProp_TransparentMaterialOneSided_MetaData) };
void Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bUseRoundedBoxMaterial_SetBit(void* Obj)
{
	((UIsdkInteractableWidgetComponent*)Obj)->bUseRoundedBoxMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bUseRoundedBoxMaterial = { "bUseRoundedBoxMaterial", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkInteractableWidgetComponent), &Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bUseRoundedBoxMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRoundedBoxMaterial_MetaData), NewProp_bUseRoundedBoxMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, CornerRadius), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerRadius_MetaData), NewProp_CornerRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, BlendMode), Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkWidgetBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 3944940555
void Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bTwoSided_SetBit(void* Obj)
{
	((UIsdkInteractableWidgetComponent*)Obj)->bTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bTwoSided = { "bTwoSided", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkInteractableWidgetComponent), &Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTwoSided_MetaData), NewProp_bTwoSided_MetaData) };
void Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreatePokeInteractable_SetBit(void* Obj)
{
	((UIsdkInteractableWidgetComponent*)Obj)->bCreatePokeInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreatePokeInteractable = { "bCreatePokeInteractable", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkInteractableWidgetComponent), &Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreatePokeInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreatePokeInteractable_MetaData), NewProp_bCreatePokeInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DefaultPokeInteractableConfigAsset = { "DefaultPokeInteractableConfigAsset", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, DefaultPokeInteractableConfigAsset), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPokeInteractableConfigAsset_MetaData), NewProp_DefaultPokeInteractableConfigAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DefaultPokeInteractableConfigOffsets = { "DefaultPokeInteractableConfigOffsets", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, DefaultPokeInteractableConfigOffsets), Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPokeInteractableConfigOffsets_MetaData), NewProp_DefaultPokeInteractableConfigOffsets_MetaData) }; // 978703178
void Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreateRayInteractable_SetBit(void* Obj)
{
	((UIsdkInteractableWidgetComponent*)Obj)->bCreateRayInteractable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreateRayInteractable = { "bCreateRayInteractable", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkInteractableWidgetComponent), &Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreateRayInteractable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateRayInteractable_MetaData), NewProp_bCreateRayInteractable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DrawSize = { "DrawSize", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, DrawSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawSize_MetaData), NewProp_DrawSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetScale = { "WidgetScale", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, WidgetScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetScale_MetaData), NewProp_WidgetScale_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0015000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableWidgetComponent, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pivot_MetaData), NewProp_Pivot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_SelectedHoveredAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_SelectedEmptyAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_ClippedPlaneSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PointableWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetEventAudioPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PokeInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RayInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_PointablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RayPointablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_RaySelectPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_MaskedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_MaskedMaterialOneSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_TransparentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_TransparentMaterialOneSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bUseRoundedBoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_CornerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreatePokeInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DefaultPokeInteractableConfigAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DefaultPokeInteractableConfigOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_bCreateRayInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_DrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::NewProp_Pivot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::ClassParams = {
	&UIsdkInteractableWidgetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInteractableWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.OuterSingleton, Z_Construct_UClass_UIsdkInteractableWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInteractableWidgetComponent);
UIsdkInteractableWidgetComponent::~UIsdkInteractableWidgetComponent() {}
// ********** End Class UIsdkInteractableWidgetComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkWidgetBlendMode_StaticEnum, TEXT("EIsdkWidgetBlendMode"), &Z_Registration_Info_UEnum_EIsdkWidgetBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3944940555U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractableWidgetComponent, UIsdkInteractableWidgetComponent::StaticClass, TEXT("UIsdkInteractableWidgetComponent"), &Z_Registration_Info_UClass_UIsdkInteractableWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractableWidgetComponent), 4138055391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_1188617518(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_IsdkInteractableWidgetComponent_h__Script_OculusInteractionPrebuilts_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
