// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestGrabInteraction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestGrabInteraction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestGrabInteractableActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestGrabInteractableActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestGrabInteractorActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestGrabInteractorActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestGrabInteractorActor *********************************************
void AIsdkTestGrabInteractorActor::StaticRegisterNativesAIsdkTestGrabInteractorActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor;
UClass* AIsdkTestGrabInteractorActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestGrabInteractorActor;
	if (!Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestGrabInteractorActor"),
			Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestGrabInteractorActor,
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
	return Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestGrabInteractorActor_NoRegister()
{
	return AIsdkTestGrabInteractorActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestGrabInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestGrabInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGrabberComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestGrabInteraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestGrabberComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestGrabInteractorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::NewProp_TestGrabberComponent = { "TestGrabberComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestGrabInteractorActor, TestGrabberComponent), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGrabberComponent_MetaData), NewProp_TestGrabberComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::NewProp_TestGrabberComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::ClassParams = {
	&AIsdkTestGrabInteractorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestGrabInteractorActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.OuterSingleton, Z_Construct_UClass_AIsdkTestGrabInteractorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestGrabInteractorActor);
AIsdkTestGrabInteractorActor::~AIsdkTestGrabInteractorActor() {}
// ********** End Class AIsdkTestGrabInteractorActor ***********************************************

// ********** Begin Class AIsdkTestGrabInteractableActor *******************************************
void AIsdkTestGrabInteractableActor::StaticRegisterNativesAIsdkTestGrabInteractableActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor;
UClass* AIsdkTestGrabInteractableActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestGrabInteractableActor;
	if (!Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestGrabInteractableActor"),
			Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestGrabInteractableActor,
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
	return Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestGrabInteractableActor_NoRegister()
{
	return AIsdkTestGrabInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestGrabInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestGrabInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGrabbableComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestGrabInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestGrabTransformerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestGrabInteraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestGrabbableComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestGrabTransformerComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestGrabInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::NewProp_TestGrabbableComponent = { "TestGrabbableComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestGrabInteractableActor, TestGrabbableComponent), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGrabbableComponent_MetaData), NewProp_TestGrabbableComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::NewProp_TestGrabTransformerComponent = { "TestGrabTransformerComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestGrabInteractableActor, TestGrabTransformerComponent), Z_Construct_UClass_UIsdkGrabTransformerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestGrabTransformerComponent_MetaData), NewProp_TestGrabTransformerComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::NewProp_TestGrabbableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::NewProp_TestGrabTransformerComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::ClassParams = {
	&AIsdkTestGrabInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestGrabInteractableActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.OuterSingleton, Z_Construct_UClass_AIsdkTestGrabInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestGrabInteractableActor);
AIsdkTestGrabInteractableActor::~AIsdkTestGrabInteractableActor() {}
// ********** End Class AIsdkTestGrabInteractableActor *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestGrabInteraction_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestGrabInteractorActor, AIsdkTestGrabInteractorActor::StaticClass, TEXT("AIsdkTestGrabInteractorActor"), &Z_Registration_Info_UClass_AIsdkTestGrabInteractorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestGrabInteractorActor), 2820969288U) },
		{ Z_Construct_UClass_AIsdkTestGrabInteractableActor, AIsdkTestGrabInteractableActor::StaticClass, TEXT("AIsdkTestGrabInteractableActor"), &Z_Registration_Info_UClass_AIsdkTestGrabInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestGrabInteractableActor), 2528495227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestGrabInteraction_h__Script_OculusInteractionEditor_3372621533(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestGrabInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestGrabInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
