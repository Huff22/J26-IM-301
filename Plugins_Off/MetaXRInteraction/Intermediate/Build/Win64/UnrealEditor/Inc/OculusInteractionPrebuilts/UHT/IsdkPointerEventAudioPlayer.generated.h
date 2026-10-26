// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/IsdkPointerEventAudioPlayer.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkPointerEventAudioPlayer_generated_h
#error "IsdkPointerEventAudioPlayer.generated.h already included, missing '#pragma once' in IsdkPointerEventAudioPlayer.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkPointerEventAudioPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class IIsdkIPointable;
class UAudioComponent;
struct FIsdkInteractionPointerEvent;

// ********** Begin Class UIsdkPointerEventAudioPlayer *********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePointerEvent); \
	DECLARE_FUNCTION(execSetCancelAudio); \
	DECLARE_FUNCTION(execSetMoveAudio); \
	DECLARE_FUNCTION(execSetUnselectAudio); \
	DECLARE_FUNCTION(execSetSelectAudio); \
	DECLARE_FUNCTION(execSetUnhoverAudio); \
	DECLARE_FUNCTION(execSetHoverAudio); \
	DECLARE_FUNCTION(execSetPointable); \
	DECLARE_FUNCTION(execGetCancelAudio); \
	DECLARE_FUNCTION(execGetMoveAudio); \
	DECLARE_FUNCTION(execGetUnselectAudio); \
	DECLARE_FUNCTION(execGetSelectAudio); \
	DECLARE_FUNCTION(execGetUnhoverAudio); \
	DECLARE_FUNCTION(execGetHoverAudio); \
	DECLARE_FUNCTION(execGetPointable);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkPointerEventAudioPlayer(); \
	friend struct Z_Construct_UClass_UIsdkPointerEventAudioPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkPointerEventAudioPlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkPointerEventAudioPlayer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkPointerEventAudioPlayer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkPointerEventAudioPlayer(UIsdkPointerEventAudioPlayer&&) = delete; \
	UIsdkPointerEventAudioPlayer(const UIsdkPointerEventAudioPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkPointerEventAudioPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkPointerEventAudioPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkPointerEventAudioPlayer) \
	NO_API virtual ~UIsdkPointerEventAudioPlayer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_28_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkPointerEventAudioPlayer;

// ********** End Class UIsdkPointerEventAudioPlayer ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkPointerEventAudioPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
