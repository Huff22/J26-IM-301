// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkHandPoseData.h"

#ifdef OCULUSINTERACTION_IsdkHandPoseData_generated_h
#error "IsdkHandPoseData.generated.h already included, missing '#pragma once' in IsdkHandPoseData.h"
#endif
#define OCULUSINTERACTION_IsdkHandPoseData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkHandMeshComponent;
class UPoseAsset;
class USkinnedAsset;
enum class EIsdkHandBones : uint8;

// ********** Begin Class UIsdkHandPoseData ********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPoseLerpTime); \
	DECLARE_FUNCTION(execGetPoseLerpTime); \
	DECLARE_FUNCTION(execSetRotationFromPoseWithName); \
	DECLARE_FUNCTION(execSetRotationFromVisual); \
	DECLARE_FUNCTION(execSetRotationFromSkeleton); \
	DECLARE_FUNCTION(execSetDirty); \
	DECLARE_FUNCTION(execSetJointRotation); \
	DECLARE_FUNCTION(execGetJointRotation);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandPoseData(); \
	friend struct Z_Construct_UClass_UIsdkHandPoseData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandPoseData_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandPoseData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandPoseData_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandPoseData) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkHandPoseData*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandPoseData(UIsdkHandPoseData&&) = delete; \
	UIsdkHandPoseData(const UIsdkHandPoseData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandPoseData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandPoseData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandPoseData) \
	NO_API virtual ~UIsdkHandPoseData();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_49_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandPoseData;

// ********** End Class UIsdkHandPoseData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandPoseData_h

// ********** Begin Enum EIsdkJointFreedom *********************************************************
#define FOREACH_ENUM_EISDKJOINTFREEDOM(op) \
	op(EIsdkJointFreedom::Free) \
	op(EIsdkJointFreedom::Constrained) \
	op(EIsdkJointFreedom::Locked) 

enum class EIsdkJointFreedom : uint8;
template<> struct TIsUEnumClass<EIsdkJointFreedom> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkJointFreedom>();
// ********** End Enum EIsdkJointFreedom ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
