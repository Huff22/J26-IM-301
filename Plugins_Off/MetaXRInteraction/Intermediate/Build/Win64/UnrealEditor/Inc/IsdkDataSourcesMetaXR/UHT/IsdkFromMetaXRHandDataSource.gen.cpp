// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkFromMetaXRHandDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkFromMetaXRHandDataSource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource();
ISDKDATASOURCESMETAXR_API UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_NoRegister();
ISDKDATASOURCESMETAXR_API UScriptStruct* Z_Construct_UScriptStruct_FBoneOVRToOXRMap();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBoneOVRToOXRMap **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap;
class UScriptStruct* FBoneOVRToOXRMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneOVRToOXRMap, (UObject*)Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR(), TEXT("BoneOVRToOXRMap"));
	}
	return Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneOVRToOXRMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR,
	nullptr,
	&NewStructOps,
	"BoneOVRToOXRMap",
	nullptr,
	0,
	sizeof(FBoneOVRToOXRMap),
	alignof(FBoneOVRToOXRMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoneOVRToOXRMap()
{
	if (!Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.InnerSingleton, Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap.InnerSingleton;
}
// ********** End ScriptStruct FBoneOVRToOXRMap ****************************************************

// ********** Begin Class UIsdkFromMetaXRHandDataSource Function GetAllowInvalidTrackedData ********
struct Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics
{
	struct IsdkFromMetaXRHandDataSource_eventGetAllowInvalidTrackedData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Checks if low confidence hand data is allowed.\n   * @return bool True if low confidence data is processed, false otherwise.\n   *\n   * The system defaults to high-confidence data for reliability. This setting is\n   * configured internally but can be adjusted if needed for specific scenarios.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "@brief Checks if low confidence hand data is allowed.\n@return bool True if low confidence data is processed, false otherwise.\n\nThe system defaults to high-confidence data for reliability. This setting is\nconfigured internally but can be adjusted if needed for specific scenarios." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkFromMetaXRHandDataSource_eventGetAllowInvalidTrackedData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkFromMetaXRHandDataSource_eventGetAllowInvalidTrackedData_Parms), &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, nullptr, "GetAllowInvalidTrackedData", Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::IsdkFromMetaXRHandDataSource_eventGetAllowInvalidTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::IsdkFromMetaXRHandDataSource_eventGetAllowInvalidTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromMetaXRHandDataSource::execGetAllowInvalidTrackedData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAllowInvalidTrackedData();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromMetaXRHandDataSource Function GetAllowInvalidTrackedData **********

// ********** Begin Class UIsdkFromMetaXRHandDataSource Function GetMotionController ***************
struct Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics
{
	struct IsdkFromMetaXRHandDataSource_eventGetMotionController_Parms
	{
		UMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Accesses the motion controller component used by this hand data source.\n   * @return UMotionControllerComponent* Pointer to the motion controller component.\n   *\n   * This provides access to the motion controller tied to the hand data source, mainly for internal\n   * use. You might use this if you're doing advanced modifications or debugging.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromMetaXRHandDataSource_eventGetMotionController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, nullptr, "GetMotionController", Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::IsdkFromMetaXRHandDataSource_eventGetMotionController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::IsdkFromMetaXRHandDataSource_eventGetMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromMetaXRHandDataSource::execGetMotionController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionController();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromMetaXRHandDataSource Function GetMotionController *****************

// ********** Begin Class UIsdkFromMetaXRHandDataSource Function GetRootPoseConnectedConditional_Implementation 
struct Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics
{
	struct IsdkFromMetaXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms
	{
		UIsdkConditional* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the status of the root pose connection.\n   * @return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\n   * connection status of the root pose.\n   *\n   * This method checks if the root pose connection is currently active and valid. The returned\n   * `UIsdkConditional` object encapsulates this status and can trigger events when the connection\n   * status changes. For example, this is used to check if the hand should be visible and if the\n   * interaction rig components should be enabled/disabled.\n   * @see UIsdkTrackedDataSourceRigComponent\n   * @see UIsdkPokeInteractionRigComponent\n   * @see UIsdkGrabInteractionRigComponent\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "@brief Retrieves the status of the root pose connection.\n@return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\nconnection status of the root pose.\n\nThis method checks if the root pose connection is currently active and valid. The returned\n`UIsdkConditional` object encapsulates this status and can trigger events when the connection\nstatus changes. For example, this is used to check if the hand should be visible and if the\ninteraction rig components should be enabled/disabled.\n@see UIsdkTrackedDataSourceRigComponent\n@see UIsdkPokeInteractionRigComponent\n@see UIsdkGrabInteractionRigComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromMetaXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, nullptr, "GetRootPoseConnectedConditional_Implementation", Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromMetaXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromMetaXRHandDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromMetaXRHandDataSource::execGetRootPoseConnectedConditional_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseConnectedConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromMetaXRHandDataSource Function GetRootPoseConnectedConditional_Implementation 

// ********** Begin Class UIsdkFromMetaXRHandDataSource Function GetRootPoseHighConfidenceConditional_Implementation 
struct Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics
{
	struct IsdkFromMetaXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms
	{
		UIsdkConditional* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets the status of the root pose high confidence\n   * @return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\n   * state of high confidence in the root pose.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "@brief Gets the status of the root pose high confidence\n@return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\nstate of high confidence in the root pose." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromMetaXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, nullptr, "GetRootPoseHighConfidenceConditional_Implementation", Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::IsdkFromMetaXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::IsdkFromMetaXRHandDataSource_eventGetRootPoseHighConfidenceConditional_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromMetaXRHandDataSource::execGetRootPoseHighConfidenceConditional_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseHighConfidenceConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromMetaXRHandDataSource Function GetRootPoseHighConfidenceConditional_Implementation 

// ********** Begin Class UIsdkFromMetaXRHandDataSource Function SetAllowInvalidTrackedData ********
struct Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics
{
	struct IsdkFromMetaXRHandDataSource_eventSetAllowInvalidTrackedData_Parms
	{
		bool bInAllowInvalidTrackedData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets whether to allow low confidence data.\n   * @param bInAllowInvalidTrackedData True to process low confidence data, false otherwise.\n   *\n   * Adjusting this allows you to fine-tune how the system handles uncertain tracking data, trading\n   * off between precision and responsiveness.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "@brief Sets whether to allow low confidence data.\n@param bInAllowInvalidTrackedData True to process low confidence data, false otherwise.\n\nAdjusting this allows you to fine-tune how the system handles uncertain tracking data, trading\noff between precision and responsiveness." },
	};
#endif // WITH_METADATA
	static void NewProp_bInAllowInvalidTrackedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAllowInvalidTrackedData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData_SetBit(void* Obj)
{
	((IsdkFromMetaXRHandDataSource_eventSetAllowInvalidTrackedData_Parms*)Obj)->bInAllowInvalidTrackedData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData = { "bInAllowInvalidTrackedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkFromMetaXRHandDataSource_eventSetAllowInvalidTrackedData_Parms), &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::NewProp_bInAllowInvalidTrackedData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, nullptr, "SetAllowInvalidTrackedData", Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::IsdkFromMetaXRHandDataSource_eventSetAllowInvalidTrackedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::IsdkFromMetaXRHandDataSource_eventSetAllowInvalidTrackedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromMetaXRHandDataSource::execSetAllowInvalidTrackedData)
{
	P_GET_UBOOL(Z_Param_bInAllowInvalidTrackedData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAllowInvalidTrackedData(Z_Param_bInAllowInvalidTrackedData);
	P_NATIVE_END;
}
// ********** End Class UIsdkFromMetaXRHandDataSource Function SetAllowInvalidTrackedData **********

// ********** Begin Class UIsdkFromMetaXRHandDataSource ********************************************
void UIsdkFromMetaXRHandDataSource::StaticRegisterNativesUIsdkFromMetaXRHandDataSource()
{
	UClass* Class = UIsdkFromMetaXRHandDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllowInvalidTrackedData", &UIsdkFromMetaXRHandDataSource::execGetAllowInvalidTrackedData },
		{ "GetMotionController", &UIsdkFromMetaXRHandDataSource::execGetMotionController },
		{ "GetRootPoseConnectedConditional_Implementation", &UIsdkFromMetaXRHandDataSource::execGetRootPoseConnectedConditional_Implementation },
		{ "GetRootPoseHighConfidenceConditional_Implementation", &UIsdkFromMetaXRHandDataSource::execGetRootPoseHighConfidenceConditional_Implementation },
		{ "SetAllowInvalidTrackedData", &UIsdkFromMetaXRHandDataSource::execSetAllowInvalidTrackedData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource;
UClass* UIsdkFromMetaXRHandDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFromMetaXRHandDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFromMetaXRHandDataSource"),
			Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFromMetaXRHandDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_NoRegister()
{
	return UIsdkFromMetaXRHandDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkFromMetaXRHandDataSource\n * @brief Manages MetaXR plugin hand tracking data, integrating pointer and root poses into your VR\n * project.\n *\n * This class facilitates the integration of MetaXR plugin hand tracking data by providing access to\n * essential information such as the hand's pointer and root poses. It ensures that this data is\n * updated each frame, maintaining its relevance throughout the application's lifecycle. An instance\n * of this data source is created in the Interaction SDK's prebuilt rig component via\n * UIsdkTrackedDataSourceRigComponent.\n *\n * @see UIsdkExternalHandDataSource\n * @see IIsdkIHandPointerPose\n * @see IIsdkIRootPose\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK From MetaXR Hand Data Source" },
		{ "IncludePath", "DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "@class UIsdkFromMetaXRHandDataSource\n@brief Manages MetaXR plugin hand tracking data, integrating pointer and root poses into your VR\nproject.\n\nThis class facilitates the integration of MetaXR plugin hand tracking data by providing access to\nessential information such as the hand's pointer and root poses. It ensures that this data is\nupdated each frame, maintaining its relevance throughout the application's lifecycle. An instance\nof this data source is created in the Interaction SDK's prebuilt rig component via\nUIsdkTrackedDataSourceRigComponent.\n\n@see UIsdkExternalHandDataSource\n@see IIsdkIHandPointerPose\n@see IIsdkIRootPose\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLowConfidenceData_MetaData[] = {
		{ "BlueprintGetter", "GetAllowInvalidTrackedData" },
		{ "BlueprintSetter", "SetAllowInvalidTrackedData" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[] = {
		{ "BlueprintGetter", "GetMotionController" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseHighConfidence_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OculusXrHandComponent_MetaData[] = {
		{ "Comment", "// Required to generate the \"OpenXR\" Data\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromMetaXRHandDataSource.h" },
		{ "ToolTip", "Required to generate the \"OpenXR\" Data" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllowLowConfidenceData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLowConfidenceData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseConnected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseHighConfidence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OculusXrHandComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetAllowInvalidTrackedData, "GetAllowInvalidTrackedData" }, // 2322817923
		{ &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetMotionController, "GetMotionController" }, // 3240701239
		{ &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseConnectedConditional_Implementation, "GetRootPoseConnectedConditional_Implementation" }, // 1241105106
		{ &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_GetRootPoseHighConfidenceConditional_Implementation, "GetRootPoseHighConfidenceConditional_Implementation" }, // 176828193
		{ &Z_Construct_UFunction_UIsdkFromMetaXRHandDataSource_SetAllowInvalidTrackedData, "SetAllowInvalidTrackedData" }, // 427425729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFromMetaXRHandDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData_SetBit(void* Obj)
{
	((UIsdkFromMetaXRHandDataSource*)Obj)->bAllowLowConfidenceData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData = { "bAllowLowConfidenceData", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkFromMetaXRHandDataSource), &Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowLowConfidenceData_MetaData), NewProp_bAllowLowConfidenceData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x014500000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromMetaXRHandDataSource, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_MetaData), NewProp_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_IsRootPoseConnected = { "IsRootPoseConnected", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromMetaXRHandDataSource, IsRootPoseConnected), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseConnected_MetaData), NewProp_IsRootPoseConnected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_IsRootPoseHighConfidence = { "IsRootPoseHighConfidence", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromMetaXRHandDataSource, IsRootPoseHighConfidence), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseHighConfidence_MetaData), NewProp_IsRootPoseHighConfidence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_OculusXrHandComponent = { "OculusXrHandComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromMetaXRHandDataSource, OculusXrHandComponent), Z_Construct_UClass_UPoseableMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OculusXrHandComponent_MetaData), NewProp_OculusXrHandComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_bAllowLowConfidenceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_IsRootPoseConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_IsRootPoseHighConfidence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::NewProp_OculusXrHandComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesMetaXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromMetaXRHandDataSource, IIsdkIHandPointerPose), false },  // 262544849
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromMetaXRHandDataSource, IIsdkIRootPose), false },  // 2159373520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::ClassParams = {
	&UIsdkFromMetaXRHandDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFromMetaXRHandDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFromMetaXRHandDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFromMetaXRHandDataSource);
UIsdkFromMetaXRHandDataSource::~UIsdkFromMetaXRHandDataSource() {}
// ********** End Class UIsdkFromMetaXRHandDataSource **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoneOVRToOXRMap::StaticStruct, Z_Construct_UScriptStruct_FBoneOVRToOXRMap_Statics::NewStructOps, TEXT("BoneOVRToOXRMap"), &Z_Registration_Info_UScriptStruct_FBoneOVRToOXRMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneOVRToOXRMap), 2228679378U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFromMetaXRHandDataSource, UIsdkFromMetaXRHandDataSource::StaticClass, TEXT("UIsdkFromMetaXRHandDataSource"), &Z_Registration_Info_UClass_UIsdkFromMetaXRHandDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFromMetaXRHandDataSource), 2935553221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_1158844663(TEXT("/Script/IsdkDataSourcesMetaXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesMetaXR_Public_DataSources_IsdkFromMetaXRHandDataSource_h__Script_IsdkDataSourcesMetaXR_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
