// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MRUKPassthroughCameraAccess.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMRUKPassthroughCameraAccess() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ENGINE_API UClass* Z_Construct_UClass_UTexture();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_NoRegister();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture();
MRUTILITYKIT_API UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_NoRegister();
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye();
MRUTILITYKIT_API UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState();
MRUTILITYKIT_API UScriptStruct* Z_Construct_UScriptStruct_FMRUKCameraIntrinsics();
UPackage* Z_Construct_UPackage__Script_MRUtilityKit();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMRUKCameraEye ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKCameraEye;
static UEnum* EMRUKCameraEye_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMRUKCameraEye.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMRUKCameraEye.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKCameraEye"));
	}
	return Z_Registration_Info_UEnum_EMRUKCameraEye.OuterSingleton;
}
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCameraEye>()
{
	return EMRUKCameraEye_StaticEnum();
}
struct Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "EMRUKCameraEye::Count" },
		{ "Left.Name", "EMRUKCameraEye::Left" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
		{ "Right.Name", "EMRUKCameraEye::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCameraEye::Left", (int64)EMRUKCameraEye::Left },
		{ "EMRUKCameraEye::Right", (int64)EMRUKCameraEye::Right },
		{ "EMRUKCameraEye::Count", (int64)EMRUKCameraEye::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCameraEye",
	"EMRUKCameraEye",
	Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye()
{
	if (!Z_Registration_Info_UEnum_EMRUKCameraEye.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKCameraEye.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMRUKCameraEye.InnerSingleton;
}
// ********** End Enum EMRUKCameraEye **************************************************************

// ********** Begin Enum EMRUKCameraPlayState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMRUKCameraPlayState;
static UEnum* EMRUKCameraPlayState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMRUKCameraPlayState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMRUKCameraPlayState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("EMRUKCameraPlayState"));
	}
	return Z_Registration_Info_UEnum_EMRUKCameraPlayState.OuterSingleton;
}
template<> MRUTILITYKIT_API UEnum* StaticEnum<EMRUKCameraPlayState>()
{
	return EMRUKCameraPlayState_StaticEnum();
}
struct Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
		{ "Playing.Name", "EMRUKCameraPlayState::Playing" },
		{ "PlaySuspended.Name", "EMRUKCameraPlayState::PlaySuspended" },
		{ "Stopped.Name", "EMRUKCameraPlayState::Stopped" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMRUKCameraPlayState::Stopped", (int64)EMRUKCameraPlayState::Stopped },
		{ "EMRUKCameraPlayState::Playing", (int64)EMRUKCameraPlayState::Playing },
		{ "EMRUKCameraPlayState::PlaySuspended", (int64)EMRUKCameraPlayState::PlaySuspended },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	"EMRUKCameraPlayState",
	"EMRUKCameraPlayState",
	Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState()
{
	if (!Z_Registration_Info_UEnum_EMRUKCameraPlayState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMRUKCameraPlayState.InnerSingleton, Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMRUKCameraPlayState.InnerSingleton;
}
// ********** End Enum EMRUKCameraPlayState ********************************************************

// ********** Begin ScriptStruct FMRUKCameraIntrinsics *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics;
class UScriptStruct* FMRUKCameraIntrinsics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, (UObject*)Z_Construct_UPackage__Script_MRUtilityKit(), TEXT("MRUKCameraIntrinsics"));
	}
	return Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRUKCameraIntrinsics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
	nullptr,
	&NewStructOps,
	"MRUKCameraIntrinsics",
	nullptr,
	0,
	sizeof(FMRUKCameraIntrinsics),
	alignof(FMRUKCameraIntrinsics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMRUKCameraIntrinsics()
{
	if (!Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton, Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics.InnerSingleton;
}
// ********** End ScriptStruct FMRUKCameraIntrinsics ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraIntrinsics *******
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms
	{
		EMRUKCameraEye Eye;
		FMRUKCameraIntrinsics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the camera intrinsics.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the camera intrinsics." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, METADATA_PARAMS(0, nullptr) }; // 2085868216
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetCameraIntrinsics", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetCameraIntrinsics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetCameraIntrinsics)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMRUKCameraIntrinsics*)Z_Param__Result=P_THIS->GetCameraIntrinsics(EMRUKCameraEye(Z_Param_Eye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraIntrinsics *********

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraPose *************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms
	{
		EMRUKCameraEye Eye;
		FVector OutPosition;
		FQuat OutOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the pose of the camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the pose of the camera." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::NewProp_OutOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetCameraPose", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetCameraPose)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraPose(EMRUKCameraEye(Z_Param_Eye),Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetCameraPose ***************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetSupportedResolutions ***
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms
	{
		EMRUKCameraEye CameraEye;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get a list of all supported resolutions.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a list of all supported resolutions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetSupportedResolutions", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetSupportedResolutions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetSupportedResolutions)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetSupportedResolutions(EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetSupportedResolutions *****

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function GetTimestamp **************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms
	{
		EMRUKCameraEye Eye;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Timestamp associated with the latest camera image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestamp associated with the latest camera image." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "GetTimestamp", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::MRUKPassthroughCameraAccessSubsystem_eventGetTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execGetTimestamp)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp(EMRUKCameraEye(Z_Param_Eye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function GetTimestamp ****************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function Play **********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms
	{
		int32 Width;
		int32 Height;
		int32 MaxFramerate;
		EMRUKCameraEye CameraEye;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start the passthrough camera for the given eye.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the passthrough camera for the given eye." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFramerate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_MaxFramerate = { "MaxFramerate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, MaxFramerate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
void Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms), &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_MaxFramerate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "Play", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::MRUKPassthroughCameraAccessSubsystem_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execPlay)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxFramerate);
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play(Z_Param_Out_Width,Z_Param_Out_Height,Z_Param_MaxFramerate,EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function Play ************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function Stop **********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventStop_Parms
	{
		EMRUKCameraEye CameraEye;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the passthrough camera for the given eye.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the passthrough camera for the given eye." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventStop_Parms, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::NewProp_CameraEye,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "Stop", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::MRUKPassthroughCameraAccessSubsystem_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::MRUKPassthroughCameraAccessSubsystem_eventStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execStop)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_CameraEye);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop(EMRUKCameraEye(Z_Param_CameraEye));
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function Stop ************************

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function ViewportPointToWorldSpaceRay 
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms
	{
		EMRUKCameraEye Eye;
		FVector2D ViewportPoint;
		FVector OutPosition;
		FVector OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Constructs a ray in world space that points to the given point in passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructs a ray in world space that points to the given point in passthrough camera space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_ViewportPoint = { "ViewportPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, ViewportPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_ViewportPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "ViewportPointToWorldSpaceRay", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::MRUKPassthroughCameraAccessSubsystem_eventViewportPointToWorldSpaceRay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execViewportPointToWorldSpaceRay)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT(FVector2D,Z_Param_ViewportPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewportPointToWorldSpaceRay(EMRUKCameraEye(Z_Param_Eye),Z_Param_ViewportPoint,Z_Param_Out_OutPosition,Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function ViewportPointToWorldSpaceRay 

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem Function WorldToViewportPoint ******
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics
{
	struct MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms
	{
		EMRUKCameraEye Eye;
		FVector WorldPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts the world position into the passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts the world position into the passthrough camera space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Eye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Eye;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_Eye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_Eye = { "Eye", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, Eye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(0, nullptr) }; // 527181034
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_Eye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_Eye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, nullptr, "WorldToViewportPoint", Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::MRUKPassthroughCameraAccessSubsystem_eventWorldToViewportPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessSubsystem::execWorldToViewportPoint)
{
	P_GET_ENUM(EMRUKCameraEye,Z_Param_Eye);
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToViewportPoint(EMRUKCameraEye(Z_Param_Eye),Z_Param_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem Function WorldToViewportPoint ********

// ********** Begin Class UMRUKPassthroughCameraAccessSubsystem ************************************
void UMRUKPassthroughCameraAccessSubsystem::StaticRegisterNativesUMRUKPassthroughCameraAccessSubsystem()
{
	UClass* Class = UMRUKPassthroughCameraAccessSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraIntrinsics", &UMRUKPassthroughCameraAccessSubsystem::execGetCameraIntrinsics },
		{ "GetCameraPose", &UMRUKPassthroughCameraAccessSubsystem::execGetCameraPose },
		{ "GetSupportedResolutions", &UMRUKPassthroughCameraAccessSubsystem::execGetSupportedResolutions },
		{ "GetTimestamp", &UMRUKPassthroughCameraAccessSubsystem::execGetTimestamp },
		{ "Play", &UMRUKPassthroughCameraAccessSubsystem::execPlay },
		{ "Stop", &UMRUKPassthroughCameraAccessSubsystem::execStop },
		{ "ViewportPointToWorldSpaceRay", &UMRUKPassthroughCameraAccessSubsystem::execViewportPointToWorldSpaceRay },
		{ "WorldToViewportPoint", &UMRUKPassthroughCameraAccessSubsystem::execWorldToViewportPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem;
UClass* UMRUKPassthroughCameraAccessSubsystem::GetPrivateStaticClass()
{
	using TClass = UMRUKPassthroughCameraAccessSubsystem;
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKPassthroughCameraAccessSubsystem"),
			Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton,
			StaticRegisterNativesUMRUKPassthroughCameraAccessSubsystem,
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
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_NoRegister()
{
	return UMRUKPassthroughCameraAccessSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MRUtilityKit" },
		{ "DisplayName", "MR Utility Kit Passthrough Camera Access Subsystem" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraIntrinsics, "GetCameraIntrinsics" }, // 2924798707
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetCameraPose, "GetCameraPose" }, // 544986039
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetSupportedResolutions, "GetSupportedResolutions" }, // 3674955801
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_GetTimestamp, "GetTimestamp" }, // 2970185702
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Play, "Play" }, // 239252664
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_Stop, "Stop" }, // 2407980149
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_ViewportPointToWorldSpaceRay, "ViewportPointToWorldSpaceRay" }, // 2212705672
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessSubsystem_WorldToViewportPoint, "WorldToViewportPoint" }, // 3570622962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::ClassParams = {
	&UMRUKPassthroughCameraAccessSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem()
{
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton, Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem.OuterSingleton;
}
UMRUKPassthroughCameraAccessSubsystem::UMRUKPassthroughCameraAccessSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKPassthroughCameraAccessSubsystem);
UMRUKPassthroughCameraAccessSubsystem::~UMRUKPassthroughCameraAccessSubsystem() {}
// ********** End Class UMRUKPassthroughCameraAccessSubsystem **************************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraIntrinsics ****************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics
{
	struct MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms
	{
		FMRUKCameraIntrinsics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the camera intrinsics.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the camera intrinsics." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRUKCameraIntrinsics, METADATA_PARAMS(0, nullptr) }; // 2085868216
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraIntrinsics", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::MRUKPassthroughCameraAccess_eventGetCameraIntrinsics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraIntrinsics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMRUKCameraIntrinsics*)Z_Param__Result=P_THIS->GetCameraIntrinsics();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraIntrinsics ******************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraPlayState *****************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics
{
	struct MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms
	{
		EMRUKCameraPlayState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the current camera play state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current camera play state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms, ReturnValue), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraPlayState, METADATA_PARAMS(0, nullptr) }; // 1978133757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraPlayState", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::MRUKPassthroughCameraAccess_eventGetCameraPlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraPlayState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMRUKCameraPlayState*)Z_Param__Result=P_THIS->GetCameraPlayState();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraPlayState *******************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetCameraPose **********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics
{
	struct MRUKPassthroughCameraAccess_eventGetCameraPose_Parms
	{
		FVector OutPosition;
		FQuat OutOrientation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the pose of the camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the pose of the camera." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutOrientation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPose_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::NewProp_OutOrientation = { "OutOrientation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetCameraPose_Parms, OutOrientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::NewProp_OutOrientation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetCameraPose", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::MRUKPassthroughCameraAccess_eventGetCameraPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::MRUKPassthroughCameraAccess_eventGetCameraPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetCameraPose)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutOrientation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraPose(Z_Param_Out_OutPosition,Z_Param_Out_OutOrientation);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetCameraPose ************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function GetTimestamp ***********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics
{
	struct MRUKPassthroughCameraAccess_eventGetTimestamp_Parms
	{
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Timestamp associated with the latest camera image.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timestamp associated with the latest camera image." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventGetTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "GetTimestamp", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::MRUKPassthroughCameraAccess_eventGetTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::MRUKPassthroughCameraAccess_eventGetTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execGetTimestamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=P_THIS->GetTimestamp();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function GetTimestamp *************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function IsCameraPlaying ********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics
{
	struct MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if the camera is currently playing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if the camera is currently playing." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms), &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "IsCameraPlaying", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::MRUKPassthroughCameraAccess_eventIsCameraPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execIsCameraPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCameraPlaying();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function IsCameraPlaying **********************

// ********** Begin Class UMRUKPassthroughCameraAccess Function OnResume ***************************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "OnResume", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execOnResume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnResume();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function OnResume *****************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function OnSuspend **************************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "OnSuspend", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execOnSuspend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSuspend();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function OnSuspend ****************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function Play *******************************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics
{
	struct MRUKPassthroughCameraAccess_eventPlay_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Start the passthrough camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start the passthrough camera." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MRUKPassthroughCameraAccess_eventPlay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MRUKPassthroughCameraAccess_eventPlay_Parms), &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "Play", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::MRUKPassthroughCameraAccess_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::MRUKPassthroughCameraAccess_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function Play *********************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function Stop *******************************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stop the passthrough camera.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop the passthrough camera." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function Stop *********************************

// ********** Begin Class UMRUKPassthroughCameraAccess Function ViewportPointToWorldSpaceRay *******
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics
{
	struct MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms
	{
		FVector2D ViewportPoint;
		FVector OutPosition;
		FVector OutDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Constructs a ray in world space that points to the given point in passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Constructs a ray in world space that points to the given point in passthrough camera space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_ViewportPoint = { "ViewportPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, ViewportPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_ViewportPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_OutPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::NewProp_OutDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "ViewportPointToWorldSpaceRay", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::MRUKPassthroughCameraAccess_eventViewportPointToWorldSpaceRay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execViewportPointToWorldSpaceRay)
{
	P_GET_STRUCT(FVector2D,Z_Param_ViewportPoint);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ViewportPointToWorldSpaceRay(Z_Param_ViewportPoint,Z_Param_Out_OutPosition,Z_Param_Out_OutDirection);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function ViewportPointToWorldSpaceRay *********

// ********** Begin Class UMRUKPassthroughCameraAccess Function WorldToViewportPoint ***************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics
{
	struct MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms
	{
		FVector WorldPosition;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts the world position into the passthrough camera space.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts the world position into the passthrough camera space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccess, nullptr, "WorldToViewportPoint", Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::MRUKPassthroughCameraAccess_eventWorldToViewportPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccess::execWorldToViewportPoint)
{
	P_GET_STRUCT(FVector,Z_Param_WorldPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->WorldToViewportPoint(Z_Param_WorldPosition);
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccess Function WorldToViewportPoint *****************

// ********** Begin Class UMRUKPassthroughCameraAccess *********************************************
void UMRUKPassthroughCameraAccess::StaticRegisterNativesUMRUKPassthroughCameraAccess()
{
	UClass* Class = UMRUKPassthroughCameraAccess::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCameraIntrinsics", &UMRUKPassthroughCameraAccess::execGetCameraIntrinsics },
		{ "GetCameraPlayState", &UMRUKPassthroughCameraAccess::execGetCameraPlayState },
		{ "GetCameraPose", &UMRUKPassthroughCameraAccess::execGetCameraPose },
		{ "GetTimestamp", &UMRUKPassthroughCameraAccess::execGetTimestamp },
		{ "IsCameraPlaying", &UMRUKPassthroughCameraAccess::execIsCameraPlaying },
		{ "OnResume", &UMRUKPassthroughCameraAccess::execOnResume },
		{ "OnSuspend", &UMRUKPassthroughCameraAccess::execOnSuspend },
		{ "Play", &UMRUKPassthroughCameraAccess::execPlay },
		{ "Stop", &UMRUKPassthroughCameraAccess::execStop },
		{ "ViewportPointToWorldSpaceRay", &UMRUKPassthroughCameraAccess::execViewportPointToWorldSpaceRay },
		{ "WorldToViewportPoint", &UMRUKPassthroughCameraAccess::execWorldToViewportPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess;
UClass* UMRUKPassthroughCameraAccess::GetPrivateStaticClass()
{
	using TClass = UMRUKPassthroughCameraAccess;
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKPassthroughCameraAccess"),
			Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton,
			StaticRegisterNativesUMRUKPassthroughCameraAccess,
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
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister()
{
	return UMRUKPassthroughCameraAccess::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraEye_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * From which camera eye the video should be played.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From which camera eye the video should be played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionWidth_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max resolution width of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max resolution width of the video." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionHeight_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Max resolution height of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max resolution height of the video." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFramerate_MetaData[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Maximum framerate of the video.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum framerate of the video." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CameraEye_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraEye;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFramerate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraIntrinsics, "GetCameraIntrinsics" }, // 1529078126
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPlayState, "GetCameraPlayState" }, // 1578086385
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetCameraPose, "GetCameraPose" }, // 1930390997
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_GetTimestamp, "GetTimestamp" }, // 3703693834
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_IsCameraPlaying, "IsCameraPlaying" }, // 2973587054
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnResume, "OnResume" }, // 670000232
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_OnSuspend, "OnSuspend" }, // 3403788684
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Play, "Play" }, // 17061110
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_Stop, "Stop" }, // 2413550550
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_ViewportPointToWorldSpaceRay, "ViewportPointToWorldSpaceRay" }, // 2162114334
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccess_WorldToViewportPoint, "WorldToViewportPoint" }, // 1360830138
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccess>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_CameraEye_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_CameraEye = { "CameraEye", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, CameraEye), Z_Construct_UEnum_MRUtilityKit_EMRUKCameraEye, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraEye_MetaData), NewProp_CameraEye_MetaData) }; // 527181034
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_ResolutionWidth = { "ResolutionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, ResolutionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionWidth_MetaData), NewProp_ResolutionWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_ResolutionHeight = { "ResolutionHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, ResolutionHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResolutionHeight_MetaData), NewProp_ResolutionHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_MaxFramerate = { "MaxFramerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccess, MaxFramerate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFramerate_MetaData), NewProp_MaxFramerate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_CameraEye_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_CameraEye,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_ResolutionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_ResolutionHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::NewProp_MaxFramerate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::ClassParams = {
	&UMRUKPassthroughCameraAccess::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccess()
{
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton, Z_Construct_UClass_UMRUKPassthroughCameraAccess_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMRUKPassthroughCameraAccess);
UMRUKPassthroughCameraAccess::~UMRUKPassthroughCameraAccess() {}
// ********** End Class UMRUKPassthroughCameraAccess ***********************************************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetAspectRatio **************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics
{
	struct MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current aspect ratio of the texture.\n\x09 *\n\x09 * @return Texture aspect ratio.\n\x09 * @see GetHeight, GetWidth\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetAspectRatio", Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::MRUKPassthroughCameraAccessTexture_eventGetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetAspectRatio ****************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetHeight *******************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics
{
	struct MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current height of the texture.\n\x09 *\n\x09 * @return Texture height (in pixels).\n\x09 * @see GetAspectRatio, GetWidth\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetHeight", Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::MRUKPassthroughCameraAccessTexture_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetHeight *********************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture Function GetWidth ********************
struct Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics
{
	struct MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MR Utility Kit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current width of the texture.\n\x09 *\n\x09 * @return Texture width (in pixels).\n\x09 * @see GetAspectRatio, GetHeight\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, nullptr, "GetWidth", Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::MRUKPassthroughCameraAccessTexture_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMRUKPassthroughCameraAccessTexture::execGetWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWidth();
	P_NATIVE_END;
}
// ********** End Class UMRUKPassthroughCameraAccessTexture Function GetWidth **********************

// ********** Begin Class UMRUKPassthroughCameraAccessTexture **************************************
void UMRUKPassthroughCameraAccessTexture::StaticRegisterNativesUMRUKPassthroughCameraAccessTexture()
{
	UClass* Class = UMRUKPassthroughCameraAccessTexture::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAspectRatio", &UMRUKPassthroughCameraAccessTexture::execGetAspectRatio },
		{ "GetHeight", &UMRUKPassthroughCameraAccessTexture::execGetHeight },
		{ "GetWidth", &UMRUKPassthroughCameraAccessTexture::execGetWidth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture;
UClass* UMRUKPassthroughCameraAccessTexture::GetPrivateStaticClass()
{
	using TClass = UMRUKPassthroughCameraAccessTexture;
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MRUKPassthroughCameraAccessTexture"),
			Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton,
			StaticRegisterNativesUMRUKPassthroughCameraAccessTexture,
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
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.InnerSingleton;
}
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_NoRegister()
{
	return UMRUKPassthroughCameraAccessTexture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object Texture Compression" },
		{ "IncludePath", "MRUKPassthroughCameraAccess.h" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughCameraAccess_MetaData[] = {
		{ "Category", "MR Utility Kit" },
		{ "ModuleRelativePath", "Public/MRUKPassthroughCameraAccess.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PassthroughCameraAccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetAspectRatio, "GetAspectRatio" }, // 3705602368
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetHeight, "GetHeight" }, // 4098059878
		{ &Z_Construct_UFunction_UMRUKPassthroughCameraAccessTexture_GetWidth, "GetWidth" }, // 1497497431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMRUKPassthroughCameraAccessTexture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::NewProp_PassthroughCameraAccess = { "PassthroughCameraAccess", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMRUKPassthroughCameraAccessTexture, PassthroughCameraAccess), Z_Construct_UClass_UMRUKPassthroughCameraAccess_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassthroughCameraAccess_MetaData), NewProp_PassthroughCameraAccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::NewProp_PassthroughCameraAccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture,
	(UObject* (*)())Z_Construct_UPackage__Script_MRUtilityKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::ClassParams = {
	&UMRUKPassthroughCameraAccessTexture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::Class_MetaDataParams), Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture()
{
	if (!Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton, Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture.OuterSingleton;
}
UMRUKPassthroughCameraAccessTexture::UMRUKPassthroughCameraAccessTexture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
UMRUKPassthroughCameraAccessTexture::~UMRUKPassthroughCameraAccessTexture() {}
// ********** End Class UMRUKPassthroughCameraAccessTexture ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMRUKCameraEye_StaticEnum, TEXT("EMRUKCameraEye"), &Z_Registration_Info_UEnum_EMRUKCameraEye, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 527181034U) },
		{ EMRUKCameraPlayState_StaticEnum, TEXT("EMRUKCameraPlayState"), &Z_Registration_Info_UEnum_EMRUKCameraPlayState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1978133757U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMRUKCameraIntrinsics::StaticStruct, Z_Construct_UScriptStruct_FMRUKCameraIntrinsics_Statics::NewStructOps, TEXT("MRUKCameraIntrinsics"), &Z_Registration_Info_UScriptStruct_FMRUKCameraIntrinsics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMRUKCameraIntrinsics), 2085868216U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessSubsystem, UMRUKPassthroughCameraAccessSubsystem::StaticClass, TEXT("UMRUKPassthroughCameraAccessSubsystem"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessSubsystem), 2903431578U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccess, UMRUKPassthroughCameraAccess::StaticClass, TEXT("UMRUKPassthroughCameraAccess"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccess, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccess), 1379259804U) },
		{ Z_Construct_UClass_UMRUKPassthroughCameraAccessTexture, UMRUKPassthroughCameraAccessTexture::StaticClass, TEXT("UMRUKPassthroughCameraAccessTexture"), &Z_Registration_Info_UClass_UMRUKPassthroughCameraAccessTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMRUKPassthroughCameraAccessTexture), 509459097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_364968145(TEXT("/Script/MRUtilityKit"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_MRUtilityKit_Public_MRUKPassthroughCameraAccess_h__Script_MRUtilityKit_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
