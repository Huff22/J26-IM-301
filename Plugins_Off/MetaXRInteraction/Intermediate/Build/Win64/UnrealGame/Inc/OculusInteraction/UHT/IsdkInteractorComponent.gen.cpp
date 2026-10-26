// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkInteractorComponent.h"
#include "GameplayTagContainer.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkInteractorBroadcastPointerEvent **********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms
	{
		FIsdkInteractionPointerEvent BroadcastPointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace isdk::api\n" },
		{ "DisplayName", "Interactor Broadcasted Pointer Event Delegate" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "namespace isdk::api" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastPointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BroadcastPointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::NewProp_BroadcastPointerEvent = { "BroadcastPointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms, BroadcastPointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastPointerEvent_MetaData), NewProp_BroadcastPointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::NewProp_BroadcastPointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkInteractorBroadcastPointerEvent__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::_Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkInteractorBroadcastPointerEvent_DelegateWrapper(const FMulticastScriptDelegate& IsdkInteractorBroadcastPointerEvent, FIsdkInteractionPointerEvent const& BroadcastPointerEvent)
{
	struct _Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms
	{
		FIsdkInteractionPointerEvent BroadcastPointerEvent;
	};
	_Script_OculusInteraction_eventIsdkInteractorBroadcastPointerEvent_Parms Parms;
	Parms.BroadcastPointerEvent=BroadcastPointerEvent;
	IsdkInteractorBroadcastPointerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FIsdkInteractorBroadcastPointerEvent ************************************

// ********** Begin Class UIsdkInteractorComponent Function GetCurrentState ************************
struct Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics
{
	struct IsdkInteractorComponent_eventGetCurrentState_Parms
	{
		EIsdkInteractorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the current state of this interactor as an enum\n   * @return EIsdkInteractorState Current state as an enum (Normal, Hover, Select or Disabled)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "@brief Returns the current state of this interactor as an enum\n@return EIsdkInteractorState Current state as an enum (Normal, Hover, Select or Disabled)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractorComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(0, nullptr) }; // 2133851697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractorComponent, nullptr, "GetCurrentState", Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::IsdkInteractorComponent_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::IsdkInteractorComponent_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractorComponent::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkInteractorState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractorComponent Function GetCurrentState **************************

// ********** Begin Class UIsdkInteractorComponent Function GetGameplayTagContainer_Implementation *
struct Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics
{
	struct IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms
	{
		FGameplayTagContainer ContainerOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the current GameplayTag container for this component. Implemented from\n   * interface\n   * @see IIsdkIGameplayTagContainer\n   * @param ContainerOut GameplayTag Container returned as reference.\n   * @return bool Whether or not the returned GameplayTag container is valid and/or contains tags.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "@brief Retrieves the current GameplayTag container for this component. Implemented from\ninterface\n@see IIsdkIGameplayTagContainer\n@param ContainerOut GameplayTag Container returned as reference.\n@return bool Whether or not the returned GameplayTag container is valid and/or contains tags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
void Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms), &Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractorComponent, nullptr, "GetGameplayTagContainer_Implementation", Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::IsdkInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractorComponent::execGetGameplayTagContainer_Implementation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTagContainer_Implementation(Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractorComponent Function GetGameplayTagContainer_Implementation ***

// ********** Begin Class UIsdkInteractorComponent *************************************************
void UIsdkInteractorComponent::StaticRegisterNativesUIsdkInteractorComponent()
{
	UClass* Class = UIsdkInteractorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &UIsdkInteractorComponent::execGetCurrentState },
		{ "GetGameplayTagContainer_Implementation", &UIsdkInteractorComponent::execGetGameplayTagContainer_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractorComponent;
UClass* UIsdkInteractorComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractorComponent;
	if (!Z_Registration_Info_UClass_UIsdkInteractorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractorComponent"),
			Z_Registration_Info_UClass_UIsdkInteractorComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInteractorComponent,
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
	return Z_Registration_Info_UClass_UIsdkInteractorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractorComponent_NoRegister()
{
	return UIsdkInteractorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkInteractorComponent\n * @brief Abstract base class for interactors tracked by the API\n *\n * Scene component used as base class for interactor components tracked by the API. Provides\n * functions and methods for getting current state, delegates, querying relationships and\n * GameplayTag containers. Relationships are established between UIsdkInteractableComponents and\n * UIsdkInteractorComponents by WorldSubsystem and the API instance.\n *\n * @see IIsdkIGameplayTagContainer\n * @see IIsdkIInteractorState\n * @see UIsdkInteractableComponent\n * @addtogroup InteractionSDK\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkInteractorComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "@class UIsdkInteractorComponent\n@brief Abstract base class for interactors tracked by the API\n\nScene component used as base class for interactor components tracked by the API. Provides\nfunctions and methods for getting current state, delegates, querying relationships and\nGameplayTag containers. Relationships are established between UIsdkInteractableComponents and\nUIsdkInteractorComponents by WorldSubsystem and the API instance.\n\n@see IIsdkIGameplayTagContainer\n@see IIsdkIInteractorState\n@see UIsdkInteractableComponent\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// GameplayTags used for labeling and driving interaction behavior. Returned by\n// IIsdkIGameplayTagContainer::GetGameplayTagContainer().\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "GameplayTags used for labeling and driving interaction behavior. Returned by\nIIsdkIGameplayTagContainer::GetGameplayTagContainer()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentState" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
		{ "ToolTip", "The current state of the interactor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorStateChanged_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Updated_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastPointerEventDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Updated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BroadcastPointerEventDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInteractorComponent_GetCurrentState, "GetCurrentState" }, // 3563975425
		{ &Z_Construct_UFunction_UIsdkInteractorComponent_GetGameplayTagContainer_Implementation, "GetGameplayTagContainer_Implementation" }, // 717702447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_InteractorTags = { "InteractorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractorComponent, InteractorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorTags_MetaData), NewProp_InteractorTags_MetaData) }; // 2104890724
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractorComponent, CurrentState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2133851697
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_InteractorStateChanged = { "InteractorStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractorComponent, InteractorStateChanged), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorStateChanged_MetaData), NewProp_InteractorStateChanged_MetaData) }; // 2377014833
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractorComponent, Updated), Z_Construct_UDelegateFunction_OculusInteraction_IsdkIUpdateEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Updated_MetaData), NewProp_Updated_MetaData) }; // 2920701220
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_BroadcastPointerEventDelegate = { "BroadcastPointerEventDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractorComponent, BroadcastPointerEventDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorBroadcastPointerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastPointerEventDelegate_MetaData), NewProp_BroadcastPointerEventDelegate_MetaData) }; // 454852297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInteractorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_InteractorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_InteractorStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_Updated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractorComponent_Statics::NewProp_BroadcastPointerEventDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInteractorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister, (int32)VTABLE_OFFSET(UIsdkInteractorComponent, IIsdkIGameplayTagContainer), false },  // 258907587
	{ Z_Construct_UClass_UIsdkIInteractorState_NoRegister, (int32)VTABLE_OFFSET(UIsdkInteractorComponent, IIsdkIInteractorState), false },  // 2285863047
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractorComponent_Statics::ClassParams = {
	&UIsdkInteractorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInteractorComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractorComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInteractorComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractorComponent.OuterSingleton, Z_Construct_UClass_UIsdkInteractorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInteractorComponent);
UIsdkInteractorComponent::~UIsdkInteractorComponent() {}
// ********** End Class UIsdkInteractorComponent ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractorComponent, UIsdkInteractorComponent::StaticClass, TEXT("UIsdkInteractorComponent"), &Z_Registration_Info_UClass_UIsdkInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractorComponent), 2163055674U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h__Script_OculusInteraction_3934217757(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractorComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
