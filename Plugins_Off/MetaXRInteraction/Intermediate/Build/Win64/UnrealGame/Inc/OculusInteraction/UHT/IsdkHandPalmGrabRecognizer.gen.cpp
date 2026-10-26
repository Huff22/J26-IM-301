// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandPalmGrabRecognizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandPalmGrabRecognizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkPalmGrabRecognizerEventDelegate **********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkPalmGrabRecognizerEventDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkPalmGrabRecognizerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkPalmGrabRecognizerEventDelegate)
{
	IsdkPalmGrabRecognizerEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIsdkPalmGrabRecognizerEventDelegate ************************************

// ********** Begin Class UIsdkHandPalmGrabRecognizer Function IsActive ****************************
struct Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics
{
	struct IsdkHandPalmGrabRecognizer_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns if the recognizer is currently active and a palm grab is detected */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Returns if the recognizer is currently active and a palm grab is detected" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandPalmGrabRecognizer_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandPalmGrabRecognizer_eventIsActive_Parms), &Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPalmGrabRecognizer, nullptr, "IsActive", Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::IsdkHandPalmGrabRecognizer_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::IsdkHandPalmGrabRecognizer_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPalmGrabRecognizer::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPalmGrabRecognizer Function IsActive ******************************

// ********** Begin Class UIsdkHandPalmGrabRecognizer Function SetPalmGrabMinFingerCurl ************
struct Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics
{
	struct IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingerCurl_Parms
	{
		float Angle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Set the minimum angle required by the fingers to register a curl */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Set the minimum angle required by the fingers to register a curl" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingerCurl_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::NewProp_Angle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPalmGrabRecognizer, nullptr, "SetPalmGrabMinFingerCurl", Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingerCurl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingerCurl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPalmGrabRecognizer::execSetPalmGrabMinFingerCurl)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPalmGrabMinFingerCurl(Z_Param_Angle);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPalmGrabRecognizer Function SetPalmGrabMinFingerCurl **************

// ********** Begin Class UIsdkHandPalmGrabRecognizer Function SetPalmGrabMinFingers ***************
struct Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics
{
	struct IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingers_Parms
	{
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Set the minimum amount of fingers required to be curling to register a palm grab*/" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Set the minimum amount of fingers required to be curling to register a palm grab" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingers_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPalmGrabRecognizer, nullptr, "SetPalmGrabMinFingers", Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::IsdkHandPalmGrabRecognizer_eventSetPalmGrabMinFingers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPalmGrabRecognizer::execSetPalmGrabMinFingers)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPalmGrabMinFingers(Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPalmGrabRecognizer Function SetPalmGrabMinFingers *****************

// ********** Begin Class UIsdkHandPalmGrabRecognizer Function UpdateState *************************
struct Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics
{
	struct IsdkHandPalmGrabRecognizer_eventUpdateState_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Primary driver for detection logic, called externally */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Primary driver for detection logic, called externally" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPalmGrabRecognizer_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPalmGrabRecognizer, nullptr, "UpdateState", Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::IsdkHandPalmGrabRecognizer_eventUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::IsdkHandPalmGrabRecognizer_eventUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPalmGrabRecognizer::execUpdateState)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateState(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPalmGrabRecognizer Function UpdateState ***************************

// ********** Begin Class UIsdkHandPalmGrabRecognizer **********************************************
void UIsdkHandPalmGrabRecognizer::StaticRegisterNativesUIsdkHandPalmGrabRecognizer()
{
	UClass* Class = UIsdkHandPalmGrabRecognizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsActive", &UIsdkHandPalmGrabRecognizer::execIsActive },
		{ "SetPalmGrabMinFingerCurl", &UIsdkHandPalmGrabRecognizer::execSetPalmGrabMinFingerCurl },
		{ "SetPalmGrabMinFingers", &UIsdkHandPalmGrabRecognizer::execSetPalmGrabMinFingers },
		{ "UpdateState", &UIsdkHandPalmGrabRecognizer::execUpdateState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer;
UClass* UIsdkHandPalmGrabRecognizer::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPalmGrabRecognizer;
	if (!Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandPalmGrabRecognizer"),
			Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.InnerSingleton,
			StaticRegisterNativesUIsdkHandPalmGrabRecognizer,
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
	return Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_NoRegister()
{
	return UIsdkHandPalmGrabRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * Used to determine if a HandVisual is exhibiting a palm grab (a minimum amount of fingers curling\n * near an object)\n */" },
		{ "IncludePath", "HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Used to determine if a HandVisual is exhibiting a palm grab (a minimum amount of fingers curling\nnear an object)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The HandVisualComponent used for recognizing */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "The HandVisualComponent used for recognizing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabStarted_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when a palm grab becomes active */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Delegate broadcast when a palm grab becomes active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabFinished_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when a palm grab is no longer active*/" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Delegate broadcast when a palm grab is no longer active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabMinCurl_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The minimum angle required by the fingers to register a curl */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "The minimum angle required by the fingers to register a curl" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabMinFingers_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Minimum amount of fingers required to be curling to register a palm grab*/" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPalmGrabRecognizer.h" },
		{ "ToolTip", "Minimum amount of fingers required to be curling to register a palm grab" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandVisual;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PalmGrabStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PalmGrabFinished;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PalmGrabMinCurl;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PalmGrabMinFingers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_IsActive, "IsActive" }, // 760812967
		{ &Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingerCurl, "SetPalmGrabMinFingerCurl" }, // 2768534229
		{ &Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_SetPalmGrabMinFingers, "SetPalmGrabMinFingers" }, // 3089946466
		{ &Z_Construct_UFunction_UIsdkHandPalmGrabRecognizer_UpdateState, "UpdateState" }, // 1828047004
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPalmGrabRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_HandVisual = { "HandVisual", nullptr, (EPropertyFlags)0x001100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPalmGrabRecognizer, HandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisual_MetaData), NewProp_HandVisual_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabStarted = { "PalmGrabStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPalmGrabRecognizer, PalmGrabStarted), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabStarted_MetaData), NewProp_PalmGrabStarted_MetaData) }; // 2022883254
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabFinished = { "PalmGrabFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPalmGrabRecognizer, PalmGrabFinished), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPalmGrabRecognizerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabFinished_MetaData), NewProp_PalmGrabFinished_MetaData) }; // 2022883254
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabMinCurl = { "PalmGrabMinCurl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPalmGrabRecognizer, PalmGrabMinCurl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabMinCurl_MetaData), NewProp_PalmGrabMinCurl_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabMinFingers = { "PalmGrabMinFingers", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPalmGrabRecognizer, PalmGrabMinFingers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabMinFingers_MetaData), NewProp_PalmGrabMinFingers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_HandVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabMinCurl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::NewProp_PalmGrabMinFingers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::ClassParams = {
	&UIsdkHandPalmGrabRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandPalmGrabRecognizer()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.OuterSingleton, Z_Construct_UClass_UIsdkHandPalmGrabRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandPalmGrabRecognizer);
UIsdkHandPalmGrabRecognizer::~UIsdkHandPalmGrabRecognizer() {}
// ********** End Class UIsdkHandPalmGrabRecognizer ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPalmGrabRecognizer, UIsdkHandPalmGrabRecognizer::StaticClass, TEXT("UIsdkHandPalmGrabRecognizer"), &Z_Registration_Info_UClass_UIsdkHandPalmGrabRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPalmGrabRecognizer), 1939495869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h__Script_OculusInteraction_2493202426(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPalmGrabRecognizer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
