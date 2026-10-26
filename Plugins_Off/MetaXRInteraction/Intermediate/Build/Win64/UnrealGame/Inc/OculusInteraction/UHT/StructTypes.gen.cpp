// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructTypes.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPayload_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPose_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisAlignedBox();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkBoundsClipper();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRangeParams();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPosef();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkRay();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkRayInteractor_Config();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkSurfaceHit();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkAxisAlignedBox_BoxSide ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide;
static UEnum* EIsdkAxisAlignedBox_BoxSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkAxisAlignedBox_BoxSide"));
	}
	return Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkAxisAlignedBox_BoxSide>()
{
	return EIsdkAxisAlignedBox_BoxSide_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Xmax.Name", "EIsdkAxisAlignedBox_BoxSide::Xmax" },
		{ "Xmin.Name", "EIsdkAxisAlignedBox_BoxSide::Xmin" },
		{ "Ymax.Name", "EIsdkAxisAlignedBox_BoxSide::Ymax" },
		{ "Ymin.Name", "EIsdkAxisAlignedBox_BoxSide::Ymin" },
		{ "Zmax.Name", "EIsdkAxisAlignedBox_BoxSide::Zmax" },
		{ "Zmin.Name", "EIsdkAxisAlignedBox_BoxSide::Zmin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkAxisAlignedBox_BoxSide::Xmin", (int64)EIsdkAxisAlignedBox_BoxSide::Xmin },
		{ "EIsdkAxisAlignedBox_BoxSide::Xmax", (int64)EIsdkAxisAlignedBox_BoxSide::Xmax },
		{ "EIsdkAxisAlignedBox_BoxSide::Ymin", (int64)EIsdkAxisAlignedBox_BoxSide::Ymin },
		{ "EIsdkAxisAlignedBox_BoxSide::Ymax", (int64)EIsdkAxisAlignedBox_BoxSide::Ymax },
		{ "EIsdkAxisAlignedBox_BoxSide::Zmin", (int64)EIsdkAxisAlignedBox_BoxSide::Zmin },
		{ "EIsdkAxisAlignedBox_BoxSide::Zmax", (int64)EIsdkAxisAlignedBox_BoxSide::Zmax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkAxisAlignedBox_BoxSide",
	"EIsdkAxisAlignedBox_BoxSide",
	Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide()
{
	if (!Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkAxisAlignedBox_BoxSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide.InnerSingleton;
}
// ********** End Enum EIsdkAxisAlignedBox_BoxSide *************************************************

// ********** Begin Enum EIsdkDataSourceUpdateAttributeResult **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult;
static UEnum* EIsdkDataSourceUpdateAttributeResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDataSourceUpdateAttributeResult"));
	}
	return Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDataSourceUpdateAttributeResult>()
{
	return EIsdkDataSourceUpdateAttributeResult_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoesNotExist.Name", "EIsdkDataSourceUpdateAttributeResult::DoesNotExist" },
		{ "Modified.Name", "EIsdkDataSourceUpdateAttributeResult::Modified" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "NotModified.Name", "EIsdkDataSourceUpdateAttributeResult::NotModified" },
		{ "Unknown.Name", "EIsdkDataSourceUpdateAttributeResult::Unknown" },
		{ "WrongValueType.Name", "EIsdkDataSourceUpdateAttributeResult::WrongValueType" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDataSourceUpdateAttributeResult::Unknown", (int64)EIsdkDataSourceUpdateAttributeResult::Unknown },
		{ "EIsdkDataSourceUpdateAttributeResult::Modified", (int64)EIsdkDataSourceUpdateAttributeResult::Modified },
		{ "EIsdkDataSourceUpdateAttributeResult::NotModified", (int64)EIsdkDataSourceUpdateAttributeResult::NotModified },
		{ "EIsdkDataSourceUpdateAttributeResult::DoesNotExist", (int64)EIsdkDataSourceUpdateAttributeResult::DoesNotExist },
		{ "EIsdkDataSourceUpdateAttributeResult::WrongValueType", (int64)EIsdkDataSourceUpdateAttributeResult::WrongValueType },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDataSourceUpdateAttributeResult",
	"EIsdkDataSourceUpdateAttributeResult",
	Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult()
{
	if (!Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateAttributeResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult.InnerSingleton;
}
// ********** End Enum EIsdkDataSourceUpdateAttributeResult ****************************************

// ********** Begin Enum EIsdkDataSourceUpdateDataResult *******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult;
static UEnum* EIsdkDataSourceUpdateDataResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDataSourceUpdateDataResult"));
	}
	return Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDataSourceUpdateDataResult>()
{
	return EIsdkDataSourceUpdateDataResult_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failure_InvalidPrevDataSource.Name", "EIsdkDataSourceUpdateDataResult::Failure_InvalidPrevDataSource" },
		{ "Modified.Name", "EIsdkDataSourceUpdateDataResult::Modified" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "NotModified.Name", "EIsdkDataSourceUpdateDataResult::NotModified" },
		{ "Unknown.Name", "EIsdkDataSourceUpdateDataResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDataSourceUpdateDataResult::Failure_InvalidPrevDataSource", (int64)EIsdkDataSourceUpdateDataResult::Failure_InvalidPrevDataSource },
		{ "EIsdkDataSourceUpdateDataResult::Unknown", (int64)EIsdkDataSourceUpdateDataResult::Unknown },
		{ "EIsdkDataSourceUpdateDataResult::Modified", (int64)EIsdkDataSourceUpdateDataResult::Modified },
		{ "EIsdkDataSourceUpdateDataResult::NotModified", (int64)EIsdkDataSourceUpdateDataResult::NotModified },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDataSourceUpdateDataResult",
	"EIsdkDataSourceUpdateDataResult",
	Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult()
{
	if (!Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDataSourceUpdateDataResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult.InnerSingleton;
}
// ********** End Enum EIsdkDataSourceUpdateDataResult *********************************************

// ********** Begin Enum EIsdkDetection_FingerCalcType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType;
static UEnum* EIsdkDetection_FingerCalcType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDetection_FingerCalcType"));
	}
	return Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDetection_FingerCalcType>()
{
	return EIsdkDetection_FingerCalcType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Abduction.Name", "EIsdkDetection_FingerCalcType::Abduction" },
		{ "BlueprintType", "true" },
		{ "Curl.Name", "EIsdkDetection_FingerCalcType::Curl" },
		{ "Flexion.Name", "EIsdkDetection_FingerCalcType::Flexion" },
		{ "Grab.Name", "EIsdkDetection_FingerCalcType::Grab" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Opposition.Name", "EIsdkDetection_FingerCalcType::Opposition" },
		{ "OppositionNormal.Name", "EIsdkDetection_FingerCalcType::OppositionNormal" },
		{ "OppositionTangentPlane.Name", "EIsdkDetection_FingerCalcType::OppositionTangentPlane" },
		{ "OppositionTopThree.Name", "EIsdkDetection_FingerCalcType::OppositionTopThree" },
		{ "OppositionTopTwo.Name", "EIsdkDetection_FingerCalcType::OppositionTopTwo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDetection_FingerCalcType::Curl", (int64)EIsdkDetection_FingerCalcType::Curl },
		{ "EIsdkDetection_FingerCalcType::Flexion", (int64)EIsdkDetection_FingerCalcType::Flexion },
		{ "EIsdkDetection_FingerCalcType::Abduction", (int64)EIsdkDetection_FingerCalcType::Abduction },
		{ "EIsdkDetection_FingerCalcType::Opposition", (int64)EIsdkDetection_FingerCalcType::Opposition },
		{ "EIsdkDetection_FingerCalcType::Grab", (int64)EIsdkDetection_FingerCalcType::Grab },
		{ "EIsdkDetection_FingerCalcType::OppositionTangentPlane", (int64)EIsdkDetection_FingerCalcType::OppositionTangentPlane },
		{ "EIsdkDetection_FingerCalcType::OppositionNormal", (int64)EIsdkDetection_FingerCalcType::OppositionNormal },
		{ "EIsdkDetection_FingerCalcType::OppositionTopTwo", (int64)EIsdkDetection_FingerCalcType::OppositionTopTwo },
		{ "EIsdkDetection_FingerCalcType::OppositionTopThree", (int64)EIsdkDetection_FingerCalcType::OppositionTopThree },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDetection_FingerCalcType",
	"EIsdkDetection_FingerCalcType",
	Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType()
{
	if (!Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType.InnerSingleton;
}
// ********** End Enum EIsdkDetection_FingerCalcType ***********************************************

// ********** Begin Enum EIsdkDetection_ThumbCalcType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType;
static UEnum* EIsdkDetection_ThumbCalcType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDetection_ThumbCalcType"));
	}
	return Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDetection_ThumbCalcType>()
{
	return EIsdkDetection_ThumbCalcType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Curl.Name", "EIsdkDetection_ThumbCalcType::Curl" },
		{ "Flexion.Name", "EIsdkDetection_ThumbCalcType::Flexion" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDetection_ThumbCalcType::Curl", (int64)EIsdkDetection_ThumbCalcType::Curl },
		{ "EIsdkDetection_ThumbCalcType::Flexion", (int64)EIsdkDetection_ThumbCalcType::Flexion },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDetection_ThumbCalcType",
	"EIsdkDetection_ThumbCalcType",
	Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType()
{
	if (!Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType.InnerSingleton;
}
// ********** End Enum EIsdkDetection_ThumbCalcType ************************************************

// ********** Begin Enum EIsdkDigitRecognizer_UpdateResult *****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult;
static UEnum* EIsdkDigitRecognizer_UpdateResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDigitRecognizer_UpdateResult"));
	}
	return Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDigitRecognizer_UpdateResult>()
{
	return EIsdkDigitRecognizer_UpdateResult_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failure.Name", "EIsdkDigitRecognizer_UpdateResult::Failure" },
		{ "FrameDataIsStale.Name", "EIsdkDigitRecognizer_UpdateResult::FrameDataIsStale" },
		{ "FrameDataUnavailable.Name", "EIsdkDigitRecognizer_UpdateResult::FrameDataUnavailable" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Success.Name", "EIsdkDigitRecognizer_UpdateResult::Success" },
		{ "Unknown.Name", "EIsdkDigitRecognizer_UpdateResult::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDigitRecognizer_UpdateResult::Failure", (int64)EIsdkDigitRecognizer_UpdateResult::Failure },
		{ "EIsdkDigitRecognizer_UpdateResult::Unknown", (int64)EIsdkDigitRecognizer_UpdateResult::Unknown },
		{ "EIsdkDigitRecognizer_UpdateResult::Success", (int64)EIsdkDigitRecognizer_UpdateResult::Success },
		{ "EIsdkDigitRecognizer_UpdateResult::FrameDataUnavailable", (int64)EIsdkDigitRecognizer_UpdateResult::FrameDataUnavailable },
		{ "EIsdkDigitRecognizer_UpdateResult::FrameDataIsStale", (int64)EIsdkDigitRecognizer_UpdateResult::FrameDataIsStale },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDigitRecognizer_UpdateResult",
	"EIsdkDigitRecognizer_UpdateResult",
	Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult()
{
	if (!Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDigitRecognizer_UpdateResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult.InnerSingleton;
}
// ********** End Enum EIsdkDigitRecognizer_UpdateResult *******************************************

// ********** Begin Enum EIsdkFingerJoint **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkFingerJoint;
static UEnum* EIsdkFingerJoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkFingerJoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkFingerJoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkFingerJoint"));
	}
	return Z_Registration_Info_UEnum_EIsdkFingerJoint.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkFingerJoint>()
{
	return EIsdkFingerJoint_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distal.Name", "EIsdkFingerJoint::Distal" },
		{ "Intermediate.Name", "EIsdkFingerJoint::Intermediate" },
		{ "Metacarpal.Name", "EIsdkFingerJoint::Metacarpal" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Proximal.Name", "EIsdkFingerJoint::Proximal" },
		{ "Tip.Name", "EIsdkFingerJoint::Tip" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkFingerJoint::Metacarpal", (int64)EIsdkFingerJoint::Metacarpal },
		{ "EIsdkFingerJoint::Proximal", (int64)EIsdkFingerJoint::Proximal },
		{ "EIsdkFingerJoint::Intermediate", (int64)EIsdkFingerJoint::Intermediate },
		{ "EIsdkFingerJoint::Distal", (int64)EIsdkFingerJoint::Distal },
		{ "EIsdkFingerJoint::Tip", (int64)EIsdkFingerJoint::Tip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkFingerJoint",
	"EIsdkFingerJoint",
	Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint()
{
	if (!Z_Registration_Info_UEnum_EIsdkFingerJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkFingerJoint.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkFingerJoint.InnerSingleton;
}
// ********** End Enum EIsdkFingerJoint ************************************************************

// ********** Begin Enum EIsdkFingerType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkFingerType;
static UEnum* EIsdkFingerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkFingerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkFingerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkFingerType"));
	}
	return Z_Registration_Info_UEnum_EIsdkFingerType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkFingerType>()
{
	return EIsdkFingerType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Index.Name", "EIsdkFingerType::Index" },
		{ "Middle.Name", "EIsdkFingerType::Middle" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Pinky.Name", "EIsdkFingerType::Pinky" },
		{ "Ring.Name", "EIsdkFingerType::Ring" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkFingerType::Index", (int64)EIsdkFingerType::Index },
		{ "EIsdkFingerType::Middle", (int64)EIsdkFingerType::Middle },
		{ "EIsdkFingerType::Ring", (int64)EIsdkFingerType::Ring },
		{ "EIsdkFingerType::Pinky", (int64)EIsdkFingerType::Pinky },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkFingerType",
	"EIsdkFingerType",
	Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType()
{
	if (!Z_Registration_Info_UEnum_EIsdkFingerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkFingerType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkFingerType.InnerSingleton;
}
// ********** End Enum EIsdkFingerType *************************************************************

// ********** Begin Enum EIsdkHandedness ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkHandedness;
static UEnum* EIsdkHandedness_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandedness.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkHandedness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkHandedness"));
	}
	return Z_Registration_Info_UEnum_EIsdkHandedness.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandedness>()
{
	return EIsdkHandedness_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EIsdkHandedness::Left" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Right.Name", "EIsdkHandedness::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkHandedness::Left", (int64)EIsdkHandedness::Left },
		{ "EIsdkHandedness::Right", (int64)EIsdkHandedness::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkHandedness",
	"EIsdkHandedness",
	Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandedness.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkHandedness.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkHandedness_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkHandedness.InnerSingleton;
}
// ********** End Enum EIsdkHandedness *************************************************************

// ********** Begin Enum EIsdkInteractableState ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkInteractableState;
static UEnum* EIsdkInteractableState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractableState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkInteractableState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkInteractableState"));
	}
	return Z_Registration_Info_UEnum_EIsdkInteractableState.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkInteractableState>()
{
	return EIsdkInteractableState_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EIsdkInteractableState::Disabled" },
		{ "Hover.Name", "EIsdkInteractableState::Hover" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Normal.Name", "EIsdkInteractableState::Normal" },
		{ "Select.Name", "EIsdkInteractableState::Select" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkInteractableState::Normal", (int64)EIsdkInteractableState::Normal },
		{ "EIsdkInteractableState::Hover", (int64)EIsdkInteractableState::Hover },
		{ "EIsdkInteractableState::Select", (int64)EIsdkInteractableState::Select },
		{ "EIsdkInteractableState::Disabled", (int64)EIsdkInteractableState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkInteractableState",
	"EIsdkInteractableState",
	Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractableState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkInteractableState.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkInteractableState.InnerSingleton;
}
// ********** End Enum EIsdkInteractableState ******************************************************

// ********** Begin Enum EIsdkInteractorState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkInteractorState;
static UEnum* EIsdkInteractorState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractorState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkInteractorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkInteractorState"));
	}
	return Z_Registration_Info_UEnum_EIsdkInteractorState.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkInteractorState>()
{
	return EIsdkInteractorState_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Name", "EIsdkInteractorState::Disabled" },
		{ "Hover.Name", "EIsdkInteractorState::Hover" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Normal.Name", "EIsdkInteractorState::Normal" },
		{ "Select.Name", "EIsdkInteractorState::Select" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkInteractorState::Normal", (int64)EIsdkInteractorState::Normal },
		{ "EIsdkInteractorState::Hover", (int64)EIsdkInteractorState::Hover },
		{ "EIsdkInteractorState::Select", (int64)EIsdkInteractorState::Select },
		{ "EIsdkInteractorState::Disabled", (int64)EIsdkInteractorState::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkInteractorState",
	"EIsdkInteractorState",
	Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkInteractorState.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkInteractorState.InnerSingleton;
}
// ********** End Enum EIsdkInteractorState ********************************************************

// ********** Begin Enum EIsdkNormalFacing *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkNormalFacing;
static UEnum* EIsdkNormalFacing_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkNormalFacing.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkNormalFacing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkNormalFacing"));
	}
	return Z_Registration_Info_UEnum_EIsdkNormalFacing.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkNormalFacing>()
{
	return EIsdkNormalFacing_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.Name", "EIsdkNormalFacing::Any" },
		{ "BlueprintType", "true" },
		{ "In.Name", "EIsdkNormalFacing::In" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Out.Name", "EIsdkNormalFacing::Out" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkNormalFacing::Any", (int64)EIsdkNormalFacing::Any },
		{ "EIsdkNormalFacing::In", (int64)EIsdkNormalFacing::In },
		{ "EIsdkNormalFacing::Out", (int64)EIsdkNormalFacing::Out },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkNormalFacing",
	"EIsdkNormalFacing",
	Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing()
{
	if (!Z_Registration_Info_UEnum_EIsdkNormalFacing.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkNormalFacing.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkNormalFacing_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkNormalFacing.InnerSingleton;
}
// ********** End Enum EIsdkNormalFacing ***********************************************************

// ********** Begin Enum EIsdkOneEuroHandFilter_AttributeId ****************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId;
static UEnum* EIsdkOneEuroHandFilter_AttributeId_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkOneEuroHandFilter_AttributeId"));
	}
	return Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkOneEuroHandFilter_AttributeId>()
{
	return EIsdkOneEuroHandFilter_AttributeId_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FingerRotBeta.Name", "EIsdkOneEuroHandFilter_AttributeId::FingerRotBeta" },
		{ "FingerRotDeltaMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::FingerRotDeltaMinCutOff" },
		{ "FingerRotMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::FingerRotMinCutOff" },
		{ "Frequency.Name", "EIsdkOneEuroHandFilter_AttributeId::Frequency" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Unknown.Name", "EIsdkOneEuroHandFilter_AttributeId::Unknown" },
		{ "WristPosBeta.Name", "EIsdkOneEuroHandFilter_AttributeId::WristPosBeta" },
		{ "WristPosDeltaMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::WristPosDeltaMinCutOff" },
		{ "WristPosMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::WristPosMinCutOff" },
		{ "WristRotBeta.Name", "EIsdkOneEuroHandFilter_AttributeId::WristRotBeta" },
		{ "WristRotDeltaMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::WristRotDeltaMinCutOff" },
		{ "WristRotMinCutOff.Name", "EIsdkOneEuroHandFilter_AttributeId::WristRotMinCutOff" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkOneEuroHandFilter_AttributeId::Unknown", (int64)EIsdkOneEuroHandFilter_AttributeId::Unknown },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristPosBeta", (int64)EIsdkOneEuroHandFilter_AttributeId::WristPosBeta },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristPosMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::WristPosMinCutOff },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristRotBeta", (int64)EIsdkOneEuroHandFilter_AttributeId::WristRotBeta },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristRotMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::WristRotMinCutOff },
		{ "EIsdkOneEuroHandFilter_AttributeId::FingerRotBeta", (int64)EIsdkOneEuroHandFilter_AttributeId::FingerRotBeta },
		{ "EIsdkOneEuroHandFilter_AttributeId::FingerRotMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::FingerRotMinCutOff },
		{ "EIsdkOneEuroHandFilter_AttributeId::Frequency", (int64)EIsdkOneEuroHandFilter_AttributeId::Frequency },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristPosDeltaMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::WristPosDeltaMinCutOff },
		{ "EIsdkOneEuroHandFilter_AttributeId::WristRotDeltaMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::WristRotDeltaMinCutOff },
		{ "EIsdkOneEuroHandFilter_AttributeId::FingerRotDeltaMinCutOff", (int64)EIsdkOneEuroHandFilter_AttributeId::FingerRotDeltaMinCutOff },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkOneEuroHandFilter_AttributeId",
	"EIsdkOneEuroHandFilter_AttributeId",
	Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId()
{
	if (!Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkOneEuroHandFilter_AttributeId_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId.InnerSingleton;
}
// ********** End Enum EIsdkOneEuroHandFilter_AttributeId ******************************************

// ********** Begin Enum EIsdkPointerEventType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkPointerEventType;
static UEnum* EIsdkPointerEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkPointerEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkPointerEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkPointerEventType"));
	}
	return Z_Registration_Info_UEnum_EIsdkPointerEventType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkPointerEventType>()
{
	return EIsdkPointerEventType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EIsdkPointerEventType::Cancel" },
		{ "Hover.Name", "EIsdkPointerEventType::Hover" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Move.Name", "EIsdkPointerEventType::Move" },
		{ "Select.Name", "EIsdkPointerEventType::Select" },
		{ "Unhover.Name", "EIsdkPointerEventType::Unhover" },
		{ "Unselect.Name", "EIsdkPointerEventType::Unselect" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkPointerEventType::Hover", (int64)EIsdkPointerEventType::Hover },
		{ "EIsdkPointerEventType::Unhover", (int64)EIsdkPointerEventType::Unhover },
		{ "EIsdkPointerEventType::Select", (int64)EIsdkPointerEventType::Select },
		{ "EIsdkPointerEventType::Unselect", (int64)EIsdkPointerEventType::Unselect },
		{ "EIsdkPointerEventType::Move", (int64)EIsdkPointerEventType::Move },
		{ "EIsdkPointerEventType::Cancel", (int64)EIsdkPointerEventType::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkPointerEventType",
	"EIsdkPointerEventType",
	Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType()
{
	if (!Z_Registration_Info_UEnum_EIsdkPointerEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkPointerEventType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkPointerEventType.InnerSingleton;
}
// ********** End Enum EIsdkPointerEventType *******************************************************

// ********** Begin Enum EIsdkSyntheticHand_WristLockMode ******************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode;
static UEnum* EIsdkSyntheticHand_WristLockMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkSyntheticHand_WristLockMode"));
	}
	return Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkSyntheticHand_WristLockMode>()
{
	return EIsdkSyntheticHand_WristLockMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Full.Name", "EIsdkSyntheticHand_WristLockMode::Full" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Position.Name", "EIsdkSyntheticHand_WristLockMode::Position" },
		{ "Rotation.Name", "EIsdkSyntheticHand_WristLockMode::Rotation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkSyntheticHand_WristLockMode::Position", (int64)EIsdkSyntheticHand_WristLockMode::Position },
		{ "EIsdkSyntheticHand_WristLockMode::Rotation", (int64)EIsdkSyntheticHand_WristLockMode::Rotation },
		{ "EIsdkSyntheticHand_WristLockMode::Full", (int64)EIsdkSyntheticHand_WristLockMode::Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkSyntheticHand_WristLockMode",
	"EIsdkSyntheticHand_WristLockMode",
	Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode()
{
	if (!Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkSyntheticHand_WristLockMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode.InnerSingleton;
}
// ********** End Enum EIsdkSyntheticHand_WristLockMode ********************************************

// ********** Begin Enum EIsdkThumbJoint ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkThumbJoint;
static UEnum* EIsdkThumbJoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkThumbJoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkThumbJoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkThumbJoint"));
	}
	return Z_Registration_Info_UEnum_EIsdkThumbJoint.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkThumbJoint>()
{
	return EIsdkThumbJoint_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distal.Name", "EIsdkThumbJoint::Distal" },
		{ "Metacarpal.Name", "EIsdkThumbJoint::Metacarpal" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
		{ "Proximal.Name", "EIsdkThumbJoint::Proximal" },
		{ "Tip.Name", "EIsdkThumbJoint::Tip" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkThumbJoint::Metacarpal", (int64)EIsdkThumbJoint::Metacarpal },
		{ "EIsdkThumbJoint::Proximal", (int64)EIsdkThumbJoint::Proximal },
		{ "EIsdkThumbJoint::Distal", (int64)EIsdkThumbJoint::Distal },
		{ "EIsdkThumbJoint::Tip", (int64)EIsdkThumbJoint::Tip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkThumbJoint",
	"EIsdkThumbJoint",
	Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint()
{
	if (!Z_Registration_Info_UEnum_EIsdkThumbJoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkThumbJoint.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkThumbJoint.InnerSingleton;
}
// ********** End Enum EIsdkThumbJoint *************************************************************

// ********** Begin ScriptStruct FIsdkDigitRangeParams *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams;
class UScriptStruct* FIsdkDigitRangeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkDigitRangeParams, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkDigitRangeParams"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerLimit_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerTolerance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperLimit_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperTolerance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTimeToTransition_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTimeToTransition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkDigitRangeParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_LowerLimit = { "LowerLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRangeParams, LowerLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerLimit_MetaData), NewProp_LowerLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_LowerTolerance = { "LowerTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRangeParams, LowerTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerTolerance_MetaData), NewProp_LowerTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_UpperLimit = { "UpperLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRangeParams, UpperLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperLimit_MetaData), NewProp_UpperLimit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_UpperTolerance = { "UpperTolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRangeParams, UpperTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperTolerance_MetaData), NewProp_UpperTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_MinTimeToTransition = { "MinTimeToTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRangeParams, MinTimeToTransition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTimeToTransition_MetaData), NewProp_MinTimeToTransition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_LowerLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_LowerTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_UpperLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_UpperTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewProp_MinTimeToTransition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkDigitRangeParams",
	Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::PropPointers),
	sizeof(FIsdkDigitRangeParams),
	alignof(FIsdkDigitRangeParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRangeParams()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.InnerSingleton, Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams.InnerSingleton;
}
// ********** End ScriptStruct FIsdkDigitRangeParams ***********************************************

// ********** Begin ScriptStruct FIsdkDigitRecognizer_ExpectedAngleValueRange **********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange;
class UScriptStruct* FIsdkDigitRecognizer_ExpectedAngleValueRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkDigitRecognizer_ExpectedAngleValueRange"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkDigitRecognizer_ExpectedAngleValueRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRecognizer_ExpectedAngleValueRange, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRecognizer_ExpectedAngleValueRange, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkDigitRecognizer_ExpectedAngleValueRange",
	Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::PropPointers),
	sizeof(FIsdkDigitRecognizer_ExpectedAngleValueRange),
	alignof(FIsdkDigitRecognizer_ExpectedAngleValueRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.InnerSingleton, Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange.InnerSingleton;
}
// ********** End ScriptStruct FIsdkDigitRecognizer_ExpectedAngleValueRange ************************

// ********** Begin ScriptStruct FIsdkDigitRecognizer_ExpectedDistanceValueRange *******************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange;
class UScriptStruct* FIsdkDigitRecognizer_ExpectedDistanceValueRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkDigitRecognizer_ExpectedDistanceValueRange"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkDigitRecognizer_ExpectedDistanceValueRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRecognizer_ExpectedDistanceValueRange, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkDigitRecognizer_ExpectedDistanceValueRange, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkDigitRecognizer_ExpectedDistanceValueRange",
	Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::PropPointers),
	sizeof(FIsdkDigitRecognizer_ExpectedDistanceValueRange),
	alignof(FIsdkDigitRecognizer_ExpectedDistanceValueRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.InnerSingleton, Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange.InnerSingleton;
}
// ********** End ScriptStruct FIsdkDigitRecognizer_ExpectedDistanceValueRange *********************

// ********** Begin ScriptStruct FIsdkExternalHandPositionFrame_FingerJointMapping *****************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping;
class UScriptStruct* FIsdkExternalHandPositionFrame_FingerJointMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkExternalHandPositionFrame_FingerJointMapping"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Finger_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Finger;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Joint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Joint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkExternalHandPositionFrame_FingerJointMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Finger_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkExternalHandPositionFrame_FingerJointMapping, Finger), Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Finger_MetaData), NewProp_Finger_MetaData) }; // 1877342163
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Joint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkExternalHandPositionFrame_FingerJointMapping, Joint), Z_Construct_UEnum_OculusInteraction_EIsdkFingerJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Joint_MetaData), NewProp_Joint_MetaData) }; // 2701713263
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkExternalHandPositionFrame_FingerJointMapping, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Finger_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Finger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Joint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Joint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkExternalHandPositionFrame_FingerJointMapping",
	Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::PropPointers),
	sizeof(FIsdkExternalHandPositionFrame_FingerJointMapping),
	alignof(FIsdkExternalHandPositionFrame_FingerJointMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.InnerSingleton, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping.InnerSingleton;
}
// ********** End ScriptStruct FIsdkExternalHandPositionFrame_FingerJointMapping *******************

// ********** Begin ScriptStruct FIsdkExternalHandPositionFrame_ThumbJointMapping ******************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping;
class UScriptStruct* FIsdkExternalHandPositionFrame_ThumbJointMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkExternalHandPositionFrame_ThumbJointMapping"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Joint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Joint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Joint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkExternalHandPositionFrame_ThumbJointMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Joint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Joint = { "Joint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkExternalHandPositionFrame_ThumbJointMapping, Joint), Z_Construct_UEnum_OculusInteraction_EIsdkThumbJoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Joint_MetaData), NewProp_Joint_MetaData) }; // 2604514386
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkExternalHandPositionFrame_ThumbJointMapping, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Joint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Joint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkExternalHandPositionFrame_ThumbJointMapping",
	Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::PropPointers),
	sizeof(FIsdkExternalHandPositionFrame_ThumbJointMapping),
	alignof(FIsdkExternalHandPositionFrame_ThumbJointMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.InnerSingleton, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping.InnerSingleton;
}
// ********** End ScriptStruct FIsdkExternalHandPositionFrame_ThumbJointMapping ********************

// ********** Begin ScriptStruct FIsdkFilterPropertyBlock ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock;
class UScriptStruct* FIsdkFilterPropertyBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkFilterPropertyBlock"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCutOff_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Beta_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaMinCutOff_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCutOff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Beta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaMinCutOff;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkFilterPropertyBlock>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_MinCutOff = { "MinCutOff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFilterPropertyBlock, MinCutOff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCutOff_MetaData), NewProp_MinCutOff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_Beta = { "Beta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFilterPropertyBlock, Beta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Beta_MetaData), NewProp_Beta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_DeltaMinCutOff = { "DeltaMinCutOff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFilterPropertyBlock, DeltaMinCutOff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaMinCutOff_MetaData), NewProp_DeltaMinCutOff_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_MinCutOff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_Beta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewProp_DeltaMinCutOff,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkFilterPropertyBlock",
	Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::PropPointers),
	sizeof(FIsdkFilterPropertyBlock),
	alignof(FIsdkFilterPropertyBlock),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.InnerSingleton, Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock.InnerSingleton;
}
// ********** End ScriptStruct FIsdkFilterPropertyBlock ********************************************

// ********** Begin ScriptStruct FIsdkFingerRecognizer_ExpectedFingerValueRanges *******************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges;
class UScriptStruct* FIsdkFingerRecognizer_ExpectedFingerValueRanges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkFingerRecognizer_ExpectedFingerValueRanges"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curl_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flexion_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abduction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opposition_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grab_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OppositionTangentPlane_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OppositionNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OppositionTopTwo_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OppositionTopThree_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flexion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Abduction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Opposition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Grab;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OppositionTangentPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OppositionNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OppositionTopTwo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OppositionTopThree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkFingerRecognizer_ExpectedFingerValueRanges>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, Curl), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curl_MetaData), NewProp_Curl_MetaData) }; // 3939503584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Flexion = { "Flexion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, Flexion), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flexion_MetaData), NewProp_Flexion_MetaData) }; // 3939503584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Abduction = { "Abduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, Abduction), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abduction_MetaData), NewProp_Abduction_MetaData) }; // 3939503584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Opposition = { "Opposition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, Opposition), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opposition_MetaData), NewProp_Opposition_MetaData) }; // 4223499773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Grab = { "Grab", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, Grab), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grab_MetaData), NewProp_Grab_MetaData) }; // 3939503584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTangentPlane = { "OppositionTangentPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, OppositionTangentPlane), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OppositionTangentPlane_MetaData), NewProp_OppositionTangentPlane_MetaData) }; // 4223499773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionNormal = { "OppositionNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, OppositionNormal), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OppositionNormal_MetaData), NewProp_OppositionNormal_MetaData) }; // 4223499773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTopTwo = { "OppositionTopTwo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, OppositionTopTwo), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OppositionTopTwo_MetaData), NewProp_OppositionTopTwo_MetaData) }; // 4223499773
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTopThree = { "OppositionTopThree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkFingerRecognizer_ExpectedFingerValueRanges, OppositionTopThree), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OppositionTopThree_MetaData), NewProp_OppositionTopThree_MetaData) }; // 4223499773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Curl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Flexion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Abduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Opposition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_Grab,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTangentPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTopTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewProp_OppositionTopThree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkFingerRecognizer_ExpectedFingerValueRanges",
	Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::PropPointers),
	sizeof(FIsdkFingerRecognizer_ExpectedFingerValueRanges),
	alignof(FIsdkFingerRecognizer_ExpectedFingerValueRanges),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.InnerSingleton, Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges.InnerSingleton;
}
// ********** End ScriptStruct FIsdkFingerRecognizer_ExpectedFingerValueRanges *********************

// ********** Begin ScriptStruct FIsdkInteractableStateChangeArgs **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs;
class UScriptStruct* FIsdkInteractableStateChangeArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractableStateChangeArgs"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractableStateChangeArgs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractableStateChangeArgs, PreviousState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousState_MetaData), NewProp_PreviousState_MetaData) }; // 932219690
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractableStateChangeArgs, NewState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 932219690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractableStateChangeArgs",
	Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::PropPointers),
	sizeof(FIsdkInteractableStateChangeArgs),
	alignof(FIsdkInteractableStateChangeArgs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractableStateChangeArgs ************************************

// ********** Begin ScriptStruct FIsdkInteractorStateChangeArgs ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs;
class UScriptStruct* FIsdkInteractorStateChangeArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractorStateChangeArgs"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousState_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreviousState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviousState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractorStateChangeArgs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_PreviousState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_PreviousState = { "PreviousState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractorStateChangeArgs, PreviousState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousState_MetaData), NewProp_PreviousState_MetaData) }; // 2133851697
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractorStateChangeArgs, NewState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2133851697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_PreviousState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_PreviousState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractorStateChangeArgs",
	Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::PropPointers),
	sizeof(FIsdkInteractorStateChangeArgs),
	alignof(FIsdkInteractorStateChangeArgs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractorStateChangeArgs **************************************

// ********** Begin ScriptStruct FIsdkPokeInteractable_DragThresholdingConfig **********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig;
class UScriptStruct* FIsdkPokeInteractable_DragThresholdingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractable_DragThresholdingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragTangent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragTangent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractable_DragThresholdingConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_DragThresholdingConfig*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_DragThresholdingConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_DragNormal = { "DragNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_DragThresholdingConfig, DragNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragNormal_MetaData), NewProp_DragNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_DragTangent = { "DragTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_DragThresholdingConfig, DragTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragTangent_MetaData), NewProp_DragTangent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_DragNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewProp_DragTangent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractable_DragThresholdingConfig",
	Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::PropPointers),
	sizeof(FIsdkPokeInteractable_DragThresholdingConfig),
	alignof(FIsdkPokeInteractable_DragThresholdingConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractable_DragThresholdingConfig ************************

// ********** Begin ScriptStruct FIsdkPokeInteractable_MinThresholdsConfig *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig;
class UScriptStruct* FIsdkPokeInteractable_MinThresholdsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractable_MinThresholdsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractable_MinThresholdsConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_MinThresholdsConfig*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_MinThresholdsConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_MinNormal = { "MinNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_MinThresholdsConfig, MinNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinNormal_MetaData), NewProp_MinNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewProp_MinNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractable_MinThresholdsConfig",
	Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::PropPointers),
	sizeof(FIsdkPokeInteractable_MinThresholdsConfig),
	alignof(FIsdkPokeInteractable_MinThresholdsConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractable_MinThresholdsConfig ***************************

// ********** Begin ScriptStruct FIsdkPokeInteractable_PositionPinningConfig ***********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig;
class UScriptStruct* FIsdkPokeInteractable_PositionPinningConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractable_PositionPinningConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPinDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPinDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractable_PositionPinningConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_PositionPinningConfig*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_PositionPinningConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_MaxPinDistance = { "MaxPinDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_PositionPinningConfig, MaxPinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPinDistance_MetaData), NewProp_MaxPinDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewProp_MaxPinDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractable_PositionPinningConfig",
	Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::PropPointers),
	sizeof(FIsdkPokeInteractable_PositionPinningConfig),
	alignof(FIsdkPokeInteractable_PositionPinningConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractable_PositionPinningConfig *************************

// ********** Begin ScriptStruct FIsdkPokeInteractable_RecoilAssistConfig **************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig;
class UScriptStruct* FIsdkPokeInteractable_RecoilAssistConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractable_RecoilAssistConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseVelocityExpansion_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionMinSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionMaxSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionDecayRate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseVelocityRetractExpansion_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionRetractMinSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionRetractMaxSpeed_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionRetractDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityExpansionRetractDecayRate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicDecay_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReEnterDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static void NewProp_UseVelocityExpansion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVelocityExpansion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionMinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionMaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionDecayRate;
	static void NewProp_UseVelocityRetractExpansion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseVelocityRetractExpansion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionRetractMinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionRetractMaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionRetractDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityExpansionRetractDecayRate;
	static void NewProp_UseDynamicDecay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicDecay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReEnterDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractable_RecoilAssistConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_RecoilAssistConfig*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_RecoilAssistConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityExpansion_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_RecoilAssistConfig*)Obj)->UseVelocityExpansion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityExpansion = { "UseVelocityExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_RecoilAssistConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityExpansion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseVelocityExpansion_MetaData), NewProp_UseVelocityExpansion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionMinSpeed = { "VelocityExpansionMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionMinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionMinSpeed_MetaData), NewProp_VelocityExpansionMinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionMaxSpeed = { "VelocityExpansionMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionMaxSpeed_MetaData), NewProp_VelocityExpansionMaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionDistance = { "VelocityExpansionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionDistance_MetaData), NewProp_VelocityExpansionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionDecayRate = { "VelocityExpansionDecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionDecayRate_MetaData), NewProp_VelocityExpansionDecayRate_MetaData) };
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityRetractExpansion_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_RecoilAssistConfig*)Obj)->UseVelocityRetractExpansion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityRetractExpansion = { "UseVelocityRetractExpansion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_RecoilAssistConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityRetractExpansion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseVelocityRetractExpansion_MetaData), NewProp_UseVelocityRetractExpansion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractMinSpeed = { "VelocityExpansionRetractMinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionRetractMinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionRetractMinSpeed_MetaData), NewProp_VelocityExpansionRetractMinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractMaxSpeed = { "VelocityExpansionRetractMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionRetractMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionRetractMaxSpeed_MetaData), NewProp_VelocityExpansionRetractMaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractDistance = { "VelocityExpansionRetractDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionRetractDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionRetractDistance_MetaData), NewProp_VelocityExpansionRetractDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractDecayRate = { "VelocityExpansionRetractDecayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, VelocityExpansionRetractDecayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityExpansionRetractDecayRate_MetaData), NewProp_VelocityExpansionRetractDecayRate_MetaData) };
void Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseDynamicDecay_SetBit(void* Obj)
{
	((FIsdkPokeInteractable_RecoilAssistConfig*)Obj)->UseDynamicDecay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseDynamicDecay = { "UseDynamicDecay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractable_RecoilAssistConfig), &Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseDynamicDecay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDynamicDecay_MetaData), NewProp_UseDynamicDecay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_ExitDistance = { "ExitDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, ExitDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitDistance_MetaData), NewProp_ExitDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_ReEnterDistance = { "ReEnterDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_RecoilAssistConfig, ReEnterDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReEnterDistance_MetaData), NewProp_ReEnterDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_Enabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionMinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseVelocityRetractExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractMinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractMaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_VelocityExpansionRetractDecayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_UseDynamicDecay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_ExitDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewProp_ReEnterDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractable_RecoilAssistConfig",
	Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::PropPointers),
	sizeof(FIsdkPokeInteractable_RecoilAssistConfig),
	alignof(FIsdkPokeInteractable_RecoilAssistConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractable_RecoilAssistConfig ****************************

// ********** Begin ScriptStruct FIsdkPokeInteractable_Config **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config;
class UScriptStruct* FIsdkPokeInteractable_Config::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractable_Config"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterHoverNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterHoverTangent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitHoverNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitHoverTangent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelSelectNormal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelSelectTangent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionPinningConfig_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragThresholdsConfig_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinThresholdsConfig_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoilAssistConfig_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterHoverNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EnterHoverTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitHoverNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExitHoverTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelSelectNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CancelSelectTangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionPinningConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DragThresholdsConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinThresholdsConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RecoilAssistConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractable_Config>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_EnterHoverNormal = { "EnterHoverNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, EnterHoverNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterHoverNormal_MetaData), NewProp_EnterHoverNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_EnterHoverTangent = { "EnterHoverTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, EnterHoverTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterHoverTangent_MetaData), NewProp_EnterHoverTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_ExitHoverNormal = { "ExitHoverNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, ExitHoverNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitHoverNormal_MetaData), NewProp_ExitHoverNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_ExitHoverTangent = { "ExitHoverTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, ExitHoverTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitHoverTangent_MetaData), NewProp_ExitHoverTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_CancelSelectNormal = { "CancelSelectNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, CancelSelectNormal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelSelectNormal_MetaData), NewProp_CancelSelectNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_CancelSelectTangent = { "CancelSelectTangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, CancelSelectTangent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelSelectTangent_MetaData), NewProp_CancelSelectTangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_PositionPinningConfig = { "PositionPinningConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, PositionPinningConfig), Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionPinningConfig_MetaData), NewProp_PositionPinningConfig_MetaData) }; // 351504560
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_DragThresholdsConfig = { "DragThresholdsConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, DragThresholdsConfig), Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragThresholdsConfig_MetaData), NewProp_DragThresholdsConfig_MetaData) }; // 1291546165
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_MinThresholdsConfig = { "MinThresholdsConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, MinThresholdsConfig), Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinThresholdsConfig_MetaData), NewProp_MinThresholdsConfig_MetaData) }; // 2836774867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_RecoilAssistConfig = { "RecoilAssistConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractable_Config, RecoilAssistConfig), Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoilAssistConfig_MetaData), NewProp_RecoilAssistConfig_MetaData) }; // 2475897442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_EnterHoverNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_EnterHoverTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_ExitHoverNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_ExitHoverTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_CancelSelectNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_CancelSelectTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_PositionPinningConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_DragThresholdsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_MinThresholdsConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewProp_RecoilAssistConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractable_Config",
	Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::PropPointers),
	sizeof(FIsdkPokeInteractable_Config),
	alignof(FIsdkPokeInteractable_Config),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractable_Config ****************************************

// ********** Begin ScriptStruct FIsdkPokeInteractor_Config ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config;
class UScriptStruct* FIsdkPokeInteractor_Config::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractor_Config"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchReleaseThreshold_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaFromTouchPoint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EqualDistanceThreshold_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnorePositionPinning_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TouchReleaseThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaFromTouchPoint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EqualDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_IgnorePositionPinning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnorePositionPinning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractor_Config>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_TouchReleaseThreshold = { "TouchReleaseThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractor_Config, TouchReleaseThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchReleaseThreshold_MetaData), NewProp_TouchReleaseThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_MaxDeltaFromTouchPoint = { "MaxDeltaFromTouchPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractor_Config, MaxDeltaFromTouchPoint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDeltaFromTouchPoint_MetaData), NewProp_MaxDeltaFromTouchPoint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_EqualDistanceThreshold = { "EqualDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractor_Config, EqualDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EqualDistanceThreshold_MetaData), NewProp_EqualDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractor_Config, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_IgnorePositionPinning_SetBit(void* Obj)
{
	((FIsdkPokeInteractor_Config*)Obj)->IgnorePositionPinning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_IgnorePositionPinning = { "IgnorePositionPinning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkPokeInteractor_Config), &Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_IgnorePositionPinning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnorePositionPinning_MetaData), NewProp_IgnorePositionPinning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_TouchReleaseThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_MaxDeltaFromTouchPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_EqualDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewProp_IgnorePositionPinning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractor_Config",
	Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::PropPointers),
	sizeof(FIsdkPokeInteractor_Config),
	alignof(FIsdkPokeInteractor_Config),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractor_Config ******************************************

// ********** Begin ScriptStruct FIsdkPokeInteractor_SurfaceHitCache *******************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache;
class UScriptStruct* FIsdkPokeInteractor_SurfaceHitCache::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractor_SurfaceHitCache"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractor_SurfaceHitCache>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractor_SurfaceHitCache",
	nullptr,
	0,
	sizeof(FIsdkPokeInteractor_SurfaceHitCache),
	alignof(FIsdkPokeInteractor_SurfaceHitCache),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractor_SurfaceHitCache *********************************

// ********** Begin ScriptStruct FIsdkRayInteractor_Config *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config;
class UScriptStruct* FIsdkRayInteractor_Config::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkRayInteractor_Config, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkRayInteractor_Config"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRayLength_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EqualDistanceThreshold_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRayLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EqualDistanceThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkRayInteractor_Config>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::NewProp_MaxRayLength = { "MaxRayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRayInteractor_Config, MaxRayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRayLength_MetaData), NewProp_MaxRayLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::NewProp_EqualDistanceThreshold = { "EqualDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRayInteractor_Config, EqualDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EqualDistanceThreshold_MetaData), NewProp_EqualDistanceThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::NewProp_MaxRayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::NewProp_EqualDistanceThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkRayInteractor_Config",
	Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::PropPointers),
	sizeof(FIsdkRayInteractor_Config),
	alignof(FIsdkRayInteractor_Config),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkRayInteractor_Config()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.InnerSingleton, Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config.InnerSingleton;
}
// ********** End ScriptStruct FIsdkRayInteractor_Config *******************************************

// ********** Begin ScriptStruct FIsdkRayInteractor_RayCandidateProperties *************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties;
class UScriptStruct* FIsdkRayInteractor_RayCandidateProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkRayInteractor_RayCandidateProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkRayInteractor_RayCandidateProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkRayInteractor_RayCandidateProperties",
	nullptr,
	0,
	sizeof(FIsdkRayInteractor_RayCandidateProperties),
	alignof(FIsdkRayInteractor_RayCandidateProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.InnerSingleton, Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties.InnerSingleton;
}
// ********** End ScriptStruct FIsdkRayInteractor_RayCandidateProperties ***************************

// ********** Begin ScriptStruct FIsdkSyntheticHand_Config *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config;
class UScriptStruct* FIsdkSyntheticHand_Config::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkSyntheticHand_Config"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkSyntheticHand_Config>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkSyntheticHand_Config",
	nullptr,
	0,
	sizeof(FIsdkSyntheticHand_Config),
	alignof(FIsdkSyntheticHand_Config),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.InnerSingleton, Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config.InnerSingleton;
}
// ********** End ScriptStruct FIsdkSyntheticHand_Config *******************************************

// ********** Begin ScriptStruct FIsdkThumbRecognizer_ExpectedThumbValueRanges *********************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges;
class UScriptStruct* FIsdkThumbRecognizer_ExpectedThumbValueRanges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkThumbRecognizer_ExpectedThumbValueRanges"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curl_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flexion_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Curl;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Flexion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkThumbRecognizer_ExpectedThumbValueRanges>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::NewProp_Curl = { "Curl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThumbRecognizer_ExpectedThumbValueRanges, Curl), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curl_MetaData), NewProp_Curl_MetaData) }; // 3939503584
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::NewProp_Flexion = { "Flexion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThumbRecognizer_ExpectedThumbValueRanges, Flexion), Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flexion_MetaData), NewProp_Flexion_MetaData) }; // 3939503584
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::NewProp_Curl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::NewProp_Flexion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkThumbRecognizer_ExpectedThumbValueRanges",
	Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::PropPointers),
	sizeof(FIsdkThumbRecognizer_ExpectedThumbValueRanges),
	alignof(FIsdkThumbRecognizer_ExpectedThumbValueRanges),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.InnerSingleton, Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges.InnerSingleton;
}
// ********** End ScriptStruct FIsdkThumbRecognizer_ExpectedThumbValueRanges ***********************

