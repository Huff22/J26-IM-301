// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkThrowable.h"

#ifdef OCULUSINTERACTION_IsdkThrowable_generated_h
#error "IsdkThrowable.generated.h already included, missing '#pragma once' in IsdkThrowable.h"
#endif
#define OCULUSINTERACTION_IsdkThrowable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIsdkThrowableSettings ********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkThrowableSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkThrowableSettings;
// ********** End ScriptStruct FIsdkThrowableSettings **********************************************

// ********** Begin Class UIsdkThrowable ***********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAngularVelocity); \
	DECLARE_FUNCTION(execGetVelocity);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkThrowable_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkThrowable(); \
	friend struct Z_Construct_UClass_UIsdkThrowable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkThrowable_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkThrowable, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkThrowable_NoRegister) \
	DECLARE_SERIALIZER(UIsdkThrowable)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkThrowable(UIsdkThrowable&&) = delete; \
	UIsdkThrowable(const UIsdkThrowable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkThrowable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkThrowable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkThrowable) \
	NO_API virtual ~UIsdkThrowable();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_97_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkThrowable;

// ********** End Class UIsdkThrowable *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkThrowable_h

// ********** Begin Enum EIsdkVelocityEstimationMethod *********************************************
#define FOREACH_ENUM_EISDKVELOCITYESTIMATIONMETHOD(op) \
	op(EIsdkVelocityEstimationMethod::VE_LeastSquares) \
	op(EIsdkVelocityEstimationMethod::VE_RANSAC) \
	op(EIsdkVelocityEstimationMethod::VE_KalmanFilter) 

enum class EIsdkVelocityEstimationMethod : uint8;
template<> struct TIsUEnumClass<EIsdkVelocityEstimationMethod> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkVelocityEstimationMethod>();
// ********** End Enum EIsdkVelocityEstimationMethod ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
