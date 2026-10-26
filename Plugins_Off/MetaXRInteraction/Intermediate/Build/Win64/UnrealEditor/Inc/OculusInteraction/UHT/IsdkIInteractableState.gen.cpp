// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkIInteractableState.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIInteractableState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkInteractableStateEvent ***************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent;
class UScriptStruct* FIsdkInteractableStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractableStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @struct FIsdkInteractableStateEvent\n * @brief A struct representing a new event generated from changing the state of this interactable\n */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractableState.h" },
		{ "ToolTip", "@struct FIsdkInteractableStateEvent\n@brief A struct representing a new event generated from changing the state of this interactable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The interactable that received this event. May be null if the interactable was deleted prior\n   * to this event being emitted (a common case is when the interactable is deleted in response\n   * to a Select event - the following Hover/Normal/Disabled events will still be emitted.)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractableState.h" },
		{ "ToolTip", "The interactable that received this event. May be null if the interactable was deleted prior\nto this event being emitted (a common case is when the interactable is deleted in response\nto a Select event - the following Hover/Normal/Disabled events will still be emitted.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * A struct that contains the previous EIsdkInteractableState as well as the new one established\n   * by this event\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractableState.h" },
		{ "ToolTip", "A struct that contains the previous EIsdkInteractableState as well as the new one established\nby this event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractableStateEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractableStateEvent, Interactable), Z_Construct_UClass_UIsdkIInteractableState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactable_MetaData), NewProp_Interactable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractableStateEvent, Args), Z_Construct_UScriptStruct_FIsdkInteractableStateChangeArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 4056882987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::NewProp_Interactable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::NewProp_Args,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractableStateEvent",
	Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::PropPointers),
	sizeof(FIsdkInteractableStateEvent),
	alignof(FIsdkInteractableStateEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractableStateEvent *****************************************

// ********** Begin Delegate FIsdkInteractableStateChanged *****************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms
	{
		FIsdkInteractableStateEvent InteractableState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interactable State Changed Delegate" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractableState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::NewProp_InteractableState = { "InteractableState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms, InteractableState), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableState_MetaData), NewProp_InteractableState_MetaData) }; // 138227056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::NewProp_InteractableState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkInteractableStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkInteractableStateChanged_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractableStateChanged, FIsdkInteractableStateEvent const& InteractableState)
{
	struct _Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms
	{
		FIsdkInteractableStateEvent InteractableState;
	};
	_Script_OculusInteraction_eventIsdkInteractableStateChanged_Parms Parms;
	Parms.InteractableState=InteractableState;
	IsdkInteractableStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkInteractableStateChanged *******************************************

// ********** Begin Interface UIsdkIInteractableState **********************************************
void UIsdkIInteractableState::StaticRegisterNativesUIsdkIInteractableState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIInteractableState;
UClass* UIsdkIInteractableState::GetPrivateStaticClass()
{
	using TClass = UIsdkIInteractableState;
	if (!Z_Registration_Info_UClass_UIsdkIInteractableState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIInteractableState"),
			Z_Registration_Info_UClass_UIsdkIInteractableState.InnerSingleton,
			StaticRegisterNativesUIsdkIInteractableState,
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
	return Z_Registration_Info_UClass_UIsdkIInteractableState.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister()
{
	return UIsdkIInteractableState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIInteractableState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractableState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIInteractableState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIInteractableState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIInteractableState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIInteractableState_Statics::ClassParams = {
	&UIsdkIInteractableState::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIInteractableState_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIInteractableState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIInteractableState()
{
	if (!Z_Registration_Info_UClass_UIsdkIInteractableState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIInteractableState.OuterSingleton, Z_Construct_UClass_UIsdkIInteractableState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIInteractableState.OuterSingleton;
}
UIsdkIInteractableState::UIsdkIInteractableState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIInteractableState);
// ********** End Interface UIsdkIInteractableState ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInteractableStateEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractableStateEvent_Statics::NewStructOps, TEXT("IsdkInteractableStateEvent"), &Z_Registration_Info_UScriptStruct_FIsdkInteractableStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractableStateEvent), 138227056U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIInteractableState, UIsdkIInteractableState::StaticClass, TEXT("UIsdkIInteractableState"), &Z_Registration_Info_UClass_UIsdkIInteractableState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIInteractableState), 1311159171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_1549191483(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractableState_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
