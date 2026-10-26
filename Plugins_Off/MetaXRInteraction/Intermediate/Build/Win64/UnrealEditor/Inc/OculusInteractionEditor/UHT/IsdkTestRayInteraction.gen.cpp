// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestRayInteraction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestRayInteraction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractable_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRayInteractableActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRayInteractableActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRayInteractorActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRayInteractorActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandPointerPose_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestRayInteractableComponent();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestRayInteractableComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestRayInteractorActor **********************************************
void AIsdkTestRayInteractorActor::StaticRegisterNativesAIsdkTestRayInteractorActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestRayInteractorActor;
UClass* AIsdkTestRayInteractorActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestRayInteractorActor;
	if (!Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestRayInteractorActor"),
			Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestRayInteractorActor,
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
	return Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestRayInteractorActor_NoRegister()
{
	return AIsdkTestRayInteractorActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestRayInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestHandPointerPose_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractorStateChangedHandler_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestHandPointerPose;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractorStateChangedHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestRayInteractorActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestRayInteractor = { "TestRayInteractor", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRayInteractorActor, TestRayInteractor), Z_Construct_UClass_UIsdkRayInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractor_MetaData), NewProp_TestRayInteractor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestHandPointerPose = { "TestHandPointerPose", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRayInteractorActor, TestHandPointerPose), Z_Construct_UClass_UIsdkFakeHandPointerPose_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestHandPointerPose_MetaData), NewProp_TestHandPointerPose_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestRayInteractorStateChangedHandler = { "TestRayInteractorStateChangedHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRayInteractorActor, TestRayInteractorStateChangedHandler), Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractorStateChangedHandler_MetaData), NewProp_TestRayInteractorStateChangedHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestRayInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestHandPointerPose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::NewProp_TestRayInteractorStateChangedHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::ClassParams = {
	&AIsdkTestRayInteractorActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestRayInteractorActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.OuterSingleton, Z_Construct_UClass_AIsdkTestRayInteractorActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestRayInteractorActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestRayInteractorActor);
AIsdkTestRayInteractorActor::~AIsdkTestRayInteractorActor() {}
// ********** End Class AIsdkTestRayInteractorActor ************************************************

// ********** Begin Class UIsdkTestRayInteractableComponent ****************************************
void UIsdkTestRayInteractableComponent::StaticRegisterNativesUIsdkTestRayInteractableComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent;
UClass* UIsdkTestRayInteractableComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkTestRayInteractableComponent;
	if (!Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestRayInteractableComponent"),
			Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.InnerSingleton,
			StaticRegisterNativesUIsdkTestRayInteractableComponent,
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
	return Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTestRayInteractableComponent_NoRegister()
{
	return UIsdkTestRayInteractableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkTestRayInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractableStateChangedHandler_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractableStateChangedHandler;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTestRayInteractableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::NewProp_TestRayInteractable = { "TestRayInteractable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTestRayInteractableComponent, TestRayInteractable), Z_Construct_UClass_UIsdkRayInteractable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractable_MetaData), NewProp_TestRayInteractable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::NewProp_TestRayInteractableStateChangedHandler = { "TestRayInteractableStateChangedHandler", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTestRayInteractableComponent, TestRayInteractableStateChangedHandler), Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractableStateChangedHandler_MetaData), NewProp_TestRayInteractableStateChangedHandler_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::NewProp_TestRayInteractable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::NewProp_TestRayInteractableStateChangedHandler,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::ClassParams = {
	&UIsdkTestRayInteractableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkTestRayInteractableComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.OuterSingleton, Z_Construct_UClass_UIsdkTestRayInteractableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkTestRayInteractableComponent);
UIsdkTestRayInteractableComponent::~UIsdkTestRayInteractableComponent() {}
// ********** End Class UIsdkTestRayInteractableComponent ******************************************

// ********** Begin Class AIsdkTestRayInteractableActor ********************************************
void AIsdkTestRayInteractableActor::StaticRegisterNativesAIsdkTestRayInteractableActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestRayInteractableActor;
UClass* AIsdkTestRayInteractableActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestRayInteractableActor;
	if (!Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestRayInteractableActor"),
			Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestRayInteractableActor,
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
	return Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestRayInteractableActor_NoRegister()
{
	return AIsdkTestRayInteractableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestRayInteraction.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractablePlane_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestRayInteractableBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRayInteraction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractablePlane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestRayInteractableBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestRayInteractableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::NewProp_TestRayInteractablePlane = { "TestRayInteractablePlane", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRayInteractableActor, TestRayInteractablePlane), Z_Construct_UClass_UIsdkTestRayInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractablePlane_MetaData), NewProp_TestRayInteractablePlane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::NewProp_TestRayInteractableBox = { "TestRayInteractableBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRayInteractableActor, TestRayInteractableBox), Z_Construct_UClass_UIsdkTestRayInteractableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestRayInteractableBox_MetaData), NewProp_TestRayInteractableBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::NewProp_TestRayInteractablePlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::NewProp_TestRayInteractableBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::ClassParams = {
	&AIsdkTestRayInteractableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestRayInteractableActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.OuterSingleton, Z_Construct_UClass_AIsdkTestRayInteractableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestRayInteractableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestRayInteractableActor);
AIsdkTestRayInteractableActor::~AIsdkTestRayInteractableActor() {}
// ********** End Class AIsdkTestRayInteractableActor **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRayInteraction_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestRayInteractorActor, AIsdkTestRayInteractorActor::StaticClass, TEXT("AIsdkTestRayInteractorActor"), &Z_Registration_Info_UClass_AIsdkTestRayInteractorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestRayInteractorActor), 2136574824U) },
		{ Z_Construct_UClass_UIsdkTestRayInteractableComponent, UIsdkTestRayInteractableComponent::StaticClass, TEXT("UIsdkTestRayInteractableComponent"), &Z_Registration_Info_UClass_UIsdkTestRayInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTestRayInteractableComponent), 762229905U) },
		{ Z_Construct_UClass_AIsdkTestRayInteractableActor, AIsdkTestRayInteractableActor::StaticClass, TEXT("AIsdkTestRayInteractableActor"), &Z_Registration_Info_UClass_AIsdkTestRayInteractableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestRayInteractableActor), 4087927751U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRayInteraction_h__Script_OculusInteractionEditor_1225117663(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRayInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRayInteraction_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
