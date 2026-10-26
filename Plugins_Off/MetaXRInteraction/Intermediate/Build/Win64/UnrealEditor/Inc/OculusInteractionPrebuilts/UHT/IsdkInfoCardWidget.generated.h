// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InfoCard/IsdkInfoCardWidget.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkInfoCardWidget_generated_h
#error "IsdkInfoCardWidget.generated.h already included, missing '#pragma once' in IsdkInfoCardWidget.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkInfoCardWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UIsdkInfoCardWidget ******************************************************
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardWidget_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkInfoCardWidget(); \
	friend struct Z_Construct_UClass_UIsdkInfoCardWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkInfoCardWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkInfoCardWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkInfoCardWidget_NoRegister) \
	DECLARE_SERIALIZER(UIsdkInfoCardWidget)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkInfoCardWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkInfoCardWidget(UIsdkInfoCardWidget&&) = delete; \
	UIsdkInfoCardWidget(const UIsdkInfoCardWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkInfoCardWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkInfoCardWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkInfoCardWidget) \
	NO_API virtual ~UIsdkInfoCardWidget();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_30_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_33_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkInfoCardWidget;

// ********** End Class UIsdkInfoCardWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_InfoCard_IsdkInfoCardWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
