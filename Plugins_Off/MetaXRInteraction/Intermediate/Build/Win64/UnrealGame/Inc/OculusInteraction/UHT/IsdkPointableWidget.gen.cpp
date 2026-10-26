// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widget/IsdkPointableWidget.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPointableWidget() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableWidget();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableWidget_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPointableWidget Function HandleInteractionPointerEvent **************
struct Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics
{
	struct IsdkPointableWidget_eventHandleInteractionPointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointableWidget_eventHandleInteractionPointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointableWidget, nullptr, "HandleInteractionPointerEvent", Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::IsdkPointableWidget_eventHandleInteractionPointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::IsdkPointableWidget_eventHandleInteractionPointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointableWidget::execHandleInteractionPointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractionPointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointableWidget Function HandleInteractionPointerEvent ****************

// ********** Begin Class UIsdkPointableWidget Function Setup **************************************
struct Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics
{
	struct IsdkPointableWidget_eventSetup_Parms
	{
		UWidgetComponent* Widget;
		TScriptInterface<IIsdkIPointable> IPointable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_IPointable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointableWidget_eventSetup_Parms, Widget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::NewProp_IPointable = { "IPointable", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPointableWidget_eventSetup_Parms, IPointable), Z_Construct_UClass_UIsdkIPointable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::NewProp_IPointable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPointableWidget, nullptr, "Setup", Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::IsdkPointableWidget_eventSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::IsdkPointableWidget_eventSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPointableWidget_Setup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPointableWidget_Setup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPointableWidget::execSetup)
{
	P_GET_OBJECT(UWidgetComponent,Z_Param_Widget);
	P_GET_TINTERFACE(IIsdkIPointable,Z_Param_IPointable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Setup(Z_Param_Widget,Z_Param_IPointable);
	P_NATIVE_END;
}
// ********** End Class UIsdkPointableWidget Function Setup ****************************************

// ********** Begin Class UIsdkPointableWidget *****************************************************
void UIsdkPointableWidget::StaticRegisterNativesUIsdkPointableWidget()
{
	UClass* Class = UIsdkPointableWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInteractionPointerEvent", &UIsdkPointableWidget::execHandleInteractionPointerEvent },
		{ "Setup", &UIsdkPointableWidget::execSetup },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPointableWidget;
UClass* UIsdkPointableWidget::GetPrivateStaticClass()
{
	using TClass = UIsdkPointableWidget;
	if (!Z_Registration_Info_UClass_UIsdkPointableWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPointableWidget"),
			Z_Registration_Info_UClass_UIsdkPointableWidget.InnerSingleton,
			StaticRegisterNativesUIsdkPointableWidget,
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
	return Z_Registration_Info_UClass_UIsdkPointableWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPointableWidget_NoRegister()
{
	return UIsdkPointableWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPointableWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "DisplayName", "ISDK Pointable Widget" },
		{ "IncludePath", "Widget/IsdkPointableWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedWidget_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetEventDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Event Delegates\n" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
		{ "ToolTip", "Event Delegates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMoveTravelDistance_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopBroadcastOnDrag_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Widget/IsdkPointableWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_WidgetEventDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMoveTravelDistance;
	static void NewProp_bStopBroadcastOnDrag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopBroadcastOnDrag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPointableWidget_HandleInteractionPointerEvent, "HandleInteractionPointerEvent" }, // 771991510
		{ &Z_Construct_UFunction_UIsdkPointableWidget_Setup, "Setup" }, // 1696137865
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPointableWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_AttachedWidget = { "AttachedWidget", nullptr, (EPropertyFlags)0x011400000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointableWidget, AttachedWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedWidget_MetaData), NewProp_AttachedWidget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_WidgetEventDelegate = { "WidgetEventDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointableWidget, WidgetEventDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkWidgetEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetEventDelegate_MetaData), NewProp_WidgetEventDelegate_MetaData) }; // 1374277086
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_MinMoveTravelDistance = { "MinMoveTravelDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPointableWidget, MinMoveTravelDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMoveTravelDistance_MetaData), NewProp_MinMoveTravelDistance_MetaData) };
void Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_bStopBroadcastOnDrag_SetBit(void* Obj)
{
	((UIsdkPointableWidget*)Obj)->bStopBroadcastOnDrag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_bStopBroadcastOnDrag = { "bStopBroadcastOnDrag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkPointableWidget), &Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_bStopBroadcastOnDrag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopBroadcastOnDrag_MetaData), NewProp_bStopBroadcastOnDrag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPointableWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_AttachedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_WidgetEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_MinMoveTravelDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPointableWidget_Statics::NewProp_bStopBroadcastOnDrag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPointableWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPointableWidget_Statics::ClassParams = {
	&UIsdkPointableWidget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPointableWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableWidget_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPointableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPointableWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPointableWidget()
{
	if (!Z_Registration_Info_UClass_UIsdkPointableWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPointableWidget.OuterSingleton, Z_Construct_UClass_UIsdkPointableWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPointableWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPointableWidget);
UIsdkPointableWidget::~UIsdkPointableWidget() {}
// ********** End Class UIsdkPointableWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPointableWidget, UIsdkPointableWidget::StaticClass, TEXT("UIsdkPointableWidget"), &Z_Registration_Info_UClass_UIsdkPointableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPointableWidget), 3423563215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h__Script_OculusInteraction_3187887905(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
