// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkHideVisualRigModifier.h"
#include "Interaction/IsdkIInteractorState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHideVisualRigModifier() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHideVisualRigModifier();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHideVisualRigModifier_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigModifier();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHideVisualRigModifier Function HandleInteractorStateEvent ***********
struct Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics
{
	struct IsdkHideVisualRigModifier_eventHandleInteractorStateEvent_Parms
	{
		FIsdkInteractorStateEvent StateEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/* The handler for the state event delegate that the Interactors will be firing, used for\n   * comparing requirements for triggering. */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHideVisualRigModifier.h" },
		{ "ToolTip", "The handler for the state event delegate that the Interactors will be firing, used for\n  * comparing requirements for triggering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::NewProp_StateEvent = { "StateEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkHideVisualRigModifier_eventHandleInteractorStateEvent_Parms, StateEvent), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateEvent_MetaData), NewProp_StateEvent_MetaData) }; // 2370767474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::NewProp_StateEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkHideVisualRigModifier, nullptr, "HandleInteractorStateEvent", Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::IsdkHideVisualRigModifier_eventHandleInteractorStateEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::IsdkHideVisualRigModifier_eventHandleInteractorStateEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkHideVisualRigModifier::execHandleInteractorStateEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractorStateEvent,Z_Param_Out_StateEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractorStateEvent(Z_Param_Out_StateEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkHideVisualRigModifier Function HandleInteractorStateEvent *************

// ********** Begin Class UIsdkHideVisualRigModifier ***********************************************
void UIsdkHideVisualRigModifier::StaticRegisterNativesUIsdkHideVisualRigModifier()
{
	UClass* Class = UIsdkHideVisualRigModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInteractorStateEvent", &UIsdkHideVisualRigModifier::execHandleInteractorStateEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHideVisualRigModifier;
UClass* UIsdkHideVisualRigModifier::GetPrivateStaticClass()
{
	using TClass = UIsdkHideVisualRigModifier;
	if (!Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHideVisualRigModifier"),
			Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.InnerSingleton,
			StaticRegisterNativesUIsdkHideVisualRigModifier,
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
	return Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHideVisualRigModifier_NoRegister()
{
	return UIsdkHideVisualRigModifier::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/*\n  A Prebuilt Rig Modifier that will hide the visual (hands or controller) of a RigComponent if the\n  trigger conditions are met. Does not currently support checking gameplay tags on poke & ray\n  interactables.\n*/" },
		{ "IncludePath", "Rig/IsdkHideVisualRigModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHideVisualRigModifier.h" },
		{ "ToolTip", "A Prebuilt Rig Modifier that will hide the visual (hands or controller) of a RigComponent if the\ntrigger conditions are met. Does not currently support checking gameplay tags on poke & ray\ninteractables." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualHideConditional_MetaData[] = {
		{ "Comment", "/* The conditional we add to the ConditionalGroup on the Visual Component.*/" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHideVisualRigModifier.h" },
		{ "ToolTip", "The conditional we add to the ConditionalGroup on the Visual Component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTriggeringInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkHideVisualRigModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VisualHideConditional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastTriggeringInteractor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkHideVisualRigModifier_HandleInteractorStateEvent, "HandleInteractorStateEvent" }, // 1618383513
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHideVisualRigModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::NewProp_VisualHideConditional = { "VisualHideConditional", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHideVisualRigModifier, VisualHideConditional), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualHideConditional_MetaData), NewProp_VisualHideConditional_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::NewProp_LastTriggeringInteractor = { "LastTriggeringInteractor", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkHideVisualRigModifier, LastTriggeringInteractor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTriggeringInteractor_MetaData), NewProp_LastTriggeringInteractor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::NewProp_VisualHideConditional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::NewProp_LastTriggeringInteractor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::ClassParams = {
	&UIsdkHideVisualRigModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHideVisualRigModifier()
{
	if (!Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.OuterSingleton, Z_Construct_UClass_UIsdkHideVisualRigModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHideVisualRigModifier.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHideVisualRigModifier);
UIsdkHideVisualRigModifier::~UIsdkHideVisualRigModifier() {}
// ********** End Class UIsdkHideVisualRigModifier *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHideVisualRigModifier_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHideVisualRigModifier, UIsdkHideVisualRigModifier::StaticClass, TEXT("UIsdkHideVisualRigModifier"), &Z_Registration_Info_UClass_UIsdkHideVisualRigModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHideVisualRigModifier), 785833101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHideVisualRigModifier_h__Script_OculusInteractionPrebuilts_2023200128(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHideVisualRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkHideVisualRigModifier_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
