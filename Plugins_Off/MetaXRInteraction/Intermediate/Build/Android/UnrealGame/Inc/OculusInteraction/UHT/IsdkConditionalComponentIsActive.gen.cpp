// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalComponentIsActive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalComponentIsActive() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalComponentIsActive Function GetComponent ******************
struct Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics
{
	struct IsdkConditionalComponentIsActive_eventGetComponent_Parms
	{
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the Actor Component the active state of which this conditional is watching\n   * @return UActorComponent* A pointer to the UActorComponent that was set to this conditional.\n   * This pointer is not validated.\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
		{ "ToolTip", "@brief Returns the Actor Component the active state of which this conditional is watching\n@return UActorComponent* A pointer to the UActorComponent that was set to this conditional.\nThis pointer is not validated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalComponentIsActive_eventGetComponent_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalComponentIsActive, nullptr, "GetComponent", Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::IsdkConditionalComponentIsActive_eventGetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::IsdkConditionalComponentIsActive_eventGetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalComponentIsActive::execGetComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=P_THIS->GetComponent();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalComponentIsActive Function GetComponent ********************

// ********** Begin Class UIsdkConditionalComponentIsActive Function HandleComponentActivated ******
struct Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics
{
	struct IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms
	{
		UActorComponent* Component;
		bool bReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static void NewProp_bReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
void Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_bReset_SetBit(void* Obj)
{
	((IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms*)Obj)->bReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms), &Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::NewProp_bReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalComponentIsActive, nullptr, "HandleComponentActivated", Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::IsdkConditionalComponentIsActive_eventHandleComponentActivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalComponentIsActive::execHandleComponentActivated)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_GET_UBOOL(Z_Param_bReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComponentActivated(Z_Param_Component,Z_Param_bReset);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalComponentIsActive Function HandleComponentActivated ********

// ********** Begin Class UIsdkConditionalComponentIsActive Function HandleComponentDeactivated ****
struct Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics
{
	struct IsdkConditionalComponentIsActive_eventHandleComponentDeactivated_Parms
	{
		UActorComponent* Component;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalComponentIsActive_eventHandleComponentDeactivated_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::NewProp_Component,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalComponentIsActive, nullptr, "HandleComponentDeactivated", Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::IsdkConditionalComponentIsActive_eventHandleComponentDeactivated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::IsdkConditionalComponentIsActive_eventHandleComponentDeactivated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalComponentIsActive::execHandleComponentDeactivated)
{
	P_GET_OBJECT(UActorComponent,Z_Param_Component);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleComponentDeactivated(Z_Param_Component);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalComponentIsActive Function HandleComponentDeactivated ******

// ********** Begin Class UIsdkConditionalComponentIsActive Function SetComponent ******************
struct Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics
{
	struct IsdkConditionalComponentIsActive_eventSetComponent_Parms
	{
		UActorComponent* InActorComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the Actor Component the active state of which this conditional should watch\n   * @param InActorComponent The new UActorComponent to watch for activation/deactivation events\n   *\n   * This method will remove any previous delegate hooks set on the previous ActorComponent (if\n   * present) before adding hooks for the new one. Delegate is hooked onto\n   * ActorComponent->OnComponentActivated and ActorComponent->OnComponentDeactivated, which will\n   * call HandleComponentActivated and HandleComponentDeactivated respectively.\n   *\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
		{ "ToolTip", "@brief Sets the Actor Component the active state of which this conditional should watch\n@param InActorComponent The new UActorComponent to watch for activation/deactivation events\n\nThis method will remove any previous delegate hooks set on the previous ActorComponent (if\npresent) before adding hooks for the new one. Delegate is hooked onto\nActorComponent->OnComponentActivated and ActorComponent->OnComponentDeactivated, which will\ncall HandleComponentActivated and HandleComponentDeactivated respectively." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::NewProp_InActorComponent = { "InActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalComponentIsActive_eventSetComponent_Parms, InActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InActorComponent_MetaData), NewProp_InActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::NewProp_InActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalComponentIsActive, nullptr, "SetComponent", Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::IsdkConditionalComponentIsActive_eventSetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::IsdkConditionalComponentIsActive_eventSetComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalComponentIsActive::execSetComponent)
{
	P_GET_OBJECT(UActorComponent,Z_Param_InActorComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetComponent(Z_Param_InActorComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalComponentIsActive Function SetComponent ********************

// ********** Begin Class UIsdkConditionalComponentIsActive ****************************************
void UIsdkConditionalComponentIsActive::StaticRegisterNativesUIsdkConditionalComponentIsActive()
{
	UClass* Class = UIsdkConditionalComponentIsActive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetComponent", &UIsdkConditionalComponentIsActive::execGetComponent },
		{ "HandleComponentActivated", &UIsdkConditionalComponentIsActive::execHandleComponentActivated },
		{ "HandleComponentDeactivated", &UIsdkConditionalComponentIsActive::execHandleComponentDeactivated },
		{ "SetComponent", &UIsdkConditionalComponentIsActive::execSetComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive;
UClass* UIsdkConditionalComponentIsActive::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalComponentIsActive;
	if (!Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalComponentIsActive"),
			Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalComponentIsActive,
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
	return Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister()
{
	return UIsdkConditionalComponentIsActive::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalComponentIsActive\n * @brief Watches an ActorComponents IsActive() flag, setting the state of this conditional to the\n * value of that flag.\n *\n * After an ActorComponent is set on this Conditional, it will change the resolved value of its\n * stored conditional to whether or not that component is active, keyed from the events generated\n * when the component is activated/deactivated\n *\n * @see UIsdkConditional\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalComponentIsActive.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
		{ "ToolTip", "@class UIsdkConditionalComponentIsActive\n@brief Watches an ActorComponents IsActive() flag, setting the state of this conditional to the\nvalue of that flag.\n\nAfter an ActorComponent is set on this Conditional, it will change the resolved value of its\nstored conditional to whether or not that component is active, keyed from the events generated\nwhen the component is activated/deactivated\n\n@see UIsdkConditional\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[] = {
		{ "BlueprintGetter", "GetComponent" },
		{ "BlueprintSetter", "SetComponent" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalComponentIsActive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConditionalComponentIsActive_GetComponent, "GetComponent" }, // 4257686787
		{ &Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentActivated, "HandleComponentActivated" }, // 2177262200
		{ &Z_Construct_UFunction_UIsdkConditionalComponentIsActive_HandleComponentDeactivated, "HandleComponentDeactivated" }, // 678088760
		{ &Z_Construct_UFunction_UIsdkConditionalComponentIsActive_SetComponent, "SetComponent" }, // 4014537890
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalComponentIsActive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkConditionalComponentIsActive, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorComponent_MetaData), NewProp_ActorComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::NewProp_ActorComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditional,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::ClassParams = {
	&UIsdkConditionalComponentIsActive::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.OuterSingleton, Z_Construct_UClass_UIsdkConditionalComponentIsActive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalComponentIsActive);
UIsdkConditionalComponentIsActive::~UIsdkConditionalComponentIsActive() {}
// ********** End Class UIsdkConditionalComponentIsActive ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalComponentIsActive, UIsdkConditionalComponentIsActive::StaticClass, TEXT("UIsdkConditionalComponentIsActive"), &Z_Registration_Info_UClass_UIsdkConditionalComponentIsActive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalComponentIsActive), 3507339955U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h__Script_OculusInteraction_3174823846(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalComponentIsActive_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