// ********** Begin ScriptStruct FIsdkAxisAlignedBox ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox;
class UScriptStruct* FIsdkAxisAlignedBox::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkAxisAlignedBox, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkAxisAlignedBox"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Centroid_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfSize_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowerBound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpperBound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Centroid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HalfSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkAxisAlignedBox>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisAlignedBox, LowerBound), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowerBound_MetaData), NewProp_LowerBound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisAlignedBox, UpperBound), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpperBound_MetaData), NewProp_UpperBound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_Centroid = { "Centroid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisAlignedBox, Centroid), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Centroid_MetaData), NewProp_Centroid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_HalfSize = { "HalfSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisAlignedBox, HalfSize), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfSize_MetaData), NewProp_HalfSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_LowerBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_UpperBound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_Centroid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewProp_HalfSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkAxisAlignedBox",
	Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::PropPointers),
	sizeof(FIsdkAxisAlignedBox),
	alignof(FIsdkAxisAlignedBox),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisAlignedBox()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.InnerSingleton, Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox.InnerSingleton;
}
// ********** End ScriptStruct FIsdkAxisAlignedBox *************************************************

// ********** Begin ScriptStruct FIsdkBoundsClipper ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper;
class UScriptStruct* FIsdkBoundsClipper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkBoundsClipper, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkBoundsClipper"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseProvider_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PoseProvider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkBoundsClipper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_PoseProvider = { "PoseProvider", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkBoundsClipper, PoseProvider), Z_Construct_UClass_UIsdkIPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseProvider_MetaData), NewProp_PoseProvider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkBoundsClipper, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkBoundsClipper, Size), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_PoseProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkBoundsClipper",
	Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::PropPointers),
	sizeof(FIsdkBoundsClipper),
	alignof(FIsdkBoundsClipper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkBoundsClipper()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.InnerSingleton, Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper.InnerSingleton;
}
// ********** End ScriptStruct FIsdkBoundsClipper **************************************************

