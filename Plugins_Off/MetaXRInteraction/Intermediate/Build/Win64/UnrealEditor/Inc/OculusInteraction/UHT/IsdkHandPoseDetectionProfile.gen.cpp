// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HandPoseDetection/IsdkHandPoseDetectionProfile.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseDetectionProfile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfile();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkFingerType();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkHandPoseDetectionFingerTarget ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget;
class UScriptStruct* FIsdkHandPoseDetectionFingerTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDetectionFingerTarget"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerCalcTargets_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The Target values for this finger\n" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "The Target values for this finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerCalcTolerances_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerCalcTargets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerCalcTargets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerCalcTargets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingerCalcTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FingerCalcTolerances_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerCalcTolerances_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FingerCalcTolerances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FingerCalcTolerances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDetectionFingerTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_ValueProp = { "FingerCalcTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_Key_KeyProp = { "FingerCalcTargets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, METADATA_PARAMS(0, nullptr) }; // 3423644650
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets = { "FingerCalcTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionFingerTarget, FingerCalcTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerCalcTargets_MetaData), NewProp_FingerCalcTargets_MetaData) }; // 3423644650
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_ValueProp = { "FingerCalcTolerances", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_Key_KeyProp = { "FingerCalcTolerances_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_FingerCalcType, METADATA_PARAMS(0, nullptr) }; // 3423644650
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances = { "FingerCalcTolerances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionFingerTarget, FingerCalcTolerances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerCalcTolerances_MetaData), NewProp_FingerCalcTolerances_MetaData) }; // 3423644650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewProp_FingerCalcTolerances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDetectionFingerTarget",
	Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::PropPointers),
	sizeof(FIsdkHandPoseDetectionFingerTarget),
	alignof(FIsdkHandPoseDetectionFingerTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget.InnerSingleton;
}
// ********** End ScriptStruct FIsdkHandPoseDetectionFingerTarget **********************************

// ********** Begin ScriptStruct FIsdkHandPoseDetectionThumbTarget *********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget;
class UScriptStruct* FIsdkHandPoseDetectionThumbTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandPoseDetectionThumbTarget"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbCalcTargets_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// The Target values for this finger\n" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "The Target values for this finger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbCalcTolerances_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbCalcTargets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbCalcTargets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbCalcTargets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbCalcTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbCalcTolerances_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbCalcTolerances_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbCalcTolerances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThumbCalcTolerances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandPoseDetectionThumbTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_ValueProp = { "ThumbCalcTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_Key_KeyProp = { "ThumbCalcTargets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, METADATA_PARAMS(0, nullptr) }; // 2894301549
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets = { "ThumbCalcTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionThumbTarget, ThumbCalcTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbCalcTargets_MetaData), NewProp_ThumbCalcTargets_MetaData) }; // 2894301549
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_ValueProp = { "ThumbCalcTolerances", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_Key_KeyProp = { "ThumbCalcTolerances_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkDetection_ThumbCalcType, METADATA_PARAMS(0, nullptr) }; // 2894301549
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances = { "ThumbCalcTolerances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandPoseDetectionThumbTarget, ThumbCalcTolerances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbCalcTolerances_MetaData), NewProp_ThumbCalcTolerances_MetaData) }; // 2894301549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewProp_ThumbCalcTolerances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandPoseDetectionThumbTarget",
	Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::PropPointers),
	sizeof(FIsdkHandPoseDetectionThumbTarget),
	alignof(FIsdkHandPoseDetectionThumbTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget.InnerSingleton;
}
// ********** End ScriptStruct FIsdkHandPoseDetectionThumbTarget ***********************************

// ********** Begin Class UIsdkHandPoseDetectionProfile ********************************************
void UIsdkHandPoseDetectionProfile::StaticRegisterNativesUIsdkHandPoseDetectionProfile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile;
UClass* UIsdkHandPoseDetectionProfile::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseDetectionProfile;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandPoseDetectionProfile"),
			Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseDetectionProfile,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfile_NoRegister()
{
	return UIsdkHandPoseDetectionProfile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkHandPoseDetectionProfile\n * @brief Data Asset that stores information used for detecting hand poses, primarily the target\n * hand shapes required to be detected by the hand pose subsystem. Includes semantic information as\n * well as target tolerannces.\n *\n * @see UIsdkHandPoseSubsystem\n * @addtogroup InteractionSDK\n *\n */" },
		{ "DisplayName", "ISDK Hand Pose Detection Profile" },
		{ "IncludePath", "HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "@class UIsdkHandPoseDetectionProfile\n@brief Data Asset that stores information used for detecting hand poses, primarily the target\nhand shapes required to be detected by the hand pose subsystem. Includes semantic information as\nwell as target tolerannces.\n\n@see UIsdkHandPoseSubsystem\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseDetectionName_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Name given to this profile upon creation, used to distinguish it from other profiles,\n   * giving developers a quick way to discern between multiple returned delegates\n   */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "@brief Name given to this profile upon creation, used to distinguish it from other profiles,\ngiving developers a quick way to discern between multiple returned delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gameplay tag container that can be used to distinguish between multiple broadcasted\n   * detection profiles.\n   */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "@brief Gameplay tag container that can be used to distinguish between multiple broadcasted\ndetection profiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileFingerTargets_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Map of Finger Type to Finger Targets, which contain the target and tolerance data\n   * required to establish a pose detection\n   */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "@brief Map of Finger Type to Finger Targets, which contain the target and tolerance data\nrequired to establish a pose detection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileThumbTarget_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Thumb targets for this pose detection profile, including target hand shape data and\n   * tolerances used to establish a pose detection.\n   */" },
		{ "ModuleRelativePath", "Public/HandPoseDetection/IsdkHandPoseDetectionProfile.h" },
		{ "ToolTip", "@brief Thumb targets for this pose detection profile, including target hand shape data and\ntolerances used to establish a pose detection." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PoseDetectionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileFingerTargets_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProfileFingerTargets_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ProfileFingerTargets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ProfileFingerTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProfileThumbTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseDetectionProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_PoseDetectionName = { "PoseDetectionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseDetectionProfile, PoseDetectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseDetectionName_MetaData), NewProp_PoseDetectionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseDetectionProfile, GameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTags_MetaData), NewProp_GameplayTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_ValueProp = { "ProfileFingerTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget, METADATA_PARAMS(0, nullptr) }; // 1720639562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_Key_KeyProp = { "ProfileFingerTargets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkFingerType, METADATA_PARAMS(0, nullptr) }; // 1877342163
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets = { "ProfileFingerTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseDetectionProfile, ProfileFingerTargets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileFingerTargets_MetaData), NewProp_ProfileFingerTargets_MetaData) }; // 1877342163 1720639562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileThumbTarget = { "ProfileThumbTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandPoseDetectionProfile, ProfileThumbTarget), Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileThumbTarget_MetaData), NewProp_ProfileThumbTarget_MetaData) }; // 2256251253
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_PoseDetectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_GameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileFingerTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::NewProp_ProfileThumbTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::ClassParams = {
	&UIsdkHandPoseDetectionProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfile()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseDetectionProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandPoseDetectionProfile);
UIsdkHandPoseDetectionProfile::~UIsdkHandPoseDetectionProfile() {}
// ********** End Class UIsdkHandPoseDetectionProfile **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkHandPoseDetectionFingerTarget::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionFingerTarget_Statics::NewStructOps, TEXT("IsdkHandPoseDetectionFingerTarget"), &Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionFingerTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDetectionFingerTarget), 1720639562U) },
		{ FIsdkHandPoseDetectionThumbTarget::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandPoseDetectionThumbTarget_Statics::NewStructOps, TEXT("IsdkHandPoseDetectionThumbTarget"), &Z_Registration_Info_UScriptStruct_FIsdkHandPoseDetectionThumbTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandPoseDetectionThumbTarget), 2256251253U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseDetectionProfile, UIsdkHandPoseDetectionProfile::StaticClass, TEXT("UIsdkHandPoseDetectionProfile"), &Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseDetectionProfile), 2165020670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_1208197470(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_HandPoseDetection_IsdkHandPoseDetectionProfile_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
