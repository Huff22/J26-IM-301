// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IsdkHandPoseDetectionProfileFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkHandPoseDetectionProfileFactory() {}

// ********** Begin Cross Module References ********************************************************
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory();
OCULUSINTERACTIONEDITOR_API UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_OculusInteractionEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkHandPoseDetectionProfileFactory *************************************
void UIsdkHandPoseDetectionProfileFactory::StaticRegisterNativesUIsdkHandPoseDetectionProfileFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory;
UClass* UIsdkHandPoseDetectionProfileFactory::GetPrivateStaticClass()
{
	using TClass = UIsdkHandPoseDetectionProfileFactory;
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkHandPoseDetectionProfileFactory"),
			Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.InnerSingleton,
			StaticRegisterNativesUIsdkHandPoseDetectionProfileFactory,
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
	return Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_NoRegister()
{
	return UIsdkHandPoseDetectionProfileFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "IncludePath", "IsdkHandPoseDetectionProfileFactory.h" },
		{ "ModuleRelativePath", "Public/IsdkHandPoseDetectionProfileFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkHandPoseDetectionProfileFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::ClassParams = {
	&UIsdkHandPoseDetectionProfileFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory()
{
	if (!Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.OuterSingleton, Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkHandPoseDetectionProfileFactory);
UIsdkHandPoseDetectionProfileFactory::~UIsdkHandPoseDetectionProfileFactory() {}
// ********** End Class UIsdkHandPoseDetectionProfileFactory ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDetectionProfileFactory_h__Script_OculusInteractionEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkHandPoseDetectionProfileFactory, UIsdkHandPoseDetectionProfileFactory::StaticClass, TEXT("UIsdkHandPoseDetectionProfileFactory"), &Z_Registration_Info_UClass_UIsdkHandPoseDetectionProfileFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkHandPoseDetectionProfileFactory), 1851935273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDetectionProfileFactory_h__Script_OculusInteractionEditor_3509763327(TEXT("/Script/OculusInteractionEditor"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDetectionProfileFactory_h__Script_OculusInteractionEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionEditor_Public_IsdkHandPoseDetectionProfileFactory_h__Script_OculusInteractionEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
