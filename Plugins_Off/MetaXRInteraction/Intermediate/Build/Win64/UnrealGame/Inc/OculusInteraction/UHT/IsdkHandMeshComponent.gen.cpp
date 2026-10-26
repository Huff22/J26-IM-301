// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkHandMeshComponent.h"
#include "GameFramework/Actor.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandMeshComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPoseableMeshComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkSkeletonMappingState *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkSkeletonMappingState;
static UEnum* EIsdkSkeletonMappingState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkSkeletonMappingState"));
	}
	return Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkSkeletonMappingState>()
{
	return EIsdkSkeletonMappingState_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// namespace isdk::api\n" },
		{ "Invalid.Comment", "// Tried to map but failed\n" },
		{ "Invalid.Name", "EIsdkSkeletonMappingState::Invalid" },
		{ "Invalid.ToolTip", "Tried to map but failed" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "None.Comment", "// Possible to map\n" },
		{ "None.Name", "EIsdkSkeletonMappingState::None" },
		{ "None.ToolTip", "Possible to map" },
		{ "ToolTip", "namespace isdk::api" },
		{ "Valid.Comment", "// Mapping was successful\n" },
		{ "Valid.Name", "EIsdkSkeletonMappingState::Valid" },
		{ "Valid.ToolTip", "Mapping was successful" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkSkeletonMappingState::None", (int64)EIsdkSkeletonMappingState::None },
		{ "EIsdkSkeletonMappingState::Invalid", (int64)EIsdkSkeletonMappingState::Invalid },
		{ "EIsdkSkeletonMappingState::Valid", (int64)EIsdkSkeletonMappingState::Valid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkSkeletonMappingState",
	"EIsdkSkeletonMappingState",
	Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState()
{
	if (!Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkSkeletonMappingState.InnerSingleton;
}
// ********** End Enum EIsdkSkeletonMappingState ***************************************************

// ********** Begin Class UIsdkHandMeshComponent Function ClearMappingState ************************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Resets the mapping state and clears the previously set skeleton */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Resets the mapping state and clears the previously set skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "ClearMappingState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execClearMappingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearMappingState();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function ClearMappingState **************************

// ********** Begin Class UIsdkHandMeshComponent Function GetCurrentRootPose_Implementation ********
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics
{
	struct IsdkHandMeshComponent_eventGetCurrentRootPose_Implementation_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Returns the root pose of this mesh before any overrides have been applied (from\n   * IsdkIPosedMesh)\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "* @brief Returns the root pose of this mesh before any overrides have been applied (from\n* IsdkIPosedMesh)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetCurrentRootPose_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetCurrentRootPose_Implementation", Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::IsdkHandMeshComponent_eventGetCurrentRootPose_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::IsdkHandMeshComponent_eventGetCurrentRootPose_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetCurrentRootPose_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetCurrentRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetCurrentRootPose_Implementation **********

// ********** Begin Class UIsdkHandMeshComponent Function GetFinalRootPose_Implementation **********
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics
{
	struct IsdkHandMeshComponent_eventGetFinalRootPose_Implementation_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Returns the root pose of this mesh after all overrides have been applied (from\n   * IsdkIPosedMesh)\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "* @brief Returns the root pose of this mesh after all overrides have been applied (from\n* IsdkIPosedMesh)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetFinalRootPose_Implementation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetFinalRootPose_Implementation", Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::IsdkHandMeshComponent_eventGetFinalRootPose_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::IsdkHandMeshComponent_eventGetFinalRootPose_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetFinalRootPose_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetFinalRootPose_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetFinalRootPose_Implementation ************

// ********** Begin Class UIsdkHandMeshComponent Function GetHandednessFromDataSource **************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics
{
	struct IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms
	{
		EIsdkHandedness HandednessOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Get Handedness from JointDataSource */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Get Handedness from JointDataSource" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandednessOut_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandednessOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_HandednessOut_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_HandednessOut = { "HandednessOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms, HandednessOut), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(0, nullptr) }; // 49432891
void Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms), &Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_HandednessOut_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_HandednessOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetHandednessFromDataSource", Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::IsdkHandMeshComponent_eventGetHandednessFromDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetHandednessFromDataSource)
{
	P_GET_ENUM_REF(EIsdkHandedness,Z_Param_Out_HandednessOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHandednessFromDataSource((EIsdkHandedness&)(Z_Param_Out_HandednessOut));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetHandednessFromDataSource ****************

// ********** Begin Class UIsdkHandMeshComponent Function GetJointsDataSource **********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics
{
	struct IsdkHandMeshComponent_eventGetJointsDataSource_Parms
	{
		TScriptInterface<IIsdkIHandJoints> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the joints data source member variable (IsdkIHandJoints interface) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Returns the joints data source member variable (IsdkIHandJoints interface)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetJointsDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkIHandJoints_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetJointsDataSource", Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::IsdkHandMeshComponent_eventGetJointsDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::IsdkHandMeshComponent_eventGetJointsDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetJointsDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIHandJoints>*)Z_Param__Result=P_THIS->GetJointsDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetJointsDataSource ************************

// ********** Begin Class UIsdkHandMeshComponent Function GetMappingState **************************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics
{
	struct IsdkHandMeshComponent_eventGetMappingState_Parms
	{
		EIsdkSkeletonMappingState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the current mapping state enum*/" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Returns the current mapping state enum" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetMappingState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState, METADATA_PARAMS(0, nullptr) }; // 292438371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetMappingState", Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::IsdkHandMeshComponent_eventGetMappingState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::IsdkHandMeshComponent_eventGetMappingState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetMappingState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkSkeletonMappingState*)Z_Param__Result=P_THIS->GetMappingState();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetMappingState ****************************

// ********** Begin Class UIsdkHandMeshComponent Function GetPoseOverride_Implementation ***********
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics
{
	struct IsdkHandMeshComponent_eventGetPoseOverride_Implementation_Parms
	{
		UIsdkConditionalPoseOverride* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Returns the Pose Override conditional object associated with this hand mesh (from\n   * IsdkIPosedMesh)\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "* @brief Returns the Pose Override conditional object associated with this hand mesh (from\n* IsdkIPosedMesh)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetPoseOverride_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetPoseOverride_Implementation", Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::IsdkHandMeshComponent_eventGetPoseOverride_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::IsdkHandMeshComponent_eventGetPoseOverride_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetPoseOverride_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalPoseOverride**)Z_Param__Result=P_THIS->GetPoseOverride_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetPoseOverride_Implementation *************

// ********** Begin Class UIsdkHandMeshComponent Function GetRootPoseDataSource ********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics
{
	struct IsdkHandMeshComponent_eventGetRootPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIRootPose> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the root pose data source member variable (IsdkIRootPose interface) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Returns the root pose data source member variable (IsdkIRootPose interface)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetRootPoseDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetRootPoseDataSource", Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::IsdkHandMeshComponent_eventGetRootPoseDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::IsdkHandMeshComponent_eventGetRootPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetRootPoseDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIRootPose>*)Z_Param__Result=P_THIS->GetRootPoseDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetRootPoseDataSource **********************

// ********** Begin Class UIsdkHandMeshComponent Function GetRootWorldTransform ********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics
{
	struct IsdkHandMeshComponent_eventGetRootWorldTransform_Parms
	{
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventGetRootWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "GetRootWorldTransform", Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::IsdkHandMeshComponent_eventGetRootWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::IsdkHandMeshComponent_eventGetRootWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execGetRootWorldTransform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetRootWorldTransform();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function GetRootWorldTransform **********************

// ********** Begin Class UIsdkHandMeshComponent Function ResetHandPoseOverride ********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Removes the current hand pose override, will start a lerp out (if enabled on the data)*/" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Removes the current hand pose override, will start a lerp out (if enabled on the data)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "ResetHandPoseOverride", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execResetHandPoseOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHandPoseOverride();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function ResetHandPoseOverride **********************

// ********** Begin Class UIsdkHandMeshComponent Function SetHandPoseOverride **********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics
{
	struct IsdkHandMeshComponent_eventSetHandPoseOverride_Parms
	{
		UIsdkHandPoseData* PoseDataIn;
		FTransform RootOffsetIn;
		FIsdkHandGrabPoseProperties PosePropertiesIn;
		AActor* InteractableActorIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets an override with a given HandPoseData, will start a lerp in (if enabled on the data) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Sets an override with a given HandPoseData, will start a lerp in (if enabled on the data)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseDataIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootOffsetIn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosePropertiesIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractableActorIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_PoseDataIn = { "PoseDataIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetHandPoseOverride_Parms, PoseDataIn), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_RootOffsetIn = { "RootOffsetIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetHandPoseOverride_Parms, RootOffsetIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_PosePropertiesIn = { "PosePropertiesIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetHandPoseOverride_Parms, PosePropertiesIn), Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties, METADATA_PARAMS(0, nullptr) }; // 927962901
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_InteractableActorIn = { "InteractableActorIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetHandPoseOverride_Parms, InteractableActorIn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_PoseDataIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_RootOffsetIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_PosePropertiesIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::NewProp_InteractableActorIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetHandPoseOverride", Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::IsdkHandMeshComponent_eventSetHandPoseOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::IsdkHandMeshComponent_eventSetHandPoseOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetHandPoseOverride)
{
	P_GET_OBJECT(UIsdkHandPoseData,Z_Param_PoseDataIn);
	P_GET_STRUCT(FTransform,Z_Param_RootOffsetIn);
	P_GET_STRUCT_REF(FIsdkHandGrabPoseProperties,Z_Param_Out_PosePropertiesIn);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_InteractableActorIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandPoseOverride(Z_Param_PoseDataIn,Z_Param_RootOffsetIn,Z_Param_Out_PosePropertiesIn,P_ARG_GC_BARRIER(Z_Param_Out_InteractableActorIn));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetHandPoseOverride ************************

// ********** Begin Class UIsdkHandMeshComponent Function SetJointsDataSource **********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics
{
	struct IsdkHandMeshComponent_eventSetJointsDataSource_Parms
	{
		TScriptInterface<IIsdkIHandJoints> InJointsDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the joints data source member variable (IsdkIHandJoints interface) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Sets the joints data source member variable (IsdkIHandJoints interface)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InJointsDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::NewProp_InJointsDataSource = { "InJointsDataSource", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetJointsDataSource_Parms, InJointsDataSource), Z_Construct_UClass_UIsdkIHandJoints_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::NewProp_InJointsDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetJointsDataSource", Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::IsdkHandMeshComponent_eventSetJointsDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::IsdkHandMeshComponent_eventSetJointsDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetJointsDataSource)
{
	P_GET_TINTERFACE(IIsdkIHandJoints,Z_Param_InJointsDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJointsDataSource(Z_Param_InJointsDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetJointsDataSource ************************

// ********** Begin Class UIsdkHandMeshComponent Function SetMappedBoneNamesAsDefault **************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Set each value of the MappedBoneNames array to defaults for the provided hand mesh, for the\n   given hand type. */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Set each value of the MappedBoneNames array to defaults for the provided hand mesh, for the\n  given hand type." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetMappedBoneNamesAsDefault", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetMappedBoneNamesAsDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMappedBoneNamesAsDefault();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetMappedBoneNamesAsDefault ****************

// ********** Begin Class UIsdkHandMeshComponent Function SetMappedBoneNamesFromJointSourceHandedness 
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Set handedness and each value of the MappedBoneNames array using the joint source member\n   * variable */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Set handedness and each value of the MappedBoneNames array using the joint source member\n  * variable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetMappedBoneNamesFromJointSourceHandedness", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetMappedBoneNamesFromJointSourceHandedness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMappedBoneNamesFromJointSourceHandedness();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetMappedBoneNamesFromJointSourceHandedness 

// ********** Begin Class UIsdkHandMeshComponent Function SetPauseSkeletonUpdates ******************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics
{
	struct IsdkHandMeshComponent_eventSetPauseSkeletonUpdates_Parms
	{
		bool bNewSkeletonPauseState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n   * @brief Sets new value for whether or not the HandMeshComponent should push updates to the\n   * skeleton on tick\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "* @brief Sets new value for whether or not the HandMeshComponent should push updates to the\n* skeleton on tick" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewSkeletonPauseState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSkeletonPauseState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::NewProp_bNewSkeletonPauseState_SetBit(void* Obj)
{
	((IsdkHandMeshComponent_eventSetPauseSkeletonUpdates_Parms*)Obj)->bNewSkeletonPauseState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::NewProp_bNewSkeletonPauseState = { "bNewSkeletonPauseState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandMeshComponent_eventSetPauseSkeletonUpdates_Parms), &Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::NewProp_bNewSkeletonPauseState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::NewProp_bNewSkeletonPauseState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetPauseSkeletonUpdates", Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::IsdkHandMeshComponent_eventSetPauseSkeletonUpdates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::IsdkHandMeshComponent_eventSetPauseSkeletonUpdates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetPauseSkeletonUpdates)
{
	P_GET_UBOOL(Z_Param_bNewSkeletonPauseState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPauseSkeletonUpdates(Z_Param_bNewSkeletonPauseState);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetPauseSkeletonUpdates ********************

// ********** Begin Class UIsdkHandMeshComponent Function SetRootPoseDataSource ********************
struct Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics
{
	struct IsdkHandMeshComponent_eventSetRootPoseDataSource_Parms
	{
		TScriptInterface<IIsdkIRootPose> InRootPoseDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the root pose data source member variable (IsdkIRootPose interface) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Sets the root pose data source member variable (IsdkIRootPose interface)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InRootPoseDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::NewProp_InRootPoseDataSource = { "InRootPoseDataSource", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandMeshComponent_eventSetRootPoseDataSource_Parms, InRootPoseDataSource), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::NewProp_InRootPoseDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandMeshComponent, nullptr, "SetRootPoseDataSource", Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::IsdkHandMeshComponent_eventSetRootPoseDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::IsdkHandMeshComponent_eventSetRootPoseDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandMeshComponent::execSetRootPoseDataSource)
{
	P_GET_TINTERFACE(IIsdkIRootPose,Z_Param_InRootPoseDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootPoseDataSource(Z_Param_InRootPoseDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandMeshComponent Function SetRootPoseDataSource **********************

// ********** Begin Class UIsdkHandMeshComponent ***************************************************
void UIsdkHandMeshComponent::StaticRegisterNativesUIsdkHandMeshComponent()
{
	UClass* Class = UIsdkHandMeshComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearMappingState", &UIsdkHandMeshComponent::execClearMappingState },
		{ "GetCurrentRootPose_Implementation", &UIsdkHandMeshComponent::execGetCurrentRootPose_Implementation },
		{ "GetFinalRootPose_Implementation", &UIsdkHandMeshComponent::execGetFinalRootPose_Implementation },
		{ "GetHandednessFromDataSource", &UIsdkHandMeshComponent::execGetHandednessFromDataSource },
		{ "GetJointsDataSource", &UIsdkHandMeshComponent::execGetJointsDataSource },
		{ "GetMappingState", &UIsdkHandMeshComponent::execGetMappingState },
		{ "GetPoseOverride_Implementation", &UIsdkHandMeshComponent::execGetPoseOverride_Implementation },
		{ "GetRootPoseDataSource", &UIsdkHandMeshComponent::execGetRootPoseDataSource },
		{ "GetRootWorldTransform", &UIsdkHandMeshComponent::execGetRootWorldTransform },
		{ "ResetHandPoseOverride", &UIsdkHandMeshComponent::execResetHandPoseOverride },
		{ "SetHandPoseOverride", &UIsdkHandMeshComponent::execSetHandPoseOverride },
		{ "SetJointsDataSource", &UIsdkHandMeshComponent::execSetJointsDataSource },
		{ "SetMappedBoneNamesAsDefault", &UIsdkHandMeshComponent::execSetMappedBoneNamesAsDefault },
		{ "SetMappedBoneNamesFromJointSourceHandedness", &UIsdkHandMeshComponent::execSetMappedBoneNamesFromJointSourceHandedness },
		{ "SetPauseSkeletonUpdates", &UIsdkHandMeshComponent::execSetPauseSkeletonUpdates },
		{ "SetRootPoseDataSource", &UIsdkHandMeshComponent::execSetRootPoseDataSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandMeshComponent;
UClass* UIsdkHandMeshComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkHandMeshComponent;
	if (!Z_Registration_Info_UClass_UIsdkHandMeshComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandMeshComponent"),
			Z_Registration_Info_UClass_UIsdkHandMeshComponent.InnerSingleton,
			StaticRegisterNativesUIsdkHandMeshComponent,
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
	return Z_Registration_Info_UClass_UIsdkHandMeshComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister()
{
	return UIsdkHandMeshComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Hand Mesh Component" },
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "IsdkHandMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedBoneNames_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Array of bone names that have been mapped (in indexed order) */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Array of bone names that have been mapped (in indexed order)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugSkeleton_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Show debug markers for hand skeleton bones */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Show debug markers for hand skeleton bones" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHandPoseOverridden_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Hand Pose is currently being overridden */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "Hand Pose is currently being overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInhibitHandPoseLerping_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* If enabled, will ignore lerp values set on hand poses */" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
		{ "ToolTip", "If enabled, will ignore lerp values set on hand poses" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseOverride_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingState_MetaData[] = {
		{ "BlueprintGetter", "GetMappingState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappedSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointsDataSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetJointsDataSource" },
		{ "BlueprintSetter", "SetJointsDataSource" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPoseDataSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetRootPoseDataSource" },
		{ "BlueprintSetter", "SetRootPoseDataSource" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPoseDataOverride_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkHandMeshComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappedBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedBoneNames;
	static void NewProp_bShowDebugSkeleton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugSkeleton;
	static void NewProp_bHandPoseOverridden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHandPoseOverridden;
	static void NewProp_bInhibitHandPoseLerping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInhibitHandPoseLerping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoseOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MappingState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MappingState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappedSkeleton;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_JointsDataSource;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RootPoseDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandPoseDataOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_ClearMappingState, "ClearMappingState" }, // 4235406737
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetCurrentRootPose_Implementation, "GetCurrentRootPose_Implementation" }, // 2086686193
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetFinalRootPose_Implementation, "GetFinalRootPose_Implementation" }, // 97957242
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetHandednessFromDataSource, "GetHandednessFromDataSource" }, // 212889703
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetJointsDataSource, "GetJointsDataSource" }, // 2034079318
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetMappingState, "GetMappingState" }, // 3742321333
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetPoseOverride_Implementation, "GetPoseOverride_Implementation" }, // 2294832157
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootPoseDataSource, "GetRootPoseDataSource" }, // 2187526646
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_GetRootWorldTransform, "GetRootWorldTransform" }, // 1371599710
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_ResetHandPoseOverride, "ResetHandPoseOverride" }, // 2278306666
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetHandPoseOverride, "SetHandPoseOverride" }, // 1028311133
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetJointsDataSource, "SetJointsDataSource" }, // 2828940130
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesAsDefault, "SetMappedBoneNamesAsDefault" }, // 543818469
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetMappedBoneNamesFromJointSourceHandedness, "SetMappedBoneNamesFromJointSourceHandedness" }, // 3632216000
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetPauseSkeletonUpdates, "SetPauseSkeletonUpdates" }, // 2489814874
		{ &Z_Construct_UFunction_UIsdkHandMeshComponent_SetRootPoseDataSource, "SetRootPoseDataSource" }, // 1084628881
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandMeshComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedBoneNames_Inner = { "MappedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedBoneNames = { "MappedBoneNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, MappedBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedBoneNames_MetaData), NewProp_MappedBoneNames_MetaData) };
void Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bShowDebugSkeleton_SetBit(void* Obj)
{
	((UIsdkHandMeshComponent*)Obj)->bShowDebugSkeleton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bShowDebugSkeleton = { "bShowDebugSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandMeshComponent), &Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bShowDebugSkeleton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugSkeleton_MetaData), NewProp_bShowDebugSkeleton_MetaData) };
void Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bHandPoseOverridden_SetBit(void* Obj)
{
	((UIsdkHandMeshComponent*)Obj)->bHandPoseOverridden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bHandPoseOverridden = { "bHandPoseOverridden", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandMeshComponent), &Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bHandPoseOverridden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHandPoseOverridden_MetaData), NewProp_bHandPoseOverridden_MetaData) };
void Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bInhibitHandPoseLerping_SetBit(void* Obj)
{
	((UIsdkHandMeshComponent*)Obj)->bInhibitHandPoseLerping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bInhibitHandPoseLerping = { "bInhibitHandPoseLerping", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandMeshComponent), &Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bInhibitHandPoseLerping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInhibitHandPoseLerping_MetaData), NewProp_bInhibitHandPoseLerping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_PoseOverride = { "PoseOverride", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, PoseOverride), Z_Construct_UClass_UIsdkConditionalPoseOverride_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseOverride_MetaData), NewProp_PoseOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappingState = { "MappingState", nullptr, (EPropertyFlags)0x0040000000022015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, MappingState), Z_Construct_UEnum_OculusInteraction_EIsdkSkeletonMappingState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingState_MetaData), NewProp_MappingState_MetaData) }; // 292438371
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedSkeleton = { "MappedSkeleton", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, MappedSkeleton), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappedSkeleton_MetaData), NewProp_MappedSkeleton_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_JointsDataSource = { "JointsDataSource", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, JointsDataSource), Z_Construct_UClass_UIsdkIHandJoints_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointsDataSource_MetaData), NewProp_JointsDataSource_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_RootPoseDataSource = { "RootPoseDataSource", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, RootPoseDataSource), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPoseDataSource_MetaData), NewProp_RootPoseDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_HandPoseDataOverride = { "HandPoseDataOverride", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandMeshComponent, HandPoseDataOverride), Z_Construct_UClass_UIsdkHandPoseData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPoseDataOverride_MetaData), NewProp_HandPoseDataOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bShowDebugSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bHandPoseOverridden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_bInhibitHandPoseLerping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_PoseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappingState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappingState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_MappedSkeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_JointsDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_RootPoseDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandMeshComponent_Statics::NewProp_HandPoseDataOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandMeshComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandMeshComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPoseableMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandMeshComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPosedMesh_NoRegister, (int32)VTABLE_OFFSET(UIsdkHandMeshComponent, IIsdkIPosedMesh), false },  // 735499893
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandMeshComponent_Statics::ClassParams = {
	&UIsdkHandMeshComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandMeshComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandMeshComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandMeshComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandMeshComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkHandMeshComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandMeshComponent.OuterSingleton, Z_Construct_UClass_UIsdkHandMeshComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandMeshComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandMeshComponent);
UIsdkHandMeshComponent::~UIsdkHandMeshComponent() {}
// ********** End Class UIsdkHandMeshComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkSkeletonMappingState_StaticEnum, TEXT("EIsdkSkeletonMappingState"), &Z_Registration_Info_UEnum_EIsdkSkeletonMappingState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 292438371U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandMeshComponent, UIsdkHandMeshComponent::StaticClass, TEXT("UIsdkHandMeshComponent"), &Z_Registration_Info_UClass_UIsdkHandMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandMeshComponent), 1960541358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_4237673457(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
