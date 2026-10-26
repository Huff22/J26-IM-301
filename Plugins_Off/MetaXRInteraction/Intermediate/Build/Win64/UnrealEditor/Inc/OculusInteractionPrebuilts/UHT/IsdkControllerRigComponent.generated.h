// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Rig/IsdkControllerRigComponent.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkControllerRigComponent_generated_h
#error "IsdkControllerRigComponent.generated.h already included, missing '#pragma once' in IsdkControllerRigComponent.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkControllerRigComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkITrackingDataSubsystem;
class UIsdkControllerVisualsRigComponent;
enum class EControllerHandBehavior : uint8;

// ********** Begin Class UIsdkControllerRigComponent **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePalmGrabFinishedInput); \
	DECLARE_FUNCTION(execHandlePalmGrabStartedInput); \
	DECLARE_FUNCTION(execHandlePinchGrabFinishedInput); \
	DECLARE_FUNCTION(execHandlePinchGrabStartedInput); \
	DECLARE_FUNCTION(execHandleControllerHandBehaviorChanged); \
	DECLARE_FUNCTION(execGetControllerVisuals);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerRigComponent(); \
	friend struct Z_Construct_UClass_UIsdkControllerRigComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerRigComponent, UIsdkRigComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkControllerRigComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerRigComponent)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerRigComponent(UIsdkControllerRigComponent&&) = delete; \
	UIsdkControllerRigComponent(const UIsdkControllerRigComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerRigComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerRigComponent) \
	NO_API virtual ~UIsdkControllerRigComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_44_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerRigComponent;

// ********** End Class UIsdkControllerRigComponent ************************************************

// ********** Begin Class UIsdkControllerRigComponentLeft ******************************************
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerRigComponentLeft(); \
	friend struct Z_Construct_UClass_UIsdkControllerRigComponentLeft_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentLeft_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerRigComponentLeft, UIsdkControllerRigComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkControllerRigComponentLeft_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerRigComponentLeft)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_179_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerRigComponentLeft(UIsdkControllerRigComponentLeft&&) = delete; \
	UIsdkControllerRigComponentLeft(const UIsdkControllerRigComponentLeft&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerRigComponentLeft); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerRigComponentLeft); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerRigComponentLeft) \
	NO_API virtual ~UIsdkControllerRigComponentLeft();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_175_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_179_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerRigComponentLeft;

// ********** End Class UIsdkControllerRigComponentLeft ********************************************

// ********** Begin Class UIsdkControllerRigComponentRight *****************************************
OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkControllerRigComponentRight(); \
	friend struct Z_Construct_UClass_UIsdkControllerRigComponentRight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkControllerRigComponentRight_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkControllerRigComponentRight, UIsdkControllerRigComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkControllerRigComponentRight_NoRegister) \
	DECLARE_SERIALIZER(UIsdkControllerRigComponentRight)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_199_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkControllerRigComponentRight(UIsdkControllerRigComponentRight&&) = delete; \
	UIsdkControllerRigComponentRight(const UIsdkControllerRigComponentRight&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkControllerRigComponentRight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkControllerRigComponentRight); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkControllerRigComponentRight) \
	NO_API virtual ~UIsdkControllerRigComponentRight();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_195_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_199_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkControllerRigComponentRight;

// ********** End Class UIsdkControllerRigComponentRight *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Rig_IsdkControllerRigComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
