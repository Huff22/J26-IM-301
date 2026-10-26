// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkPokeButtonVisual.h"
#include "Interaction/IsdkIInteractableState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPokeButtonVisual() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeButtonVisual();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPokeButtonVisual Function GetPokeInteractable ***********************
struct Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics
{
	struct IsdkPokeButtonVisual_eventGetPokeInteractable_Parms
	{
		UIsdkPokeInteractable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the UIsdkPokeInteractable associated with this Visual\n   * @return UIsdkPokeInteractable* The Poke Interactable that this visual element is intended to\n   * represent\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
		{ "ToolTip", "@brief Returns the UIsdkPokeInteractable associated with this Visual\n@return UIsdkPokeInteractable* The Poke Interactable that this visual element is intended to\nrepresent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeButtonVisual_eventGetPokeInteractable_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeButtonVisual, nullptr, "GetPokeInteractable", Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::IsdkPokeButtonVisual_eventGetPokeInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::IsdkPokeButtonVisual_eventGetPokeInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeButtonVisual::execGetPokeInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractable**)Z_Param__Result=P_THIS->GetPokeInteractable();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeButtonVisual Function GetPokeInteractable *************************

// ********** Begin Class UIsdkPokeButtonVisual Function HandleInteractableStateChanged ************
struct Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics
{
	struct IsdkPokeButtonVisual_eventHandleInteractableStateChanged_Parms
	{
		FIsdkInteractableStateEvent Event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeButtonVisual_eventHandleInteractableStateChanged_Parms, Event), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) }; // 138227056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeButtonVisual, nullptr, "HandleInteractableStateChanged", Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::IsdkPokeButtonVisual_eventHandleInteractableStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::IsdkPokeButtonVisual_eventHandleInteractableStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeButtonVisual::execHandleInteractableStateChanged)
{
	P_GET_STRUCT_REF(FIsdkInteractableStateEvent,Z_Param_Out_Event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractableStateChanged(Z_Param_Out_Event);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeButtonVisual Function HandleInteractableStateChanged **************

// ********** Begin Class UIsdkPokeButtonVisual Function HandleWorldFrameFinishedEvent *************
struct Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeButtonVisual, nullptr, "HandleWorldFrameFinishedEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeButtonVisual::execHandleWorldFrameFinishedEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWorldFrameFinishedEvent();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeButtonVisual Function HandleWorldFrameFinishedEvent ***************

// ********** Begin Class UIsdkPokeButtonVisual Function HandleWorldFrameStartedEvent **************
struct Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeButtonVisual, nullptr, "HandleWorldFrameStartedEvent", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeButtonVisual::execHandleWorldFrameStartedEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWorldFrameStartedEvent();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeButtonVisual Function HandleWorldFrameStartedEvent ****************

// ********** Begin Class UIsdkPokeButtonVisual Function SetPokeInteractable ***********************
struct Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics
{
	struct IsdkPokeButtonVisual_eventSetPokeInteractable_Parms
	{
		UIsdkPokeInteractable* InPokeInteractable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the UIsdkPokeInteractable associated with this Visual\n   * @param InPokeInteractable The Poke Interactable that this visual element is intended to\n   * represent\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
		{ "ToolTip", "@brief Sets the UIsdkPokeInteractable associated with this Visual\n@param InPokeInteractable The Poke Interactable that this visual element is intended to\nrepresent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPokeInteractable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPokeInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::NewProp_InPokeInteractable = { "InPokeInteractable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeButtonVisual_eventSetPokeInteractable_Parms, InPokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPokeInteractable_MetaData), NewProp_InPokeInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::NewProp_InPokeInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeButtonVisual, nullptr, "SetPokeInteractable", Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::IsdkPokeButtonVisual_eventSetPokeInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::IsdkPokeButtonVisual_eventSetPokeInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeButtonVisual::execSetPokeInteractable)
{
	P_GET_OBJECT(UIsdkPokeInteractable,Z_Param_InPokeInteractable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPokeInteractable(Z_Param_InPokeInteractable);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeButtonVisual Function SetPokeInteractable *************************

// ********** Begin Class UIsdkPokeButtonVisual ****************************************************
void UIsdkPokeButtonVisual::StaticRegisterNativesUIsdkPokeButtonVisual()
{
	UClass* Class = UIsdkPokeButtonVisual::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPokeInteractable", &UIsdkPokeButtonVisual::execGetPokeInteractable },
		{ "HandleInteractableStateChanged", &UIsdkPokeButtonVisual::execHandleInteractableStateChanged },
		{ "HandleWorldFrameFinishedEvent", &UIsdkPokeButtonVisual::execHandleWorldFrameFinishedEvent },
		{ "HandleWorldFrameStartedEvent", &UIsdkPokeButtonVisual::execHandleWorldFrameStartedEvent },
		{ "SetPokeInteractable", &UIsdkPokeButtonVisual::execSetPokeInteractable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeButtonVisual;
UClass* UIsdkPokeButtonVisual::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeButtonVisual;
	if (!Z_Registration_Info_UClass_UIsdkPokeButtonVisual.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeButtonVisual"),
			Z_Registration_Info_UClass_UIsdkPokeButtonVisual.InnerSingleton,
			StaticRegisterNativesUIsdkPokeButtonVisual,
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
	return Z_Registration_Info_UClass_UIsdkPokeButtonVisual.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeButtonVisual_NoRegister()
{
	return UIsdkPokeButtonVisual::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeButtonVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkPokeButtonVisual\n * @brief SceneComponent representing the visual element of a button that responds to Poke\n * Interactions, must be paired with a PokeInteractable.\n *\n * @see UIsdkPokeInteractable\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Poke Button Visual" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkPokeButtonVisual.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
		{ "ToolTip", "@class UIsdkPokeButtonVisual\n@brief SceneComponent representing the visual element of a button that responds to Poke\nInteractions, must be paired with a PokeInteractable.\n\n@see UIsdkPokeInteractable\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractable_MetaData[] = {
		{ "BlueprintGetter", "GetPokeInteractable" },
		{ "BlueprintSetter", "SetPokeInteractable" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* The UIsdkPokeInteractable associated with this Visual */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeButtonVisual.h" },
		{ "ToolTip", "The UIsdkPokeInteractable associated with this Visual" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteractable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeButtonVisual_GetPokeInteractable, "GetPokeInteractable" }, // 1412212922
		{ &Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleInteractableStateChanged, "HandleInteractableStateChanged" }, // 1542278090
		{ &Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameFinishedEvent, "HandleWorldFrameFinishedEvent" }, // 1206444678
		{ &Z_Construct_UFunction_UIsdkPokeButtonVisual_HandleWorldFrameStartedEvent, "HandleWorldFrameStartedEvent" }, // 3123517129
		{ &Z_Construct_UFunction_UIsdkPokeButtonVisual_SetPokeInteractable, "SetPokeInteractable" }, // 3792908835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeButtonVisual>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::NewProp_PokeInteractable = { "PokeInteractable", nullptr, (EPropertyFlags)0x004000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeButtonVisual, PokeInteractable), Z_Construct_UClass_UIsdkPokeInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractable_MetaData), NewProp_PokeInteractable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::NewProp_PokeInteractable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::ClassParams = {
	&UIsdkPokeButtonVisual::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeButtonVisual()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeButtonVisual.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeButtonVisual.OuterSingleton, Z_Construct_UClass_UIsdkPokeButtonVisual_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeButtonVisual.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeButtonVisual);
UIsdkPokeButtonVisual::~UIsdkPokeButtonVisual() {}
// ********** End Class UIsdkPokeButtonVisual ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeButtonVisual, UIsdkPokeButtonVisual::StaticClass, TEXT("UIsdkPokeButtonVisual"), &Z_Registration_Info_UClass_UIsdkPokeButtonVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeButtonVisual), 430675950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h__Script_OculusInteraction_1210203434(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeButtonVisual_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
