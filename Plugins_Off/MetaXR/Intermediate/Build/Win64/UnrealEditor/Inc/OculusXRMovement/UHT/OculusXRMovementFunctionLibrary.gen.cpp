// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovementFunctionLibrary.h"
#include "OculusXRMovementTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRMovementFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary();
OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister();
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet();
OCULUSXRMOVEMENT_API UEnum* Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity();
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRBodyState();
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXREyeGazesState();
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceState();
OCULUSXRMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRFaceVisemesState();
UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingEnabled **********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingEnabled", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingEnabled ************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingSupported ********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsBodyTrackingSupported", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsBodyTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsBodyTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsBodyTrackingSupported **********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingEnabled ***********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingEnabled", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingEnabled *************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingSupported *********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsEyeTrackingSupported", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsEyeTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsEyeTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsEyeTrackingSupported ***********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingEnabled **********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingEnabled", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingEnabled ************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingSupported ********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingSupported", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingSupported **********

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesEnabled ***
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingVisemesEnabled", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingVisemesEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesEnabled *****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesSupported *
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics
{
	struct OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "IsFaceTrackingVisemesSupported", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::OculusXRMovementFunctionLibrary_eventIsFaceTrackingVisemesSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::IsFaceTrackingVisemesSupported();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function IsFaceTrackingVisemesSupported ***

// ********** Begin Class UOculusXRMovementFunctionLibrary Function RequestBodyTrackingFidelity ****
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics
{
	struct OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms
	{
		EOculusXRBodyTrackingFidelity fidelity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_fidelity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_fidelity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_fidelity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_fidelity = { "fidelity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms, fidelity), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyTrackingFidelity, METADATA_PARAMS(0, nullptr) }; // 1250352874
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_fidelity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_fidelity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "RequestBodyTrackingFidelity", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::OculusXRMovementFunctionLibrary_eventRequestBodyTrackingFidelity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execRequestBodyTrackingFidelity)
{
	P_GET_ENUM(EOculusXRBodyTrackingFidelity,Z_Param_fidelity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::RequestBodyTrackingFidelity(EOculusXRBodyTrackingFidelity(Z_Param_fidelity));
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function RequestBodyTrackingFidelity ******

// ********** Begin Class UOculusXRMovementFunctionLibrary Function ResetBodyTrackingCalibration ***
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics
{
	struct OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "ResetBodyTrackingCalibration", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::OculusXRMovementFunctionLibrary_eventResetBodyTrackingCalibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execResetBodyTrackingCalibration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::ResetBodyTrackingCalibration();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function ResetBodyTrackingCalibration *****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function SetFaceTrackingVisemesEnabled **
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics
{
	struct OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms
	{
		bool faceTrackingVisemesEnabled;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_faceTrackingVisemesEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_faceTrackingVisemesEnabled;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_faceTrackingVisemesEnabled_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms*)Obj)->faceTrackingVisemesEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_faceTrackingVisemesEnabled = { "faceTrackingVisemesEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_faceTrackingVisemesEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_faceTrackingVisemesEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "SetFaceTrackingVisemesEnabled", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::OculusXRMovementFunctionLibrary_eventSetFaceTrackingVisemesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execSetFaceTrackingVisemesEnabled)
{
	P_GET_UBOOL(Z_Param_faceTrackingVisemesEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::SetFaceTrackingVisemesEnabled(Z_Param_faceTrackingVisemesEnabled);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function SetFaceTrackingVisemesEnabled ****

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartBodyTracking **************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "StartBodyTracking is deprecated, use StartBodyTrackingByJointSet." },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartBodyTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStartBodyTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartBodyTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartBodyTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartBodyTracking ****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartBodyTrackingByJointSet ****
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms
	{
		EOculusXRBodyJointSet jointSet;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_jointSet_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_jointSet;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_jointSet_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_jointSet = { "jointSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms, jointSet), Z_Construct_UEnum_OculusXRMovement_EOculusXRBodyJointSet, METADATA_PARAMS(0, nullptr) }; // 1492656284
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_jointSet_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_jointSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartBodyTrackingByJointSet", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::OculusXRMovementFunctionLibrary_eventStartBodyTrackingByJointSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartBodyTrackingByJointSet)
{
	P_GET_ENUM(EOculusXRBodyJointSet,Z_Param_jointSet);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartBodyTrackingByJointSet(EOculusXRBodyJointSet(Z_Param_jointSet));
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartBodyTrackingByJointSet ******

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartEyeTracking ***************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartEyeTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStartEyeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartEyeTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartEyeTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartEyeTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StartFaceTracking **************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StartFaceTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStartFaceTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStartFaceTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StartFaceTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StartFaceTracking ****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopBodyTracking ***************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopBodyTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::OculusXRMovementFunctionLibrary_eventStopBodyTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopBodyTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopBodyTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopBodyTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopEyeTracking ****************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopEyeTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::OculusXRMovementFunctionLibrary_eventStopEyeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopEyeTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopEyeTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopEyeTracking ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function StopFaceTracking ***************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics
{
	struct OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "StopFaceTracking", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::OculusXRMovementFunctionLibrary_eventStopFaceTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execStopFaceTracking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::StopFaceTracking();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function StopFaceTracking *****************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function SuggestBodyTrackingCalibrationOverride 
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics
{
	struct OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms
	{
		float height;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms, height), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "SuggestBodyTrackingCalibrationOverride", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::OculusXRMovementFunctionLibrary_eventSuggestBodyTrackingCalibrationOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execSuggestBodyTrackingCalibrationOverride)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::SuggestBodyTrackingCalibrationOverride(Z_Param_height);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function SuggestBodyTrackingCalibrationOverride 

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetBodyState ****************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics
{
	struct OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms
	{
		FOculusXRBodyState outBodyState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Body" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outBodyState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_outBodyState = { "outBodyState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms, outBodyState), Z_Construct_UScriptStruct_FOculusXRBodyState, METADATA_PARAMS(0, nullptr) }; // 481926566
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_outBodyState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetBodyState", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::OculusXRMovementFunctionLibrary_eventTryGetBodyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetBodyState)
{
	P_GET_STRUCT_REF(FOculusXRBodyState,Z_Param_Out_outBodyState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetBodyState(Z_Param_Out_outBodyState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetBodyState ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetEyeGazesState ************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics
{
	struct OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms
	{
		FOculusXREyeGazesState outEyeGazesState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Eyes" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outEyeGazesState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_outEyeGazesState = { "outEyeGazesState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms, outEyeGazesState), Z_Construct_UScriptStruct_FOculusXREyeGazesState, METADATA_PARAMS(0, nullptr) }; // 2662313393
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_outEyeGazesState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetEyeGazesState", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::OculusXRMovementFunctionLibrary_eventTryGetEyeGazesState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState)
{
	P_GET_STRUCT_REF(FOculusXREyeGazesState,Z_Param_Out_outEyeGazesState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetEyeGazesState(Z_Param_Out_outEyeGazesState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetEyeGazesState **************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetFaceState ****************
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics
{
	struct OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms
	{
		FOculusXRFaceState outFaceState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFaceState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_outFaceState = { "outFaceState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms, outFaceState), Z_Construct_UScriptStruct_FOculusXRFaceState, METADATA_PARAMS(0, nullptr) }; // 2994930914
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_outFaceState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetFaceState", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::OculusXRMovementFunctionLibrary_eventTryGetFaceState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetFaceState)
{
	P_GET_STRUCT_REF(FOculusXRFaceState,Z_Param_Out_outFaceState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetFaceState(Z_Param_Out_outFaceState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetFaceState ******************

// ********** Begin Class UOculusXRMovementFunctionLibrary Function TryGetFaceVisemesState *********
struct Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics
{
	struct OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms
	{
		FOculusXRFaceVisemesState outFaceVisemesState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusXR|Face" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_outFaceVisemesState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_outFaceVisemesState = { "outFaceVisemesState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms, outFaceVisemesState), Z_Construct_UScriptStruct_FOculusXRFaceVisemesState, METADATA_PARAMS(0, nullptr) }; // 1731188101
void Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms), &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_outFaceVisemesState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMovementFunctionLibrary, nullptr, "TryGetFaceVisemesState", Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::OculusXRMovementFunctionLibrary_eventTryGetFaceVisemesState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMovementFunctionLibrary::execTryGetFaceVisemesState)
{
	P_GET_STRUCT_REF(FOculusXRFaceVisemesState,Z_Param_Out_outFaceVisemesState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMovementFunctionLibrary::TryGetFaceVisemesState(Z_Param_Out_outFaceVisemesState);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMovementFunctionLibrary Function TryGetFaceVisemesState ***********

// ********** Begin Class UOculusXRMovementFunctionLibrary *****************************************
void UOculusXRMovementFunctionLibrary::StaticRegisterNativesUOculusXRMovementFunctionLibrary()
{
	UClass* Class = UOculusXRMovementFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsBodyTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsBodyTrackingEnabled },
		{ "IsBodyTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsBodyTrackingSupported },
		{ "IsEyeTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsEyeTrackingEnabled },
		{ "IsEyeTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsEyeTrackingSupported },
		{ "IsFaceTrackingEnabled", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingEnabled },
		{ "IsFaceTrackingSupported", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingSupported },
		{ "IsFaceTrackingVisemesEnabled", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesEnabled },
		{ "IsFaceTrackingVisemesSupported", &UOculusXRMovementFunctionLibrary::execIsFaceTrackingVisemesSupported },
		{ "RequestBodyTrackingFidelity", &UOculusXRMovementFunctionLibrary::execRequestBodyTrackingFidelity },
		{ "ResetBodyTrackingCalibration", &UOculusXRMovementFunctionLibrary::execResetBodyTrackingCalibration },
		{ "SetFaceTrackingVisemesEnabled", &UOculusXRMovementFunctionLibrary::execSetFaceTrackingVisemesEnabled },
		{ "StartBodyTracking", &UOculusXRMovementFunctionLibrary::execStartBodyTracking },
		{ "StartBodyTrackingByJointSet", &UOculusXRMovementFunctionLibrary::execStartBodyTrackingByJointSet },
		{ "StartEyeTracking", &UOculusXRMovementFunctionLibrary::execStartEyeTracking },
		{ "StartFaceTracking", &UOculusXRMovementFunctionLibrary::execStartFaceTracking },
		{ "StopBodyTracking", &UOculusXRMovementFunctionLibrary::execStopBodyTracking },
		{ "StopEyeTracking", &UOculusXRMovementFunctionLibrary::execStopEyeTracking },
		{ "StopFaceTracking", &UOculusXRMovementFunctionLibrary::execStopFaceTracking },
		{ "SuggestBodyTrackingCalibrationOverride", &UOculusXRMovementFunctionLibrary::execSuggestBodyTrackingCalibrationOverride },
		{ "TryGetBodyState", &UOculusXRMovementFunctionLibrary::execTryGetBodyState },
		{ "TryGetEyeGazesState", &UOculusXRMovementFunctionLibrary::execTryGetEyeGazesState },
		{ "TryGetFaceState", &UOculusXRMovementFunctionLibrary::execTryGetFaceState },
		{ "TryGetFaceVisemesState", &UOculusXRMovementFunctionLibrary::execTryGetFaceVisemesState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary;
UClass* UOculusXRMovementFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UOculusXRMovementFunctionLibrary;
	if (!Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRMovementFunctionLibrary"),
			Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUOculusXRMovementFunctionLibrary,
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
	return Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary_NoRegister()
{
	return UOculusXRMovementFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRMovementFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRMovementFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingEnabled, "IsBodyTrackingEnabled" }, // 2116238892
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsBodyTrackingSupported, "IsBodyTrackingSupported" }, // 221024449
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingEnabled, "IsEyeTrackingEnabled" }, // 1255272740
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsEyeTrackingSupported, "IsEyeTrackingSupported" }, // 335085255
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingEnabled, "IsFaceTrackingEnabled" }, // 834278519
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingSupported, "IsFaceTrackingSupported" }, // 2016890468
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesEnabled, "IsFaceTrackingVisemesEnabled" }, // 4274914624
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_IsFaceTrackingVisemesSupported, "IsFaceTrackingVisemesSupported" }, // 3410568572
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_RequestBodyTrackingFidelity, "RequestBodyTrackingFidelity" }, // 3006924770
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_ResetBodyTrackingCalibration, "ResetBodyTrackingCalibration" }, // 804967755
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SetFaceTrackingVisemesEnabled, "SetFaceTrackingVisemesEnabled" }, // 4136166874
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTracking, "StartBodyTracking" }, // 1691474325
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartBodyTrackingByJointSet, "StartBodyTrackingByJointSet" }, // 3482150999
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartEyeTracking, "StartEyeTracking" }, // 2823046333
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StartFaceTracking, "StartFaceTracking" }, // 4200552524
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopBodyTracking, "StopBodyTracking" }, // 1797038452
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopEyeTracking, "StopEyeTracking" }, // 2084426495
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_StopFaceTracking, "StopFaceTracking" }, // 535958593
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_SuggestBodyTrackingCalibrationOverride, "SuggestBodyTrackingCalibrationOverride" }, // 1059306866
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetBodyState, "TryGetBodyState" }, // 3597420448
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetEyeGazesState, "TryGetEyeGazesState" }, // 3667641549
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceState, "TryGetFaceState" }, // 3839184064
		{ &Z_Construct_UFunction_UOculusXRMovementFunctionLibrary_TryGetFaceVisemesState, "TryGetFaceVisemesState" }, // 3743202628
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMovementFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::ClassParams = {
	&UOculusXRMovementFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRMovementFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRMovementFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary.OuterSingleton;
}
UOculusXRMovementFunctionLibrary::UOculusXRMovementFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMovementFunctionLibrary);
UOculusXRMovementFunctionLibrary::~UOculusXRMovementFunctionLibrary() {}
// ********** End Class UOculusXRMovementFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMovementFunctionLibrary, UOculusXRMovementFunctionLibrary::StaticClass, TEXT("UOculusXRMovementFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRMovementFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMovementFunctionLibrary), 3679435587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_2442202975(TEXT("/Script/OculusXRMovement"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMovement_Public_OculusXRMovementFunctionLibrary_h__Script_OculusXRMovement_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
