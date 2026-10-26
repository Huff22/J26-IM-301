// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSources/IsdkIRootPoseLocker.h"

#ifdef OCULUSINTERACTION_IsdkIRootPoseLocker_generated_h
#error "IsdkIRootPoseLocker.generated.h already included, missing '#pragma once' in IsdkIRootPoseLocker.h"
#endif
#define OCULUSINTERACTION_IsdkIRootPoseLocker_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EIsdkRootPoseLockMode : uint8;

// ********** Begin Interface UIsdkIRootPoseLocker *************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFreeRootTransform); \
	DECLARE_FUNCTION(execLockRootRotation); \
	DECLARE_FUNCTION(execLockRootLocation); \
	DECLARE_FUNCTION(execLockRootTransform);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIRootPoseLocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIRootPoseLocker(UIsdkIRootPoseLocker&&) = delete; \
	UIsdkIRootPoseLocker(const UIsdkIRootPoseLocker&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIRootPoseLocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIRootPoseLocker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIRootPoseLocker) \
	virtual ~UIsdkIRootPoseLocker() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIRootPoseLocker(); \
	friend struct Z_Construct_UClass_UIsdkIRootPoseLocker_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIRootPoseLocker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIRootPoseLocker_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIRootPoseLocker)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIRootPoseLocker() {} \
public: \
	typedef UIsdkIRootPoseLocker UClassType; \
	typedef IIsdkIRootPoseLocker ThisClass; \
	static void Execute_FreeRootTransform(UObject* O, EIsdkRootPoseLockMode LockMode); \
	static void Execute_LockRootLocation(UObject* O, FVector const& Position, const float OverrideFactor, bool bSkipAnimation); \
	static void Execute_LockRootRotation(UObject* O, FQuat const& Rotation, const float OverrideFactor, bool bSkipAnimation); \
	static void Execute_LockRootTransform(UObject* O, FTransform const& Transform, const float OverrideFactor, EIsdkRootPoseLockMode LockMode, bool bSkipAnimation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_34_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h_37_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIRootPoseLocker;

// ********** End Interface UIsdkIRootPoseLocker ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_DataSources_IsdkIRootPoseLocker_h

// ********** Begin Enum EIsdkRootPoseLockMode *****************************************************
#define FOREACH_ENUM_EISDKROOTPOSELOCKMODE(op) \
	op(EIsdkRootPoseLockMode::None) \
	op(EIsdkRootPoseLockMode::Position) \
	op(EIsdkRootPoseLockMode::Rotation) \
	op(EIsdkRootPoseLockMode::Full) 

enum class EIsdkRootPoseLockMode : uint8;
template<> struct TIsUEnumClass<EIsdkRootPoseLockMode> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkRootPoseLockMode>();
// ********** End Enum EIsdkRootPoseLockMode *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
