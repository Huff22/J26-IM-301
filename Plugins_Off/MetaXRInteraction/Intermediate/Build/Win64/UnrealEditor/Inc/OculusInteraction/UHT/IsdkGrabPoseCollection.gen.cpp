// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabPoseCollection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabPoseCollection() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPoseCollection();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkGrabPoseCollection *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection;
class UScriptStruct* FIsdkGrabPoseCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabPoseCollection, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabPoseCollection"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Helper struct meant to be used to gather the pointer or grab pose events sent to a class.\n * Meant to be used as an IGrabbable\n */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabPoseCollection.h" },
		{ "ToolTip", "@brief Helper struct meant to be used to gather the pointer or grab pose events sent to a class.\nMeant to be used as an IGrabbable" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabPoseCollection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabPoseCollection",
	nullptr,
	0,
	sizeof(FIsdkGrabPoseCollection),
	alignof(FIsdkGrabPoseCollection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPoseCollection()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection.InnerSingleton;
}
// ********** End ScriptStruct FIsdkGrabPoseCollection *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkGrabPoseCollection::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabPoseCollection_Statics::NewStructOps, TEXT("IsdkGrabPoseCollection"), &Z_Registration_Info_UScriptStruct_FIsdkGrabPoseCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabPoseCollection), 686883547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_1511432723(TEXT("/Script/OculusInteraction"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabPoseCollection_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
