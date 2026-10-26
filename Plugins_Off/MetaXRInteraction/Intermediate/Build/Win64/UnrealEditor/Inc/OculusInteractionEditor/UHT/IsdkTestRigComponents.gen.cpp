// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestRigComponents.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestRigComponents() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRigActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestRigActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHmdDataSource_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkTestHandRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestRigActor ********************************************************
void AIsdkTestRigActor::StaticRegisterNativesAIsdkTestRigActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestRigActor;
UClass* AIsdkTestRigActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestRigActor;
	if (!Z_Registration_Info_UClass_AIsdkTestRigActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestRigActor"),
			Z_Registration_Info_UClass_AIsdkTestRigActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestRigActor,
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
	return Z_Registration_Info_UClass_AIsdkTestRigActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestRigActor_NoRegister()
{
	return AIsdkTestRigActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestRigActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestRigComponents.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandVisuals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerVisuals_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionGroup_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigComponentBase_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeHmdDataSource_MetaData[] = {
		{ "Comment", "// Fakes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
		{ "ToolTip", "Fakes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeInteractor1_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeInteractor2_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FakeInteractor3_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorGroupConditional1_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorGroupConditional2_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractorGroupConditional3_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandMotionController_MetaData[] = {
		{ "Comment", "// Supporting Dependencies\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
		{ "ToolTip", "Supporting Dependencies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandMotionController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRigLeft_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestRigComponents.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerVisuals;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RigComponentBase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeHmdDataSource;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeInteractor1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeInteractor2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FakeInteractor3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorGroupConditional1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorGroupConditional2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractorGroupConditional3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHandMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHandMotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRigLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestRigActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_HandVisuals = { "HandVisuals", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, HandVisuals), Z_Construct_UClass_UIsdkHandVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandVisuals_MetaData), NewProp_HandVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_ControllerVisuals = { "ControllerVisuals", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, ControllerVisuals), Z_Construct_UClass_UIsdkControllerVisualsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerVisuals_MetaData), NewProp_ControllerVisuals_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, InputActions), Z_Construct_UClass_UIsdkInputActionsRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractionGroup = { "InteractionGroup", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, InteractionGroup), Z_Construct_UClass_UIsdkInteractionGroupRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionGroup_MetaData), NewProp_InteractionGroup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_RigComponentBase = { "RigComponentBase", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, RigComponentBase), Z_Construct_UClass_UIsdkTestHandRigComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigComponentBase_MetaData), NewProp_RigComponentBase_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeHmdDataSource = { "FakeHmdDataSource", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, FakeHmdDataSource), Z_Construct_UClass_UIsdkFakeHmdDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeHmdDataSource_MetaData), NewProp_FakeHmdDataSource_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor1 = { "FakeInteractor1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, FakeInteractor1), Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeInteractor1_MetaData), NewProp_FakeInteractor1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor2 = { "FakeInteractor2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, FakeInteractor2), Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeInteractor2_MetaData), NewProp_FakeInteractor2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor3 = { "FakeInteractor3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, FakeInteractor3), Z_Construct_UClass_UIsdkFakeSceneInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FakeInteractor3_MetaData), NewProp_FakeInteractor3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional1 = { "InteractorGroupConditional1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, InteractorGroupConditional1), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorGroupConditional1_MetaData), NewProp_InteractorGroupConditional1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional2 = { "InteractorGroupConditional2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, InteractorGroupConditional2), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorGroupConditional2_MetaData), NewProp_InteractorGroupConditional2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional3 = { "InteractorGroupConditional3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, InteractorGroupConditional3), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractorGroupConditional3_MetaData), NewProp_InteractorGroupConditional3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_LeftHandMotionController = { "LeftHandMotionController", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, LeftHandMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandMotionController_MetaData), NewProp_LeftHandMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_RightHandMotionController = { "RightHandMotionController", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, RightHandMotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandMotionController_MetaData), NewProp_RightHandMotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_ControllerRigLeft = { "ControllerRigLeft", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestRigActor, ControllerRigLeft), Z_Construct_UClass_UIsdkFakeControllerRigComponentLeft_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRigLeft_MetaData), NewProp_ControllerRigLeft_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestRigActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_HandVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_ControllerVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractionGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_RigComponentBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeHmdDataSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_FakeInteractor3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_InteractorGroupConditional3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_LeftHandMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_RightHandMotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestRigActor_Statics::NewProp_ControllerRigLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRigActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestRigActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRigActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestRigActor_Statics::ClassParams = {
	&AIsdkTestRigActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestRigActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRigActor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestRigActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestRigActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestRigActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestRigActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestRigActor.OuterSingleton, Z_Construct_UClass_AIsdkTestRigActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestRigActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestRigActor);
AIsdkTestRigActor::~AIsdkTestRigActor() {}
// ********** End Class AIsdkTestRigActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRigComponents_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestRigActor, AIsdkTestRigActor::StaticClass, TEXT("AIsdkTestRigActor"), &Z_Registration_Info_UClass_AIsdkTestRigActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestRigActor), 334467085U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRigComponents_h__Script_OculusInteractionEditor_2351126487(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRigComponents_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestRigComponents_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
