// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioParameterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAudioParameter;
#ifdef AUDIOGAMEPLAY_AudioParameterComponent_generated_h
#error "AudioParameterComponent.generated.h already included, missing '#pragma once' in AudioParameterComponent.h"
#endif
#define AUDIOGAMEPLAY_AudioParameterComponent_generated_h

#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetParameters);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetParameters);


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_ACCESSORS
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioParameterComponent(); \
	friend struct Z_Construct_UClass_UAudioParameterComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioParameterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioParameterComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioParameterComponent*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAudioParameterComponent(); \
	friend struct Z_Construct_UClass_UAudioParameterComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioParameterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplay"), NO_API) \
	DECLARE_SERIALIZER(UAudioParameterComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAudioParameterComponent*>(this); }


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterComponent(UAudioParameterComponent&&); \
	NO_API UAudioParameterComponent(const UAudioParameterComponent&); \
public: \
	NO_API virtual ~UAudioParameterComponent();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioParameterComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioParameterComponent(UAudioParameterComponent&&); \
	NO_API UAudioParameterComponent(const UAudioParameterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioParameterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioParameterComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioParameterComponent) \
	NO_API virtual ~UAudioParameterComponent();


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_20_PROLOG
#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_INCLASS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_ACCESSORS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAY_API UClass* StaticClass<class UAudioParameterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_AudioParameterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
