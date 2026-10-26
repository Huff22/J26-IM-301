// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StructTypesNonGenerated.h"

#ifdef OCULUSINTERACTION_StructTypesNonGenerated_generated_h
#error "StructTypesNonGenerated.generated.h already included, missing '#pragma once' in StructTypesNonGenerated.h"
#endif
#define OCULUSINTERACTION_StructTypesNonGenerated_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FIsdkPosef ********************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkPosef_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkPosef;
// ********** End ScriptStruct FIsdkPosef **********************************************************

// ********** Begin ScriptStruct FIsdkInteractionRelationshipCounts ********************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkInteractionRelationshipCounts_Statics; \
	static class UScriptStruct* StaticStruct();


struct FIsdkInteractionRelationshipCounts;
// ********** End ScriptStruct FIsdkInteractionRelationshipCounts **********************************

// ********** Begin Interface UIsdkIPayload ********************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPayload_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsdkIPayload(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkIPayload(UIsdkIPayload&&) = delete; \
	UIsdkIPayload(const UIsdkIPayload&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkIPayload); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkIPayload); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkIPayload) \
	virtual ~UIsdkIPayload() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkIPayload(); \
	friend struct Z_Construct_UClass_UIsdkIPayload_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkIPayload_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkIPayload, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkIPayload_NoRegister) \
	DECLARE_SERIALIZER(UIsdkIPayload)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkIPayload() {} \
public: \
	typedef UIsdkIPayload UClassType; \
	typedef IIsdkIPayload ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_110_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_113_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkIPayload;

// ********** End Interface UIsdkIPayload **********************************************************

// ********** Begin ScriptStruct FIsdkHandGrabPoseProperties ***************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsdkHandGrabPoseProperties_Statics; \
	OCULUSINTERACTION_API static class UScriptStruct* StaticStruct();


struct FIsdkHandGrabPoseProperties;
// ********** End ScriptStruct FIsdkHandGrabPoseProperties *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_StructTypesNonGenerated_h

// ********** Begin Enum EIsdkLerpState ************************************************************
#define FOREACH_ENUM_EISDKLERPSTATE(op) \
	op(EIsdkLerpState::Inactive) \
	op(EIsdkLerpState::TransitioningTo) \
	op(EIsdkLerpState::TransitioningAway) \
	op(EIsdkLerpState::RestingAtDestination) 

enum class EIsdkLerpState : uint8;
template<> struct TIsUEnumClass<EIsdkLerpState> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkLerpState>();
// ********** End Enum EIsdkLerpState **************************************************************

// ********** Begin Enum EIsdkHandGrabPoseMode *****************************************************
#define FOREACH_ENUM_EISDKHANDGRABPOSEMODE(op) \
	op(EIsdkHandGrabPoseMode::None) \
	op(EIsdkHandGrabPoseMode::SnapPoseToObject) \
	op(EIsdkHandGrabPoseMode::SnapObjectToPose) \
	op(EIsdkHandGrabPoseMode::MirrorReference) 

enum class EIsdkHandGrabPoseMode : uint8;
template<> struct TIsUEnumClass<EIsdkHandGrabPoseMode> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseMode>();
// ********** End Enum EIsdkHandGrabPoseMode *******************************************************

// ********** Begin Enum EIsdkHandGrabPoseMirror ***************************************************
#define FOREACH_ENUM_EISDKHANDGRABPOSEMIRROR(op) \
	op(EIsdkHandGrabPoseMirror::None) \
	op(EIsdkHandGrabPoseMirror::Automatic) \
	op(EIsdkHandGrabPoseMirror::Manual) 

enum class EIsdkHandGrabPoseMirror : uint8;
template<> struct TIsUEnumClass<EIsdkHandGrabPoseMirror> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseMirror>();
// ********** End Enum EIsdkHandGrabPoseMirror *****************************************************

// ********** Begin Enum EIsdkXRControllerDrivenHandPoseType ***************************************
#define FOREACH_ENUM_EISDKXRCONTROLLERDRIVENHANDPOSETYPE(op) \
	op(EIsdkXRControllerDrivenHandPoseType::None) \
	op(EIsdkXRControllerDrivenHandPoseType::Natural) \
	op(EIsdkXRControllerDrivenHandPoseType::Controller) 

enum class EIsdkXRControllerDrivenHandPoseType : uint8;
template<> struct TIsUEnumClass<EIsdkXRControllerDrivenHandPoseType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkXRControllerDrivenHandPoseType>();
// ********** End Enum EIsdkXRControllerDrivenHandPoseType *****************************************

// ********** Begin Enum EIsdkXRControllerType *****************************************************
#define FOREACH_ENUM_EISDKXRCONTROLLERTYPE(op) \
	op(EIsdkXRControllerType::None) \
	op(EIsdkXRControllerType::MetaQuestTouch) \
	op(EIsdkXRControllerType::MetaQuestTouchPro) \
	op(EIsdkXRControllerType::MetaQuestTouchPlus) \
	op(EIsdkXRControllerType::Unknown) 

enum class EIsdkXRControllerType : uint8;
template<> struct TIsUEnumClass<EIsdkXRControllerType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkXRControllerType>();
// ********** End Enum EIsdkXRControllerType *******************************************************

