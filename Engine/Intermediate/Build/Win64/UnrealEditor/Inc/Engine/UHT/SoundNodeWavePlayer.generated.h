// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNodeWavePlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNodeWavePlayer_generated_h
#error "SoundNodeWavePlayer.generated.h already included, missing '#pragma once' in SoundNodeWavePlayer.h"
#endif
#define ENGINE_SoundNodeWavePlayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeWavePlayer, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundNodeWavePlayer(); \
	friend struct Z_Construct_UClass_USoundNodeWavePlayer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeWavePlayer, USoundNodeAssetReferencer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeWavePlayer) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNodeWavePlayer(); \
	friend struct Z_Construct_UClass_USoundNodeWavePlayer_Statics; \
public: \
	DECLARE_CLASS(USoundNodeWavePlayer, USoundNodeAssetReferencer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNodeWavePlayer) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeWavePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeWavePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeWavePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeWavePlayer(USoundNodeWavePlayer&&); \
	ENGINE_API USoundNodeWavePlayer(const USoundNodeWavePlayer&); \
public: \
	ENGINE_API virtual ~USoundNodeWavePlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNodeWavePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundNodeWavePlayer(USoundNodeWavePlayer&&); \
	ENGINE_API USoundNodeWavePlayer(const USoundNodeWavePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNodeWavePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNodeWavePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNodeWavePlayer) \
	ENGINE_API virtual ~USoundNodeWavePlayer();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNodeWavePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
