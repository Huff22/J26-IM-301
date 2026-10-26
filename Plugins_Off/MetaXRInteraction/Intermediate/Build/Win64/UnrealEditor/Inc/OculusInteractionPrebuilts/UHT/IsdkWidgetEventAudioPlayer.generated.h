// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/IsdkWidgetEventAudioPlayer.h"

#ifdef OCULUSINTERACTIONPREBUILTS_IsdkWidgetEventAudioPlayer_generated_h
#error "IsdkWidgetEventAudioPlayer.generated.h already included, missing '#pragma once' in IsdkWidgetEventAudioPlayer.h"
#endif
#define OCULUSINTERACTIONPREBUILTS_IsdkWidgetEventAudioPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAudioComponent;
struct FIsdkWidgetEvent;

// ********** Begin Class UIsdkWidgetEventAudioPlayer **********************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleWidgetStateChanged); \
	DECLARE_FUNCTION(execSetUnselectedEmptyAudio); \
	DECLARE_FUNCTION(execGetUnselectedEmptyAudio); \
	DECLARE_FUNCTION(execSetUnselectedHoveredAudio); \
	DECLARE_FUNCTION(execGetUnselectedHoveredAudio); \
	DECLARE_FUNCTION(execSetSelectedEmptyAudio); \
	DECLARE_FUNCTION(execGetSelectedEmptyAudio); \
	DECLARE_FUNCTION(execSetSelectedHoveredAudio); \
	DECLARE_FUNCTION(execGetSelectedHoveredAudio);


OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkWidgetEventAudioPlayer(); \
	friend struct Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTIONPREBUILTS_API UClass* Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkWidgetEventAudioPlayer, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusInteractionPrebuilts"), Z_Construct_UClass_UIsdkWidgetEventAudioPlayer_NoRegister) \
	DECLARE_SERIALIZER(UIsdkWidgetEventAudioPlayer)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkWidgetEventAudioPlayer(UIsdkWidgetEventAudioPlayer&&) = delete; \
	UIsdkWidgetEventAudioPlayer(const UIsdkWidgetEventAudioPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkWidgetEventAudioPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkWidgetEventAudioPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkWidgetEventAudioPlayer) \
	NO_API virtual ~UIsdkWidgetEventAudioPlayer();


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_29_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkWidgetEventAudioPlayer;

// ********** End Class UIsdkWidgetEventAudioPlayer ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteractionPrebuilts_Public_Audio_IsdkWidgetEventAudioPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
