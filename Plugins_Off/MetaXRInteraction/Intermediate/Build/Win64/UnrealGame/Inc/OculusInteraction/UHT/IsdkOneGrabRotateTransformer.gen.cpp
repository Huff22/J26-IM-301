// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkOneGrabRotateTransformer.h"
#include "Interaction/Grabbable/IsdkTransformerUtils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkOneGrabRotateTransformer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabRotateTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkOneGrabRotateTransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkAxisConstraints();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkConstraintAxes();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FOneGrabRotationConstraint();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOneGrabRotationConstraint ****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint;
class UScriptStruct* FOneGrabRotationConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOneGrabRotationConstraint, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("OneGrabRotationConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief A struct defining how the rotation constraint should be configured when used in a\n * rotational transformer\n * @see UIsdkOneGrabRotateTransformer\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "@brief A struct defining how the rotation constraint should be configured when used in a\nrotational transformer\n@see UIsdkOneGrabRotateTransformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAngleFromAxisConstraint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Whether or not to calculate the angle from the axis when calculating constraint */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "Whether or not to calculate the angle from the axis when calculating constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** The axis to use in this constraint */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "The axis to use in this constraint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationConstraint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** The per-axis rotational constraints to apply */" },
		{ "EditCondition", "(!bUseAngleFromAxisConstraint) && (RotationAxis == 0)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "The per-axis rotational constraints to apply" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleFromAxis_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The ceiling on the angle allowed during constraint calculation */" },
		{ "EditCondition", "bUseAngleFromAxisConstraint" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "The ceiling on the angle allowed during constraint calculation" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisAngleRange_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Minimum and maximum allowable angle for constraint calculation*/" },
		{ "EditCondition", "(!bUseAngleFromAxisConstraint) && (RotationAxis != 0)" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "Minimum and maximum allowable angle for constraint calculation" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseAngleFromAxisConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAngleFromAxisConstraint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationConstraint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleFromAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisAngleRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOneGrabRotationConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_bUseAngleFromAxisConstraint_SetBit(void* Obj)
{
	((FOneGrabRotationConstraint*)Obj)->bUseAngleFromAxisConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_bUseAngleFromAxisConstraint = { "bUseAngleFromAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOneGrabRotationConstraint), &Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_bUseAngleFromAxisConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAngleFromAxisConstraint_MetaData), NewProp_bUseAngleFromAxisConstraint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneGrabRotationConstraint, RotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) }; // 342925220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_RotationConstraint = { "RotationConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneGrabRotationConstraint, RotationConstraint), Z_Construct_UScriptStruct_FIsdkConstraintAxes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationConstraint_MetaData), NewProp_RotationConstraint_MetaData) }; // 3149593998
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_MaxAngleFromAxis = { "MaxAngleFromAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneGrabRotationConstraint, MaxAngleFromAxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngleFromAxis_MetaData), NewProp_MaxAngleFromAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_AxisAngleRange = { "AxisAngleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOneGrabRotationConstraint, AxisAngleRange), Z_Construct_UScriptStruct_FIsdkAxisConstraints, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisAngleRange_MetaData), NewProp_AxisAngleRange_MetaData) }; // 1802268757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_bUseAngleFromAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_RotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_RotationConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_MaxAngleFromAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewProp_AxisAngleRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"OneGrabRotationConstraint",
	Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::PropPointers),
	sizeof(FOneGrabRotationConstraint),
	alignof(FOneGrabRotationConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOneGrabRotationConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.InnerSingleton, Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint.InnerSingleton;
}
// ********** End ScriptStruct FOneGrabRotationConstraint ******************************************

// ********** Begin Class UIsdkOneGrabRotateTransformer ********************************************
void UIsdkOneGrabRotateTransformer::StaticRegisterNativesUIsdkOneGrabRotateTransformer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer;
UClass* UIsdkOneGrabRotateTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkOneGrabRotateTransformer;
	if (!Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkOneGrabRotateTransformer"),
			Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkOneGrabRotateTransformer,
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
	return Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkOneGrabRotateTransformer_NoRegister()
{
	return UIsdkOneGrabRotateTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkOneGrabRotateTransformer\n * @brief Scene component utilized for transforming a grabbable object, modifying only its\n * rotation and only when grabbed by one hand/controller\n * @see UIsdkTransformer\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK One Grab Rotate Transformer" },
		{ "IncludePath", "Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ToolTip", "@class UIsdkOneGrabRotateTransformer\n@brief Scene component utilized for transforming a grabbable object, modifying only its\nrotation and only when grabbed by one hand/controller\n@see UIsdkTransformer\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The rotation constraint to use when updating the transform */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkOneGrabRotateTransformer.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The rotation constraint to use when updating the transform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkOneGrabRotateTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkOneGrabRotateTransformer, Constraint), Z_Construct_UScriptStruct_FOneGrabRotationConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraint_MetaData), NewProp_Constraint_MetaData) }; // 3825798127
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::NewProp_Constraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTransformer,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::ClassParams = {
	&UIsdkOneGrabRotateTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkOneGrabRotateTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.OuterSingleton, Z_Construct_UClass_UIsdkOneGrabRotateTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkOneGrabRotateTransformer);
UIsdkOneGrabRotateTransformer::~UIsdkOneGrabRotateTransformer() {}
// ********** End Class UIsdkOneGrabRotateTransformer **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOneGrabRotationConstraint::StaticStruct, Z_Construct_UScriptStruct_FOneGrabRotationConstraint_Statics::NewStructOps, TEXT("OneGrabRotationConstraint"), &Z_Registration_Info_UScriptStruct_FOneGrabRotationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOneGrabRotationConstraint), 3825798127U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkOneGrabRotateTransformer, UIsdkOneGrabRotateTransformer::StaticClass, TEXT("UIsdkOneGrabRotateTransformer"), &Z_Registration_Info_UClass_UIsdkOneGrabRotateTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkOneGrabRotateTransformer), 345316548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_1254806533(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkOneGrabRotateTransformer_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
