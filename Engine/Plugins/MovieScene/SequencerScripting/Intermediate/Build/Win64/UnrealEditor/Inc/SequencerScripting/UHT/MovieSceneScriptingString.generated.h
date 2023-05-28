// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingString.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingKey;
class UMovieSceneScriptingStringKey;
enum class ESequenceTimeUnit : uint8;
struct FFrameNumber;
struct FFrameTime;
#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingString_generated_h
#error "MovieSceneScriptingString.generated.h already included, missing '#pragma once' in MovieSceneScriptingString.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingString_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingStringKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingStringKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingStringKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingStringKey(UMovieSceneScriptingStringKey&&); \
	NO_API UMovieSceneScriptingStringKey(const UMovieSceneScriptingStringKey&); \
public: \
	NO_API virtual ~UMovieSceneScriptingStringKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingStringKey(UMovieSceneScriptingStringKey&&); \
	NO_API UMovieSceneScriptingStringKey(const UMovieSceneScriptingStringKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringKey) \
	NO_API virtual ~UMovieSceneScriptingStringKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingStringKey>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingStringChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingStringChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingStringChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingStringChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingStringChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingStringChannel(UMovieSceneScriptingStringChannel&&); \
	NO_API UMovieSceneScriptingStringChannel(const UMovieSceneScriptingStringChannel&); \
public: \
	NO_API virtual ~UMovieSceneScriptingStringChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingStringChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingStringChannel(UMovieSceneScriptingStringChannel&&); \
	NO_API UMovieSceneScriptingStringChannel(const UMovieSceneScriptingStringChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingStringChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingStringChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingStringChannel) \
	NO_API virtual ~UMovieSceneScriptingStringChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_62_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingStringChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingString_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
