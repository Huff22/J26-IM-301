// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/GrabDetectors/IsdkGrabDetector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkGrabDetector() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabberComponent_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabDetector_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkGrabDetector ********************************************************
void UIsdkGrabDetector::StaticRegisterNativesUIsdkGrabDetector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkGrabDetector;
UClass* UIsdkGrabDetector::GetPrivateStaticClass()
{
	using TClass = UIsdkGrabDetector;
	if (!Z_Registration_Info_UClass_UIsdkGrabDetector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkGrabDetector"),
			Z_Registration_Info_UClass_UIsdkGrabDetector.InnerSingleton,
			StaticRegisterNativesUIsdkGrabDetector,
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
	return Z_Registration_Info_UClass_UIsdkGrabDetector.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkGrabDetector_NoRegister()
{
	return UIsdkGrabDetector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkGrabDetector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UIsdkGrabDetector is an abstract base class that provides a grab interaction with a means of\n * detecting grabbables (eg, by hand, distance, or ray).  It is intended to be used by\n * UIsdkGrabberComponent to support multiple grab behaviors.\n *\n * @see UIsdkGrabberComponent\n * @see UIsdkHandGrabDetector\n * @see UIsdkRayGrabDetector\n * @see UIsdkDistanceGrabDetector\n */" },
		{ "IncludePath", "Interaction/GrabDetectors/IsdkGrabDetector.h" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkGrabDetector.h" },
		{ "ToolTip", "UIsdkGrabDetector is an abstract base class that provides a grab interaction with a means of\ndetecting grabbables (eg, by hand, distance, or ray).  It is intended to be used by\nUIsdkGrabberComponent to support multiple grab behaviors.\n\n@see UIsdkGrabberComponent\n@see UIsdkHandGrabDetector\n@see UIsdkRayGrabDetector\n@see UIsdkDistanceGrabDetector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabberComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Interaction/GrabDetectors/IsdkGrabDetector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrabberComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkGrabDetector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkGrabDetector_Statics::NewProp_GrabberComponent = { "GrabberComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkGrabDetector, GrabberComponent), Z_Construct_UClass_UIsdkGrabberComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabberComponent_MetaData), NewProp_GrabberComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkGrabDetector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkGrabDetector_Statics::NewProp_GrabberComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabDetector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkGrabDetector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabDetector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkGrabDetector_Statics::ClassParams = {
	&UIsdkGrabDetector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsdkGrabDetector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabDetector_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkGrabDetector_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkGrabDetector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkGrabDetector()
{
	if (!Z_Registration_Info_UClass_UIsdkGrabDetector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkGrabDetector.OuterSingleton, Z_Construct_UClass_UIsdkGrabDetector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkGrabDetector.OuterSingleton;
}
UIsdkGrabDetector::UIsdkGrabDetector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkGrabDetector);
UIsdkGrabDetector::~UIsdkGrabDetector() {}
// ********** End Class UIsdkGrabDetector **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkGrabDetector_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkGrabDetector, UIsdkGrabDetector::StaticClass, TEXT("UIsdkGrabDetector"), &Z_Registration_Info_UClass_UIsdkGrabDetector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkGrabDetector), 957407316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkGrabDetector_h__Script_OculusInteraction_288948890(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkGrabDetector_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
