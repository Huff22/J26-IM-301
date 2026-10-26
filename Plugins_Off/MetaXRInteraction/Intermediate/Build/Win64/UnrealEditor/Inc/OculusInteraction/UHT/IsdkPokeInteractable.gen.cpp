// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkPokeInteractable.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPokeInteractable() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPointable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkISurfacePatch_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FIsdkPokeInteractableConfigOffsets ********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets;
class UScriptStruct* FIsdkPokeInteractableConfigOffsets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkPokeInteractableConfigOffsets"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// namespace isdk::api\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "namespace isdk::api" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalOffset_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TangentOffset_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TangentOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkPokeInteractableConfigOffsets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::NewProp_NormalOffset = { "NormalOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractableConfigOffsets, NormalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalOffset_MetaData), NewProp_NormalOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::NewProp_TangentOffset = { "TangentOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkPokeInteractableConfigOffsets, TangentOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TangentOffset_MetaData), NewProp_TangentOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::NewProp_NormalOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::NewProp_TangentOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkPokeInteractableConfigOffsets",
	Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::PropPointers),
	sizeof(FIsdkPokeInteractableConfigOffsets),
	alignof(FIsdkPokeInteractableConfigOffsets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.InnerSingleton, Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets.InnerSingleton;
}
// ********** End ScriptStruct FIsdkPokeInteractableConfigOffsets **********************************

// ********** Begin Class UIsdkPokeInteractableConfigDataAsset Function ResetToDefaultPanelConfig **
struct Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Resets the Config member variable of this data asset to the generated defaults\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "@brief Resets the Config member variable of this data asset to the generated defaults" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset, nullptr, "ResetToDefaultPanelConfig", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractableConfigDataAsset::execResetToDefaultPanelConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefaultPanelConfig();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractableConfigDataAsset Function ResetToDefaultPanelConfig ****

