// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/IsdkConditionalGroup.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkConditionalGroup() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalGroup_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkConditionalGroup Function AddConditional ****************************
struct Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics
{
	struct IsdkConditionalGroup_eventAddConditional_Parms
	{
		UIsdkConditional* InConditional;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Add a conditional to be resolved in this group\n   * @param InConditional Pointer to the UIsdkConditional intended to be added\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroup.h" },
		{ "ToolTip", "@brief Add a conditional to be resolved in this group\n@param InConditional Pointer to the UIsdkConditional intended to be added" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::NewProp_InConditional = { "InConditional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalGroup_eventAddConditional_Parms, InConditional), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::NewProp_InConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalGroup, nullptr, "AddConditional", Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::IsdkConditionalGroup_eventAddConditional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::IsdkConditionalGroup_eventAddConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalGroup::execAddConditional)
{
	P_GET_OBJECT(UIsdkConditional,Z_Param_InConditional);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddConditional(Z_Param_InConditional);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalGroup Function AddConditional ******************************

// ********** Begin Class UIsdkConditionalGroup Function GetConditionals ***************************
struct Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics
{
	struct IsdkConditionalGroup_eventGetConditionals_Parms
	{
		TArray<UIsdkConditional*> Conditionals;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Returns the conditionals collectively resolved in this group\n   * @param Conditionals Reference to the TArray of UIsdkConditionals retrieved\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroup.h" },
		{ "ToolTip", "@brief Returns the conditionals collectively resolved in this group\n@param Conditionals Reference to the TArray of UIsdkConditionals retrieved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditionals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditionals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::NewProp_Conditionals_Inner = { "Conditionals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::NewProp_Conditionals = { "Conditionals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalGroup_eventGetConditionals_Parms, Conditionals), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::NewProp_Conditionals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::NewProp_Conditionals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalGroup, nullptr, "GetConditionals", Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::IsdkConditionalGroup_eventGetConditionals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::IsdkConditionalGroup_eventGetConditionals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalGroup::execGetConditionals)
{
	P_GET_TARRAY_REF(UIsdkConditional*,Z_Param_Out_Conditionals);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetConditionals(Z_Param_Out_Conditionals);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalGroup Function GetConditionals *****************************

// ********** Begin Class UIsdkConditionalGroup Function IsEmpty ***********************************
struct Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics
{
	struct IsdkConditionalGroup_eventIsEmpty_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Function to retrieve whether or not the TMap of conditionals is empty\n   * @return bool Returns true if there are no UIsdkConditionals present in this object\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroup.h" },
		{ "ToolTip", "@brief Function to retrieve whether or not the TMap of conditionals is empty\n@return bool Returns true if there are no UIsdkConditionals present in this object" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsdkConditionalGroup_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsdkConditionalGroup_eventIsEmpty_Parms), &Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalGroup, nullptr, "IsEmpty", Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::IsdkConditionalGroup_eventIsEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::IsdkConditionalGroup_eventIsEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalGroup::execIsEmpty)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmpty();
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalGroup Function IsEmpty *************************************

// ********** Begin Class UIsdkConditionalGroup Function RemoveConditional *************************
struct Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics
{
	struct IsdkConditionalGroup_eventRemoveConditional_Parms
	{
		UIsdkConditional* InConditional;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Removes a conditional from being resolved in this group\n   * @param InConditional Pointer to the UIsdkConditional intended to be removed\n   */" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroup.h" },
		{ "ToolTip", "@brief Removes a conditional from being resolved in this group\n@param InConditional Pointer to the UIsdkConditional intended to be removed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InConditional;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::NewProp_InConditional = { "InConditional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkConditionalGroup_eventRemoveConditional_Parms, InConditional), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::NewProp_InConditional,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkConditionalGroup, nullptr, "RemoveConditional", Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::IsdkConditionalGroup_eventRemoveConditional_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::IsdkConditionalGroup_eventRemoveConditional_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkConditionalGroup::execRemoveConditional)
{
	P_GET_OBJECT(UIsdkConditional,Z_Param_InConditional);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveConditional(Z_Param_InConditional);
	P_NATIVE_END;
}
// ********** End Class UIsdkConditionalGroup Function RemoveConditional ***************************

// ********** Begin Class UIsdkConditionalGroup ****************************************************
void UIsdkConditionalGroup::StaticRegisterNativesUIsdkConditionalGroup()
{
	UClass* Class = UIsdkConditionalGroup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddConditional", &UIsdkConditionalGroup::execAddConditional },
		{ "GetConditionals", &UIsdkConditionalGroup::execGetConditionals },
		{ "IsEmpty", &UIsdkConditionalGroup::execIsEmpty },
		{ "RemoveConditional", &UIsdkConditionalGroup::execRemoveConditional },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkConditionalGroup;
UClass* UIsdkConditionalGroup::GetPrivateStaticClass()
{
	using TClass = UIsdkConditionalGroup;
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkConditionalGroup"),
			Z_Registration_Info_UClass_UIsdkConditionalGroup.InnerSingleton,
			StaticRegisterNativesUIsdkConditionalGroup,
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
	return Z_Registration_Info_UClass_UIsdkConditionalGroup.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkConditionalGroup_NoRegister()
{
	return UIsdkConditionalGroup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkConditionalGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkConditionalGroup\n * @brief Collection of IsdkConditionals that are resolved as a group (abstract base class)\n * bool.\n *\n * Stores IsdkConditionals as a TMap of Conditionals and delegates, provides multiple methods for\n * querying and updating the state of conditionals\n *\n * @see UIsdkConditional\n * @see UIsdkConditionalGroupAll\n * @see UIsdkConditionalGroupAny\n * @see UIsdkConditionalGroupNone\n * @see UIsdkConditionalGroupSingle\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Core/IsdkConditionalGroup.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/IsdkConditionalGroup.h" },
		{ "ToolTip", "@class UIsdkConditionalGroup\n@brief Collection of IsdkConditionals that are resolved as a group (abstract base class)\nbool.\n\nStores IsdkConditionals as a TMap of Conditionals and delegates, provides multiple methods for\nquerying and updating the state of conditionals\n\n@see UIsdkConditional\n@see UIsdkConditionalGroupAll\n@see UIsdkConditionalGroupAny\n@see UIsdkConditionalGroupNone\n@see UIsdkConditionalGroupSingle\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkConditionalGroup_AddConditional, "AddConditional" }, // 3732149531
		{ &Z_Construct_UFunction_UIsdkConditionalGroup_GetConditionals, "GetConditionals" }, // 403679540
		{ &Z_Construct_UFunction_UIsdkConditionalGroup_IsEmpty, "IsEmpty" }, // 3227085640
		{ &Z_Construct_UFunction_UIsdkConditionalGroup_RemoveConditional, "RemoveConditional" }, // 2690646651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkConditionalGroup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkConditionalGroup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkConditional,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkConditionalGroup_Statics::ClassParams = {
	&UIsdkConditionalGroup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkConditionalGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkConditionalGroup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkConditionalGroup()
{
	if (!Z_Registration_Info_UClass_UIsdkConditionalGroup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkConditionalGroup.OuterSingleton, Z_Construct_UClass_UIsdkConditionalGroup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkConditionalGroup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkConditionalGroup);
UIsdkConditionalGroup::~UIsdkConditionalGroup() {}
// ********** End Class UIsdkConditionalGroup ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkConditionalGroup, UIsdkConditionalGroup::StaticClass, TEXT("UIsdkConditionalGroup"), &Z_Registration_Info_UClass_UIsdkConditionalGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkConditionalGroup), 4176211476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h__Script_OculusInteraction_1208840737(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Core_IsdkConditionalGroup_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
