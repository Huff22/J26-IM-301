// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/IsdkITrackingDataSubsystem.h"

#ifdef OCULUSINTERACTION_IsdkITrackingDataSubsystem_generated_h
#error "IsdkITrackingDataSubsystem.generated.h already included, missing '#pragma once' in IsdkITrackingDataSubsystem.h"
#endif
#define OCULUSINTERACTION_IsdkITrackingDataSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class IIsdkIHmdDataSource;
class UMotionControllerComponent;
enum class EIsdkHandedness : uint8;
struct FIsdkTrackingDataSources;

// ********** Begin ScriptStruct FIsdkTrackingDataSources ******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkTrackingDataSources_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkTrackingDataSources;
// ********** End ScriptStruct FIsdkTrackingDataSources ********************************************

// ********** Begin Interface UIsdkITrackingDataSubsystem ******************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetOrCreateHmdDataSourceComponent); \
	DECLARE_FUNCTION(execGetOrCreateControllerDataSourceComponent); \
	DECLARE_FUNCTION(execGetOrCreateHandDataSourceComponent);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkITrackingDataSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkITrackingDataSubsystem(UIsdkITrackingDataSubsystem&&) = delete; \
	UIsdkITrackingDataSubsystem(const UIsdkITrackingDataSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkITrackingDataSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkITrackingDataSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkITrackingDataSubsystem) \
	virtual ~UIsdkITrackingDataSubsystem() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkITrackingDataSubsystem(); \
	friend struct Z_Construct_UClass_UIsdkITrackingDataSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkITrackingDataSubsystem, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkITrackingDataSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UIsdkITrackingDataSubsystem)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkITrackingDataSubsystem() {} \
public: \
	typedef UIsdkITrackingDataSubsystem UClassType; \
	typedef IIsdkITrackingDataSubsystem ThisClass; \
	static FIsdkTrackingDataSources Execute_GetOrCreateControllerDataSourceComponent(UObject* O, UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness); \
	static FIsdkTrackingDataSources Execute_GetOrCreateHandDataSourceComponent(UObject* O, UMotionControllerComponent* SourceMotionController, EIsdkHandedness Handedness); \
	static TScriptInterface<IIsdkIHmdDataSource> Execute_GetOrCreateHmdDataSourceComponent(UObject* O, AActor* TrackingSpaceRoot); \
	static bool Execute_IsEnabled(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_37_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_96_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h_40_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkITrackingDataSubsystem;

// ********** End Interface UIsdkITrackingDataSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Subsystem_IsdkITrackingDataSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
