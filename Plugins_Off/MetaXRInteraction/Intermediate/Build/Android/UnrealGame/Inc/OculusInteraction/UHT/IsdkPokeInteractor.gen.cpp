// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/IsdkPokeInteractor.h"
#include "StructTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkPokeInteractor() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkPokeInteractor Function GetConfig ***********************************
struct Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics
{
	struct IsdkPokeInteractor_eventGetConfig_Parms
	{
		FIsdkPokeInteractor_Config ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns a struct with the current threshold and radius configurations for this\n   * PokeInteractor\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@brief Returns a struct with the current threshold and radius configurations for this\nPokeInteractor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractor_eventGetConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2206340171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractor, nullptr, "GetConfig", Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::IsdkPokeInteractor_eventGetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::IsdkPokeInteractor_eventGetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractor::execGetConfig)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkPokeInteractor_Config*)Z_Param__Result=P_THIS->GetConfig();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractor Function GetConfig *************************************

// ********** Begin Class UIsdkPokeInteractor Function GetRootPose *********************************
struct Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics
{
	struct IsdkPokeInteractor_eventGetRootPose_Parms
	{
		TScriptInterface<IIsdkIRootPose> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the root pose object (implementing IIsdkIRootPose) being utilized by this\n   * PokeInteractor, not guaranteed to be valid if one has not been set.\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@brief Returns the root pose object (implementing IIsdkIRootPose) being utilized by this\nPokeInteractor, not guaranteed to be valid if one has not been set." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractor_eventGetRootPose_Parms, ReturnValue), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractor, nullptr, "GetRootPose", Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::IsdkPokeInteractor_eventGetRootPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::IsdkPokeInteractor_eventGetRootPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractor::execGetRootPose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IIsdkIRootPose>*)Z_Param__Result=P_THIS->GetRootPose();
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractor Function GetRootPose ***********************************

// ********** Begin Class UIsdkPokeInteractor Function SetConfig ***********************************
struct Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics
{
	struct IsdkPokeInteractor_eventSetConfig_Parms
	{
		FIsdkPokeInteractor_Config InConfig;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Overwrites the current threshold/radius configuration with the given struct\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@brief Overwrites the current threshold/radius configuration with the given struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractor_eventSetConfig_Parms, InConfig), Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InConfig_MetaData), NewProp_InConfig_MetaData) }; // 2206340171
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::NewProp_InConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractor, nullptr, "SetConfig", Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::IsdkPokeInteractor_eventSetConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::IsdkPokeInteractor_eventSetConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractor::execSetConfig)
{
	P_GET_STRUCT_REF(FIsdkPokeInteractor_Config,Z_Param_Out_InConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConfig(Z_Param_Out_InConfig);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractor Function SetConfig *************************************

// ********** Begin Class UIsdkPokeInteractor Function SetRootPose *********************************
struct Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics
{
	struct IsdkPokeInteractor_eventSetRootPose_Parms
	{
		TScriptInterface<IIsdkIRootPose> InRootPose;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Sets the root pose object (implementing IIsdkIRootPose) to be utilized by this\n   * PokeInteractor (does not currently validate).\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@brief Sets the root pose object (implementing IIsdkIRootPose) to be utilized by this\nPokeInteractor (does not currently validate)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRootPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InRootPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::NewProp_InRootPose = { "InRootPose", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkPokeInteractor_eventSetRootPose_Parms, InRootPose), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRootPose_MetaData), NewProp_InRootPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::NewProp_InRootPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkPokeInteractor, nullptr, "SetRootPose", Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::IsdkPokeInteractor_eventSetRootPose_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::IsdkPokeInteractor_eventSetRootPose_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkPokeInteractor::execSetRootPose)
{
	P_GET_TINTERFACE_REF(IIsdkIRootPose,Z_Param_Out_InRootPose);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRootPose(Z_Param_Out_InRootPose);
	P_NATIVE_END;
}
// ********** End Class UIsdkPokeInteractor Function SetRootPose ***********************************

// ********** Begin Class UIsdkPokeInteractor ******************************************************
void UIsdkPokeInteractor::StaticRegisterNativesUIsdkPokeInteractor()
{
	UClass* Class = UIsdkPokeInteractor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConfig", &UIsdkPokeInteractor::execGetConfig },
		{ "GetRootPose", &UIsdkPokeInteractor::execGetRootPose },
		{ "SetConfig", &UIsdkPokeInteractor::execSetConfig },
		{ "SetRootPose", &UIsdkPokeInteractor::execSetRootPose },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkPokeInteractor;
UClass* UIsdkPokeInteractor::GetPrivateStaticClass()
{
	using TClass = UIsdkPokeInteractor;
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkPokeInteractor"),
			Z_Registration_Info_UClass_UIsdkPokeInteractor.InnerSingleton,
			StaticRegisterNativesUIsdkPokeInteractor,
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
	return Z_Registration_Info_UClass_UIsdkPokeInteractor.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkPokeInteractor_NoRegister()
{
	return UIsdkPokeInteractor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkPokeInteractor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkPokeInteractor\n * @brief IsdkPokeInteractor drives the ability for a pawn to interact with actors that have an\n * IsdkPokeInteractable attached to them\n *\n * Initiated by a single finger non-physics interaction. Passes data to/from the API instance.\n *\n * @see UIsdkInteractorComponent\n * @addtogroup InteractionSDK\n */" },
		{ "DisplayName", "ISDK Poke Interactor" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Interaction/IsdkPokeInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@class UIsdkPokeInteractor\n@brief IsdkPokeInteractor drives the ability for a pawn to interact with actors that have an\nIsdkPokeInteractable attached to them\n\nInitiated by a single finger non-physics interaction. Passes data to/from the API instance.\n\n@see UIsdkInteractorComponent\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugVisuals_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief When true, disables debug visuals from being drawn, regardless of console variables\n   */" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "@brief When true, disables debug visuals from being drawn, regardless of console variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "BlueprintGetter", "GetConfig" },
		{ "BlueprintSetter", "SetConfig" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
		{ "ToolTip", "Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootPose_MetaData[] = {
		{ "BlueprintGetter", "GetRootPose" },
		{ "BlueprintSetter", "SetRootPose" },
		{ "Category", "InteractionSDK" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Interaction/IsdkPokeInteractor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisableDebugVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugVisuals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_RootPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkPokeInteractor_GetConfig, "GetConfig" }, // 88793991
		{ &Z_Construct_UFunction_UIsdkPokeInteractor_GetRootPose, "GetRootPose" }, // 644319899
		{ &Z_Construct_UFunction_UIsdkPokeInteractor_SetConfig, "SetConfig" }, // 2298641649
		{ &Z_Construct_UFunction_UIsdkPokeInteractor_SetRootPose, "SetRootPose" }, // 1252539649
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkPokeInteractor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_bDisableDebugVisuals_SetBit(void* Obj)
{
	((UIsdkPokeInteractor*)Obj)->bDisableDebugVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_bDisableDebugVisuals = { "bDisableDebugVisuals", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIsdkPokeInteractor), &Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_bDisableDebugVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDebugVisuals_MetaData), NewProp_bDisableDebugVisuals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractor, Config), Z_Construct_UScriptStruct_FIsdkPokeInteractor_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 2206340171
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_RootPose = { "RootPose", nullptr, (EPropertyFlags)0x0045000000000805, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkPokeInteractor, RootPose), Z_Construct_UClass_UIsdkIRootPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootPose_MetaData), NewProp_RootPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkPokeInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_bDisableDebugVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkPokeInteractor_Statics::NewProp_RootPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkPokeInteractor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkInteractorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkPokeInteractor_Statics::ClassParams = {
	&UIsdkPokeInteractor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkPokeInteractor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractor_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkPokeInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkPokeInteractor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkPokeInteractor()
{
	if (!Z_Registration_Info_UClass_UIsdkPokeInteractor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkPokeInteractor.OuterSingleton, Z_Construct_UClass_UIsdkPokeInteractor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkPokeInteractor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkPokeInteractor);
UIsdkPokeInteractor::~UIsdkPokeInteractor() {}
// ********** End Class UIsdkPokeInteractor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkPokeInteractor, UIsdkPokeInteractor::StaticClass, TEXT("UIsdkPokeInteractor"), &Z_Registration_Info_UClass_UIsdkPokeInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkPokeInteractor), 3834922463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h__Script_OculusInteraction_388943275(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkPokeInteractor_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
