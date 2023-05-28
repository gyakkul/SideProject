// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingObjectPath.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingKey;
class UMovieSceneScriptingObjectPathKey;
class UObject;
enum class ESequenceTimeUnit : uint8;
struct FFrameNumber;
struct FFrameTime;
#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingObjectPath_generated_h
#error "MovieSceneScriptingObjectPath.generated.h already included, missing '#pragma once' in MovieSceneScriptingObjectPath.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingObjectPath_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingObjectPathKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingObjectPathKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingObjectPathKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingObjectPathKey(UMovieSceneScriptingObjectPathKey&&); \
	NO_API UMovieSceneScriptingObjectPathKey(const UMovieSceneScriptingObjectPathKey&); \
public: \
	NO_API virtual ~UMovieSceneScriptingObjectPathKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingObjectPathKey(UMovieSceneScriptingObjectPathKey&&); \
	NO_API UMovieSceneScriptingObjectPathKey(const UMovieSceneScriptingObjectPathKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathKey) \
	NO_API virtual ~UMovieSceneScriptingObjectPathKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingObjectPathKey>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingObjectPathChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingObjectPathChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingObjectPathChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingObjectPathChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingObjectPathChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingObjectPathChannel(UMovieSceneScriptingObjectPathChannel&&); \
	NO_API UMovieSceneScriptingObjectPathChannel(const UMovieSceneScriptingObjectPathChannel&); \
public: \
	NO_API virtual ~UMovieSceneScriptingObjectPathChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingObjectPathChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingObjectPathChannel(UMovieSceneScriptingObjectPathChannel&&); \
	NO_API UMovieSceneScriptingObjectPathChannel(const UMovieSceneScriptingObjectPathChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingObjectPathChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingObjectPathChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingObjectPathChannel) \
	NO_API virtual ~UMovieSceneScriptingObjectPathChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_65_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingObjectPathChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingObjectPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
