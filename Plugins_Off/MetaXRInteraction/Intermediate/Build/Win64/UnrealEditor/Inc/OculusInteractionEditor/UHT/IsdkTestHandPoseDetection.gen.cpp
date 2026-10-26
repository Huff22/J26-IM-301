// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/IsdkTestHandPoseDetection.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTestHandPoseDetection() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestHandPoseDetectionActor();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_NoRegister();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIsdkTestHandPoseDetectionActor ******************************************
void AIsdkTestHandPoseDetectionActor::StaticRegisterNativesAIsdkTestHandPoseDetectionActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor;
UClass* AIsdkTestHandPoseDetectionActor::GetPrivateStaticClass()
{
	using TClass = AIsdkTestHandPoseDetectionActor;
	if (!Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTestHandPoseDetectionActor"),
			Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.InnerSingleton,
			StaticRegisterNativesAIsdkTestHandPoseDetectionActor,
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
	return Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_NoRegister()
{
	return AIsdkTestHandPoseDetectionActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/IsdkTestHandPoseDetection.h" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestHandPoseDetection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestDataSourceExternal_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestHandPoseDetection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestTrackedHandVisual_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Tests/IsdkTestHandPoseDetection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestFingerPinchGrabRecognizer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/IsdkTestHandPoseDetection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestDataSourceExternal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestTrackedHandVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestFingerPinchGrabRecognizer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIsdkTestHandPoseDetectionActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestDataSourceExternal = { "TestDataSourceExternal", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestHandPoseDetectionActor, TestDataSourceExternal), Z_Construct_UClass_UIsdkFakeHandDataSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestDataSourceExternal_MetaData), NewProp_TestDataSourceExternal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestTrackedHandVisual = { "TestTrackedHandVisual", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestHandPoseDetectionActor, TestTrackedHandVisual), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestTrackedHandVisual_MetaData), NewProp_TestTrackedHandVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestFingerPinchGrabRecognizer = { "TestFingerPinchGrabRecognizer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIsdkTestHandPoseDetectionActor, TestFingerPinchGrabRecognizer), Z_Construct_UClass_UIsdkHandFingerPinchGrabRecognizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestFingerPinchGrabRecognizer_MetaData), NewProp_TestFingerPinchGrabRecognizer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestDataSourceExternal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestTrackedHandVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::NewProp_TestFingerPinchGrabRecognizer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::ClassParams = {
	&AIsdkTestHandPoseDetectionActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIsdkTestHandPoseDetectionActor()
{
	if (!Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.OuterSingleton, Z_Construct_UClass_AIsdkTestHandPoseDetectionActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIsdkTestHandPoseDetectionActor);
AIsdkTestHandPoseDetectionActor::~AIsdkTestHandPoseDetectionActor() {}
// ********** End Class AIsdkTestHandPoseDetectionActor ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestHandPoseDetection_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIsdkTestHandPoseDetectionActor, AIsdkTestHandPoseDetectionActor::StaticClass, TEXT("AIsdkTestHandPoseDetectionActor"), &Z_Registration_Info_UClass_AIsdkTestHandPoseDetectionActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIsdkTestHandPoseDetectionActor), 3191327308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestHandPoseDetection_h__Script_OculusInteractionEditor_2714182065(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestHandPoseDetection_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Private_Tests_IsdkTestHandPoseDetection_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
