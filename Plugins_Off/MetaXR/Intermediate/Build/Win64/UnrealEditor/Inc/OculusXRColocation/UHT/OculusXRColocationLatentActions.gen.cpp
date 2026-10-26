// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationLatentActions.h"
#include "OculusXRColocationSession.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRColocationLatentActions() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement();
OCULUSXRCOLOCATION_API UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister();
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature();
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature();
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature();
OCULUSXRCOLOCATION_API UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature();
OCULUSXRCOLOCATION_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete ********************
struct Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundSessions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms), &Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 2533711840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_FoundSessions_Inner = { "FoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(0, nullptr) }; // 2533711840
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_FoundSessions = { "FoundSessions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms, FoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundSessions_MetaData), NewProp_FoundSessions_MetaData) }; // 2533711840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_FoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::NewProp_FoundSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature", Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOculusXR_LatentAction_ColocationDiscoveryComplete_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationDiscoveryComplete, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions)
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
	_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationDiscoveryComplete_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Session=Session;
	Parms.FoundSessions=FoundSessions;
	OculusXR_LatentAction_ColocationDiscoveryComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOculusXR_LatentAction_ColocationDiscoveryComplete **********************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationSessionFound *************************
struct Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoundSessions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FoundSessions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FoundSessions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms), &Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 2533711840
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_FoundSessions_Inner = { "FoundSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(0, nullptr) }; // 2533711840
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_FoundSessions = { "FoundSessions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms, FoundSessions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoundSessions_MetaData), NewProp_FoundSessions_MetaData) }; // 2533711840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_Session,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_FoundSessions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::NewProp_FoundSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationSessionFound__DelegateSignature", Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOculusXR_LatentAction_ColocationSessionFound_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationSessionFound, bool Success, FOculusXRColocationSession const& Session, TArray<FOculusXRColocationSession> const& FoundSessions)
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
		TArray<FOculusXRColocationSession> FoundSessions;
	};
	_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationSessionFound_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Session=Session;
	Parms.FoundSessions=FoundSessions;
	OculusXR_LatentAction_ColocationSessionFound.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOculusXR_LatentAction_ColocationSessionFound ***************************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *****************
struct Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms), &Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms, Session), Z_Construct_UScriptStruct_FOculusXRColocationSession, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 2533711840
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::NewProp_Session,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature", Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOculusXR_LatentAction_ColocationAdvertisementStarted_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStarted, bool Success, FOculusXRColocationSession const& Session)
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms
	{
		bool Success;
		FOculusXRColocationSession Session;
	};
	_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStarted_Parms Parms;
	Parms.Success=Success ? true : false;
	Parms.Session=Session;
	OculusXR_LatentAction_ColocationAdvertisementStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStarted *******************

