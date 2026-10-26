// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/IsdkPointerEventAudioPlayer.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPointerEventAudioPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetCancelAudio *********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetCancelAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetCancelAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetCancelAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::IsdkPointerEventAudioPlayer_eventGetCancelAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::IsdkPointerEventAudioPlayer_eventGetCancelAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetCancelAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetCancelAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetCancelAudio ***********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetHoverAudio **********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetHoverAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetHoverAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetHoverAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::IsdkPointerEventAudioPlayer_eventGetHoverAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::IsdkPointerEventAudioPlayer_eventGetHoverAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetHoverAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetHoverAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetHoverAudio ************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetMoveAudio ***********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetMoveAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetMoveAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetMoveAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::IsdkPointerEventAudioPlayer_eventGetMoveAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::IsdkPointerEventAudioPlayer_eventGetMoveAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetMoveAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetMoveAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetMoveAudio *************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetPointable ***********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetPointable_Parms
	{
		TScriptInterface<IIsdkIPointable> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Getters\n" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
		{ "ToolTip", "Getters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetPointable_Parms, ReturnValue), Z_Construct_UClass_UIsdkIPointable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetPointable", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::IsdkPointerEventAudioPlayer_eventGetPointable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::IsdkPointerEventAudioPlayer_eventGetPointable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetPointable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIPointable>*)Z_Param__Result=P_THIS->GetPointable();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetPointable *************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetSelectAudio *********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetSelectAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetSelectAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetSelectAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::IsdkPointerEventAudioPlayer_eventGetSelectAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::IsdkPointerEventAudioPlayer_eventGetSelectAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetSelectAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetSelectAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetSelectAudio ***********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetUnhoverAudio ********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetUnhoverAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetUnhoverAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetUnhoverAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::IsdkPointerEventAudioPlayer_eventGetUnhoverAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::IsdkPointerEventAudioPlayer_eventGetUnhoverAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetUnhoverAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetUnhoverAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetUnhoverAudio **********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function GetUnselectAudio *******************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventGetUnselectAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventGetUnselectAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "GetUnselectAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::IsdkPointerEventAudioPlayer_eventGetUnselectAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::IsdkPointerEventAudioPlayer_eventGetUnselectAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execGetUnselectAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetUnselectAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function GetUnselectAudio *********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function HandlePointerEvent *****************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics
{
	struct IsdkPointerEventAudioPlayer_eventHandlePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventHandlePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "HandlePointerEvent", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::IsdkPointerEventAudioPlayer_eventHandlePointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::IsdkPointerEventAudioPlayer_eventHandlePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execHandlePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function HandlePointerEvent *******************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetCancelAudio *********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetCancelAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetCancelAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetCancelAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::IsdkPointerEventAudioPlayer_eventSetCancelAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::IsdkPointerEventAudioPlayer_eventSetCancelAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetCancelAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCancelAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetCancelAudio ***********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetHoverAudio **********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetHoverAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetHoverAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetHoverAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::IsdkPointerEventAudioPlayer_eventSetHoverAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::IsdkPointerEventAudioPlayer_eventSetHoverAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetHoverAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoverAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetHoverAudio ************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetMoveAudio ***********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetMoveAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetMoveAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetMoveAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::IsdkPointerEventAudioPlayer_eventSetMoveAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::IsdkPointerEventAudioPlayer_eventSetMoveAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetMoveAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetMoveAudio *************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetPointable ***********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetPointable_Parms
	{
		TScriptInterface<IIsdkIPointable> Pointable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Setters\n" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
		{ "ToolTip", "Setters" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pointable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Pointable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::NewProp_Pointable = { "Pointable", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetPointable_Parms, Pointable), Z_Construct_UClass_UIsdkIPointable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pointable_MetaData), NewProp_Pointable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::NewProp_Pointable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetPointable", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::IsdkPointerEventAudioPlayer_eventSetPointable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::IsdkPointerEventAudioPlayer_eventSetPointable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetPointable)
{
	P_GET_TINTERFACE_REF(IIsdkIPointable,Z_Param_Out_Pointable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPointable(Z_Param_Out_Pointable);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetPointable *************************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetSelectAudio *********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetSelectAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetSelectAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetSelectAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::IsdkPointerEventAudioPlayer_eventSetSelectAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::IsdkPointerEventAudioPlayer_eventSetSelectAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetSelectAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetSelectAudio ***********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetUnhoverAudio ********************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetUnhoverAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetUnhoverAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetUnhoverAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::IsdkPointerEventAudioPlayer_eventSetUnhoverAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::IsdkPointerEventAudioPlayer_eventSetUnhoverAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetUnhoverAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnhoverAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetUnhoverAudio **********************

// ********** Begin Class UIsdkPointerEventAudioPlayer Function SetUnselectAudio *******************
struct Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics
{
	struct IsdkPointerEventAudioPlayer_eventSetUnselectAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointerEventAudioPlayer_eventSetUnselectAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointerEventAudioPlayer, nullptr, "SetUnselectAudio", Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::IsdkPointerEventAudioPlayer_eventSetUnselectAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::IsdkPointerEventAudioPlayer_eventSetUnselectAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointerEventAudioPlayer::execSetUnselectAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnselectAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointerEventAudioPlayer Function SetUnselectAudio *********************

// ********** Begin Class UIsdkPointerEventAudioPlayer *********************************************
void UIsdkPointerEventAudioPlayer::StaticRegisterNativesUIsdkPointerEventAudioPlayer()
{
	UClass* Class = UIsdkPointerEventAudioPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCancelAudio", &UIsdkPointerEventAudioPlayer::execGetCancelAudio },
		{ "GetHoverAudio", &UIsdkPointerEventAudioPlayer::execGetHoverAudio },
		{ "GetMoveAudio", &UIsdkPointerEventAudioPlayer::execGetMoveAudio },
		{ "GetPointable", &UIsdkPointerEventAudioPlayer::execGetPointable },
		{ "GetSelectAudio", &UIsdkPointerEventAudioPlayer::execGetSelectAudio },
		{ "GetUnhoverAudio", &UIsdkPointerEventAudioPlayer::execGetUnhoverAudio },
		{ "GetUnselectAudio", &UIsdkPointerEventAudioPlayer::execGetUnselectAudio },
		{ "HandlePointerEvent", &UIsdkPointerEventAudioPlayer::execHandlePointerEvent },
		{ "SetCancelAudio", &UIsdkPointerEventAudioPlayer::execSetCancelAudio },
		{ "SetHoverAudio", &UIsdkPointerEventAudioPlayer::execSetHoverAudio },
		{ "SetMoveAudio", &UIsdkPointerEventAudioPlayer::execSetMoveAudio },
		{ "SetPointable", &UIsdkPointerEventAudioPlayer::execSetPointable },
		{ "SetSelectAudio", &UIsdkPointerEventAudioPlayer::execSetSelectAudio },
		{ "SetUnhoverAudio", &UIsdkPointerEventAudioPlayer::execSetUnhoverAudio },
		{ "SetUnselectAudio", &UIsdkPointerEventAudioPlayer::execSetUnselectAudio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer;
UClass* UIsdkPointerEventAudioPlayer::GetPrivateStaticClass()
{
	using TClass = UIsdkPointerEventAudioPlayer;
	if (!Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPointerEventAudioPlayer"),
			Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.InnerSingleton,
			StaticRegisterNativesUIsdkPointerEventAudioPlayer,
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
	return Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister()
{
	return UIsdkPointerEventAudioPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "IncludePath", "Audio/IsdkPointerEventAudioPlayer.h" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pointable_MetaData[] = {
		{ "BlueprintGetter", "GetPointable" },
		{ "BlueprintSetter", "SetPointable" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverAudio_MetaData[] = {
		{ "BlueprintGetter", "GetHoverAudio" },
		{ "BlueprintSetter", "SetHoverAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnhoverAudio_MetaData[] = {
		{ "BlueprintGetter", "GetUnhoverAudio" },
		{ "BlueprintSetter", "SetUnhoverAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAudio_MetaData[] = {
		{ "BlueprintGetter", "GetSelectAudio" },
		{ "BlueprintSetter", "SetSelectAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectAudio_MetaData[] = {
		{ "BlueprintGetter", "GetUnselectAudio" },
		{ "BlueprintSetter", "SetUnselectAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAudio_MetaData[] = {
		{ "BlueprintGetter", "GetMoveAudio" },
		{ "BlueprintSetter", "SetMoveAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelAudio_MetaData[] = {
		{ "BlueprintGetter", "GetCancelAudio" },
		{ "BlueprintSetter", "SetCancelAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkPointerEventAudioPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Pointable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnhoverAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnselectAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CancelAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetCancelAudio, "GetCancelAudio" }, // 4035356366
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetHoverAudio, "GetHoverAudio" }, // 835761076
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetMoveAudio, "GetMoveAudio" }, // 462518559
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetPointable, "GetPointable" }, // 4131746768
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetSelectAudio, "GetSelectAudio" }, // 1462886904
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnhoverAudio, "GetUnhoverAudio" }, // 1453149917
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_GetUnselectAudio, "GetUnselectAudio" }, // 2221848869
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_HandlePointerEvent, "HandlePointerEvent" }, // 2068230190
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetCancelAudio, "SetCancelAudio" }, // 174924751
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetHoverAudio, "SetHoverAudio" }, // 2814929829
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetMoveAudio, "SetMoveAudio" }, // 3707836444
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetPointable, "SetPointable" }, // 3971562636
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetSelectAudio, "SetSelectAudio" }, // 2794091713
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnhoverAudio, "SetUnhoverAudio" }, // 627566123
		{ &Z_Construct_UFunction_UIsdkPointerEventAudioPlayer_SetUnselectAudio, "SetUnselectAudio" }, // 2602348765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPointerEventAudioPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_Pointable = { "Pointable", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, Pointable), Z_Construct_UClass_UIsdkIPointable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pointable_MetaData), NewProp_Pointable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_HoverAudio = { "HoverAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, HoverAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverAudio_MetaData), NewProp_HoverAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_UnhoverAudio = { "UnhoverAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, UnhoverAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnhoverAudio_MetaData), NewProp_UnhoverAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_SelectAudio = { "SelectAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, SelectAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAudio_MetaData), NewProp_SelectAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_UnselectAudio = { "UnselectAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, UnselectAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectAudio_MetaData), NewProp_UnselectAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_MoveAudio = { "MoveAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, MoveAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAudio_MetaData), NewProp_MoveAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_CancelAudio = { "CancelAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointerEventAudioPlayer, CancelAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelAudio_MetaData), NewProp_CancelAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_Pointable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_HoverAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_UnhoverAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_SelectAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_UnselectAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_MoveAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::NewProp_CancelAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::ClassParams = {
	&UIsdkPointerEventAudioPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer()
{
	if (!Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.OuterSingleton, Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPointerEventAudioPlayer);
UIsdkPointerEventAudioPlayer::~UIsdkPointerEventAudioPlayer() {}
// ********** End Class UIsdkPointerEventAudioPlayer ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPointerEventAudioPlayer, UIsdkPointerEventAudioPlayer::StaticClass, TEXT("UIsdkPointerEventAudioPlayer"), &Z_Registration_Info_UClass_UIsdkPointerEventAudioPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPointerEventAudioPlayer), 1324732239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h__Script_OculusInteractionPrebuilts_105383526(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
