// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRColocationTypes() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXRCOLOCATION_API UEnum* Z_Construct_UEnum_OculusXRColocation_EColocationResult();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EColocationResult *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColocationResult;
static UEnum* EColocationResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EColocationResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EColocationResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRColocation_EColocationResult, (UObject*)Z_Construct_UPackage__Script_OculusXRColocation(), TEXT("EColocationResult"));
	}
	return Z_Registration_Info_UEnum_EColocationResult.OuterSingleton;
}
template<> OCULUSXRCOLOCATION_API UEnum* StaticEnum<EColocationResult>()
{
	return EColocationResult_StaticEnum();
}
struct Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CloudStorageDisabled.Name", "EColocationResult::CloudStorageDisabled" },
		{ "Failure.Name", "EColocationResult::Failure" },
		{ "FailureDataIsInvalid.Name", "EColocationResult::FailureDataIsInvalid" },
		{ "FailureInvalidParameter.Name", "EColocationResult::FailureInvalidParameter" },
		{ "InsufficientPermissions.Name", "EColocationResult::InsufficientPermissions" },
		{ "ModuleRelativePath", "Public/OculusXRColocationTypes.h" },
		{ "NetworkRequestFailed.Name", "EColocationResult::NetworkRequestFailed" },
		{ "NetworkTimeout.Name", "EColocationResult::NetworkTimeout" },
		{ "NoDiscoveryMethodAvailable.Name", "EColocationResult::NoDiscoveryMethodAvailable" },
		{ "Success.Name", "EColocationResult::Success" },
		{ "Success_AlreadyAdvertising.Name", "EColocationResult::Success_AlreadyAdvertising" },
		{ "Success_AlreadyDiscovering.Name", "EColocationResult::Success_AlreadyDiscovering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EColocationResult::Success", (int64)EColocationResult::Success },
		{ "EColocationResult::Success_AlreadyAdvertising", (int64)EColocationResult::Success_AlreadyAdvertising },
		{ "EColocationResult::Success_AlreadyDiscovering", (int64)EColocationResult::Success_AlreadyDiscovering },
		{ "EColocationResult::Failure", (int64)EColocationResult::Failure },
		{ "EColocationResult::FailureInvalidParameter", (int64)EColocationResult::FailureInvalidParameter },
		{ "EColocationResult::FailureDataIsInvalid", (int64)EColocationResult::FailureDataIsInvalid },
		{ "EColocationResult::NetworkTimeout", (int64)EColocationResult::NetworkTimeout },
		{ "EColocationResult::NetworkRequestFailed", (int64)EColocationResult::NetworkRequestFailed },
		{ "EColocationResult::InsufficientPermissions", (int64)EColocationResult::InsufficientPermissions },
		{ "EColocationResult::CloudStorageDisabled", (int64)EColocationResult::CloudStorageDisabled },
		{ "EColocationResult::NoDiscoveryMethodAvailable", (int64)EColocationResult::NoDiscoveryMethodAvailable },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusXRColocation,
	nullptr,
	"EColocationResult",
	"EColocationResult",
	Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusXRColocation_EColocationResult()
{
	if (!Z_Registration_Info_UEnum_EColocationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColocationResult.InnerSingleton, Z_Construct_UEnum_OculusXRColocation_EColocationResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EColocationResult.InnerSingleton;
}
// ********** End Enum EColocationResult ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EColocationResult_StaticEnum, TEXT("EColocationResult"), &Z_Registration_Info_UEnum_EColocationResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4150974659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_4068409500(TEXT("/Script/OculusXRColocation"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationTypes_h__Script_OculusXRColocation_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
