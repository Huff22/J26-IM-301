// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkRuntimeSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRuntimeSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_USubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRuntimeSettings();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRuntimeSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRuntimeSettings *****************************************************
void UIsdkRuntimeSettings::StaticRegisterNativesUIsdkRuntimeSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRuntimeSettings;
UClass* UIsdkRuntimeSettings::GetPrivateStaticClass()
{
	using TClass = UIsdkRuntimeSettings;
	if (!Z_Registration_Info_UClass_UIsdkRuntimeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRuntimeSettings"),
			Z_Registration_Info_UClass_UIsdkRuntimeSettings.InnerSingleton,
			StaticRegisterNativesUIsdkRuntimeSettings,
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
	return Z_Registration_Info_UClass_UIsdkRuntimeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRuntimeSettings_NoRegister()
{
	return UIsdkRuntimeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRuntimeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the ISDK MetaXR plugin.\n */" },
		{ "DisplayName", "Meta XR - Interaction" },
		{ "IncludePath", "IsdkRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the ISDK MetaXR plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledTrackingDataSubsystems_MetaData[] = {
		{ "Category", "Tracking Data" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "MustImplement", "/Script/OculusInteraction.IsdkITrackingDataSubsystem" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorColorNormal_MetaData[] = {
		{ "Category", "Debug | Interactors" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Normal\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Normal Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Normal\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorColorHover_MetaData[] = {
		{ "Category", "Debug | Interactors" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Hover\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Hover Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Hover\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorColorSelect_MetaData[] = {
		{ "Category", "Debug | Interactors" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Select\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Select Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Select\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorColorDisabled_MetaData[] = {
		{ "Category", "Debug | Interactors" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Disabled\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Disabled Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Disabled\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableColorNormal_MetaData[] = {
		{ "Category", "Debug | Interactables" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Normal\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Normal Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Normal\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableColorHover_MetaData[] = {
		{ "Category", "Debug | Interactables" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Hover\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Hover Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Hover\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableColorSelect_MetaData[] = {
		{ "Category", "Debug | Interactables" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Select\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Select Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Select\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableColorDisabled_MetaData[] = {
		{ "Category", "Debug | Interactables" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Disabled\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Disabled Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Disabled\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventColorHover_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Hover\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Hover Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Hover\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventColorSelect_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Select\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Select Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Select\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventColorUnselect_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Unselect\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Unselect Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Unselect\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventColorCancel_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Cancel\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Cancel Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Cancel\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventColorUnhover_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * What color to display when an interactor is in a \"Unhover\" state.\n   * Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Unhover Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "What color to display when an interactor is in a \"Unhover\" state.\nUsed when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventDebugRadius_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * Pointer events render as spheres when debug drawn.  This settings drives the radius of these\n   * spheres.  Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled.\n   */" },
		{ "DisplayName", "Debug Radius" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "Pointer events render as spheres when debug drawn.  This settings drives the radius of these\nspheres.  Used when Meta.InteractionSDK.DebugInteractionVisuals console variable is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEventDebugDuration_MetaData[] = {
		{ "Category", "Debug | Pointer Events" },
		{ "Comment", "/**\n   * How long to display debug pointer events\n   */" },
		{ "DisplayName", "Duration" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "How long to display debug pointer events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandDebugColor_MetaData[] = {
		{ "Category", "Debug | Hand" },
		{ "Comment", "/**\n   * The color to use for drawing hand bones when Meta.InteractionSDK.DebugHandVisuals is enabled.\n   */" },
		{ "DisplayName", "Hand Bone Color" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "The color to use for drawing hand bones when Meta.InteractionSDK.DebugHandVisuals is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandDebugThickness_MetaData[] = {
		{ "Category", "Debug | Hand" },
		{ "Comment", "/**\n   * The thickness to use for drawing hand bones when Meta.InteractionSDK.DebugHandVisuals is\n   * enabled.\n   */" },
		{ "DisplayName", "Hand Bone Thickness" },
		{ "ModuleRelativePath", "Public/IsdkRuntimeSettings.h" },
		{ "ToolTip", "The thickness to use for drawing hand bones when Meta.InteractionSDK.DebugHandVisuals is\nenabled." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DisabledTrackingDataSubsystems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledTrackingDataSubsystems;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorColorNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorColorHover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorColorSelect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorColorDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableColorNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableColorHover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableColorSelect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableColorDisabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEventColorHover;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEventColorSelect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEventColorUnselect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEventColorCancel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEventColorUnhover;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointerEventDebugRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PointerEventDebugDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandDebugColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandDebugThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRuntimeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_DisabledTrackingDataSubsystems_Inner = { "DisabledTrackingDataSubsystems", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_USubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_DisabledTrackingDataSubsystems = { "DisabledTrackingDataSubsystems", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, DisabledTrackingDataSubsystems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledTrackingDataSubsystems_MetaData), NewProp_DisabledTrackingDataSubsystems_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorNormal = { "InteractorColorNormal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractorColorNormal), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorColorNormal_MetaData), NewProp_InteractorColorNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorHover = { "InteractorColorHover", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractorColorHover), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorColorHover_MetaData), NewProp_InteractorColorHover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorSelect = { "InteractorColorSelect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractorColorSelect), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorColorSelect_MetaData), NewProp_InteractorColorSelect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorDisabled = { "InteractorColorDisabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractorColorDisabled), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorColorDisabled_MetaData), NewProp_InteractorColorDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorNormal = { "InteractableColorNormal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractableColorNormal), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableColorNormal_MetaData), NewProp_InteractableColorNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorHover = { "InteractableColorHover", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractableColorHover), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableColorHover_MetaData), NewProp_InteractableColorHover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorSelect = { "InteractableColorSelect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractableColorSelect), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableColorSelect_MetaData), NewProp_InteractableColorSelect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorDisabled = { "InteractableColorDisabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, InteractableColorDisabled), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableColorDisabled_MetaData), NewProp_InteractableColorDisabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorHover = { "PointerEventColorHover", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventColorHover), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventColorHover_MetaData), NewProp_PointerEventColorHover_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorSelect = { "PointerEventColorSelect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventColorSelect), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventColorSelect_MetaData), NewProp_PointerEventColorSelect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorUnselect = { "PointerEventColorUnselect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventColorUnselect), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventColorUnselect_MetaData), NewProp_PointerEventColorUnselect_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorCancel = { "PointerEventColorCancel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventColorCancel), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventColorCancel_MetaData), NewProp_PointerEventColorCancel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorUnhover = { "PointerEventColorUnhover", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventColorUnhover), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventColorUnhover_MetaData), NewProp_PointerEventColorUnhover_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventDebugRadius = { "PointerEventDebugRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventDebugRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventDebugRadius_MetaData), NewProp_PointerEventDebugRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventDebugDuration = { "PointerEventDebugDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, PointerEventDebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEventDebugDuration_MetaData), NewProp_PointerEventDebugDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_HandDebugColor = { "HandDebugColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, HandDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandDebugColor_MetaData), NewProp_HandDebugColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_HandDebugThickness = { "HandDebugThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkRuntimeSettings, HandDebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandDebugThickness_MetaData), NewProp_HandDebugThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkRuntimeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_DisabledTrackingDataSubsystems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_DisabledTrackingDataSubsystems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractorColorDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_InteractableColorDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorHover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorUnselect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorCancel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventColorUnhover,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventDebugRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_PointerEventDebugDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_HandDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkRuntimeSettings_Statics::NewProp_HandDebugThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRuntimeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkRuntimeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRuntimeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRuntimeSettings_Statics::ClassParams = {
	&UIsdkRuntimeSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkRuntimeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRuntimeSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRuntimeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRuntimeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRuntimeSettings()
{
	if (!Z_Registration_Info_UClass_UIsdkRuntimeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRuntimeSettings.OuterSingleton, Z_Construct_UClass_UIsdkRuntimeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRuntimeSettings.OuterSingleton;
}
UIsdkRuntimeSettings::UIsdkRuntimeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRuntimeSettings);
UIsdkRuntimeSettings::~UIsdkRuntimeSettings() {}
// ********** End Class UIsdkRuntimeSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRuntimeSettings, UIsdkRuntimeSettings::StaticClass, TEXT("UIsdkRuntimeSettings"), &Z_Registration_Info_UClass_UIsdkRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRuntimeSettings), 2066831359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h__Script_OculusInteraction_2501248233(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkRuntimeSettings_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
