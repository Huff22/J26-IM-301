// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkITrackingDataSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandJoints_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTrackingDataSources();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkTrackingDataSources ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources;
class UScriptStruct* FIsdkTrackingDataSources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkTrackingDataSources, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkTrackingDataSources"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceComponent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandRootPose_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandPointerPose_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandJoints_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataSourceComponent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandRootPose;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandPointerPose;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_HandJoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkTrackingDataSources>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_DataSourceComponent = { "DataSourceComponent", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTrackingDataSources, DataSourceComponent), Z_Construct_UClass_UIsdkHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataSourceComponent_MetaData), NewProp_DataSourceComponent_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandRootPose = { "HandRootPose", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTrackingDataSources, HandRootPose), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandRootPose_MetaData), NewProp_HandRootPose_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandPointerPose = { "HandPointerPose", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTrackingDataSources, HandPointerPose), Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandPointerPose_MetaData), NewProp_HandPointerPose_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandJoints = { "HandJoints", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkTrackingDataSources, HandJoints), Z_Construct_UClass_UIsdkIHandJoints_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandJoints_MetaData), NewProp_HandJoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_DataSourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandRootPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandPointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewProp_HandJoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkTrackingDataSources",
	Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::PropPointers),
	sizeof(FIsdkTrackingDataSources),
	alignof(FIsdkTrackingDataSources),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkTrackingDataSources()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.InnerSingleton, Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources.InnerSingleton;
}
// ********** End ScriptStruct FIsdkTrackingDataSources ********************************************

// ********** Begin Interface UIsdkITrackingDataSubsystem Function GetOrCreateControllerDataSourceComponent 
struct IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms
{
	UMotionControllerComponent* SourceMotionController;
	EIsdkHandedness Handedness;
	FIsdkTrackingDataSources ReturnValue;
};
FIsdkTrackingDataSources IIsdkITrackingDataSubsystem::GetOrCreateControllerDataSourceComponent(UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOrCreateControllerDataSourceComponent instead.");
	IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent = FName(TEXT("GetOrCreateControllerDataSourceComponent"));
FIsdkTrackingDataSources IIsdkITrackingDataSubsystem::Execute_GetOrCreateControllerDataSourceComponent(UObject* O, UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkITrackingDataSubsystem::StaticClass()));
	IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent);
	if (Func)
	{
		Parms.SourceMotionController=SourceMotionController;
		Parms.Handedness=Handedness;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkITrackingDataSubsystem*)(O->GetNativeInterfaceAddress(UIsdkITrackingDataSubsystem::StaticClass())))
	{
		Parms.ReturnValue = I->GetOrCreateControllerDataSourceComponent_Implementation(SourceMotionController,Handedness);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets or creates a new actor component that acts as a data source for the given\n   * controller. The method returns the data source component, plus a number of different interfaces\n   * that should be used to query controller data. The controller data that is queried from these\n   * interfaces will take the transform of OutDataSourceComponent into account when calculating\n   * world space positions.\n   * @param SourceMotionController The transform of this motion controller will be used to\n   * position controller tracking data in world space\n   * @param Handedness The handedness to set on the new component\n   */" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
		{ "ToolTip", "@brief Gets or creates a new actor component that acts as a data source for the given\ncontroller. The method returns the data source component, plus a number of different interfaces\nthat should be used to query controller data. The controller data that is queried from these\ninterfaces will take the transform of OutDataSourceComponent into account when calculating\nworld space positions.\n@param SourceMotionController The transform of this motion controller will be used to\nposition controller tracking data in world space\n@param Handedness The handedness to set on the new component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMotionController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_SourceMotionController = { "SourceMotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms, SourceMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMotionController_MetaData), NewProp_SourceMotionController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(0, nullptr) }; // 49432891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkTrackingDataSources, METADATA_PARAMS(0, nullptr) }; // 3141570880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_SourceMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkITrackingDataSubsystem, nullptr, "GetOrCreateControllerDataSourceComponent", Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::PropPointers), sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateControllerDataSourceComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkITrackingDataSubsystem::execGetOrCreateControllerDataSourceComponent)
{
	P_GET_OBJECT(UMotionControllerComponent,Z_Param_SourceMotionController);
	P_GET_ENUM(EIsdkHandedness,Z_Param_Handedness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkTrackingDataSources*)Z_Param__Result=P_THIS->GetOrCreateControllerDataSourceComponent_Implementation(Z_Param_SourceMotionController,EIsdkHandedness(Z_Param_Handedness));
	P_NATIVE_END;
}
// ********** End Interface UIsdkITrackingDataSubsystem Function GetOrCreateControllerDataSourceComponent 

