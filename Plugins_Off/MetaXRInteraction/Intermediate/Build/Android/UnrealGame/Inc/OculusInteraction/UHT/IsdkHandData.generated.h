// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkHandData.h"

#ifdef OCULUSINTERACTION_IsdkHandData_generated_h
#error "IsdkHandData.generated.h already included, missing '#pragma once' in IsdkHandData.h"
#endif
#define OCULUSINTERACTION_IsdkHandData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 
enum class EIsdkFingerJoint : uint8;
enum class EIsdkFingerType : uint8;

// ********** Begin Class UIsdkHandData ************************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOutboundBoneMap); \
	DECLARE_FUNCTION(execSetInboundBoneMap); \
	DECLARE_FUNCTION(execSetJointsToIdentity); \
	DECLARE_FUNCTION(execSetCachedJointPoses); \
	DECLARE_FUNCTION(execSetCachedJointPose); \
	DECLARE_FUNCTION(execSetJoints); \
	DECLARE_FUNCTION(execGetJointRadii); \
	DECLARE_FUNCTION(execGetThumbJointPose); \
	DECLARE_FUNCTION(execGetFingerJointPose); \
	DECLARE_FUNCTION(execGetJointPose); \
	DECLARE_FUNCTION(execGetJointPoses); \
	DECLARE_FUNCTION(execGetNumJoints);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandData(); \
	friend struct Z_Construct_UClass_UIsdkHandData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandData_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandData_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandData)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandData(UIsdkHandData&&) = delete; \
	UIsdkHandData(const UIsdkHandData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandData) \
	NO_API virtual ~UIsdkHandData();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_105_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandData;

// ********** End Class UIsdkHandData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandData_h

// ********** Begin Enum EIsdkHandBones ************************************************************
#define FOREACH_ENUM_EISDKHANDBONES(op) \
	op(EIsdkHandBones::HandStart) \
	op(EIsdkHandBones::HandPalm) \
	op(EIsdkHandBones::HandWristRoot) \
	op(EIsdkHandBones::HandThumb1) \
	op(EIsdkHandBones::HandThumb2) \
	op(EIsdkHandBones::HandThumb3) \
	op(EIsdkHandBones::HandThumbTip) \
	op(EIsdkHandBones::HandIndex0) \
	op(EIsdkHandBones::HandIndex1) \
	op(EIsdkHandBones::HandIndex2) \
	op(EIsdkHandBones::HandIndex3) \
	op(EIsdkHandBones::HandIndexTip) \
	op(EIsdkHandBones::HandMiddle0) \
	op(EIsdkHandBones::HandMiddle1) \
	op(EIsdkHandBones::HandMiddle2) \
	op(EIsdkHandBones::HandMiddle3) \
	op(EIsdkHandBones::HandMiddleTip) \
	op(EIsdkHandBones::HandRing0) \
	op(EIsdkHandBones::HandRing1) \
	op(EIsdkHandBones::HandRing2) \
	op(EIsdkHandBones::HandRing3) \
	op(EIsdkHandBones::HandRingTip) \
	op(EIsdkHandBones::HandPinky0) \
	op(EIsdkHandBones::HandPinky1) \
	op(EIsdkHandBones::HandPinky2) \
	op(EIsdkHandBones::HandPinky3) \
	op(EIsdkHandBones::HandPinkyTip) \
	op(EIsdkHandBones::HandEnd) \
	op(EIsdkHandBones::EHandBones_MAX) \
	op(EIsdkHandBones::Invalid) 

enum class EIsdkHandBones : uint8;
template<> struct TIsUEnumClass<EIsdkHandBones> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandBones>();
// ********** End Enum EIsdkHandBones **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
