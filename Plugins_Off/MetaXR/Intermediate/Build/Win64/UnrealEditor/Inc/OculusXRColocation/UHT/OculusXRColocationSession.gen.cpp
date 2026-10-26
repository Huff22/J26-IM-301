// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRColocationSession.h"
#include "OculusXRAnchorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOculusXRColocationSession() {}

// ********** Begin Cross Module References ********************************************************
OCULUSXRANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRUUID();
OCULUSXRCOLOCATION_API UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession();
UPackage* Z_Construct_UPackage__Script_OculusXRColocation();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOculusXRColocationSession ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOculusXRColocationSession;
class UScriptStruct* FOculusXRColocationSession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusXRColocationSession, (UObject*)Z_Construct_UPackage__Script_OculusXRColocation(), TEXT("OculusXRColocationSession"));
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Uuid_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "OculusXR|Colocation" },
		{ "ModuleRelativePath", "Public/OculusXRColocationSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Uuid;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Metadata_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusXRColocationSession>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Uuid = { "Uuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Uuid), Z_Construct_UScriptStruct_FOculusXRUUID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Uuid_MetaData), NewProp_Uuid_MetaData) }; // 3912340335
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata_Inner = { "Metadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOculusXRColocationSession, Metadata), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Uuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewProp_Metadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusXRColocation,
	nullptr,
	&NewStructOps,
	"OculusXRColocationSession",
	Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::PropPointers),
	sizeof(FOculusXRColocationSession),
	alignof(FOculusXRColocationSession),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOculusXRColocationSession()
{
	if (!Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton, Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOculusXRColocationSession.InnerSingleton;
}
// ********** End ScriptStruct FOculusXRColocationSession ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOculusXRColocationSession::StaticStruct, Z_Construct_UScriptStruct_FOculusXRColocationSession_Statics::NewStructOps, TEXT("OculusXRColocationSession"), &Z_Registration_Info_UScriptStruct_FOculusXRColocationSession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusXRColocationSession), 2533711840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_868563765(TEXT("/Script/OculusXRColocation"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_3D_VFX_Projects_Unreal_Synapse_Plugins_MetaXR_Source_OculusXRColocation_Public_OculusXRColocationSession_h__Script_OculusXRColocation_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