// ********** Begin Interface UIsdkITrackingDataSubsystem Function GetOrCreateHandDataSourceComponent 
struct IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms
{
	UMotionControllerComponent* SourceMotionController;
	EIsdkHandedness Handedness;
	FIsdkTrackingDataSources ReturnValue;
};
FIsdkTrackingDataSources IIsdkITrackingDataSubsystem::GetOrCreateHandDataSourceComponent(UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOrCreateHandDataSourceComponent instead.");
	IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent = FName(TEXT("GetOrCreateHandDataSourceComponent"));
FIsdkTrackingDataSources IIsdkITrackingDataSubsystem::Execute_GetOrCreateHandDataSourceComponent(UObject* O, UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkITrackingDataSubsystem::StaticClass()));
	IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent);
	if (Func)
	{
		Parms.SourceMotionController=SourceMotionController;
		Parms.Handedness=Handedness;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkITrackingDataSubsystem*)(O->GetNativeInterfaceAddress(UIsdkITrackingDataSubsystem::StaticClass())))
	{
		Parms.ReturnValue = I->GetOrCreateHandDataSourceComponent_Implementation(SourceMotionController,Handedness);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets or creates a new actor component that acts as a data source for the given hand.\n   * The method returns the data source component, plus a number of different interfaces that\n   * should be used to query hand data. The hand data that is queried from these interfaces will\n   * take the transform of OutDataSourceComponent into account when calculating world space\n   * positions.\n   * @param SourceMotionController The transform of this motion controller will be used to\n   * position hand tracking data in world space\n   * @param Handedness The handedness to set on the new component\n   */" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
		{ "ToolTip", "@brief Gets or creates a new actor component that acts as a data source for the given hand.\nThe method returns the data source component, plus a number of different interfaces that\nshould be used to query hand data. The hand data that is queried from these interfaces will\ntake the transform of OutDataSourceComponent into account when calculating world space\npositions.\n@param SourceMotionController The transform of this motion controller will be used to\nposition hand tracking data in world space\n@param Handedness The handedness to set on the new component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMotionController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMotionController;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_SourceMotionController = { "SourceMotionController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms, SourceMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMotionController_MetaData), NewProp_SourceMotionController_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(0, nullptr) }; // 49432891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkTrackingDataSources, METADATA_PARAMS(0, nullptr) }; // 3141570880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_SourceMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkITrackingDataSubsystem, nullptr, "GetOrCreateHandDataSourceComponent", Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::PropPointers), sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateHandDataSourceComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkITrackingDataSubsystem::execGetOrCreateHandDataSourceComponent)
{
	P_GET_OBJECT(UMotionControllerComponent,Z_Param_SourceMotionController);
	P_GET_ENUM(EIsdkHandedness,Z_Param_Handedness);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkTrackingDataSources*)Z_Param__Result=P_THIS->GetOrCreateHandDataSourceComponent_Implementation(Z_Param_SourceMotionController,EIsdkHandedness(Z_Param_Handedness));
	P_NATIVE_END;
}
// ********** End Interface UIsdkITrackingDataSubsystem Function GetOrCreateHandDataSourceComponent 

// ********** Begin Interface UIsdkITrackingDataSubsystem Function GetOrCreateHmdDataSourceComponent 
struct IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms
{
	AActor* TrackingSpaceRoot;
	TScriptInterface<IIsdkIHmdDataSource> ReturnValue;
};
TScriptInterface<IIsdkIHmdDataSource> IIsdkITrackingDataSubsystem::GetOrCreateHmdDataSourceComponent(AActor* TrackingSpaceRoot)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOrCreateHmdDataSourceComponent instead.");
	IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent = FName(TEXT("GetOrCreateHmdDataSourceComponent"));
