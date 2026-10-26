// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkIPosedMesh.h"

#ifdef OCULUSINTERACTION_IsdkIPosedMesh_generated_h
#error "IsdkIPosedMesh.generated.h already included, missing '#pragma once' in IsdkIPosedMesh.h"
#endif
#define OCULUSINTERACTION_IsdkIPosedMesh_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConditionalPoseOverride;

// ********** Begin Interface UIsdkIPosedMesh ******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentRootPose); \
	DECLARE_FUNCTION(execGetFinalRootPose); \
	DECLARE_FUNCTION(execGetPoseOverride); \
	DECLARE_FUNCTION(execHasJointPoses);


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_CALLBACK_WRAPPERS
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIPosedMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIPosedMesh(UIsdkIPosedMesh&&) = delete; \
	UIsdkIPosedMesh(const UIsdkIPosedMesh&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIPosedMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIPosedMesh); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIPosedMesh) \
	virtual ~UIsdkIPosedMesh() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIPosedMesh(); \
	friend struct Z_Construct_UClass_UIsdkIPosedMesh_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPosedMesh_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIPosedMesh, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIPosedMesh_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIPosedMesh)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIPosedMesh() {} \
public: \
	typedef UIsdkIPosedMesh UClassType; \
	typedef IIsdkIPosedMesh ThisClass; \
	static const FTransform Execute_GetCurrentRootPose(UObject* O); \
	static const FTransform Execute_GetFinalRootPose(UObject* O); \
	static const UIsdkConditionalPoseOverride* Execute_GetPoseOverride(UObject* O); \
	static const bool Execute_HasJointPoses(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_29_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_CALLBACK_WRAPPERS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIPosedMesh;

// ********** End Interface UIsdkIPosedMesh ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkIPosedMesh_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
