// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkIHandJoints.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIHandJoints() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandJointMappings_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UIsdkIHandJoints Function GetHandData ********************************
struct IsdkIHandJoints_eventGetHandData_Parms
{
	UIsdkHandData* ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHandJoints_eventGetHandData_Parms()
		: ReturnValue(NULL)
	{
	}
};
UIsdkHandData* IIsdkIHandJoints::GetHandData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHandData instead.");
	IsdkIHandJoints_eventGetHandData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHandJoints_GetHandData = FName(TEXT("GetHandData"));
UIsdkHandData* IIsdkIHandJoints::Execute_GetHandData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandJoints::StaticClass()));
	IsdkIHandJoints_eventGetHandData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandJoints_GetHandData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHandJoints*)(O->GetNativeInterfaceAddress(UIsdkIHandJoints::StaticClass())))
	{
		Parms.ReturnValue = I->GetHandData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieve the Hand Data object reference used by this class\n   * @return UIsdkHandData* The actively used hand data reference\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandJoints.h" },
		{ "ToolTip", "@brief Retrieve the Hand Data object reference used by this class\n@return UIsdkHandData* The actively used hand data reference" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHandJoints_eventGetHandData_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandJoints, nullptr, "GetHandData", Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::PropPointers), sizeof(IsdkIHandJoints_eventGetHandData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandJoints_eventGetHandData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandJoints_GetHandData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandJoints_GetHandData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandJoints::execGetHandData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandData**)Z_Param__Result=P_THIS->GetHandData_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandJoints Function GetHandData **********************************

// ********** Begin Interface UIsdkIHandJoints Function GetHandedness ******************************
struct IsdkIHandJoints_eventGetHandedness_Parms
{
	EIsdkHandedness ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHandJoints_eventGetHandedness_Parms()
		: ReturnValue((EIsdkHandedness)0)
	{
	}
};
const EIsdkHandedness IIsdkIHandJoints::GetHandedness()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHandedness instead.");
	IsdkIHandJoints_eventGetHandedness_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHandJoints_GetHandedness = FName(TEXT("GetHandedness"));
const EIsdkHandedness IIsdkIHandJoints::Execute_GetHandedness(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandJoints::StaticClass()));
	IsdkIHandJoints_eventGetHandedness_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandJoints_GetHandedness);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHandJoints*)(O->GetNativeInterfaceAddress(UIsdkIHandJoints::StaticClass())))
	{
		Parms.ReturnValue = I->GetHandedness_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the handedness of the implementing object\n   * @return EIsdkHandedness Handedness of this class (normally left or right)\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandJoints.h" },
		{ "ToolTip", "@brief Retrieves the handedness of the implementing object\n@return EIsdkHandedness Handedness of this class (normally left or right)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHandJoints_eventGetHandedness_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 49432891
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandJoints, nullptr, "GetHandedness", Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::PropPointers), sizeof(IsdkIHandJoints_eventGetHandedness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandJoints_eventGetHandedness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandJoints::execGetHandedness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkHandedness*)Z_Param__Result=P_THIS->GetHandedness_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandJoints Function GetHandedness ********************************

// ********** Begin Interface UIsdkIHandJoints Function GetHandJointMappings ***********************
struct IsdkIHandJoints_eventGetHandJointMappings_Parms
{
	const UIsdkHandJointMappings* ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHandJoints_eventGetHandJointMappings_Parms()
		: ReturnValue(NULL)
	{
	}
};
const UIsdkHandJointMappings* IIsdkIHandJoints::GetHandJointMappings()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHandJointMappings instead.");
	IsdkIHandJoints_eventGetHandJointMappings_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHandJoints_GetHandJointMappings = FName(TEXT("GetHandJointMappings"));
const UIsdkHandJointMappings* IIsdkIHandJoints::Execute_GetHandJointMappings(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandJoints::StaticClass()));
	IsdkIHandJoints_eventGetHandJointMappings_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandJoints_GetHandJointMappings);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHandJoints*)(O->GetNativeInterfaceAddress(UIsdkIHandJoints::StaticClass())))
	{
		Parms.ReturnValue = I->GetHandJointMappings_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns an object containing the finger and thumb joint mappings for this object\n   * @return UIsdkHandJointMappings* Mappings object, containing finger joint mappings\n   * (FIsdkExternalHandPositionFrame_FingerJointMapping) and thumb joint mappings\n   * (FIsdkExternalHandPositionFrame_ThumbJointMapping)\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandJoints.h" },
		{ "ToolTip", "@brief Returns an object containing the finger and thumb joint mappings for this object\n@return UIsdkHandJointMappings* Mappings object, containing finger joint mappings\n(FIsdkExternalHandPositionFrame_FingerJointMapping) and thumb joint mappings\n(FIsdkExternalHandPositionFrame_ThumbJointMapping)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000000008058a, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkIHandJoints_eventGetHandJointMappings_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandJointMappings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandJoints, nullptr, "GetHandJointMappings", Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::PropPointers), sizeof(IsdkIHandJoints_eventGetHandJointMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandJoints_eventGetHandJointMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandJoints::execGetHandJointMappings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UIsdkHandJointMappings**)Z_Param__Result=P_THIS->GetHandJointMappings_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandJoints Function GetHandJointMappings *************************

// ********** Begin Interface UIsdkIHandJoints Function IsHandJointDataValid ***********************
struct IsdkIHandJoints_eventIsHandJointDataValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkIHandJoints_eventIsHandJointDataValid_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkIHandJoints::IsHandJointDataValid()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsHandJointDataValid instead.");
	IsdkIHandJoints_eventIsHandJointDataValid_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkIHandJoints_IsHandJointDataValid = FName(TEXT("IsHandJointDataValid"));
bool IIsdkIHandJoints::Execute_IsHandJointDataValid(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkIHandJoints::StaticClass()));
	IsdkIHandJoints_eventIsHandJointDataValid_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkIHandJoints_IsHandJointDataValid);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkIHandJoints*)(O->GetNativeInterfaceAddress(UIsdkIHandJoints::StaticClass())))
	{
		Parms.ReturnValue = I->IsHandJointDataValid_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   @brief Returns whether or not the hand joint data for this object is valid, validated by the\n   implementing class.\n   @return bool Whether or not the hand joint data object is valid for use\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandJoints.h" },
		{ "ToolTip", "@brief Returns whether or not the hand joint data for this object is valid, validated by the\nimplementing class.\n@return bool Whether or not the hand joint data object is valid for use" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkIHandJoints_eventIsHandJointDataValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkIHandJoints_eventIsHandJointDataValid_Parms), &Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkIHandJoints, nullptr, "IsHandJointDataValid", Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::PropPointers), sizeof(IsdkIHandJoints_eventIsHandJointDataValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkIHandJoints_eventIsHandJointDataValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkIHandJoints::execIsHandJointDataValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHandJointDataValid_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkIHandJoints Function IsHandJointDataValid *************************

// ********** Begin Interface UIsdkIHandJoints *****************************************************
void UIsdkIHandJoints::StaticRegisterNativesUIsdkIHandJoints()
{
	UClass* Class = UIsdkIHandJoints::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHandData", &IIsdkIHandJoints::execGetHandData },
		{ "GetHandedness", &IIsdkIHandJoints::execGetHandedness },
		{ "GetHandJointMappings", &IIsdkIHandJoints::execGetHandJointMappings },
		{ "IsHandJointDataValid", &IIsdkIHandJoints::execIsHandJointDataValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIHandJoints;
UClass* UIsdkIHandJoints::GetPrivateStaticClass()
{
	using TClass = UIsdkIHandJoints;
	if (!Z_Registration_Info_UClass_UIsdkIHandJoints.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIHandJoints"),
			Z_Registration_Info_UClass_UIsdkIHandJoints.InnerSingleton,
			StaticRegisterNativesUIsdkIHandJoints,
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
	return Z_Registration_Info_UClass_UIsdkIHandJoints.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister()
{
	return UIsdkIHandJoints::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIHandJoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "DisplayName", "ISDK Hand Joints" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkIHandJoints.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkIHandJoints_GetHandData, "GetHandData" }, // 1372071574
		{ &Z_Construct_UFunction_UIsdkIHandJoints_GetHandedness, "GetHandedness" }, // 3370116630
		{ &Z_Construct_UFunction_UIsdkIHandJoints_GetHandJointMappings, "GetHandJointMappings" }, // 596692386
		{ &Z_Construct_UFunction_UIsdkIHandJoints_IsHandJointDataValid, "IsHandJointDataValid" }, // 1732831322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIHandJoints>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIHandJoints_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHandJoints_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIHandJoints_Statics::ClassParams = {
	&UIsdkIHandJoints::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIHandJoints_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIHandJoints_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIHandJoints()
{
	if (!Z_Registration_Info_UClass_UIsdkIHandJoints.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIHandJoints.OuterSingleton, Z_Construct_UClass_UIsdkIHandJoints_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIHandJoints.OuterSingleton;
}
UIsdkIHandJoints::UIsdkIHandJoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIHandJoints);
// ********** End Interface UIsdkIHandJoints *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIHandJoints, UIsdkIHandJoints::StaticClass, TEXT("UIsdkIHandJoints"), &Z_Registration_Info_UClass_UIsdkIHandJoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIHandJoints), 1228590249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h__Script_OculusInteraction_3724030359(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIHandJoints_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
