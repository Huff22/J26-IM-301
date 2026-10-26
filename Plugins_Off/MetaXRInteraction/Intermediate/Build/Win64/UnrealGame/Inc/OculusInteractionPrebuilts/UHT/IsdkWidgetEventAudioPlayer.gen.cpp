// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/IsdkWidgetEventAudioPlayer.h"
#include "Widget/IsdkWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkWidgetEventAudioPlayer() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkWidgetEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function GetSelectedEmptyAudio ***************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventGetSelectedEmptyAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventGetSelectedEmptyAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "GetSelectedEmptyAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetSelectedEmptyAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetSelectedEmptyAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execGetSelectedEmptyAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetSelectedEmptyAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function GetSelectedEmptyAudio *****************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function GetSelectedHoveredAudio *************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventGetSelectedHoveredAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventGetSelectedHoveredAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "GetSelectedHoveredAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetSelectedHoveredAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetSelectedHoveredAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execGetSelectedHoveredAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetSelectedHoveredAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function GetSelectedHoveredAudio ***************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function GetUnselectedEmptyAudio *************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventGetUnselectedEmptyAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventGetUnselectedEmptyAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "GetUnselectedEmptyAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetUnselectedEmptyAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetUnselectedEmptyAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execGetUnselectedEmptyAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetUnselectedEmptyAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function GetUnselectedEmptyAudio ***************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function GetUnselectedHoveredAudio ***********
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventGetUnselectedHoveredAudio_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventGetUnselectedHoveredAudio_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "GetUnselectedHoveredAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetUnselectedHoveredAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventGetUnselectedHoveredAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execGetUnselectedHoveredAudio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetUnselectedHoveredAudio();
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function GetUnselectedHoveredAudio *************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function HandleWidgetStateChanged ************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventHandleWidgetStateChanged_Parms
	{
		FIsdkWidgetEvent WidgetEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::NewProp_WidgetEvent = { "WidgetEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventHandleWidgetStateChanged_Parms, WidgetEvent), Z_Construct_UScriptStruct_FIsdkWidgetEvent, METADATA_PARAMS(0, nullptr) }; // 2690397075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::NewProp_WidgetEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "HandleWidgetStateChanged", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::IsdkWidgetEventAudioPlayer_eventHandleWidgetStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::IsdkWidgetEventAudioPlayer_eventHandleWidgetStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execHandleWidgetStateChanged)
{
	P_GET_STRUCT(FIsdkWidgetEvent,Z_Param_WidgetEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWidgetStateChanged(Z_Param_WidgetEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function HandleWidgetStateChanged **************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function SetSelectedEmptyAudio ***************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventSetSelectedEmptyAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventSetSelectedEmptyAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "SetSelectedEmptyAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetSelectedEmptyAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetSelectedEmptyAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execSetSelectedEmptyAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedEmptyAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function SetSelectedEmptyAudio *****************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function SetSelectedHoveredAudio *************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventSetSelectedHoveredAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventSetSelectedHoveredAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "SetSelectedHoveredAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetSelectedHoveredAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetSelectedHoveredAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execSetSelectedHoveredAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedHoveredAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function SetSelectedHoveredAudio ***************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function SetUnselectedEmptyAudio *************
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventSetUnselectedEmptyAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventSetUnselectedEmptyAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "SetUnselectedEmptyAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetUnselectedEmptyAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetUnselectedEmptyAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execSetUnselectedEmptyAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnselectedEmptyAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function SetUnselectedEmptyAudio ***************

// ********** Begin Class UIsdkWidgetEventAudioPlayer Function SetUnselectedHoveredAudio ***********
struct Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics
{
	struct IsdkWidgetEventAudioPlayer_eventSetUnselectedHoveredAudio_Parms
	{
		UAudioComponent* Audio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Audio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetEventAudioPlayer_eventSetUnselectedHoveredAudio_Parms, Audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Audio_MetaData), NewProp_Audio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::NewProp_Audio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, nullptr, "SetUnselectedHoveredAudio", Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetUnselectedHoveredAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::IsdkWidgetEventAudioPlayer_eventSetUnselectedHoveredAudio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetEventAudioPlayer::execSetUnselectedHoveredAudio)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_Audio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUnselectedHoveredAudio(Z_Param_Audio);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetEventAudioPlayer Function SetUnselectedHoveredAudio *************

// ********** Begin Class UIsdkWidgetEventAudioPlayer **********************************************
void UIsdkWidgetEventAudioPlayer::StaticRegisterNativesUIsdkWidgetEventAudioPlayer()
{
	UClass* Class = UIsdkWidgetEventAudioPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSelectedEmptyAudio", &UIsdkWidgetEventAudioPlayer::execGetSelectedEmptyAudio },
		{ "GetSelectedHoveredAudio", &UIsdkWidgetEventAudioPlayer::execGetSelectedHoveredAudio },
		{ "GetUnselectedEmptyAudio", &UIsdkWidgetEventAudioPlayer::execGetUnselectedEmptyAudio },
		{ "GetUnselectedHoveredAudio", &UIsdkWidgetEventAudioPlayer::execGetUnselectedHoveredAudio },
		{ "HandleWidgetStateChanged", &UIsdkWidgetEventAudioPlayer::execHandleWidgetStateChanged },
		{ "SetSelectedEmptyAudio", &UIsdkWidgetEventAudioPlayer::execSetSelectedEmptyAudio },
		{ "SetSelectedHoveredAudio", &UIsdkWidgetEventAudioPlayer::execSetSelectedHoveredAudio },
		{ "SetUnselectedEmptyAudio", &UIsdkWidgetEventAudioPlayer::execSetUnselectedEmptyAudio },
		{ "SetUnselectedHoveredAudio", &UIsdkWidgetEventAudioPlayer::execSetUnselectedHoveredAudio },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer;
UClass* UIsdkWidgetEventAudioPlayer::GetPrivateStaticClass()
{
	using TClass = UIsdkWidgetEventAudioPlayer;
	if (!Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkWidgetEventAudioPlayer"),
			Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.InnerSingleton,
			StaticRegisterNativesUIsdkWidgetEventAudioPlayer,
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
	return Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister()
{
	return UIsdkWidgetEventAudioPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "IncludePath", "Audio/IsdkWidgetEventAudioPlayer.h" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredAudio_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedHoveredAudio" },
		{ "BlueprintSetter", "SetSelectedHoveredAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedEmptyAudio_MetaData[] = {
		{ "BlueprintGetter", "GetSelectedEmptyAudio" },
		{ "BlueprintSetter", "SetSelectedEmptyAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectedHoveredAudio_MetaData[] = {
		{ "BlueprintGetter", "GetUnselectedHoveredAudio" },
		{ "BlueprintSetter", "SetUnselectedHoveredAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnselectedEmptyAudio_MetaData[] = {
		{ "BlueprintGetter", "GetUnselectedEmptyAudio" },
		{ "BlueprintSetter", "SetUnselectedEmptyAudio" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/IsdkWidgetEventAudioPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedHoveredAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedEmptyAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnselectedHoveredAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnselectedEmptyAudio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedEmptyAudio, "GetSelectedEmptyAudio" }, // 1731595638
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetSelectedHoveredAudio, "GetSelectedHoveredAudio" }, // 2997588017
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedEmptyAudio, "GetUnselectedEmptyAudio" }, // 2404602916
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_GetUnselectedHoveredAudio, "GetUnselectedHoveredAudio" }, // 2376327402
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_HandleWidgetStateChanged, "HandleWidgetStateChanged" }, // 802744458
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedEmptyAudio, "SetSelectedEmptyAudio" }, // 3047958276
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetSelectedHoveredAudio, "SetSelectedHoveredAudio" }, // 4219565560
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedEmptyAudio, "SetUnselectedEmptyAudio" }, // 1887061636
		{ &Z_Construct_UFunction_UIsdkWidgetEventAudioPlayer_SetUnselectedHoveredAudio, "SetUnselectedHoveredAudio" }, // 3163603634
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkWidgetEventAudioPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_SelectedHoveredAudio = { "SelectedHoveredAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWidgetEventAudioPlayer, SelectedHoveredAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedHoveredAudio_MetaData), NewProp_SelectedHoveredAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_SelectedEmptyAudio = { "SelectedEmptyAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWidgetEventAudioPlayer, SelectedEmptyAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedEmptyAudio_MetaData), NewProp_SelectedEmptyAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_UnselectedHoveredAudio = { "UnselectedHoveredAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWidgetEventAudioPlayer, UnselectedHoveredAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectedHoveredAudio_MetaData), NewProp_UnselectedHoveredAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_UnselectedEmptyAudio = { "UnselectedEmptyAudio", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWidgetEventAudioPlayer, UnselectedEmptyAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnselectedEmptyAudio_MetaData), NewProp_UnselectedEmptyAudio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_SelectedHoveredAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_SelectedEmptyAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_UnselectedHoveredAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::NewProp_UnselectedEmptyAudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::ClassParams = {
	&UIsdkWidgetEventAudioPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer()
{
	if (!Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.OuterSingleton, Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkWidgetEventAudioPlayer);
UIsdkWidgetEventAudioPlayer::~UIsdkWidgetEventAudioPlayer() {}
// ********** End Class UIsdkWidgetEventAudioPlayer ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkWidgetEventAudioPlayer, UIsdkWidgetEventAudioPlayer::StaticClass, TEXT("UIsdkWidgetEventAudioPlayer"), &Z_Registration_Info_UClass_UIsdkWidgetEventAudioPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkWidgetEventAudioPlayer), 11095757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h__Script_OculusInteractionPrebuilts_4266134361(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
