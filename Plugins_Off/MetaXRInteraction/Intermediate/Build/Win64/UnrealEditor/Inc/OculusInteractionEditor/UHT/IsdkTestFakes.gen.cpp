// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestFakes.h"
#include "Interaction/IsdkIInteractableState.h"
#include "Interaction/IsdkIInteractorState.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestFakes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkSceneInteractorComponent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractableStateEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent();
OCULUSINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FIsdkInteractorStateEvent();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandDataSource();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandPointerPose();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandPointerPose_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHmdDataSource();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHmdDataSource_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeSceneInteractor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestHandRigComponent();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestHandRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRigComponent();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFakeTrackingDataSubsystem *******************************************
void UIsdkFakeTrackingDataSubsystem::StaticRegisterNativesUIsdkFakeTrackingDataSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem;
UClass* UIsdkFakeTrackingDataSubsystem::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeTrackingDataSubsystem;
	if (!Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeTrackingDataSubsystem"),
			Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.InnerSingleton,
			StaticRegisterNativesUIsdkFakeTrackingDataSubsystem,
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
	return Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_NoRegister()
{
	return UIsdkFakeTrackingDataSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandDataSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerDataSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerDataSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeTrackingDataSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::NewProp_HandDataSource = { "HandDataSource", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFakeTrackingDataSubsystem, HandDataSource), Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandDataSource_MetaData), NewProp_HandDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::NewProp_ControllerDataSource = { "ControllerDataSource", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFakeTrackingDataSubsystem, ControllerDataSource), Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerDataSource_MetaData), NewProp_ControllerDataSource_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::NewProp_HandDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::NewProp_ControllerDataSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister, (int32)VTABLE_OFFSET(UIsdkFakeTrackingDataSubsystem, IIsdkITrackingDataSubsystem), false },  // 3351586210
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::ClassParams = {
	&UIsdkFakeTrackingDataSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.OuterSingleton, Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeTrackingDataSubsystem);
UIsdkFakeTrackingDataSubsystem::~UIsdkFakeTrackingDataSubsystem() {}
// ********** End Class UIsdkFakeTrackingDataSubsystem *********************************************

// ********** Begin Class UIsdkFakeHandDataSource **************************************************
void UIsdkFakeHandDataSource::StaticRegisterNativesUIsdkFakeHandDataSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeHandDataSource;
UClass* UIsdkFakeHandDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeHandDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFakeHandDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeHandDataSource"),
			Z_Registration_Info_UClass_UIsdkFakeHandDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFakeHandDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFakeHandDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister()
{
	return UIsdkFakeHandDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeHandDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsConnected_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsConnected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeHandDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFakeHandDataSource, IsConnected), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsConnected_MetaData), NewProp_IsConnected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::NewProp_IsConnected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFakeHandDataSource, IIsdkIRootPose), false },  // 2159373520
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFakeHandDataSource, IIsdkIHandPointerPose), false },  // 262544849
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::ClassParams = {
	&UIsdkFakeHandDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeHandDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeHandDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeHandDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFakeHandDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeHandDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeHandDataSource);
UIsdkFakeHandDataSource::~UIsdkFakeHandDataSource() {}
// ********** End Class UIsdkFakeHandDataSource ****************************************************

// ********** Begin Class UIsdkFakeHmdDataSource ***************************************************
void UIsdkFakeHmdDataSource::StaticRegisterNativesUIsdkFakeHmdDataSource()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeHmdDataSource;
UClass* UIsdkFakeHmdDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeHmdDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeHmdDataSource"),
			Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFakeHmdDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeHmdDataSource_NoRegister()
{
	return UIsdkFakeHmdDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeHmdDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHmdDataSource_NoRegister, (int32)VTABLE_OFFSET(UIsdkFakeHmdDataSource, IIsdkIHmdDataSource), false },  // 1922529606
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::ClassParams = {
	&UIsdkFakeHmdDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeHmdDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFakeHmdDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeHmdDataSource.OuterSingleton;
}
UIsdkFakeHmdDataSource::UIsdkFakeHmdDataSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeHmdDataSource);
UIsdkFakeHmdDataSource::~UIsdkFakeHmdDataSource() {}
// ********** End Class UIsdkFakeHmdDataSource *****************************************************

