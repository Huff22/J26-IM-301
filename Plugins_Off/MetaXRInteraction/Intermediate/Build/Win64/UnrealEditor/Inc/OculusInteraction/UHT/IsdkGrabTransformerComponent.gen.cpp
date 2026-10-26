// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkGrabTransformerComponent.h"
#include "Interaction/Grabbable/IsdkGrabPoseCollection.h"
#include "Interaction/IsdkThrowable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabTransformerComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabMotion_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkThrowable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_TransformEvent();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkGrabPoseCollection();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkThrowableSettings();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum TransformEvent ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_TransformEvent;
static UEnum* TransformEvent_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_TransformEvent.OuterSingleton)
	{
		Z_Registration_Info_UEnum_TransformEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteraction_TransformEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("TransformEvent"));
	}
	return Z_Registration_Info_UEnum_TransformEvent.OuterSingleton;
}
template<> OCULUSINTERACTION_API UEnum* StaticEnum<TransformEvent>()
{
	return TransformEvent_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BeginTransform.Name", "TransformEvent::BeginTransform" },
		{ "BlueprintType", "true" },
		{ "EndTransform.Name", "TransformEvent::EndTransform" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "UpdateTransform.Name", "TransformEvent::UpdateTransform" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TransformEvent::BeginTransform", (int64)TransformEvent::BeginTransform },
		{ "TransformEvent::UpdateTransform", (int64)TransformEvent::UpdateTransform },
		{ "TransformEvent::EndTransform", (int64)TransformEvent::EndTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	"TransformEvent",
	"TransformEvent",
	Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteraction_TransformEvent()
{
	if (!Z_Registration_Info_UEnum_TransformEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TransformEvent.InnerSingleton, Z_Construct_UEnum_OculusInteraction_TransformEvent_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_TransformEvent.InnerSingleton;
}
// ********** End Enum TransformEvent **************************************************************

// ********** Begin ScriptStruct FIsdkInteractorMoveSnapState **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState;
class UScriptStruct* FIsdkInteractorMoveSnapState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractorMoveSnapState"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/* State of the current Interactor Movement Override and original information needed */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "State of the current Interactor Movement Override and original information needed" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractorMoveSnapState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractorMoveSnapState",
	nullptr,
	0,
	sizeof(FIsdkInteractorMoveSnapState),
	alignof(FIsdkInteractorMoveSnapState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractorMoveSnapState ****************************************

// ********** Begin Delegate FIsdkGrabTransformerEventDelegate *************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms
	{
		TransformEvent Event;
		const UIsdkGrabTransformerComponent* GrabTransformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Event_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Event;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_Event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms, Event), Z_Construct_UEnum_OculusInteraction_TransformEvent, METADATA_PARAMS(0, nullptr) }; // 628992050
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer = { "GrabTransformer", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms, GrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformer_MetaData), NewProp_GrabTransformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_Event_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkGrabTransformerEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkGrabTransformerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkGrabTransformerEventDelegate, TransformEvent Event, const UIsdkGrabTransformerComponent* GrabTransformer)
{
	struct _Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms
	{
		TransformEvent Event;
		const UIsdkGrabTransformerComponent* GrabTransformer;
	};
	_Script_OculusInteraction_eventIsdkGrabTransformerEventDelegate_Parms Parms;
	Parms.Event=Event;
	Parms.GrabTransformer=GrabTransformer;
	IsdkGrabTransformerEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkGrabTransformerEventDelegate ***************************************

// ********** Begin Delegate FIsdkCancelGrabEventDelegate ******************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms
	{
		int32 InteractorID;
		UIsdkGrabTransformerComponent* GrabTransformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InteractorID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::NewProp_InteractorID = { "InteractorID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms, InteractorID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer = { "GrabTransformer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms, GrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformer_MetaData), NewProp_GrabTransformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::NewProp_InteractorID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkCancelGrabEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkCancelGrabEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkCancelGrabEventDelegate, int32 InteractorID, UIsdkGrabTransformerComponent* GrabTransformer)
{
	struct _Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms
	{
		int32 InteractorID;
		UIsdkGrabTransformerComponent* GrabTransformer;
	};
	_Script_OculusInteraction_eventIsdkCancelGrabEventDelegate_Parms Parms;
	Parms.InteractorID=InteractorID;
	Parms.GrabTransformer=GrabTransformer;
	IsdkCancelGrabEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkCancelGrabEventDelegate ********************************************

// ********** Begin Delegate FIsdkGrabThrowEventDelegate *******************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms
	{
		const UIsdkGrabTransformerComponent* GrabTransformer;
		const UIsdkThrowable* ThrowableComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformer_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabTransformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer = { "GrabTransformer", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms, GrabTransformer), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformer_MetaData), NewProp_GrabTransformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::NewProp_ThrowableComponent = { "ThrowableComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms, ThrowableComponent), Z_Construct_UClass_UIsdkThrowable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableComponent_MetaData), NewProp_ThrowableComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::NewProp_GrabTransformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::NewProp_ThrowableComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkGrabThrowEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkGrabThrowEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkGrabThrowEventDelegate, const UIsdkGrabTransformerComponent* GrabTransformer, const UIsdkThrowable* ThrowableComponent)
{
	struct _Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms
	{
		const UIsdkGrabTransformerComponent* GrabTransformer;
		const UIsdkThrowable* ThrowableComponent;
	};
	_Script_OculusInteraction_eventIsdkGrabThrowEventDelegate_Parms Parms;
	Parms.GrabTransformer=GrabTransformer;
	Parms.ThrowableComponent=ThrowableComponent;
	IsdkGrabThrowEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkGrabThrowEventDelegate *********************************************

// ********** Begin Class UIsdkGrabTransformerComponent Function ForceCancel ***********************
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Sends a cancel event to all interactors that are currently grabbing this grab transformer\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Sends a cancel event to all interactors that are currently grabbing this grab transformer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "ForceCancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execForceCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceCancel();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function ForceCancel *************************

// ********** Begin Class UIsdkGrabTransformerComponent Function GetActiveGrabTransformer **********
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics
{
	struct IsdkGrabTransformerComponent_eventGetActiveGrabTransformer_Parms
	{
		TScriptInterface<IIsdkITransformer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the transformer which is currently driving transform logic\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ReturnDisplayName", "ActiveGrabTransformer" },
		{ "ToolTip", "Get the transformer which is currently driving transform logic" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetActiveGrabTransformer_Parms, ReturnValue), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetActiveGrabTransformer", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetActiveGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetActiveGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetActiveGrabTransformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkITransformer>*)Z_Param__Result=P_THIS->GetActiveGrabTransformer();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetActiveGrabTransformer ************

// ********** Begin Class UIsdkGrabTransformerComponent Function GetGrabPoses **********************
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics
{
	struct IsdkGrabTransformerComponent_eventGetGrabPoses_Parms
	{
		FIsdkGrabPoseCollection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Gets a list of grab poses, which represent the points at which this grab transformer\n   * is being grabbed.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ReturnDisplayName", "GrabPoses" },
		{ "ToolTip", "Gets a list of grab poses, which represent the points at which this grab transformer\nis being grabbed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetGrabPoses_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkGrabPoseCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 686883547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetGrabPoses", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::IsdkGrabTransformerComponent_eventGetGrabPoses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::IsdkGrabTransformerComponent_eventGetGrabPoses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetGrabPoses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkGrabPoseCollection*)Z_Param__Result=P_THIS->GetGrabPoses();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetGrabPoses ************************

// ********** Begin Class UIsdkGrabTransformerComponent Function GetMultiGrabTransformer ***********
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics
{
	struct IsdkGrabTransformerComponent_eventGetMultiGrabTransformer_Parms
	{
		TScriptInterface<IIsdkITransformer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the transformer responsible for handling transform logic when multiple\n   * grabbers are interacting with this grab transformer.\n   *\n   * Deprecated v74.\n   */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetMultiGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ReturnDisplayName", "MultiGrabTransformer" },
		{ "ToolTip", "Get the transformer responsible for handling transform logic when multiple\ngrabbers are interacting with this grab transformer.\n\nDeprecated v74." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetMultiGrabTransformer_Parms, ReturnValue), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetMultiGrabTransformer", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetMultiGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetMultiGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetMultiGrabTransformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkITransformer>*)Z_Param__Result=P_THIS->GetMultiGrabTransformer();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetMultiGrabTransformer *************

// ********** Begin Class UIsdkGrabTransformerComponent Function GetMultiGrabTransformerObject *****
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics
{
	struct IsdkGrabTransformerComponent_eventGetMultiGrabTransformerObject_Parms
	{
		UIsdkTransformer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the transformer responsible for handling transform logic when multiple\n   * grabbers are interacting with this grab transformer.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Get the transformer responsible for handling transform logic when multiple\ngrabbers are interacting with this grab transformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetMultiGrabTransformerObject_Parms, ReturnValue), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetMultiGrabTransformerObject", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventGetMultiGrabTransformerObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventGetMultiGrabTransformerObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetMultiGrabTransformerObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkTransformer**)Z_Param__Result=P_THIS->GetMultiGrabTransformerObject();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetMultiGrabTransformerObject *******

// ********** Begin Class UIsdkGrabTransformerComponent Function GetSingleGrabTransformer **********
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics
{
	struct IsdkGrabTransformerComponent_eventGetSingleGrabTransformer_Parms
	{
		TScriptInterface<IIsdkITransformer> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the transformer responsible for handling transform logic when a single\n   * grabber is interacting with this grab transformer.\n   *\n   * Deprecated v74.\n   */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetSingleGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ReturnDisplayName", "SingleGrabTransformer" },
		{ "ToolTip", "Get the transformer responsible for handling transform logic when a single\ngrabber is interacting with this grab transformer.\n\nDeprecated v74." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetSingleGrabTransformer_Parms, ReturnValue), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetSingleGrabTransformer", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetSingleGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::IsdkGrabTransformerComponent_eventGetSingleGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetSingleGrabTransformer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkITransformer>*)Z_Param__Result=P_THIS->GetSingleGrabTransformer();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetSingleGrabTransformer ************

// ********** Begin Class UIsdkGrabTransformerComponent Function GetSingleGrabTransformerObject ****
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics
{
	struct IsdkGrabTransformerComponent_eventGetSingleGrabTransformerObject_Parms
	{
		UIsdkTransformer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the transformer responsible for handling transform logic when a single\n   * grabber is interacting with this grab transformer.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Get the transformer responsible for handling transform logic when a single\ngrabber is interacting with this grab transformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetSingleGrabTransformerObject_Parms, ReturnValue), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetSingleGrabTransformerObject", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventGetSingleGrabTransformerObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventGetSingleGrabTransformerObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetSingleGrabTransformerObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkTransformer**)Z_Param__Result=P_THIS->GetSingleGrabTransformerObject();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetSingleGrabTransformerObject ******

// ********** Begin Class UIsdkGrabTransformerComponent Function GetTransformTarget ****************
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics
{
	struct IsdkGrabTransformerComponent_eventGetTransformTarget_Parms
	{
		USceneComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Get the target component around which transforms are calculated.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ReturnDisplayName", "TransformTarget" },
		{ "ToolTip", "Get the target component around which transforms are calculated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventGetTransformTarget_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "GetTransformTarget", Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::IsdkGrabTransformerComponent_eventGetTransformTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::IsdkGrabTransformerComponent_eventGetTransformTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execGetTransformTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USceneComponent**)Z_Param__Result=P_THIS->GetTransformTarget();
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function GetTransformTarget ******************

// ********** Begin Class UIsdkGrabTransformerComponent Function SetMultiGrabTransformer ***********
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics
{
	struct IsdkGrabTransformerComponent_eventSetMultiGrabTransformer_Parms
	{
		TScriptInterface<IIsdkITransformer> Transformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the transformer responsible for handling transform logic when multiple\n   * grabbers are interacting with this grab transformer.\n   *\n   * Deprecated v74.\n   */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetMultiGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Set the transformer responsible for handling transform logic when multiple\ngrabbers are interacting with this grab transformer.\n\nDeprecated v74." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Transformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::NewProp_Transformer = { "Transformer", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventSetMultiGrabTransformer_Parms, Transformer), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::NewProp_Transformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "SetMultiGrabTransformer", Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::IsdkGrabTransformerComponent_eventSetMultiGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::IsdkGrabTransformerComponent_eventSetMultiGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execSetMultiGrabTransformer)
{
	P_GET_TINTERFACE(IIsdkITransformer,Z_Param_Transformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMultiGrabTransformer(Z_Param_Transformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function SetMultiGrabTransformer *************

// ********** Begin Class UIsdkGrabTransformerComponent Function SetMultiGrabTransformerObject *****
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics
{
	struct IsdkGrabTransformerComponent_eventSetMultiGrabTransformerObject_Parms
	{
		UIsdkTransformer* Transformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the transformer responsible for handling transform logic when multiple\n   * grabbers are interacting with this grab transformer.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Set the transformer responsible for handling transform logic when multiple\ngrabbers are interacting with this grab transformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::NewProp_Transformer = { "Transformer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventSetMultiGrabTransformerObject_Parms, Transformer), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformer_MetaData), NewProp_Transformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::NewProp_Transformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "SetMultiGrabTransformerObject", Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventSetMultiGrabTransformerObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventSetMultiGrabTransformerObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execSetMultiGrabTransformerObject)
{
	P_GET_OBJECT(UIsdkTransformer,Z_Param_Transformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMultiGrabTransformerObject(Z_Param_Transformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function SetMultiGrabTransformerObject *******

// ********** Begin Class UIsdkGrabTransformerComponent Function SetSingleGrabTransformer **********
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics
{
	struct IsdkGrabTransformerComponent_eventSetSingleGrabTransformer_Parms
	{
		TScriptInterface<IIsdkITransformer> Transformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the transformer responsible for handling transform logic when a single\n   * grabber is interacting with this grab transformer.\n   *\n   * Deprecated v74.\n   */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetSingleGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Set the transformer responsible for handling transform logic when a single\ngrabber is interacting with this grab transformer.\n\nDeprecated v74." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Transformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::NewProp_Transformer = { "Transformer", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventSetSingleGrabTransformer_Parms, Transformer), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::NewProp_Transformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "SetSingleGrabTransformer", Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::IsdkGrabTransformerComponent_eventSetSingleGrabTransformer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::IsdkGrabTransformerComponent_eventSetSingleGrabTransformer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execSetSingleGrabTransformer)
{
	P_GET_TINTERFACE(IIsdkITransformer,Z_Param_Transformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSingleGrabTransformer(Z_Param_Transformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function SetSingleGrabTransformer ************

// ********** Begin Class UIsdkGrabTransformerComponent Function SetSingleGrabTransformerObject ****
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics
{
	struct IsdkGrabTransformerComponent_eventSetSingleGrabTransformerObject_Parms
	{
		UIsdkTransformer* Transformer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the transformer responsible for handling transform logic when a single\n   * grabber is interacting with this grab transformer.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Set the transformer responsible for handling transform logic when a single\ngrabber is interacting with this grab transformer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transformer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Transformer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::NewProp_Transformer = { "Transformer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventSetSingleGrabTransformerObject_Parms, Transformer), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transformer_MetaData), NewProp_Transformer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::NewProp_Transformer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "SetSingleGrabTransformerObject", Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventSetSingleGrabTransformerObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::IsdkGrabTransformerComponent_eventSetSingleGrabTransformerObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execSetSingleGrabTransformerObject)
{
	P_GET_OBJECT(UIsdkTransformer,Z_Param_Transformer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSingleGrabTransformerObject(Z_Param_Transformer);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function SetSingleGrabTransformerObject ******

// ********** Begin Class UIsdkGrabTransformerComponent Function SetTransformTarget ****************
struct Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics
{
	struct IsdkGrabTransformerComponent_eventSetTransformTarget_Parms
	{
		USceneComponent* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Set the target component around which transforms are calculated.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Set the target component around which transforms are calculated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkGrabTransformerComponent_eventSetTransformTarget_Parms, NewTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTarget_MetaData), NewProp_NewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkGrabTransformerComponent, nullptr, "SetTransformTarget", Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::IsdkGrabTransformerComponent_eventSetTransformTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::IsdkGrabTransformerComponent_eventSetTransformTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkGrabTransformerComponent::execSetTransformTarget)
{
	P_GET_OBJECT(USceneComponent,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransformTarget(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class UIsdkGrabTransformerComponent Function SetTransformTarget ******************

// ********** Begin Class UIsdkGrabTransformerComponent ********************************************
void UIsdkGrabTransformerComponent::StaticRegisterNativesUIsdkGrabTransformerComponent()
{
	UClass* Class = UIsdkGrabTransformerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ForceCancel", &UIsdkGrabTransformerComponent::execForceCancel },
		{ "GetActiveGrabTransformer", &UIsdkGrabTransformerComponent::execGetActiveGrabTransformer },
		{ "GetGrabPoses", &UIsdkGrabTransformerComponent::execGetGrabPoses },
		{ "GetMultiGrabTransformer", &UIsdkGrabTransformerComponent::execGetMultiGrabTransformer },
		{ "GetMultiGrabTransformerObject", &UIsdkGrabTransformerComponent::execGetMultiGrabTransformerObject },
		{ "GetSingleGrabTransformer", &UIsdkGrabTransformerComponent::execGetSingleGrabTransformer },
		{ "GetSingleGrabTransformerObject", &UIsdkGrabTransformerComponent::execGetSingleGrabTransformerObject },
		{ "GetTransformTarget", &UIsdkGrabTransformerComponent::execGetTransformTarget },
		{ "SetMultiGrabTransformer", &UIsdkGrabTransformerComponent::execSetMultiGrabTransformer },
		{ "SetMultiGrabTransformerObject", &UIsdkGrabTransformerComponent::execSetMultiGrabTransformerObject },
		{ "SetSingleGrabTransformer", &UIsdkGrabTransformerComponent::execSetSingleGrabTransformer },
		{ "SetSingleGrabTransformerObject", &UIsdkGrabTransformerComponent::execSetSingleGrabTransformerObject },
		{ "SetTransformTarget", &UIsdkGrabTransformerComponent::execSetTransformTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabTransformerComponent;
UClass* UIsdkGrabTransformerComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabTransformerComponent;
	if (!Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabTransformerComponent"),
			Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.InnerSingleton,
			StaticRegisterNativesUIsdkGrabTransformerComponent,
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
	return Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister()
{
	return UIsdkGrabTransformerComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * UIsdkGrabTransformer handles transform and throw behavior for grabbable components.  It does not\n * provide or handle the detection of grab events.  It works only if there is at least one\n * UIsdkGrabbableComponent to detect and pass along grab events.\n *\n * @see UIsdkGrabbableComponent\n */" },
		{ "DisplayName", "Grab Transformer Component" },
		{ "IncludePath", "Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "UIsdkGrabTransformer handles transform and throw behavior for grabbable components.  It does not\nprovide or handle the detection of grab events.  It works only if there is at least one\nUIsdkGrabbableComponent to detect and pass along grab events.\n\n@see UIsdkGrabbableComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceGrabMotion_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformTargetName_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * If specified, TransformTargetName is used to search all the components on this actor.\n   * If a component with a matching name is found, it will be set as the TransformTarget.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "If specified, TransformTargetName is used to search all the components on this actor.\nIf a component with a matching name is found, it will be set as the TransformTarget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiGrabBehavior_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * MultiGrabBehavior specifies how this grab transformer should respond to interaction with\n   * multiple grabbers.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "MultiGrabBehavior specifies how this grab transformer should respond to interaction with\nmultiple grabbers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThrowable_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "Comment", "/**\n   * If enabled, the grabbed object will have its velocity and angular velocity set\n   * based on its current motion when released.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "If enabled, the grabbed object will have its velocity and angular velocity set\nbased on its current motion when released." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRetainGravityWhenThrown_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "Comment", "/**\n   * If true, the grabbed object will retain the gravity settings on the mesh, otherwise it will set\n   * the opposite value when thrown.\n   */" },
		{ "EditCondition", "bIsThrowable == true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "If true, the grabbed object will retain the gravity settings on the mesh, otherwise it will set\nthe opposite value when thrown." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleGrabTransformerObject_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The transformer responsible for handling single-grabber behavior\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "The transformer responsible for handling single-grabber behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiGrabTransformerObject_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The transformer responsible for handling multiple-grabber behavior\n   */" },
		{ "EditCondition", "MultiGrabBehavior == EIsdkMultiGrabBehavior::MultiGrab" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "The transformer responsible for handling multiple-grabber behavior" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabTransformerEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * GrabTransformerEvent fires when any transform has taken place\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "GrabTransformerEvent fires when any transform has taken place" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CancelGrabEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * CancelGrabEvent fires when a grab has been forcibly canceled\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "CancelGrabEvent fires when a grab has been forcibly canceled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabThrowEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * GrabThrowEvent fires when a throw of a grabbable has taken place\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "GrabThrowEvent fires when a throw of a grabbable has taken place" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleGrabTransformer_MetaData[] = {
		{ "BlueprintGetter", "GetSingleGrabTransformer" },
		{ "BlueprintSetter", "SetSingleGrabTransformer" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The transformer responsible for handling single-grabber behavior.  Deprecated v74.\n   */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use SingleGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "The transformer responsible for handling single-grabber behavior.  Deprecated v74." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiGrabTransformer_MetaData[] = {
		{ "BlueprintGetter", "GetMultiGrabTransformer" },
		{ "BlueprintSetter", "SetMultiGrabTransformer" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The transformer responsible for handling multiple-grabber behavior.  Deprecated v74.\n   */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use MultiGrabTransformerObject instead" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "The transformer responsible for handling multiple-grabber behavior.  Deprecated v74." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformTarget_MetaData[] = {
		{ "BlueprintGetter", "GetTransformTarget" },
		{ "BlueprintSetter", "SetTransformTarget" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The target component around which transforms take place\n   */" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "The target component around which transforms take place" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabPoses_MetaData[] = {
		{ "BlueprintGetter", "GetGrabPoses" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * A collection of information about current grabs\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "A collection of information about current grabs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowSettings_MetaData[] = {
		{ "Category", "InteractionSDK|Throwable" },
		{ "Comment", "/**\n   * Settings that drive the throw behavior of this grab transformer\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
		{ "ToolTip", "Settings that drive the throw behavior of this grab transformer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrowableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorSnapOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSnapState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkGrabTransformerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceGrabMotion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransformTargetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MultiGrabBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MultiGrabBehavior;
	static void NewProp_bIsThrowable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThrowable;
	static void NewProp_bRetainGravityWhenThrown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainGravityWhenThrown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SingleGrabTransformerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MultiGrabTransformerObject;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GrabTransformerEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CancelGrabEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GrabThrowEvent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SingleGrabTransformer;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_MultiGrabTransformer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabPoses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThrowSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastInteractor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorSnapOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSnapState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_ForceCancel, "ForceCancel" }, // 2165252076
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetActiveGrabTransformer, "GetActiveGrabTransformer" }, // 3107893683
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetGrabPoses, "GetGrabPoses" }, // 1972946117
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformer, "GetMultiGrabTransformer" }, // 817967165
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetMultiGrabTransformerObject, "GetMultiGrabTransformerObject" }, // 965436348
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformer, "GetSingleGrabTransformer" }, // 3450547941
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetSingleGrabTransformerObject, "GetSingleGrabTransformerObject" }, // 594365482
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_GetTransformTarget, "GetTransformTarget" }, // 1467231497
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformer, "SetMultiGrabTransformer" }, // 3667214223
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetMultiGrabTransformerObject, "SetMultiGrabTransformerObject" }, // 1938743740
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformer, "SetSingleGrabTransformer" }, // 149479112
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetSingleGrabTransformerObject, "SetSingleGrabTransformerObject" }, // 2454684265
		{ &Z_Construct_UFunction_UIsdkGrabTransformerComponent_SetTransformTarget, "SetTransformTarget" }, // 862770341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabTransformerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_DistanceGrabMotion = { "DistanceGrabMotion", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, DistanceGrabMotion), Z_Construct_UClass_UIsdkGrabMotion_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceGrabMotion_MetaData), NewProp_DistanceGrabMotion_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_TransformTargetName = { "TransformTargetName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, TransformTargetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformTargetName_MetaData), NewProp_TransformTargetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabBehavior = { "MultiGrabBehavior", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, MultiGrabBehavior), Z_Construct_UEnum_OculusInteraction_EIsdkMultiGrabBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiGrabBehavior_MetaData), NewProp_MultiGrabBehavior_MetaData) }; // 1505835281
void Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bIsThrowable_SetBit(void* Obj)
{
	((UIsdkGrabTransformerComponent*)Obj)->bIsThrowable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bIsThrowable = { "bIsThrowable", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkGrabTransformerComponent), &Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bIsThrowable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThrowable_MetaData), NewProp_bIsThrowable_MetaData) };
void Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bRetainGravityWhenThrown_SetBit(void* Obj)
{
	((UIsdkGrabTransformerComponent*)Obj)->bRetainGravityWhenThrown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bRetainGravityWhenThrown = { "bRetainGravityWhenThrown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkGrabTransformerComponent), &Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bRetainGravityWhenThrown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRetainGravityWhenThrown_MetaData), NewProp_bRetainGravityWhenThrown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_SingleGrabTransformerObject = { "SingleGrabTransformerObject", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, SingleGrabTransformerObject), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleGrabTransformerObject_MetaData), NewProp_SingleGrabTransformerObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabTransformerObject = { "MultiGrabTransformerObject", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, MultiGrabTransformerObject), Z_Construct_UClass_UIsdkTransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiGrabTransformerObject_MetaData), NewProp_MultiGrabTransformerObject_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabTransformerEvent = { "GrabTransformerEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, GrabTransformerEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabTransformerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabTransformerEvent_MetaData), NewProp_GrabTransformerEvent_MetaData) }; // 4064395569
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_CancelGrabEvent = { "CancelGrabEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, CancelGrabEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkCancelGrabEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CancelGrabEvent_MetaData), NewProp_CancelGrabEvent_MetaData) }; // 4088859221
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabThrowEvent = { "GrabThrowEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, GrabThrowEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkGrabThrowEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabThrowEvent_MetaData), NewProp_GrabThrowEvent_MetaData) }; // 1938026736
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_SingleGrabTransformer = { "SingleGrabTransformer", nullptr, (EPropertyFlags)0x0044000020000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, SingleGrabTransformer_DEPRECATED), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleGrabTransformer_MetaData), NewProp_SingleGrabTransformer_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabTransformer = { "MultiGrabTransformer", nullptr, (EPropertyFlags)0x0044000020000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, MultiGrabTransformer_DEPRECATED), Z_Construct_UClass_UIsdkITransformer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiGrabTransformer_MetaData), NewProp_MultiGrabTransformer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_TransformTarget = { "TransformTarget", nullptr, (EPropertyFlags)0x014500000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, TransformTarget), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformTarget_MetaData), NewProp_TransformTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabPoses = { "GrabPoses", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, GrabPoses), Z_Construct_UScriptStruct_FIsdkGrabPoseCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabPoses_MetaData), NewProp_GrabPoses_MetaData) }; // 686883547
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_ThrowSettings = { "ThrowSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, ThrowSettings), Z_Construct_UScriptStruct_FIsdkThrowableSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowSettings_MetaData), NewProp_ThrowSettings_MetaData) }; // 768462151
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_ThrowableComponent = { "ThrowableComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, ThrowableComponent), Z_Construct_UClass_UIsdkThrowable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrowableComponent_MetaData), NewProp_ThrowableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_LastInteractor = { "LastInteractor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, LastInteractor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInteractor_MetaData), NewProp_LastInteractor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_InteractorSnapOffset = { "InteractorSnapOffset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, InteractorSnapOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorSnapOffset_MetaData), NewProp_InteractorSnapOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MoveSnapState = { "MoveSnapState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabTransformerComponent, MoveSnapState), Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSnapState_MetaData), NewProp_MoveSnapState_MetaData) }; // 2444407323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_DistanceGrabMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_TransformTargetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bIsThrowable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_bRetainGravityWhenThrown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_SingleGrabTransformerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabTransformerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabTransformerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_CancelGrabEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabThrowEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_SingleGrabTransformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MultiGrabTransformer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_TransformTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_GrabPoses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_ThrowSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_ThrowableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_LastInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_InteractorSnapOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::NewProp_MoveSnapState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::ClassParams = {
	&UIsdkGrabTransformerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.OuterSingleton, Z_Construct_UClass_UIsdkGrabTransformerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabTransformerComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabTransformerComponent);
UIsdkGrabTransformerComponent::~UIsdkGrabTransformerComponent() {}
// ********** End Class UIsdkGrabTransformerComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ TransformEvent_StaticEnum, TEXT("TransformEvent"), &Z_Registration_Info_UEnum_TransformEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 628992050U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInteractorMoveSnapState::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractorMoveSnapState_Statics::NewStructOps, TEXT("IsdkInteractorMoveSnapState"), &Z_Registration_Info_UScriptStruct_FIsdkInteractorMoveSnapState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractorMoveSnapState), 2444407323U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabTransformerComponent, UIsdkGrabTransformerComponent::StaticClass, TEXT("UIsdkGrabTransformerComponent"), &Z_Registration_Info_UClass_UIsdkGrabTransformerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabTransformerComponent), 1638774363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_2376944699(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkGrabTransformerComponent_h__Script_OculusInteraction_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
