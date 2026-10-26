// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkIRootPose.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIRootPose() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIRootPose Function GetRootPose **********************************
struct IsdkIRootPose_eventGetRootPose_Parms
{
	FTransform ReturnValue;
};
FTransform IIsdkIRootPose::GetRootPose()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRootPose instead.");
	IsdkIRootPose_eventGetRootPose_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIRootPose_GetRootPose = FName(TEXT("GetRootPose"));
FTransform IIsdkIRootPose::Execute_GetRootPose(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPose::StaticClass()));
	IsdkIRootPose_eventGetRootPose_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPose_GetRootPose);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPose*)(O->GetNativeInterfaceAddress(UIsdkIRootPose::StaticClass())))
	{
		Parms.ReturnValue = I->GetRootPose_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPose.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPose_eventGetRootPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPose, nullptr, "GetRootPose", Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::PropPointers), sizeof(IsdkIRootPose_eventGetRootPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPose_eventGetRootPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPose_GetRootPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPose_GetRootPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPose::execGetRootPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPose Function GetRootPose ************************************

// ********** Begin Interface UIsdkIRootPose Function GetRootPoseConnectedConditional **************
struct IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms
{
	UIsdkConditional* ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms()
		: ReturnValue(NULL)
	{
	}
};
UIsdkConditional* IIsdkIRootPose::GetRootPoseConnectedConditional()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRootPoseConnectedConditional instead.");
	IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIRootPose_GetRootPoseConnectedConditional = FName(TEXT("GetRootPoseConnectedConditional"));
UIsdkConditional* IIsdkIRootPose::Execute_GetRootPoseConnectedConditional(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPose::StaticClass()));
	IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPose_GetRootPoseConnectedConditional);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPose*)(O->GetNativeInterfaceAddress(UIsdkIRootPose::StaticClass())))
	{
		Parms.ReturnValue = I->GetRootPoseConnectedConditional_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns conditional of the state of whether or not the device associated with this root\n   * pose is enabled in the system, and enumerated in the list of connected devices.\n   * @return UIsdkConditional* The conditional representing the boolean state of the root pose.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPose.h" },
		{ "ToolTip", "@brief Returns conditional of the state of whether or not the device associated with this root\npose is enabled in the system, and enumerated in the list of connected devices.\n@return UIsdkConditional* The conditional representing the boolean state of the root pose." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPose, nullptr, "GetRootPoseConnectedConditional", Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::PropPointers), sizeof(IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPose_eventGetRootPoseConnectedConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPose::execGetRootPoseConnectedConditional)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseConnectedConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPose Function GetRootPoseConnectedConditional ****************

// ********** Begin Interface UIsdkIRootPose Function GetRootPoseHighConfidenceConditional *********
struct IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms
{
	UIsdkConditional* ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms()
		: ReturnValue(NULL)
	{
	}
};
UIsdkConditional* IIsdkIRootPose::GetRootPoseHighConfidenceConditional()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetRootPoseHighConfidenceConditional instead.");
	IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIRootPose_GetRootPoseHighConfidenceConditional = FName(TEXT("GetRootPoseHighConfidenceConditional"));
UIsdkConditional* IIsdkIRootPose::Execute_GetRootPoseHighConfidenceConditional(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPose::StaticClass()));
	IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPose_GetRootPoseHighConfidenceConditional);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPose*)(O->GetNativeInterfaceAddress(UIsdkIRootPose::StaticClass())))
	{
		Parms.ReturnValue = I->GetRootPoseHighConfidenceConditional_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns conditional of the state of if the device associated with this root pose is\n   * connected, the root pose is valid and was set from tracking data is marked as high confidence.\n   * If the conditional is true, then it implies that IsRootPoseConnected and IsRootPoseValid are\n   * also true, so they don't need to be checked in addition to this.\n   * @return UIsdkConditional* Conditional is false if IsRootPoseConnected or IsRootPoseValid is\n   * false.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPose.h" },
		{ "ToolTip", "@brief Returns conditional of the state of if the device associated with this root pose is\nconnected, the root pose is valid and was set from tracking data is marked as high confidence.\nIf the conditional is true, then it implies that IsRootPoseConnected and IsRootPoseValid are\nalso true, so they don't need to be checked in addition to this.\n@return UIsdkConditional* Conditional is false if IsRootPoseConnected or IsRootPoseValid is\nfalse." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPose, nullptr, "GetRootPoseHighConfidenceConditional", Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::PropPointers), sizeof(IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPose_eventGetRootPoseHighConfidenceConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPose::execGetRootPoseHighConfidenceConditional)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseHighConfidenceConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPose Function GetRootPoseHighConfidenceConditional ***********

// ********** Begin Interface UIsdkIRootPose Function IsRootPoseValid ******************************
struct IsdkIRootPose_eventIsRootPoseValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIRootPose_eventIsRootPoseValid_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkIRootPose::IsRootPoseValid()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsRootPoseValid instead.");
	IsdkIRootPose_eventIsRootPoseValid_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIRootPose_IsRootPoseValid = FName(TEXT("IsRootPoseValid"));
bool IIsdkIRootPose::Execute_IsRootPoseValid(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIRootPose::StaticClass()));
	IsdkIRootPose_eventIsRootPoseValid_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIRootPose_IsRootPoseValid);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIRootPose*)(O->GetNativeInterfaceAddress(UIsdkIRootPose::StaticClass())))
	{
		Parms.ReturnValue = I->IsRootPoseValid_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Whether or not the root pose of this implementing class is valid\n   * @return bool True if the transform returned from FTransform was set from tracked data. Returns\n   * False if the Transform contains undefined data.  Returns False if IsRootPoseConnected is false.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPose.h" },
		{ "ToolTip", "@brief Whether or not the root pose of this implementing class is valid\n@return bool True if the transform returned from FTransform was set from tracked data. Returns\nFalse if the Transform contains undefined data.  Returns False if IsRootPoseConnected is false." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIRootPose_eventIsRootPoseValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIRootPose_eventIsRootPoseValid_Parms), &Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIRootPose, nullptr, "IsRootPoseValid", Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::PropPointers), sizeof(IsdkIRootPose_eventIsRootPoseValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIRootPose_eventIsRootPoseValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIRootPose::execIsRootPoseValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRootPoseValid_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIRootPose Function IsRootPoseValid ********************************

// ********** Begin Interface UIsdkIRootPose *******************************************************
void UIsdkIRootPose::StaticRegisterNativesUIsdkIRootPose()
{
	UClass* Class = UIsdkIRootPose::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRootPose", &IIsdkIRootPose::execGetRootPose },
		{ "GetRootPoseConnectedConditional", &IIsdkIRootPose::execGetRootPoseConnectedConditional },
		{ "GetRootPoseHighConfidenceConditional", &IIsdkIRootPose::execGetRootPoseHighConfidenceConditional },
		{ "IsRootPoseValid", &IIsdkIRootPose::execIsRootPoseValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIRootPose;
UClass* UIsdkIRootPose::GetPrivateStaticClass()
{
	using TClass = UIsdkIRootPose;
	if (!Z_Registration_Info_UClass_UIsdkIRootPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIRootPose"),
			Z_Registration_Info_UClass_UIsdkIRootPose.InnerSingleton,
			StaticRegisterNativesUIsdkIRootPose,
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
	return Z_Registration_Info_UClass_UIsdkIRootPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister()
{
	return UIsdkIRootPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIRootPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Root Pose" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIRootPose.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIRootPose_GetRootPose, "GetRootPose" }, // 3184573861
		{ &Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseConnectedConditional, "GetRootPoseConnectedConditional" }, // 3514519309
		{ &Z_Construct_UFunction_UIsdkIRootPose_GetRootPoseHighConfidenceConditional, "GetRootPoseHighConfidenceConditional" }, // 3404314185
		{ &Z_Construct_UFunction_UIsdkIRootPose_IsRootPoseValid, "IsRootPoseValid" }, // 1667195208
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIRootPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIRootPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIRootPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIRootPose_Statics::ClassParams = {
	&UIsdkIRootPose::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIRootPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIRootPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIRootPose()
{
	if (!Z_Registration_Info_UClass_UIsdkIRootPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIRootPose.OuterSingleton, Z_Construct_UClass_UIsdkIRootPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIRootPose.OuterSingleton;
}
UIsdkIRootPose::UIsdkIRootPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIRootPose);
// ********** End Interface UIsdkIRootPose *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIRootPose, UIsdkIRootPose::StaticClass, TEXT("UIsdkIRootPose"), &Z_Registration_Info_UClass_UIsdkIRootPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIRootPose), 2159373520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h__Script_OculusInteraction_2740642717(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPose_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