// ********** Begin Enum EControllerHandBehavior ***************************************************
#define FOREACH_ENUM_ECONTROLLERHANDBEHAVIOR(op) \
	op(EControllerHandBehavior::BothProcedural) \
	op(EControllerHandBehavior::BothAnimated) \
	op(EControllerHandBehavior::ControllerOnly) \
	op(EControllerHandBehavior::HandsOnlyProcedural) \
	op(EControllerHandBehavior::HandsOnlyAnimated) 

enum class EControllerHandBehavior : uint8;
template<> struct TIsUEnumClass<EControllerHandBehavior> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EControllerHandBehavior>();
// ********** End Enum EControllerHandBehavior *****************************************************

// ********** Begin Enum EIsdkHandGrabPoseOrientation **********************************************
#define FOREACH_ENUM_EISDKHANDGRABPOSEORIENTATION(op) \
	op(EIsdkHandGrabPoseOrientation::Unknown) \
	op(EIsdkHandGrabPoseOrientation::WristFacingDown) \
	op(EIsdkHandGrabPoseOrientation::WristFacingIn) \
	op(EIsdkHandGrabPoseOrientation::WristFacingUp) 

enum class EIsdkHandGrabPoseOrientation : uint8;
template<> struct TIsUEnumClass<EIsdkHandGrabPoseOrientation> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkHandGrabPoseOrientation>();
// ********** End Enum EIsdkHandGrabPoseOrientation ************************************************

// ********** Begin Enum EIsdkDigitType ************************************************************
#define FOREACH_ENUM_EISDKDIGITTYPE(op) \
	op(EIsdkDigitType::Unknown) \
	op(EIsdkDigitType::Index) \
	op(EIsdkDigitType::Middle) \
	op(EIsdkDigitType::Ring) \
	op(EIsdkDigitType::Pinky) \
	op(EIsdkDigitType::Thumb) 

enum class EIsdkDigitType : uint8;
template<> struct TIsUEnumClass<EIsdkDigitType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDigitType>();
// ********** End Enum EIsdkDigitType **************************************************************

// ********** Begin Enum EIsdkGrabDetectorType *****************************************************
#define FOREACH_ENUM_EISDKGRABDETECTORTYPE(op) \
	op(EIsdkGrabDetectorType::None) \
	op(EIsdkGrabDetectorType::HandGrab) \
	op(EIsdkGrabDetectorType::DistanceGrab) \
	op(EIsdkGrabDetectorType::RayGrab) 

enum class EIsdkGrabDetectorType : uint32;
template<> struct TIsUEnumClass<EIsdkGrabDetectorType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabDetectorType>();
// ********** End Enum EIsdkGrabDetectorType *******************************************************

// ********** Begin Enum EIsdkMultiGrabBehavior ****************************************************
#define FOREACH_ENUM_EISDKMULTIGRABBEHAVIOR(op) \
	op(EIsdkMultiGrabBehavior::SingleGrabFirstRetained) \
	op(EIsdkMultiGrabBehavior::SingleGrabTransferToSecond) \
	op(EIsdkMultiGrabBehavior::MultiGrab) 

enum class EIsdkMultiGrabBehavior : uint8;
template<> struct TIsUEnumClass<EIsdkMultiGrabBehavior> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkMultiGrabBehavior>();
// ********** End Enum EIsdkMultiGrabBehavior ******************************************************

// ********** Begin Enum EIsdkGrabInputMethod ******************************************************
#define FOREACH_ENUM_EISDKGRABINPUTMETHOD(op) \
	op(EIsdkGrabInputMethod::Unknown) \
	op(EIsdkGrabInputMethod::Pinch) \
	op(EIsdkGrabInputMethod::Palm) \
	op(EIsdkGrabInputMethod::Custom) 

enum class EIsdkGrabInputMethod : uint8;
template<> struct TIsUEnumClass<EIsdkGrabInputMethod> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabInputMethod>();
// ********** End Enum EIsdkGrabInputMethod ********************************************************

// ********** Begin Enum EIsdkInteractionType ******************************************************
#define FOREACH_ENUM_EISDKINTERACTIONTYPE(op) \
	op(EIsdkInteractionType::Unknown) \
	op(EIsdkInteractionType::Poke) \
	op(EIsdkInteractionType::Grab) \
	op(EIsdkInteractionType::Ray) \
	op(EIsdkInteractionType::DistanceGrab) 

enum class EIsdkInteractionType : uint8;
template<> struct TIsUEnumClass<EIsdkInteractionType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkInteractionType>();
// ********** End Enum EIsdkInteractionType ********************************************************

// ********** Begin Enum EIsdkDeviceType ***********************************************************
#define FOREACH_ENUM_EISDKDEVICETYPE(op) \
	op(EIsdkDeviceType::Unknown) \
	op(EIsdkDeviceType::Controller) \
	op(EIsdkDeviceType::Hand) \
	op(EIsdkDeviceType::Peripheral) 

enum class EIsdkDeviceType : uint8;
template<> struct TIsUEnumClass<EIsdkDeviceType> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkDeviceType>();
// ********** End Enum EIsdkDeviceType *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
