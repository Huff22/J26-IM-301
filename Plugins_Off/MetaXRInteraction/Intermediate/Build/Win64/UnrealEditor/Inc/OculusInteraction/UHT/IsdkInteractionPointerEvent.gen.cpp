// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"
#include "StructTypesNonGenerated.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractionPointerEvent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPosef();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkInteractionPointerEvent **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent;
class UScriptStruct* FIsdkInteractionPointerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractionPointerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The interactor that invoked this event. May be null if the interactor was deleted prior\n   * to this event being emitted (a common case is when the interactor deletes itself in response\n   * to a Select event - the following Hover/Normal/Disabled events will still be emitted.)\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
		{ "ToolTip", "The interactor that invoked this event. May be null if the interactor was deleted prior\nto this event being emitted (a common case is when the interactor deletes itself in response\nto a Select event - the following Hover/Normal/Disabled events will still be emitted.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The interactable that received this event. May be null if the interactable was deleted prior\n   * to this event being emitted (a common case is when the interactable is deleted in response\n   * to a Select event - the following Hover/Normal/Disabled events will still be emitted.)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
		{ "ToolTip", "The interactable that received this event. May be null if the interactable was deleted prior\nto this event being emitted (a common case is when the interactable is deleted in response\nto a Select event - the following Hover/Normal/Disabled events will still be emitted.)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Identifier;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractionPointerEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionPointerEvent, Identifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifier_MetaData), NewProp_Identifier_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionPointerEvent, Type), Z_Construct_UEnum_OculusInteraction_EIsdkPointerEventType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2809597128
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionPointerEvent, Pose), Z_Construct_UScriptStruct_FIsdkPosef, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pose_MetaData), NewProp_Pose_MetaData) }; // 3274912445
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionPointerEvent, Interactor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactor_MetaData), NewProp_Interactor_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractionPointerEvent, Interactable), Z_Construct_UClass_UIsdkIPointable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Identifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Pose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewProp_Interactable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractionPointerEvent",
	Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::PropPointers),
	sizeof(FIsdkInteractionPointerEvent),
	alignof(FIsdkInteractionPointerEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractionPointerEvent ****************************************

// ********** Begin Delegate FIsdkInteractionPointerEventDelegate **********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/Pointable/IsdkInteractionPointerEvent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkInteractionPointerEventDelegate__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkInteractionPointerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractionPointerEventDelegate, FIsdkInteractionPointerEvent const& PointerEvent)
{
	struct _Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
	_Script_OculusInteraction_eventIsdkInteractionPointerEventDelegate_Parms Parms;
	Parms.PointerEvent=PointerEvent;
	IsdkInteractionPointerEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkInteractionPointerEventDelegate ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkInteractionPointerEvent_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInteractionPointerEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent_Statics::NewStructOps, TEXT("IsdkInteractionPointerEvent"), &Z_Registration_Info_UScriptStruct_FIsdkInteractionPointerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractionPointerEvent), 384809535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkInteractionPointerEvent_h__Script_OculusInteraction_136001580(TEXT("/Script/OculusInteraction"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkInteractionPointerEvent_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Pointable_IsdkInteractionPointerEvent_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
