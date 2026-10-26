// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkRayInteractor.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRayInteractor() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkRayInteractor_Config();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayInteractor Function GetCollisionInfo *****************************
struct Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics
{
	struct IsdkRayInteractor_eventGetCollisionInfo_Parms
	{
		FIsdkOptionalSurfaceHit ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the last collision surface hit information produced by the interactor raycasting */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Returns the last collision surface hit information produced by the interactor raycasting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractor_eventGetCollisionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3485887102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "GetCollisionInfo", Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::IsdkRayInteractor_eventGetCollisionInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::IsdkRayInteractor_eventGetCollisionInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execGetCollisionInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkOptionalSurfaceHit*)Z_Param__Result=P_THIS->GetCollisionInfo();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function GetCollisionInfo *******************************

// ********** Begin Class UIsdkRayInteractor Function GetConfig ************************************
struct Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics
{
	struct IsdkRayInteractor_eventGetConfig_Parms
	{
		FIsdkRayInteractor_Config ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the current ray interactor configuration struct */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Returns the current ray interactor configuration struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractor_eventGetConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkRayInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 420567941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "GetConfig", Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::IsdkRayInteractor_eventGetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::IsdkRayInteractor_eventGetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_GetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_GetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execGetConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkRayInteractor_Config*)Z_Param__Result=P_THIS->GetConfig();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function GetConfig **************************************

// ********** Begin Class UIsdkRayInteractor Function GetHandPointerPose ***************************
struct Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics
{
	struct IsdkRayInteractor_eventGetHandPointerPose_Parms
	{
		TScriptInterface<IIsdkIHandPointerPose> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the object implementing IIsdkIHandPointerPose that is the current pose used for\n   * tracking the hand pointer pose */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Returns the object implementing IIsdkIHandPointerPose that is the current pose used for\n  * tracking the hand pointer pose" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractor_eventGetHandPointerPose_Parms, ReturnValue), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "GetHandPointerPose", Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::IsdkRayInteractor_eventGetHandPointerPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::IsdkRayInteractor_eventGetHandPointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execGetHandPointerPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIHandPointerPose>*)Z_Param__Result=P_THIS->GetHandPointerPose();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function GetHandPointerPose *****************************

// ********** Begin Class UIsdkRayInteractor Function Select ***************************************
struct Z_Construct_UFunction_UIsdkRayInteractor_Select_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Attempts to trigger a raycast selection with the given interactor position\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "@brief Attempts to trigger a raycast selection with the given interactor position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_Select_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "Select", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_Select_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_Select_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_Select()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_Select_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execSelect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Select();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function Select *****************************************

// ********** Begin Class UIsdkRayInteractor Function SetConfig ************************************
struct Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics
{
	struct IsdkRayInteractor_eventSetConfig_Parms
	{
		FIsdkRayInteractor_Config InConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the current ray interactor configuration via the passed struct */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Sets the current ray interactor configuration via the passed struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractor_eventSetConfig_Parms, InConfig), Z_Construct_UScriptStruct_FIsdkRayInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConfig_MetaData), NewProp_InConfig_MetaData) }; // 420567941
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::NewProp_InConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "SetConfig", Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::IsdkRayInteractor_eventSetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::IsdkRayInteractor_eventSetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_SetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_SetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execSetConfig)
{
	P_GET_STRUCT_REF(FIsdkRayInteractor_Config,Z_Param_Out_InConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConfig(Z_Param_Out_InConfig);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function SetConfig **************************************

// ********** Begin Class UIsdkRayInteractor Function SetHandPointerPose ***************************
struct Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics
{
	struct IsdkRayInteractor_eventSetHandPointerPose_Parms
	{
		TScriptInterface<IIsdkIHandPointerPose> InHandPointerPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the object implementing IIsdkIHandPointerPose to be used for tracking hand pointer pose */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Sets the object implementing IIsdkIHandPointerPose to be used for tracking hand pointer pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandPointerPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InHandPointerPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::NewProp_InHandPointerPose = { "InHandPointerPose", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractor_eventSetHandPointerPose_Parms, InHandPointerPose), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandPointerPose_MetaData), NewProp_InHandPointerPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::NewProp_InHandPointerPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "SetHandPointerPose", Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::IsdkRayInteractor_eventSetHandPointerPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::IsdkRayInteractor_eventSetHandPointerPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execSetHandPointerPose)
{
	P_GET_TINTERFACE_REF(IIsdkIHandPointerPose,Z_Param_Out_InHandPointerPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandPointerPose(Z_Param_Out_InHandPointerPose);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function SetHandPointerPose *****************************

// ********** Begin Class UIsdkRayInteractor Function Unselect *************************************
struct Z_Construct_UFunction_UIsdkRayInteractor_Unselect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Triggers the deselection process\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "@brief Triggers the deselection process" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractor_Unselect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractor, nullptr, "Unselect", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractor_Unselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractor_Unselect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkRayInteractor_Unselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractor_Unselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractor::execUnselect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Unselect();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractor Function Unselect ***************************************

// ********** Begin Class UIsdkRayInteractor *******************************************************
void UIsdkRayInteractor::StaticRegisterNativesUIsdkRayInteractor()
{
	UClass* Class = UIsdkRayInteractor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCollisionInfo", &UIsdkRayInteractor::execGetCollisionInfo },
		{ "GetConfig", &UIsdkRayInteractor::execGetConfig },
		{ "GetHandPointerPose", &UIsdkRayInteractor::execGetHandPointerPose },
		{ "Select", &UIsdkRayInteractor::execSelect },
		{ "SetConfig", &UIsdkRayInteractor::execSetConfig },
		{ "SetHandPointerPose", &UIsdkRayInteractor::execSetHandPointerPose },
		{ "Unselect", &UIsdkRayInteractor::execUnselect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayInteractor;
UClass* UIsdkRayInteractor::GetPrivateStaticClass()
{
	using TClass = UIsdkRayInteractor;
	if (!Z_Registration_Info_UClass_UIsdkRayInteractor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRayInteractor"),
			Z_Registration_Info_UClass_UIsdkRayInteractor.InnerSingleton,
			StaticRegisterNativesUIsdkRayInteractor,
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
	return Z_Registration_Info_UClass_UIsdkRayInteractor.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister()
{
	return UIsdkRayInteractor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayInteractor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkRayInteractor\n * @brief IsdkRayInteractor drives the ability for a pawn to interact with actors that have an\n * IsdkRayInteractable attached to them.\n *\n * Interactions are initiated by pointing at them with a directed hand raycast or cursor. Passes\n * data to/from the API instance.\n *\n * @see UIsdkInteractorComponent\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Ray Interactor" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkRayInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "@class UIsdkRayInteractor\n@brief IsdkRayInteractor drives the ability for a pawn to interact with actors that have an\nIsdkRayInteractable attached to them.\n\nInteractions are initiated by pointing at them with a directed hand raycast or cursor. Passes\ndata to/from the API instance.\n\n@see UIsdkInteractorComponent\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectStrength_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugVisuals_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPointerPose_MetaData[] = {
		{ "BlueprintGetter", "GetHandPointerPose" },
		{ "BlueprintSetter", "SetHandPointerPose" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
		{ "ToolTip", "Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "BlueprintGetter", "GetConfig" },
		{ "BlueprintSetter", "SetConfig" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[] = {
		{ "BlueprintGetter", "GetCollisionInfo" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectStrength;
	static void NewProp_bDisableDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugVisuals;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandPointerPose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRayInteractor_GetCollisionInfo, "GetCollisionInfo" }, // 3394482446
		{ &Z_Construct_UFunction_UIsdkRayInteractor_GetConfig, "GetConfig" }, // 564238428
		{ &Z_Construct_UFunction_UIsdkRayInteractor_GetHandPointerPose, "GetHandPointerPose" }, // 2031363252
		{ &Z_Construct_UFunction_UIsdkRayInteractor_Select, "Select" }, // 879096547
		{ &Z_Construct_UFunction_UIsdkRayInteractor_SetConfig, "SetConfig" }, // 1439336498
		{ &Z_Construct_UFunction_UIsdkRayInteractor_SetHandPointerPose, "SetHandPointerPose" }, // 1325387977
		{ &Z_Construct_UFunction_UIsdkRayInteractor_Unselect, "Unselect" }, // 1967504407
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayInteractor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_SelectStrength = { "SelectStrength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractor, SelectStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectStrength_MetaData), NewProp_SelectStrength_MetaData) };
void Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_bDisableDebugVisuals_SetBit(void* Obj)
{
	((UIsdkRayInteractor*)Obj)->bDisableDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_bDisableDebugVisuals = { "bDisableDebugVisuals", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkRayInteractor), &Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_bDisableDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugVisuals_MetaData), NewProp_bDisableDebugVisuals_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_HandPointerPose = { "HandPointerPose", nullptr, (EPropertyFlags)0x0044000000000805, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractor, HandPointerPose), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPointerPose_MetaData), NewProp_HandPointerPose_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractor, Config), Z_Construct_UScriptStruct_FIsdkRayInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 420567941
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractor, CollisionInfo), Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionInfo_MetaData), NewProp_CollisionInfo_MetaData) }; // 3485887102
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRayInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_SelectStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_bDisableDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_HandPointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractor_Statics::NewProp_CollisionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRayInteractor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkInteractorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayInteractor_Statics::ClassParams = {
	&UIsdkRayInteractor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRayInteractor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractor_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayInteractor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRayInteractor()
{
	if (!Z_Registration_Info_UClass_UIsdkRayInteractor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayInteractor.OuterSingleton, Z_Construct_UClass_UIsdkRayInteractor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayInteractor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRayInteractor);
UIsdkRayInteractor::~UIsdkRayInteractor() {}
// ********** End Class UIsdkRayInteractor *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayInteractor, UIsdkRayInteractor::StaticClass, TEXT("UIsdkRayInteractor"), &Z_Registration_Info_UClass_UIsdkRayInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayInteractor), 2576628872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h__Script_OculusInteraction_749424208(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractor_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
