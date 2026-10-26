// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkRigModifier.h"
#include "GameplayTagContainer.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRigModifier() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRigModifier Function InitializeRigModifier **************************
struct IsdkRigModifier_eventInitializeRigModifier_Parms
{
	UIsdkRigComponent* CallingRigComponent;
};
static FName NAME_UIsdkRigModifier_InitializeRigModifier = FName(TEXT("InitializeRigModifier"));
void UIsdkRigModifier::InitializeRigModifier(UIsdkRigComponent* CallingRigComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UIsdkRigModifier_InitializeRigModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IsdkRigModifier_eventInitializeRigModifier_Parms Parms;
		Parms.CallingRigComponent=CallingRigComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeRigModifier_Implementation(CallingRigComponent);
	}
}
struct Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Called by the RigComponent during initialization (Implementable in Blueprint or C++)\n   * @param CallingRigComponent The Rig Component initializing this modifier\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "@brief Called by the RigComponent during initialization (Implementable in Blueprint or C++)\n@param CallingRigComponent The Rig Component initializing this modifier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::NewProp_CallingRigComponent = { "CallingRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigModifier_eventInitializeRigModifier_Parms, CallingRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingRigComponent_MetaData), NewProp_CallingRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::NewProp_CallingRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigModifier, nullptr, "InitializeRigModifier", Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::PropPointers), sizeof(IsdkRigModifier_eventInitializeRigModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkRigModifier_eventInitializeRigModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigModifier::execInitializeRigModifier)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_CallingRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeRigModifier_Implementation(Z_Param_CallingRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigModifier Function InitializeRigModifier ****************************

// ********** Begin Class UIsdkRigModifier Function ShutdownRigModifier ****************************
struct IsdkRigModifier_eventShutdownRigModifier_Parms
{
	UIsdkRigComponent* CallingRigComponent;
};
static FName NAME_UIsdkRigModifier_ShutdownRigModifier = FName(TEXT("ShutdownRigModifier"));
void UIsdkRigModifier::ShutdownRigModifier(UIsdkRigComponent* CallingRigComponent)
{
	UFunction* Func = FindFunctionChecked(NAME_UIsdkRigModifier_ShutdownRigModifier);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IsdkRigModifier_eventShutdownRigModifier_Parms Parms;
		Parms.CallingRigComponent=CallingRigComponent;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ShutdownRigModifier_Implementation(CallingRigComponent);
	}
}
struct Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Called by the RigComponent during EndPlay (Implementable in Blueprint or C++)\n   * @param CallingRigComponent The Rig Component shutting this down\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "@brief Called by the RigComponent during EndPlay (Implementable in Blueprint or C++)\n@param CallingRigComponent The Rig Component shutting this down" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingRigComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::NewProp_CallingRigComponent = { "CallingRigComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRigModifier_eventShutdownRigModifier_Parms, CallingRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingRigComponent_MetaData), NewProp_CallingRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::NewProp_CallingRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRigModifier, nullptr, "ShutdownRigModifier", Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::PropPointers), sizeof(IsdkRigModifier_eventShutdownRigModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(IsdkRigModifier_eventShutdownRigModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRigModifier::execShutdownRigModifier)
{
	P_GET_OBJECT(UIsdkRigComponent,Z_Param_CallingRigComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShutdownRigModifier_Implementation(Z_Param_CallingRigComponent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRigModifier Function ShutdownRigModifier ******************************

// ********** Begin Class UIsdkRigModifier *********************************************************
void UIsdkRigModifier::StaticRegisterNativesUIsdkRigModifier()
{
	UClass* Class = UIsdkRigModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeRigModifier", &UIsdkRigModifier::execInitializeRigModifier },
		{ "ShutdownRigModifier", &UIsdkRigModifier::execShutdownRigModifier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRigModifier;
UClass* UIsdkRigModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkRigModifier;
	if (!Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRigModifier"),
			Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton,
			StaticRegisterNativesUIsdkRigModifier,
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
	return Z_Registration_Info_UClass_UIsdkRigModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRigModifier_NoRegister()
{
	return UIsdkRigModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkRigModifier\n * @brief Abstract class that is intended to modify Rig Components based on certain conditions\n *\n * Can utilize passed in state events & GameplayTag matching to determine if RigModifier should\n * trigger, based on configuration\n * @see UIsdkRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
		{ "IncludePath", "Rig/IsdkRigModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "@class UIsdkRigModifier\n@brief Abstract class that is intended to modify Rig Components based on certain conditions\n\nCan utilize passed in state events & GameplayTag matching to determine if RigModifier should\ntrigger, based on configuration\n@see UIsdkRigComponent\n@addtogroup InteractionSDKPrebuilts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorStateTriggers_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Any state entry in this array will cause this modifier to trigger */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "Any state entry in this array will cause this modifier to trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorStateChangeTriggers_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Any state change entry in this array will cause this modifier to trigger */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "Any state change entry in this array will cause this modifier to trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInteractorGameplayTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Optional gameplay tags that must be on the interactor for this modifier to trigger */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "Optional gameplay tags that must be on the interactor for this modifier to trigger" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInteractableGameplayTags_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/** Optional gameplay tags that must be on the interactable for this modifier to trigger. Only\n   * grabbable components currently supported. */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "Optional gameplay tags that must be on the interactable for this modifier to trigger. Only\ngrabbable components currently supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentRigComponent_MetaData[] = {
		{ "Comment", "/** The Rig Component this RigModifier was spawned by. Set by the Rig Component during\n   * initialization*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkRigModifier.h" },
		{ "ToolTip", "The Rig Component this RigModifier was spawned by. Set by the Rig Component during\ninitialization" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractorStateTriggers_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractorStateTriggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractorStateTriggers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorStateChangeTriggers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InteractorStateChangeTriggers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInteractorGameplayTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredInteractableGameplayTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentRigComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRigModifier_InitializeRigModifier, "InitializeRigModifier" }, // 4090911309
		{ &Z_Construct_UFunction_UIsdkRigModifier_ShutdownRigModifier, "ShutdownRigModifier" }, // 1259872021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRigModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner = { "InteractorStateTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OculusInteraction_EIsdkInteractorState, METADATA_PARAMS(0, nullptr) }; // 2133851697
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers = { "InteractorStateTriggers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, InteractorStateTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorStateTriggers_MetaData), NewProp_InteractorStateTriggers_MetaData) }; // 2133851697
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers_Inner = { "InteractorStateChangeTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIsdkInteractorStateChangeArgs, METADATA_PARAMS(0, nullptr) }; // 2163041558
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers = { "InteractorStateChangeTriggers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, InteractorStateChangeTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorStateChangeTriggers_MetaData), NewProp_InteractorStateChangeTriggers_MetaData) }; // 2163041558
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractorGameplayTags = { "RequiredInteractorGameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, RequiredInteractorGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInteractorGameplayTags_MetaData), NewProp_RequiredInteractorGameplayTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractableGameplayTags = { "RequiredInteractableGameplayTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, RequiredInteractableGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredInteractableGameplayTags_MetaData), NewProp_RequiredInteractableGameplayTags_MetaData) }; // 2104890724
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_ParentRigComponent = { "ParentRigComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRigModifier, ParentRigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentRigComponent_MetaData), NewProp_ParentRigComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_InteractorStateChangeTriggers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractorGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_RequiredInteractableGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRigModifier_Statics::NewProp_ParentRigComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRigModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRigModifier_Statics::ClassParams = {
	&UIsdkRigModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRigModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRigModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRigModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton, Z_Construct_UClass_UIsdkRigModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRigModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRigModifier);
UIsdkRigModifier::~UIsdkRigModifier() {}
// ********** End Class UIsdkRigModifier ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRigModifier, UIsdkRigModifier::StaticClass, TEXT("UIsdkRigModifier"), &Z_Registration_Info_UClass_UIsdkRigModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRigModifier), 3583740920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_2044830870(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
