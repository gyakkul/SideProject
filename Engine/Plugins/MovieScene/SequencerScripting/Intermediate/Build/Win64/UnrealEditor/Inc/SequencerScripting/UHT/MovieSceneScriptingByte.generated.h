// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingByte.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingByteKey;
class UMovieSceneScriptingKey;
enum class EMovieSceneKeyInterpolation : uint8;
enum class ESequenceTimeUnit : uint8;
struct FFrameNumber;
struct FFrameTime;
#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingByte_generated_h
#error "MovieSceneScriptingByte.generated.h already included, missing '#pragma once' in MovieSceneScriptingByte.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingByte_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingByteKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingByteKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingByteKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingByteKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingByteKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingByteKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingByteKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingByteKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingByteKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingByteKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingByteKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingByteKey(UMovieSceneScriptingByteKey&&); \
	NO_API UMovieSceneScriptingByteKey(const UMovieSceneScriptingByteKey&); \
public: \
	NO_API virtual ~UMovieSceneScriptingByteKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingByteKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingByteKey(UMovieSceneScriptingByteKey&&); \
	NO_API UMovieSceneScriptingByteKey(const UMovieSceneScriptingByteKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingByteKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingByteKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingByteKey) \
	NO_API virtual ~UMovieSceneScriptingByteKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_20_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingByteKey>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingByteChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingByteChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingByteChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingByteChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingByteChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingByteChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingByteChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingByteChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingByteChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingByteChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingByteChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingByteChannel(UMovieSceneScriptingByteChannel&&); \
	NO_API UMovieSceneScriptingByteChannel(const UMovieSceneScriptingByteChannel&); \
public: \
	NO_API virtual ~UMovieSceneScriptingByteChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingByteChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingByteChannel(UMovieSceneScriptingByteChannel&&); \
	NO_API UMovieSceneScriptingByteChannel(const UMovieSceneScriptingByteChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingByteChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingByteChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingByteChannel) \
	NO_API virtual ~UMovieSceneScriptingByteChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_63_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingByteChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingByte_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