// ********** Begin Class UIsdkFakeControllerRigComponentLeft **************************************
void UIsdkFakeControllerRigComponentLeft::StaticRegisterNativesUIsdkFakeControllerRigComponentLeft()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft;
UClass* UIsdkFakeControllerRigComponentLeft::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeControllerRigComponentLeft;
	if (!Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeControllerRigComponentLeft"),
			Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.InnerSingleton,
			StaticRegisterNativesUIsdkFakeControllerRigComponentLeft,
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
	return Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_NoRegister()
{
	return UIsdkFakeControllerRigComponentLeft::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeControllerRigComponentLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkControllerRigComponentLeft,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::ClassParams = {
	&UIsdkFakeControllerRigComponentLeft::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.OuterSingleton, Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft.OuterSingleton;
}
UIsdkFakeControllerRigComponentLeft::UIsdkFakeControllerRigComponentLeft() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeControllerRigComponentLeft);
UIsdkFakeControllerRigComponentLeft::~UIsdkFakeControllerRigComponentLeft() {}
// ********** End Class UIsdkFakeControllerRigComponentLeft ****************************************

// ********** Begin Class UIsdkFakeSceneInteractor *************************************************
void UIsdkFakeSceneInteractor::StaticRegisterNativesUIsdkFakeSceneInteractor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeSceneInteractor;
UClass* UIsdkFakeSceneInteractor::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeSceneInteractor;
	if (!Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeSceneInteractor"),
			Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.InnerSingleton,
			StaticRegisterNativesUIsdkFakeSceneInteractor,
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
	return Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister()
{
	return UIsdkFakeSceneInteractor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeSceneInteractor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkSceneInteractorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::ClassParams = {
	&UIsdkFakeSceneInteractor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeSceneInteractor()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.OuterSingleton, Z_Construct_UClass_UIsdkFakeSceneInteractor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeSceneInteractor.OuterSingleton;
}
UIsdkFakeSceneInteractor::UIsdkFakeSceneInteractor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeSceneInteractor);
UIsdkFakeSceneInteractor::~UIsdkFakeSceneInteractor() {}
// ********** End Class UIsdkFakeSceneInteractor ***************************************************

// ********** Begin Class UIsdkFakeHandPointerPose *************************************************
void UIsdkFakeHandPointerPose::StaticRegisterNativesUIsdkFakeHandPointerPose()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeHandPointerPose;
UClass* UIsdkFakeHandPointerPose::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeHandPointerPose;
	if (!Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeHandPointerPose"),
			Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.InnerSingleton,
			StaticRegisterNativesUIsdkFakeHandPointerPose,
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
	return Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeHandPointerPose_NoRegister()
{
	return UIsdkFakeHandPointerPose::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeHandPointerPose>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFakeHandPointerPose, IIsdkIHandPointerPose), false },  // 262544849
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::ClassParams = {
	&UIsdkFakeHandPointerPose::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeHandPointerPose()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.OuterSingleton, Z_Construct_UClass_UIsdkFakeHandPointerPose_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeHandPointerPose.OuterSingleton;
}
UIsdkFakeHandPointerPose::UIsdkFakeHandPointerPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeHandPointerPose);
UIsdkFakeHandPointerPose::~UIsdkFakeHandPointerPose() {}
// ********** End Class UIsdkFakeHandPointerPose ***************************************************

// ********** Begin Class UIsdkFakeInteractorStateChangedHandler Function HandleStateChanged *******
struct Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics
{
	struct IsdkFakeInteractorStateChangedHandler_eventHandleStateChanged_Parms
	{
		FIsdkInteractorStateEvent InteractorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::NewProp_InteractorState = { "InteractorState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFakeInteractorStateChangedHandler_eventHandleStateChanged_Parms, InteractorState), Z_Construct_UScriptStruct_FIsdkInteractorStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorState_MetaData), NewProp_InteractorState_MetaData) }; // 2370767474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::NewProp_InteractorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler, nullptr, "HandleStateChanged", Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::IsdkFakeInteractorStateChangedHandler_eventHandleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::IsdkFakeInteractorStateChangedHandler_eventHandleStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFakeInteractorStateChangedHandler::execHandleStateChanged)
{
	P_GET_STRUCT_REF(FIsdkInteractorStateEvent,Z_Param_Out_InteractorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStateChanged(Z_Param_Out_InteractorState);
	P_NATIVE_END;
}
// ********** End Class UIsdkFakeInteractorStateChangedHandler Function HandleStateChanged *********

// ********** Begin Class UIsdkFakeInteractorStateChangedHandler ***********************************
void UIsdkFakeInteractorStateChangedHandler::StaticRegisterNativesUIsdkFakeInteractorStateChangedHandler()
{
	UClass* Class = UIsdkFakeInteractorStateChangedHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStateChanged", &UIsdkFakeInteractorStateChangedHandler::execHandleStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler;
UClass* UIsdkFakeInteractorStateChangedHandler::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeInteractorStateChangedHandler;
	if (!Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeInteractorStateChangedHandler"),
			Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.InnerSingleton,
			StaticRegisterNativesUIsdkFakeInteractorStateChangedHandler,
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
	return Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_NoRegister()
{
	return UIsdkFakeInteractorStateChangedHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFakeInteractorStateChangedHandler_HandleStateChanged, "HandleStateChanged" }, // 385038235
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeInteractorStateChangedHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::ClassParams = {
	&UIsdkFakeInteractorStateChangedHandler::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.OuterSingleton, Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler.OuterSingleton;
}
UIsdkFakeInteractorStateChangedHandler::UIsdkFakeInteractorStateChangedHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeInteractorStateChangedHandler);
UIsdkFakeInteractorStateChangedHandler::~UIsdkFakeInteractorStateChangedHandler() {}
// ********** End Class UIsdkFakeInteractorStateChangedHandler *************************************

// ********** Begin Class UIsdkFakeInteractableStateChangedHandler Function HandleInteractablePointerEvent 
struct Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics
{
	struct IsdkFakeInteractableStateChangedHandler_eventHandleInteractablePointerEvent_Parms
	{
		FIsdkInteractionPointerEvent PointerEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFakeInteractableStateChangedHandler_eventHandleInteractablePointerEvent_Parms, PointerEvent), Z_Construct_UScriptStruct_FIsdkInteractionPointerEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointerEvent_MetaData), NewProp_PointerEvent_MetaData) }; // 384809535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::NewProp_PointerEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler, nullptr, "HandleInteractablePointerEvent", Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::IsdkFakeInteractableStateChangedHandler_eventHandleInteractablePointerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::IsdkFakeInteractableStateChangedHandler_eventHandleInteractablePointerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFakeInteractableStateChangedHandler::execHandleInteractablePointerEvent)
{
	P_GET_STRUCT_REF(FIsdkInteractionPointerEvent,Z_Param_Out_PointerEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleInteractablePointerEvent(Z_Param_Out_PointerEvent);
	P_NATIVE_END;
}
// ********** End Class UIsdkFakeInteractableStateChangedHandler Function HandleInteractablePointerEvent 

// ********** Begin Class UIsdkFakeInteractableStateChangedHandler Function HandleStateChanged *****
struct Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics
{
	struct IsdkFakeInteractableStateChangedHandler_eventHandleStateChanged_Parms
	{
		FIsdkInteractableStateEvent InteractableState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractableState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractableState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::NewProp_InteractableState = { "InteractableState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFakeInteractableStateChangedHandler_eventHandleStateChanged_Parms, InteractableState), Z_Construct_UScriptStruct_FIsdkInteractableStateEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractableState_MetaData), NewProp_InteractableState_MetaData) }; // 138227056
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::NewProp_InteractableState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler, nullptr, "HandleStateChanged", Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::IsdkFakeInteractableStateChangedHandler_eventHandleStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::IsdkFakeInteractableStateChangedHandler_eventHandleStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFakeInteractableStateChangedHandler::execHandleStateChanged)
{
	P_GET_STRUCT_REF(FIsdkInteractableStateEvent,Z_Param_Out_InteractableState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStateChanged(Z_Param_Out_InteractableState);
	P_NATIVE_END;
}
// ********** End Class UIsdkFakeInteractableStateChangedHandler Function HandleStateChanged *******

// ********** Begin Class UIsdkFakeInteractableStateChangedHandler *********************************
void UIsdkFakeInteractableStateChangedHandler::StaticRegisterNativesUIsdkFakeInteractableStateChangedHandler()
{
	UClass* Class = UIsdkFakeInteractableStateChangedHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleInteractablePointerEvent", &UIsdkFakeInteractableStateChangedHandler::execHandleInteractablePointerEvent },
		{ "HandleStateChanged", &UIsdkFakeInteractableStateChangedHandler::execHandleStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler;
UClass* UIsdkFakeInteractableStateChangedHandler::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeInteractableStateChangedHandler;
	if (!Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeInteractableStateChangedHandler"),
			Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.InnerSingleton,
			StaticRegisterNativesUIsdkFakeInteractableStateChangedHandler,
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
	return Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_NoRegister()
{
	return UIsdkFakeInteractableStateChangedHandler::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleInteractablePointerEvent, "HandleInteractablePointerEvent" }, // 1323230739
		{ &Z_Construct_UFunction_UIsdkFakeInteractableStateChangedHandler_HandleStateChanged, "HandleStateChanged" }, // 242329217
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeInteractableStateChangedHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::ClassParams = {
	&UIsdkFakeInteractableStateChangedHandler::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.OuterSingleton, Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler.OuterSingleton;
}
UIsdkFakeInteractableStateChangedHandler::UIsdkFakeInteractableStateChangedHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeInteractableStateChangedHandler);
UIsdkFakeInteractableStateChangedHandler::~UIsdkFakeInteractableStateChangedHandler() {}
// ********** End Class UIsdkFakeInteractableStateChangedHandler ***********************************

// ********** Begin Class UIsdkFakeTrackedDataSourceRigComponent ***********************************
void UIsdkFakeTrackedDataSourceRigComponent::StaticRegisterNativesUIsdkFakeTrackedDataSourceRigComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent;
UClass* UIsdkFakeTrackedDataSourceRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkFakeTrackedDataSourceRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFakeTrackedDataSourceRigComponent"),
			Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkFakeTrackedDataSourceRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_NoRegister()
{
	return UIsdkFakeTrackedDataSourceRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFakeTrackedDataSourceRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::NewProp_FakeMeshComponent = { "FakeMeshComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFakeTrackedDataSourceRigComponent, FakeMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeMeshComponent_MetaData), NewProp_FakeMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::NewProp_FakeMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkTrackedDataSourceRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::ClassParams = {
	&UIsdkFakeTrackedDataSourceRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFakeTrackedDataSourceRigComponent);
UIsdkFakeTrackedDataSourceRigComponent::~UIsdkFakeTrackedDataSourceRigComponent() {}
// ********** End Class UIsdkFakeTrackedDataSourceRigComponent *************************************

// ********** Begin Class UIsdkTestHandRigComponent ************************************************
void UIsdkTestHandRigComponent::StaticRegisterNativesUIsdkTestHandRigComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTestHandRigComponent;
UClass* UIsdkTestHandRigComponent::GetPrivateStaticClass()
{
	using TClass = UIsdkTestHandRigComponent;
	if (!Z_Registration_Info_UClass_UIsdkTestHandRigComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestHandRigComponent"),
			Z_Registration_Info_UClass_UIsdkTestHandRigComponent.InnerSingleton,
			StaticRegisterNativesUIsdkTestHandRigComponent,
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
	return Z_Registration_Info_UClass_UIsdkTestHandRigComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTestHandRigComponent_NoRegister()
{
	return UIsdkTestHandRigComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTestHandRigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Test implementation of abstract UIsdkRigComponent, so that we can test base class functionality.\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Tests/IsdkTestFakes.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
		{ "ToolTip", "Test implementation of abstract UIsdkRigComponent, so that we can test base class functionality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeVisuals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestFakes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTestHandRigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::NewProp_FakeVisuals = { "FakeVisuals", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkTestHandRigComponent, FakeVisuals), Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeVisuals_MetaData), NewProp_FakeVisuals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::NewProp_FakeVisuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkRigComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::ClassParams = {
	&UIsdkTestHandRigComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkTestHandRigComponent()
{
	if (!Z_Registration_Info_UClass_UIsdkTestHandRigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTestHandRigComponent.OuterSingleton, Z_Construct_UClass_UIsdkTestHandRigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTestHandRigComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkTestHandRigComponent);
UIsdkTestHandRigComponent::~UIsdkTestHandRigComponent() {}
// ********** End Class UIsdkTestHandRigComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestFakes_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFakeTrackingDataSubsystem, UIsdkFakeTrackingDataSubsystem::StaticClass, TEXT("UIsdkFakeTrackingDataSubsystem"), &Z_Registration_Info_UClass_UIsdkFakeTrackingDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeTrackingDataSubsystem), 471675417U) },
		{ Z_Construct_UClass_UIsdkFakeHandDataSource, UIsdkFakeHandDataSource::StaticClass, TEXT("UIsdkFakeHandDataSource"), &Z_Registration_Info_UClass_UIsdkFakeHandDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeHandDataSource), 2376408397U) },
		{ Z_Construct_UClass_UIsdkFakeHmdDataSource, UIsdkFakeHmdDataSource::StaticClass, TEXT("UIsdkFakeHmdDataSource"), &Z_Registration_Info_UClass_UIsdkFakeHmdDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeHmdDataSource), 2360699202U) },
		{ Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft, UIsdkFakeControllerRigComponentLeft::StaticClass, TEXT("UIsdkFakeControllerRigComponentLeft"), &Z_Registration_Info_UClass_UIsdkFakeControllerRigComponentLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeControllerRigComponentLeft), 488919491U) },
		{ Z_Construct_UClass_UIsdkFakeSceneInteractor, UIsdkFakeSceneInteractor::StaticClass, TEXT("UIsdkFakeSceneInteractor"), &Z_Registration_Info_UClass_UIsdkFakeSceneInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeSceneInteractor), 1647794144U) },
		{ Z_Construct_UClass_UIsdkFakeHandPointerPose, UIsdkFakeHandPointerPose::StaticClass, TEXT("UIsdkFakeHandPointerPose"), &Z_Registration_Info_UClass_UIsdkFakeHandPointerPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeHandPointerPose), 22197770U) },
		{ Z_Construct_UClass_UIsdkFakeInteractorStateChangedHandler, UIsdkFakeInteractorStateChangedHandler::StaticClass, TEXT("UIsdkFakeInteractorStateChangedHandler"), &Z_Registration_Info_UClass_UIsdkFakeInteractorStateChangedHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeInteractorStateChangedHandler), 3316288297U) },
		{ Z_Construct_UClass_UIsdkFakeInteractableStateChangedHandler, UIsdkFakeInteractableStateChangedHandler::StaticClass, TEXT("UIsdkFakeInteractableStateChangedHandler"), &Z_Registration_Info_UClass_UIsdkFakeInteractableStateChangedHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeInteractableStateChangedHandler), 2999839865U) },
		{ Z_Construct_UClass_UIsdkFakeTrackedDataSourceRigComponent, UIsdkFakeTrackedDataSourceRigComponent::StaticClass, TEXT("UIsdkFakeTrackedDataSourceRigComponent"), &Z_Registration_Info_UClass_UIsdkFakeTrackedDataSourceRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFakeTrackedDataSourceRigComponent), 1696916216U) },
		{ Z_Construct_UClass_UIsdkTestHandRigComponent, UIsdkTestHandRigComponent::StaticClass, TEXT("UIsdkTestHandRigComponent"), &Z_Registration_Info_UClass_UIsdkTestHandRigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTestHandRigComponent), 973767838U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestFakes_h__Script_OculusInteractionEditor_2311892823(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestFakes_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestFakes_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
