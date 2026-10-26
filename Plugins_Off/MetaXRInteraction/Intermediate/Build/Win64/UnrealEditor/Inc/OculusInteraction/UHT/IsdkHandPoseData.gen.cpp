// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkHandPoseData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandJointMappings_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandBones();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkJointFreedom *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkJointFreedom;
static UEnum* EIsdkJointFreedom_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkJointFreedom.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkJointFreedom.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkJointFreedom"));
	}
	return Z_Registration_Info_UEnum_EIsdkJointFreedom.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkJointFreedom>()
{
	return EIsdkJointFreedom_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Mode of freedom for a given joint\n * Free - No restrictions\n * Constrained - Some constraints may restrict movement\n * Locked - Joint receives no movement\n */" },
		{ "Constrained.Name", "EIsdkJointFreedom::Constrained" },
		{ "Free.Name", "EIsdkJointFreedom::Free" },
		{ "Locked.Name", "EIsdkJointFreedom::Locked" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Mode of freedom for a given joint\n* Free - No restrictions\n* Constrained - Some constraints may restrict movement\n* Locked - Joint receives no movement" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkJointFreedom::Free", (int64)EIsdkJointFreedom::Free },
		{ "EIsdkJointFreedom::Constrained", (int64)EIsdkJointFreedom::Constrained },
		{ "EIsdkJointFreedom::Locked", (int64)EIsdkJointFreedom::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkJointFreedom",
	"EIsdkJointFreedom",
	Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom()
{
	if (!Z_Registration_Info_UEnum_EIsdkJointFreedom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkJointFreedom.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkJointFreedom.InnerSingleton;
}
// ********** End Enum EIsdkJointFreedom ***********************************************************

// ********** Begin Class UIsdkHandPoseData Function GetJointRotation ******************************
struct Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics
{
	struct IsdkHandPoseData_eventGetJointRotation_Parms
	{
		EIsdkHandBones JointIndex;
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Get the quaternion at a given joint index*/" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Get the quaternion at a given joint index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_JointIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_JointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_JointIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_JointIndex = { "JointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventGetJointRotation_Parms, JointIndex), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, METADATA_PARAMS(0, nullptr) }; // 2680050074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventGetJointRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_JointIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_JointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "GetJointRotation", Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::IsdkHandPoseData_eventGetJointRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::IsdkHandPoseData_eventGetJointRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execGetJointRotation)
{
	P_GET_ENUM(EIsdkHandBones,Z_Param_JointIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetJointRotation(EIsdkHandBones(Z_Param_JointIndex));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function GetJointRotation ********************************

// ********** Begin Class UIsdkHandPoseData Function GetPoseLerpTime *******************************
struct Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics
{
	struct IsdkHandPoseData_eventGetPoseLerpTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the pose lerp time */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Returns the pose lerp time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventGetPoseLerpTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "GetPoseLerpTime", Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::IsdkHandPoseData_eventGetPoseLerpTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::IsdkHandPoseData_eventGetPoseLerpTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execGetPoseLerpTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPoseLerpTime();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function GetPoseLerpTime *********************************

// ********** Begin Class UIsdkHandPoseData Function SetDirty **************************************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetDirty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Mark this asset as dirty and required to be saved */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Mark this asset as dirty and required to be saved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetDirty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetDirty", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetDirty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetDirty_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetDirty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetDirty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetDirty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirty();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetDirty ****************************************

// ********** Begin Class UIsdkHandPoseData Function SetJointRotation ******************************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics
{
	struct IsdkHandPoseData_eventSetJointRotation_Parms
	{
		EIsdkHandBones JointIndex;
		FQuat Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Set the quaternion of a given joint index*/" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Set the quaternion of a given joint index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_JointIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_JointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_JointIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_JointIndex = { "JointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetJointRotation_Parms, JointIndex), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, METADATA_PARAMS(0, nullptr) }; // 2680050074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetJointRotation_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_JointIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_JointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetJointRotation", Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::IsdkHandPoseData_eventSetJointRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::IsdkHandPoseData_eventSetJointRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetJointRotation)
{
	P_GET_ENUM(EIsdkHandBones,Z_Param_JointIndex);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJointRotation(EIsdkHandBones(Z_Param_JointIndex),Z_Param_Rotation);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetJointRotation ********************************

// ********** Begin Class UIsdkHandPoseData Function SetPoseLerpTime *******************************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics
{
	struct IsdkHandPoseData_eventSetPoseLerpTime_Parms
	{
		float LerpTimeIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the pose lerp time */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Sets the pose lerp time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LerpTimeIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LerpTimeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::NewProp_LerpTimeIn = { "LerpTimeIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetPoseLerpTime_Parms, LerpTimeIn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LerpTimeIn_MetaData), NewProp_LerpTimeIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::NewProp_LerpTimeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetPoseLerpTime", Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::IsdkHandPoseData_eventSetPoseLerpTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::IsdkHandPoseData_eventSetPoseLerpTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetPoseLerpTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LerpTimeIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPoseLerpTime(Z_Param_LerpTimeIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetPoseLerpTime *********************************

// ********** Begin Class UIsdkHandPoseData Function SetRotationFromPoseWithName *******************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics
{
	struct IsdkHandPoseData_eventSetRotationFromPoseWithName_Parms
	{
		UPoseAsset* Pose;
		FName Name;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the Hand Pose (all joints) from a given named Pose Asset */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Sets the Hand Pose (all joints) from a given named Pose Asset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetRotationFromPoseWithName_Parms, Pose), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetRotationFromPoseWithName_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetRotationFromPoseWithName", Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::IsdkHandPoseData_eventSetRotationFromPoseWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::IsdkHandPoseData_eventSetRotationFromPoseWithName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetRotationFromPoseWithName)
{
	P_GET_OBJECT(UPoseAsset,Z_Param_Pose);
	P_GET_PROPERTY(FNameProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRotationFromPoseWithName(Z_Param_Pose,Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetRotationFromPoseWithName *********************

// ********** Begin Class UIsdkHandPoseData Function SetRotationFromSkeleton ***********************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics
{
	struct IsdkHandPoseData_eventSetRotationFromSkeleton_Parms
	{
		USkinnedAsset* SkinnedAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the Hand Pose (all joints) from a given skeleton */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Sets the Hand Pose (all joints) from a given skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::NewProp_SkinnedAsset = { "SkinnedAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetRotationFromSkeleton_Parms, SkinnedAsset), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::NewProp_SkinnedAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetRotationFromSkeleton", Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::IsdkHandPoseData_eventSetRotationFromSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::IsdkHandPoseData_eventSetRotationFromSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetRotationFromSkeleton)
{
	P_GET_OBJECT(USkinnedAsset,Z_Param_SkinnedAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRotationFromSkeleton(Z_Param_SkinnedAsset);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetRotationFromSkeleton *************************

// ********** Begin Class UIsdkHandPoseData Function SetRotationFromVisual *************************
struct Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics
{
	struct IsdkHandPoseData_eventSetRotationFromVisual_Parms
	{
		UIsdkHandMeshComponent* HandMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the Hand Pose (all joints) from a given Hand Visual Component */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Sets the Hand Pose (all joints) from a given Hand Visual Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandPoseData_eventSetRotationFromVisual_Parms, HandMesh), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMesh_MetaData), NewProp_HandMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::NewProp_HandMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandPoseData, nullptr, "SetRotationFromVisual", Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::IsdkHandPoseData_eventSetRotationFromVisual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::IsdkHandPoseData_eventSetRotationFromVisual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandPoseData::execSetRotationFromVisual)
{
	P_GET_OBJECT(UIsdkHandMeshComponent,Z_Param_HandMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRotationFromVisual(Z_Param_HandMesh);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandPoseData Function SetRotationFromVisual ***************************

// ********** Begin Class UIsdkHandPoseData ********************************************************
void UIsdkHandPoseData::StaticRegisterNativesUIsdkHandPoseData()
{
	UClass* Class = UIsdkHandPoseData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetJointRotation", &UIsdkHandPoseData::execGetJointRotation },
		{ "GetPoseLerpTime", &UIsdkHandPoseData::execGetPoseLerpTime },
		{ "SetDirty", &UIsdkHandPoseData::execSetDirty },
		{ "SetJointRotation", &UIsdkHandPoseData::execSetJointRotation },
		{ "SetPoseLerpTime", &UIsdkHandPoseData::execSetPoseLerpTime },
		{ "SetRotationFromPoseWithName", &UIsdkHandPoseData::execSetRotationFromPoseWithName },
		{ "SetRotationFromSkeleton", &UIsdkHandPoseData::execSetRotationFromSkeleton },
		{ "SetRotationFromVisual", &UIsdkHandPoseData::execSetRotationFromVisual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseData;
UClass* UIsdkHandPoseData::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseData;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandPoseData"),
			Z_Registration_Info_UClass_UIsdkHandPoseData.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseData,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseData.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister()
{
	return UIsdkHandPoseData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Hand Pose Data" },
		{ "IncludePath", "IsdkHandPoseData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The assigned handedness for this pose data, will determine which hand skeleton is utilized */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "The assigned handedness for this pose data, will determine which hand skeleton is utilized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thumb_MetaData[] = {
		{ "Category", "InteractionSDK|Joint Freedom" },
		{ "Comment", "/* Joint freedom mode for the thumb */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Joint freedom mode for the thumb" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "InteractionSDK|Joint Freedom" },
		{ "Comment", "/* Joint freedom mode for the index finger */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Joint freedom mode for the index finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Middle_MetaData[] = {
		{ "Category", "InteractionSDK|Joint Freedom" },
		{ "Comment", "/* Joint freedom mode for the middle finger */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Joint freedom mode for the middle finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[] = {
		{ "Category", "InteractionSDK|Joint Freedom" },
		{ "Comment", "/* Joint freedom mode for the ring finger */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Joint freedom mode for the ring finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pinky_MetaData[] = {
		{ "Category", "InteractionSDK|Joint Freedom" },
		{ "Comment", "/* Joint freedom mode for the pinky finger */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Joint freedom mode for the pinky finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandData_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Hand Data object, storing joint & bone information */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Hand Data object, storing joint & bone information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandJointMapping_MetaData[] = {
		{ "Comment", "/* Thumb and Finger Joint Mappings */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Thumb and Finger Joint Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointNames_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Array of Joint Names */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "Array of Joint Names" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseLerpTime_MetaData[] = {
		{ "BlueprintGetter", "GetPoseLerpTime" },
		{ "BlueprintSetter", "SetPoseLerpTime" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* If positive, will lerp into/out of hand pose with the given timing */" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseData.h" },
		{ "ToolTip", "If positive, will lerp into/out of hand pose with the given timing" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Thumb_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Thumb;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Index_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Middle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Middle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ring_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Ring;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Pinky_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Pinky;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandJointMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_JointNames;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseLerpTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandPoseData_GetJointRotation, "GetJointRotation" }, // 2398509389
		{ &Z_Construct_UFunction_UIsdkHandPoseData_GetPoseLerpTime, "GetPoseLerpTime" }, // 816785171
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetDirty, "SetDirty" }, // 1068877604
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetJointRotation, "SetJointRotation" }, // 1974669700
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetPoseLerpTime, "SetPoseLerpTime" }, // 539885845
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromPoseWithName, "SetRotationFromPoseWithName" }, // 1197322706
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromSkeleton, "SetRotationFromSkeleton" }, // 2060913464
		{ &Z_Construct_UFunction_UIsdkHandPoseData_SetRotationFromVisual, "SetRotationFromVisual" }, // 2272382851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Thumb_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Thumb = { "Thumb", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Thumb), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thumb_MetaData), NewProp_Thumb_MetaData) }; // 3785138186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Index_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Index), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) }; // 3785138186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Middle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Middle = { "Middle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Middle), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Middle_MetaData), NewProp_Middle_MetaData) }; // 3785138186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Ring_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Ring), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ring_MetaData), NewProp_Ring_MetaData) }; // 3785138186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Pinky_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Pinky = { "Pinky", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, Pinky), Z_Construct_UEnum_OculusInteraction_EIsdkJointFreedom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pinky_MetaData), NewProp_Pinky_MetaData) }; // 3785138186
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_HandData = { "HandData", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, HandData), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandData_MetaData), NewProp_HandData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_HandJointMapping = { "HandJointMapping", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, HandJointMapping), Z_Construct_UClass_UIsdkHandJointMappings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandJointMapping_MetaData), NewProp_HandJointMapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_JointNames = { "JointNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(JointNames, UIsdkHandPoseData), STRUCT_OFFSET(UIsdkHandPoseData, JointNames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointNames_MetaData), NewProp_JointNames_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_PoseLerpTime = { "PoseLerpTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseData, PoseLerpTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseLerpTime_MetaData), NewProp_PoseLerpTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandPoseData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Thumb_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Thumb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Index_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Middle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Middle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Ring_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Ring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Pinky_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_Pinky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_HandData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_HandJointMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_JointNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseData_Statics::NewProp_PoseLerpTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandPoseData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkHandPoseData_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandJoints_NoRegister, (int32)VTABLE_OFFSET(UIsdkHandPoseData, IIsdkIHandJoints), false },  // 1228590249
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseData_Statics::ClassParams = {
	&UIsdkHandPoseData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandPoseData_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseData_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseData_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandPoseData()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseData.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandPoseData);
UIsdkHandPoseData::~UIsdkHandPoseData() {}
// ********** End Class UIsdkHandPoseData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkJointFreedom_StaticEnum, TEXT("EIsdkJointFreedom"), &Z_Registration_Info_UEnum_EIsdkJointFreedom, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3785138186U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseData, UIsdkHandPoseData::StaticClass, TEXT("UIsdkHandPoseData"), &Z_Registration_Info_UClass_UIsdkHandPoseData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseData), 1423775137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_4054342022(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
