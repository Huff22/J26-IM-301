// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/IsdkWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidget();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidget_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkWidgetEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkWidgetEventType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkWidgetEventType;
static UEnum* EIsdkWidgetEventType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkWidgetEventType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkWidgetEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("EIsdkWidgetEventType"));
	}
	return Z_Registration_Info_UEnum_EIsdkWidgetEventType.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkWidgetEventType>()
{
	return EIsdkWidgetEventType_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
		{ "SelectedEmpty.Name", "EIsdkWidgetEventType::SelectedEmpty" },
		{ "SelectedHovered.Name", "EIsdkWidgetEventType::SelectedHovered" },
		{ "UnselectedEmpty.Name", "EIsdkWidgetEventType::UnselectedEmpty" },
		{ "UnselectedHovered.Name", "EIsdkWidgetEventType::UnselectedHovered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkWidgetEventType::SelectedHovered", (int64)EIsdkWidgetEventType::SelectedHovered },
		{ "EIsdkWidgetEventType::SelectedEmpty", (int64)EIsdkWidgetEventType::SelectedEmpty },
		{ "EIsdkWidgetEventType::UnselectedHovered", (int64)EIsdkWidgetEventType::UnselectedHovered },
		{ "EIsdkWidgetEventType::UnselectedEmpty", (int64)EIsdkWidgetEventType::UnselectedEmpty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"EIsdkWidgetEventType",
	"EIsdkWidgetEventType",
	Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType()
{
	if (!Z_Registration_Info_UEnum_EIsdkWidgetEventType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkWidgetEventType.InnerSingleton, Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkWidgetEventType.InnerSingleton;
}
// ********** End Enum EIsdkWidgetEventType ********************************************************

// ********** Begin ScriptStruct FIsdkWidgetEvent **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent;
class UScriptStruct* FIsdkWidgetEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkWidgetEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkWidgetEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkWidgetEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkWidgetEvent, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactor_MetaData), NewProp_Interactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkWidgetEvent, Type), Z_Construct_UEnum_OculusInteraction_EIsdkWidgetEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1733239194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkWidgetEvent",
	Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::PropPointers),
	sizeof(FIsdkWidgetEvent),
	alignof(FIsdkWidgetEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkWidgetEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkWidgetEvent ****************************************************

// ********** Begin Delegate FIsdkWidgetEventDelegate **********************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms
	{
		FIsdkWidgetEvent WidgetEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::NewProp_WidgetEvent = { "WidgetEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms, WidgetEvent), Z_Construct_UScriptStruct_FIsdkWidgetEvent, METADATA_PARAMS(0, nullptr) }; // 2690397075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::NewProp_WidgetEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkWidgetEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkWidgetEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkWidgetEventDelegate, FIsdkWidgetEvent WidgetEvent)
{
	struct _Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms
	{
		FIsdkWidgetEvent WidgetEvent;
	};
	_Script_OculusInteraction_eventIsdkWidgetEventDelegate_Parms Parms;
	Parms.WidgetEvent=WidgetEvent;
	IsdkWidgetEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkWidgetEventDelegate ************************************************

// ********** Begin ScriptStruct FIsdkVirtualUserPointerEvent **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent;
class UScriptStruct* FIsdkVirtualUserPointerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkVirtualUserPointerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An interaction event for use with Slate Widgets. It contains information about which virtual user\n * is emitting the event\n */" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
		{ "ToolTip", "An interaction event for use with Slate Widgets. It contains information about which virtual user\nis emitting the event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerIndex_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkVirtualUserPointerEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserPointerEvent, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactor_MetaData), NewProp_Interactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserPointerEvent, Type), Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2809597128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserPointerEvent, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_VirtualUserIndex = { "VirtualUserIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserPointerEvent, VirtualUserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualUserIndex_MetaData), NewProp_VirtualUserIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_PointerIndex = { "PointerIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserPointerEvent, PointerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerIndex_MetaData), NewProp_PointerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_VirtualUserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewProp_PointerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkVirtualUserPointerEvent",
	Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::PropPointers),
	sizeof(FIsdkVirtualUserPointerEvent),
	alignof(FIsdkVirtualUserPointerEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkVirtualUserPointerEvent ****************************************

// ********** Begin Delegate FIsdkVirtualUserPointerEventDelegate **********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms
	{
		FIsdkVirtualUserPointerEvent WidgetPointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetPointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::NewProp_WidgetPointerEvent = { "WidgetPointerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms, WidgetPointerEvent), Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent, METADATA_PARAMS(0, nullptr) }; // 853788785
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::NewProp_WidgetPointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkVirtualUserPointerEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkVirtualUserPointerEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkVirtualUserPointerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkVirtualUserPointerEventDelegate, FIsdkVirtualUserPointerEvent WidgetPointerEvent)
{
	struct _Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms
	{
		FIsdkVirtualUserPointerEvent WidgetPointerEvent;
	};
	_Script_OculusInteraction_eventIsdkVirtualUserPointerEventDelegate_Parms Parms;
	Parms.WidgetPointerEvent=WidgetPointerEvent;
	IsdkVirtualUserPointerEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkVirtualUserPointerEventDelegate ************************************

// ********** Begin ScriptStruct FIsdkWidgetVirtualUserState ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState;
class UScriptStruct* FIsdkWidgetVirtualUserState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkWidgetVirtualUserState"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkWidgetVirtualUserState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkWidgetVirtualUserState, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactor_MetaData), NewProp_Interactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkWidgetVirtualUserState",
	Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::PropPointers),
	sizeof(FIsdkWidgetVirtualUserState),
	alignof(FIsdkWidgetVirtualUserState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.InnerSingleton, Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState.InnerSingleton;
}
// ********** End ScriptStruct FIsdkWidgetVirtualUserState *****************************************

// ********** Begin Class UIsdkWidget **************************************************************
void UIsdkWidget::StaticRegisterNativesUIsdkWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkWidget;
UClass* UIsdkWidget::GetPrivateStaticClass()
{
	using TClass = UIsdkWidget;
	if (!Z_Registration_Info_UClass_UIsdkWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkWidget"),
			Z_Registration_Info_UClass_UIsdkWidget.InnerSingleton,
			StaticRegisterNativesUIsdkWidget,
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
	return Z_Registration_Info_UClass_UIsdkWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkWidget_NoRegister()
{
	return UIsdkWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @brief Static methods to move data from ISDK into Slate\n */" },
		{ "IncludePath", "Widget/IsdkWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/IsdkWidget.h" },
		{ "ToolTip", "@brief Static methods to move data from ISDK into Slate" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkWidget_Statics::ClassParams = {
	&UIsdkWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkWidget()
{
	if (!Z_Registration_Info_UClass_UIsdkWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkWidget.OuterSingleton, Z_Construct_UClass_UIsdkWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkWidget.OuterSingleton;
}
UIsdkWidget::UIsdkWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkWidget);
UIsdkWidget::~UIsdkWidget() {}
// ********** End Class UIsdkWidget ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkWidgetEventType_StaticEnum, TEXT("EIsdkWidgetEventType"), &Z_Registration_Info_UEnum_EIsdkWidgetEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1733239194U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkWidgetEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics::NewStructOps, TEXT("IsdkWidgetEvent"), &Z_Registration_Info_UScriptStruct_FIsdkWidgetEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkWidgetEvent), 2690397075U) },
		{ FIsdkVirtualUserPointerEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics::NewStructOps, TEXT("IsdkVirtualUserPointerEvent"), &Z_Registration_Info_UScriptStruct_FIsdkVirtualUserPointerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkVirtualUserPointerEvent), 853788785U) },
		{ FIsdkWidgetVirtualUserState::StaticStruct, Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics::NewStructOps, TEXT("IsdkWidgetVirtualUserState"), &Z_Registration_Info_UScriptStruct_FIsdkWidgetVirtualUserState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkWidgetVirtualUserState), 2710415241U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkWidget, UIsdkWidget::StaticClass, TEXT("UIsdkWidget"), &Z_Registration_Info_UClass_UIsdkWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkWidget), 1529594373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_893821577(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
