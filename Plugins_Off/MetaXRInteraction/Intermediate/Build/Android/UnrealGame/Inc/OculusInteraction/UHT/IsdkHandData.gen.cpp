// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkHandData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandBones();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkHandBones ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkHandBones;
static UEnum* EIsdkHandBones_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandBones.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkHandBones.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkHandBones, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkHandBones"));
	}
	return Z_Registration_Info_UEnum_EIsdkHandBones.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandBones>()
{
	return EIsdkHandBones_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EHandBones_MAX.Name", "EIsdkHandBones::EHandBones_MAX" },
		{ "HandEnd.Name", "EIsdkHandBones::HandEnd" },
		{ "HandIndex0.DisplayName", "Index Metacarpal" },
		{ "HandIndex0.Name", "EIsdkHandBones::HandIndex0" },
		{ "HandIndex1.DisplayName", "Index Proximal" },
		{ "HandIndex1.Name", "EIsdkHandBones::HandIndex1" },
		{ "HandIndex2.DisplayName", "Index Intermediate" },
		{ "HandIndex2.Name", "EIsdkHandBones::HandIndex2" },
		{ "HandIndex3.DisplayName", "Index Distal" },
		{ "HandIndex3.Name", "EIsdkHandBones::HandIndex3" },
		{ "HandIndexTip.DisplayName", "Index Tip" },
		{ "HandIndexTip.Name", "EIsdkHandBones::HandIndexTip" },
		{ "HandMiddle0.DisplayName", "Middle Metacarpal" },
		{ "HandMiddle0.Name", "EIsdkHandBones::HandMiddle0" },
		{ "HandMiddle1.DisplayName", "Middle Proximal" },
		{ "HandMiddle1.Name", "EIsdkHandBones::HandMiddle1" },
		{ "HandMiddle2.DisplayName", "Middle Intermediate" },
		{ "HandMiddle2.Name", "EIsdkHandBones::HandMiddle2" },
		{ "HandMiddle3.DisplayName", "Middle Distal" },
		{ "HandMiddle3.Name", "EIsdkHandBones::HandMiddle3" },
		{ "HandMiddleTip.DisplayName", "Middle Tip" },
		{ "HandMiddleTip.Name", "EIsdkHandBones::HandMiddleTip" },
		{ "HandPalm.DisplayName", "Palm" },
		{ "HandPalm.Name", "EIsdkHandBones::HandPalm" },
		{ "HandPinky0.DisplayName", "Pinky Metacarpal" },
		{ "HandPinky0.Name", "EIsdkHandBones::HandPinky0" },
		{ "HandPinky1.DisplayName", "Pinky Proximal" },
		{ "HandPinky1.Name", "EIsdkHandBones::HandPinky1" },
		{ "HandPinky2.DisplayName", "Pinky Intermediate" },
		{ "HandPinky2.Name", "EIsdkHandBones::HandPinky2" },
		{ "HandPinky3.DisplayName", "Pinky Distal" },
		{ "HandPinky3.Name", "EIsdkHandBones::HandPinky3" },
		{ "HandPinkyTip.DisplayName", "Pinky Tip" },
		{ "HandPinkyTip.Name", "EIsdkHandBones::HandPinkyTip" },
		{ "HandRing0.DisplayName", "Ring Metacarpal" },
		{ "HandRing0.Name", "EIsdkHandBones::HandRing0" },
		{ "HandRing1.DisplayName", "Ring Proximal" },
		{ "HandRing1.Name", "EIsdkHandBones::HandRing1" },
		{ "HandRing2.DisplayName", "Ring Intermediate" },
		{ "HandRing2.Name", "EIsdkHandBones::HandRing2" },
		{ "HandRing3.DisplayName", "Ring Distal" },
		{ "HandRing3.Name", "EIsdkHandBones::HandRing3" },
		{ "HandRingTip.DisplayName", "Ring Tip" },
		{ "HandRingTip.Name", "EIsdkHandBones::HandRingTip" },
		{ "HandStart.Name", "EIsdkHandBones::HandStart" },
		{ "HandThumb1.DisplayName", "Thumb Metacarpal" },
		{ "HandThumb1.Name", "EIsdkHandBones::HandThumb1" },
		{ "HandThumb2.DisplayName", "Thumb Proximal" },
		{ "HandThumb2.Name", "EIsdkHandBones::HandThumb2" },
		{ "HandThumb3.DisplayName", "Thumb Distal" },
		{ "HandThumb3.Name", "EIsdkHandBones::HandThumb3" },
		{ "HandThumbTip.DisplayName", "Thumb Tip" },
		{ "HandThumbTip.Name", "EIsdkHandBones::HandThumbTip" },
		{ "HandWristRoot.DisplayName", "Wrist" },
		{ "HandWristRoot.Name", "EIsdkHandBones::HandWristRoot" },
		{ "Invalid.Name", "EIsdkHandBones::Invalid" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkHandBones::HandStart", (int64)EIsdkHandBones::HandStart },
		{ "EIsdkHandBones::HandPalm", (int64)EIsdkHandBones::HandPalm },
		{ "EIsdkHandBones::HandWristRoot", (int64)EIsdkHandBones::HandWristRoot },
		{ "EIsdkHandBones::HandThumb1", (int64)EIsdkHandBones::HandThumb1 },
		{ "EIsdkHandBones::HandThumb2", (int64)EIsdkHandBones::HandThumb2 },
		{ "EIsdkHandBones::HandThumb3", (int64)EIsdkHandBones::HandThumb3 },
		{ "EIsdkHandBones::HandThumbTip", (int64)EIsdkHandBones::HandThumbTip },
		{ "EIsdkHandBones::HandIndex0", (int64)EIsdkHandBones::HandIndex0 },
		{ "EIsdkHandBones::HandIndex1", (int64)EIsdkHandBones::HandIndex1 },
		{ "EIsdkHandBones::HandIndex2", (int64)EIsdkHandBones::HandIndex2 },
		{ "EIsdkHandBones::HandIndex3", (int64)EIsdkHandBones::HandIndex3 },
		{ "EIsdkHandBones::HandIndexTip", (int64)EIsdkHandBones::HandIndexTip },
		{ "EIsdkHandBones::HandMiddle0", (int64)EIsdkHandBones::HandMiddle0 },
		{ "EIsdkHandBones::HandMiddle1", (int64)EIsdkHandBones::HandMiddle1 },
		{ "EIsdkHandBones::HandMiddle2", (int64)EIsdkHandBones::HandMiddle2 },
		{ "EIsdkHandBones::HandMiddle3", (int64)EIsdkHandBones::HandMiddle3 },
		{ "EIsdkHandBones::HandMiddleTip", (int64)EIsdkHandBones::HandMiddleTip },
		{ "EIsdkHandBones::HandRing0", (int64)EIsdkHandBones::HandRing0 },
		{ "EIsdkHandBones::HandRing1", (int64)EIsdkHandBones::HandRing1 },
		{ "EIsdkHandBones::HandRing2", (int64)EIsdkHandBones::HandRing2 },
		{ "EIsdkHandBones::HandRing3", (int64)EIsdkHandBones::HandRing3 },
		{ "EIsdkHandBones::HandRingTip", (int64)EIsdkHandBones::HandRingTip },
		{ "EIsdkHandBones::HandPinky0", (int64)EIsdkHandBones::HandPinky0 },
		{ "EIsdkHandBones::HandPinky1", (int64)EIsdkHandBones::HandPinky1 },
		{ "EIsdkHandBones::HandPinky2", (int64)EIsdkHandBones::HandPinky2 },
		{ "EIsdkHandBones::HandPinky3", (int64)EIsdkHandBones::HandPinky3 },
		{ "EIsdkHandBones::HandPinkyTip", (int64)EIsdkHandBones::HandPinkyTip },
		{ "EIsdkHandBones::HandEnd", (int64)EIsdkHandBones::HandEnd },
		{ "EIsdkHandBones::EHandBones_MAX", (int64)EIsdkHandBones::EHandBones_MAX },
		{ "EIsdkHandBones::Invalid", (int64)EIsdkHandBones::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkHandBones",
	"EIsdkHandBones",
	Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandBones()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandBones.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkHandBones.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkHandBones_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkHandBones.InnerSingleton;
}
// ********** End Enum EIsdkHandBones **************************************************************

// ********** Begin Class UIsdkHandData Function GetFingerJointPose ********************************
struct Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics
{
	struct IsdkHandData_eventGetFingerJointPose_Parms
	{
		EIsdkFingerType FingerType;
		EIsdkFingerJoint FingerJoint;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerType_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerJoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerJoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerType = { "FingerType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetFingerJointPose_Parms, FingerType), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerType_MetaData), NewProp_FingerType_MetaData) }; // 1877342163
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerJoint = { "FingerJoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetFingerJointPose_Parms, FingerJoint), Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerJoint_MetaData), NewProp_FingerJoint_MetaData) }; // 2701713263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetFingerJointPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerJoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_FingerJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetFingerJointPose", Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::IsdkHandData_eventGetFingerJointPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::IsdkHandData_eventGetFingerJointPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetFingerJointPose)
{
	P_GET_ENUM(EIsdkFingerType,Z_Param_FingerType);
	P_GET_ENUM(EIsdkFingerJoint,Z_Param_FingerJoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetFingerJointPose(EIsdkFingerType(Z_Param_FingerType),EIsdkFingerJoint(Z_Param_FingerJoint));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetFingerJointPose **********************************

// ********** Begin Class UIsdkHandData Function GetJointPose **************************************
struct Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics
{
	struct IsdkHandData_eventGetJointPose_Parms
	{
		uint8 JointIndex;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the transform of bone (using its index as a parameter). Checks the validity of\n   * the index before retrieval.\n   * @return FTransform& The transform of the given bone index. Returns identity if the index is\n   * invalid or out of bounds.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Retrieves the transform of bone (using its index as a parameter). Checks the validity of\nthe index before retrieval.\n@return FTransform& The transform of the given bone index. Returns identity if the index is\ninvalid or out of bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_JointIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::NewProp_JointIndex = { "JointIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetJointPose_Parms, JointIndex), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetJointPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::NewProp_JointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetJointPose", Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::IsdkHandData_eventGetJointPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::IsdkHandData_eventGetJointPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetJointPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetJointPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetJointPose)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_JointIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetJointPose(Z_Param_JointIndex);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetJointPose ****************************************

// ********** Begin Class UIsdkHandData Function GetJointPoses *************************************
struct Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics
{
	struct IsdkHandData_eventGetJointPoses_Parms
	{
		TArray<FTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves all of the current joint poses as index of transforms. Const, UFUNCTION\n   * version of GetJointPoses()\n   * @return TArray<FTransform>& Joint poses as transforms, in bone index order.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Retrieves all of the current joint poses as index of transforms. Const, UFUNCTION\nversion of GetJointPoses()\n@return TArray<FTransform>& Joint poses as transforms, in bone index order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetJointPoses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetJointPoses", Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::IsdkHandData_eventGetJointPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::IsdkHandData_eventGetJointPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetJointPoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetJointPoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetJointPoses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTransform>*)Z_Param__Result=P_THIS->GetJointPoses();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetJointPoses ***************************************

// ********** Begin Class UIsdkHandData Function GetJointRadii *************************************
struct Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics
{
	struct IsdkHandData_eventGetJointRadii_Parms
	{
		TArray<float> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves all of the current joint radii as index of floats. Const UFUNCTION version of\n   * GetJointRadii() intended for Blueprints or other const use cases.\n   * @return TArray<float>& Joint radii as floats, in bone index order.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Retrieves all of the current joint radii as index of floats. Const UFUNCTION version of\nGetJointRadii() intended for Blueprints or other const use cases.\n@return TArray<float>& Joint radii as floats, in bone index order." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetJointRadii_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetJointRadii", Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::IsdkHandData_eventGetJointRadii_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::IsdkHandData_eventGetJointRadii_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetJointRadii()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetJointRadii_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetJointRadii)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<float>*)Z_Param__Result=P_THIS->GetJointRadii();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetJointRadii ***************************************

// ********** Begin Class UIsdkHandData Function GetNumJoints **************************************
struct Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics
{
	struct IsdkHandData_eventGetNumJoints_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the number of joints utilized by the hand this data is intended to represent.\n   * Normally used to iterate through all bones indices by various workflows in the SDK.\n   * @return int32 The number of joints this HandData supports (defined here by\n   * EIsdkHandBones::EHandBones_MAX)\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Retrieves the number of joints utilized by the hand this data is intended to represent.\nNormally used to iterate through all bones indices by various workflows in the SDK.\n@return int32 The number of joints this HandData supports (defined here by\nEIsdkHandBones::EHandBones_MAX)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetNumJoints_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetNumJoints", Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::IsdkHandData_eventGetNumJoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::IsdkHandData_eventGetNumJoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetNumJoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetNumJoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetNumJoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UIsdkHandData::GetNumJoints();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetNumJoints ****************************************

// ********** Begin Class UIsdkHandData Function GetThumbJointPose *********************************
struct Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics
{
	struct IsdkHandData_eventGetThumbJointPose_Parms
	{
		EIsdkFingerJoint ThumbJoint;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbJoint_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbJoint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbJoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ThumbJoint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ThumbJoint = { "ThumbJoint", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetThumbJointPose_Parms, ThumbJoint), Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbJoint_MetaData), NewProp_ThumbJoint_MetaData) }; // 2701713263
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventGetThumbJointPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ThumbJoint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ThumbJoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "GetThumbJointPose", Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::IsdkHandData_eventGetThumbJointPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::IsdkHandData_eventGetThumbJointPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execGetThumbJointPose)
{
	P_GET_ENUM(EIsdkFingerJoint,Z_Param_ThumbJoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->GetThumbJointPose(EIsdkFingerJoint(Z_Param_ThumbJoint));
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function GetThumbJointPose ***********************************

// ********** Begin Class UIsdkHandData Function SetCachedJointPose ********************************
struct Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics
{
	struct IsdkHandData_eventSetCachedJointPose_Parms
	{
		FTransform PoseIn;
		int32 JointPoseIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Copies a specific joint pose to a local cache, allowing for caching of critical joint\n   * information before it is overwritten by regular updates, if desired.\n   * @param PoseIn The transform (in bone space) of the joint being cached\n   * @param JointPoseIndex The bone index to cache. Index is validated.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Copies a specific joint pose to a local cache, allowing for caching of critical joint\ninformation before it is overwritten by regular updates, if desired.\n@param PoseIn The transform (in bone space) of the joint being cached\n@param JointPoseIndex The bone index to cache. Index is validated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseIn_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointPoseIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoseIn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointPoseIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::NewProp_PoseIn = { "PoseIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetCachedJointPose_Parms, PoseIn), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseIn_MetaData), NewProp_PoseIn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::NewProp_JointPoseIndex = { "JointPoseIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetCachedJointPose_Parms, JointPoseIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointPoseIndex_MetaData), NewProp_JointPoseIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::NewProp_PoseIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::NewProp_JointPoseIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetCachedJointPose", Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::IsdkHandData_eventSetCachedJointPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::IsdkHandData_eventSetCachedJointPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetCachedJointPose)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_PoseIn);
	P_GET_PROPERTY(FIntProperty,Z_Param_JointPoseIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCachedJointPose(Z_Param_Out_PoseIn,Z_Param_JointPoseIndex);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetCachedJointPose **********************************

// ********** Begin Class UIsdkHandData Function SetCachedJointPoses *******************************
struct Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics
{
	struct IsdkHandData_eventSetCachedJointPoses_Parms
	{
		TArray<FTransform> PosesIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Copies all joint poses to a local cache, allowing for caching of critical joint\n   * information before it is overwritten by regular updates, if desired.\n   * @param PosesIn Array of transforms (in bone space) to set the cache to. Does not enforce array\n   * size matching.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Copies all joint poses to a local cache, allowing for caching of critical joint\ninformation before it is overwritten by regular updates, if desired.\n@param PosesIn Array of transforms (in bone space) to set the cache to. Does not enforce array\nsize matching." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PosesIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PosesIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::NewProp_PosesIn_Inner = { "PosesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::NewProp_PosesIn = { "PosesIn", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetCachedJointPoses_Parms, PosesIn), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::NewProp_PosesIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::NewProp_PosesIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetCachedJointPoses", Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::IsdkHandData_eventSetCachedJointPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::IsdkHandData_eventSetCachedJointPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetCachedJointPoses)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_PosesIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCachedJointPoses(Z_Param_Out_PosesIn);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetCachedJointPoses *********************************

// ********** Begin Class UIsdkHandData Function SetInboundBoneMap *********************************
struct Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics
{
	struct IsdkHandData_eventSetInboundBoneMap_Parms
	{
		TMap<int32,int32> InboundMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Set Inbound Bone Mappings\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Set Inbound Bone Mappings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InboundMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap_ValueProp = { "InboundMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap_Key_KeyProp = { "InboundMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap = { "InboundMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetInboundBoneMap_Parms, InboundMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::NewProp_InboundMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetInboundBoneMap", Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::IsdkHandData_eventSetInboundBoneMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::IsdkHandData_eventSetInboundBoneMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetInboundBoneMap)
{
	P_GET_TMAP_REF(int32,int32,Z_Param_Out_InboundMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInboundBoneMap(Z_Param_Out_InboundMap);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetInboundBoneMap ***********************************

// ********** Begin Class UIsdkHandData Function SetJoints *****************************************
struct Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics
{
	struct IsdkHandData_eventSetJoints_Parms
	{
		TArray<FTransform> InJointPoses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the critical member variable joint pose array to the passed in parameter. Does not\n   * validate or enforce array sizes. Completely overwrites existing joint pose information. This\n   * signature of the function takes an array of Transforms\n   * @param InJointPoses Array of Transforms to set joint poses to.\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Sets the critical member variable joint pose array to the passed in parameter. Does not\nvalidate or enforce array sizes. Completely overwrites existing joint pose information. This\nsignature of the function takes an array of Transforms\n@param InJointPoses Array of Transforms to set joint poses to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InJointPoses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InJointPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InJointPoses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::NewProp_InJointPoses_Inner = { "InJointPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::NewProp_InJointPoses = { "InJointPoses", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetJoints_Parms, InJointPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InJointPoses_MetaData), NewProp_InJointPoses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::NewProp_InJointPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::NewProp_InJointPoses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetJoints", Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::IsdkHandData_eventSetJoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::IsdkHandData_eventSetJoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_SetJoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetJoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetJoints)
{
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_InJointPoses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJoints(Z_Param_Out_InJointPoses);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetJoints *******************************************

// ********** Begin Class UIsdkHandData Function SetJointsToIdentity *******************************
struct Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets all joint pose information (both main and cached) to identity, completely removing\n   * all previous joint information\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Sets all joint pose information (both main and cached) to identity, completely removing\nall previous joint information" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetJointsToIdentity", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetJointsToIdentity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetJointsToIdentity();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetJointsToIdentity *********************************

// ********** Begin Class UIsdkHandData Function SetOutboundBoneMap ********************************
struct Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics
{
	struct IsdkHandData_eventSetOutboundBoneMap_Parms
	{
		TMap<int32,int32> OutboundMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Set Inbound Bone Mappings\n   */" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@brief Set Inbound Bone Mappings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutboundMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap_ValueProp = { "OutboundMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap_Key_KeyProp = { "OutboundMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap = { "OutboundMap", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandData_eventSetOutboundBoneMap_Parms, OutboundMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::NewProp_OutboundMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandData, nullptr, "SetOutboundBoneMap", Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::IsdkHandData_eventSetOutboundBoneMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::IsdkHandData_eventSetOutboundBoneMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandData::execSetOutboundBoneMap)
{
	P_GET_TMAP_REF(int32,int32,Z_Param_Out_OutboundMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOutboundBoneMap(Z_Param_Out_OutboundMap);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandData Function SetOutboundBoneMap **********************************

// ********** Begin Class UIsdkHandData ************************************************************
void UIsdkHandData::StaticRegisterNativesUIsdkHandData()
{
	UClass* Class = UIsdkHandData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFingerJointPose", &UIsdkHandData::execGetFingerJointPose },
		{ "GetJointPose", &UIsdkHandData::execGetJointPose },
		{ "GetJointPoses", &UIsdkHandData::execGetJointPoses },
		{ "GetJointRadii", &UIsdkHandData::execGetJointRadii },
		{ "GetNumJoints", &UIsdkHandData::execGetNumJoints },
		{ "GetThumbJointPose", &UIsdkHandData::execGetThumbJointPose },
		{ "SetCachedJointPose", &UIsdkHandData::execSetCachedJointPose },
		{ "SetCachedJointPoses", &UIsdkHandData::execSetCachedJointPoses },
		{ "SetInboundBoneMap", &UIsdkHandData::execSetInboundBoneMap },
		{ "SetJoints", &UIsdkHandData::execSetJoints },
		{ "SetJointsToIdentity", &UIsdkHandData::execSetJointsToIdentity },
		{ "SetOutboundBoneMap", &UIsdkHandData::execSetOutboundBoneMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandData;
UClass* UIsdkHandData::GetPrivateStaticClass()
{
	using TClass = UIsdkHandData;
	if (!Z_Registration_Info_UClass_UIsdkHandData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandData"),
			Z_Registration_Info_UClass_UIsdkHandData.InnerSingleton,
			StaticRegisterNativesUIsdkHandData,
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
	return Z_Registration_Info_UClass_UIsdkHandData.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandData_NoRegister()
{
	return UIsdkHandData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @class UIsdkHandData\n * @brief Hand Data class, critical container for hand pose information throughout the Interaction\n * SDK. Stores joint poses, radii, bone chains, bone mapping and methods and functions to set and\n * query these member variables.\n *\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "IsdkHandData.h" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "@class UIsdkHandData\n@brief Hand Data class, critical container for hand pose information throughout the Interaction\nSDK. Stores joint poses, radii, bone chains, bone mapping and methods and functions to set and\nquery these member variables.\n\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointPoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointRadii_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointPosesCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutboundBoneMapping_MetaData[] = {
		{ "Comment", "// Bone mapping to translate for sending to external skeleton\n" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "Bone mapping to translate for sending to external skeleton" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InboundBoneMapping_MetaData[] = {
		{ "Comment", "// Bone mapping to translate for receiving from external skeleton\n" },
		{ "ModuleRelativePath", "Public/IsdkHandData.h" },
		{ "ToolTip", "Bone mapping to translate for receiving from external skeleton" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointPoses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointPoses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JointRadii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointRadii;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JointPosesCache_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_JointPosesCache;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundBoneMapping_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundBoneMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutboundBoneMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundBoneMapping_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundBoneMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InboundBoneMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandData_GetFingerJointPose, "GetFingerJointPose" }, // 3506307594
		{ &Z_Construct_UFunction_UIsdkHandData_GetJointPose, "GetJointPose" }, // 3781707040
		{ &Z_Construct_UFunction_UIsdkHandData_GetJointPoses, "GetJointPoses" }, // 3686299818
		{ &Z_Construct_UFunction_UIsdkHandData_GetJointRadii, "GetJointRadii" }, // 2453431863
		{ &Z_Construct_UFunction_UIsdkHandData_GetNumJoints, "GetNumJoints" }, // 1342766347
		{ &Z_Construct_UFunction_UIsdkHandData_GetThumbJointPose, "GetThumbJointPose" }, // 1004234490
		{ &Z_Construct_UFunction_UIsdkHandData_SetCachedJointPose, "SetCachedJointPose" }, // 890725764
		{ &Z_Construct_UFunction_UIsdkHandData_SetCachedJointPoses, "SetCachedJointPoses" }, // 1127575177
		{ &Z_Construct_UFunction_UIsdkHandData_SetInboundBoneMap, "SetInboundBoneMap" }, // 146050771
		{ &Z_Construct_UFunction_UIsdkHandData_SetJoints, "SetJoints" }, // 1456221039
		{ &Z_Construct_UFunction_UIsdkHandData_SetJointsToIdentity, "SetJointsToIdentity" }, // 948898938
		{ &Z_Construct_UFunction_UIsdkHandData_SetOutboundBoneMap, "SetOutboundBoneMap" }, // 3712555953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPoses_Inner = { "JointPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPoses = { "JointPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, JointPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointPoses_MetaData), NewProp_JointPoses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointRadii_Inner = { "JointRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointRadii = { "JointRadii", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, JointRadii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointRadii_MetaData), NewProp_JointRadii_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPosesCache_Inner = { "JointPosesCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPosesCache = { "JointPosesCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, JointPosesCache), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointPosesCache_MetaData), NewProp_JointPosesCache_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping_ValueProp = { "OutboundBoneMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping_Key_KeyProp = { "OutboundBoneMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping = { "OutboundBoneMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, OutboundBoneMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutboundBoneMapping_MetaData), NewProp_OutboundBoneMapping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping_ValueProp = { "InboundBoneMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping_Key_KeyProp = { "InboundBoneMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping = { "InboundBoneMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandData, InboundBoneMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InboundBoneMapping_MetaData), NewProp_InboundBoneMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPoses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointRadii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointRadii,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPosesCache_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_JointPosesCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_OutboundBoneMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandData_Statics::NewProp_InboundBoneMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandData_Statics::ClassParams = {
	&UIsdkHandData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandData_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandData_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandData()
{
	if (!Z_Registration_Info_UClass_UIsdkHandData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandData.OuterSingleton, Z_Construct_UClass_UIsdkHandData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandData);
UIsdkHandData::~UIsdkHandData() {}
// ********** End Class UIsdkHandData **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkHandBones_StaticEnum, TEXT("EIsdkHandBones"), &Z_Registration_Info_UEnum_EIsdkHandBones, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2680050074U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandData, UIsdkHandData::StaticClass, TEXT("UIsdkHandData"), &Z_Registration_Info_UClass_UIsdkHandData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandData), 1940300105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_495317851(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
