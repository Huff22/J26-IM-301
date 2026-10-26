// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataSources/IsdkFromOpenXRControllerDataSource.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIsdkFromOpenXRControllerDataSource() {}

// ********** Begin Cross Module References ********************************************************
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource();
ISDKDATASOURCESOPENXR_API UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditional_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConditionalBool_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkExternalHandDataSource();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister();
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPose_NoRegister();
UPackage* Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UIsdkFromOpenXRControllerDataSource Function GetMotionController *********
struct Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics
{
	struct IsdkFromOpenXRControllerDataSource_eventGetMotionController_Parms
	{
		UMotionControllerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the motion controller component associated with this data source.\n   * @return UMotionControllerComponent* Pointer to the motion controller component.\n   *\n   * This method provides access to the motion controller component used by this data source,\n   * allowing other systems to interact with or modify the controller if needed.\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
		{ "ToolTip", "@brief Retrieves the motion controller component associated with this data source.\n@return UMotionControllerComponent* Pointer to the motion controller component.\n\nThis method provides access to the motion controller component used by this data source,\nallowing other systems to interact with or modify the controller if needed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRControllerDataSource_eventGetMotionController_Parms, ReturnValue), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource, nullptr, "GetMotionController", Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::IsdkFromOpenXRControllerDataSource_eventGetMotionController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::IsdkFromOpenXRControllerDataSource_eventGetMotionController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRControllerDataSource::execGetMotionController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMotionControllerComponent**)Z_Param__Result=P_THIS->GetMotionController();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRControllerDataSource Function GetMotionController ***********

// ********** Begin Class UIsdkFromOpenXRControllerDataSource Function GetRootPoseConnectedConditional_Implementation 
struct Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics
{
	struct IsdkFromOpenXRControllerDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms
	{
		UIsdkConditional* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "InteractionSDK" },
		{ "Comment", "/**\n   * @brief Retrieves the status of the root pose connection.\n   * @return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\n   * connection status of the root pose.\n   *\n   * This method checks if the root pose connection is currently active and valid. The returned\n   * `UIsdkConditional` object encapsulates this status and can trigger events when the connection\n   * status changes. For example, this is used to check if the controller should be visible and if\n   * the interaction rig components should be enabled/disabled.\n   * @see UIsdkTrackedDataSourceRigComponent\n   * @see UIsdkPokeInteractionRigComponent\n   * @see UIsdkGrabInteractionRigComponent\n   */" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
		{ "ToolTip", "@brief Retrieves the status of the root pose connection.\n@return UIsdkConditional* A pointer to the `UIsdkConditional` object that represents the\nconnection status of the root pose.\n\nThis method checks if the root pose connection is currently active and valid. The returned\n`UIsdkConditional` object encapsulates this status and can trigger events when the connection\nstatus changes. For example, this is used to check if the controller should be visible and if\nthe interaction rig components should be enabled/disabled.\n@see UIsdkTrackedDataSourceRigComponent\n@see UIsdkPokeInteractionRigComponent\n@see UIsdkGrabInteractionRigComponent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsdkFromOpenXRControllerDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms, ReturnValue), Z_Construct_UClass_UIsdkConditional_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource, nullptr, "GetRootPoseConnectedConditional_Implementation", Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromOpenXRControllerDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::IsdkFromOpenXRControllerDataSource_eventGetRootPoseConnectedConditional_Implementation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsdkFromOpenXRControllerDataSource::execGetRootPoseConnectedConditional_Implementation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UIsdkConditional**)Z_Param__Result=P_THIS->GetRootPoseConnectedConditional_Implementation();
	P_NATIVE_END;
}
// ********** End Class UIsdkFromOpenXRControllerDataSource Function GetRootPoseConnectedConditional_Implementation 

// ********** Begin Class UIsdkFromOpenXRControllerDataSource **************************************
void UIsdkFromOpenXRControllerDataSource::StaticRegisterNativesUIsdkFromOpenXRControllerDataSource()
{
	UClass* Class = UIsdkFromOpenXRControllerDataSource::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMotionController", &UIsdkFromOpenXRControllerDataSource::execGetMotionController },
		{ "GetRootPoseConnectedConditional_Implementation", &UIsdkFromOpenXRControllerDataSource::execGetRootPoseConnectedConditional_Implementation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource;
UClass* UIsdkFromOpenXRControllerDataSource::GetPrivateStaticClass()
{
	using TClass = UIsdkFromOpenXRControllerDataSource;
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IsdkFromOpenXRControllerDataSource"),
			Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.InnerSingleton,
			StaticRegisterNativesUIsdkFromOpenXRControllerDataSource,
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
	return Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.InnerSingleton;
}
UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_NoRegister()
{
	return UIsdkFromOpenXRControllerDataSource::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "InteractionSDK" },
		{ "Comment", "/**\n * @class UIsdkFromOpenXRControllerDataSource\n * @brief Manages OpenXR controller data, integrating OpenXR pointer and root poses into your VR\n * project.\n *\n * This class facilitates the integration of OpenXR hand tracking data by providing access to\n * essential information such as the controller's pointer and root poses. It ensures that this data\n * is updated each frame, maintaining its relevance throughout the application's lifecycle. An\n * instance of this data source is created in the Interaction SDK's prebuilt rig component via\n * UIsdkTrackedDataSourceRigComponent.\n *\n * @see UIsdkExternalHandDataSource\n * @see IIsdkIHandPointerPose\n * @see IIsdkIRootPose\n * @addtogroup InteractionSDK\n */" },
		{ "IncludePath", "DataSources/IsdkFromOpenXRControllerDataSource.h" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
		{ "ToolTip", "@class UIsdkFromOpenXRControllerDataSource\n@brief Manages OpenXR controller data, integrating OpenXR pointer and root poses into your VR\nproject.\n\nThis class facilitates the integration of OpenXR hand tracking data by providing access to\nessential information such as the controller's pointer and root poses. It ensures that this data\nis updated each frame, maintaining its relevance throughout the application's lifecycle. An\ninstance of this data source is created in the Interaction SDK's prebuilt rig component via\nUIsdkTrackedDataSourceRigComponent.\n\n@see UIsdkExternalHandDataSource\n@see IIsdkIHandPointerPose\n@see IIsdkIRootPose\n@addtogroup InteractionSDK" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[] = {
		{ "BlueprintGetter", "GetMotionController" },
		{ "Category", "InteractionSDK" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRootPoseHighConfidence_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataSources/IsdkFromOpenXRControllerDataSource.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseConnected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IsRootPoseHighConfidence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetMotionController, "GetMotionController" }, // 2969110445
		{ &Z_Construct_UFunction_UIsdkFromOpenXRControllerDataSource_GetRootPoseConnectedConditional_Implementation, "GetRootPoseConnectedConditional_Implementation" }, // 2489596991
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsdkFromOpenXRControllerDataSource>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x014500000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRControllerDataSource, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionController_MetaData), NewProp_MotionController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_IsRootPoseConnected = { "IsRootPoseConnected", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRControllerDataSource, IsRootPoseConnected), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseConnected_MetaData), NewProp_IsRootPoseConnected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_IsRootPoseHighConfidence = { "IsRootPoseHighConfidence", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsdkFromOpenXRControllerDataSource, IsRootPoseHighConfidence), Z_Construct_UClass_UIsdkConditionalBool_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRootPoseHighConfidence_MetaData), NewProp_IsRootPoseHighConfidence_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_MotionController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_IsRootPoseConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::NewProp_IsRootPoseHighConfidence,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIsdkExternalHandDataSource,
	(UObject* (*)())Z_Construct_UPackage__Script_IsdkDataSourcesOpenXR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIsdkIHandPointerPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromOpenXRControllerDataSource, IIsdkIHandPointerPose), false },  // 262544849
	{ Z_Construct_UClass_UIsdkIRootPose_NoRegister, (int32)VTABLE_OFFSET(UIsdkFromOpenXRControllerDataSource, IIsdkIRootPose), false },  // 2159373520
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::ClassParams = {
	&UIsdkFromOpenXRControllerDataSource::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource()
{
	if (!Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.OuterSingleton, Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsdkFromOpenXRControllerDataSource);
UIsdkFromOpenXRControllerDataSource::~UIsdkFromOpenXRControllerDataSource() {}
// ********** End Class UIsdkFromOpenXRControllerDataSource ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h__Script_IsdkDataSourcesOpenXR_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsdkFromOpenXRControllerDataSource, UIsdkFromOpenXRControllerDataSource::StaticClass, TEXT("UIsdkFromOpenXRControllerDataSource"), &Z_Registration_Info_UClass_UIsdkFromOpenXRControllerDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsdkFromOpenXRControllerDataSource), 3944721057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h__Script_IsdkDataSourcesOpenXR_3511214784(TEXT("/Script/IsdkDataSourcesOpenXR"),
	Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_IsdkDataSourcesOpenXR_Public_DataSources_IsdkFromOpenXRControllerDataSource_h__Script_IsdkDataSourcesOpenXR_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