// ********** Begin Class UIsdkPokeInteractableConfigDataAsset *************************************
void UIsdkPokeInteractableConfigDataAsset::StaticRegisterNativesUIsdkPokeInteractableConfigDataAsset()
{
	UClass* Class = UIsdkPokeInteractableConfigDataAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetToDefaultPanelConfig", &UIsdkPokeInteractableConfigDataAsset::execResetToDefaultPanelConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset;
UClass* UIsdkPokeInteractableConfigDataAsset::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeInteractableConfigDataAsset;
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeInteractableConfigDataAsset"),
			Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.InnerSingleton,
			StaticRegisterNativesUIsdkPokeInteractableConfigDataAsset,
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
	return Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister()
{
	return UIsdkPokeInteractableConfigDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkPokeInteractableConfigDataAsset\n * @brief Data asset that contain poke interactable configuration and methods for generating new\n * configuration defaults.\n *\n * @see UIsdkPokeInteractable\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Poke Interactable Config Data Asset" },
		{ "IncludePath", "Interaction/IsdkPokeInteractable.h" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "@class UIsdkPokeInteractableConfigDataAsset\n@brief Data asset that contain poke interactable configuration and methods for generating new\nconfiguration defaults.\n\n@see UIsdkPokeInteractable\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief The structure containing the normal and tangent thresholds for start and end hover\n   * events as well as select and cancel events.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "@brief The structure containing the normal and tangent thresholds for start and end hover\nevents as well as select and cancel events." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeInteractableConfigDataAsset_ResetToDefaultPanelConfig, "ResetToDefaultPanelConfig" }, // 343708519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeInteractableConfigDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractableConfigDataAsset, Config), Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3969149830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::NewProp_Config,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::ClassParams = {
	&UIsdkPokeInteractableConfigDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.OuterSingleton, Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset.OuterSingleton;
}
UIsdkPokeInteractableConfigDataAsset::UIsdkPokeInteractableConfigDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeInteractableConfigDataAsset);
UIsdkPokeInteractableConfigDataAsset::~UIsdkPokeInteractableConfigDataAsset() {}
// ********** End Class UIsdkPokeInteractableConfigDataAsset ***************************************

// ********** Begin Class UIsdkPokeInteractable Function GetConfigAsset ****************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics
{
	struct IsdkPokeInteractable_eventGetConfigAsset_Parms
	{
		UIsdkPokeInteractableConfigDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the currently set configuration DataAsset (does not currently validate) */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Returns the currently set configuration DataAsset (does not currently validate)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventGetConfigAsset_Parms, ReturnValue), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "GetConfigAsset", Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::IsdkPokeInteractable_eventGetConfigAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::IsdkPokeInteractable_eventGetConfigAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execGetConfigAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkPokeInteractableConfigDataAsset**)Z_Param__Result=P_THIS->GetConfigAsset();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function GetConfigAsset ******************************

// ********** Begin Class UIsdkPokeInteractable Function GetConfigOffsets **************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics
{
	struct IsdkPokeInteractable_eventGetConfigOffsets_Parms
	{
		FIsdkPokeInteractableConfigOffsets ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns a struct containing normal and tangent offsets */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Returns a struct containing normal and tangent offsets" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventGetConfigOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 978703178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "GetConfigOffsets", Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::IsdkPokeInteractable_eventGetConfigOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::IsdkPokeInteractable_eventGetConfigOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execGetConfigOffsets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkPokeInteractableConfigOffsets*)Z_Param__Result=P_THIS->GetConfigOffsets();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function GetConfigOffsets ****************************

// ********** Begin Class UIsdkPokeInteractable Function GetCurrentConfig **************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics
{
	struct IsdkPokeInteractable_eventGetCurrentConfig_Parms
	{
		FIsdkPokeInteractable_Config ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns this PokeInteractable's current configuration (hover/select normals and tangents) as a\n   * struct */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Returns this PokeInteractable's current configuration (hover/select normals and tangents) as a\n  * struct" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventGetCurrentConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkPokeInteractable_Config, METADATA_PARAMS(0, nullptr) }; // 3969149830
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "GetCurrentConfig", Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::IsdkPokeInteractable_eventGetCurrentConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::IsdkPokeInteractable_eventGetCurrentConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execGetCurrentConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkPokeInteractable_Config*)Z_Param__Result=P_THIS->GetCurrentConfig();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function GetCurrentConfig ****************************

// ********** Begin Class UIsdkPokeInteractable Function GetSurfacePatch ***************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics
{
	struct IsdkPokeInteractable_eventGetSurfacePatch_Parms
	{
		TScriptInterface<IIsdkISurfacePatch> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Returns the object implementing IIsdkISurfacePatch that this is utilizing for interactions */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Returns the object implementing IIsdkISurfacePatch that this is utilizing for interactions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventGetSurfacePatch_Parms, ReturnValue), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "GetSurfacePatch", Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::IsdkPokeInteractable_eventGetSurfacePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::IsdkPokeInteractable_eventGetSurfacePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execGetSurfacePatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkISurfacePatch>*)Z_Param__Result=P_THIS->GetSurfacePatch();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function GetSurfacePatch *****************************

// ********** Begin Class UIsdkPokeInteractable Function HandlePointerEvent ************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics
{
	struct IsdkPokeInteractable_eventHandlePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventHandlePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "HandlePointerEvent", Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::IsdkPokeInteractable_eventHandlePointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::IsdkPokeInteractable_eventHandlePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execHandlePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function HandlePointerEvent **************************

// ********** Begin Class UIsdkPokeInteractable Function SetConfigAsset ****************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics
{
	struct IsdkPokeInteractable_eventSetConfigAsset_Parms
	{
		UIsdkPokeInteractableConfigDataAsset* InConfigAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the given DataAsset to this PokeInteractable and applies its configuration if valid */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Sets the given DataAsset to this PokeInteractable and applies its configuration if valid" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InConfigAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::NewProp_InConfigAsset = { "InConfigAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventSetConfigAsset_Parms, InConfigAsset), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::NewProp_InConfigAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "SetConfigAsset", Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::IsdkPokeInteractable_eventSetConfigAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::IsdkPokeInteractable_eventSetConfigAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execSetConfigAsset)
{
	P_GET_OBJECT(UIsdkPokeInteractableConfigDataAsset,Z_Param_InConfigAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConfigAsset(Z_Param_InConfigAsset);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function SetConfigAsset ******************************

// ********** Begin Class UIsdkPokeInteractable Function SetConfigOffsets **************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics
{
	struct IsdkPokeInteractable_eventSetConfigOffsets_Parms
	{
		FIsdkPokeInteractableConfigOffsets InOffsets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets normal and tangent offsets via struct */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Sets normal and tangent offsets via struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InOffsets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOffsets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::NewProp_InOffsets = { "InOffsets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventSetConfigOffsets_Parms, InOffsets), Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InOffsets_MetaData), NewProp_InOffsets_MetaData) }; // 978703178
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::NewProp_InOffsets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "SetConfigOffsets", Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::IsdkPokeInteractable_eventSetConfigOffsets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::IsdkPokeInteractable_eventSetConfigOffsets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execSetConfigOffsets)
{
	P_GET_STRUCT_REF(FIsdkPokeInteractableConfigOffsets,Z_Param_Out_InOffsets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConfigOffsets(Z_Param_Out_InOffsets);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function SetConfigOffsets ****************************

// ********** Begin Class UIsdkPokeInteractable Function SetSurfacePatch ***************************
struct Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics
{
	struct IsdkPokeInteractable_eventSetSurfacePatch_Parms
	{
		TScriptInterface<IIsdkISurfacePatch> InSurfacePatch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/* Sets the object implementing IIsdkISurfacePatch to be used by this PokeInteractable */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Sets the object implementing IIsdkISurfacePatch to be used by this PokeInteractable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSurfacePatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InSurfacePatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::NewProp_InSurfacePatch = { "InSurfacePatch", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractable_eventSetSurfacePatch_Parms, InSurfacePatch), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSurfacePatch_MetaData), NewProp_InSurfacePatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::NewProp_InSurfacePatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractable, nullptr, "SetSurfacePatch", Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::IsdkPokeInteractable_eventSetSurfacePatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::IsdkPokeInteractable_eventSetSurfacePatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractable::execSetSurfacePatch)
{
	P_GET_TINTERFACE_REF(IIsdkISurfacePatch,Z_Param_Out_InSurfacePatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSurfacePatch(Z_Param_Out_InSurfacePatch);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractable Function SetSurfacePatch *****************************

// ********** Begin Class UIsdkPokeInteractable ****************************************************
void UIsdkPokeInteractable::StaticRegisterNativesUIsdkPokeInteractable()
{
	UClass* Class = UIsdkPokeInteractable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConfigAsset", &UIsdkPokeInteractable::execGetConfigAsset },
		{ "GetConfigOffsets", &UIsdkPokeInteractable::execGetConfigOffsets },
		{ "GetCurrentConfig", &UIsdkPokeInteractable::execGetCurrentConfig },
		{ "GetSurfacePatch", &UIsdkPokeInteractable::execGetSurfacePatch },
		{ "HandlePointerEvent", &UIsdkPokeInteractable::execHandlePointerEvent },
		{ "SetConfigAsset", &UIsdkPokeInteractable::execSetConfigAsset },
		{ "SetConfigOffsets", &UIsdkPokeInteractable::execSetConfigOffsets },
		{ "SetSurfacePatch", &UIsdkPokeInteractable::execSetSurfacePatch },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeInteractable;
UClass* UIsdkPokeInteractable::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeInteractable;
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeInteractable"),
			Z_Registration_Info_UClass_UIsdkPokeInteractable.InnerSingleton,
			StaticRegisterNativesUIsdkPokeInteractable,
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
	return Z_Registration_Info_UClass_UIsdkPokeInteractable.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeInteractable_NoRegister()
{
	return UIsdkPokeInteractable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeInteractable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkPokeInteractable\n * @brief IsdkPokeInteractable drives the ability for an actor to be poked, initiated by a single\n * finger non-physics interaction. It is expected to be interacted with by a IsdkPokeInteractor on\n * the player pawn.\n *\n * @see UIsdkInteractableComponent\n * @see IIsdkIPointable\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Poke Interactable" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkPokeInteractable.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "@class UIsdkPokeInteractable\n@brief IsdkPokeInteractable drives the ability for an actor to be poked, initiated by a single\nfinger non-physics interaction. It is expected to be interacted with by a IsdkPokeInteractor on\nthe player pawn.\n\n@see UIsdkInteractableComponent\n@see IIsdkIPointable\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorPointerEvent_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Event for PointerEvents\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Event for PointerEvents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigOffsets_MetaData[] = {
		{ "BlueprintGetter", "GetConfigOffsets" },
		{ "BlueprintSetter", "SetConfigOffsets" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
		{ "ToolTip", "Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigAsset_MetaData[] = {
		{ "BlueprintGetter", "GetConfigAsset" },
		{ "BlueprintSetter", "SetConfigAsset" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePatch_MetaData[] = {
		{ "BlueprintGetter", "GetSurfacePatch" },
		{ "BlueprintSetter", "SetSurfacePatch" },
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractorPointerEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConfigOffsets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigAsset;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_SurfacePatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigAsset, "GetConfigAsset" }, // 1164063644
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_GetConfigOffsets, "GetConfigOffsets" }, // 2679432873
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_GetCurrentConfig, "GetCurrentConfig" }, // 260548913
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_GetSurfacePatch, "GetSurfacePatch" }, // 633242031
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_HandlePointerEvent, "HandlePointerEvent" }, // 1874547668
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigAsset, "SetConfigAsset" }, // 3397753204
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_SetConfigOffsets, "SetConfigOffsets" }, // 1798005986
		{ &Z_Construct_UFunction_UIsdkPokeInteractable_SetSurfacePatch, "SetSurfacePatch" }, // 2770521713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeInteractable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_InteractorPointerEvent = { "InteractorPointerEvent", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractable, InteractorPointerEvent), Z_Construct_UDelegateFunction_OculusInteraction_IsdkInteractionPointerEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorPointerEvent_MetaData), NewProp_InteractorPointerEvent_MetaData) }; // 3986831945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_ConfigOffsets = { "ConfigOffsets", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractable, ConfigOffsets), Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigOffsets_MetaData), NewProp_ConfigOffsets_MetaData) }; // 978703178
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_ConfigAsset = { "ConfigAsset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractable, ConfigAsset), Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigAsset_MetaData), NewProp_ConfigAsset_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_SurfacePatch = { "SurfacePatch", nullptr, (EPropertyFlags)0x0044000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractable, SurfacePatch), Z_Construct_UClass_UIsdkISurfacePatch_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfacePatch_MetaData), NewProp_SurfacePatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_InteractorPointerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_ConfigOffsets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_ConfigAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractable_Statics::NewProp_SurfacePatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeInteractable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkInteractableComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIPointable_NoRegister, (int32)VTABLE_OFFSET(UIsdkPokeInteractable, IIsdkIPointable), false },  // 4279697062
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeInteractable_Statics::ClassParams = {
	&UIsdkPokeInteractable::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeInteractable_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractable_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractable_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeInteractable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeInteractable()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeInteractable.OuterSingleton, Z_Construct_UClass_UIsdkPokeInteractable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeInteractable.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeInteractable);
UIsdkPokeInteractable::~UIsdkPokeInteractable() {}
// ********** End Class UIsdkPokeInteractable ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkPokeInteractableConfigOffsets::StaticStruct, Z_Construct_UScriptStruct_FIsdkPokeInteractableConfigOffsets_Statics::NewStructOps, TEXT("IsdkPokeInteractableConfigOffsets"), &Z_Registration_Info_UScriptStruct_FIsdkPokeInteractableConfigOffsets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkPokeInteractableConfigOffsets), 978703178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeInteractableConfigDataAsset, UIsdkPokeInteractableConfigDataAsset::StaticClass, TEXT("UIsdkPokeInteractableConfigDataAsset"), &Z_Registration_Info_UClass_UIsdkPokeInteractableConfigDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeInteractableConfigDataAsset), 2955188147U) },
		{ Z_Construct_UClass_UIsdkPokeInteractable, UIsdkPokeInteractable::StaticClass, TEXT("UIsdkPokeInteractable"), &Z_Registration_Info_UClass_UIsdkPokeInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeInteractable), 595156974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_4047335254(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractable_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
