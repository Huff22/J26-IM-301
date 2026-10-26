// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkHandDataModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandDataModifier() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataModifier_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandDataModifier Function GetInputDataSource ************************
struct Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics
{
	struct IsdkHandDataModifier_eventGetInputDataSource_Parms
	{
		UIsdkHandDataSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Get the Hand Data Source this Modifier should be taking in as input\n   * @return UIsdkHandDataSource* The Hand Data Source this Modifier is currently taking as input\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief Get the Hand Data Source this Modifier should be taking in as input\n@return UIsdkHandDataSource* The Hand Data Source this Modifier is currently taking as input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDataModifier_eventGetInputDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataModifier, nullptr, "GetInputDataSource", Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::IsdkHandDataModifier_eventGetInputDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::IsdkHandDataModifier_eventGetInputDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataModifier::execGetInputDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandDataSource**)Z_Param__Result=P_THIS->GetInputDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataModifier Function GetInputDataSource **************************

// ********** Begin Class UIsdkHandDataModifier Function GetRecursiveUpdate ************************
struct Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics
{
	struct IsdkHandDataModifier_eventGetRecursiveUpdate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Return whether or not this hand data modifier will recursively update its data sources\n   * when it itself is updated\n   * @return bool Whether or not this modifier recursively updates\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief Return whether or not this hand data modifier will recursively update its data sources\nwhen it itself is updated\n@return bool Whether or not this modifier recursively updates" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkHandDataModifier_eventGetRecursiveUpdate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandDataModifier_eventGetRecursiveUpdate_Parms), &Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataModifier, nullptr, "GetRecursiveUpdate", Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::IsdkHandDataModifier_eventGetRecursiveUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::IsdkHandDataModifier_eventGetRecursiveUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataModifier::execGetRecursiveUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRecursiveUpdate();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataModifier Function GetRecursiveUpdate **************************

// ********** Begin Class UIsdkHandDataModifier Function SetInputDataSource ************************
struct Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics
{
	struct IsdkHandDataModifier_eventSetInputDataSource_Parms
	{
		UIsdkHandDataSource* InInputDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the hand data source this modifier should use as input\n   * @param InInputDataSource The hand data source (which could be a HandDataModifier) this modifier\n   * should use as input\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief Sets the hand data source this modifier should use as input\n@param InInputDataSource The hand data source (which could be a HandDataModifier) this modifier\nshould use as input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputDataSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::NewProp_InInputDataSource = { "InInputDataSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDataModifier_eventSetInputDataSource_Parms, InInputDataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputDataSource_MetaData), NewProp_InInputDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::NewProp_InInputDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataModifier, nullptr, "SetInputDataSource", Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::IsdkHandDataModifier_eventSetInputDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::IsdkHandDataModifier_eventSetInputDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataModifier::execSetInputDataSource)
{
	P_GET_OBJECT(UIsdkHandDataSource,Z_Param_InInputDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputDataSource(Z_Param_InInputDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataModifier Function SetInputDataSource **************************

// ********** Begin Class UIsdkHandDataModifier Function SetRecursiveUpdate ************************
struct Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics
{
	struct IsdkHandDataModifier_eventSetRecursiveUpdate_Parms
	{
		bool bInRecursiveUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Set whether or not this hand data modifier will recursively update its data sources\n   * @param bInRecursiveUpdate Whether or not this modifier should recursively update\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief Set whether or not this hand data modifier will recursively update its data sources\n@param bInRecursiveUpdate Whether or not this modifier should recursively update" },
	};
#endif // WITH_METADATA
	static void NewProp_bInRecursiveUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRecursiveUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::NewProp_bInRecursiveUpdate_SetBit(void* Obj)
{
	((IsdkHandDataModifier_eventSetRecursiveUpdate_Parms*)Obj)->bInRecursiveUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::NewProp_bInRecursiveUpdate = { "bInRecursiveUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkHandDataModifier_eventSetRecursiveUpdate_Parms), &Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::NewProp_bInRecursiveUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::NewProp_bInRecursiveUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataModifier, nullptr, "SetRecursiveUpdate", Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::IsdkHandDataModifier_eventSetRecursiveUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::IsdkHandDataModifier_eventSetRecursiveUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataModifier::execSetRecursiveUpdate)
{
	P_GET_UBOOL(Z_Param_bInRecursiveUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRecursiveUpdate(Z_Param_bInRecursiveUpdate);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataModifier Function SetRecursiveUpdate **************************

// ********** Begin Class UIsdkHandDataModifier ****************************************************
void UIsdkHandDataModifier::StaticRegisterNativesUIsdkHandDataModifier()
{
	UClass* Class = UIsdkHandDataModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputDataSource", &UIsdkHandDataModifier::execGetInputDataSource },
		{ "GetRecursiveUpdate", &UIsdkHandDataModifier::execGetRecursiveUpdate },
		{ "SetInputDataSource", &UIsdkHandDataModifier::execSetInputDataSource },
		{ "SetRecursiveUpdate", &UIsdkHandDataModifier::execSetRecursiveUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandDataModifier;
UClass* UIsdkHandDataModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkHandDataModifier;
	if (!Z_Registration_Info_UClass_UIsdkHandDataModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandDataModifier"),
			Z_Registration_Info_UClass_UIsdkHandDataModifier.InnerSingleton,
			StaticRegisterNativesUIsdkHandDataModifier,
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
	return Z_Registration_Info_UClass_UIsdkHandDataModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandDataModifier_NoRegister()
{
	return UIsdkHandDataModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandDataModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkHandDataModifier\n * @brief Abstract class representing a Hand Data Source intended to take and modify an existing\n * HandData Source, potentially chained to other HandDataModifiers or HandData Sources. Implements\n * IsdkIRootPose\n *\n * @see UIsdkHandDataSource\n * @see IIsdkIRootPose\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "DataSources/IsdkHandDataModifier.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@class UIsdkHandDataModifier\n@brief Abstract class representing a Hand Data Source intended to take and modify an existing\nHandData Source, potentially chained to other HandDataModifiers or HandData Sources. Implements\nIsdkIRootPose\n\n@see UIsdkHandDataSource\n@see IIsdkIRootPose\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDataSource_MetaData[] = {
		{ "BlueprintGetter", "GetInputDataSource" },
		{ "BlueprintSetter", "SetInputDataSource" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief The Hand Data Source used as input for this modifier (which could also mean it might be\n   * an HandDataSource, creating a chain)\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief The Hand Data Source used as input for this modifier (which could also mean it might be\nan HandDataSource, creating a chain)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecursiveUpdate_MetaData[] = {
		{ "BlueprintGetter", "GetRecursiveUpdate" },
		{ "BlueprintSetter", "SetRecursiveUpdate" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Whether or not this hand data modifier will recursively update its data sources when it\n   * gets updated.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataModifier.h" },
		{ "ToolTip", "@brief Whether or not this hand data modifier will recursively update its data sources when it\ngets updated." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputDataSource;
	static void NewProp_bRecursiveUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursiveUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandDataModifier_GetInputDataSource, "GetInputDataSource" }, // 428593699
		{ &Z_Construct_UFunction_UIsdkHandDataModifier_GetRecursiveUpdate, "GetRecursiveUpdate" }, // 691943711
		{ &Z_Construct_UFunction_UIsdkHandDataModifier_SetInputDataSource, "SetInputDataSource" }, // 1388242460
		{ &Z_Construct_UFunction_UIsdkHandDataModifier_SetRecursiveUpdate, "SetRecursiveUpdate" }, // 888495774
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandDataModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_InputDataSource = { "InputDataSource", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDataModifier, InputDataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDataSource_MetaData), NewProp_InputDataSource_MetaData) };
void Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_bRecursiveUpdate_SetBit(void* Obj)
{
	((UIsdkHandDataModifier*)Obj)->bRecursiveUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_bRecursiveUpdate = { "bRecursiveUpdate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandDataModifier), &Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_bRecursiveUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecursiveUpdate_MetaData), NewProp_bRecursiveUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandDataModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_InputDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataModifier_Statics::NewProp_bRecursiveUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandDataModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkHandDataModifier_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkHandDataModifier, IIsdkIRootPose), false },  // 2159373520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandDataModifier_Statics::ClassParams = {
	&UIsdkHandDataModifier::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandDataModifier_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataModifier_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandDataModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandDataModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkHandDataModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandDataModifier.OuterSingleton, Z_Construct_UClass_UIsdkHandDataModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandDataModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandDataModifier);
UIsdkHandDataModifier::~UIsdkHandDataModifier() {}
// ********** End Class UIsdkHandDataModifier ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandDataModifier, UIsdkHandDataModifier::StaticClass, TEXT("UIsdkHandDataModifier"), &Z_Registration_Info_UClass_UIsdkHandDataModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandDataModifier), 385976367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h__Script_OculusInteraction_1626621995(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataModifier_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
