// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rig/IsdkPokeInteractionRigComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPokeInteractionRigComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeInteractionRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPokeInteractionRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPokeInteractionRigComponent Function GetEnabledConditional **********
struct Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics
{
	struct IsdkPokeInteractionRigComponent_eventGetEnabledConditional_Parms
	{
		UIsdkConditionalGroupAll* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the Conditional Group for if this component is enabled.\n   * @return UIsdkConditionalGroupAll* Conditional Group. All constituent conditionals of the group\n   * must be true for it to resolve true.\n   */" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
		{ "ToolTip", "@brief Retrieves the Conditional Group for if this component is enabled.\n@return UIsdkConditionalGroupAll* Conditional Group. All constituent conditionals of the group\nmust be true for it to resolve true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractionRigComponent_eventGetEnabledConditional_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractionRigComponent, nullptr, "GetEnabledConditional", Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::IsdkPokeInteractionRigComponent_eventGetEnabledConditional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::IsdkPokeInteractionRigComponent_eventGetEnabledConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractionRigComponent::execGetEnabledConditional)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditionalGroupAll**)Z_Param__Result=P_THIS->GetEnabledConditional();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractionRigComponent Function GetEnabledConditional ************

// ********** Begin Class UIsdkPokeInteractionRigComponent Function HandleIsEnabledConditionalChanged 
struct Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics
{
	struct IsdkPokeInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms
	{
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((IsdkPokeInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkPokeInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms), &Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractionRigComponent, nullptr, "HandleIsEnabledConditionalChanged", Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::IsdkPokeInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::IsdkPokeInteractionRigComponent_eventHandleIsEnabledConditionalChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractionRigComponent::execHandleIsEnabledConditionalChanged)
{
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleIsEnabledConditionalChanged(Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractionRigComponent Function HandleIsEnabledConditionalChanged 

// ********** Begin Class UIsdkPokeInteractionRigComponent *****************************************
void UIsdkPokeInteractionRigComponent::StaticRegisterNativesUIsdkPokeInteractionRigComponent()
{
	UClass* Class = UIsdkPokeInteractionRigComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEnabledConditional", &UIsdkPokeInteractionRigComponent::execGetEnabledConditional },
		{ "HandleIsEnabledConditionalChanged", &UIsdkPokeInteractionRigComponent::execHandleIsEnabledConditionalChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent;
UClass* UIsdkPokeInteractionRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeInteractionRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeInteractionRigComponent"),
			Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkPokeInteractionRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeInteractionRigComponent_NoRegister()
{
	return UIsdkPokeInteractionRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkPokeInteractionRigComponent\n * @brief Actor component that stores references to poke-related interaction components, data\n * sources and limiters visuals as well as utilities for initializing them with data sources.\n *\n * @see UIsdkRigComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
		{ "IncludePath", "Rig/IsdkPokeInteractionRigComponent.h" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
		{ "ToolTip", "@class UIsdkPokeInteractionRigComponent\n@brief Actor component that stores references to poke-related interaction components, data\nsources and limiters visuals as well as utilities for initializing them with data sources.\n\n@see UIsdkRigComponent\n@addtogroup InteractionSDKPrebuilts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeInteractor_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief PokeInteractor component reference, utilized for generating events based on state\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
		{ "ToolTip", "@brief PokeInteractor component reference, utilized for generating events based on state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PokeLimiterVisual_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief PokeLimiterVisual component reference, optionally utilized for preventing hand visuals\n   * from poking through poked surfaces\n   */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
		{ "ToolTip", "@brief PokeLimiterVisual component reference, optionally utilized for preventing hand visuals\nfrom poking through poked surfaces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledConditionalGroup_MetaData[] = {
		{ "BlueprintGetter", "GetEnabledConditional" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActiveConditional_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Rig/IsdkPokeInteractionRigComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeInteractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PokeLimiterVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnabledConditionalGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsActiveConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_GetEnabledConditional, "GetEnabledConditional" }, // 1407831814
		{ &Z_Construct_UFunction_UIsdkPokeInteractionRigComponent_HandleIsEnabledConditionalChanged, "HandleIsEnabledConditionalChanged" }, // 359732008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeInteractionRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_PokeInteractor = { "PokeInteractor", nullptr, (EPropertyFlags)0x011400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractionRigComponent, PokeInteractor), Z_Construct_UClass_UIsdkPokeInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeInteractor_MetaData), NewProp_PokeInteractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_PokeLimiterVisual = { "PokeLimiterVisual", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractionRigComponent, PokeLimiterVisual), Z_Construct_UClass_UIsdkPokeLimiterVisual_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PokeLimiterVisual_MetaData), NewProp_PokeLimiterVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_RigComponent = { "RigComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractionRigComponent, RigComponent), Z_Construct_UClass_UIsdkRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigComponent_MetaData), NewProp_RigComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup = { "EnabledConditionalGroup", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractionRigComponent, EnabledConditionalGroup), Z_Construct_UClass_UIsdkConditionalGroupAll_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledConditionalGroup_MetaData), NewProp_EnabledConditionalGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_IsActiveConditional = { "IsActiveConditional", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractionRigComponent, IsActiveConditional), Z_Construct_UClass_UIsdkConditionalComponentIsActive_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActiveConditional_MetaData), NewProp_IsActiveConditional_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_PokeInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_PokeLimiterVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_RigComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_EnabledConditionalGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::NewProp_IsActiveConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::ClassParams = {
	&UIsdkPokeInteractionRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeInteractionRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkPokeInteractionRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeInteractionRigComponent);
UIsdkPokeInteractionRigComponent::~UIsdkPokeInteractionRigComponent() {}
// ********** End Class UIsdkPokeInteractionRigComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeInteractionRigComponent, UIsdkPokeInteractionRigComponent::StaticClass, TEXT("UIsdkPokeInteractionRigComponent"), &Z_Registration_Info_UClass_UIsdkPokeInteractionRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeInteractionRigComponent), 3161133889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeInteractionRigComponent_h__Script_OculusInteractionPrebuilts_810501827(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkPokeInteractionRigComponent_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
