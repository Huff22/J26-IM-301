// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystem/IsdkWidgetSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkWidgetSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase_NoRegister();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkVirtualUserInfo();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkWidgetSubsystemBase *************************************************
void UIsdkWidgetSubsystemBase::StaticRegisterNativesUIsdkWidgetSubsystemBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase;
UClass* UIsdkWidgetSubsystemBase::GetPrivateStaticClass()
{
	using TClass = UIsdkWidgetSubsystemBase;
	if (!Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkWidgetSubsystemBase"),
			Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.InnerSingleton,
			StaticRegisterNativesUIsdkWidgetSubsystemBase,
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
	return Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase_NoRegister()
{
	return UIsdkWidgetSubsystemBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystem/IsdkWidgetSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkWidgetSubsystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::ClassParams = {
	&UIsdkWidgetSubsystemBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkWidgetSubsystemBase()
{
	if (!Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.OuterSingleton, Z_Construct_UClass_UIsdkWidgetSubsystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase.OuterSingleton;
}
UIsdkWidgetSubsystemBase::UIsdkWidgetSubsystemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkWidgetSubsystemBase);
UIsdkWidgetSubsystemBase::~UIsdkWidgetSubsystemBase() {}
// ********** End Class UIsdkWidgetSubsystemBase ***************************************************

// ********** Begin ScriptStruct FIsdkVirtualUserInfo **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo;
class UScriptStruct* FIsdkVirtualUserInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, (UObject*)Z_Construct_UPackage__Script_OculusInteraction(), TEXT("IsdkVirtualUserInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualUserIndex_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerIndex_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualUserIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PointerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsdkVirtualUserInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::NewProp_VirtualUserIndex = { "VirtualUserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserInfo, VirtualUserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualUserIndex_MetaData), NewProp_VirtualUserIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::NewProp_PointerIndex = { "PointerIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FIsdkVirtualUserInfo, PointerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerIndex_MetaData), NewProp_PointerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::NewProp_VirtualUserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::NewProp_PointerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
	nullptr,
	&NewStructOps,
	"IsdkVirtualUserInfo",
	Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::PropPointers),
	sizeof(FIsdkVirtualUserInfo),
	alignof(FIsdkVirtualUserInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FIsdkVirtualUserInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.InnerSingleton, Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo.InnerSingleton;
}
// ********** End ScriptStruct FIsdkVirtualUserInfo ************************************************

// ********** Begin Class UIsdkWidgetSubsystem Function GetVirtualUserInfo *************************
struct Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics
{
	struct IsdkWidgetSubsystem_eventGetVirtualUserInfo_Parms
	{
		UObject* Interactor;
		FIsdkVirtualUserInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetSubsystem_eventGetVirtualUserInfo_Parms, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetSubsystem_eventGetVirtualUserInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1830661198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetSubsystem, nullptr, "GetVirtualUserInfo", Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventGetVirtualUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventGetVirtualUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetSubsystem::execGetVirtualUserInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsdkVirtualUserInfo*)Z_Param__Result=P_THIS->GetVirtualUserInfo(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetSubsystem Function GetVirtualUserInfo ***************************

// ********** Begin Class UIsdkWidgetSubsystem Function RegisterVirtualUserInfo ********************
struct Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics
{
	struct IsdkWidgetSubsystem_eventRegisterVirtualUserInfo_Parms
	{
		UObject* Interactor;
		FIsdkVirtualUserInfo VirtualUserInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualUserInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetSubsystem_eventRegisterVirtualUserInfo_Parms, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::NewProp_VirtualUserInfo = { "VirtualUserInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetSubsystem_eventRegisterVirtualUserInfo_Parms, VirtualUserInfo), Z_Construct_UScriptStruct_FIsdkVirtualUserInfo, METADATA_PARAMS(0, nullptr) }; // 1830661198
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::NewProp_VirtualUserInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetSubsystem, nullptr, "RegisterVirtualUserInfo", Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventRegisterVirtualUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventRegisterVirtualUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetSubsystem::execRegisterVirtualUserInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Interactor);
	P_GET_STRUCT(FIsdkVirtualUserInfo,Z_Param_VirtualUserInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterVirtualUserInfo(Z_Param_Interactor,Z_Param_VirtualUserInfo);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetSubsystem Function RegisterVirtualUserInfo **********************

// ********** Begin Class UIsdkWidgetSubsystem Function UnregisterVirtualUserInfo ******************
struct Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics
{
	struct IsdkWidgetSubsystem_eventUnregisterVirtualUserInfo_Parms
	{
		UObject* Interactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkWidgetSubsystem_eventUnregisterVirtualUserInfo_Parms, Interactor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkWidgetSubsystem, nullptr, "UnregisterVirtualUserInfo", Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventUnregisterVirtualUserInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::IsdkWidgetSubsystem_eventUnregisterVirtualUserInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkWidgetSubsystem::execUnregisterVirtualUserInfo)
{
	P_GET_OBJECT(UObject,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterVirtualUserInfo(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Class UIsdkWidgetSubsystem Function UnregisterVirtualUserInfo ********************

// ********** Begin Class UIsdkWidgetSubsystem *****************************************************
void UIsdkWidgetSubsystem::StaticRegisterNativesUIsdkWidgetSubsystem()
{
	UClass* Class = UIsdkWidgetSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetVirtualUserInfo", &UIsdkWidgetSubsystem::execGetVirtualUserInfo },
		{ "RegisterVirtualUserInfo", &UIsdkWidgetSubsystem::execRegisterVirtualUserInfo },
		{ "UnregisterVirtualUserInfo", &UIsdkWidgetSubsystem::execUnregisterVirtualUserInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkWidgetSubsystem;
UClass* UIsdkWidgetSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkWidgetSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkWidgetSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkWidgetSubsystem"),
			Z_Registration_Info_UClass_UIsdkWidgetSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkWidgetSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkWidgetSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkWidgetSubsystem_NoRegister()
{
	return UIsdkWidgetSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkWidgetSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds information specific to interacting with Slate\n */" },
		{ "IncludePath", "Subsystem/IsdkWidgetSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWidgetSubsystem.h" },
		{ "ToolTip", "Holds information specific to interacting with Slate" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkWidgetSubsystem_GetVirtualUserInfo, "GetVirtualUserInfo" }, // 2533099813
		{ &Z_Construct_UFunction_UIsdkWidgetSubsystem_RegisterVirtualUserInfo, "RegisterVirtualUserInfo" }, // 3829625893
		{ &Z_Construct_UFunction_UIsdkWidgetSubsystem_UnregisterVirtualUserInfo, "UnregisterVirtualUserInfo" }, // 926897141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkWidgetSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkWidgetSubsystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::ClassParams = {
	&UIsdkWidgetSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkWidgetSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkWidgetSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkWidgetSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkWidgetSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkWidgetSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkWidgetSubsystem);
UIsdkWidgetSubsystem::~UIsdkWidgetSubsystem() {}
// ********** End Class UIsdkWidgetSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FIsdkVirtualUserInfo::StaticStruct, Z_Construct_UScriptStruct_FIsdkVirtualUserInfo_Statics::NewStructOps, TEXT("IsdkVirtualUserInfo"), &Z_Registration_Info_UScriptStruct_FIsdkVirtualUserInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsdkVirtualUserInfo), 1830661198U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkWidgetSubsystemBase, UIsdkWidgetSubsystemBase::StaticClass, TEXT("UIsdkWidgetSubsystemBase"), &Z_Registration_Info_UClass_UIsdkWidgetSubsystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkWidgetSubsystemBase), 4015882754U) },
		{ Z_Construct_UClass_UIsdkWidgetSubsystem, UIsdkWidgetSubsystem::StaticClass, TEXT("UIsdkWidgetSubsystem"), &Z_Registration_Info_UClass_UIsdkWidgetSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkWidgetSubsystem), 845803156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_471987869(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWidgetSubsystem_h__Script_OculusInteraction_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
