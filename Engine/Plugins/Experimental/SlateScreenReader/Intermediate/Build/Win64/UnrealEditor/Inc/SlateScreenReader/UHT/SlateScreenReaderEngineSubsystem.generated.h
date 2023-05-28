// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SlateScreenReaderEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenReaderAnnouncement;
struct FScreenReaderReply;
#ifdef SLATESCREENREADER_SlateScreenReaderEngineSubsystem_generated_h
#error "SlateScreenReaderEngineSubsystem.generated.h already included, missing '#pragma once' in SlateScreenReaderEngineSubsystem.h"
#endif
#define SLATESCREENREADER_SlateScreenReaderEngineSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSpeechMuted); \
	DECLARE_FUNCTION(execUnmuteSpeech); \
	DECLARE_FUNCTION(execMuteSpeech); \
	DECLARE_FUNCTION(execSetSpeechRate); \
	DECLARE_FUNCTION(execGetSpeechRate); \
	DECLARE_FUNCTION(execSetSpeechVolume); \
	DECLARE_FUNCTION(execGetSpeechVolume); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execStopSpeaking); \
	DECLARE_FUNCTION(execRequestSpeakFocusedWidget); \
	DECLARE_FUNCTION(execRequestSpeak); \
	DECLARE_FUNCTION(execIsUserRegistered); \
	DECLARE_FUNCTION(execUnregisterUser); \
	DECLARE_FUNCTION(execRegisterUser); \
	DECLARE_FUNCTION(execDeactivateUser); \
	DECLARE_FUNCTION(execActivateUser); \
	DECLARE_FUNCTION(execIsScreenReaderActive); \
	DECLARE_FUNCTION(execDeactivateScreenReader); \
	DECLARE_FUNCTION(execActivateScreenReader);


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSpeechMuted); \
	DECLARE_FUNCTION(execUnmuteSpeech); \
	DECLARE_FUNCTION(execMuteSpeech); \
	DECLARE_FUNCTION(execSetSpeechRate); \
	DECLARE_FUNCTION(execGetSpeechRate); \
	DECLARE_FUNCTION(execSetSpeechVolume); \
	DECLARE_FUNCTION(execGetSpeechVolume); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execStopSpeaking); \
	DECLARE_FUNCTION(execRequestSpeakFocusedWidget); \
	DECLARE_FUNCTION(execRequestSpeak); \
	DECLARE_FUNCTION(execIsUserRegistered); \
	DECLARE_FUNCTION(execUnregisterUser); \
	DECLARE_FUNCTION(execRegisterUser); \
	DECLARE_FUNCTION(execDeactivateUser); \
	DECLARE_FUNCTION(execActivateUser); \
	DECLARE_FUNCTION(execIsScreenReaderActive); \
	DECLARE_FUNCTION(execDeactivateScreenReader); \
	DECLARE_FUNCTION(execActivateScreenReader);


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_ACCESSORS
#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSlateScreenReaderEngineSubsystem(); \
	friend struct Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(USlateScreenReaderEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateScreenReader"), NO_API) \
	DECLARE_SERIALIZER(USlateScreenReaderEngineSubsystem)


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUSlateScreenReaderEngineSubsystem(); \
	friend struct Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(USlateScreenReaderEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateScreenReader"), NO_API) \
	DECLARE_SERIALIZER(USlateScreenReaderEngineSubsystem)


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USlateScreenReaderEngineSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USlateScreenReaderEngineSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateScreenReaderEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateScreenReaderEngineSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateScreenReaderEngineSubsystem(USlateScreenReaderEngineSubsystem&&); \
	NO_API USlateScreenReaderEngineSubsystem(const USlateScreenReaderEngineSubsystem&); \
public:


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USlateScreenReaderEngineSubsystem(USlateScreenReaderEngineSubsystem&&); \
	NO_API USlateScreenReaderEngineSubsystem(const USlateScreenReaderEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USlateScreenReaderEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USlateScreenReaderEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USlateScreenReaderEngineSubsystem)


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_31_PROLOG
#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_INCLASS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_ACCESSORS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATESCREENREADER_API UClass* StaticClass<class USlateScreenReaderEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
