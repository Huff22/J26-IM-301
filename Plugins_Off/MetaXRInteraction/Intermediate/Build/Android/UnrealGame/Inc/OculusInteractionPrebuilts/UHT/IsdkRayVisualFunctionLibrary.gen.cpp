// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractorVisuals/IsdkRayVisualFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkRayVisualFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkRayInteractor_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary();
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OculusInteractionPrebuilts();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkRayVisualFunctionLibrary Function UpdateRayVisualWithRayInteractor **
struct Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics
{
	struct IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms
	{
		UIsdkRayVisualComponent* RayVisual;
		UIsdkRayInteractor* RayInteractor;
		float RaySelectStrength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Propagate state changes from the Ray Interactor to the Ray Visual, updating state and\n   * visibility as needed\n   * @param RayVisual Pointer to the Ray Visual component (cursor and PinchArrow) associated with\n   * the Ray Interactor\n   * @param RayInteractor Interactor component driving the changes in state\n   * @param RaySelectStrength Select strength to apply to the visual\n   */" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualFunctionLibrary.h" },
		{ "ToolTip", "@brief Propagate state changes from the Ray Interactor to the Ray Visual, updating state and\nvisibility as needed\n@param RayVisual Pointer to the Ray Visual component (cursor and PinchArrow) associated with\nthe Ray Interactor\n@param RayInteractor Interactor component driving the changes in state\n@param RaySelectStrength Select strength to apply to the visual" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayVisual_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayInteractor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayVisual;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RayInteractor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaySelectStrength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RayVisual = { "RayVisual", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms, RayVisual), Z_Construct_UClass_UIsdkRayVisualComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayVisual_MetaData), NewProp_RayVisual_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RayInteractor = { "RayInteractor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms, RayInteractor), Z_Construct_UClass_UIsdkRayInteractor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayInteractor_MetaData), NewProp_RayInteractor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RaySelectStrength = { "RaySelectStrength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms, RaySelectStrength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RayVisual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RayInteractor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::NewProp_RaySelectStrength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkRayVisualFunctionLibrary, nullptr, "UpdateRayVisualWithRayInteractor", Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::IsdkRayVisualFunctionLibrary_eventUpdateRayVisualWithRayInteractor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkRayVisualFunctionLibrary::execUpdateRayVisualWithRayInteractor)
{
	P_GET_OBJECT(UIsdkRayVisualComponent,Z_Param_RayVisual);
	P_GET_OBJECT(UIsdkRayInteractor,Z_Param_RayInteractor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RaySelectStrength);
	P_FINISH;
	P_NATIVE_BEGIN;
	UIsdkRayVisualFunctionLibrary::UpdateRayVisualWithRayInteractor(Z_Param_RayVisual,Z_Param_RayInteractor,Z_Param_RaySelectStrength);
	P_NATIVE_END;
}
// ********** End Class UIsdkRayVisualFunctionLibrary Function UpdateRayVisualWithRayInteractor ****

// ********** Begin Class UIsdkRayVisualFunctionLibrary ********************************************
void UIsdkRayVisualFunctionLibrary::StaticRegisterNativesUIsdkRayVisualFunctionLibrary()
{
	UClass* Class = UIsdkRayVisualFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateRayVisualWithRayInteractor", &UIsdkRayVisualFunctionLibrary::execUpdateRayVisualWithRayInteractor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary;
UClass* UIsdkRayVisualFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UIsdkRayVisualFunctionLibrary;
	if (!Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkRayVisualFunctionLibrary"),
			Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUIsdkRayVisualFunctionLibrary,
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
	return Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_NoRegister()
{
	return UIsdkRayVisualFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @class UIsdkRayVisualFunctionLibrary\n * @brief Blueprint Function Library used to support support Ray Visuals (cursor and pinch arrows)\n\n * @see UIsdkRayVisualComponent\n * @addtogroup InteractionSDKPrebuilts\n */" },
		{ "IncludePath", "InteractorVisuals/IsdkRayVisualFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/InteractorVisuals/IsdkRayVisualFunctionLibrary.h" },
		{ "ToolTip", "@class UIsdkRayVisualFunctionLibrary\n@brief Blueprint Function Library used to support support Ray Visuals (cursor and pinch arrows)\n\n@see UIsdkRayVisualComponent\n@addtogroup InteractionSDKPrebuilts" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkRayVisualFunctionLibrary_UpdateRayVisualWithRayInteractor, "UpdateRayVisualWithRayInteractor" }, // 2695804559
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkRayVisualFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OculusInteractionPrebuilts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::ClassParams = {
	&UIsdkRayVisualFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkRayVisualFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.OuterSingleton, Z_Construct_UClass_UIsdkRayVisualFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary.OuterSingleton;
}
UIsdkRayVisualFunctionLibrary::UIsdkRayVisualFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkRayVisualFunctionLibrary);
UIsdkRayVisualFunctionLibrary::~UIsdkRayVisualFunctionLibrary() {}
// ********** End Class UIsdkRayVisualFunctionLibrary **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkRayVisualFunctionLibrary, UIsdkRayVisualFunctionLibrary::StaticClass, TEXT("UIsdkRayVisualFunctionLibrary"), &Z_Registration_Info_UClass_UIsdkRayVisualFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkRayVisualFunctionLibrary), 680552190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h__Script_OculusInteractionPrebuilts_862895463(TEXT("/Script/OculusInteractionPrebuilts"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InteractorVisuals_IsdkRayVisualFunctionLibrary_h__Script_OculusInteractionPrebuilts_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
