// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystem/IsdkWorldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkInteractorComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWorldSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWorldSubsystem_NoRegister();
OCULUSINTERACTION_API UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FIsdkWorldFrameEventDelegate ******************************************
struct Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OculusInteraction, nullptr, "IsdkWorldFrameEventDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIsdkWorldFrameEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkWorldFrameEventDelegate)
{
	IsdkWorldFrameEventDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FIsdkWorldFrameEventDelegate ********************************************

// ********** Begin Class UIsdkWorldSubsystem ******************************************************
void UIsdkWorldSubsystem::StaticRegisterNativesUIsdkWorldSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkWorldSubsystem;
UClass* UIsdkWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkWorldSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkWorldSubsystem"),
			Z_Registration_Info_UClass_UIsdkWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkWorldSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkWorldSubsystem_NoRegister()
{
	return UIsdkWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Subsystem/IsdkWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameStartingEventDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameFinishedEventDelegate_MetaData[] = {
		{ "Category", "InteractionSDK" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredInteractorPayloads_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredInteractables_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystem/IsdkWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FrameStartingEventDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FrameFinishedEventDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredInteractorPayloads_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredInteractorPayloads;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredInteractables_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredInteractables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_FrameStartingEventDelegate = { "FrameStartingEventDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWorldSubsystem, FrameStartingEventDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameStartingEventDelegate_MetaData), NewProp_FrameStartingEventDelegate_MetaData) }; // 4271687820
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_FrameFinishedEventDelegate = { "FrameFinishedEventDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWorldSubsystem, FrameFinishedEventDelegate), Z_Construct_UDelegateFunction_OculusInteraction_IsdkWorldFrameEventDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameFinishedEventDelegate_MetaData), NewProp_FrameFinishedEventDelegate_MetaData) }; // 4271687820
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractorPayloads_Inner = { "RegisteredInteractorPayloads", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkInteractorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractorPayloads = { "RegisteredInteractorPayloads", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWorldSubsystem, RegisteredInteractorPayloads), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredInteractorPayloads_MetaData), NewProp_RegisteredInteractorPayloads_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractables_Inner = { "RegisteredInteractables", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIsdkInteractableComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractables = { "RegisteredInteractables", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkWorldSubsystem, RegisteredInteractables), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredInteractables_MetaData), NewProp_RegisteredInteractables_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkWorldSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_FrameStartingEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_FrameFinishedEventDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractorPayloads_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractorPayloads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractables_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkWorldSubsystem_Statics::NewProp_RegisteredInteractables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWorldSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkWorldSubsystem_Statics::ClassParams = {
	&UIsdkWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkWorldSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWorldSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkWorldSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkWorldSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkWorldSubsystem);
UIsdkWorldSubsystem::~UIsdkWorldSubsystem() {}
// ********** End Class UIsdkWorldSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkWorldSubsystem, UIsdkWorldSubsystem::StaticClass, TEXT("UIsdkWorldSubsystem"), &Z_Registration_Info_UClass_UIsdkWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkWorldSubsystem), 3816169517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h__Script_OculusInteraction_2017342605(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkWorldSubsystem_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
