// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioGameplayVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOGAMEPLAYVOLUME_AudioGameplayVolume_generated_h
#error "AudioGameplayVolume.generated.h already included, missing '#pragma once' in AudioGameplayVolume.h"
#endif
#define AUDIOGAMEPLAYVOLUME_AudioGameplayVolume_generated_h

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_12_DELEGATE \
AUDIOGAMEPLAYVOLUME_API void FAudioGameplayVolumeEvent_DelegateWrapper(const FMulticastScriptDelegate& AudioGameplayVolumeEvent);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_RPC_WRAPPERS \
	virtual void OnListenerExit_Implementation(); \
	virtual void OnListenerEnter_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnListenerExit_Implementation(); \
	virtual void OnListenerEnter_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_bEnabled); \
	DECLARE_FUNCTION(execOnListenerExit); \
	DECLARE_FUNCTION(execOnListenerEnter); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_ACCESSORS
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAudioGameplayVolume(); \
	friend struct Z_Construct_UClass_AAudioGameplayVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioGameplayVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(AAudioGameplayVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAAudioGameplayVolume(); \
	friend struct Z_Construct_UClass_AAudioGameplayVolume_Statics; \
public: \
	DECLARE_CLASS(AAudioGameplayVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(AAudioGameplayVolume) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioGameplayVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioGameplayVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioGameplayVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioGameplayVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioGameplayVolume(AAudioGameplayVolume&&); \
	NO_API AAudioGameplayVolume(const AAudioGameplayVolume&); \
public: \
	NO_API virtual ~AAudioGameplayVolume();


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAudioGameplayVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAudioGameplayVolume(AAudioGameplayVolume&&); \
	NO_API AAudioGameplayVolume(const AAudioGameplayVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAudioGameplayVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAudioGameplayVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAudioGameplayVolume) \
	NO_API virtual ~AAudioGameplayVolume();


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_25_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_ACCESSORS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_ACCESSORS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioGameplayVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class AAudioGameplayVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_AudioGameplayVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
