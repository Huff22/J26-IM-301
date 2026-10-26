// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/IsdkPointableWidget.h"

#ifdef OCULUSINTERACTION_IsdkPointableWidget_generated_h
#error "IsdkPointableWidget.generated.h already included, missing '#pragma once' in IsdkPointableWidget.h"
#endif
#define OCULUSINTERACTION_IsdkPointableWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIPointable;
class UWidgetComponent;
struct FIsdkInteractionPointerEvent;

// ********** Begin Class UIsdkPointableWidget *****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleInteractionPointerEvent); \
	DECLARE_FUNCTION(execSetup);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableWidget_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPointableWidget(); \
	friend struct Z_Construct_UClass_UIsdkPointableWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkPointableWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPointableWidget, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkPointableWidget_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPointableWidget)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPointableWidget(UIsdkPointableWidget&&) = delete; \
	UIsdkPointableWidget(const UIsdkPointableWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPointableWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPointableWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPointableWidget) \
	NO_API virtual ~UIsdkPointableWidget();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_35_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPointableWidget;

// ********** End Class UIsdkPointableWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkPointableWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