// ********** Begin Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *****************
struct Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms
	{
		bool Success;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Success_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
{
	((_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms*)Obj)->Success = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms), &Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::NewProp_Success,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusXRColocation, nullptr, "OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature", Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOculusXR_LatentAction_ColocationAdvertisementStopped_DelegateWrapper(const FMulticastScriptDelegate& OculusXR_LatentAction_ColocationAdvertisementStopped, bool Success)
{
	struct _Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms
	{
		bool Success;
	};
	_Script_OculusXRColocation_eventOculusXR_LatentAction_ColocationAdvertisementStopped_Parms Parms;
	Parms.Success=Success ? true : false;
	OculusXR_LatentAction_ColocationAdvertisementStopped.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOculusXR_LatentAction_ColocationAdvertisementStopped *******************

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions Function OculusXRAsyncDiscoverColocationSessions 
struct Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics
{
	struct OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms
	{
		UOculusXRAsyncAction_DiscoverColocationSessions* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, nullptr, "OculusXRAsyncDiscoverColocationSessions", Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::OculusXRAsyncAction_DiscoverColocationSessions_eventOculusXRAsyncDiscoverColocationSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRAsyncAction_DiscoverColocationSessions::execOculusXRAsyncDiscoverColocationSessions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_DiscoverColocationSessions**)Z_Param__Result=UOculusXRAsyncAction_DiscoverColocationSessions::OculusXRAsyncDiscoverColocationSessions();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions Function OculusXRAsyncDiscoverColocationSessions 

// ********** Begin Class UOculusXRAsyncAction_DiscoverColocationSessions **************************
void UOculusXRAsyncAction_DiscoverColocationSessions::StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions()
{
	UClass* Class = UOculusXRAsyncAction_DiscoverColocationSessions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OculusXRAsyncDiscoverColocationSessions", &UOculusXRAsyncAction_DiscoverColocationSessions::execOculusXRAsyncDiscoverColocationSessions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions;
UClass* UOculusXRAsyncAction_DiscoverColocationSessions::GetPrivateStaticClass()
{
	using TClass = UOculusXRAsyncAction_DiscoverColocationSessions;
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRAsyncAction_DiscoverColocationSessions"),
			Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton,
			StaticRegisterNativesUOculusXRAsyncAction_DiscoverColocationSessions,
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
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_NoRegister()
{
	return UOculusXRAsyncAction_DiscoverColocationSessions::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Find sessions\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find sessions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionFound_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionFound;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_DiscoverColocationSessions_OculusXRAsyncDiscoverColocationSessions, "OculusXRAsyncDiscoverColocationSessions" }, // 3566940008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_DiscoverColocationSessions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::NewProp_SessionFound = { "SessionFound", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_DiscoverColocationSessions, SessionFound), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationSessionFound__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionFound_MetaData), NewProp_SessionFound_MetaData) }; // 2379050305
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_DiscoverColocationSessions, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationDiscoveryComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 2931556962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::NewProp_SessionFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::ClassParams = {
	&UOculusXRAsyncAction_DiscoverColocationSessions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions()
{
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton, Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions.OuterSingleton;
}
UOculusXRAsyncAction_DiscoverColocationSessions::UOculusXRAsyncAction_DiscoverColocationSessions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAsyncAction_DiscoverColocationSessions);
UOculusXRAsyncAction_DiscoverColocationSessions::~UOculusXRAsyncAction_DiscoverColocationSessions() {}
// ********** End Class UOculusXRAsyncAction_DiscoverColocationSessions ****************************

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Function OculusXRAsyncStartColocationSessionAdvertisement 
struct Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics
{
	struct OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms
	{
		TArray<uint8> SessionData;
		UOculusXRAsyncAction_StartColocationSessionAdvertisement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SessionData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SessionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_SessionData_Inner = { "SessionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_SessionData = { "SessionData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms, SessionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionData_MetaData), NewProp_SessionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_SessionData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_SessionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, nullptr, "OculusXRAsyncStartColocationSessionAdvertisement", Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::OculusXRAsyncAction_StartColocationSessionAdvertisement_eventOculusXRAsyncStartColocationSessionAdvertisement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRAsyncAction_StartColocationSessionAdvertisement::execOculusXRAsyncStartColocationSessionAdvertisement)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_SessionData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_StartColocationSessionAdvertisement**)Z_Param__Result=UOculusXRAsyncAction_StartColocationSessionAdvertisement::OculusXRAsyncStartColocationSessionAdvertisement(Z_Param_Out_SessionData);
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement Function OculusXRAsyncStartColocationSessionAdvertisement 

// ********** Begin Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *****************
void UOculusXRAsyncAction_StartColocationSessionAdvertisement::StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement()
{
	UClass* Class = UOculusXRAsyncAction_StartColocationSessionAdvertisement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OculusXRAsyncStartColocationSessionAdvertisement", &UOculusXRAsyncAction_StartColocationSessionAdvertisement::execOculusXRAsyncStartColocationSessionAdvertisement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement;
UClass* UOculusXRAsyncAction_StartColocationSessionAdvertisement::GetPrivateStaticClass()
{
	using TClass = UOculusXRAsyncAction_StartColocationSessionAdvertisement;
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRAsyncAction_StartColocationSessionAdvertisement"),
			Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton,
			StaticRegisterNativesUOculusXRAsyncAction_StartColocationSessionAdvertisement,
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
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_NoRegister()
{
	return UOculusXRAsyncAction_StartColocationSessionAdvertisement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Start advertisement\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start advertisement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_StartColocationSessionAdvertisement_OculusXRAsyncStartColocationSessionAdvertisement, "OculusXRAsyncStartColocationSessionAdvertisement" }, // 3891862377
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_StartColocationSessionAdvertisement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_StartColocationSessionAdvertisement, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 3640271472
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::ClassParams = {
	&UOculusXRAsyncAction_StartColocationSessionAdvertisement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement()
{
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton, Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement.OuterSingleton;
}
UOculusXRAsyncAction_StartColocationSessionAdvertisement::UOculusXRAsyncAction_StartColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAsyncAction_StartColocationSessionAdvertisement);
UOculusXRAsyncAction_StartColocationSessionAdvertisement::~UOculusXRAsyncAction_StartColocationSessionAdvertisement() {}
// ********** End Class UOculusXRAsyncAction_StartColocationSessionAdvertisement *******************

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Function OculusXRAsyncStopColocationSessionAdvertisement 
struct Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics
{
	struct OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms
	{
		UOculusXRAsyncAction_StopColocationSessionAdvertisement* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms, ReturnValue), Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, nullptr, "OculusXRAsyncStopColocationSessionAdvertisement", Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::OculusXRAsyncAction_StopColocationSessionAdvertisement_eventOculusXRAsyncStopColocationSessionAdvertisement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRAsyncAction_StopColocationSessionAdvertisement::execOculusXRAsyncStopColocationSessionAdvertisement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRAsyncAction_StopColocationSessionAdvertisement**)Z_Param__Result=UOculusXRAsyncAction_StopColocationSessionAdvertisement::OculusXRAsyncStopColocationSessionAdvertisement();
	P_NATIVE_END;
}
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement Function OculusXRAsyncStopColocationSessionAdvertisement 

// ********** Begin Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ******************
void UOculusXRAsyncAction_StopColocationSessionAdvertisement::StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement()
{
	UClass* Class = UOculusXRAsyncAction_StopColocationSessionAdvertisement::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OculusXRAsyncStopColocationSessionAdvertisement", &UOculusXRAsyncAction_StopColocationSessionAdvertisement::execOculusXRAsyncStopColocationSessionAdvertisement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement;
UClass* UOculusXRAsyncAction_StopColocationSessionAdvertisement::GetPrivateStaticClass()
{
	using TClass = UOculusXRAsyncAction_StopColocationSessionAdvertisement;
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRAsyncAction_StopColocationSessionAdvertisement"),
			Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton,
			StaticRegisterNativesUOculusXRAsyncAction_StopColocationSessionAdvertisement,
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
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_NoRegister()
{
	return UOculusXRAsyncAction_StopColocationSessionAdvertisement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Stop advertisement\n//\n" },
#endif
		{ "IncludePath", "OculusXRColocationLatentActions.h" },
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop advertisement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRColocationLatentActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRAsyncAction_StopColocationSessionAdvertisement_OculusXRAsyncStopColocationSessionAdvertisement, "OculusXRAsyncStopColocationSessionAdvertisement" }, // 1225949953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRAsyncAction_StopColocationSessionAdvertisement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRAsyncAction_StopColocationSessionAdvertisement, OnComplete), Z_Construct_UDelegateFunction_OculusXRColocation_OculusXR_LatentAction_ColocationAdvertisementStopped__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnComplete_MetaData), NewProp_OnComplete_MetaData) }; // 4279500531
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::NewProp_OnComplete,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::ClassParams = {
	&UOculusXRAsyncAction_StopColocationSessionAdvertisement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement()
{
	if (!Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton, Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement.OuterSingleton;
}
UOculusXRAsyncAction_StopColocationSessionAdvertisement::UOculusXRAsyncAction_StopColocationSessionAdvertisement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRAsyncAction_StopColocationSessionAdvertisement);
UOculusXRAsyncAction_StopColocationSessionAdvertisement::~UOculusXRAsyncAction_StopColocationSessionAdvertisement() {}
// ********** End Class UOculusXRAsyncAction_StopColocationSessionAdvertisement ********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, UOculusXRAsyncAction_DiscoverColocationSessions::StaticClass, TEXT("UOculusXRAsyncAction_DiscoverColocationSessions"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_DiscoverColocationSessions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_DiscoverColocationSessions), 1031232277U) },
		{ Z_Construct_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, UOculusXRAsyncAction_StartColocationSessionAdvertisement::StaticClass, TEXT("UOculusXRAsyncAction_StartColocationSessionAdvertisement"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_StartColocationSessionAdvertisement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_StartColocationSessionAdvertisement), 151761436U) },
		{ Z_Construct_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, UOculusXRAsyncAction_StopColocationSessionAdvertisement::StaticClass, TEXT("UOculusXRAsyncAction_StopColocationSessionAdvertisement"), &Z_Registration_Info_UClass_UOculusXRAsyncAction_StopColocationSessionAdvertisement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRAsyncAction_StopColocationSessionAdvertisement), 1437509598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_1981733310(TEXT("/Script/OculusXRColocation"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationLatentActions_h__Script_OculusXRColocation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