// ********** Begin ScriptStruct FIsdkRay **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkRay;
class UScriptStruct* FIsdkRay::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRay.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkRay.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkRay, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkRay"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRay.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkRay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkRay>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRay, Origin), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkRay, Direction), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkRay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRay_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkRay_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkRay_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkRay",
	Z_Construct_UScriptStruct_FIsdkRay_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRay_Statics::PropPointers),
	sizeof(FIsdkRay),
	alignof(FIsdkRay),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkRay_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkRay_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkRay()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkRay.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkRay.InnerSingleton, Z_Construct_UScriptStruct_FIsdkRay_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkRay.InnerSingleton;
}
// ********** End ScriptStruct FIsdkRay ************************************************************

// ********** Begin ScriptStruct FIsdkSurfaceHit ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit;
class UScriptStruct* FIsdkSurfaceHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkSurfaceHit, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkSurfaceHit"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkSurfaceHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkSurfaceHit, Point), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkSurfaceHit, Normal), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkSurfaceHit, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkSurfaceHit",
	Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::PropPointers),
	sizeof(FIsdkSurfaceHit),
	alignof(FIsdkSurfaceHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkSurfaceHit()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.InnerSingleton, Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit.InnerSingleton;
}
// ********** End ScriptStruct FIsdkSurfaceHit *****************************************************