TScriptInterface<IIsdkIHmdDataSource> IIsdkITrackingDataSubsystem::Execute_GetOrCreateHmdDataSourceComponent(UObject* O, AActor* TrackingSpaceRoot)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkITrackingDataSubsystem::StaticClass()));
	IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent);
	if (Func)
	{
		Parms.TrackingSpaceRoot=TrackingSpaceRoot;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkITrackingDataSubsystem*)(O->GetNativeInterfaceAddress(UIsdkITrackingDataSubsystem::StaticClass())))
	{
		Parms.ReturnValue = I->GetOrCreateHmdDataSourceComponent_Implementation(TrackingSpaceRoot);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Creates a new scene component that acts as a data source for the head mounted display.\n   *        The method returns the interface that should be used to query HMD data.\n   * @param TrackingSpaceRoot The transform of this Actor will be used as the root of the\n   * tracking space.\n   */" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
		{ "ToolTip", "@brief Creates a new scene component that acts as a data source for the head mounted display.\n       The method returns the interface that should be used to query HMD data.\n@param TrackingSpaceRoot The transform of this Actor will be used as the root of the\ntracking space." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingSpaceRoot;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::NewProp_TrackingSpaceRoot = { "TrackingSpaceRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms, TrackingSpaceRoot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms, ReturnValue), Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::NewProp_TrackingSpaceRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkITrackingDataSubsystem, nullptr, "GetOrCreateHmdDataSourceComponent", Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::PropPointers), sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkITrackingDataSubsystem_eventGetOrCreateHmdDataSourceComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkITrackingDataSubsystem::execGetOrCreateHmdDataSourceComponent)
{
	P_GET_OBJECT(AActor,Z_Param_TrackingSpaceRoot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIHmdDataSource>*)Z_Param__Result=P_THIS->GetOrCreateHmdDataSourceComponent_Implementation(Z_Param_TrackingSpaceRoot);
	P_NATIVE_END;
}
// ********** End Interface UIsdkITrackingDataSubsystem Function GetOrCreateHmdDataSourceComponent *

// ********** Begin Interface UIsdkITrackingDataSubsystem Function IsEnabled ***********************
struct IsdkITrackingDataSubsystem_eventIsEnabled_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	IsdkITrackingDataSubsystem_eventIsEnabled_Parms()
		: ReturnValue(false)
	{
	}
};
bool IIsdkITrackingDataSubsystem::IsEnabled()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_IsEnabled instead.");
	IsdkITrackingDataSubsystem_eventIsEnabled_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIsdkITrackingDataSubsystem_IsEnabled = FName(TEXT("IsEnabled"));
bool IIsdkITrackingDataSubsystem::Execute_IsEnabled(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIsdkITrackingDataSubsystem::StaticClass()));
	IsdkITrackingDataSubsystem_eventIsEnabled_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIsdkITrackingDataSubsystem_IsEnabled);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIsdkITrackingDataSubsystem*)(O->GetNativeInterfaceAddress(UIsdkITrackingDataSubsystem::StaticClass())))
	{
		Parms.ReturnValue = I->IsEnabled_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkITrackingDataSubsystem_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkITrackingDataSubsystem_eventIsEnabled_Parms), &Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkITrackingDataSubsystem, nullptr, "IsEnabled", Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::PropPointers), sizeof(IsdkITrackingDataSubsystem_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkITrackingDataSubsystem_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIsdkITrackingDataSubsystem::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UIsdkITrackingDataSubsystem Function IsEnabled *************************

// ********** Begin Interface UIsdkITrackingDataSubsystem ******************************************
void UIsdkITrackingDataSubsystem::StaticRegisterNativesUIsdkITrackingDataSubsystem()
{
	UClass* Class = UIsdkITrackingDataSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOrCreateControllerDataSourceComponent", &IIsdkITrackingDataSubsystem::execGetOrCreateControllerDataSourceComponent },
		{ "GetOrCreateHandDataSourceComponent", &IIsdkITrackingDataSubsystem::execGetOrCreateHandDataSourceComponent },
		{ "GetOrCreateHmdDataSourceComponent", &IIsdkITrackingDataSubsystem::execGetOrCreateHmdDataSourceComponent },
		{ "IsEnabled", &IIsdkITrackingDataSubsystem::execIsEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem;
UClass* UIsdkITrackingDataSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkITrackingDataSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkITrackingDataSubsystem"),
			Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkITrackingDataSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister()
{
	return UIsdkITrackingDataSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkITrackingDataSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateControllerDataSourceComponent, "GetOrCreateControllerDataSourceComponent" }, // 4130574125
		{ &Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHandDataSourceComponent, "GetOrCreateHandDataSourceComponent" }, // 1320931856
		{ &Z_Construct_UFunction_UIsdkITrackingDataSubsystem_GetOrCreateHmdDataSourceComponent, "GetOrCreateHmdDataSourceComponent" }, // 3984988861
		{ &Z_Construct_UFunction_UIsdkITrackingDataSubsystem_IsEnabled, "IsEnabled" }, // 158379591
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkITrackingDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::ClassParams = {
	&UIsdkITrackingDataSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem.OuterSingleton;
}
UIsdkITrackingDataSubsystem::UIsdkITrackingDataSubsystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkITrackingDataSubsystem);
// ********** End Interface UIsdkITrackingDataSubsystem ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkTrackingDataSources::StaticStruct, Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics::NewStructOps, TEXT("IsdkTrackingDataSources"), &Z_Registration_Info_UScriptStruct_FIsdkTrackingDataSources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkTrackingDataSources), 3141570880U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkITrackingDataSubsystem, UIsdkITrackingDataSubsystem::StaticClass, TEXT("UIsdkITrackingDataSubsystem"), &Z_Registration_Info_UClass_UIsdkITrackingDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkITrackingDataSubsystem), 3351586210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_1607730244(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
