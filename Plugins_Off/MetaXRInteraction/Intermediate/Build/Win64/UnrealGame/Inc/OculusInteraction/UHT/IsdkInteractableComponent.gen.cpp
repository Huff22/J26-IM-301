// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkInteractableComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInteractableComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractableState_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkInteractableComponent Function GetCurrentState **********************
struct Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics
{
	struct IsdkInteractableComponent_eventGetCurrentState_Parms
	{
		EIsdkInteractableState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the current state of this interactable as an enum\n   * @return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "@brief Returns the current state of this interactable as an enum\n@return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableComponent_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableComponent, nullptr, "GetCurrentState", Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::IsdkInteractableComponent_eventGetCurrentState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::IsdkInteractableComponent_eventGetCurrentState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableComponent::execGetCurrentState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkInteractableState*)Z_Param__Result=P_THIS->GetCurrentState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableComponent Function GetCurrentState ************************

// ********** Begin Class UIsdkInteractableComponent Function GetGameplayTagContainer_Implementation 
struct Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics
{
	struct IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms
	{
		FGameplayTagContainer ContainerOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the current GameplayTag container for this component. Implemented from\n   * interface\n   * @see IIsdkIGameplayTagContainer\n   * @param ContainerOut GameplayTag Container returned as reference.\n   * @return bool Whether or not the returned GameplayTag container is valid and/or contains tags.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "@brief Retrieves the current GameplayTag container for this component. Implemented from\ninterface\n@see IIsdkIGameplayTagContainer\n@param ContainerOut GameplayTag Container returned as reference.\n@return bool Whether or not the returned GameplayTag container is valid and/or contains tags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
void Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms), &Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableComponent, nullptr, "GetGameplayTagContainer_Implementation", Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::IsdkInteractableComponent_eventGetGameplayTagContainer_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableComponent::execGetGameplayTagContainer_Implementation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTagContainer_Implementation(Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableComponent Function GetGameplayTagContainer_Implementation *

// ********** Begin Class UIsdkInteractableComponent Function GetInteractableState *****************
struct Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics
{
	struct IsdkInteractableComponent_eventGetInteractableState_Parms
	{
		EIsdkInteractableState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK|Scene Interactable" },
		{ "Comment", "/**\n   * @brief Returns the current state of this interactable as an enum, implemented from interface,\n   * calls GetCurrentState()\n   * @see IIsdkIInteractableState\n   * @return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "@brief Returns the current state of this interactable as an enum, implemented from interface,\ncalls GetCurrentState()\n@see IIsdkIInteractableState\n@return EIsdkInteractableState Current state as an enum (Normal, Hover, Select or Disabled)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkInteractableComponent_eventGetInteractableState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(0, nullptr) }; // 932219690
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkInteractableComponent, nullptr, "GetInteractableState", Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::IsdkInteractableComponent_eventGetInteractableState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::IsdkInteractableComponent_eventGetInteractableState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkInteractableComponent::execGetInteractableState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkInteractableState*)Z_Param__Result=P_THIS->GetInteractableState();
	P_NATIVE_END;
}
// ********** End Class UIsdkInteractableComponent Function GetInteractableState *******************

// ********** Begin Class UIsdkInteractableComponent ***********************************************
void UIsdkInteractableComponent::StaticRegisterNativesUIsdkInteractableComponent()
{
	UClass* Class = UIsdkInteractableComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentState", &UIsdkInteractableComponent::execGetCurrentState },
		{ "GetGameplayTagContainer_Implementation", &UIsdkInteractableComponent::execGetGameplayTagContainer_Implementation },
		{ "GetInteractableState", &UIsdkInteractableComponent::execGetInteractableState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInteractableComponent;
UClass* UIsdkInteractableComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInteractableComponent;
	if (!Z_Registration_Info_UClass_UIsdkInteractableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInteractableComponent"),
			Z_Registration_Info_UClass_UIsdkInteractableComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInteractableComponent,
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
	return Z_Registration_Info_UClass_UIsdkInteractableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInteractableComponent_NoRegister()
{
	return UIsdkInteractableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInteractableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkInteractableComponent\n * @brief Abstract base class for interactables tracked by the API\n *\n * Scene component used as base class for interactable components tracked by the API. Provides\n * functions and methods for getting current state, delegates, querying relationships and\n * GameplayTag containers. Relationships are established between UIsdkInteractableComponents and\n * UIsdkInteractorComponents by WorldSubsystem and the API instance.\n *\n * @see IIsdkIGameplayTagContainer\n * @see IIsdkIInteractableState\n * @see UIsdkInteractorComponent\n * @addtogroup InteractionSDK\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkInteractableComponent.h" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "@class UIsdkInteractableComponent\n@brief Abstract base class for interactables tracked by the API\n\nScene component used as base class for interactable components tracked by the API. Provides\nfunctions and methods for getting current state, delegates, querying relationships and\nGameplayTag containers. Relationships are established between UIsdkInteractableComponents and\nUIsdkInteractorComponents by WorldSubsystem and the API instance.\n\n@see IIsdkIGameplayTagContainer\n@see IIsdkIInteractableState\n@see UIsdkInteractorComponent\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* GameplayTags used for labeling and driving interaction behavior. Returned by\n   IIsdkIGameplayTagContainer::GetGameplayTagContainer(). */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "GameplayTags used for labeling and driving interaction behavior. Returned by\n  IIsdkIGameplayTagContainer::GetGameplayTagContainer()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "BlueprintGetter", "GetCurrentState" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Current Interactable State */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "Current Interactable State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableStateChanged_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when the interactable state changes */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkInteractableComponent.h" },
		{ "ToolTip", "Delegate broadcast when the interactable state changes" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableTags;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractableStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkInteractableComponent_GetCurrentState, "GetCurrentState" }, // 2600530119
		{ &Z_Construct_UFunction_UIsdkInteractableComponent_GetGameplayTagContainer_Implementation, "GetGameplayTagContainer_Implementation" }, // 288478957
		{ &Z_Construct_UFunction_UIsdkInteractableComponent_GetInteractableState, "GetInteractableState" }, // 1717682801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_InteractableTags = { "InteractableTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableComponent, InteractableTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableTags_MetaData), NewProp_InteractableTags_MetaData) }; // 2104890724
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableComponent, CurrentState), Z_Construct_UEnum_OculusInteraction_EIsdkInteractableState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 932219690
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_InteractableStateChanged = { "InteractableStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInteractableComponent, InteractableStateChanged), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractableStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableStateChanged_MetaData), NewProp_InteractableStateChanged_MetaData) }; // 2951181339
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_InteractableTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInteractableComponent_Statics::NewProp_InteractableStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister, (int32)VTABLE_OFFSET(UIsdkInteractableComponent, IIsdkIGameplayTagContainer), false },  // 258907587
	{ Z_Construct_UClass_UIsdkIInteractableState_NoRegister, (int32)VTABLE_OFFSET(UIsdkInteractableComponent, IIsdkIInteractableState), false },  // 1311159171
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInteractableComponent_Statics::ClassParams = {
	&UIsdkInteractableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkInteractableComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInteractableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInteractableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInteractableComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInteractableComponent.OuterSingleton, Z_Construct_UClass_UIsdkInteractableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInteractableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInteractableComponent);
UIsdkInteractableComponent::~UIsdkInteractableComponent() {}
// ********** End Class UIsdkInteractableComponent *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInteractableComponent, UIsdkInteractableComponent::StaticClass, TEXT("UIsdkInteractableComponent"), &Z_Registration_Info_UClass_UIsdkInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInteractableComponent), 1770492048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h__Script_OculusInteraction_101773061(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkInteractableComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
