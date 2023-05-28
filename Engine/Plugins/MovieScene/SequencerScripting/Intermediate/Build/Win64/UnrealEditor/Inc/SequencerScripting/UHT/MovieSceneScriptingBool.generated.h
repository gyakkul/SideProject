// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingBool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingBoolKey;
class UMovieSceneScriptingKey;
enum class ESequenceTimeUnit : uint8;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FSequencerScriptingRange;
#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingBool_generated_h
#error "MovieSceneScriptingBool.generated.h already included, missing '#pragma once' in MovieSceneScriptingBool.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingBool_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingBoolKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingBoolKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingBoolKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingBoolKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingBoolKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingBoolKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingBoolKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingBoolKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingBoolKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingBoolKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingBoolKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingBoolKey(UMovieSceneScriptingBoolKey&&); \
	NO_API UMovieSceneScriptingBoolKey(const UMovieSceneScriptingBoolKey&); \
public: \
	NO_API virtual ~UMovieSceneScriptingBoolKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingBoolKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingBoolKey(UMovieSceneScriptingBoolKey&&); \
	NO_API UMovieSceneScriptingBoolKey(const UMovieSceneScriptingBoolKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingBoolKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingBoolKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingBoolKey) \
	NO_API virtual ~UMovieSceneScriptingBoolKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_18_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingBoolKey>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execComputeEffectiveRange); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execComputeEffectiveRange); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingBoolChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingBoolChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingBoolChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingBoolChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingBoolChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingBoolChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingBoolChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingBoolChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingBoolChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingBoolChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingBoolChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingBoolChannel(UMovieSceneScriptingBoolChannel&&); \
	NO_API UMovieSceneScriptingBoolChannel(const UMovieSceneScriptingBoolChannel&); \
public: \
	NO_API virtual ~UMovieSceneScriptingBoolChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingBoolChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingBoolChannel(UMovieSceneScriptingBoolChannel&&); \
	NO_API UMovieSceneScriptingBoolChannel(const UMovieSceneScriptingBoolChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingBoolChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingBoolChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingBoolChannel) \
	NO_API virtual ~UMovieSceneScriptingBoolChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_61_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingBoolChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingBool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
