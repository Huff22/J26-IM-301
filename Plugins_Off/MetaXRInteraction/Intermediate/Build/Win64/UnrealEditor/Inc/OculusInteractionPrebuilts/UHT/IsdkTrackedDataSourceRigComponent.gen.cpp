// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkTrackedDataSourceRigComponent.h"
#include "Subsystem/IsdkITrackingDataSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTrackedDataSourceRigComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
OCULUSINTERACTION_API UEnum* Z_Construct_UEnum_OculusInteraction_EIsdkHandedness();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkTrackingDataSources();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UEnum* Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIsdkRigHandVisibility ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsdkRigHandVisibility;
static UEnum* EIsdkRigHandVisibility_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIsdkRigHandVisibility.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIsdkRigHandVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility, (UObject*)Z_Construct_UPackage__Script_OculusInteractionPrebuilts(), TEXT("EIsdkRigHandVisibility"));
	}
	return Z_Registration_Info_UEnum_EIsdkRigHandVisibility.OuterSingleton;
}
template<> OCULUSINTERACTIONPREBUILTS_API UEnum* StaticEnum<EIsdkRigHandVisibility>()
{
	return EIsdkRigHandVisibility_StaticEnum();
}
struct Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Manual.Comment", "// Do not automatically adjust visibility of the hand visuals, even if the device is disabled.\n// The synthetic hand visual will by default be visible, and tracked hand mesh invisible.\n" },
		{ "Manual.Name", "EIsdkRigHandVisibility::Manual" },
		{ "Manual.ToolTip", "Do not automatically adjust visibility of the hand visuals, even if the device is disabled.\nThe synthetic hand visual will by default be visible, and tracked hand mesh invisible." },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "SyntheticOnly.Comment", "// Hides all visuals when tracking source is disconnected. Only show Synthetic hand, when\n// connected.\n" },
		{ "SyntheticOnly.Name", "EIsdkRigHandVisibility::SyntheticOnly" },
		{ "SyntheticOnly.ToolTip", "Hides all visuals when tracking source is disconnected. Only show Synthetic hand, when\nconnected." },
		{ "SyntheticWhenRootChanged.Comment", "// When the synthetic hand has different data than the tracked hand, make that visible. Otherwise,\n// make the tracked hand mesh visible.\n" },
		{ "SyntheticWhenRootChanged.Name", "EIsdkRigHandVisibility::SyntheticWhenRootChanged" },
		{ "SyntheticWhenRootChanged.ToolTip", "When the synthetic hand has different data than the tracked hand, make that visible. Otherwise,\nmake the tracked hand mesh visible." },
		{ "TrackedOnly.Comment", "// Hides all visuals when tracking source is disconnected. Only show Tracked hand, when connected.\n" },
		{ "TrackedOnly.Name", "EIsdkRigHandVisibility::TrackedOnly" },
		{ "TrackedOnly.ToolTip", "Hides all visuals when tracking source is disconnected. Only show Tracked hand, when connected." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIsdkRigHandVisibility::Manual", (int64)EIsdkRigHandVisibility::Manual },
		{ "EIsdkRigHandVisibility::TrackedOnly", (int64)EIsdkRigHandVisibility::TrackedOnly },
		{ "EIsdkRigHandVisibility::SyntheticOnly", (int64)EIsdkRigHandVisibility::SyntheticOnly },
		{ "EIsdkRigHandVisibility::SyntheticWhenRootChanged", (int64)EIsdkRigHandVisibility::SyntheticWhenRootChanged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
	nullptr,
	"EIsdkRigHandVisibility",
	"EIsdkRigHandVisibility",
	Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility()
{
	if (!Z_Registration_Info_UEnum_EIsdkRigHandVisibility.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsdkRigHandVisibility.InnerSingleton, Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIsdkRigHandVisibility.InnerSingleton;
}
// ********** End Enum EIsdkRigHandVisibility ******************************************************

// ********** Begin Class UIsdkTrackedDataSourceRigComponent Function GetDataSources ***************
struct Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics
{
	struct IsdkTrackedDataSourceRigComponent_eventGetDataSources_Parms
	{
		FIsdkTrackingDataSources ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns reference to the TrackingDataSources struct used in this Rig Component\n   * @return FIsdkTrackingDataSources Struct containing the data source, root/pointer poses and hand\n   * joint information\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "@brief Returns reference to the TrackingDataSources struct used in this Rig Component\n@return FIsdkTrackingDataSources Struct containing the data source, root/pointer poses and hand\njoint information" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkTrackedDataSourceRigComponent_eventGetDataSources_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkTrackingDataSources, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3141570880
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent, nullptr, "GetDataSources", Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::IsdkTrackedDataSourceRigComponent_eventGetDataSources_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::IsdkTrackedDataSourceRigComponent_eventGetDataSources_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTrackedDataSourceRigComponent::execGetDataSources)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkTrackingDataSources*)Z_Param__Result=P_THIS->GetDataSources();
	P_NATIVE_END;
}
// ********** End Class UIsdkTrackedDataSourceRigComponent Function GetDataSources *****************

// ********** Begin Class UIsdkTrackedDataSourceRigComponent Function GetForceOffVisibility ********
struct Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics
{
	struct IsdkTrackedDataSourceRigComponent_eventGetForceOffVisibility_Parms
	{
		UIsdkConditionalGroupAll* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Gets a pointer to the All Conditional Group for disabling visibility, which is\n   * ultimately set to true only when all of its constituent conditionals are true.\n   * @see UIsdkConditionalGroupAll\n   * @return UIsdkConditionalGroupAll Scene Component associated as a Synthetic Visual\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "@brief Gets a pointer to the All Conditional Group for disabling visibility, which is\nultimately set to true only when all of its constituent conditionals are true.\n@see UIsdkConditionalGroupAll\n@return UIsdkConditionalGroupAll Scene Component associated as a Synthetic Visual" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkTrackedDataSourceRigComponent_eventGetForceOffVisibility_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent, nullptr, "GetForceOffVisibility", Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::IsdkTrackedDataSourceRigComponent_eventGetForceOffVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::IsdkTrackedDataSourceRigComponent_eventGetForceOffVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTrackedDataSourceRigComponent::execGetForceOffVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalGroupAll**)Z_Param__Result=P_THIS->GetForceOffVisibility();
	P_NATIVE_END;
}
// ********** End Class UIsdkTrackedDataSourceRigComponent Function GetForceOffVisibility **********

// ********** Begin Class UIsdkTrackedDataSourceRigComponent Function HandleIsdkFrameFinished ******
struct Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n   * @brief Called after all ISDK operations have been completed\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "@brief Called after all ISDK operations have been completed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent, nullptr, "HandleIsdkFrameFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkTrackedDataSourceRigComponent::execHandleIsdkFrameFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleIsdkFrameFinished();
	P_NATIVE_END;
}
// ********** End Class UIsdkTrackedDataSourceRigComponent Function HandleIsdkFrameFinished ********

// ********** Begin Class UIsdkTrackedDataSourceRigComponent ***************************************
void UIsdkTrackedDataSourceRigComponent::StaticRegisterNativesUIsdkTrackedDataSourceRigComponent()
{
	UClass* Class = UIsdkTrackedDataSourceRigComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataSources", &UIsdkTrackedDataSourceRigComponent::execGetDataSources },
		{ "GetForceOffVisibility", &UIsdkTrackedDataSourceRigComponent::execGetForceOffVisibility },
		{ "HandleIsdkFrameFinished", &UIsdkTrackedDataSourceRigComponent::execHandleIsdkFrameFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent;
UClass* UIsdkTrackedDataSourceRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkTrackedDataSourceRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTrackedDataSourceRigComponent"),
			Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkTrackedDataSourceRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_NoRegister()
{
	return UIsdkTrackedDataSourceRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkTrackedDataSourceRigComponent\n * @brief SceneComponent representing a base class for Rig Components utilizing tracked data.\n *\n * Rig Component that holds references to synthetic and tracked visuals driven by a set data source.\n * Provides methods to setup and modify these visuals as well as modify their visibility state\n *\n * @see UIsdkControllerVisualsRigComponent\n * @see UIsdkHandVisualsRigComponent\n * @addtogroup InteractionSDKPrebuiltsPrebuilts\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "@class UIsdkTrackedDataSourceRigComponent\n@brief SceneComponent representing a base class for Rig Components utilizing tracked data.\n\nRig Component that holds references to synthetic and tracked visuals driven by a set data source.\nProvides methods to setup and modify these visuals as well as modify their visibility state\n\n@see UIsdkControllerVisualsRigComponent\n@see UIsdkHandVisualsRigComponent\n@addtogroup InteractionSDKPrebuiltsPrebuilts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisibilityMode_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Optionally update the visibility of the hand visuals each frame based on the\n   * state of the synthetic hand.\n   */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "@brief Optionally update the visibility of the hand visuals each frame based on the\nstate of the synthetic hand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handedness_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Which hand this rig represents. This field is used to determine the handedness of the\n   * default hand meshes.\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "Which hand this rig represents. This field is used to determine the handedness of the\ndefault hand meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTrackingData_MetaData[] = {
		{ "Comment", "/**\n   * Optional: Use this given subsystem instead of the default one that exists on the world.\n   * The subsystem is used to create components that are able to read hand tracking data.\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "Optional: Use this given subsystem instead of the default one that exists on the world.\nThe subsystem is used to create components that are able to read hand tracking data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachedToMotionController_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * Motion controller this Rig Component is currently attached to\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "Motion controller this Rig Component is currently attached to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceOffVisibility_MetaData[] = {
		{ "Comment", "/**\n   * The Conditional Group representing if this rig component should be forced invisible, all\n   * constituent conditionals must be true for this to be true.\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkTrackedDataSourceRigComponent.h" },
		{ "ToolTip", "The Conditional Group representing if this rig component should be forced invisible, all\nconstituent conditionals must be true for this to be true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandVisibilityMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandVisibilityMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Handedness_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Handedness;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CustomTrackingData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedToMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceOffVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetDataSources, "GetDataSources" }, // 659627544
		{ &Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_GetForceOffVisibility, "GetForceOffVisibility" }, // 2953317217
		{ &Z_Construct_UFunction_UIsdkTrackedDataSourceRigComponent_HandleIsdkFrameFinished, "HandleIsdkFrameFinished" }, // 4054158387
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTrackedDataSourceRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_HandVisibilityMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_HandVisibilityMode = { "HandVisibilityMode", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTrackedDataSourceRigComponent, HandVisibilityMode), Z_Construct_UEnum_OculusInteractionPrebuilts_EIsdkRigHandVisibility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisibilityMode_MetaData), NewProp_HandVisibilityMode_MetaData) }; // 377539145
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_Handedness_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_Handedness = { "Handedness", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTrackedDataSourceRigComponent, Handedness), Z_Construct_UEnum_OculusInteraction_EIsdkHandedness, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handedness_MetaData), NewProp_Handedness_MetaData) }; // 49432891
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_CustomTrackingData = { "CustomTrackingData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTrackedDataSourceRigComponent, CustomTrackingData), Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTrackingData_MetaData), NewProp_CustomTrackingData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_AttachedToMotionController = { "AttachedToMotionController", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTrackedDataSourceRigComponent, AttachedToMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachedToMotionController_MetaData), NewProp_AttachedToMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_ForceOffVisibility = { "ForceOffVisibility", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTrackedDataSourceRigComponent, ForceOffVisibility), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceOffVisibility_MetaData), NewProp_ForceOffVisibility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_HandVisibilityMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_HandVisibilityMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_Handedness_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_Handedness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_CustomTrackingData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_AttachedToMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::NewProp_ForceOffVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::ClassParams = {
	&UIsdkTrackedDataSourceRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkTrackedDataSourceRigComponent);
UIsdkTrackedDataSourceRigComponent::~UIsdkTrackedDataSourceRigComponent() {}
// ********** End Class UIsdkTrackedDataSourceRigComponent *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIsdkRigHandVisibility_StaticEnum, TEXT("EIsdkRigHandVisibility"), &Z_Registration_Info_UEnum_EIsdkRigHandVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377539145U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent, UIsdkTrackedDataSourceRigComponent::StaticClass, TEXT("UIsdkTrackedDataSourceRigComponent"), &Z_Registration_Info_UClass_UIsdkTrackedDataSourceRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTrackedDataSourceRigComponent), 664042024U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_3871693330(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkTrackedDataSourceRigComponent_h__Script_OculusInteractionPrebuilts_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
