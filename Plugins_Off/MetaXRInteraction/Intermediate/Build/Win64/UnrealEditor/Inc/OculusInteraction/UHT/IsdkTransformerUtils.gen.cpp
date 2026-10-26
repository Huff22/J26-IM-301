// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTransformerUtils() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisConstraints();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTransformerUtils();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkAxisConstraints **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints;
class UScriptStruct* FIsdkAxisConstraints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkAxisConstraints, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkAxisConstraints"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstraint_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstraint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkAxisConstraints>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_bUseConstraint_SetBit(void* Obj)
{
	((FIsdkAxisConstraints*)Obj)->bUseConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_bUseConstraint = { "bUseConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkAxisConstraints), &Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_bUseConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseConstraint_MetaData), NewProp_bUseConstraint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisConstraints, Min), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Min_MetaData), NewProp_Min_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkAxisConstraints, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_bUseConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_Min,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewProp_Max,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkAxisConstraints",
	Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::PropPointers),
	sizeof(FIsdkAxisConstraints),
	alignof(FIsdkAxisConstraints),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisConstraints()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.InnerSingleton, Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints.InnerSingleton;
}
// ********** End ScriptStruct FIsdkAxisConstraints ************************************************

// ********** Begin ScriptStruct FIsdkConstraintAxes ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes;
class UScriptStruct* FIsdkConstraintAxes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkConstraintAxes, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkConstraintAxes"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkConstraintAxes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkConstraintAxes, XAxis), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxis_MetaData), NewProp_XAxis_MetaData) }; // 1802268757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkConstraintAxes, YAxis), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxis_MetaData), NewProp_YAxis_MetaData) }; // 1802268757
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkConstraintAxes, ZAxis), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxis_MetaData), NewProp_ZAxis_MetaData) }; // 1802268757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_XAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_YAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewProp_ZAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkConstraintAxes",
	Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::PropPointers),
	sizeof(FIsdkConstraintAxes),
	alignof(FIsdkConstraintAxes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.InnerSingleton, Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes.InnerSingleton;
}
// ********** End ScriptStruct FIsdkConstraintAxes *************************************************

// ********** Begin ScriptStruct FIsdkTransformerUtils *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils;
class UScriptStruct* FIsdkTransformerUtils::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkTransformerUtils, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkTransformerUtils"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformerUtils.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkTransformerUtils>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkTransformerUtils",
	nullptr,
	0,
	sizeof(FIsdkTransformerUtils),
	alignof(FIsdkTransformerUtils),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkTransformerUtils()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.InnerSingleton, Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils.InnerSingleton;
}
// ********** End ScriptStruct FIsdkTransformerUtils ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformerUtils_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkAxisConstraints::StaticStruct, Z_Construct_UScriptStruct_FIsdkAxisConstraints_Statics::NewStructOps, TEXT("IsdkAxisConstraints"), &Z_Registration_Info_UScriptStruct_FIsdkAxisConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkAxisConstraints), 1802268757U) },
		{ FIsdkConstraintAxes::StaticStruct, Z_Construct_UScriptStruct_FIsdkConstraintAxes_Statics::NewStructOps, TEXT("IsdkConstraintAxes"), &Z_Registration_Info_UScriptStruct_FIsdkConstraintAxes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkConstraintAxes), 3149593998U) },
		{ FIsdkTransformerUtils::StaticStruct, Z_Construct_UScriptStruct_FIsdkTransformerUtils_Statics::NewStructOps, TEXT("IsdkTransformerUtils"), &Z_Registration_Info_UScriptStruct_FIsdkTransformerUtils, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkTransformerUtils), 3165499678U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformerUtils_h__Script_OculusInteraction_2172566769(TEXT("/Script/OculusInteraction"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformerUtils_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformerUtils_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
