// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabFreeTransformer.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabFreeTransformer() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisConstraints();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPointDelta();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkGrabPointDelta ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta;
class UScriptStruct* FIsdkGrabPointDelta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabPointDelta, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabPointDelta"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * @struct FIsdkGrabPointDelta\n * @brief A struct containing the deltas (rotation and centroid offset) of a grab point, used by\n * GrabTransformers to track changes in grab heuristics.\n * @see UIsdkGrabFreeTransformer\n */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "@struct FIsdkGrabPointDelta\n@brief A struct containing the deltas (rotation and centroid offset) of a grab point, used by\nGrabTransformers to track changes in grab heuristics.\n@see UIsdkGrabFreeTransformer" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabPointDelta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabPointDelta",
	nullptr,
	0,
	sizeof(FIsdkGrabPointDelta),
	alignof(FIsdkGrabPointDelta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPointDelta()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta.InnerSingleton;
}
// ********** End ScriptStruct FIsdkGrabPointDelta *************************************************

// ********** Begin ScriptStruct FIsdkGrabFreeTransformerConfig ************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig;
class UScriptStruct* FIsdkGrabFreeTransformerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkGrabFreeTransformerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @struct FIsdkGrabFreeTransformerConfig\n * @brief A struct defining how the a Grab Free Transformer should function, including axis\n * constraints and relative versus world translations.\n * @see UIsdkGrabFreeTransformer\n */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "@struct FIsdkGrabFreeTransformerConfig\n@brief A struct defining how the a Grab Free Transformer should function, including axis\nconstraints and relative versus world translations.\n@see UIsdkGrabFreeTransformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeTranslation_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** If this transformer should use relative translations (versus world)*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "If this transformer should use relative translations (versus world)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslateConstraintAxes_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Constraints that should be applied to translation/location axes of this transformer*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "Constraints that should be applied to translation/location axes of this transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateConstraintAxes_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Constraints that should be applied to rotation axes of this transformer*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "Constraints that should be applied to rotation axes of this transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRelativeScale_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Whether or not this transformer's scale is treated as relative */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "Whether or not this transformer's scale is treated as relative" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleConstraint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Constraints that should be applied to scale axes of this transformer*/" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "Constraints that should be applied to scale axes of this transformer" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseRelativeTranslation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeTranslation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslateConstraintAxes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotateConstraintAxes;
	static void NewProp_bUseRelativeScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRelativeScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkGrabFreeTransformerConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation_SetBit(void* Obj)
{
	((FIsdkGrabFreeTransformerConfig*)Obj)->bUseRelativeTranslation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation = { "bUseRelativeTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkGrabFreeTransformerConfig), &Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeTranslation_MetaData), NewProp_bUseRelativeTranslation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_TranslateConstraintAxes = { "TranslateConstraintAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, TranslateConstraintAxes), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslateConstraintAxes_MetaData), NewProp_TranslateConstraintAxes_MetaData) }; // 3149593998
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_RotateConstraintAxes = { "RotateConstraintAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, RotateConstraintAxes), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateConstraintAxes_MetaData), NewProp_RotateConstraintAxes_MetaData) }; // 3149593998
void Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale_SetBit(void* Obj)
{
	((FIsdkGrabFreeTransformerConfig*)Obj)->bUseRelativeScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale = { "bUseRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FIsdkGrabFreeTransformerConfig), &Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRelativeScale_MetaData), NewProp_bUseRelativeScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_ScaleConstraint = { "ScaleConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkGrabFreeTransformerConfig, ScaleConstraint), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleConstraint_MetaData), NewProp_ScaleConstraint_MetaData) }; // 1802268757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeTranslation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_TranslateConstraintAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_RotateConstraintAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_bUseRelativeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewProp_ScaleConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkGrabFreeTransformerConfig",
	Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::PropPointers),
	sizeof(FIsdkGrabFreeTransformerConfig),
	alignof(FIsdkGrabFreeTransformerConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton, Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig.InnerSingleton;
}
// ********** End ScriptStruct FIsdkGrabFreeTransformerConfig **************************************

// ********** Begin Class UIsdkGrabFreeTransformer Function GetGrabCount ***************************
struct Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics
{
	struct IsdkGrabFreeTransformer_eventGetGrabCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Returns the number of grab points on this transformer */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "Returns the number of grab points on this transformer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabFreeTransformer_eventGetGrabCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabFreeTransformer, nullptr, "GetGrabCount", Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::IsdkGrabFreeTransformer_eventGetGrabCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::IsdkGrabFreeTransformer_eventGetGrabCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabFreeTransformer::execGetGrabCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGrabCount();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabFreeTransformer Function GetGrabCount *****************************

// ********** Begin Class UIsdkGrabFreeTransformer *************************************************
void UIsdkGrabFreeTransformer::StaticRegisterNativesUIsdkGrabFreeTransformer()
{
	UClass* Class = UIsdkGrabFreeTransformer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGrabCount", &UIsdkGrabFreeTransformer::execGetGrabCount },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabFreeTransformer;
UClass* UIsdkGrabFreeTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabFreeTransformer;
	if (!Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabFreeTransformer"),
			Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkGrabFreeTransformer,
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
	return Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer_NoRegister()
{
	return UIsdkGrabFreeTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkGrabFreeTransformer\n * @brief Scene component utilized for transforming a grabbable object\n *\n * Transforming including scale and axis constraints and physics considerations, with multiple\n * potential configurations\n * @see UIsdkTransformer\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Grab Free Transformer" },
		{ "IncludePath", "Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ToolTip", "@class UIsdkGrabFreeTransformer\n@brief Scene component utilized for transforming a grabbable object\n\nTransforming including scale and axis constraints and physics considerations, with multiple\npotential configurations\n@see UIsdkTransformer\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Returns the current interactable state, driven by events */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabFreeTransformer.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Returns the current interactable state, driven by events" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabFreeTransformer_GetGrabCount, "GetGrabCount" }, // 2495604664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabFreeTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabFreeTransformer, Config), Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 1461528159
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::ClassParams = {
	&UIsdkGrabFreeTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabFreeTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton, Z_Construct_UClass_UIsdkGrabFreeTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabFreeTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabFreeTransformer);
UIsdkGrabFreeTransformer::~UIsdkGrabFreeTransformer() {}
// ********** End Class UIsdkGrabFreeTransformer ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkGrabPointDelta::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabPointDelta_Statics::NewStructOps, TEXT("IsdkGrabPointDelta"), &Z_Registration_Info_UScriptStruct_FIsdkGrabPointDelta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabPointDelta), 943414439U) },
		{ FIsdkGrabFreeTransformerConfig::StaticStruct, Z_Construct_UScriptStruct_FIsdkGrabFreeTransformerConfig_Statics::NewStructOps, TEXT("IsdkGrabFreeTransformerConfig"), &Z_Registration_Info_UScriptStruct_FIsdkGrabFreeTransformerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkGrabFreeTransformerConfig), 1461528159U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabFreeTransformer, UIsdkGrabFreeTransformer::StaticClass, TEXT("UIsdkGrabFreeTransformer"), &Z_Registration_Info_UClass_UIsdkGrabFreeTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabFreeTransformer), 3599243310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_3467860428(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabFreeTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
