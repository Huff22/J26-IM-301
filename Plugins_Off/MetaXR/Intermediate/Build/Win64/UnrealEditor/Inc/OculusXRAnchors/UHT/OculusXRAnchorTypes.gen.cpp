// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRAnchorTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_NoRegister();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter();
OCULUSXRANCHORS_API UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_NoRegister();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation();
OCULUSXRANCHORS_API UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchor();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64();
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
UPackage* Z_Construct_UPackage__Script_OculusXRAnchors();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOculusXRAnchorResult *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRAnchorResult;
static UEnum* EOculusXRAnchorResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRAnchorResult"));
	}
	return Z_Registration_Info_UEnum_EOculusXRAnchorResult.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRAnchorResult::Type>()
{
	return EOculusXRAnchorResult_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Comment", "/// Failure\n" },
		{ "Failure.Name", "EOculusXRAnchorResult::Failure" },
		{ "Failure.ToolTip", "Failure" },
		{ "Failure_DataIsInvalid.Name", "EOculusXRAnchorResult::Failure_DataIsInvalid" },
		{ "Failure_DeprecatedOperation.Name", "EOculusXRAnchorResult::Failure_DeprecatedOperation" },
		{ "Failure_ErrorInitializationFailed.Name", "EOculusXRAnchorResult::Failure_ErrorInitializationFailed" },
		{ "Failure_ErrorLimitReached.Name", "EOculusXRAnchorResult::Failure_ErrorLimitReached" },
		{ "Failure_InsufficientSize.Name", "EOculusXRAnchorResult::Failure_InsufficientSize" },
		{ "Failure_InvalidOperation.Name", "EOculusXRAnchorResult::Failure_InvalidOperation" },
		{ "Failure_InvalidParameter.Name", "EOculusXRAnchorResult::Failure_InvalidParameter" },
		{ "Failure_NotInitialized.Name", "EOculusXRAnchorResult::Failure_NotInitialized" },
		{ "Failure_NotYetImplemented.Name", "EOculusXRAnchorResult::Failure_NotYetImplemented" },
		{ "Failure_OperationFailed.Name", "EOculusXRAnchorResult::Failure_OperationFailed" },
		{ "Failure_SpaceCloudStorageDisabled.Comment", "/// Space error cases\n" },
		{ "Failure_SpaceCloudStorageDisabled.Name", "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled" },
		{ "Failure_SpaceCloudStorageDisabled.ToolTip", "Space error cases" },
		{ "Failure_SpaceInsufficientResources.Comment", "/// APD warnings and error cases\n" },
		{ "Failure_SpaceInsufficientResources.Name", "EOculusXRAnchorResult::Failure_SpaceInsufficientResources" },
		{ "Failure_SpaceInsufficientResources.ToolTip", "APD warnings and error cases" },
		{ "Failure_SpaceInsufficientView.Name", "EOculusXRAnchorResult::Failure_SpaceInsufficientView" },
		{ "Failure_SpaceLocalizationFailed.Name", "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed" },
		{ "Failure_SpaceMappingInsufficient.Name", "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient" },
		{ "Failure_SpaceNetworkRequestFailed.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed" },
		{ "Failure_SpaceNetworkTimeout.Name", "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout" },
		{ "Failure_SpacePermissionInsufficient.Name", "EOculusXRAnchorResult::Failure_SpacePermissionInsufficient" },
		{ "Failure_SpaceRateLimited.Name", "EOculusXRAnchorResult::Failure_SpaceRateLimited" },
		{ "Failure_SpaceStorageAtCapacity.Name", "EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity" },
		{ "Failure_SpaceTooBright.Name", "EOculusXRAnchorResult::Failure_SpaceTooBright" },
		{ "Failure_SpaceTooDark.Name", "EOculusXRAnchorResult::Failure_SpaceTooDark" },
		{ "Failure_Unsupported.Name", "EOculusXRAnchorResult::Failure_Unsupported" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "Success.Name", "EOculusXRAnchorResult::Success" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.Comment", "// Boundary visibility\n" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.Name", "EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed" },
		{ "Warning_BoundaryVisibilitySuppressionNotAllowed.ToolTip", "Boundary visibility" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAnchorResult::Success", (int64)EOculusXRAnchorResult::Success },
		{ "EOculusXRAnchorResult::Failure", (int64)EOculusXRAnchorResult::Failure },
		{ "EOculusXRAnchorResult::Failure_InvalidParameter", (int64)EOculusXRAnchorResult::Failure_InvalidParameter },
		{ "EOculusXRAnchorResult::Failure_NotInitialized", (int64)EOculusXRAnchorResult::Failure_NotInitialized },
		{ "EOculusXRAnchorResult::Failure_InvalidOperation", (int64)EOculusXRAnchorResult::Failure_InvalidOperation },
		{ "EOculusXRAnchorResult::Failure_Unsupported", (int64)EOculusXRAnchorResult::Failure_Unsupported },
		{ "EOculusXRAnchorResult::Failure_NotYetImplemented", (int64)EOculusXRAnchorResult::Failure_NotYetImplemented },
		{ "EOculusXRAnchorResult::Failure_OperationFailed", (int64)EOculusXRAnchorResult::Failure_OperationFailed },
		{ "EOculusXRAnchorResult::Failure_InsufficientSize", (int64)EOculusXRAnchorResult::Failure_InsufficientSize },
		{ "EOculusXRAnchorResult::Failure_DataIsInvalid", (int64)EOculusXRAnchorResult::Failure_DataIsInvalid },
		{ "EOculusXRAnchorResult::Failure_DeprecatedOperation", (int64)EOculusXRAnchorResult::Failure_DeprecatedOperation },
		{ "EOculusXRAnchorResult::Failure_ErrorLimitReached", (int64)EOculusXRAnchorResult::Failure_ErrorLimitReached },
		{ "EOculusXRAnchorResult::Failure_ErrorInitializationFailed", (int64)EOculusXRAnchorResult::Failure_ErrorInitializationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled", (int64)EOculusXRAnchorResult::Failure_SpaceCloudStorageDisabled },
		{ "EOculusXRAnchorResult::Failure_SpaceMappingInsufficient", (int64)EOculusXRAnchorResult::Failure_SpaceMappingInsufficient },
		{ "EOculusXRAnchorResult::Failure_SpaceLocalizationFailed", (int64)EOculusXRAnchorResult::Failure_SpaceLocalizationFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkTimeout", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkTimeout },
		{ "EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed", (int64)EOculusXRAnchorResult::Failure_SpaceNetworkRequestFailed },
		{ "EOculusXRAnchorResult::Failure_SpaceInsufficientResources", (int64)EOculusXRAnchorResult::Failure_SpaceInsufficientResources },
		{ "EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity", (int64)EOculusXRAnchorResult::Failure_SpaceStorageAtCapacity },
		{ "EOculusXRAnchorResult::Failure_SpaceInsufficientView", (int64)EOculusXRAnchorResult::Failure_SpaceInsufficientView },
		{ "EOculusXRAnchorResult::Failure_SpacePermissionInsufficient", (int64)EOculusXRAnchorResult::Failure_SpacePermissionInsufficient },
		{ "EOculusXRAnchorResult::Failure_SpaceRateLimited", (int64)EOculusXRAnchorResult::Failure_SpaceRateLimited },
		{ "EOculusXRAnchorResult::Failure_SpaceTooDark", (int64)EOculusXRAnchorResult::Failure_SpaceTooDark },
		{ "EOculusXRAnchorResult::Failure_SpaceTooBright", (int64)EOculusXRAnchorResult::Failure_SpaceTooBright },
		{ "EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed", (int64)EOculusXRAnchorResult::Warning_BoundaryVisibilitySuppressionNotAllowed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRAnchorResult",
	"EOculusXRAnchorResult::Type",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult()
{
	if (!Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRAnchorResult.InnerSingleton;
}
// ********** End Enum EOculusXRAnchorResult *******************************************************

// ********** Begin Enum EOculusLocationFlags ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusLocationFlags;
static UEnum* EOculusLocationFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusLocationFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusLocationFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusLocationFlags"));
	}
	return Z_Registration_Info_UEnum_EOculusLocationFlags.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusLocationFlags>()
{
	return EOculusLocationFlags_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// namespace EOculusXRAnchorResult\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "None.Name", "EOculusLocationFlags::None" },
		{ "OrientationTracked.Name", "EOculusLocationFlags::OrientationTracked" },
		{ "OrientationValid.Comment", "// required for the metadata generation\n" },
		{ "OrientationValid.Name", "EOculusLocationFlags::OrientationValid" },
		{ "OrientationValid.ToolTip", "required for the metadata generation" },
		{ "PositionTracked.Name", "EOculusLocationFlags::PositionTracked" },
		{ "PositionValid.Name", "EOculusLocationFlags::PositionValid" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "namespace EOculusXRAnchorResult" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusLocationFlags::None", (int64)EOculusLocationFlags::None },
		{ "EOculusLocationFlags::OrientationValid", (int64)EOculusLocationFlags::OrientationValid },
		{ "EOculusLocationFlags::PositionValid", (int64)EOculusLocationFlags::PositionValid },
		{ "EOculusLocationFlags::OrientationTracked", (int64)EOculusLocationFlags::OrientationTracked },
		{ "EOculusLocationFlags::PositionTracked", (int64)EOculusLocationFlags::PositionTracked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusLocationFlags",
	"EOculusLocationFlags",
	Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags()
{
	if (!Z_Registration_Info_UEnum_EOculusLocationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusLocationFlags.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusLocationFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusLocationFlags.InnerSingleton;
}
// ********** End Enum EOculusLocationFlags ********************************************************

// ********** Begin ScriptStruct FOculusXRAnchorLocationFlags **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags;
class UScriptStruct* FOculusXRAnchorLocationFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRAnchorLocationFlags"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/OculusXRAnchors.EOculusLocationFlags" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchorLocationFlags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorLocationFlags, Flags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchorLocationFlags",
	Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::PropPointers),
	sizeof(FOculusXRAnchorLocationFlags),
	alignof(FOculusXRAnchorLocationFlags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRAnchorLocationFlags ****************************************

// ********** Begin ScriptStruct FOculusXRUUID *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRUUID;
class UScriptStruct* FOculusXRUUID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUUID, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRUUID"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRUUID.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRUUID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUUID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRUUID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRUUID",
	nullptr,
	0,
	sizeof(FOculusXRUUID),
	alignof(FOculusXRUUID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUUID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRUUID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRUUID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRUUID.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRUUID *******************************************************

// ********** Begin ScriptStruct FOculusXRUInt64 ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRUInt64;
class UScriptStruct* FOculusXRUInt64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRUInt64, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRUInt64"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRUInt64.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRUInt64_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRUInt64>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRUInt64, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRUInt64",
	Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::PropPointers),
	sizeof(FOculusXRUInt64),
	alignof(FOculusXRUInt64),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUInt64()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRUInt64.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRUInt64 *****************************************************

// ********** Begin ScriptStruct FOculusXRAnchor ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchor;
class UScriptStruct* FOculusXRAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchor, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRAnchor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnchorHandle_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuid_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewProp_AnchorHandle = { "AnchorHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchor, AnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnchorHandle_MetaData), NewProp_AnchorHandle_MetaData) }; // 1603820546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewProp_Uuid = { "Uuid", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchor, Uuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuid_MetaData), NewProp_Uuid_MetaData) }; // 3912340335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewProp_AnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewProp_Uuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchor",
	Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::PropPointers),
	sizeof(FOculusXRAnchor),
	alignof(FOculusXRAnchor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchor()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchor.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRAnchor *****************************************************

// ********** Begin Enum EOculusXRSpaceQueryFilterType *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType;
static UEnum* EOculusXRSpaceQueryFilterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceQueryFilterType"));
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceQueryFilterType>()
{
	return EOculusXRSpaceQueryFilterType_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FilterByComponentType.DisplayName", "Filter queries by component type" },
		{ "FilterByComponentType.Name", "EOculusXRSpaceQueryFilterType::FilterByComponentType" },
		{ "FilterByGroup.DisplayName", "Filter queries by group UUID" },
		{ "FilterByGroup.Name", "EOculusXRSpaceQueryFilterType::FilterByGroup" },
		{ "FilterByIds.DisplayName", "Filter queries by UUIDs" },
		{ "FilterByIds.Name", "EOculusXRSpaceQueryFilterType::FilterByIds" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "None.DisplayName", "No Filter" },
		{ "None.Name", "EOculusXRSpaceQueryFilterType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceQueryFilterType::None", (int64)EOculusXRSpaceQueryFilterType::None },
		{ "EOculusXRSpaceQueryFilterType::FilterByIds", (int64)EOculusXRSpaceQueryFilterType::FilterByIds },
		{ "EOculusXRSpaceQueryFilterType::FilterByComponentType", (int64)EOculusXRSpaceQueryFilterType::FilterByComponentType },
		{ "EOculusXRSpaceQueryFilterType::FilterByGroup", (int64)EOculusXRSpaceQueryFilterType::FilterByGroup },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceQueryFilterType",
	"EOculusXRSpaceQueryFilterType",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType.InnerSingleton;
}
// ********** End Enum EOculusXRSpaceQueryFilterType ***********************************************

// ********** Begin Enum EOculusXRSpaceStorageLocation *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation;
static UEnum* EOculusXRSpaceStorageLocation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceStorageLocation"));
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStorageLocation>()
{
	return EOculusXRSpaceStorageLocation_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cloud.DisplayName", "Cloud" },
		{ "Cloud.Name", "EOculusXRSpaceStorageLocation::Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is used as a bit-mask\n" },
#endif
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EOculusXRSpaceStorageLocation::Invalid" },
		{ "Local.DisplayName", "Local" },
		{ "Local.Name", "EOculusXRSpaceStorageLocation::Local" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used as a bit-mask" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceStorageLocation::Invalid", (int64)EOculusXRSpaceStorageLocation::Invalid },
		{ "EOculusXRSpaceStorageLocation::Local", (int64)EOculusXRSpaceStorageLocation::Local },
		{ "EOculusXRSpaceStorageLocation::Cloud", (int64)EOculusXRSpaceStorageLocation::Cloud },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceStorageLocation",
	"EOculusXRSpaceStorageLocation",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation.InnerSingleton;
}
// ********** End Enum EOculusXRSpaceStorageLocation ***********************************************

// ********** Begin Enum EOculusXRSpaceStoragePersistenceMode **************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode;
static UEnum* EOculusXRSpaceStoragePersistenceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceStoragePersistenceMode"));
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceStoragePersistenceMode>()
{
	return EOculusXRSpaceStoragePersistenceMode_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Indefinite.DisplayName", "Indefinite" },
		{ "Indefinite.Name", "EOculusXRSpaceStoragePersistenceMode::Indefinite" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EOculusXRSpaceStoragePersistenceMode::Invalid" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceStoragePersistenceMode::Invalid", (int64)EOculusXRSpaceStoragePersistenceMode::Invalid },
		{ "EOculusXRSpaceStoragePersistenceMode::Indefinite", (int64)EOculusXRSpaceStoragePersistenceMode::Indefinite },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceStoragePersistenceMode",
	"EOculusXRSpaceStoragePersistenceMode",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStoragePersistenceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode.InnerSingleton;
}
// ********** End Enum EOculusXRSpaceStoragePersistenceMode ****************************************

// ********** Begin Enum EOculusXRSpaceComponentType ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRSpaceComponentType;
static UEnum* EOculusXRSpaceComponentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRSpaceComponentType"));
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRSpaceComponentType>()
{
	return EOculusXRSpaceComponentType_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Locatable.DisplayName", "Locatable" },
		{ "Locatable.Name", "EOculusXRSpaceComponentType::Locatable" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
		{ "RoomLayout.DisplayName", "RoomLayout" },
		{ "RoomLayout.Name", "EOculusXRSpaceComponentType::RoomLayout" },
		{ "ScenePlane.DisplayName", "ScenePlane" },
		{ "ScenePlane.Name", "EOculusXRSpaceComponentType::ScenePlane" },
		{ "SceneVolume.DisplayName", "SceneVolume" },
		{ "SceneVolume.Name", "EOculusXRSpaceComponentType::SceneVolume" },
		{ "SemanticClassification.DisplayName", "SemanticClassification" },
		{ "SemanticClassification.Name", "EOculusXRSpaceComponentType::SemanticClassification" },
		{ "Sharable.DisplayName", "Sharable" },
		{ "Sharable.Name", "EOculusXRSpaceComponentType::Sharable" },
		{ "SpaceContainer.DisplayName", "SpaceContainer" },
		{ "SpaceContainer.Name", "EOculusXRSpaceComponentType::SpaceContainer" },
		{ "Storable.DisplayName", "Storable" },
		{ "Storable.Name", "EOculusXRSpaceComponentType::Storable" },
		{ "TriangleMesh.DisplayName", "TriangleMesh" },
		{ "TriangleMesh.Name", "EOculusXRSpaceComponentType::TriangleMesh" },
		{ "Undefined.DisplayName", "Not defined" },
		{ "Undefined.Name", "EOculusXRSpaceComponentType::Undefined" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRSpaceComponentType::Locatable", (int64)EOculusXRSpaceComponentType::Locatable },
		{ "EOculusXRSpaceComponentType::Storable", (int64)EOculusXRSpaceComponentType::Storable },
		{ "EOculusXRSpaceComponentType::Sharable", (int64)EOculusXRSpaceComponentType::Sharable },
		{ "EOculusXRSpaceComponentType::ScenePlane", (int64)EOculusXRSpaceComponentType::ScenePlane },
		{ "EOculusXRSpaceComponentType::SceneVolume", (int64)EOculusXRSpaceComponentType::SceneVolume },
		{ "EOculusXRSpaceComponentType::SemanticClassification", (int64)EOculusXRSpaceComponentType::SemanticClassification },
		{ "EOculusXRSpaceComponentType::RoomLayout", (int64)EOculusXRSpaceComponentType::RoomLayout },
		{ "EOculusXRSpaceComponentType::SpaceContainer", (int64)EOculusXRSpaceComponentType::SpaceContainer },
		{ "EOculusXRSpaceComponentType::Undefined", (int64)EOculusXRSpaceComponentType::Undefined },
		{ "EOculusXRSpaceComponentType::TriangleMesh", (int64)EOculusXRSpaceComponentType::TriangleMesh },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRSpaceComponentType",
	"EOculusXRSpaceComponentType",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType()
{
	if (!Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRSpaceComponentType.InnerSingleton;
}
// ********** End Enum EOculusXRSpaceComponentType *************************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryInfo *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo;
class UScriptStruct* FOculusXRSpaceQueryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQuerySpaces_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IDFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupUUIDFilter_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxQuerySpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IDFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentFilter_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupUUIDFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces = { "MaxQuerySpaces", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, MaxQuerySpaces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQuerySpaces_MetaData), NewProp_MaxQuerySpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Timeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeout_MetaData), NewProp_Timeout_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1919851026
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, FilterType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceQueryFilterType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterType_MetaData), NewProp_FilterType_MetaData) }; // 4193402121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_Inner = { "IDFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter = { "IDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, IDFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IDFilter_MetaData), NewProp_IDFilter_MetaData) }; // 3912340335
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner = { "ComponentFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(0, nullptr) }; // 362484532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter = { "ComponentFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, ComponentFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentFilter_MetaData), NewProp_ComponentFilter_MetaData) }; // 362484532
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_GroupUUIDFilter = { "GroupUUIDFilter", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryInfo, GroupUUIDFilter), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupUUIDFilter_MetaData), NewProp_GroupUUIDFilter_MetaData) }; // 3912340335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_MaxQuerySpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_FilterType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_IDFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_ComponentFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewProp_GroupUUIDFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryInfo",
	Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::PropPointers),
	sizeof(FOculusXRSpaceQueryInfo),
	alignof(FOculusXRSpaceQueryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRSpaceQueryInfo *********************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryResult *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult;
class UScriptStruct* FOculusXRSpaceQueryResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryResult"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Location_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1603820546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) }; // 3912340335
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceQueryResult, Location), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceStorageLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1919851026
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_UUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryResult",
	Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::PropPointers),
	sizeof(FOculusXRSpaceQueryResult),
	alignof(FOculusXRSpaceQueryResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRSpaceQueryResult *******************************************

// ********** Begin ScriptStruct FOculusXRSpaceQueryFilterValues ***********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues;
class UScriptStruct* FOculusXRSpaceQueryFilterValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceQueryFilterValues"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceQueryFilterValues>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceQueryFilterValues",
	nullptr,
	0,
	sizeof(FOculusXRSpaceQueryFilterValues),
	alignof(FOculusXRSpaceQueryFilterValues),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRSpaceQueryFilterValues *************************************

// ********** Begin Class UOculusXRSpaceDiscoveryFilterBase ****************************************
void UOculusXRSpaceDiscoveryFilterBase::StaticRegisterNativesUOculusXRSpaceDiscoveryFilterBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase;
UClass* UOculusXRSpaceDiscoveryFilterBase::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpaceDiscoveryFilterBase;
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSpaceDiscoveryFilterBase"),
			Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton,
			StaticRegisterNativesUOculusXRSpaceDiscoveryFilterBase,
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
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_NoRegister()
{
	return UOculusXRSpaceDiscoveryFilterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryFilterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::ClassParams = {
	&UOculusXRSpaceDiscoveryFilterBase::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase.OuterSingleton;
}
UOculusXRSpaceDiscoveryFilterBase::UOculusXRSpaceDiscoveryFilterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSpaceDiscoveryFilterBase);
UOculusXRSpaceDiscoveryFilterBase::~UOculusXRSpaceDiscoveryFilterBase() {}
// ********** End Class UOculusXRSpaceDiscoveryFilterBase ******************************************

// ********** Begin ScriptStruct FOculusXRSpaceDiscoveryInfo ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo;
class UScriptStruct* FOculusXRSpaceDiscoveryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRSpaceDiscoveryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Filters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Filters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRSpaceDiscoveryInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRSpaceDiscoveryInfo, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filters_MetaData), NewProp_Filters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewProp_Filters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewProp_Filters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRSpaceDiscoveryInfo",
	Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::PropPointers),
	sizeof(FOculusXRSpaceDiscoveryInfo),
	alignof(FOculusXRSpaceDiscoveryInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRSpaceDiscoveryInfo *****************************************

// ********** Begin ScriptStruct FOculusXRAnchorsDiscoverResult ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult;
class UScriptStruct* FOculusXRAnchorsDiscoverResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRAnchorsDiscoverResult"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Space;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRAnchorsDiscoverResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorsDiscoverResult, Space), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Space_MetaData), NewProp_Space_MetaData) }; // 1603820546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRAnchorsDiscoverResult, UUID), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) }; // 3912340335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewProp_Space,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewProp_UUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRAnchorsDiscoverResult",
	Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::PropPointers),
	sizeof(FOculusXRAnchorsDiscoverResult),
	alignof(FOculusXRAnchorsDiscoverResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRAnchorsDiscoverResult **************************************

// ********** Begin Class UOculusXRSpaceDiscoveryIdsFilter *****************************************
void UOculusXRSpaceDiscoveryIdsFilter::StaticRegisterNativesUOculusXRSpaceDiscoveryIdsFilter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter;
UClass* UOculusXRSpaceDiscoveryIdsFilter::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpaceDiscoveryIdsFilter;
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSpaceDiscoveryIdsFilter"),
			Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton,
			StaticRegisterNativesUOculusXRSpaceDiscoveryIdsFilter,
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
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_NoRegister()
{
	return UOculusXRSpaceDiscoveryIdsFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuids_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Uuids;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryIdsFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::NewProp_Uuids_Inner = { "Uuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::NewProp_Uuids = { "Uuids", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSpaceDiscoveryIdsFilter, Uuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuids_MetaData), NewProp_Uuids_MetaData) }; // 3912340335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::NewProp_Uuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::NewProp_Uuids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::ClassParams = {
	&UOculusXRSpaceDiscoveryIdsFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter.OuterSingleton;
}
UOculusXRSpaceDiscoveryIdsFilter::UOculusXRSpaceDiscoveryIdsFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSpaceDiscoveryIdsFilter);
UOculusXRSpaceDiscoveryIdsFilter::~UOculusXRSpaceDiscoveryIdsFilter() {}
// ********** End Class UOculusXRSpaceDiscoveryIdsFilter *******************************************

// ********** Begin Class UOculusXRSpaceDiscoveryComponentsFilter **********************************
void UOculusXRSpaceDiscoveryComponentsFilter::StaticRegisterNativesUOculusXRSpaceDiscoveryComponentsFilter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter;
UClass* UOculusXRSpaceDiscoveryComponentsFilter::GetPrivateStaticClass()
{
	using TClass = UOculusXRSpaceDiscoveryComponentsFilter;
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OculusXRSpaceDiscoveryComponentsFilter"),
			Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton,
			StaticRegisterNativesUOculusXRSpaceDiscoveryComponentsFilter,
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
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.InnerSingleton;
}
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_NoRegister()
{
	return UOculusXRSpaceDiscoveryComponentsFilter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "IncludePath", "OculusXRAnchorTypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[] = {
		{ "Category", "OculusXR|SpatialAnchor" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRSpaceDiscoveryComponentsFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::NewProp_ComponentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRSpaceDiscoveryComponentsFilter, ComponentType), Z_Construct_UEnum_OculusXRAnchors_EOculusXRSpaceComponentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentType_MetaData), NewProp_ComponentType_MetaData) }; // 362484532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::NewProp_ComponentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::NewProp_ComponentType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::ClassParams = {
	&UOculusXRSpaceDiscoveryComponentsFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter()
{
	if (!Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton, Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter.OuterSingleton;
}
UOculusXRSpaceDiscoveryComponentsFilter::UOculusXRSpaceDiscoveryComponentsFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRSpaceDiscoveryComponentsFilter);
UOculusXRSpaceDiscoveryComponentsFilter::~UOculusXRSpaceDiscoveryComponentsFilter() {}
// ********** End Class UOculusXRSpaceDiscoveryComponentsFilter ************************************

// ********** Begin ScriptStruct FOculusXRRoomLayout ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout;
class UScriptStruct* FOculusXRRoomLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRRoomLayout, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("OculusXRRoomLayout"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a room layout within a specific space\n" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a room layout within a specific space" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomAnchorHandle_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallsUuid_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomObjectUUIDs_MetaData[] = {
		{ "Category", "OculusXR|Anchors" },
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomAnchorHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FloorUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CeilingUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallsUuid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WallsUuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomObjectUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomObjectUUIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRRoomLayout>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle = { "RoomAnchorHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomAnchorHandle), Z_Construct_UScriptStruct_FOculusXRUInt64, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomAnchorHandle_MetaData), NewProp_RoomAnchorHandle_MetaData) }; // 1603820546
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid = { "RoomUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomUuid_MetaData), NewProp_RoomUuid_MetaData) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid = { "FloorUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, FloorUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorUuid_MetaData), NewProp_FloorUuid_MetaData) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid = { "CeilingUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, CeilingUuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingUuid_MetaData), NewProp_CeilingUuid_MetaData) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_Inner = { "WallsUuid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid = { "WallsUuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, WallsUuid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallsUuid_MetaData), NewProp_WallsUuid_MetaData) }; // 3912340335
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_Inner = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(0, nullptr) }; // 3912340335
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs = { "RoomObjectUUIDs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRRoomLayout, RoomObjectUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomObjectUUIDs_MetaData), NewProp_RoomObjectUUIDs_MetaData) }; // 3912340335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomAnchorHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_FloorUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_CeilingUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_WallsUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewProp_RoomObjectUUIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	&NewStructOps,
	"OculusXRRoomLayout",
	Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::PropPointers),
	sizeof(FOculusXRRoomLayout),
	alignof(FOculusXRRoomLayout),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRRoomLayout()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRRoomLayout *************************************************

// ********** Begin Enum EOculusXRAnchorSpace ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXRAnchorSpace;
static UEnum* EOculusXRAnchorSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOculusXRAnchorSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOculusXRAnchorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace, (UObject*)Z_Construct_UPackage__Script_OculusXRAnchors(), TEXT("EOculusXRAnchorSpace"));
	}
	return Z_Registration_Info_UEnum_EOculusXRAnchorSpace.OuterSingleton;
}
template<> OCULUSXRANCHORS_API UEnum* StaticEnum<EOculusXRAnchorSpace>()
{
	return EOculusXRAnchorSpace_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents different types of Anchor space.\n */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRAnchorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents different types of Anchor space." },
#endif
		{ "Tracking.Comment", "/**\n\x09 * Tracking space is relative to the HMD tracking origin.\n\x09 * It does not include the transform of the player pawn.\n\x09 */" },
		{ "Tracking.Name", "EOculusXRAnchorSpace::Tracking" },
		{ "Tracking.ToolTip", "Tracking space is relative to the HMD tracking origin.\nIt does not include the transform of the player pawn." },
		{ "World.Comment", "/** World space is relative to the global Unreal origin. */" },
		{ "World.Name", "EOculusXRAnchorSpace::World" },
		{ "World.ToolTip", "World space is relative to the global Unreal origin." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOculusXRAnchorSpace::World", (int64)EOculusXRAnchorSpace::World },
		{ "EOculusXRAnchorSpace::Tracking", (int64)EOculusXRAnchorSpace::Tracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRAnchors,
	nullptr,
	"EOculusXRAnchorSpace",
	"EOculusXRAnchorSpace",
	Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace()
{
	if (!Z_Registration_Info_UEnum_EOculusXRAnchorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXRAnchorSpace.InnerSingleton, Z_Construct_UEnum_OculusXRAnchors_EOculusXRAnchorSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOculusXRAnchorSpace.InnerSingleton;
}
// ********** End Enum EOculusXRAnchorSpace ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOculusXRAnchorResult_StaticEnum, TEXT("EOculusXRAnchorResult"), &Z_Registration_Info_UEnum_EOculusXRAnchorResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2715698107U) },
		{ EOculusLocationFlags_StaticEnum, TEXT("EOculusLocationFlags"), &Z_Registration_Info_UEnum_EOculusLocationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1369559007U) },
		{ EOculusXRSpaceQueryFilterType_StaticEnum, TEXT("EOculusXRSpaceQueryFilterType"), &Z_Registration_Info_UEnum_EOculusXRSpaceQueryFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4193402121U) },
		{ EOculusXRSpaceStorageLocation_StaticEnum, TEXT("EOculusXRSpaceStorageLocation"), &Z_Registration_Info_UEnum_EOculusXRSpaceStorageLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1919851026U) },
		{ EOculusXRSpaceStoragePersistenceMode_StaticEnum, TEXT("EOculusXRSpaceStoragePersistenceMode"), &Z_Registration_Info_UEnum_EOculusXRSpaceStoragePersistenceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1038858864U) },
		{ EOculusXRSpaceComponentType_StaticEnum, TEXT("EOculusXRSpaceComponentType"), &Z_Registration_Info_UEnum_EOculusXRSpaceComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 362484532U) },
		{ EOculusXRAnchorSpace_StaticEnum, TEXT("EOculusXRAnchorSpace"), &Z_Registration_Info_UEnum_EOculusXRAnchorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3199340703U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOculusXRAnchorLocationFlags::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAnchorLocationFlags_Statics::NewStructOps, TEXT("OculusXRAnchorLocationFlags"), &Z_Registration_Info_UScriptStruct_FOculusXRAnchorLocationFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchorLocationFlags), 3499776501U) },
		{ FOculusXRUUID::StaticStruct, Z_Construct_UScriptStruct_FOculusXRUUID_Statics::NewStructOps, TEXT("OculusXRUUID"), &Z_Registration_Info_UScriptStruct_FOculusXRUUID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUUID), 3912340335U) },
		{ FOculusXRUInt64::StaticStruct, Z_Construct_UScriptStruct_FOculusXRUInt64_Statics::NewStructOps, TEXT("OculusXRUInt64"), &Z_Registration_Info_UScriptStruct_FOculusXRUInt64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRUInt64), 1603820546U) },
		{ FOculusXRAnchor::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAnchor_Statics::NewStructOps, TEXT("OculusXRAnchor"), &Z_Registration_Info_UScriptStruct_FOculusXRAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchor), 2144909794U) },
		{ FOculusXRSpaceQueryInfo::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryInfo_Statics::NewStructOps, TEXT("OculusXRSpaceQueryInfo"), &Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryInfo), 912784344U) },
		{ FOculusXRSpaceQueryResult::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryResult_Statics::NewStructOps, TEXT("OculusXRSpaceQueryResult"), &Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryResult), 2504935810U) },
		{ FOculusXRSpaceQueryFilterValues::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceQueryFilterValues_Statics::NewStructOps, TEXT("OculusXRSpaceQueryFilterValues"), &Z_Registration_Info_UScriptStruct_FOculusXRSpaceQueryFilterValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceQueryFilterValues), 1380546277U) },
		{ FOculusXRSpaceDiscoveryInfo::StaticStruct, Z_Construct_UScriptStruct_FOculusXRSpaceDiscoveryInfo_Statics::NewStructOps, TEXT("OculusXRSpaceDiscoveryInfo"), &Z_Registration_Info_UScriptStruct_FOculusXRSpaceDiscoveryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRSpaceDiscoveryInfo), 2971489904U) },
		{ FOculusXRAnchorsDiscoverResult::StaticStruct, Z_Construct_UScriptStruct_FOculusXRAnchorsDiscoverResult_Statics::NewStructOps, TEXT("OculusXRAnchorsDiscoverResult"), &Z_Registration_Info_UScriptStruct_FOculusXRAnchorsDiscoverResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRAnchorsDiscoverResult), 2389389487U) },
		{ FOculusXRRoomLayout::StaticStruct, Z_Construct_UScriptStruct_FOculusXRRoomLayout_Statics::NewStructOps, TEXT("OculusXRRoomLayout"), &Z_Registration_Info_UScriptStruct_FOculusXRRoomLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRRoomLayout), 1550924675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryFilterBase, UOculusXRSpaceDiscoveryFilterBase::StaticClass, TEXT("UOculusXRSpaceDiscoveryFilterBase"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryFilterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryFilterBase), 3924295249U) },
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryIdsFilter, UOculusXRSpaceDiscoveryIdsFilter::StaticClass, TEXT("UOculusXRSpaceDiscoveryIdsFilter"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryIdsFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryIdsFilter), 427341558U) },
		{ Z_Construct_UClass_UOculusXRSpaceDiscoveryComponentsFilter, UOculusXRSpaceDiscoveryComponentsFilter::StaticClass, TEXT("UOculusXRSpaceDiscoveryComponentsFilter"), &Z_Registration_Info_UClass_UOculusXRSpaceDiscoveryComponentsFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRSpaceDiscoveryComponentsFilter), 1635350288U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_1560586840(TEXT("/Script/OculusXRAnchors"),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRAnchors_Public_OculusXRAnchorTypes_h__Script_OculusXRAnchors_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
