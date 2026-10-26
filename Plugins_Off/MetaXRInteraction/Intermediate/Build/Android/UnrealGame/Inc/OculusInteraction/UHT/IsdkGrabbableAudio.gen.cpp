// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabbableAudio.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabbableAudio() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableAudio();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableAudio_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_TransformEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabbableAudio Function GetGrabTransformer **************************
struct Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics
{
	struct IsdkGrabbableAudio_eventGetGrabTransformer_Parms
	{
		UIsdkGrabTransformerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Gets the grab transformer this component plays autio for\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ReturnDisplayName", "GrabTransformer" },
		{ "ToolTip", "Gets the grab transformer this component plays autio for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableAudio_eventGetGrabTransformer_Parms, ReturnValue), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableAudio, nullptr, "GetGrabTransformer", Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::IsdkGrabbableAudio_eventGetGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::IsdkGrabbableAudio_eventGetGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableAudio::execGetGrabTransformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkGrabTransformerComponent**)Z_Param__Result=P_THIS->GetGrabTransformer();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableAudio Function GetGrabTransformer ****************************

// ********** Begin Class UIsdkGrabbableAudio Function HandleGrabTransformerEvent ******************
struct Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics
{
	struct IsdkGrabbableAudio_eventHandleGrabTransformerEvent_Parms
	{
		TransformEvent Event;
		const UIsdkGrabTransformerComponent* InGrabTransformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Event;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGrabTransformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableAudio_eventHandleGrabTransformerEvent_Parms, Event), Z_Construct_UEnum_OculusInteraction_TransformEvent, METADATA_PARAMS(0, nullptr) }; // 628992050
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_InGrabTransformer = { "InGrabTransformer", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableAudio_eventHandleGrabTransformerEvent_Parms, InGrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrabTransformer_MetaData), NewProp_InGrabTransformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_Event_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::NewProp_InGrabTransformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableAudio, nullptr, "HandleGrabTransformerEvent", Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::IsdkGrabbableAudio_eventHandleGrabTransformerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::IsdkGrabbableAudio_eventHandleGrabTransformerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableAudio::execHandleGrabTransformerEvent)
{
	P_GET_ENUM(TransformEvent,Z_Param_Event);
	P_GET_OBJECT(UIsdkGrabTransformerComponent,Z_Param_InGrabTransformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGrabTransformerEvent(TransformEvent(Z_Param_Event),Z_Param_InGrabTransformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableAudio Function HandleGrabTransformerEvent ********************

// ********** Begin Class UIsdkGrabbableAudio Function SetGrabTransformer **************************
struct Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics
{
	struct IsdkGrabbableAudio_eventSetGrabTransformer_Parms
	{
		UIsdkGrabTransformerComponent* InGrabTransformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sets the grab transformer this component plays audio for\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Sets the grab transformer this component plays audio for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGrabTransformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::NewProp_InGrabTransformer = { "InGrabTransformer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabbableAudio_eventSetGrabTransformer_Parms, InGrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGrabTransformer_MetaData), NewProp_InGrabTransformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::NewProp_InGrabTransformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabbableAudio, nullptr, "SetGrabTransformer", Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::IsdkGrabbableAudio_eventSetGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::IsdkGrabbableAudio_eventSetGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabbableAudio::execSetGrabTransformer)
{
	P_GET_OBJECT(UIsdkGrabTransformerComponent,Z_Param_InGrabTransformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGrabTransformer(Z_Param_InGrabTransformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabbableAudio Function SetGrabTransformer ****************************

// ********** Begin Class UIsdkGrabbableAudio ******************************************************
void UIsdkGrabbableAudio::StaticRegisterNativesUIsdkGrabbableAudio()
{
	UClass* Class = UIsdkGrabbableAudio::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGrabTransformer", &UIsdkGrabbableAudio::execGetGrabTransformer },
		{ "HandleGrabTransformerEvent", &UIsdkGrabbableAudio::execHandleGrabTransformerEvent },
		{ "SetGrabTransformer", &UIsdkGrabbableAudio::execSetGrabTransformer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabbableAudio;
UClass* UIsdkGrabbableAudio::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabbableAudio;
	if (!Z_Registration_Info_UClass_UIsdkGrabbableAudio.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabbableAudio"),
			Z_Registration_Info_UClass_UIsdkGrabbableAudio.InnerSingleton,
			StaticRegisterNativesUIsdkGrabbableAudio,
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
	return Z_Registration_Info_UClass_UIsdkGrabbableAudio.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabbableAudio_NoRegister()
{
	return UIsdkGrabbableAudio::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabbableAudio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/// Raises events when an object is scaled up or down. Events are raised in steps,\n/// meaning scale changes are only responded to when the scale magnitude delta since\n/// last step exceeds a provided amount.\n" },
		{ "DisplayName", "ISDK Grabbable Audio" },
		{ "IncludePath", "Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Raises events when an object is scaled up or down. Events are raised in steps,\nmeaning scale changes are only responded to when the scale magnitude delta since\nlast step exceeds a provided amount." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformerName_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The grab transformer this component plays audio for\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "The grab transformer this component plays audio for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[] = {
		{ "Category", "InteractionSDK|Scaling" },
		{ "Comment", "/**\n   * The increase in scale magnitude that will fire the step event\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "The increase in scale magnitude that will fire the step event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEventFreq_MetaData[] = {
		{ "Category", "InteractionSDK|Scaling" },
		{ "Comment", "/**\n   * Events will not be fired more frequently than this many times per second\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Events will not be fired more frequently than this many times per second" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingSounds_MetaData[] = {
		{ "Category", "InteractionSDK|Scaling" },
		{ "Comment", "/**\n   * A collection of sounds to be played at random when scaling the grab transformer\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "A collection of sounds to be played at random when scaling the grab transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingSounds_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "Comment", "/**\n   * A collection of sounds to be played at random when grabbing the grab transformer\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "A collection of sounds to be played at random when grabbing the grab transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReleasingSounds_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "Comment", "/**\n   * A collection of sounds to be played at random when releasing the grab transformer\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "A collection of sounds to be played at random when releasing the grab transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingBasePitch_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", ".1" },
		{ "Comment", "/**\n   * Sets the default pitch for the grabbing sound (1 is normal pitch)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Sets the default pitch for the grabbing sound (1 is normal pitch)" },
		{ "UIMax", "3.0" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingPitchRange_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "ClampMax", "3" },
		{ "ClampMin", "-3" },
		{ "Comment", "/**\n   * Adjust the slider value for randomized pitch of the grabbing sound (0 is no randomization)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Adjust the slider value for randomized pitch of the grabbing sound (0 is no randomization)" },
		{ "UIMax", "3" },
		{ "UIMin", "-3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingBaseVolume_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "Comment", "/**\n   * Sets the default volume for the grabbing sound (0 = silent, 1 = full volume)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Sets the default volume for the grabbing sound (0 = silent, 1 = full volume)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbingVolumeRange_MetaData[] = {
		{ "Category", "InteractionSDK|Grabbing" },
		{ "Comment", "/**\n   * Adjust the slider value for randomized volume level playback if the grabbing sound (0 is no\n   * randomization)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Adjust the slider value for randomized volume level playback if the grabbing sound (0 is no\nrandomization)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingBasePitch_MetaData[] = {
		{ "Category", "InteractionSDK|Scaling" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", ".1" },
		{ "Comment", "/**\n   * Sets the default pitch for the scaling sound (1 is normal pitch)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Sets the default pitch for the scaling sound (1 is normal pitch)" },
		{ "UIMax", "3.0" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingPitchRange_MetaData[] = {
		{ "Category", "InteractionSDK|Scaling" },
		{ "ClampMax", "3" },
		{ "ClampMin", "-3" },
		{ "Comment", "/**\n   * Sets the pitch range for the scaling sound\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "Sets the pitch range for the scaling sound" },
		{ "UIMax", "3" },
		{ "UIMin", "-3" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformer_MetaData[] = {
		{ "BlueprintGetter", "GetGrabTransformer" },
		{ "BlueprintSetter", "SetGrabTransformer" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The grab transformer to play audio for\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
		{ "ToolTip", "The grab transformer to play audio for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabbableAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabbableAudio.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GrabTransformerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEventFreq;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScalingSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalingSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbingSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GrabbingSounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReleasingSounds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReleasingSounds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabbingBasePitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabbingPitchRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabbingBaseVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrabbingVolumeRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingBasePitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingPitchRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabbableAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabbableAudio_GetGrabTransformer, "GetGrabTransformer" }, // 418755688
		{ &Z_Construct_UFunction_UIsdkGrabbableAudio_HandleGrabTransformerEvent, "HandleGrabTransformerEvent" }, // 3158280990
		{ &Z_Construct_UFunction_UIsdkGrabbableAudio_SetGrabTransformer, "SetGrabTransformer" }, // 1854362901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabbableAudio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabTransformerName = { "GrabTransformerName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabTransformerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformerName_MetaData), NewProp_GrabTransformerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, StepSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSize_MetaData), NewProp_StepSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_MaxEventFreq = { "MaxEventFreq", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, MaxEventFreq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEventFreq_MetaData), NewProp_MaxEventFreq_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingSounds_Inner = { "ScalingSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingSounds = { "ScalingSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, ScalingSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingSounds_MetaData), NewProp_ScalingSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingSounds_Inner = { "GrabbingSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingSounds = { "GrabbingSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbingSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingSounds_MetaData), NewProp_GrabbingSounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ReleasingSounds_Inner = { "ReleasingSounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ReleasingSounds = { "ReleasingSounds", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, ReleasingSounds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReleasingSounds_MetaData), NewProp_ReleasingSounds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingBasePitch = { "GrabbingBasePitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbingBasePitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingBasePitch_MetaData), NewProp_GrabbingBasePitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingPitchRange = { "GrabbingPitchRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbingPitchRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingPitchRange_MetaData), NewProp_GrabbingPitchRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingBaseVolume = { "GrabbingBaseVolume", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbingBaseVolume), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingBaseVolume_MetaData), NewProp_GrabbingBaseVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingVolumeRange = { "GrabbingVolumeRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbingVolumeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbingVolumeRange_MetaData), NewProp_GrabbingVolumeRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingBasePitch = { "ScalingBasePitch", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, ScalingBasePitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingBasePitch_MetaData), NewProp_ScalingBasePitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingPitchRange = { "ScalingPitchRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, ScalingPitchRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingPitchRange_MetaData), NewProp_ScalingPitchRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabTransformer = { "GrabTransformer", nullptr, (EPropertyFlags)0x014400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformer_MetaData), NewProp_GrabTransformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbableAudioComponent = { "GrabbableAudioComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabbableAudio, GrabbableAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabbableAudioComponent_MetaData), NewProp_GrabbableAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabbableAudio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabTransformerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_StepSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_MaxEventFreq,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ReleasingSounds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ReleasingSounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingBasePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingPitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingBaseVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbingVolumeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingBasePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_ScalingPitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabTransformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabbableAudio_Statics::NewProp_GrabbableAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableAudio_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabbableAudio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableAudio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabbableAudio_Statics::ClassParams = {
	&UIsdkGrabbableAudio::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabbableAudio_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableAudio_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabbableAudio_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabbableAudio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabbableAudio()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabbableAudio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabbableAudio.OuterSingleton, Z_Construct_UClass_UIsdkGrabbableAudio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabbableAudio.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabbableAudio);
UIsdkGrabbableAudio::~UIsdkGrabbableAudio() {}
// ********** End Class UIsdkGrabbableAudio ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabbableAudio, UIsdkGrabbableAudio::StaticClass, TEXT("UIsdkGrabbableAudio"), &Z_Registration_Info_UClass_UIsdkGrabbableAudio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabbableAudio), 549695913U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h__Script_OculusInteraction_1010361247(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabbableAudio_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