// ********** Begin ScriptStruct FIsdkOptionalSurfaceHit *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit;
class UScriptStruct* FIsdkOptionalSurfaceHit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkOptionalSurfaceHit"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasValue_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_HasValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkOptionalSurfaceHit>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_HasValue_SetBit(void* Obj)
{
	((FIsdkOptionalSurfaceHit*)Obj)->HasValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_HasValue = { "HasValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkOptionalSurfaceHit), &Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_HasValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasValue_MetaData), NewProp_HasValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkOptionalSurfaceHit, Value), Z_Construct_UScriptStruct_FIsdkSurfaceHit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2426538376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_HasValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkOptionalSurfaceHit",
	Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::PropPointers),
	sizeof(FIsdkOptionalSurfaceHit),
	alignof(FIsdkOptionalSurfaceHit),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.InnerSingleton, Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit.InnerSingleton;
}
// ********** End ScriptStruct FIsdkOptionalSurfaceHit *********************************************

// ********** Begin ScriptStruct FIsdkPointerEvent *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPointerEvent;
class UScriptStruct* FIsdkPointerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPointerEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPointerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPointerEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPointerEvent, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPointerEvent, Type), Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2809597128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPointerEvent, Pose), Z_Construct_UScriptStruct_FIsdkPosef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3274912445
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPointerEvent, Payload), Z_Construct_UClass_UIsdkIPayload_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Payload_MetaData), NewProp_Payload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPointerEvent",
	Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::PropPointers),
	sizeof(FIsdkPointerEvent),
	alignof(FIsdkPointerEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPointerEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPointerEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPointerEvent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkAxisAlignedBox_BoxSide_StaticEnum, TEXT("EIsdkAxisAlignedBox_BoxSide"), &Z_Registration_Info_UEnum_EIsdkAxisAlignedBox_BoxSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2860274670U) },
		{ EIsdkDataSourceUpdateAttributeResult_StaticEnum, TEXT("EIsdkDataSourceUpdateAttributeResult"), &Z_Registration_Info_UEnum_EIsdkDataSourceUpdateAttributeResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1782970218U) },
		{ EIsdkDataSourceUpdateDataResult_StaticEnum, TEXT("EIsdkDataSourceUpdateDataResult"), &Z_Registration_Info_UEnum_EIsdkDataSourceUpdateDataResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 924607448U) },
		{ EIsdkDetection_FingerCalcType_StaticEnum, TEXT("EIsdkDetection_FingerCalcType"), &Z_Registration_Info_UEnum_EIsdkDetection_FingerCalcType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3423644650U) },
		{ EIsdkDetection_ThumbCalcType_StaticEnum, TEXT("EIsdkDetection_ThumbCalcType"), &Z_Registration_Info_UEnum_EIsdkDetection_ThumbCalcType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2894301549U) },
		{ EIsdkDigitRecognizer_UpdateResult_StaticEnum, TEXT("EIsdkDigitRecognizer_UpdateResult"), &Z_Registration_Info_UEnum_EIsdkDigitRecognizer_UpdateResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1997043020U) },
		{ EIsdkFingerJoint_StaticEnum, TEXT("EIsdkFingerJoint"), &Z_Registration_Info_UEnum_EIsdkFingerJoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2701713263U) },
		{ EIsdkFingerType_StaticEnum, TEXT("EIsdkFingerType"), &Z_Registration_Info_UEnum_EIsdkFingerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1877342163U) },
		{ EIsdkHandedness_StaticEnum, TEXT("EIsdkHandedness"), &Z_Registration_Info_UEnum_EIsdkHandedness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 49432891U) },
		{ EIsdkInteractableState_StaticEnum, TEXT("EIsdkInteractableState"), &Z_Registration_Info_UEnum_EIsdkInteractableState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 932219690U) },
		{ EIsdkInteractorState_StaticEnum, TEXT("EIsdkInteractorState"), &Z_Registration_Info_UEnum_EIsdkInteractorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2133851697U) },
		{ EIsdkNormalFacing_StaticEnum, TEXT("EIsdkNormalFacing"), &Z_Registration_Info_UEnum_EIsdkNormalFacing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1209736093U) },
		{ EIsdkOneEuroHandFilter_AttributeId_StaticEnum, TEXT("EIsdkOneEuroHandFilter_AttributeId"), &Z_Registration_Info_UEnum_EIsdkOneEuroHandFilter_AttributeId, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 994028513U) },
		{ EIsdkPointerEventType_StaticEnum, TEXT("EIsdkPointerEventType"), &Z_Registration_Info_UEnum_EIsdkPointerEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2809597128U) },
		{ EIsdkSyntheticHand_WristLockMode_StaticEnum, TEXT("EIsdkSyntheticHand_WristLockMode"), &Z_Registration_Info_UEnum_EIsdkSyntheticHand_WristLockMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1957477323U) },
		{ EIsdkThumbJoint_StaticEnum, TEXT("EIsdkThumbJoint"), &Z_Registration_Info_UEnum_EIsdkThumbJoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2604514386U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkDigitRangeParams::StaticStruct, Z_Construct_UScriptStruct_FIsdkDigitRangeParams_Statics::NewStructOps, TEXT("IsdkDigitRangeParams"), &Z_Registration_Info_UScriptStruct_FIsdkDigitRangeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkDigitRangeParams), 2967017442U) },
		{ FIsdkDigitRecognizer_ExpectedAngleValueRange::StaticStruct, Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange_Statics::NewStructOps, TEXT("IsdkDigitRecognizer_ExpectedAngleValueRange"), &Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedAngleValueRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkDigitRecognizer_ExpectedAngleValueRange), 3939503584U) },
		{ FIsdkDigitRecognizer_ExpectedDistanceValueRange::StaticStruct, Z_Construct_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange_Statics::NewStructOps, TEXT("IsdkDigitRecognizer_ExpectedDistanceValueRange"), &Z_Registration_Info_UScriptStruct_FIsdkDigitRecognizer_ExpectedDistanceValueRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkDigitRecognizer_ExpectedDistanceValueRange), 4223499773U) },
		{ FIsdkExternalHandPositionFrame_FingerJointMapping::StaticStruct, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping_Statics::NewStructOps, TEXT("IsdkExternalHandPositionFrame_FingerJointMapping"), &Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkExternalHandPositionFrame_FingerJointMapping), 320220292U) },
		{ FIsdkExternalHandPositionFrame_ThumbJointMapping::StaticStruct, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping_Statics::NewStructOps, TEXT("IsdkExternalHandPositionFrame_ThumbJointMapping"), &Z_Registration_Info_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkExternalHandPositionFrame_ThumbJointMapping), 1556225157U) },
		{ FIsdkFilterPropertyBlock::StaticStruct, Z_Construct_UScriptStruct_FIsdkFilterPropertyBlock_Statics::NewStructOps, TEXT("IsdkFilterPropertyBlock"), &Z_Registration_Info_UScriptStruct_FIsdkFilterPropertyBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkFilterPropertyBlock), 512412821U) },
		{ FIsdkFingerRecognizer_ExpectedFingerValueRanges::StaticStruct, Z_Construct_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges_Statics::NewStructOps, TEXT("IsdkFingerRecognizer_ExpectedFingerValueRanges"), &Z_Registration_Info_UScriptStruct_FIsdkFingerRecognizer_ExpectedFingerValueRanges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkFingerRecognizer_ExpectedFingerValueRanges), 1518353618U) },
		{ FIsdkInteractableStateChangeArgs::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs_Statics::NewStructOps, TEXT("IsdkInteractableStateChangeArgs"), &Z_Registration_Info_UScriptStruct_FIsdkInteractableStateChangeArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractableStateChangeArgs), 4056882987U) },
		{ FIsdkInteractorStateChangeArgs::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs_Statics::NewStructOps, TEXT("IsdkInteractorStateChangeArgs"), &Z_Registration_Info_UScriptStruct_FIsdkInteractorStateChangeArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractorStateChangeArgs), 2163041558U) },
		{ FIsdkPokeInteractable_DragThresholdingConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig_Statics::NewStructOps, TEXT("IsdkPokeInteractable_DragThresholdingConfig"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_DragThresholdingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractable_DragThresholdingConfig), 1291546165U) },
		{ FIsdkPokeInteractable_MinThresholdsConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig_Statics::NewStructOps, TEXT("IsdkPokeInteractable_MinThresholdsConfig"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_MinThresholdsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractable_MinThresholdsConfig), 2836774867U) },
		{ FIsdkPokeInteractable_PositionPinningConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig_Statics::NewStructOps, TEXT("IsdkPokeInteractable_PositionPinningConfig"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_PositionPinningConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractable_PositionPinningConfig), 351504560U) },
		{ FIsdkPokeInteractable_RecoilAssistConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig_Statics::NewStructOps, TEXT("IsdkPokeInteractable_RecoilAssistConfig"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_RecoilAssistConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractable_RecoilAssistConfig), 2475897442U) },
		{ FIsdkPokeInteractable_Config::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config_Statics::NewStructOps, TEXT("IsdkPokeInteractable_Config"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractable_Config, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractable_Config), 3969149830U) },
		{ FIsdkPokeInteractor_Config::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config_Statics::NewStructOps, TEXT("IsdkPokeInteractor_Config"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_Config, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractor_Config), 2206340171U) },
		{ FIsdkPokeInteractor_SurfaceHitCache::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache_Statics::NewStructOps, TEXT("IsdkPokeInteractor_SurfaceHitCache"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractor_SurfaceHitCache, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractor_SurfaceHitCache), 2708799662U) },
		{ FIsdkRayInteractor_Config::StaticStruct, Z_Construct_UScriptStruct_FIsdkRayInteractor_Config_Statics::NewStructOps, TEXT("IsdkRayInteractor_Config"), &Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_Config, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkRayInteractor_Config), 420567941U) },
		{ FIsdkRayInteractor_RayCandidateProperties::StaticStruct, Z_Construct_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties_Statics::NewStructOps, TEXT("IsdkRayInteractor_RayCandidateProperties"), &Z_Registration_Info_UScriptStruct_FIsdkRayInteractor_RayCandidateProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkRayInteractor_RayCandidateProperties), 678536000U) },
		{ FIsdkSyntheticHand_Config::StaticStruct, Z_Construct_UScriptStruct_FIsdkSyntheticHand_Config_Statics::NewStructOps, TEXT("IsdkSyntheticHand_Config"), &Z_Registration_Info_UScriptStruct_FIsdkSyntheticHand_Config, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkSyntheticHand_Config), 2989004587U) },
		{ FIsdkThumbRecognizer_ExpectedThumbValueRanges::StaticStruct, Z_Construct_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges_Statics::NewStructOps, TEXT("IsdkThumbRecognizer_ExpectedThumbValueRanges"), &Z_Registration_Info_UScriptStruct_FIsdkThumbRecognizer_ExpectedThumbValueRanges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkThumbRecognizer_ExpectedThumbValueRanges), 3870931187U) },
		{ FIsdkAxisAlignedBox::StaticStruct, Z_Construct_UScriptStruct_FIsdkAxisAlignedBox_Statics::NewStructOps, TEXT("IsdkAxisAlignedBox"), &Z_Registration_Info_UScriptStruct_FIsdkAxisAlignedBox, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkAxisAlignedBox), 3204788144U) },
		{ FIsdkBoundsClipper::StaticStruct, Z_Construct_UScriptStruct_FIsdkBoundsClipper_Statics::NewStructOps, TEXT("IsdkBoundsClipper"), &Z_Registration_Info_UScriptStruct_FIsdkBoundsClipper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkBoundsClipper), 4237424159U) },
		{ FIsdkRay::StaticStruct, Z_Construct_UScriptStruct_FIsdkRay_Statics::NewStructOps, TEXT("IsdkRay"), &Z_Registration_Info_UScriptStruct_FIsdkRay, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkRay), 2571607586U) },
		{ FIsdkSurfaceHit::StaticStruct, Z_Construct_UScriptStruct_FIsdkSurfaceHit_Statics::NewStructOps, TEXT("IsdkSurfaceHit"), &Z_Registration_Info_UScriptStruct_FIsdkSurfaceHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkSurfaceHit), 2426538376U) },
		{ FIsdkOptionalSurfaceHit::StaticStruct, Z_Construct_UScriptStruct_FIsdkOptionalSurfaceHit_Statics::NewStructOps, TEXT("IsdkOptionalSurfaceHit"), &Z_Registration_Info_UScriptStruct_FIsdkOptionalSurfaceHit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkOptionalSurfaceHit), 3485887102U) },
		{ FIsdkPointerEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkPointerEvent_Statics::NewStructOps, TEXT("IsdkPointerEvent"), &Z_Registration_Info_UScriptStruct_FIsdkPointerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPointerEvent), 1656121350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_1648373815(TEXT("/Script/OculusInteraction"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypes_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
