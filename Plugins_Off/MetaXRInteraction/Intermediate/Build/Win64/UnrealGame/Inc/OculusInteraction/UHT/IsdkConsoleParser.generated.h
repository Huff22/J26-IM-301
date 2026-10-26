// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/IsdkConsoleParser.h"

#ifdef OCULUSINTERACTION_IsdkConsoleParser_generated_h
#error "IsdkConsoleParser.generated.h already included, missing '#pragma once' in IsdkConsoleParser.h"
#endif
#define OCULUSINTERACTION_IsdkConsoleParser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UIsdkConsoleParser;

// ********** Begin Interface UIsdkConsoleReceiver *************************************************
OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OCULUSINTERACTION_API UIsdkConsoleReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConsoleReceiver(UIsdkConsoleReceiver&&) = delete; \
	UIsdkConsoleReceiver(const UIsdkConsoleReceiver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OCULUSINTERACTION_API, UIsdkConsoleReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConsoleReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsdkConsoleReceiver) \
	virtual ~UIsdkConsoleReceiver() = default;


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsdkConsoleReceiver(); \
	friend struct Z_Construct_UClass_UIsdkConsoleReceiver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConsoleReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConsoleReceiver_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConsoleReceiver)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_GENERATED_UINTERFACE_BODY() \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsdkConsoleReceiver() {} \
public: \
	typedef UIsdkConsoleReceiver UClassType; \
	typedef IIsdkConsoleReceiver ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_32_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConsoleReceiver;

// ********** End Interface UIsdkConsoleReceiver ***************************************************

// ********** Begin Class UIsdkConsoleParser *******************************************************
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGet);


OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleParser_NoRegister();

#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsdkConsoleParser(); \
	friend struct Z_Construct_UClass_UIsdkConsoleParser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OCULUSINTERACTION_API UClass* Z_Construct_UClass_UIsdkConsoleParser_NoRegister(); \
public: \
	DECLARE_CLASS2(UIsdkConsoleParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OculusInteraction"), Z_Construct_UClass_UIsdkConsoleParser_NoRegister) \
	DECLARE_SERIALIZER(UIsdkConsoleParser)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UIsdkConsoleParser(UIsdkConsoleParser&&) = delete; \
	UIsdkConsoleParser(const UIsdkConsoleParser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsdkConsoleParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsdkConsoleParser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsdkConsoleParser)


#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_45_PROLOG
#define FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_INCLASS_NO_PURE_DECLS \
	FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UIsdkConsoleParser;

// ********** End Class UIsdkConsoleParser *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MetaIsdk_release_HostProject_Plugins_OculusInteraction_Source_OculusInteraction_Public_Tools_IsdkConsoleParser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
