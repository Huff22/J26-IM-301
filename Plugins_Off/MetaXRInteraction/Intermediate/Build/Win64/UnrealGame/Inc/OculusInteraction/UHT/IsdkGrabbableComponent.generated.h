// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interaction/IsdkGrabbableComponent.h"

#ifdef OCULUSINTERACTION_IsdkGrabbableComponent_generated_h
#error "IsdkGrabbableComponent.generated.h already included, missing '#pragma once' in IsdkGrabbableComponent.h"
#endif
#define OCULUSINTERACTION_IsdkGrabbableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkGrabberComponent;
class UIsdkGrabTransformerComponent;
class UPrimitiveComponent;
enum class EIsdkGrabbableColliderMode : uint8;
enum class EIsdkGrabInputMethod : uint8;
struct FIsdkInteractionPointerEvent;

// ********** Begin Class UIsdkGrabbableComponent **************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePointerEvent); \
	DECLARE_FUNCTION(execSetColliderMode); \
	DECLARE_FUNCTION(execSetGrabTransformer); \
	DECLARE_FUNCTION(execGetGrabTransformer); \
	DECLARE_FUNCTION(execSetGrabInputMethodAllowed); \
	DECLARE_FUNCTION(execIsGrabInputMethodAllowed); \
	DECLARE_FUNCTION(execIsGrabbedBy); \
	DECLARE_FUNCTION(execIsHoveredBy); \
	DECLARE_FUNCTION(execSetGrabCollider); \
	DECLARE_FUNCTION(execGetGrabCollider);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkGrabbableComponent(); \
	friend struct Z_Construct_UClass_UIsdkGrabbableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkGrabbableComponent, UIsdkSceneInteractableComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkGrabbableComponent_NoRegister) \
	DECLARE_SERIALIZER(UIsdkGrabbableComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIsdkGrabbableComponent*>(this); }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkGrabbableComponent(UIsdkGrabbableComponent&&) = delete; \
	UIsdkGrabbableComponent(const UIsdkGrabbableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkGrabbableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkGrabbableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkGrabbableComponent) \
	NO_API virtual ~UIsdkGrabbableComponent();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_71_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkGrabbableComponent;

// ********** End Class UIsdkGrabbableComponent ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Interaction_IsdkGrabbableComponent_h

// ********** Begin Enum EIsdkGrabbableColliderMode ************************************************
#define FOREACH_ENUM_EISDKGRABBABLECOLLIDERMODE(op) \
	op(EIsdkGrabbableColliderMode::FindByName) \
	op(EIsdkGrabbableColliderMode::FindStaticMesh) \
	op(EIsdkGrabbableColliderMode::Sphere) \
	op(EIsdkGrabbableColliderMode::Box) \
	op(EIsdkGrabbableColliderMode::CustomMesh) 

enum class EIsdkGrabbableColliderMode : uint8;
template<> struct TIsUEnumClass<EIsdkGrabbableColliderMode> { enum { Value = true }; };
template<> OCULUSINTERACTION_API UEnum* StaticEnum<EIsdkGrabbableColliderMode>();
// ********** End Enum EIsdkGrabbableColliderMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
