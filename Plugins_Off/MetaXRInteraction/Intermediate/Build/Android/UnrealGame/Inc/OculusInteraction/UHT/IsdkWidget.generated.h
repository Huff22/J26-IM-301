// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widget/IsdkWidget.h"

#ifdef OCULUSINTERACTION_IsdkWidget_generated_h
#error "IsdkWidget.generated.h already included, missing '#pragma once' in IsdkWidget.h"
#endif
#define OCULUSINTERACTION_IsdkWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FIsdkVirtualUserPointerEvent;
struct FIsdkWidgetEvent;

// ********** Begin ScriptStruct FIsdkWidgetEvent **************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkWidgetEvent_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkWidgetEvent;
// ********** End ScriptStruct FIsdkWidgetEvent ****************************************************

// ********** Begin Delegate FIsdkWidgetEventDelegate **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_60_DELEGATE \
OCULUSINTERACTION_API void FIsdkWidgetEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkWidgetEventDelegate, FIsdkWidgetEvent WidgetEvent);


// ********** End Delegate FIsdkWidgetEventDelegate ************************************************

// ********** Begin ScriptStruct FIsdkVirtualUserPointerEvent **************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkVirtualUserPointerEvent_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkVirtualUserPointerEvent;
// ********** End ScriptStruct FIsdkVirtualUserPointerEvent ****************************************

// ********** Begin Delegate FIsdkVirtualUserPointerEventDelegate **********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_89_DELEGATE \
OCULUSINTERACTION_API void FIsdkVirtualUserPointerEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& IsdkVirtualUserPointerEventDelegate, FIsdkVirtualUserPointerEvent WidgetPointerEvent);


// ********** End Delegate FIsdkVirtualUserPointerEventDelegate ************************************

// ********** Begin ScriptStruct FIsdkWidgetVirtualUserState ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkWidgetVirtualUserState_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkWidgetVirtualUserState;
// ********** End ScriptStruct FIsdkWidgetVirtualUserState *****************************************

// ********** Begin Class UIsdkWidget **************************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidget_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkWidget(); \
	friend struct Z_Construct_UClass_UIsdkWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkWidget, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkWidget_NoRegister) \
	DECLARE_SERIALIZER(UIsdkWidget)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkWidget(UIsdkWidget&&) = delete; \
	UIsdkWidget(const UIsdkWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkWidget) \
	NO_API virtual ~UIsdkWidget();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_117_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_120_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkWidget;

// ********** End Class UIsdkWidget ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Widget_IsdkWidget_h

// ********** Begin Enum EIsdkWidgetEventType ******************************************************
#define FOREACH_ENUM_EISDKWIDGETEVENTTYPE(op) \
	op(EIsdkWidgetEventType::SelectedHovered) \
	op(EIsdkWidgetEventType::SelectedEmpty) \
	op(EIsdkWidgetEventType::UnselectedHovered) \
	op(EIsdkWidgetEventType::UnselectedEmpty) 

enum class EIsdkWidgetEventType : uint8;
template<> struct TIsUEnumClass<EIsdkWidgetEventType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkWidgetEventType>();
// ********** End Enum EIsdkWidgetEventType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
