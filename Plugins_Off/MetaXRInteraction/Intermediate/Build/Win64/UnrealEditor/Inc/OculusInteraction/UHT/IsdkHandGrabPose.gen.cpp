// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkHandGrabPose.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandGrabPose() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabPose();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandGrabPose Function DestroyDebugVisual ****************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Destroys the generated debug visual, if instantiated */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Destroys the generated debug visual, if instantiated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "DestroyDebugVisual", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execDestroyDebugVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyDebugVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function DestroyDebugVisual ******************************

// ********** Begin Class UIsdkHandGrabPose Function GetDebugVisual ********************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics
{
	struct IsdkHandGrabPose_eventGetDebugVisual_Parms
	{
		UIsdkHandMeshComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionISDK" },
		{ "Comment", "/* Returns reference to Debug Hand Visual */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Returns reference to Debug Hand Visual" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabPose_eventGetDebugVisual_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "GetDebugVisual", Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::IsdkHandGrabPose_eventGetDebugVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::IsdkHandGrabPose_eventGetDebugVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execGetDebugVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandMeshComponent**)Z_Param__Result=P_THIS->GetDebugVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function GetDebugVisual **********************************

// ********** Begin Class UIsdkHandGrabPose Function GetMirrorHandGrabPose *************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics
{
	struct IsdkHandGrabPose_eventGetMirrorHandGrabPose_Parms
	{
		UIsdkHandGrabPose* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionISDK" },
		{ "Comment", "/* Returns the hand grab pose automatically generated as a mirror for this hand grab pose*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Returns the hand grab pose automatically generated as a mirror for this hand grab pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabPose_eventGetMirrorHandGrabPose_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandGrabPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "GetMirrorHandGrabPose", Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::IsdkHandGrabPose_eventGetMirrorHandGrabPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::IsdkHandGrabPose_eventGetMirrorHandGrabPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execGetMirrorHandGrabPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandGrabPose**)Z_Param__Result=P_THIS->GetMirrorHandGrabPose();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function GetMirrorHandGrabPose ***************************

// ********** Begin Class UIsdkHandGrabPose Function GetMirrorHandPoseData *************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics
{
	struct IsdkHandGrabPose_eventGetMirrorHandPoseData_Parms
	{
		UIsdkHandPoseData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionISDK" },
		{ "Comment", "/* Returns the hand pose data automatically generated as a mirror for this hand grab pose */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Returns the hand pose data automatically generated as a mirror for this hand grab pose" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandGrabPose_eventGetMirrorHandPoseData_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "GetMirrorHandPoseData", Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::IsdkHandGrabPose_eventGetMirrorHandPoseData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::IsdkHandGrabPose_eventGetMirrorHandPoseData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execGetMirrorHandPoseData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandPoseData**)Z_Param__Result=P_THIS->GetMirrorHandPoseData();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function GetMirrorHandPoseData ***************************

// ********** Begin Class UIsdkHandGrabPose Function InitializeDebugVisual *************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics
{
	struct IsdkHandGrabPose_eventInitializeDebugVisual_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Generates a new debug hand visual (UIsdkHandMeshComponent), utilizing the set hand grab data.\n   * Destroys the previous visual if it exists */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Generates a new debug hand visual (UIsdkHandMeshComponent), utilizing the set hand grab data.\n  * Destroys the previous visual if it exists" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandGrabPose_eventInitializeDebugVisual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandGrabPose_eventInitializeDebugVisual_Parms), &Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "InitializeDebugVisual", Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::IsdkHandGrabPose_eventInitializeDebugVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::IsdkHandGrabPose_eventInitializeDebugVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execInitializeDebugVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeDebugVisual();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function InitializeDebugVisual ***************************

// ********** Begin Class UIsdkHandGrabPose Function IsDebugVisualActive ***************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics
{
	struct IsdkHandGrabPose_eventIsDebugVisualActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionISDK" },
		{ "Comment", "/* Returns true if the Debug Visual HandMeshComponent is spawned and valid*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Returns true if the Debug Visual HandMeshComponent is spawned and valid" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandGrabPose_eventIsDebugVisualActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandGrabPose_eventIsDebugVisualActive_Parms), &Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "IsDebugVisualActive", Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::IsdkHandGrabPose_eventIsDebugVisualActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::IsdkHandGrabPose_eventIsDebugVisualActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execIsDebugVisualActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDebugVisualActive();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function IsDebugVisualActive *****************************

// ********** Begin Class UIsdkHandGrabPose Function ToggleHandPoseEditing *************************
struct Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Toggles ability to edit this hand grab pose in the view port. It is recommended to only have\n   * one hand grab pose set to be edited at a time.*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Toggles ability to edit this hand grab pose in the view port. It is recommended to only have\n  * one hand grab pose set to be edited at a time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandGrabPose, nullptr, "ToggleHandPoseEditing", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandGrabPose::execToggleHandPoseEditing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleHandPoseEditing();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandGrabPose Function ToggleHandPoseEditing ***************************

// ********** Begin Class UIsdkHandGrabPose ********************************************************
void UIsdkHandGrabPose::StaticRegisterNativesUIsdkHandGrabPose()
{
	UClass* Class = UIsdkHandGrabPose::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyDebugVisual", &UIsdkHandGrabPose::execDestroyDebugVisual },
		{ "GetDebugVisual", &UIsdkHandGrabPose::execGetDebugVisual },
		{ "GetMirrorHandGrabPose", &UIsdkHandGrabPose::execGetMirrorHandGrabPose },
		{ "GetMirrorHandPoseData", &UIsdkHandGrabPose::execGetMirrorHandPoseData },
		{ "InitializeDebugVisual", &UIsdkHandGrabPose::execInitializeDebugVisual },
		{ "IsDebugVisualActive", &UIsdkHandGrabPose::execIsDebugVisualActive },
		{ "ToggleHandPoseEditing", &UIsdkHandGrabPose::execToggleHandPoseEditing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandGrabPose;
UClass* UIsdkHandGrabPose::GetPrivateStaticClass()
{
	using TClass = UIsdkHandGrabPose;
	if (!Z_Registration_Info_UClass_UIsdkHandGrabPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandGrabPose"),
			Z_Registration_Info_UClass_UIsdkHandGrabPose.InnerSingleton,
			StaticRegisterNativesUIsdkHandGrabPose,
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
	return Z_Registration_Info_UClass_UIsdkHandGrabPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandGrabPose_NoRegister()
{
	return UIsdkHandGrabPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandGrabPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/* SceneComponent indicating where and with what pose a hand grab could snap to */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "SceneComponent indicating where and with what pose a hand grab could snap to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandPoseEditingEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandGrabPoseProperties_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Primary properties that dictate the behavior of the Hand Grab Pose */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Primary properties that dictate the behavior of the Hand Grab Pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisualInEditor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Whether or not to show the visualized hand pose data in Editor */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Whether or not to show the visualized hand pose data in Editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDebugVisualOnPlay_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Whether or not to destroy this visualized hand pose when BeginPlay happens */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Whether or not to destroy this visualized hand pose when BeginPlay happens" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPoseDisabled_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Disable this Pose from Being Selected*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Disable this Pose from Being Selected" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseData_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Hand Pose Data asset to use for this Grab Pose */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
		{ "ToolTip", "Hand Pose Data asset to use for this Grab Pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugHandVisual_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorHandPoseData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManualMirroredGrabPose_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkHandGrabPose.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHandPoseEditingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandPoseEditingEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandGrabPoseProperties;
	static void NewProp_bShowDebugVisualInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisualInEditor;
	static void NewProp_bRemoveDebugVisualOnPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDebugVisualOnPlay;
	static void NewProp_bPoseDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPoseDisabled;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandPoseData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugHandVisual;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorHandPoseData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManualMirroredGrabPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_DestroyDebugVisual, "DestroyDebugVisual" }, // 3991032194
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_GetDebugVisual, "GetDebugVisual" }, // 1989782960
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandGrabPose, "GetMirrorHandGrabPose" }, // 1098103351
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_GetMirrorHandPoseData, "GetMirrorHandPoseData" }, // 1870673335
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_InitializeDebugVisual, "InitializeDebugVisual" }, // 3529074263
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_IsDebugVisualActive, "IsDebugVisualActive" }, // 1923140471
		{ &Z_Construct_UFunction_UIsdkHandGrabPose_ToggleHandPoseEditing, "ToggleHandPoseEditing" }, // 1638384934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandGrabPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bHandPoseEditingEnabled_SetBit(void* Obj)
{
	((UIsdkHandGrabPose*)Obj)->bHandPoseEditingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bHandPoseEditingEnabled = { "bHandPoseEditingEnabled", nullptr, (EPropertyFlags)0x0090000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandGrabPose), &Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bHandPoseEditingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandPoseEditingEnabled_MetaData), NewProp_bHandPoseEditingEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_HandGrabPoseProperties = { "HandGrabPoseProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, HandGrabPoseProperties), Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandGrabPoseProperties_MetaData), NewProp_HandGrabPoseProperties_MetaData) }; // 927962901
void Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bShowDebugVisualInEditor_SetBit(void* Obj)
{
	((UIsdkHandGrabPose*)Obj)->bShowDebugVisualInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bShowDebugVisualInEditor = { "bShowDebugVisualInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandGrabPose), &Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bShowDebugVisualInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugVisualInEditor_MetaData), NewProp_bShowDebugVisualInEditor_MetaData) };
void Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bRemoveDebugVisualOnPlay_SetBit(void* Obj)
{
	((UIsdkHandGrabPose*)Obj)->bRemoveDebugVisualOnPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bRemoveDebugVisualOnPlay = { "bRemoveDebugVisualOnPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandGrabPose), &Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bRemoveDebugVisualOnPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRemoveDebugVisualOnPlay_MetaData), NewProp_bRemoveDebugVisualOnPlay_MetaData) };
void Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bPoseDisabled_SetBit(void* Obj)
{
	((UIsdkHandGrabPose*)Obj)->bPoseDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bPoseDisabled = { "bPoseDisabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandGrabPose), &Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bPoseDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPoseDisabled_MetaData), NewProp_bPoseDisabled_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_HandPoseData = { "HandPoseData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, HandPoseData), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseData_MetaData), NewProp_HandPoseData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_DebugHandVisual = { "DebugHandVisual", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, DebugHandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugHandVisual_MetaData), NewProp_DebugHandVisual_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_MirrorHandPoseData = { "MirrorHandPoseData", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, MirrorHandPoseData), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorHandPoseData_MetaData), NewProp_MirrorHandPoseData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_ManualMirroredGrabPose = { "ManualMirroredGrabPose", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandGrabPose, ManualMirroredGrabPose), Z_Construct_UClass_UIsdkHandGrabPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManualMirroredGrabPose_MetaData), NewProp_ManualMirroredGrabPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandGrabPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bHandPoseEditingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_HandGrabPoseProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bShowDebugVisualInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bRemoveDebugVisualOnPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_bPoseDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_HandPoseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_DebugHandVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_MirrorHandPoseData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandGrabPose_Statics::NewProp_ManualMirroredGrabPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabPose_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandGrabPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandGrabPose_Statics::ClassParams = {
	&UIsdkHandGrabPose::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandGrabPose_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabPose_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandGrabPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandGrabPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandGrabPose()
{
	if (!Z_Registration_Info_UClass_UIsdkHandGrabPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandGrabPose.OuterSingleton, Z_Construct_UClass_UIsdkHandGrabPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandGrabPose.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandGrabPose);
UIsdkHandGrabPose::~UIsdkHandGrabPose() {}
// ********** End Class UIsdkHandGrabPose **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandGrabPose, UIsdkHandGrabPose::StaticClass, TEXT("UIsdkHandGrabPose"), &Z_Registration_Info_UClass_UIsdkHandGrabPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandGrabPose), 380428657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h__Script_OculusInteraction_593766403(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkHandGrabPose_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
