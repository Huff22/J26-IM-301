// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkThrowable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkThrowable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkThrowable();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkThrowable_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkThrowableSettings();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkVelocityEstimationMethod *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod;
static UEnum* EIsdkVelocityEstimationMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkVelocityEstimationMethod"));
	}
	return Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkVelocityEstimationMethod>()
{
	return EIsdkVelocityEstimationMethod_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Different methods for estimating the velocity of the object after being thrown */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "Different methods for estimating the velocity of the object after being thrown" },
		{ "VE_KalmanFilter.DisplayName", "Kalman Filter" },
		{ "VE_KalmanFilter.Name", "EIsdkVelocityEstimationMethod::VE_KalmanFilter" },
		{ "VE_KalmanFilter.Tooltip", "[EXPERIMENTAL] An advanced method that uses a statistical approach to estimate the velocity. The Kalman filter takes into account the uncertainty in the position and time data to provide a more accurate estimate of the velocity." },
		{ "VE_LeastSquares.DisplayName", "Least Squares" },
		{ "VE_LeastSquares.Name", "EIsdkVelocityEstimationMethod::VE_LeastSquares" },
		{ "VE_LeastSquares.Tooltip", "A simple and efficient method that assumes a linear relationship. Gives more deterministic results when the tracking data is free of outliers. Note: Outliers are already being filtered out based on the Z-Score threshold." },
		{ "VE_RANSAC.DisplayName", "RANSAC" },
		{ "VE_RANSAC.Name", "EIsdkVelocityEstimationMethod::VE_RANSAC" },
		{ "VE_RANSAC.Tooltip", "A robust method that can handle a significant amount of outlier data. Best used when the tracking data contains a large number of outliers." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkVelocityEstimationMethod::VE_LeastSquares", (int64)EIsdkVelocityEstimationMethod::VE_LeastSquares },
		{ "EIsdkVelocityEstimationMethod::VE_RANSAC", (int64)EIsdkVelocityEstimationMethod::VE_RANSAC },
		{ "EIsdkVelocityEstimationMethod::VE_KalmanFilter", (int64)EIsdkVelocityEstimationMethod::VE_KalmanFilter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkVelocityEstimationMethod",
	"EIsdkVelocityEstimationMethod",
	Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod()
{
	if (!Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod.InnerSingleton;
}
// ********** End Enum EIsdkVelocityEstimationMethod ***********************************************

// ********** Begin ScriptStruct FIsdkThrowableSettings ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings;
class UScriptStruct* FIsdkThrowableSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkThrowableSettings, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkThrowableSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ISDK Throwable" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleSize_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "Tooltip", "The number of recent object positions used to estimate the release velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Z_Score_Threshold_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "Tooltip", "The threshold for the Z-score filter. Object positions with a Z-score above this threshold are considered outliers and are excluded from the velocity estimation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "Tooltip", "The scale for the angular velocity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityEstimationMethod_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "Tooltip", "The method to use for estimating the release velocity of the object." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Z_Score_Threshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityEstimationMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VelocityEstimationMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkThrowableSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_SampleSize = { "SampleSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThrowableSettings, SampleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleSize_MetaData), NewProp_SampleSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_Z_Score_Threshold = { "Z_Score_Threshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThrowableSettings, Z_Score_Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Z_Score_Threshold_MetaData), NewProp_Z_Score_Threshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThrowableSettings, AngularVelocityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityScale_MetaData), NewProp_AngularVelocityScale_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_VelocityEstimationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_VelocityEstimationMethod = { "VelocityEstimationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkThrowableSettings, VelocityEstimationMethod), Z_Construct_UEnum_OculusInteraction_EIsdkVelocityEstimationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityEstimationMethod_MetaData), NewProp_VelocityEstimationMethod_MetaData) }; // 3350756353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_SampleSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_Z_Score_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_AngularVelocityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_VelocityEstimationMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewProp_VelocityEstimationMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkThrowableSettings",
	Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::PropPointers),
	sizeof(FIsdkThrowableSettings),
	alignof(FIsdkThrowableSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkThrowableSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.InnerSingleton, Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings.InnerSingleton;
}
// ********** End ScriptStruct FIsdkThrowableSettings **********************************************

// ********** Begin Class UIsdkThrowable Function GetAngularVelocity *******************************
struct Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics
{
	struct IsdkThrowable_eventGetAngularVelocity_Parms
	{
		FQuat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ISDK Throwable" },
		{ "Comment", "/* Calculate angular velocity */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "Calculate angular velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkThrowable_eventGetAngularVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkThrowable, nullptr, "GetAngularVelocity", Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::IsdkThrowable_eventGetAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::IsdkThrowable_eventGetAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkThrowable::execGetAngularVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuat*)Z_Param__Result=P_THIS->GetAngularVelocity();
	P_NATIVE_END;
}
// ********** End Class UIsdkThrowable Function GetAngularVelocity *********************************

// ********** Begin Class UIsdkThrowable Function GetVelocity **************************************
struct Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics
{
	struct IsdkThrowable_eventGetVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ISDK Throwable" },
		{ "Comment", "/* Calculate the release velocity */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "Calculate the release velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkThrowable_eventGetVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkThrowable, nullptr, "GetVelocity", Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::IsdkThrowable_eventGetVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::IsdkThrowable_eventGetVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkThrowable_GetVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkThrowable_GetVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkThrowable::execGetVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetVelocity();
	P_NATIVE_END;
}
// ********** End Class UIsdkThrowable Function GetVelocity ****************************************

// ********** Begin Class UIsdkThrowable ***********************************************************
void UIsdkThrowable::StaticRegisterNativesUIsdkThrowable()
{
	UClass* Class = UIsdkThrowable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAngularVelocity", &UIsdkThrowable::execGetAngularVelocity },
		{ "GetVelocity", &UIsdkThrowable::execGetVelocity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkThrowable;
UClass* UIsdkThrowable::GetPrivateStaticClass()
{
	using TClass = UIsdkThrowable;
	if (!Z_Registration_Info_UClass_UIsdkThrowable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkThrowable"),
			Z_Registration_Info_UClass_UIsdkThrowable.InnerSingleton,
			StaticRegisterNativesUIsdkThrowable,
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
	return Z_Registration_Info_UClass_UIsdkThrowable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkThrowable_NoRegister()
{
	return UIsdkThrowable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkThrowable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/* Scene component utilized when a grabbable is being thrown, for calculating velocities and physics\n * interactions */" },
		{ "DisplayName", "ISDK Throwable" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkThrowable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "Scene component utilized when a grabbable is being thrown, for calculating velocities and physics\n* interactions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[] = {
		{ "Category", "ISDK Throwable" },
		{ "Comment", "/* The scene component that this throwing component is tracking */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "The scene component that this throwing component is tracking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "ISDK Throwable" },
		{ "Comment", "/* The settings for the throwable component */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkThrowable.h" },
		{ "ToolTip", "The settings for the throwable component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkThrowable_GetAngularVelocity, "GetAngularVelocity" }, // 520083143
		{ &Z_Construct_UFunction_UIsdkThrowable_GetVelocity, "GetVelocity" }, // 1115237080
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkThrowable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkThrowable_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkThrowable, TrackedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkThrowable_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkThrowable, Settings), Z_Construct_UScriptStruct_FIsdkThrowableSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 768462151
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkThrowable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkThrowable_Statics::NewProp_TrackedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkThrowable_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkThrowable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkThrowable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkThrowable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkThrowable_Statics::ClassParams = {
	&UIsdkThrowable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkThrowable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkThrowable_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkThrowable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkThrowable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkThrowable()
{
	if (!Z_Registration_Info_UClass_UIsdkThrowable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkThrowable.OuterSingleton, Z_Construct_UClass_UIsdkThrowable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkThrowable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkThrowable);
UIsdkThrowable::~UIsdkThrowable() {}
// ********** End Class UIsdkThrowable *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkVelocityEstimationMethod_StaticEnum, TEXT("EIsdkVelocityEstimationMethod"), &Z_Registration_Info_UEnum_EIsdkVelocityEstimationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3350756353U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkThrowableSettings::StaticStruct, Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics::NewStructOps, TEXT("IsdkThrowableSettings"), &Z_Registration_Info_UScriptStruct_FIsdkThrowableSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkThrowableSettings), 768462151U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkThrowable, UIsdkThrowable::StaticClass, TEXT("UIsdkThrowable"), &Z_Registration_Info_UClass_UIsdkThrowable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkThrowable), 2233658856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_3396944668(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
