// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/GrabDetectors/IsdkHandGrabDetector.h"

#ifdef OCULUSINTERACTION_IsdkHandGrabDetector_generated_h
#error "IsdkHandGrabDetector.generated.h already included, missing '#pragma once' in IsdkHandGrabDetector.h"
#endif
#define OCULUSINTERACTION_IsdkHandGrabDetector_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UIsdkHandGrabDetector ****************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleEndOverlap); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execGetGrabbingComponent); \
	DECLARE_FUNCTION(execAttachAndReplacePalmCollider); \
	DECLARE_FUNCTION(execAttachAndReplacePinchCollider);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkHandGrabDetector(); \
	friend struct Z_Construct_UClass_UIsdkHandGrabDetector_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkHandGrabDetector, UIsdkGrabDetector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkHandGrabDetector_NoRegister) \
	DECLARE_SERIALIZER(UIsdkHandGrabDetector)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkHandGrabDetector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkHandGrabDetector(UIsdkHandGrabDetector&&) = delete; \
	UIsdkHandGrabDetector(const UIsdkHandGrabDetector&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkHandGrabDetector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkHandGrabDetector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkHandGrabDetector) \
	NO_API virtual ~UIsdkHandGrabDetector();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_40_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkHandGrabDetector;

// ********** End Class UIsdkHandGrabDetector ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_GrabDetectors_IsdkHandGrabDetector_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
