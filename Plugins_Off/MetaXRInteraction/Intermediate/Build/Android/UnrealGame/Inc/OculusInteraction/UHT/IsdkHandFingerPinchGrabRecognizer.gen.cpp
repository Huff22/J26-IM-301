// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandFingerPinchGrabRecognizer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkPinchGrabRecognizerEventDelegate *********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkPinchGrabRecognizerEventDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkPinchGrabRecognizerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkPinchGrabRecognizerEventDelegate)
{
	IsdkPinchGrabRecognizerEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIsdkPinchGrabRecognizerEventDelegate ***********************************

// ********** Begin Class UIsdkHandFingerPinchGrabRecognizer Function GetPinchStrength *************
struct Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics
{
	struct IsdkHandFingerPinchGrabRecognizer_eventGetPinchStrength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the calculated pinch strength of a pinch grab */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Returns the calculated pinch strength of a pinch grab" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandFingerPinchGrabRecognizer_eventGetPinchStrength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer, nullptr, "GetPinchStrength", Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::IsdkHandFingerPinchGrabRecognizer_eventGetPinchStrength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::IsdkHandFingerPinchGrabRecognizer_eventGetPinchStrength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandFingerPinchGrabRecognizer::execGetPinchStrength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPinchStrength();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandFingerPinchGrabRecognizer Function GetPinchStrength ***************

// ********** Begin Class UIsdkHandFingerPinchGrabRecognizer Function IsActive *********************
struct Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics
{
	struct IsdkHandFingerPinchGrabRecognizer_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns if the recognizer is currently active and a pinch grab is detected */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Returns if the recognizer is currently active and a pinch grab is detected" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandFingerPinchGrabRecognizer_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandFingerPinchGrabRecognizer_eventIsActive_Parms), &Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer, nullptr, "IsActive", Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::IsdkHandFingerPinchGrabRecognizer_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::IsdkHandFingerPinchGrabRecognizer_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandFingerPinchGrabRecognizer::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandFingerPinchGrabRecognizer Function IsActive ***********************

// ********** Begin Class UIsdkHandFingerPinchGrabRecognizer Function UpdateState ******************
struct Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics
{
	struct IsdkHandFingerPinchGrabRecognizer_eventUpdateState_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Primary driver for detection logic, called externally */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Primary driver for detection logic, called externally" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandFingerPinchGrabRecognizer_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer, nullptr, "UpdateState", Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::IsdkHandFingerPinchGrabRecognizer_eventUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::IsdkHandFingerPinchGrabRecognizer_eventUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandFingerPinchGrabRecognizer::execUpdateState)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateState(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandFingerPinchGrabRecognizer Function UpdateState ********************

// ********** Begin Class UIsdkHandFingerPinchGrabRecognizer ***************************************
void UIsdkHandFingerPinchGrabRecognizer::StaticRegisterNativesUIsdkHandFingerPinchGrabRecognizer()
{
	UClass* Class = UIsdkHandFingerPinchGrabRecognizer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPinchStrength", &UIsdkHandFingerPinchGrabRecognizer::execGetPinchStrength },
		{ "IsActive", &UIsdkHandFingerPinchGrabRecognizer::execIsActive },
		{ "UpdateState", &UIsdkHandFingerPinchGrabRecognizer::execUpdateState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer;
UClass* UIsdkHandFingerPinchGrabRecognizer::GetPrivateStaticClass()
{
	using TClass = UIsdkHandFingerPinchGrabRecognizer;
	if (!Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandFingerPinchGrabRecognizer"),
			Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.InnerSingleton,
			StaticRegisterNativesUIsdkHandFingerPinchGrabRecognizer,
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
	return Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister()
{
	return UIsdkHandFingerPinchGrabRecognizer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * Used to determine if a HandVisual is exhibiting a pinch grab (a finger and a thumb having\n * proximity within a threshold)\n */" },
		{ "IncludePath", "HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Used to determine if a HandVisual is exhibiting a pinch grab (a finger and a thumb having\nproximity within a threshold)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The HandVisualComponent used for recognizing pinch grab */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "The HandVisualComponent used for recognizing pinch grab" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerType_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The finger type to be assessed */" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "The finger type to be assessed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchGrabStarted_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when a pinch grab becomes active */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Delegate broadcast when a pinch grab becomes active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchGrabFinished_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when a pinch grab is no longer active*/" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "Delegate broadcast when a pinch grab is no longer active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastPinchConfidence_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* When true, previous setting of wrist & HMD forwards to API returned high confidence */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "When true, previous setting of wrist & HMD forwards to API returned high confidence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWristForward_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The last forward vector recorded by the wrist joint */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "The last forward vector recorded by the wrist joint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHMDForward_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The last forward vector recorded by the HMD */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandFingerPinchGrabRecognizer.h" },
		{ "ToolTip", "The last forward vector recorded by the HMD" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandVisual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerType;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PinchGrabStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PinchGrabFinished;
	static void NewProp_bLastPinchConfidence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastPinchConfidence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentWristForward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentHMDForward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_GetPinchStrength, "GetPinchStrength" }, // 659158743
		{ &Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_IsActive, "IsActive" }, // 615793164
		{ &Z_Construct_UFunction_UIsdkHandFingerPinchGrabRecognizer_UpdateState, "UpdateState" }, // 1700231563
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandFingerPinchGrabRecognizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_HandVisual = { "HandVisual", nullptr, (EPropertyFlags)0x001100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, HandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisual_MetaData), NewProp_HandVisual_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_FingerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_FingerType = { "FingerType", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, FingerType), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerType_MetaData), NewProp_FingerType_MetaData) }; // 1877342163
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_PinchGrabStarted = { "PinchGrabStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, PinchGrabStarted), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchGrabStarted_MetaData), NewProp_PinchGrabStarted_MetaData) }; // 1490937965
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_PinchGrabFinished = { "PinchGrabFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, PinchGrabFinished), Z_Construct_UDelegateFunction_OculusInteraction_IsdkPinchGrabRecognizerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchGrabFinished_MetaData), NewProp_PinchGrabFinished_MetaData) }; // 1490937965
void Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_bLastPinchConfidence_SetBit(void* Obj)
{
	((UIsdkHandFingerPinchGrabRecognizer*)Obj)->bLastPinchConfidence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_bLastPinchConfidence = { "bLastPinchConfidence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandFingerPinchGrabRecognizer), &Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_bLastPinchConfidence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastPinchConfidence_MetaData), NewProp_bLastPinchConfidence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_CurrentWristForward = { "CurrentWristForward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, CurrentWristForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWristForward_MetaData), NewProp_CurrentWristForward_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_CurrentHMDForward = { "CurrentHMDForward", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandFingerPinchGrabRecognizer, CurrentHMDForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHMDForward_MetaData), NewProp_CurrentHMDForward_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_HandVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_FingerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_FingerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_PinchGrabStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_PinchGrabFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_bLastPinchConfidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_CurrentWristForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::NewProp_CurrentHMDForward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::ClassParams = {
	&UIsdkHandFingerPinchGrabRecognizer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer()
{
	if (!Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.OuterSingleton, Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandFingerPinchGrabRecognizer);
UIsdkHandFingerPinchGrabRecognizer::~UIsdkHandFingerPinchGrabRecognizer() {}
// ********** End Class UIsdkHandFingerPinchGrabRecognizer *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer, UIsdkHandFingerPinchGrabRecognizer::StaticClass, TEXT("UIsdkHandFingerPinchGrabRecognizer"), &Z_Registration_Info_UClass_UIsdkHandFingerPinchGrabRecognizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandFingerPinchGrabRecognizer), 134896499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h__Script_OculusInteraction_3125786346(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandFingerPinchGrabRecognizer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
