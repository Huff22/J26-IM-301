// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMRFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRMRFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMR_Settings_NoRegister();
OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary();
OCULUSXRMR_API UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusXRMR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOculusXRMRFunctionLibrary Function GetMrcScalingFactor ******************
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics
{
	struct OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the scaling factor for the MRC configuration. Returns 0 if not available.\n" },
#endif
		{ "DisplayName", "Get MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the scaling factor for the MRC configuration. Returns 0 if not available." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetMrcScalingFactor", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventGetMrcScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetMrcScalingFactor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOculusXRMRFunctionLibrary::GetMrcScalingFactor();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function GetMrcScalingFactor ********************

// ********** Begin Class UOculusXRMRFunctionLibrary Function GetOculusXRMRSettings ****************
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics
{
	struct OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms
	{
		UOculusXRMR_Settings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the OculusXRMR settings object\n" },
#endif
		{ "DisplayName", "Get Oculus MR Settings" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the OculusXRMR settings object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms, ReturnValue), Z_Construct_UClass_UOculusXRMR_Settings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetOculusXRMRSettings", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::OculusXRMRFunctionLibrary_eventGetOculusXRMRSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetOculusXRMRSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOculusXRMR_Settings**)Z_Param__Result=UOculusXRMRFunctionLibrary::GetOculusXRMRSettings();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function GetOculusXRMRSettings ******************

// ********** Begin Class UOculusXRMRFunctionLibrary Function GetTrackingReferenceComponent ********
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics
{
	struct OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get the component that the OculusXRMR camera is tracking. When this is null, the camera will track the player pawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the component that the OculusXRMR camera is tracking. When this is null, the camera will track the player pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "GetTrackingReferenceComponent", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventGetTrackingReferenceComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execGetTrackingReferenceComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=UOculusXRMRFunctionLibrary::GetTrackingReferenceComponent();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function GetTrackingReferenceComponent **********

// ********** Begin Class UOculusXRMRFunctionLibrary Function IsMrcActive **************************
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics
{
	struct OculusXRMRFunctionLibrary_eventIsMrcActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if MRC is enabled and actively capturing\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if MRC is enabled and actively capturing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMRFunctionLibrary_eventIsMrcActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventIsMrcActive_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "IsMrcActive", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::OculusXRMRFunctionLibrary_eventIsMrcActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::OculusXRMRFunctionLibrary_eventIsMrcActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execIsMrcActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::IsMrcActive();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function IsMrcActive ****************************

// ********** Begin Class UOculusXRMRFunctionLibrary Function IsMrcEnabled *************************
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics
{
	struct OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if MRC is enabled\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if MRC is enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "IsMrcEnabled", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::OculusXRMRFunctionLibrary_eventIsMrcEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execIsMrcEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::IsMrcEnabled();
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function IsMrcEnabled ***************************

// ********** Begin Class UOculusXRMRFunctionLibrary Function SetMrcScalingFactor ******************
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics
{
	struct OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms
	{
		float ScalingFactor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned.\n" },
#endif
		{ "CPP_Default_ScalingFactor", "1.000000" },
		{ "DisplayName", "Set MRC Scaling Factor" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the scaling factor for the MRC configuration. This should be a positive value set to the same scaling as the VR player pawn so that the game capture and camera video are aligned." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ScalingFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "SetMrcScalingFactor", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::OculusXRMRFunctionLibrary_eventSetMrcScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execSetMrcScalingFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::SetMrcScalingFactor(Z_Param_ScalingFactor);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function SetMrcScalingFactor ********************

// ********** Begin Class UOculusXRMRFunctionLibrary Function SetTrackingReferenceComponent ********
struct Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics
{
	struct OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms
	{
		USceneComponent* Component;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|MR" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set the component for the OculusXRMR camera to track. If this is set to null, the camera will track the player pawn.\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the component for the OculusXRMR camera to track. If this is set to null, the camera will track the player pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOculusXRMRFunctionLibrary, nullptr, "SetTrackingReferenceComponent", Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::OculusXRMRFunctionLibrary_eventSetTrackingReferenceComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOculusXRMRFunctionLibrary::execSetTrackingReferenceComponent)
{
	P_GET_OBJECT(USceneComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOculusXRMRFunctionLibrary::SetTrackingReferenceComponent(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class UOculusXRMRFunctionLibrary Function SetTrackingReferenceComponent **********

// ********** Begin Class UOculusXRMRFunctionLibrary ***********************************************
void UOculusXRMRFunctionLibrary::StaticRegisterNativesUOculusXRMRFunctionLibrary()
{
	UClass* Class = UOculusXRMRFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMrcScalingFactor", &UOculusXRMRFunctionLibrary::execGetMrcScalingFactor },
		{ "GetOculusXRMRSettings", &UOculusXRMRFunctionLibrary::execGetOculusXRMRSettings },
		{ "GetTrackingReferenceComponent", &UOculusXRMRFunctionLibrary::execGetTrackingReferenceComponent },
		{ "IsMrcActive", &UOculusXRMRFunctionLibrary::execIsMrcActive },
		{ "IsMrcEnabled", &UOculusXRMRFunctionLibrary::execIsMrcEnabled },
		{ "SetMrcScalingFactor", &UOculusXRMRFunctionLibrary::execSetMrcScalingFactor },
		{ "SetTrackingReferenceComponent", &UOculusXRMRFunctionLibrary::execSetTrackingReferenceComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary;
UClass* UOculusXRMRFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UOculusXRMRFunctionLibrary;
	if (!Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRMRFunctionLibrary"),
			Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUOculusXRMRFunctionLibrary,
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
	return Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary_NoRegister()
{
	return UOculusXRMRFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OculusXRMRFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusXRMRFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetMrcScalingFactor, "GetMrcScalingFactor" }, // 3950100171
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetOculusXRMRSettings, "GetOculusXRMRSettings" }, // 1828739464
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_GetTrackingReferenceComponent, "GetTrackingReferenceComponent" }, // 1661353062
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcActive, "IsMrcActive" }, // 959739861
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_IsMrcEnabled, "IsMrcEnabled" }, // 2075909210
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetMrcScalingFactor, "SetMrcScalingFactor" }, // 2559871379
		{ &Z_Construct_UFunction_UOculusXRMRFunctionLibrary_SetTrackingReferenceComponent, "SetTrackingReferenceComponent" }, // 305512867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRMRFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::ClassParams = {
	&UOculusXRMRFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRMRFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOculusXRMRFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRMRFunctionLibrary);
UOculusXRMRFunctionLibrary::~UOculusXRMRFunctionLibrary() {}
// ********** End Class UOculusXRMRFunctionLibrary *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h__Script_OculusXRMR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRMRFunctionLibrary, UOculusXRMRFunctionLibrary::StaticClass, TEXT("UOculusXRMRFunctionLibrary"), &Z_Registration_Info_UClass_UOculusXRMRFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRMRFunctionLibrary), 1120625103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h__Script_OculusXRMR_4197263345(TEXT("/Script/OculusXRMR"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h__Script_OculusXRMR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRMR_Public_OculusXRMRFunctionLibrary_h__Script_OculusXRMR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
