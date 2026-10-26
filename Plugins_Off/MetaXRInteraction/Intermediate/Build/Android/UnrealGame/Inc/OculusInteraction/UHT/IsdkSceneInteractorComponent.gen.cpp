// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkSceneInteractorComponent.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkSceneInteractorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIInteractorState_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FSceneInteractorEnabledStateChanged ***********************************
struct Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics
{
	struct _Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms
	{
		UIsdkSceneInteractorComponent* Sender;
		bool NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sender;
	static void NewProp_NewState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms, Sender), Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sender_MetaData), NewProp_Sender_MetaData) };
void Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit(void* Obj)
{
	((_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms*)Obj)->NewState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms), &Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_Sender,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "SceneInteractorEnabledStateChanged__DelegateSignature", Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSceneInteractorEnabledStateChanged_DelegateWrapper(const FMulticastScriptDelegate& SceneInteractorEnabledStateChanged, UIsdkSceneInteractorComponent* Sender, bool NewState)
{
	struct _Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms
	{
		UIsdkSceneInteractorComponent* Sender;
		bool NewState;
	};
	_Script_OculusInteraction_eventSceneInteractorEnabledStateChanged_Parms Parms;
	Parms.Sender=Sender;
	Parms.NewState=NewState ? true : false;
	SceneInteractorEnabledStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSceneInteractorEnabledStateChanged *************************************

// ********** Begin Class UIsdkSceneInteractorComponent Function Disable ***************************
struct Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Disables this interactable component, broadcasts EnabledStateChangedDelegate\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@brief Disables this interactable component, broadcasts EnabledStateChangedDelegate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractorComponent, nullptr, "Disable", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractorComponent::execDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disable();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractorComponent Function Disable *****************************

// ********** Begin Class UIsdkSceneInteractorComponent Function Enable ****************************
struct Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Enables this interactable component, broadcasts EnabledStateChangedDelegate\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@brief Enables this interactable component, broadcasts EnabledStateChangedDelegate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractorComponent, nullptr, "Enable", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractorComponent::execEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Enable();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractorComponent Function Enable ******************************

// ********** Begin Class UIsdkSceneInteractorComponent Function GetGameplayTagContainer_Implementation 
struct Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics
{
	struct IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms
	{
		FGameplayTagContainer ContainerOut;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the current GameplayTag container for this component. Implemented from\n   * interface\n   * @see IIsdkIGameplayTagContainer\n   * @param ContainerOut GameplayTag Container returned as reference.\n   * @return bool Whether or not the returned GameplayTag container is valid and/or contains tags.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@brief Retrieves the current GameplayTag container for this component. Implemented from\ninterface\n@see IIsdkIGameplayTagContainer\n@param ContainerOut GameplayTag Container returned as reference.\n@return bool Whether or not the returned GameplayTag container is valid and/or contains tags." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContainerOut;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut = { "ContainerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms, ContainerOut), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 2104890724
void Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms), &Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ContainerOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractorComponent, nullptr, "GetGameplayTagContainer_Implementation", Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::IsdkSceneInteractorComponent_eventGetGameplayTagContainer_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractorComponent::execGetGameplayTagContainer_Implementation)
{
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ContainerOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTagContainer_Implementation(Z_Param_Out_ContainerOut);
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractorComponent Function GetGameplayTagContainer_Implementation 

// ********** Begin Class UIsdkSceneInteractorComponent Function GetInteractorState ****************
struct Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics
{
	struct IsdkSceneInteractorComponent_eventGetInteractorState_Parms
	{
		EIsdkInteractorState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK|Scene Interactor" },
		{ "Comment", "/**\n   * @brief Returns the current state of this interactor, driven by events, implemented from\n   * interface\n   * @see IIsdkIInteractorState\n   * @return EIsdkInteractorState Current state as an enum (Normal, Hover, Select or Disabled)\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@brief Returns the current state of this interactor, driven by events, implemented from\ninterface\n@see IIsdkIInteractorState\n@return EIsdkInteractorState Current state as an enum (Normal, Hover, Select or Disabled)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkSceneInteractorComponent_eventGetInteractorState_Parms, ReturnValue), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(0, nullptr) }; // 2133851697
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractorComponent, nullptr, "GetInteractorState", Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::IsdkSceneInteractorComponent_eventGetInteractorState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::IsdkSceneInteractorComponent_eventGetInteractorState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractorComponent::execGetInteractorState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EIsdkInteractorState*)Z_Param__Result=P_THIS->GetInteractorState();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractorComponent Function GetInteractorState ******************

// ********** Begin Class UIsdkSceneInteractorComponent Function IsEnabled *************************
struct Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics
{
	struct IsdkSceneInteractorComponent_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns whether or not this interactor component is currently enabled\n   * @return bool If this scene interactor component is enabled\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@brief Returns whether or not this interactor component is currently enabled\n@return bool If this scene interactor component is enabled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkSceneInteractorComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkSceneInteractorComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkSceneInteractorComponent, nullptr, "IsEnabled", Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::IsdkSceneInteractorComponent_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::IsdkSceneInteractorComponent_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkSceneInteractorComponent::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// ********** End Class UIsdkSceneInteractorComponent Function IsEnabled ***************************

// ********** Begin Class UIsdkSceneInteractorComponent ********************************************
void UIsdkSceneInteractorComponent::StaticRegisterNativesUIsdkSceneInteractorComponent()
{
	UClass* Class = UIsdkSceneInteractorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Disable", &UIsdkSceneInteractorComponent::execDisable },
		{ "Enable", &UIsdkSceneInteractorComponent::execEnable },
		{ "GetGameplayTagContainer_Implementation", &UIsdkSceneInteractorComponent::execGetGameplayTagContainer_Implementation },
		{ "GetInteractorState", &UIsdkSceneInteractorComponent::execGetInteractorState },
		{ "IsEnabled", &UIsdkSceneInteractorComponent::execIsEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkSceneInteractorComponent;
UClass* UIsdkSceneInteractorComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkSceneInteractorComponent;
	if (!Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkSceneInteractorComponent"),
			Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.InnerSingleton,
			StaticRegisterNativesUIsdkSceneInteractorComponent,
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
	return Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent_NoRegister()
{
	return UIsdkSceneInteractorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkSceneInteractorComponent\n * @brief Base class for interactors not tracked by the API\n *\n * Scene component used as base class for interactor components not being tracked by the API.\n * Provides functions and methods for getting current state, delegates, querying GameplayTag\n * containers.\n *\n * @see IIsdkIGameplayTagContainer\n * @see IIsdkIInteractorState\n * @see UIsdkSceneInteractableComponent\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Scene Interactor" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkSceneInteractorComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "@class UIsdkSceneInteractorComponent\n@brief Base class for interactors not tracked by the API\n\nScene component used as base class for interactor components not being tracked by the API.\nProvides functions and methods for getting current state, delegates, querying GameplayTag\ncontainers.\n\n@see IIsdkIGameplayTagContainer\n@see IIsdkIInteractorState\n@see UIsdkSceneInteractableComponent\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateChangedDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when the state of this interactor changes */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "Delegate broadcast when the state of this interactor changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledStateChangedDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Delegate broadcast when this interactor is enabled or disabled */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "Delegate broadcast when this interactor is enabled or disabled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// GameplayTags used for labeling and driving interaction behavior. Returned by\n// IIsdkIGameplayTagContainer::GetGameplayTagContainer().\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "GameplayTags used for labeling and driving interaction behavior. Returned by\nIIsdkIGameplayTagContainer::GetGameplayTagContainer()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
		{ "BlueprintGetter", "GetInteractorState" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The current interaction state of this interactable, driven by user events */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
		{ "ToolTip", "The current interaction state of this interactable, driven by user events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
		{ "BlueprintGetter", "IsEnabled" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkSceneInteractorComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_StateChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EnabledStateChangedDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static void NewProp_Enabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkSceneInteractorComponent_Disable, "Disable" }, // 3635644442
		{ &Z_Construct_UFunction_UIsdkSceneInteractorComponent_Enable, "Enable" }, // 3304991663
		{ &Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetGameplayTagContainer_Implementation, "GetGameplayTagContainer_Implementation" }, // 1131878053
		{ &Z_Construct_UFunction_UIsdkSceneInteractorComponent_GetInteractorState, "GetInteractorState" }, // 569787050
		{ &Z_Construct_UFunction_UIsdkSceneInteractorComponent_IsEnabled, "IsEnabled" }, // 2521989406
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkSceneInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_StateChangedDelegate = { "StateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractorComponent, StateChangedDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractorStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateChangedDelegate_MetaData), NewProp_StateChangedDelegate_MetaData) }; // 2377014833
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_EnabledStateChangedDelegate = { "EnabledStateChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractorComponent, EnabledStateChangedDelegate), Z_Construct_UDelegateFunction_OculusInteraction_SceneInteractorEnabledStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledStateChangedDelegate_MetaData), NewProp_EnabledStateChangedDelegate_MetaData) }; // 67020148
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_InteractorTags = { "InteractorTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractorComponent, InteractorTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorTags_MetaData), NewProp_InteractorTags_MetaData) }; // 2104890724
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractorComponent, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkSceneInteractorComponent, State), Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2133851697
void Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_Enabled_SetBit(void* Obj)
{
	((UIsdkSceneInteractorComponent*)Obj)->Enabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkSceneInteractorComponent), &Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enabled_MetaData), NewProp_Enabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_StateChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_EnabledStateChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_InteractorTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::NewProp_Enabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIGameplayTagContainer_NoRegister, (int32)VTABLE_OFFSET(UIsdkSceneInteractorComponent, IIsdkIGameplayTagContainer), false },  // 258907587
	{ Z_Construct_UClass_UIsdkIInteractorState_NoRegister, (int32)VTABLE_OFFSET(UIsdkSceneInteractorComponent, IIsdkIInteractorState), false },  // 2285863047
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::ClassParams = {
	&UIsdkSceneInteractorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.OuterSingleton, Z_Construct_UClass_UIsdkSceneInteractorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkSceneInteractorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkSceneInteractorComponent);
UIsdkSceneInteractorComponent::~UIsdkSceneInteractorComponent() {}
// ********** End Class UIsdkSceneInteractorComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkSceneInteractorComponent, UIsdkSceneInteractorComponent::StaticClass, TEXT("UIsdkSceneInteractorComponent"), &Z_Registration_Info_UClass_UIsdkSceneInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkSceneInteractorComponent), 3232070298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h__Script_OculusInteraction_2591160136(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkSceneInteractorComponent_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
