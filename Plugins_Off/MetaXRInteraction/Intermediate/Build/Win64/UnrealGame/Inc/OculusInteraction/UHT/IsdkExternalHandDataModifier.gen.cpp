// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkExternalHandDataModifier.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkExternalHandDataModifier() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnHandDataModified ***************************************************
struct Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics
{
	struct IsdkExternalHandDataModifier_eventOnHandDataModified_Parms
	{
		UIsdkHandDataSource* HandData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* Delegate broadcast during Tick, if all data sources are valid */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "Delegate broadcast during Tick, if all data sources are valid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::NewProp_HandData = { "HandData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataModifier_eventOnHandDataModified_Parms, HandData), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandData_MetaData), NewProp_HandData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::NewProp_HandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataModifier, nullptr, "OnHandDataModified__DelegateSignature", Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::IsdkExternalHandDataModifier_eventOnHandDataModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::IsdkExternalHandDataModifier_eventOnHandDataModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UIsdkExternalHandDataModifier::FOnHandDataModified_DelegateWrapper(const FMulticastScriptDelegate& OnHandDataModified, UIsdkHandDataSource* HandData)
{
	struct IsdkExternalHandDataModifier_eventOnHandDataModified_Parms
	{
		UIsdkHandDataSource* HandData;
	};
	IsdkExternalHandDataModifier_eventOnHandDataModified_Parms Parms;
	Parms.HandData=HandData;
	OnHandDataModified.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnHandDataModified *****************************************************

// ********** Begin Class UIsdkExternalHandDataModifier Function GetInputDataSource ****************
struct Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics
{
	struct IsdkExternalHandDataModifier_eventGetInputDataSource_Parms
	{
		UIsdkHandDataSource* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Get the Hand Data Source this Modifier should be taking in as input\n   * @return UIsdkHandDataSource The Hand Data source object used as input for this modifier\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "@brief Get the Hand Data Source this Modifier should be taking in as input\n@return UIsdkHandDataSource The Hand Data source object used as input for this modifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataModifier_eventGetInputDataSource_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataModifier, nullptr, "GetInputDataSource", Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::IsdkExternalHandDataModifier_eventGetInputDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::IsdkExternalHandDataModifier_eventGetInputDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataModifier::execGetInputDataSource)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandDataSource**)Z_Param__Result=P_THIS->GetInputDataSource();
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataModifier Function GetInputDataSource ******************

// ********** Begin Class UIsdkExternalHandDataModifier Function OnModify **************************
struct IsdkExternalHandDataModifier_eventOnModify_Parms
{
	UIsdkHandData* InputHandData;
};
static FName NAME_UIsdkExternalHandDataModifier_OnModify = FName(TEXT("OnModify"));
void UIsdkExternalHandDataModifier::OnModify(UIsdkHandData* InputHandData)
{
	UFunction* Func = FindFunctionChecked(NAME_UIsdkExternalHandDataModifier_OnModify);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IsdkExternalHandDataModifier_eventOnModify_Parms Parms;
		Parms.InputHandData=InputHandData;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		OnModify_Implementation(InputHandData);
	}
}
struct Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Called when this ticks if all data sources are valid, broadcasts a OnHandDataModified\n   * delegate\n   * @param InputHandData The Hand Data being modified\n   * Blueprint native event, called by TickComponent if the data source and hand data are valid.\n   * This gives developers a hook to add additional logic in Blueprint after hand data has been set\n   * per tick.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "@brief Called when this ticks if all data sources are valid, broadcasts a OnHandDataModified\ndelegate\n@param InputHandData The Hand Data being modified\nBlueprint native event, called by TickComponent if the data source and hand data are valid.\nThis gives developers a hook to add additional logic in Blueprint after hand data has been set\nper tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputHandData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHandData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::NewProp_InputHandData = { "InputHandData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataModifier_eventOnModify_Parms, InputHandData), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputHandData_MetaData), NewProp_InputHandData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::NewProp_InputHandData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataModifier, nullptr, "OnModify", Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::PropPointers), sizeof(IsdkExternalHandDataModifier_eventOnModify_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkExternalHandDataModifier_eventOnModify_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataModifier::execOnModify)
{
	P_GET_OBJECT(UIsdkHandData,Z_Param_InputHandData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnModify_Implementation(Z_Param_InputHandData);
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataModifier Function OnModify ****************************

// ********** Begin Class UIsdkExternalHandDataModifier Function SetInputDataSource ****************
struct Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics
{
	struct IsdkExternalHandDataModifier_eventSetInputDataSource_Parms
	{
		UIsdkHandDataSource* InInputDataSource;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the hand data source this modifier should use as input\n   * @param InInputDataSource The new data source to use for this modifier\n   *\n   * Validates the new data source, removes tick prerequisites on the old one (if present) and adds\n   * tick prerequisites to the new data source\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "@brief Sets the hand data source this modifier should use as input\n@param InInputDataSource The new data source to use for this modifier\n\nValidates the new data source, removes tick prerequisites on the old one (if present) and adds\ntick prerequisites to the new data source" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InInputDataSource_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::NewProp_InInputDataSource = { "InInputDataSource", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataModifier_eventSetInputDataSource_Parms, InInputDataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InInputDataSource_MetaData), NewProp_InInputDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::NewProp_InInputDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataModifier, nullptr, "SetInputDataSource", Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::IsdkExternalHandDataModifier_eventSetInputDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::IsdkExternalHandDataModifier_eventSetInputDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataModifier::execSetInputDataSource)
{
	P_GET_OBJECT(UIsdkHandDataSource,Z_Param_InInputDataSource);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInputDataSource(Z_Param_InInputDataSource);
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataModifier Function SetInputDataSource ******************

// ********** Begin Class UIsdkExternalHandDataModifier ********************************************
void UIsdkExternalHandDataModifier::StaticRegisterNativesUIsdkExternalHandDataModifier()
{
	UClass* Class = UIsdkExternalHandDataModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInputDataSource", &UIsdkExternalHandDataModifier::execGetInputDataSource },
		{ "OnModify", &UIsdkExternalHandDataModifier::execOnModify },
		{ "SetInputDataSource", &UIsdkExternalHandDataModifier::execSetInputDataSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkExternalHandDataModifier;
UClass* UIsdkExternalHandDataModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkExternalHandDataModifier;
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkExternalHandDataModifier"),
			Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.InnerSingleton,
			StaticRegisterNativesUIsdkExternalHandDataModifier,
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
	return Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier_NoRegister()
{
	return UIsdkExternalHandDataModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkExternalHandDataModifier\n * @brief Hand Data Source intended to take and modify an existing HandData Source\n *\n * External Hand Data modifiers are intended to be implemented downstream of an existing Hand Data\n * source, modifying it in some way and then passing the data further downstream\n *\n * @see UIsdkExternalHandDataSource\n * @see UIsdkHandDataSource\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK External Hand Data Modifier" },
		{ "IncludePath", "DataSources/IsdkExternalHandDataModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "@class UIsdkExternalHandDataModifier\n@brief Hand Data Source intended to take and modify an existing HandData Source\n\nExternal Hand Data modifiers are intended to be implemented downstream of an existing Hand Data\nsource, modifying it in some way and then passing the data further downstream\n\n@see UIsdkExternalHandDataSource\n@see UIsdkHandDataSource\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHandDataModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDataSource_MetaData[] = {
		{ "BlueprintGetter", "GetInputDataSource" },
		{ "BlueprintSetter", "SetInputDataSource" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Hand Data Source used as input for this modifier */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataModifier.h" },
		{ "ToolTip", "Hand Data Source used as input for this modifier" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHandDataModified;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkExternalHandDataModifier_GetInputDataSource, "GetInputDataSource" }, // 3714082081
		{ &Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature, "OnHandDataModified__DelegateSignature" }, // 2840462927
		{ &Z_Construct_UFunction_UIsdkExternalHandDataModifier_OnModify, "OnModify" }, // 2030415432
		{ &Z_Construct_UFunction_UIsdkExternalHandDataModifier_SetInputDataSource, "SetInputDataSource" }, // 1673467749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkExternalHandDataModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::NewProp_OnHandDataModified = { "OnHandDataModified", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkExternalHandDataModifier, OnHandDataModified), Z_Construct_UDelegateFunction_UIsdkExternalHandDataModifier_OnHandDataModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHandDataModified_MetaData), NewProp_OnHandDataModified_MetaData) }; // 2840462927
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::NewProp_InputDataSource = { "InputDataSource", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkExternalHandDataModifier, InputDataSource), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDataSource_MetaData), NewProp_InputDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::NewProp_OnHandDataModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::NewProp_InputDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::ClassParams = {
	&UIsdkExternalHandDataModifier::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkExternalHandDataModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.OuterSingleton, Z_Construct_UClass_UIsdkExternalHandDataModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkExternalHandDataModifier.OuterSingleton;
}
UIsdkExternalHandDataModifier::UIsdkExternalHandDataModifier() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkExternalHandDataModifier);
UIsdkExternalHandDataModifier::~UIsdkExternalHandDataModifier() {}
// ********** End Class UIsdkExternalHandDataModifier **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkExternalHandDataModifier, UIsdkExternalHandDataModifier::StaticClass, TEXT("UIsdkExternalHandDataModifier"), &Z_Registration_Info_UClass_UIsdkExternalHandDataModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkExternalHandDataModifier), 1785398504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h__Script_OculusInteraction_2208437284(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataModifier_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
