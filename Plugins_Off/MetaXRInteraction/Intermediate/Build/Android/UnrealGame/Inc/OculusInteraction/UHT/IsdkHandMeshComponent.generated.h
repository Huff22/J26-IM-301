// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsdkHandMeshComponent.h"

#ifdef OCULUSINTERACTION_IsdkHandMeshComponent_generated_h
#error "IsdkHandMeshComponent.generated.h already included, missing '#pragma once' in IsdkHandMeshComponent.h"
#endif
#define OCULUSINTERACTION_IsdkHandMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class IIsdkIHandJoints;
class IIsdkIRootPose;
class UIsdkConditionalPoseOverride;
class UIsdkHandPoseData;
enum class EIsdkHandedness : uint8;
enum class EIsdkSkeletonMappingState : uint8;
struct FIsdkHandGrabPoseProperties;

// ********** Begin Class UIsdkHandMeshComponent ***************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentRootPose_Implementation); \
	DECLARE_FUNCTION(execGetFinalRootPose_Implementation); \
	DECLARE_FUNCTION(execGetPoseOverride_Implementation); \
	DECLARE_FUNCTION(execSetPauseSkeletonUpdates); \
	DECLARE_FUNCTION(execGetRootWorldTransform); \
	DECLARE_FUNCTION(execResetHandPoseOverride); \
	DECLARE_FUNCTION(execSetHandPoseOverride); \
	DECLARE_FUNCTION(execClearMappingState); \
	DECLARE_FUNCTION(execGetMappingState); \
	DECLARE_FUNCTION(execSetMappedBoneNamesFromJointSourceHandedness); \
	DECLARE_FUNCTION(execSetMappedBoneNamesAsDefault); \
	DECLARE_FUNCTION(execGetHandednessFromDataSource); \
	DECLARE_FUNCTION(execSetRootPoseDataSource); \
	DECLARE_FUNCTION(execSetJointsDataSource); \
	DECLARE_FUNCTION(execGetRootPoseDataSource); \
	DECLARE_FUNCTION(execGetJointsDataSource);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandMeshComponent(); \
	friend struct Z_Construct_UClass_UIsdkHandMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandMeshComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkHandMeshComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandMeshComponent(UIsdkHandMeshComponent&&) = delete; \
	UIsdkHandMeshComponent(const UIsdkHandMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkHandMeshComponent) \
	NO_API virtual ~UIsdkHandMeshComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_60_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandMeshComponent;

// ********** End Class UIsdkHandMeshComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_IsdkHandMeshComponent_h

// ********** Begin Enum EIsdkSkeletonMappingState *************************************************
#define FOREACH_ENUM_EISDKSKELETONMAPPINGSTATE(op) \
	op(EIsdkSkeletonMappingState::None) \
	op(EIsdkSkeletonMappingState::Invalid) \
	op(EIsdkSkeletonMappingState::Valid) 

enum class EIsdkSkeletonMappingState : uint8;
template<> struct TIsUEnumClass<EIsdkSkeletonMappingState> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkSkeletonMappingState>();
// ********** End Enum EIsdkSkeletonMappingState ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
