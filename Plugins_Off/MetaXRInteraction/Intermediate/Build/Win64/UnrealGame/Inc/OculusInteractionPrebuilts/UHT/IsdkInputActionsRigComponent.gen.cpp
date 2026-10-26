// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkInputActionsRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkInputActionsRigComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkInputActionsRigComponent ********************************************
void UIsdkInputActionsRigComponent::StaticRegisterNativesUIsdkInputActionsRigComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkInputActionsRigComponent;
UClass* UIsdkInputActionsRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkInputActionsRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkInputActionsRigComponent"),
			Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkInputActionsRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister()
{
	return UIsdkInputActionsRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Rig/IsdkInputActionsRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectStrengthAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabSelectAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabSelectStrengthAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinchGrabAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmGrabAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AButtonDownAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BButtonDownAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XButtonDownAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YButtonDownAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AButtonTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BButtonTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XButtonTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YButtonTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftMenuButtonDownAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFrontTriggerTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftFrontTriggerAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFrontTriggerTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightFrontTriggerAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftGripTriggerAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightGripTriggerAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickXAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftThumbstickYAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickXAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickYAxisAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftPanelTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightPanelTouchedAction_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Rig/IsdkInputActionsRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectStrengthAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabSelectAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabSelectStrengthAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinchGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PalmGrabAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AButtonDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BButtonDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XButtonDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YButtonDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AButtonTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BButtonTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_XButtonTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_YButtonTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftMenuButtonDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFrontTriggerTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFrontTriggerAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFrontTriggerTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFrontTriggerAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftGripTriggerAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightGripTriggerAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftThumbstickTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftThumbstickXAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftThumbstickYAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightThumbstickTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightThumbstickXAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightThumbstickYAxisAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftPanelTouchedAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightPanelTouchedAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkInputActionsRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_SelectAction = { "SelectAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, SelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectAction_MetaData), NewProp_SelectAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_SelectStrengthAction = { "SelectStrengthAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, SelectStrengthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectStrengthAction_MetaData), NewProp_SelectStrengthAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_GrabSelectAction = { "GrabSelectAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, GrabSelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabSelectAction_MetaData), NewProp_GrabSelectAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_GrabSelectStrengthAction = { "GrabSelectStrengthAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, GrabSelectStrengthAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabSelectStrengthAction_MetaData), NewProp_GrabSelectStrengthAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_PinchGrabAction = { "PinchGrabAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, PinchGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinchGrabAction_MetaData), NewProp_PinchGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_PalmGrabAction = { "PalmGrabAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, PalmGrabAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmGrabAction_MetaData), NewProp_PalmGrabAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_AButtonDownAction = { "AButtonDownAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, AButtonDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AButtonDownAction_MetaData), NewProp_AButtonDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_BButtonDownAction = { "BButtonDownAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, BButtonDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BButtonDownAction_MetaData), NewProp_BButtonDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_XButtonDownAction = { "XButtonDownAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, XButtonDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XButtonDownAction_MetaData), NewProp_XButtonDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_YButtonDownAction = { "YButtonDownAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, YButtonDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YButtonDownAction_MetaData), NewProp_YButtonDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_AButtonTouchedAction = { "AButtonTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, AButtonTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AButtonTouchedAction_MetaData), NewProp_AButtonTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_BButtonTouchedAction = { "BButtonTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, BButtonTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BButtonTouchedAction_MetaData), NewProp_BButtonTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_XButtonTouchedAction = { "XButtonTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, XButtonTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XButtonTouchedAction_MetaData), NewProp_XButtonTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_YButtonTouchedAction = { "YButtonTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, YButtonTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YButtonTouchedAction_MetaData), NewProp_YButtonTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftMenuButtonDownAction = { "LeftMenuButtonDownAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftMenuButtonDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftMenuButtonDownAction_MetaData), NewProp_LeftMenuButtonDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftFrontTriggerTouchedAction = { "LeftFrontTriggerTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftFrontTriggerTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFrontTriggerTouchedAction_MetaData), NewProp_LeftFrontTriggerTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftFrontTriggerAxisAction = { "LeftFrontTriggerAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftFrontTriggerAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftFrontTriggerAxisAction_MetaData), NewProp_LeftFrontTriggerAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightFrontTriggerTouchedAction = { "RightFrontTriggerTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightFrontTriggerTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFrontTriggerTouchedAction_MetaData), NewProp_RightFrontTriggerTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightFrontTriggerAxisAction = { "RightFrontTriggerAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightFrontTriggerAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightFrontTriggerAxisAction_MetaData), NewProp_RightFrontTriggerAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftGripTriggerAxisAction = { "LeftGripTriggerAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftGripTriggerAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftGripTriggerAxisAction_MetaData), NewProp_LeftGripTriggerAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightGripTriggerAxisAction = { "RightGripTriggerAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightGripTriggerAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightGripTriggerAxisAction_MetaData), NewProp_RightGripTriggerAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickTouchedAction = { "LeftThumbstickTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftThumbstickTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickTouchedAction_MetaData), NewProp_LeftThumbstickTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickXAxisAction = { "LeftThumbstickXAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftThumbstickXAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickXAxisAction_MetaData), NewProp_LeftThumbstickXAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickYAxisAction = { "LeftThumbstickYAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftThumbstickYAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftThumbstickYAxisAction_MetaData), NewProp_LeftThumbstickYAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickTouchedAction = { "RightThumbstickTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightThumbstickTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickTouchedAction_MetaData), NewProp_RightThumbstickTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickXAxisAction = { "RightThumbstickXAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightThumbstickXAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickXAxisAction_MetaData), NewProp_RightThumbstickXAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickYAxisAction = { "RightThumbstickYAxisAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightThumbstickYAxisAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightThumbstickYAxisAction_MetaData), NewProp_RightThumbstickYAxisAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftPanelTouchedAction = { "LeftPanelTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, LeftPanelTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftPanelTouchedAction_MetaData), NewProp_LeftPanelTouchedAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightPanelTouchedAction = { "RightPanelTouchedAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkInputActionsRigComponent, RightPanelTouchedAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightPanelTouchedAction_MetaData), NewProp_RightPanelTouchedAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_SelectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_SelectStrengthAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_GrabSelectAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_GrabSelectStrengthAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_PinchGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_PalmGrabAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_AButtonDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_BButtonDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_XButtonDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_YButtonDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_AButtonTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_BButtonTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_XButtonTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_YButtonTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftMenuButtonDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftFrontTriggerTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftFrontTriggerAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightFrontTriggerTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightFrontTriggerAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftGripTriggerAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightGripTriggerAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickXAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftThumbstickYAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickXAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightThumbstickYAxisAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_LeftPanelTouchedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::NewProp_RightPanelTouchedAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::ClassParams = {
	&UIsdkInputActionsRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkInputActionsRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkInputActionsRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkInputActionsRigComponent);
UIsdkInputActionsRigComponent::~UIsdkInputActionsRigComponent() {}
// ********** End Class UIsdkInputActionsRigComponent **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInputActionsRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkInputActionsRigComponent, UIsdkInputActionsRigComponent::StaticClass, TEXT("UIsdkInputActionsRigComponent"), &Z_Registration_Info_UClass_UIsdkInputActionsRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkInputActionsRigComponent), 571850908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInputActionsRigComponent_h__Script_OculusInteractionPrebuilts_1734603010(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInputActionsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkInputActionsRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
