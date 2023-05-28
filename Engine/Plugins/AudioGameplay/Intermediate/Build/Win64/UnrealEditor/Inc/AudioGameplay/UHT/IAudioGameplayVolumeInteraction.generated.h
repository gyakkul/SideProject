// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IAudioGameplayVolumeInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAY_IAudioGameplayVolumeInteraction_generated_h
#error "IAudioGameplayVolumeInteraction.generated.h already included, missing '#pragma once' in IAudioGameplayVolumeInteraction.h"
#endif
#define AUDIOGAMEPLAY_IAudioGameplayVolumeInteraction_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_RPC_WRAPPERS \
	AUDIOGAMEPLAY_API virtual void OnListenerExit_Implementation() {}; \
	AUDIOGAMEPLAY_API virtual void OnListenerEnter_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_ACCESSORS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayVolumeInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(UAudioGameplayVolumeInteraction&&); \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(const UAudioGameplayVolumeInteraction&); \
public: \
	AUDIOGAMEPLAY_API virtual ~UAudioGameplayVolumeInteraction();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(UAudioGameplayVolumeInteraction&&); \
	AUDIOGAMEPLAY_API UAudioGameplayVolumeInteraction(const UAudioGameplayVolumeInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOGAMEPLAY_API, UAudioGameplayVolumeInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioGameplayVolumeInteraction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioGameplayVolumeInteraction) \
	AUDIOGAMEPLAY_API virtual ~UAudioGameplayVolumeInteraction();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAudioGameplayVolumeInteraction(); \
	friend struct Z_Construct_UClass_UAudioGameplayVolumeInteraction_Statics; \
public: \
	DECLARE_CLASS(UAudioGameplayVolumeInteraction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AudioGameplay"), AUDIOGAMEPLAY_API) \
	DECLARE_SERIALIZER(UAudioGameplayVolumeInteraction)


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAudioGameplayVolumeInteraction() {} \
public: \
	typedef UAudioGameplayVolumeInteraction UClassType; \
	typedef IAudioGameplayVolumeInteraction ThisClass; \
	AUDIOGAMEPLAY_API static void Execute_OnListenerEnter(UObject* O); \
	AUDIOGAMEPLAY_API static void Execute_OnListenerExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IAudioGameplayVolumeInteraction() {} \
public: \
	typedef UAudioGameplayVolumeInteraction UClassType; \
	typedef IAudioGameplayVolumeInteraction ThisClass; \
	AUDIOGAMEPLAY_API static void Execute_OnListenerEnter(UObject* O); \
	AUDIOGAMEPLAY_API static void Execute_OnListenerExit(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_9_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioGameplayVolumeInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayVolumeInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
