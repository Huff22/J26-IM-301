// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkFromOpenXRHandDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkFromOpenXRHandDataSource() {}

// ********** Begin Cross Module References ********************************************************
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function GetAllowInvalidTrackedData ********
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventGetAllowInvalidTrackedData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Checks if low confidence hand data is allowed.\n   * @return bool True if low confidence data is processed, false otherwise.\n   *\n   * The system defaults to high-confidence data for reliability. This setting is\n   * configured internally but can be adjusted if needed for specific scenarios.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Checks if low confidence hand data is allowed.\n@return bool True if low confidence data is processed, false otherwise.\n\nThe system defaults to high-confidence data for reliability. This setting is\nconfigured internally but can be adjusted if needed for specific scenarios." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkFromOpenXRHandDataSource_eventGetAllowInvalidTrackedData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkFromOpenXRHandDataSource_eventGetAllowInvalidTrackedData_Parms), &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "GetAllowInvalidTrackedData", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::IsdkFromOpenXRHandDataSource_eventGetAllowInvalidTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::IsdkFromOpenXRHandDataSource_eventGetAllowInvalidTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execGetAllowInvalidTrackedData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAllowInvalidTrackedData();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function GetAllowInvalidTrackedData **********

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function GetMotionController ***************
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventGetMotionController_Parms
	{
		UMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Accesses the motion controller component used by this hand data source.\n   * @return UMotionControllerComponent* Pointer to the motion controller component.\n   *\n   * This provides access to the motion controller tied to the hand data source, mainly for internal\n   * use. You might use this if you're doing advanced modifications or debugging.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Accesses the motion controller component used by this hand data source.\n@return UMotionControllerComponent* Pointer to the motion controller component.\n\nThis provides access to the motion controller tied to the hand data source, mainly for internal\nuse. You might use this if you're doing advanced modifications or debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRHandDataSource_eventGetMotionController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "GetMotionController", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::IsdkFromOpenXRHandDataSource_eventGetMotionController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::IsdkFromOpenXRHandDataSource_eventGetMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execGetMotionController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionController();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function GetMotionController *****************

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function GetRootPoseConnectedConditional_Implementation 
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms
	{
		UIsdkConditional* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the status of the root pose connection.\n   * @return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\n   * connection status of the root pose.\n   *\n   * This method checks if the root pose connection is currently active and valid. The returned\n   * `UIsdkConditional` object encapsulates this status and can trigger events when the connection\n   * status changes. For example, this is used to check if the hand should be visible and if the\n   * interaction rig components should be enabled/disabled.\n   * @see UIsdkTrackedDataSourceRigComponent\n   * @see UIsdkPokeInteractionRigComponent\n   * @see UIsdkGrabInteractionRigComponent\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Retrieves the status of the root pose connection.\n@return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\nconnection status of the root pose.\n\nThis method checks if the root pose connection is currently active and valid. The returned\n`UIsdkConditional` object encapsulates this status and can trigger events when the connection\nstatus changes. For example, this is used to check if the hand should be visible and if the\ninteraction rig components should be enabled/disabled.\n@see UIsdkTrackedDataSourceRigComponent\n@see UIsdkPokeInteractionRigComponent\n@see UIsdkGrabInteractionRigComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "GetRootPoseConnectedConditional_Implementation", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromOpenXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromOpenXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execGetRootPoseConnectedConditional_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseConnectedConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function GetRootPoseConnectedConditional_Implementation 

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function GetRootPoseHighConfidenceConditional_Implementation 
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms
	{
		UIsdkConditional* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the status of the root pose high confidence\n   * @return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\n   * state of high confidence in the root pose.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Gets the status of the root pose high confidence\n@return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\nstate of high confidence in the root pose." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "GetRootPoseHighConfidenceConditional_Implementation", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::IsdkFromOpenXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::IsdkFromOpenXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execGetRootPoseHighConfidenceConditional_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseHighConfidenceConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function GetRootPoseHighConfidenceConditional_Implementation 

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function SetAllowInvalidTrackedData ********
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventSetAllowInvalidTrackedData_Parms
	{
		bool bInAllowInvalidTrackedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets whether to allow low confidence data.\n   * @param bInAllowInvalidTrackedData True to process low confidence data, false otherwise.\n   *\n   * Adjusting this allows you to fine-tune how the system handles uncertain tracking data, trading\n   * off between precision and responsiveness.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Sets whether to allow low confidence data.\n@param bInAllowInvalidTrackedData True to process low confidence data, false otherwise.\n\nAdjusting this allows you to fine-tune how the system handles uncertain tracking data, trading\noff between precision and responsiveness." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAllowInvalidTrackedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowInvalidTrackedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData_SetBit(void* Obj)
{
	((IsdkFromOpenXRHandDataSource_eventSetAllowInvalidTrackedData_Parms*)Obj)->bInAllowInvalidTrackedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData = { "bInAllowInvalidTrackedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkFromOpenXRHandDataSource_eventSetAllowInvalidTrackedData_Parms), &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "SetAllowInvalidTrackedData", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::IsdkFromOpenXRHandDataSource_eventSetAllowInvalidTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::IsdkFromOpenXRHandDataSource_eventSetAllowInvalidTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execSetAllowInvalidTrackedData)
{
	P_GET_UBOOL(Z_Param_bInAllowInvalidTrackedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowInvalidTrackedData(Z_Param_bInAllowInvalidTrackedData);
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function SetAllowInvalidTrackedData **********

// ********** Begin Class UIsdkFromOpenXRHandDataSource Function SetMotionController ***************
struct Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics
{
	struct IsdkFromOpenXRHandDataSource_eventSetMotionController_Parms
	{
		UMotionControllerComponent* InMotionController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Assigns a new motion controller to this data source.\n   * @param InMotionController The new motion controller component.\n   *\n   * Normally, this is handled automatically, but you can use this if you need to change the\n   * controller dynamically during gameplay.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@brief Assigns a new motion controller to this data source.\n@param InMotionController The new motion controller component.\n\nNormally, this is handled automatically, but you can use this if you need to change the\ncontroller dynamically during gameplay." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMotionController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::NewProp_InMotionController = { "InMotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRHandDataSource_eventSetMotionController_Parms, InMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMotionController_MetaData), NewProp_InMotionController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::NewProp_InMotionController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, nullptr, "SetMotionController", Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::IsdkFromOpenXRHandDataSource_eventSetMotionController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::IsdkFromOpenXRHandDataSource_eventSetMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRHandDataSource::execSetMotionController)
{
	P_GET_OBJECT(UMotionControllerComponent,Z_Param_InMotionController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionController(Z_Param_InMotionController);
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRHandDataSource Function SetMotionController *****************

// ********** Begin Class UIsdkFromOpenXRHandDataSource ********************************************
void UIsdkFromOpenXRHandDataSource::StaticRegisterNativesUIsdkFromOpenXRHandDataSource()
{
	UClass* Class = UIsdkFromOpenXRHandDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllowInvalidTrackedData", &UIsdkFromOpenXRHandDataSource::execGetAllowInvalidTrackedData },
		{ "GetMotionController", &UIsdkFromOpenXRHandDataSource::execGetMotionController },
		{ "GetRootPoseConnectedConditional_Implementation", &UIsdkFromOpenXRHandDataSource::execGetRootPoseConnectedConditional_Implementation },
		{ "GetRootPoseHighConfidenceConditional_Implementation", &UIsdkFromOpenXRHandDataSource::execGetRootPoseHighConfidenceConditional_Implementation },
		{ "SetAllowInvalidTrackedData", &UIsdkFromOpenXRHandDataSource::execSetAllowInvalidTrackedData },
		{ "SetMotionController", &UIsdkFromOpenXRHandDataSource::execSetMotionController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource;
UClass* UIsdkFromOpenXRHandDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFromOpenXRHandDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFromOpenXRHandDataSource"),
			Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFromOpenXRHandDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_NoRegister()
{
	return UIsdkFromOpenXRHandDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkFromOpenXRHandDataSource\n * @brief Manages OpenXR hand tracking data, integrating OpenXR pointer and root poses into your VR\n * project.\n *\n * This class facilitates the integration of OpenXR hand tracking data by providing access to\n * essential information such as the hand's pointer and root poses. It ensures that this data is\n * updated each frame, maintaining its relevance throughout the application's lifecycle. An instance\n * of this data source is created in the Interaction SDK's prebuilt rig component via\n * UIsdkTrackedDataSourceRigComponent.\n *\n * @see UIsdkExternalHandDataSource\n * @see IIsdkIHandPointerPose\n * @see IIsdkIRootPose\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
		{ "ToolTip", "@class UIsdkFromOpenXRHandDataSource\n@brief Manages OpenXR hand tracking data, integrating OpenXR pointer and root poses into your VR\nproject.\n\nThis class facilitates the integration of OpenXR hand tracking data by providing access to\nessential information such as the hand's pointer and root poses. It ensures that this data is\nupdated each frame, maintaining its relevance throughout the application's lifecycle. An instance\nof this data source is created in the Interaction SDK's prebuilt rig component via\nUIsdkTrackedDataSourceRigComponent.\n\n@see UIsdkExternalHandDataSource\n@see IIsdkIHandPointerPose\n@see IIsdkIRootPose\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLowConfidenceData_MetaData[] = {
		{ "BlueprintGetter", "GetAllowInvalidTrackedData" },
		{ "BlueprintSetter", "SetAllowInvalidTrackedData" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[] = {
		{ "BlueprintGetter", "GetMotionController" },
		{ "BlueprintSetter", "SetMotionController" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseHighConfidence_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultJointRadii_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRHandDataSource.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowLowConfidenceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLowConfidenceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseConnected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseHighConfidence;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultJointRadii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultJointRadii;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetAllowInvalidTrackedData, "GetAllowInvalidTrackedData" }, // 3802752621
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetMotionController, "GetMotionController" }, // 2885685133
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseConnectedConditional_Implementation, "GetRootPoseConnectedConditional_Implementation" }, // 1003003454
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation, "GetRootPoseHighConfidenceConditional_Implementation" }, // 334158982
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetAllowInvalidTrackedData, "SetAllowInvalidTrackedData" }, // 1432985094
		{ &Z_Construct_UFunction_UIsdkFromOpenXRHandDataSource_SetMotionController, "SetMotionController" }, // 2927891751
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFromOpenXRHandDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData_SetBit(void* Obj)
{
	((UIsdkFromOpenXRHandDataSource*)Obj)->bAllowLowConfidenceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData = { "bAllowLowConfidenceData", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkFromOpenXRHandDataSource), &Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLowConfidenceData_MetaData), NewProp_bAllowLowConfidenceData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x004100000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRHandDataSource, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_MetaData), NewProp_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_IsRootPoseConnected = { "IsRootPoseConnected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRHandDataSource, IsRootPoseConnected), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseConnected_MetaData), NewProp_IsRootPoseConnected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_IsRootPoseHighConfidence = { "IsRootPoseHighConfidence", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRHandDataSource, IsRootPoseHighConfidence), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseHighConfidence_MetaData), NewProp_IsRootPoseHighConfidence_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_DefaultJointRadii_Inner = { "DefaultJointRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_DefaultJointRadii = { "DefaultJointRadii", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRHandDataSource, DefaultJointRadii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultJointRadii_MetaData), NewProp_DefaultJointRadii_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_IsRootPoseConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_IsRootPoseHighConfidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_DefaultJointRadii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::NewProp_DefaultJointRadii,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromOpenXRHandDataSource, IIsdkIHandPointerPose), false },  // 262544849
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromOpenXRHandDataSource, IIsdkIRootPose), false },  // 2159373520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::ClassParams = {
	&UIsdkFromOpenXRHandDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFromOpenXRHandDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFromOpenXRHandDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFromOpenXRHandDataSource);
UIsdkFromOpenXRHandDataSource::~UIsdkFromOpenXRHandDataSource() {}
// ********** End Class UIsdkFromOpenXRHandDataSource **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h__Script_IsdkDataSourcesOpenXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFromOpenXRHandDataSource, UIsdkFromOpenXRHandDataSource::StaticClass, TEXT("UIsdkFromOpenXRHandDataSource"), &Z_Registration_Info_UClass_UIsdkFromOpenXRHandDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFromOpenXRHandDataSource), 3314528331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h__Script_IsdkDataSourcesOpenXR_2569706977(TEXT("/Script/IsdkDataSourcesOpenXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRHandDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
