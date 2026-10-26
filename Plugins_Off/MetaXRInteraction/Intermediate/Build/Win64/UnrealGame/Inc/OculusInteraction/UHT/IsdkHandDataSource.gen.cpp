// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkHandDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandDataSource() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandDataSource Function GetBoneMaps *********************************
struct Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics
{
	struct IsdkHandDataSource_eventGetBoneMaps_Parms
	{
		TMap<int32,int32> OutboundMapOut;
		TMap<int32,int32> InboundMapOut;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Return the Inbound and Outbound bone maps currently set in this data source\n   * @param OutboundMapOut The map of integers representing the outbound bone mapping\n   * @param InboundMapOut The map of integers representing the inbound bone mapping\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@brief Return the Inbound and Outbound bone maps currently set in this data source\n@param OutboundMapOut The map of integers representing the outbound bone mapping\n@param InboundMapOut The map of integers representing the inbound bone mapping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundMapOut_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundMapOut_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutboundMapOut;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundMapOut_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundMapOut_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InboundMapOut;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut_ValueProp = { "OutboundMapOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut_Key_KeyProp = { "OutboundMapOut_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut = { "OutboundMapOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDataSource_eventGetBoneMaps_Parms, OutboundMapOut), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut_ValueProp = { "InboundMapOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut_Key_KeyProp = { "InboundMapOut_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut = { "InboundMapOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDataSource_eventGetBoneMaps_Parms, InboundMapOut), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_OutboundMapOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::NewProp_InboundMapOut,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataSource, nullptr, "GetBoneMaps", Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::IsdkHandDataSource_eventGetBoneMaps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::IsdkHandDataSource_eventGetBoneMaps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataSource::execGetBoneMaps)
{
	P_GET_TMAP_REF(int32,int32,Z_Param_Out_OutboundMapOut);
	P_GET_TMAP_REF(int32,int32,Z_Param_Out_InboundMapOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetBoneMaps(Z_Param_Out_OutboundMapOut,Z_Param_Out_InboundMapOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataSource Function GetBoneMaps ***********************************

// ********** Begin Class UIsdkHandDataSource Function GetHandData_Implementation ******************
struct Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics
{
	struct IsdkHandDataSource_eventGetHandData_Implementation_Parms
	{
		UIsdkHandData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the HandData from this data source\n   * @return UIsdkHandData* Reference to the active hand data object associated with this data\n   * source. Implemented from IIsdkIHandJoints.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@brief Returns the HandData from this data source\n@return UIsdkHandData* Reference to the active hand data object associated with this data\nsource. Implemented from IIsdkIHandJoints." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHandDataSource_eventGetHandData_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHandDataSource, nullptr, "GetHandData_Implementation", Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::IsdkHandDataSource_eventGetHandData_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::IsdkHandDataSource_eventGetHandData_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHandDataSource::execGetHandData_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkHandData**)Z_Param__Result=P_THIS->GetHandData_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkHandDataSource Function GetHandData_Implementation ********************

// ********** Begin Class UIsdkHandDataSource ******************************************************
void UIsdkHandDataSource::StaticRegisterNativesUIsdkHandDataSource()
{
	UClass* Class = UIsdkHandDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoneMaps", &UIsdkHandDataSource::execGetBoneMaps },
		{ "GetHandData_Implementation", &UIsdkHandDataSource::execGetHandData_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandDataSource;
UClass* UIsdkHandDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkHandDataSource;
	if (!Z_Registration_Info_UClass_UIsdkHandDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandDataSource"),
			Z_Registration_Info_UClass_UIsdkHandDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkHandDataSource,
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
	return Z_Registration_Info_UClass_UIsdkHandDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister()
{
	return UIsdkHandDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkHandDataSource\n * @brief Abstract class, ActorComponent representing a Hand Data Source, acts as a container for\n * hand data, joint mappings, and other related data for a source\n *\n * @see IIsdkIHandJoints\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "DataSources/IsdkHandDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@class UIsdkHandDataSource\n@brief Abstract class, ActorComponent representing a Hand Data Source, acts as a container for\nhand data, joint mappings, and other related data for a source\n\n@see IIsdkIHandJoints\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInTick_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Whether or not this data source should be updated during tick. Can be disabled if\n   * per-frame bone updates are undesirable.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@brief Whether or not this data source should be updated during tick. Can be disabled if\nper-frame bone updates are undesirable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandData_MetaData[] = {
		{ "BlueprintGetter", "GetHandData_Implementation" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Active Hand Data pointer used in this data source for bone/joint information and mapping\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@brief Active Hand Data pointer used in this data source for bone/joint information and mapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandDataInbound_MetaData[] = {
		{ "Comment", "/**\n   * @brief Hand data being set by something upstream of this data source, cached here instead of\n   * directly overwriting the primary member variable\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
		{ "ToolTip", "@brief Hand data being set by something upstream of this data source, cached here instead of\ndirectly overwriting the primary member variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InboundBoneMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutboundBoneMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkHandDataSource.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUpdateInTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandDataInbound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundBoneMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InboundBoneMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_InboundBoneMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundBoneMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutboundBoneMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OutboundBoneMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHandDataSource_GetBoneMaps, "GetBoneMaps" }, // 1872860043
		{ &Z_Construct_UFunction_UIsdkHandDataSource_GetHandData_Implementation, "GetHandData_Implementation" }, // 3137143346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_bUpdateInTick_SetBit(void* Obj)
{
	((UIsdkHandDataSource*)Obj)->bUpdateInTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_bUpdateInTick = { "bUpdateInTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkHandDataSource), &Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_bUpdateInTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateInTick_MetaData), NewProp_bUpdateInTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_HandData = { "HandData", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDataSource, HandData), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandData_MetaData), NewProp_HandData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_HandDataInbound = { "HandDataInbound", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDataSource, HandDataInbound), Z_Construct_UClass_UIsdkHandData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandDataInbound_MetaData), NewProp_HandDataInbound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap_ValueProp = { "InboundBoneMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap_Key_KeyProp = { "InboundBoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap = { "InboundBoneMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDataSource, InboundBoneMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InboundBoneMap_MetaData), NewProp_InboundBoneMap_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap_ValueProp = { "OutboundBoneMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap_Key_KeyProp = { "OutboundBoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap = { "OutboundBoneMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHandDataSource, OutboundBoneMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutboundBoneMap_MetaData), NewProp_OutboundBoneMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHandDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_bUpdateInTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_HandData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_HandDataInbound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_InboundBoneMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHandDataSource_Statics::NewProp_OutboundBoneMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHandDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkHandDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandJoints_NoRegister, (int32)VTABLE_OFFSET(UIsdkHandDataSource, IIsdkIHandJoints), false },  // 1228590249
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandDataSource_Statics::ClassParams = {
	&UIsdkHandDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHandDataSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkHandDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandDataSource.OuterSingleton, Z_Construct_UClass_UIsdkHandDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandDataSource);
UIsdkHandDataSource::~UIsdkHandDataSource() {}
// ********** End Class UIsdkHandDataSource ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandDataSource, UIsdkHandDataSource::StaticClass, TEXT("UIsdkHandDataSource"), &Z_Registration_Info_UClass_UIsdkHandDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandDataSource), 4056478505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h__Script_OculusInteraction_4225355069(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkHandDataSource_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
