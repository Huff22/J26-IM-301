// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Grabbable/IsdkTransformer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkTransformer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITransformer_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkTransformer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteraction();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkTransformer *********************************************************
void UIsdkTransformer::StaticRegisterNativesUIsdkTransformer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkTransformer;
UClass* UIsdkTransformer::GetPrivateStaticClass()
{
	using TClass = UIsdkTransformer;
	if (!Z_Registration_Info_UClass_UIsdkTransformer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkTransformer"),
			Z_Registration_Info_UClass_UIsdkTransformer.InnerSingleton,
			StaticRegisterNativesUIsdkTransformer,
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
	return Z_Registration_Info_UClass_UIsdkTransformer.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkTransformer_NoRegister()
{
	return UIsdkTransformer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkTransformer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * @class UIsdkTransformer\n * @brief Abstract class that implements baseline functionality from IIsdkITransformer for child\n * transformer classes to further implement\n * @see IIsdkITransformer\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "Interaction/Grabbable/IsdkTransformer.h" },
		{ "ModuleRelativePath", "Public/Interaction/Grabbable/IsdkTransformer.h" },
		{ "ToolTip", "@class UIsdkTransformer\n@brief Abstract class that implements baseline functionality from IIsdkITransformer for child\ntransformer classes to further implement\n@see IIsdkITransformer\n@addtogroup InteractionSDK" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkTransformer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkTransformer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTransformer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkTransformer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkITransformer_NoRegister, (int32)VTABLE_OFFSET(UIsdkTransformer, IIsdkITransformer), false },  // 3267274176
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkTransformer_Statics::ClassParams = {
	&UIsdkTransformer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkTransformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkTransformer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkTransformer()
{
	if (!Z_Registration_Info_UClass_UIsdkTransformer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkTransformer.OuterSingleton, Z_Construct_UClass_UIsdkTransformer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkTransformer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkTransformer);
UIsdkTransformer::~UIsdkTransformer() {}
// ********** End Class UIsdkTransformer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformer_h__Script_OculusInteraction_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkTransformer, UIsdkTransformer::StaticClass, TEXT("UIsdkTransformer"), &Z_Registration_Info_UClass_UIsdkTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkTransformer), 3155338642U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformer_h__Script_OculusInteraction_3998013451(TEXT("/Script/OculusInteraction"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformer_h__Script_OculusInteraction_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_Grabbable_IsdkTransformer_h__Script_OculusInteraction_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
