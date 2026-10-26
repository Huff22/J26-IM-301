// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructTypesNonGenerated() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPayload();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPayload_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDigitType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkLerpState();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPosef();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkLerpState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkLerpState;
static UEnum* EIsdkLerpState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkLerpState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkLerpState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkLerpState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkLerpState"));
	}
	return Z_Registration_Info_UEnum_EIsdkLerpState.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkLerpState>()
{
	return EIsdkLerpState_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inactive.Name", "EIsdkLerpState::Inactive" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "RestingAtDestination.Name", "EIsdkLerpState::RestingAtDestination" },
		{ "TransitioningAway.Name", "EIsdkLerpState::TransitioningAway" },
		{ "TransitioningTo.Name", "EIsdkLerpState::TransitioningTo" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkLerpState::Inactive", (int64)EIsdkLerpState::Inactive },
		{ "EIsdkLerpState::TransitioningTo", (int64)EIsdkLerpState::TransitioningTo },
		{ "EIsdkLerpState::TransitioningAway", (int64)EIsdkLerpState::TransitioningAway },
		{ "EIsdkLerpState::RestingAtDestination", (int64)EIsdkLerpState::RestingAtDestination },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkLerpState",
	"EIsdkLerpState",
	Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkLerpState()
{
	if (!Z_Registration_Info_UEnum_EIsdkLerpState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkLerpState.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkLerpState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkLerpState.InnerSingleton;
}
// ********** End Enum EIsdkLerpState **************************************************************

// ********** Begin Enum EIsdkHandGrabPoseMode *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode;
static UEnum* EIsdkHandGrabPoseMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkHandGrabPoseMode"));
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseMode>()
{
	return EIsdkHandGrabPoseMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MirrorReference.Name", "EIsdkHandGrabPoseMode::MirrorReference" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "None.Name", "EIsdkHandGrabPoseMode::None" },
		{ "SnapObjectToPose.Name", "EIsdkHandGrabPoseMode::SnapObjectToPose" },
		{ "SnapPoseToObject.Name", "EIsdkHandGrabPoseMode::SnapPoseToObject" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkHandGrabPoseMode::None", (int64)EIsdkHandGrabPoseMode::None },
		{ "EIsdkHandGrabPoseMode::SnapPoseToObject", (int64)EIsdkHandGrabPoseMode::SnapPoseToObject },
		{ "EIsdkHandGrabPoseMode::SnapObjectToPose", (int64)EIsdkHandGrabPoseMode::SnapObjectToPose },
		{ "EIsdkHandGrabPoseMode::MirrorReference", (int64)EIsdkHandGrabPoseMode::MirrorReference },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkHandGrabPoseMode",
	"EIsdkHandGrabPoseMode",
	Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode.InnerSingleton;
}
// ********** End Enum EIsdkHandGrabPoseMode *******************************************************

// ********** Begin Enum EIsdkHandGrabPoseMirror ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror;
static UEnum* EIsdkHandGrabPoseMirror_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkHandGrabPoseMirror"));
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseMirror>()
{
	return EIsdkHandGrabPoseMirror_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Automatic.Name", "EIsdkHandGrabPoseMirror::Automatic" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*  @nolint\n * EIsdkHandGrabPoseMirror the different modes a hand grab pose will utilize pose & transform\n * mirroring\n   None - This pose will utilize no mirroring and only activate for the hand it is set to\n * Automatic - The plugin will automatically create a mirrored version of this hand pose, using\n * relevant properties\n   Manual - The plugin will pair this pose with another placed as a child of\n * this one, and set to the \"MirrorReference\" mode\n */" },
		{ "Manual.Name", "EIsdkHandGrabPoseMirror::Manual" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "None.Name", "EIsdkHandGrabPoseMirror::None" },
		{ "ToolTip", "@nolint\nEIsdkHandGrabPoseMirror the different modes a hand grab pose will utilize pose & transform\nmirroring\n  None - This pose will utilize no mirroring and only activate for the hand it is set to\nAutomatic - The plugin will automatically create a mirrored version of this hand pose, using\nrelevant properties\n  Manual - The plugin will pair this pose with another placed as a child of\nthis one, and set to the \"MirrorReference\" mode" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkHandGrabPoseMirror::None", (int64)EIsdkHandGrabPoseMirror::None },
		{ "EIsdkHandGrabPoseMirror::Automatic", (int64)EIsdkHandGrabPoseMirror::Automatic },
		{ "EIsdkHandGrabPoseMirror::Manual", (int64)EIsdkHandGrabPoseMirror::Manual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkHandGrabPoseMirror",
	"EIsdkHandGrabPoseMirror",
	Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror.InnerSingleton;
}
// ********** End Enum EIsdkHandGrabPoseMirror *****************************************************

// ********** Begin ScriptStruct FIsdkPosef ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPosef;
class UScriptStruct* FIsdkPosef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPosef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPosef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPosef, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPosef"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPosef.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPosef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPosef>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPosef_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPosef, Orientation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Orientation_MetaData), NewProp_Orientation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkPosef_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPosef, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPosef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPosef_Statics::NewProp_Orientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPosef_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPosef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPosef_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPosef",
	Z_Construct_UScriptStruct_FIsdkPosef_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPosef_Statics::PropPointers),
	sizeof(FIsdkPosef),
	alignof(FIsdkPosef),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPosef_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPosef_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPosef()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPosef.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPosef.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPosef_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPosef.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPosef **********************************************************

// ********** Begin ScriptStruct FIsdkInteractionRelationshipCounts ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts;
class UScriptStruct* FIsdkInteractionRelationshipCounts::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractionRelationshipCounts"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHover_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSelect_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHover;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSelect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractionRelationshipCounts>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::NewProp_NumHover = { "NumHover", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionRelationshipCounts, NumHover), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHover_MetaData), NewProp_NumHover_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::NewProp_NumSelect = { "NumSelect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionRelationshipCounts, NumSelect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSelect_MetaData), NewProp_NumSelect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::NewProp_NumHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::NewProp_NumSelect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractionRelationshipCounts",
	Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::PropPointers),
	sizeof(FIsdkInteractionRelationshipCounts),
	alignof(FIsdkInteractionRelationshipCounts),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractionRelationshipCounts **********************************

// ********** Begin Interface UIsdkIPayload ********************************************************
void UIsdkIPayload::StaticRegisterNativesUIsdkIPayload()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIPayload;
UClass* UIsdkIPayload::GetPrivateStaticClass()
{
	using TClass = UIsdkIPayload;
	if (!Z_Registration_Info_UClass_UIsdkIPayload.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIPayload"),
			Z_Registration_Info_UClass_UIsdkIPayload.InnerSingleton,
			StaticRegisterNativesUIsdkIPayload,
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
	return Z_Registration_Info_UClass_UIsdkIPayload.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIPayload_NoRegister()
{
	return UIsdkIPayload::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIPayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIPayload>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIPayload_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPayload_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIPayload_Statics::ClassParams = {
	&UIsdkIPayload::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIPayload_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIPayload_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIPayload()
{
	if (!Z_Registration_Info_UClass_UIsdkIPayload.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIPayload.OuterSingleton, Z_Construct_UClass_UIsdkIPayload_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIPayload.OuterSingleton;
}
UIsdkIPayload::UIsdkIPayload(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIPayload);
// ********** End Interface UIsdkIPayload **********************************************************

// ********** Begin Enum EIsdkXRControllerDrivenHandPoseType ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType;
static UEnum* EIsdkXRControllerDrivenHandPoseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkXRControllerDrivenHandPoseType"));
	}
	return Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkXRControllerDrivenHandPoseType>()
{
	return EIsdkXRControllerDrivenHandPoseType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * EIsdkControllerDrivenHandPoseType is the ISDK analogue to Meta XR's\n * EOculusXRControllerDrivenHandPoseTypes, and is intended only internal use, for cross-plugin\n * communication between ISDK and Meta XR.\n */" },
		{ "Controller.Comment", "// Controller button inputs will be used to generate a normal hand pose.\n" },
		{ "Controller.Name", "EIsdkXRControllerDrivenHandPoseType::Controller" },
		{ "Controller.ToolTip", "Controller button inputs will be used to generate a normal hand pose." },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "Natural.Comment", "// Controllers do not generate any hand poses.\n" },
		{ "Natural.Name", "EIsdkXRControllerDrivenHandPoseType::Natural" },
		{ "Natural.ToolTip", "Controllers do not generate any hand poses." },
		{ "None.Name", "EIsdkXRControllerDrivenHandPoseType::None" },
		{ "ToolTip", "EIsdkControllerDrivenHandPoseType is the ISDK analogue to Meta XR's\nEOculusXRControllerDrivenHandPoseTypes, and is intended only internal use, for cross-plugin\ncommunication between ISDK and Meta XR." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkXRControllerDrivenHandPoseType::None", (int64)EIsdkXRControllerDrivenHandPoseType::None },
		{ "EIsdkXRControllerDrivenHandPoseType::Natural", (int64)EIsdkXRControllerDrivenHandPoseType::Natural },
		{ "EIsdkXRControllerDrivenHandPoseType::Controller", (int64)EIsdkXRControllerDrivenHandPoseType::Controller },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkXRControllerDrivenHandPoseType",
	"EIsdkXRControllerDrivenHandPoseType",
	Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType()
{
	if (!Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerDrivenHandPoseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType.InnerSingleton;
}
// ********** End Enum EIsdkXRControllerDrivenHandPoseType *****************************************

// ********** Begin Enum EIsdkXRControllerType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkXRControllerType;
static UEnum* EIsdkXRControllerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkXRControllerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkXRControllerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkXRControllerType"));
	}
	return Z_Registration_Info_UEnum_EIsdkXRControllerType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkXRControllerType>()
{
	return EIsdkXRControllerType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * EIsdkXRControllerType is the ISDK analogue to Meta XR's EOculusXRControllerType,\n * and is intended only internal use, for cross-plugin communication between ISDK and Meta XR.\n */" },
		{ "MetaQuestTouch.Name", "EIsdkXRControllerType::MetaQuestTouch" },
		{ "MetaQuestTouchPlus.Name", "EIsdkXRControllerType::MetaQuestTouchPlus" },
		{ "MetaQuestTouchPro.Name", "EIsdkXRControllerType::MetaQuestTouchPro" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "None.Name", "EIsdkXRControllerType::None" },
		{ "ToolTip", "EIsdkXRControllerType is the ISDK analogue to Meta XR's EOculusXRControllerType,\nand is intended only internal use, for cross-plugin communication between ISDK and Meta XR." },
		{ "Unknown.Name", "EIsdkXRControllerType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkXRControllerType::None", (int64)EIsdkXRControllerType::None },
		{ "EIsdkXRControllerType::MetaQuestTouch", (int64)EIsdkXRControllerType::MetaQuestTouch },
		{ "EIsdkXRControllerType::MetaQuestTouchPro", (int64)EIsdkXRControllerType::MetaQuestTouchPro },
		{ "EIsdkXRControllerType::MetaQuestTouchPlus", (int64)EIsdkXRControllerType::MetaQuestTouchPlus },
		{ "EIsdkXRControllerType::Unknown", (int64)EIsdkXRControllerType::Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkXRControllerType",
	"EIsdkXRControllerType",
	Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType()
{
	if (!Z_Registration_Info_UEnum_EIsdkXRControllerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkXRControllerType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkXRControllerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkXRControllerType.InnerSingleton;
}
// ********** End Enum EIsdkXRControllerType *******************************************************

// ********** Begin Enum EControllerHandBehavior ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerHandBehavior;
static UEnum* EControllerHandBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EControllerHandBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EControllerHandBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EControllerHandBehavior"));
	}
	return Z_Registration_Info_UEnum_EControllerHandBehavior.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EControllerHandBehavior>()
{
	return EControllerHandBehavior_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BothAnimated.DisplayName", "Controller and Hands (Animated)" },
		{ "BothAnimated.Name", "EControllerHandBehavior::BothAnimated" },
		{ "BothProcedural.DisplayName", "Controller and Hands (Procedural, Quest Only)" },
		{ "BothProcedural.Name", "EControllerHandBehavior::BothProcedural" },
		{ "Comment", "/**\n * EControllerHandBehavior drives how we should present the user's hands when they are holding a\n * controller.\n */" },
		{ "ControllerOnly.DisplayName", "Controller Only" },
		{ "ControllerOnly.Name", "EControllerHandBehavior::ControllerOnly" },
		{ "HandsOnlyAnimated.DisplayName", "Hands Only (Animated)" },
		{ "HandsOnlyAnimated.Name", "EControllerHandBehavior::HandsOnlyAnimated" },
		{ "HandsOnlyProcedural.DisplayName", "Hands Only (Procedural, Quest Only)" },
		{ "HandsOnlyProcedural.Name", "EControllerHandBehavior::HandsOnlyProcedural" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "EControllerHandBehavior drives how we should present the user's hands when they are holding a\ncontroller." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EControllerHandBehavior::BothProcedural", (int64)EControllerHandBehavior::BothProcedural },
		{ "EControllerHandBehavior::BothAnimated", (int64)EControllerHandBehavior::BothAnimated },
		{ "EControllerHandBehavior::ControllerOnly", (int64)EControllerHandBehavior::ControllerOnly },
		{ "EControllerHandBehavior::HandsOnlyProcedural", (int64)EControllerHandBehavior::HandsOnlyProcedural },
		{ "EControllerHandBehavior::HandsOnlyAnimated", (int64)EControllerHandBehavior::HandsOnlyAnimated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EControllerHandBehavior",
	"EControllerHandBehavior",
	Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior()
{
	if (!Z_Registration_Info_UEnum_EControllerHandBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerHandBehavior.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EControllerHandBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EControllerHandBehavior.InnerSingleton;
}
// ********** End Enum EControllerHandBehavior *****************************************************

// ********** Begin Enum EIsdkHandGrabPoseOrientation **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation;
static UEnum* EIsdkHandGrabPoseOrientation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkHandGrabPoseOrientation"));
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseOrientation>()
{
	return EIsdkHandGrabPoseOrientation_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief EIsdkHandGrabPoseMirror the different orientations of a hand grab pose, used for mirroring\n * purposes\n */" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "@brief EIsdkHandGrabPoseMirror the different orientations of a hand grab pose, used for mirroring\npurposes" },
		{ "Unknown.Name", "EIsdkHandGrabPoseOrientation::Unknown" },
		{ "WristFacingDown.Name", "EIsdkHandGrabPoseOrientation::WristFacingDown" },
		{ "WristFacingIn.Name", "EIsdkHandGrabPoseOrientation::WristFacingIn" },
		{ "WristFacingUp.Name", "EIsdkHandGrabPoseOrientation::WristFacingUp" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkHandGrabPoseOrientation::Unknown", (int64)EIsdkHandGrabPoseOrientation::Unknown },
		{ "EIsdkHandGrabPoseOrientation::WristFacingDown", (int64)EIsdkHandGrabPoseOrientation::WristFacingDown },
		{ "EIsdkHandGrabPoseOrientation::WristFacingIn", (int64)EIsdkHandGrabPoseOrientation::WristFacingIn },
		{ "EIsdkHandGrabPoseOrientation::WristFacingUp", (int64)EIsdkHandGrabPoseOrientation::WristFacingUp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkHandGrabPoseOrientation",
	"EIsdkHandGrabPoseOrientation",
	Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation()
{
	if (!Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseOrientation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation.InnerSingleton;
}
// ********** End Enum EIsdkHandGrabPoseOrientation ************************************************

// ********** Begin Enum EIsdkDigitType ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDigitType;
static UEnum* EIsdkDigitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDigitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDigitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDigitType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDigitType"));
	}
	return Z_Registration_Info_UEnum_EIsdkDigitType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDigitType>()
{
	return EIsdkDigitType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "Index.Comment", "/**\n * \n */" },
		{ "Index.Name", "EIsdkDigitType::Index" },
		{ "Middle.Comment", "/**\n * \n */" },
		{ "Middle.Name", "EIsdkDigitType::Middle" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "Pinky.Comment", "/**\n * \n */" },
		{ "Pinky.Name", "EIsdkDigitType::Pinky" },
		{ "Ring.Comment", "/**\n * \n */" },
		{ "Ring.Name", "EIsdkDigitType::Ring" },
		{ "Thumb.Comment", "/**\n * \n */" },
		{ "Thumb.Name", "EIsdkDigitType::Thumb" },
		{ "Unknown.Comment", "/**\n * \n */" },
		{ "Unknown.Name", "EIsdkDigitType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDigitType::Unknown", (int64)EIsdkDigitType::Unknown },
		{ "EIsdkDigitType::Index", (int64)EIsdkDigitType::Index },
		{ "EIsdkDigitType::Middle", (int64)EIsdkDigitType::Middle },
		{ "EIsdkDigitType::Ring", (int64)EIsdkDigitType::Ring },
		{ "EIsdkDigitType::Pinky", (int64)EIsdkDigitType::Pinky },
		{ "EIsdkDigitType::Thumb", (int64)EIsdkDigitType::Thumb },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDigitType",
	"EIsdkDigitType",
	Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDigitType()
{
	if (!Z_Registration_Info_UEnum_EIsdkDigitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDigitType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDigitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDigitType.InnerSingleton;
}
// ********** End Enum EIsdkDigitType **************************************************************

// ********** Begin ScriptStruct FIsdkHandGrabPoseProperties ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties;
class UScriptStruct* FIsdkHandGrabPoseProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkHandGrabPoseProperties"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoseMode_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The different modes hand grab poses operate when applying a pose.\n   * None - Apply no pose when grabbing\n   * SnapPoseToObject - The hand will snap to the object in the given pose, regardless of it's\n   * tracked position.\n   * SnapObjectToPose - The object will instantly snap to the hand to match the set\n   * pose.\n   * MoveObjectToPose - The object will move (lerp) to the hand in a given position to match the set\n   * pose\n   * MirrorReference - Set only when this hand grab pose is intended to be targeted for a\n   * manual pose mirror arrangement\n   */" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "The different modes hand grab poses operate when applying a pose.\nNone - Apply no pose when grabbing\nSnapPoseToObject - The hand will snap to the object in the given pose, regardless of it's\ntracked position.\nSnapObjectToPose - The object will instantly snap to the hand to match the set\npose.\nMoveObjectToPose - The object will move (lerp) to the hand in a given position to match the set\npose\nMirrorReference - Set only when this hand grab pose is intended to be targeted for a\nmanual pose mirror arrangement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapMoveDuration_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* How long (in seconds) it will take the pose/object to move to its final snap position. If zero,\n   * this will snap instantly. Otherwise it will lerp over time. */" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "How long (in seconds) it will take the pose/object to move to its final snap position. If zero,\n  * this will snap instantly. Otherwise it will lerp over time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirroringMode_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Whether or not this pose can be mirrored to the other hand for which it was not authored */" },
		{ "EditCondition", "PoseMode != EIsdkHandGrabPoseMode::MirrorReference" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "Whether or not this pose can be mirrored to the other hand for which it was not authored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorLocationAndRotation_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* If true, will automatically derive an appropriate mirrored location across an assigned plane. Otherwise the mirrored version will have the same position/rotation as the original.*/" },
		{ "EditCondition", "MirroringMode == EIsdkHandGrabPoseMirror::Automatic" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "If true, will automatically derive an appropriate mirrored location across an assigned plane. Otherwise the mirrored version will have the same position/rotation as the original." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The axis about which to mirror the hand pose.  Note, this corresponds to the axis of the hand\n   * pose's attach parent (the component directly above the hand pose in the scene component\n   * hierarchy, not the axis of the hand pose itself. */" },
		{ "EditCondition", "(MirroringMode == EIsdkHandGrabPoseMirror::Automatic) && (bMirrorLocationAndRotation == true)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "ToolTip", "The axis about which to mirror the hand pose.  Note, this corresponds to the axis of the hand\n  * pose's attach parent (the component directly above the hand pose in the scene component\n  * hierarchy, not the axis of the hand pose itself." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PoseMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PoseMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapMoveDuration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirroringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MirroringMode;
	static void NewProp_bMirrorLocationAndRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorLocationAndRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkHandGrabPoseProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_PoseMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_PoseMode = { "PoseMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandGrabPoseProperties, PoseMode), Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoseMode_MetaData), NewProp_PoseMode_MetaData) }; // 3280990935
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_SnapMoveDuration = { "SnapMoveDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandGrabPoseProperties, SnapMoveDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapMoveDuration_MetaData), NewProp_SnapMoveDuration_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirroringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirroringMode = { "MirroringMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandGrabPoseProperties, MirroringMode), Z_Construct_UEnum_OculusInteraction_EIsdkHandGrabPoseMirror, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirroringMode_MetaData), NewProp_MirroringMode_MetaData) }; // 586860997
void Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_bMirrorLocationAndRotation_SetBit(void* Obj)
{
	((FIsdkHandGrabPoseProperties*)Obj)->bMirrorLocationAndRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_bMirrorLocationAndRotation = { "bMirrorLocationAndRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkHandGrabPoseProperties), &Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_bMirrorLocationAndRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMirrorLocationAndRotation_MetaData), NewProp_bMirrorLocationAndRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkHandGrabPoseProperties, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MirrorAxis_MetaData), NewProp_MirrorAxis_MetaData) }; // 342925220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_PoseMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_PoseMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_SnapMoveDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirroringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirroringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_bMirrorLocationAndRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewProp_MirrorAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkHandGrabPoseProperties",
	Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::PropPointers),
	sizeof(FIsdkHandGrabPoseProperties),
	alignof(FIsdkHandGrabPoseProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.InnerSingleton, Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties.InnerSingleton;
}
// ********** End ScriptStruct FIsdkHandGrabPoseProperties *****************************************

// ********** Begin Enum EIsdkGrabDetectorType *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkGrabDetectorType;
static UEnum* EIsdkGrabDetectorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabDetectorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkGrabDetectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkGrabDetectorType"));
	}
	return Z_Registration_Info_UEnum_EIsdkGrabDetectorType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabDetectorType>()
{
	return EIsdkGrabDetectorType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Comment", "/**\n * @brief EIsdkGrabDetectorType represents a method of detection for grabs.\n */" },
		{ "DistanceGrab.Name", "EIsdkGrabDetectorType::DistanceGrab" },
		{ "HandGrab.Name", "EIsdkGrabDetectorType::HandGrab" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EIsdkGrabDetectorType::None" },
		{ "RayGrab.Name", "EIsdkGrabDetectorType::RayGrab" },
		{ "ToolTip", "@brief EIsdkGrabDetectorType represents a method of detection for grabs." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkGrabDetectorType::None", (int64)EIsdkGrabDetectorType::None },
		{ "EIsdkGrabDetectorType::HandGrab", (int64)EIsdkGrabDetectorType::HandGrab },
		{ "EIsdkGrabDetectorType::DistanceGrab", (int64)EIsdkGrabDetectorType::DistanceGrab },
		{ "EIsdkGrabDetectorType::RayGrab", (int64)EIsdkGrabDetectorType::RayGrab },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkGrabDetectorType",
	"EIsdkGrabDetectorType",
	Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabDetectorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkGrabDetectorType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkGrabDetectorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkGrabDetectorType.InnerSingleton;
}
// ********** End Enum EIsdkGrabDetectorType *******************************************************

// ********** Begin Enum EIsdkMultiGrabBehavior ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior;
static UEnum* EIsdkMultiGrabBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkMultiGrabBehavior"));
	}
	return Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkMultiGrabBehavior>()
{
	return EIsdkMultiGrabBehavior_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EIsdkMultiGrabBehavior represents what happens when multiple grabbers grab a single grabbable.\n * SingleGrabFirstRetained - Only the first grabber is allowed to grab\n * SingleGrabTransferToSecond - The first grabber stops grabbing, the second grabber starts\n * MultiGrab - All grabbers can grab at the same time\n */" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "MultiGrab.Name", "EIsdkMultiGrabBehavior::MultiGrab" },
		{ "SingleGrabFirstRetained.Name", "EIsdkMultiGrabBehavior::SingleGrabFirstRetained" },
		{ "SingleGrabTransferToSecond.Name", "EIsdkMultiGrabBehavior::SingleGrabTransferToSecond" },
		{ "ToolTip", "EIsdkMultiGrabBehavior represents what happens when multiple grabbers grab a single grabbable.\nSingleGrabFirstRetained - Only the first grabber is allowed to grab\nSingleGrabTransferToSecond - The first grabber stops grabbing, the second grabber starts\nMultiGrab - All grabbers can grab at the same time" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkMultiGrabBehavior::SingleGrabFirstRetained", (int64)EIsdkMultiGrabBehavior::SingleGrabFirstRetained },
		{ "EIsdkMultiGrabBehavior::SingleGrabTransferToSecond", (int64)EIsdkMultiGrabBehavior::SingleGrabTransferToSecond },
		{ "EIsdkMultiGrabBehavior::MultiGrab", (int64)EIsdkMultiGrabBehavior::MultiGrab },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkMultiGrabBehavior",
	"EIsdkMultiGrabBehavior",
	Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior()
{
	if (!Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior.InnerSingleton;
}
// ********** End Enum EIsdkMultiGrabBehavior ******************************************************

// ********** Begin Enum EIsdkGrabInputMethod ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkGrabInputMethod;
static UEnum* EIsdkGrabInputMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabInputMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkGrabInputMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkGrabInputMethod"));
	}
	return Z_Registration_Info_UEnum_EIsdkGrabInputMethod.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabInputMethod>()
{
	return EIsdkGrabInputMethod_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief EIsdkGrabInputMethod represents a method of input that can trigger a grab.\n */" },
		{ "Custom.Hidden", "" },
		{ "Custom.Name", "EIsdkGrabInputMethod::Custom" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "Palm.Name", "EIsdkGrabInputMethod::Palm" },
		{ "Pinch.Name", "EIsdkGrabInputMethod::Pinch" },
		{ "ToolTip", "@brief EIsdkGrabInputMethod represents a method of input that can trigger a grab." },
		{ "Unknown.DisplayName", "None" },
		{ "Unknown.Name", "EIsdkGrabInputMethod::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkGrabInputMethod::Unknown", (int64)EIsdkGrabInputMethod::Unknown },
		{ "EIsdkGrabInputMethod::Pinch", (int64)EIsdkGrabInputMethod::Pinch },
		{ "EIsdkGrabInputMethod::Palm", (int64)EIsdkGrabInputMethod::Palm },
		{ "EIsdkGrabInputMethod::Custom", (int64)EIsdkGrabInputMethod::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkGrabInputMethod",
	"EIsdkGrabInputMethod",
	Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod()
{
	if (!Z_Registration_Info_UEnum_EIsdkGrabInputMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkGrabInputMethod.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkGrabInputMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkGrabInputMethod.InnerSingleton;
}
// ********** End Enum EIsdkGrabInputMethod ********************************************************

// ********** Begin Enum EIsdkInteractionType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkInteractionType;
static UEnum* EIsdkInteractionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkInteractionType"));
	}
	return Z_Registration_Info_UEnum_EIsdkInteractionType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkInteractionType>()
{
	return EIsdkInteractionType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief EIsdkInteractionType represents the different modalities of interaction supported by interactor/interactable relationships\n  */" },
		{ "DistanceGrab.Name", "EIsdkInteractionType::DistanceGrab" },
		{ "Grab.Name", "EIsdkInteractionType::Grab" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "Poke.Name", "EIsdkInteractionType::Poke" },
		{ "Ray.Name", "EIsdkInteractionType::Ray" },
		{ "ToolTip", "@brief EIsdkInteractionType represents the different modalities of interaction supported by interactor/interactable relationships" },
		{ "Unknown.Name", "EIsdkInteractionType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkInteractionType::Unknown", (int64)EIsdkInteractionType::Unknown },
		{ "EIsdkInteractionType::Poke", (int64)EIsdkInteractionType::Poke },
		{ "EIsdkInteractionType::Grab", (int64)EIsdkInteractionType::Grab },
		{ "EIsdkInteractionType::Ray", (int64)EIsdkInteractionType::Ray },
		{ "EIsdkInteractionType::DistanceGrab", (int64)EIsdkInteractionType::DistanceGrab },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkInteractionType",
	"EIsdkInteractionType",
	Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType()
{
	if (!Z_Registration_Info_UEnum_EIsdkInteractionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkInteractionType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkInteractionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkInteractionType.InnerSingleton;
}
// ********** End Enum EIsdkInteractionType ********************************************************

// ********** Begin Enum EIsdkDeviceType ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkDeviceType;
static UEnum* EIsdkDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkDeviceType"));
	}
	return Z_Registration_Info_UEnum_EIsdkDeviceType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDeviceType>()
{
	return EIsdkDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * @brief EIsdkDeviceType represents the type of device being used in an interaction\n */" },
		{ "Controller.Name", "EIsdkDeviceType::Controller" },
		{ "Hand.Name", "EIsdkDeviceType::Hand" },
		{ "ModuleRelativePath", "Public/StructTypesNonGenerated.h" },
		{ "Peripheral.Name", "EIsdkDeviceType::Peripheral" },
		{ "ToolTip", "@brief EIsdkDeviceType represents the type of device being used in an interaction" },
		{ "Unknown.Name", "EIsdkDeviceType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkDeviceType::Unknown", (int64)EIsdkDeviceType::Unknown },
		{ "EIsdkDeviceType::Controller", (int64)EIsdkDeviceType::Controller },
		{ "EIsdkDeviceType::Hand", (int64)EIsdkDeviceType::Hand },
		{ "EIsdkDeviceType::Peripheral", (int64)EIsdkDeviceType::Peripheral },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkDeviceType",
	"EIsdkDeviceType",
	Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType()
{
	if (!Z_Registration_Info_UEnum_EIsdkDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkDeviceType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkDeviceType.InnerSingleton;
}
// ********** End Enum EIsdkDeviceType *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkLerpState_StaticEnum, TEXT("EIsdkLerpState"), &Z_Registration_Info_UEnum_EIsdkLerpState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4228291879U) },
		{ EIsdkHandGrabPoseMode_StaticEnum, TEXT("EIsdkHandGrabPoseMode"), &Z_Registration_Info_UEnum_EIsdkHandGrabPoseMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3280990935U) },
		{ EIsdkHandGrabPoseMirror_StaticEnum, TEXT("EIsdkHandGrabPoseMirror"), &Z_Registration_Info_UEnum_EIsdkHandGrabPoseMirror, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 586860997U) },
		{ EIsdkXRControllerDrivenHandPoseType_StaticEnum, TEXT("EIsdkXRControllerDrivenHandPoseType"), &Z_Registration_Info_UEnum_EIsdkXRControllerDrivenHandPoseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3820086471U) },
		{ EIsdkXRControllerType_StaticEnum, TEXT("EIsdkXRControllerType"), &Z_Registration_Info_UEnum_EIsdkXRControllerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1960092091U) },
		{ EControllerHandBehavior_StaticEnum, TEXT("EControllerHandBehavior"), &Z_Registration_Info_UEnum_EControllerHandBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 802605893U) },
		{ EIsdkHandGrabPoseOrientation_StaticEnum, TEXT("EIsdkHandGrabPoseOrientation"), &Z_Registration_Info_UEnum_EIsdkHandGrabPoseOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1381089648U) },
		{ EIsdkDigitType_StaticEnum, TEXT("EIsdkDigitType"), &Z_Registration_Info_UEnum_EIsdkDigitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1156377507U) },
		{ EIsdkGrabDetectorType_StaticEnum, TEXT("EIsdkGrabDetectorType"), &Z_Registration_Info_UEnum_EIsdkGrabDetectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3921439500U) },
		{ EIsdkMultiGrabBehavior_StaticEnum, TEXT("EIsdkMultiGrabBehavior"), &Z_Registration_Info_UEnum_EIsdkMultiGrabBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1505835281U) },
		{ EIsdkGrabInputMethod_StaticEnum, TEXT("EIsdkGrabInputMethod"), &Z_Registration_Info_UEnum_EIsdkGrabInputMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1072373591U) },
		{ EIsdkInteractionType_StaticEnum, TEXT("EIsdkInteractionType"), &Z_Registration_Info_UEnum_EIsdkInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3722605938U) },
		{ EIsdkDeviceType_StaticEnum, TEXT("EIsdkDeviceType"), &Z_Registration_Info_UEnum_EIsdkDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3336251855U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkPosef::StaticStruct, Z_Construct_UScriptStruct_FIsdkPosef_Statics::NewStructOps, TEXT("IsdkPosef"), &Z_Registration_Info_UScriptStruct_FIsdkPosef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPosef), 3274912445U) },
		{ FIsdkInteractionRelationshipCounts::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics::NewStructOps, TEXT("IsdkInteractionRelationshipCounts"), &Z_Registration_Info_UScriptStruct_FIsdkInteractionRelationshipCounts, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractionRelationshipCounts), 1357903711U) },
		{ FIsdkHandGrabPoseProperties::StaticStruct, Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics::NewStructOps, TEXT("IsdkHandGrabPoseProperties"), &Z_Registration_Info_UScriptStruct_FIsdkHandGrabPoseProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkHandGrabPoseProperties), 927962901U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIPayload, UIsdkIPayload::StaticClass, TEXT("UIsdkIPayload"), &Z_Registration_Info_UClass_UIsdkIPayload, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIPayload), 600311947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_1015922312(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
