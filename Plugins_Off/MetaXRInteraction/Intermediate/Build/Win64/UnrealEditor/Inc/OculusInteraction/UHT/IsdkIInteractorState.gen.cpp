// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkIInteractorState.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkIInteractorState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkInteractorStateEvent *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent;
class UScriptStruct* FIsdkInteractorStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkInteractorStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @struct FIsdkInteractorStateEvent\n * @brief A struct representing a new event generated from changing the state of this interactor\n */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractorState.h" },
		{ "ToolTip", "@struct FIsdkInteractorStateEvent\n@brief A struct representing a new event generated from changing the state of this interactor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * The interactor that invoked this event. May be null if the interactor was deleted prior\n   * to this event being emitted (a common case is when the interactor deletes itself in response\n   * to a Select event - the following Hover/Normal/Disabled events will still be emitted.)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractorState.h" },
		{ "ToolTip", "The interactor that invoked this event. May be null if the interactor was deleted prior\nto this event being emitted (a common case is when the interactor deletes itself in response\nto a Select event - the following Hover/Normal/Disabled events will still be emitted.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Args_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * A struct that contains the previous EIsdkInteractorState as well as the new one established\n   * by this event\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractorState.h" },
		{ "ToolTip", "A struct that contains the previous EIsdkInteractorState as well as the new one established\nby this event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Args;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkInteractorStateEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractorStateEvent, Interactor), Z_Construct_UClass_UIsdkIInteractorState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interactor_MetaData), NewProp_Interactor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::NewProp_Args = { "Args", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkInteractorStateEvent, Args), Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Args_MetaData), NewProp_Args_MetaData) }; // 2163041558
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::NewProp_Args,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkInteractorStateEvent",
	Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::PropPointers),
	sizeof(FIsdkInteractorStateEvent),
	alignof(FIsdkInteractorStateEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent.InnerSingleton;
}
// ********** End ScriptStruct FIsdkInteractorStateEvent *******************************************

// ********** Begin Delegate FIsdkInteractorStateChanged *******************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms
	{
		FIsdkInteractorStateEvent InteractorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Interactor State Changed Delegate" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractorState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms, InteractorState), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorState_MetaData), NewProp_InteractorState_MetaData) }; // 2370767474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::NewProp_InteractorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkInteractorStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkInteractorStateChanged_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractorStateChanged, FIsdkInteractorStateEvent const& InteractorState)
{
	struct _Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms
	{
		FIsdkInteractorStateEvent InteractorState;
	};
	_Script_OculusInteraction_eventIsdkInteractorStateChanged_Parms Parms;
	Parms.InteractorState=InteractorState;
	IsdkInteractorStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkInteractorStateChanged *********************************************

// ********** Begin Interface UIsdkIInteractorState ************************************************
void UIsdkIInteractorState::StaticRegisterNativesUIsdkIInteractorState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkIInteractorState;
UClass* UIsdkIInteractorState::GetPrivateStaticClass()
{
	using TClass = UIsdkIInteractorState;
	if (!Z_Registration_Info_UClass_UIsdkIInteractorState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkIInteractorState"),
			Z_Registration_Info_UClass_UIsdkIInteractorState.InnerSingleton,
			StaticRegisterNativesUIsdkIInteractorState,
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
	return Z_Registration_Info_UClass_UIsdkIInteractorState.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister()
{
	return UIsdkIInteractorState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkIInteractorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkIInteractorState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsdkIInteractorState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkIInteractorState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIInteractorState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkIInteractorState_Statics::ClassParams = {
	&UIsdkIInteractorState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkIInteractorState_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkIInteractorState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkIInteractorState()
{
	if (!Z_Registration_Info_UClass_UIsdkIInteractorState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkIInteractorState.OuterSingleton, Z_Construct_UClass_UIsdkIInteractorState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkIInteractorState.OuterSingleton;
}
UIsdkIInteractorState::UIsdkIInteractorState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkIInteractorState);
// ********** End Interface UIsdkIInteractorState **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkInteractorStateEvent::StaticStruct, Z_Construct_UScriptStruct_FIsdkInteractorStateEvent_Statics::NewStructOps, TEXT("IsdkInteractorStateEvent"), &Z_Registration_Info_UScriptStruct_FIsdkInteractorStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkInteractorStateEvent), 2370767474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkIInteractorState, UIsdkIInteractorState::StaticClass, TEXT("UIsdkIInteractorState"), &Z_Registration_Info_UClass_UIsdkIInteractorState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkIInteractorState), 2285863047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_1654299301(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIInteractorState_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
