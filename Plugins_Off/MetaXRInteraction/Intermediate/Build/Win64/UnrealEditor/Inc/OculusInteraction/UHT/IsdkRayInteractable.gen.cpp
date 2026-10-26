// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkRayInteractable.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRayInteractable() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurface_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayInteractable Function GetSelectSurface ***************************
struct Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics
{
	struct IsdkRayInteractable_eventGetSelectSurface_Parms
	{
		TScriptInterface<IIsdkISurface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the selecting surface implementing IIsdkISurface that this Interactable is associated\n   * with */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "Returns the selecting surface implementing IIsdkISurface that this Interactable is associated\n  * with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractable_eventGetSelectSurface_Parms, ReturnValue), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractable, nullptr, "GetSelectSurface", Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::IsdkRayInteractable_eventGetSelectSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::IsdkRayInteractable_eventGetSelectSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractable::execGetSelectSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkISurface>*)Z_Param__Result=P_THIS->GetSelectSurface();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractable Function GetSelectSurface *****************************

// ********** Begin Class UIsdkRayInteractable Function GetSurface *********************************
struct Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics
{
	struct IsdkRayInteractable_eventGetSurface_Parms
	{
		TScriptInterface<IIsdkISurface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the surface implementing IIsdkISurface that this Interactable is associated with */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "Returns the surface implementing IIsdkISurface that this Interactable is associated with" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractable_eventGetSurface_Parms, ReturnValue), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractable, nullptr, "GetSurface", Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::IsdkRayInteractable_eventGetSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::IsdkRayInteractable_eventGetSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractable_GetSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractable_GetSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractable::execGetSurface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkISurface>*)Z_Param__Result=P_THIS->GetSurface();
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractable Function GetSurface ***********************************

// ********** Begin Class UIsdkRayInteractable Function HandlePointerEvent *************************
struct Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics
{
	struct IsdkRayInteractable_eventHandlePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractable_eventHandlePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractable, nullptr, "HandlePointerEvent", Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::IsdkRayInteractable_eventHandlePointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::IsdkRayInteractable_eventHandlePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractable::execHandlePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractable Function HandlePointerEvent ***************************

// ********** Begin Class UIsdkRayInteractable Function SetSelectSurface ***************************
struct Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics
{
	struct IsdkRayInteractable_eventSetSelectSurface_Parms
	{
		TScriptInterface<IIsdkISurface> InSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the selecting surface implementing IIsdkISurface that this Interactable should be\n   * associated with */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "Sets the selecting surface implementing IIsdkISurface that this Interactable should be\n  * associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSurface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::NewProp_InSurface = { "InSurface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractable_eventSetSelectSurface_Parms, InSurface), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSurface_MetaData), NewProp_InSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::NewProp_InSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractable, nullptr, "SetSelectSurface", Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::IsdkRayInteractable_eventSetSelectSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::IsdkRayInteractable_eventSetSelectSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractable::execSetSelectSurface)
{
	P_GET_TINTERFACE_REF(IIsdkISurface,Z_Param_Out_InSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectSurface(Z_Param_Out_InSurface);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractable Function SetSelectSurface *****************************

// ********** Begin Class UIsdkRayInteractable Function SetSurface *********************************
struct Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics
{
	struct IsdkRayInteractable_eventSetSurface_Parms
	{
		TScriptInterface<IIsdkISurface> InSurface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the surface implementing IIsdkISurface that this Interactable should be associated with */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "Sets the surface implementing IIsdkISurface that this Interactable should be associated with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSurface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::NewProp_InSurface = { "InSurface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayInteractable_eventSetSurface_Parms, InSurface), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSurface_MetaData), NewProp_InSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::NewProp_InSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayInteractable, nullptr, "SetSurface", Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::IsdkRayInteractable_eventSetSurface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::IsdkRayInteractable_eventSetSurface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayInteractable_SetSurface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayInteractable_SetSurface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayInteractable::execSetSurface)
{
	P_GET_TINTERFACE_REF(IIsdkISurface,Z_Param_Out_InSurface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurface(Z_Param_Out_InSurface);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayInteractable Function SetSurface ***********************************

// ********** Begin Class UIsdkRayInteractable *****************************************************
void UIsdkRayInteractable::StaticRegisterNativesUIsdkRayInteractable()
{
	UClass* Class = UIsdkRayInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSelectSurface", &UIsdkRayInteractable::execGetSelectSurface },
		{ "GetSurface", &UIsdkRayInteractable::execGetSurface },
		{ "HandlePointerEvent", &UIsdkRayInteractable::execHandlePointerEvent },
		{ "SetSelectSurface", &UIsdkRayInteractable::execSetSelectSurface },
		{ "SetSurface", &UIsdkRayInteractable::execSetSurface },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayInteractable;
UClass* UIsdkRayInteractable::GetPrivateStaticClass()
{
	using TClass = UIsdkRayInteractable;
	if (!Z_Registration_Info_UClass_UIsdkRayInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRayInteractable"),
			Z_Registration_Info_UClass_UIsdkRayInteractable.InnerSingleton,
			StaticRegisterNativesUIsdkRayInteractable,
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
	return Z_Registration_Info_UClass_UIsdkRayInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister()
{
	return UIsdkRayInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * IsdkRayInteractable drives the ability for an actor to be pointed at with a directed hand raycast\n * or cursor. It is expected to be interacted with by a IsdkRayInteractor on the player pawn.\n */" },
		{ "DisplayName", "ISDK Ray Interactable" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkRayInteractable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "IsdkRayInteractable drives the ability for an actor to be pointed at with a directed hand raycast\nor cursor. It is expected to be interacted with by a IsdkRayInteractor on the player pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorPointerEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Event for PointerEvents\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
		{ "ToolTip", "Event for PointerEvents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[] = {
		{ "BlueprintGetter", "GetSurface" },
		{ "BlueprintSetter", "SetSurface" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectSurface_MetaData[] = {
		{ "BlueprintGetter", "GetSelectSurface" },
		{ "BlueprintSetter", "SetSelectSurface" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkRayInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorPointerEvent;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Surface;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SelectSurface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRayInteractable_GetSelectSurface, "GetSelectSurface" }, // 3604744628
		{ &Z_Construct_UFunction_UIsdkRayInteractable_GetSurface, "GetSurface" }, // 359689964
		{ &Z_Construct_UFunction_UIsdkRayInteractable_HandlePointerEvent, "HandlePointerEvent" }, // 1590843899
		{ &Z_Construct_UFunction_UIsdkRayInteractable_SetSelectSurface, "SetSelectSurface" }, // 1004309245
		{ &Z_Construct_UFunction_UIsdkRayInteractable_SetSurface, "SetSurface" }, // 1226733911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_InteractorPointerEvent = { "InteractorPointerEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractable, InteractorPointerEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorPointerEvent_MetaData), NewProp_InteractorPointerEvent_MetaData) }; // 3986831945
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractable, Surface), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Surface_MetaData), NewProp_Surface_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_SelectSurface = { "SelectSurface", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRayInteractable, SelectSurface), Z_Construct_UClass_UIsdkISurface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectSurface_MetaData), NewProp_SelectSurface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRayInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_InteractorPointerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_Surface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRayInteractable_Statics::NewProp_SelectSurface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRayInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkInteractableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkRayInteractable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPointable_NoRegister, (int32)VTABLE_OFFSET(UIsdkRayInteractable, IIsdkIPointable), false },  // 4279697062
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayInteractable_Statics::ClassParams = {
	&UIsdkRayInteractable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkRayInteractable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRayInteractable()
{
	if (!Z_Registration_Info_UClass_UIsdkRayInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayInteractable.OuterSingleton, Z_Construct_UClass_UIsdkRayInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayInteractable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRayInteractable);
UIsdkRayInteractable::~UIsdkRayInteractable() {}
// ********** End Class UIsdkRayInteractable *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayInteractable, UIsdkRayInteractable::StaticClass, TEXT("UIsdkRayInteractable"), &Z_Registration_Info_UClass_UIsdkRayInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayInteractable), 3533642836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h__Script_OculusInteraction_2148726008(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkRayInteractable_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
