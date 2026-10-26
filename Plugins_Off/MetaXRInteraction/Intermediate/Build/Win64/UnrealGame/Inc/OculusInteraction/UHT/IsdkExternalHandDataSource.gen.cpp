// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkExternalHandDataSource.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkExternalHandDataSource() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandJointMappings_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkExternalHandDataSource Function PopulateOpenXRBoneMaps **************
struct Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Generates the mapping between OVR and OpenXR bones\n   *\n   * Utilized to make sure OpenXR mapping is available for all external data sources, in the\n   * instance of needing to map from OVR-style joint mappings.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
		{ "ToolTip", "@brief Generates the mapping between OVR and OpenXR bones\n\nUtilized to make sure OpenXR mapping is available for all external data sources, in the\ninstance of needing to map from OVR-style joint mappings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataSource, nullptr, "PopulateOpenXRBoneMaps", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataSource::execPopulateOpenXRBoneMaps)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateOpenXRBoneMaps();
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataSource Function PopulateOpenXRBoneMaps ****************

// ********** Begin Class UIsdkExternalHandDataSource Function SetHandData *************************
struct Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics
{
	struct IsdkExternalHandDataSource_eventSetHandData_Parms
	{
		const UIsdkHandData* InHandData;
		FTransform WorldTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets this Data Source's Hand Data object, passing in its current transform in worldspace\n   * @param InHandData Hand data to set to this data source.\n   * @param WorldTransform Current transform of the hand in worldspace\n   *\n   * Validates the passed in HandData, and then copies all joint information to HandData member\n   * variable. Passes this along with world transform to API for further operations\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
		{ "ToolTip", "@brief Sets this Data Source's Hand Data object, passing in its current transform in worldspace\n@param InHandData Hand data to set to this data source.\n@param WorldTransform Current transform of the hand in worldspace\n\nValidates the passed in HandData, and then copies all joint information to HandData member\nvariable. Passes this along with world transform to API for further operations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InHandData_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InHandData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::NewProp_InHandData = { "InHandData", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataSource_eventSetHandData_Parms, InHandData), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InHandData_MetaData), NewProp_InHandData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataSource_eventSetHandData_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::NewProp_InHandData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::NewProp_WorldTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataSource, nullptr, "SetHandData", Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::IsdkExternalHandDataSource_eventSetHandData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::IsdkExternalHandDataSource_eventSetHandData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataSource::execSetHandData)
{
	P_GET_OBJECT(UIsdkHandData,Z_Param_InHandData);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandData(Z_Param_InHandData,Z_Param_Out_WorldTransform);
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataSource Function SetHandData ***************************

// ********** Begin Class UIsdkExternalHandDataSource Function SetHandJointMappings ****************
struct Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics
{
	struct IsdkExternalHandDataSource_eventSetHandJointMappings_Parms
	{
		TArray<FIsdkExternalHandPositionFrame_ThumbJointMapping> ThumbJointMappings;
		TArray<FIsdkExternalHandPositionFrame_FingerJointMapping> FingerJointMappings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the finger and thumb joint mappings used for this data source\n   * @param ThumbJointMappings Thumb joint mappings to implement for this data source\n   * @param FingerJointMappings Finger joint mappings to implement for this data source\n   * @see UIsdkHandJointMappings\n   *\n   * Overrides local data with new mappings for both thumb and all finger joints,\n   * expanding/contracting arrays as needed. Stored in the Hand Joint Mappings object\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
		{ "ToolTip", "@brief Sets the finger and thumb joint mappings used for this data source\n@param ThumbJointMappings Thumb joint mappings to implement for this data source\n@param FingerJointMappings Finger joint mappings to implement for this data source\n@see UIsdkHandJointMappings\n\nOverrides local data with new mappings for both thumb and all finger joints,\nexpanding/contracting arrays as needed. Stored in the Hand Joint Mappings object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbJointMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FingerJointMappings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbJointMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ThumbJointMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FingerJointMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerJointMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_ThumbJointMappings_Inner = { "ThumbJointMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_ThumbJointMapping, METADATA_PARAMS(0, nullptr) }; // 1556225157
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_ThumbJointMappings = { "ThumbJointMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataSource_eventSetHandJointMappings_Parms, ThumbJointMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbJointMappings_MetaData), NewProp_ThumbJointMappings_MetaData) }; // 1556225157
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_FingerJointMappings_Inner = { "FingerJointMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkExternalHandPositionFrame_FingerJointMapping, METADATA_PARAMS(0, nullptr) }; // 320220292
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_FingerJointMappings = { "FingerJointMappings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkExternalHandDataSource_eventSetHandJointMappings_Parms, FingerJointMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FingerJointMappings_MetaData), NewProp_FingerJointMappings_MetaData) }; // 320220292
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_ThumbJointMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_ThumbJointMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_FingerJointMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::NewProp_FingerJointMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkExternalHandDataSource, nullptr, "SetHandJointMappings", Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::IsdkExternalHandDataSource_eventSetHandJointMappings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::IsdkExternalHandDataSource_eventSetHandJointMappings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkExternalHandDataSource::execSetHandJointMappings)
{
	P_GET_TARRAY_REF(FIsdkExternalHandPositionFrame_ThumbJointMapping,Z_Param_Out_ThumbJointMappings);
	P_GET_TARRAY_REF(FIsdkExternalHandPositionFrame_FingerJointMapping,Z_Param_Out_FingerJointMappings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHandJointMappings(Z_Param_Out_ThumbJointMappings,Z_Param_Out_FingerJointMappings);
	P_NATIVE_END;
}
// ********** End Class UIsdkExternalHandDataSource Function SetHandJointMappings ******************

// ********** Begin Class UIsdkExternalHandDataSource **********************************************
void UIsdkExternalHandDataSource::StaticRegisterNativesUIsdkExternalHandDataSource()
{
	UClass* Class = UIsdkExternalHandDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PopulateOpenXRBoneMaps", &UIsdkExternalHandDataSource::execPopulateOpenXRBoneMaps },
		{ "SetHandData", &UIsdkExternalHandDataSource::execSetHandData },
		{ "SetHandJointMappings", &UIsdkExternalHandDataSource::execSetHandJointMappings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkExternalHandDataSource;
UClass* UIsdkExternalHandDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkExternalHandDataSource;
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkExternalHandDataSource"),
			Z_Registration_Info_UClass_UIsdkExternalHandDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkExternalHandDataSource,
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
	return Z_Registration_Info_UClass_UIsdkExternalHandDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkExternalHandDataSource_NoRegister()
{
	return UIsdkExternalHandDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkExternalHandDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkExternalHandDataSource\n * @brief Hand Data Source, acts as a container for hand data, joint mappings, and other related\n * data for an external source\n *\n * Base class used by more specific external hand data sources for setting and querying hand data,\n * joint information, handedness and applying OpenXR support to older mappings\n *\n * @see UIsdkHandDataSource\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK External Hand Data Source" },
		{ "IncludePath", "DataSources/IsdkExternalHandDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
		{ "ToolTip", "@class UIsdkExternalHandDataSource\n@brief Hand Data Source, acts as a container for hand data, joint mappings, and other related\ndata for an external source\n\nBase class used by more specific external hand data sources for setting and querying hand data,\njoint information, handedness and applying OpenXR support to older mappings\n\n@see UIsdkHandDataSource\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The handedness of this data source (left or right) */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
		{ "ToolTip", "The handedness of this data source (left or right)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandJointMappings_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHandJointDataValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkExternalHandDataSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandJointMappings;
	static void NewProp_bIsHandJointDataValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHandJointDataValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkExternalHandDataSource_PopulateOpenXRBoneMaps, "PopulateOpenXRBoneMaps" }, // 4277974702
		{ &Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandData, "SetHandData" }, // 323771679
		{ &Z_Construct_UFunction_UIsdkExternalHandDataSource_SetHandJointMappings, "SetHandJointMappings" }, // 835214039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkExternalHandDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkExternalHandDataSource, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_HandJointMappings = { "HandJointMappings", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkExternalHandDataSource, HandJointMappings), Z_Construct_UClass_UIsdkHandJointMappings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandJointMappings_MetaData), NewProp_HandJointMappings_MetaData) };
void Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_bIsHandJointDataValid_SetBit(void* Obj)
{
	((UIsdkExternalHandDataSource*)Obj)->bIsHandJointDataValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_bIsHandJointDataValid = { "bIsHandJointDataValid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkExternalHandDataSource), &Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_bIsHandJointDataValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHandJointDataValid_MetaData), NewProp_bIsHandJointDataValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_HandJointMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::NewProp_bIsHandJointDataValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::ClassParams = {
	&UIsdkExternalHandDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkExternalHandDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkExternalHandDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkExternalHandDataSource.OuterSingleton, Z_Construct_UClass_UIsdkExternalHandDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkExternalHandDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkExternalHandDataSource);
UIsdkExternalHandDataSource::~UIsdkExternalHandDataSource() {}
// ********** End Class UIsdkExternalHandDataSource ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkExternalHandDataSource, UIsdkExternalHandDataSource::StaticClass, TEXT("UIsdkExternalHandDataSource"), &Z_Registration_Info_UClass_UIsdkExternalHandDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkExternalHandDataSource), 1050080009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h__Script_OculusInteraction_3254549418(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkExternalHandDataSource_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
