// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KeysAndChannels/MovieSceneScriptingDouble.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneScriptingDoubleKey;
class UMovieSceneScriptingKey;
enum class EMovieSceneKeyInterpolation : uint8;
enum class ESequenceTimeUnit : uint8;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FSequencerScriptingRange;
#ifdef SEQUENCERSCRIPTING_MovieSceneScriptingDouble_generated_h
#error "MovieSceneScriptingDouble.generated.h already included, missing '#pragma once' in MovieSceneScriptingDouble.h"
#endif
#define SEQUENCERSCRIPTING_MovieSceneScriptingDouble_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLeaveTangentWeight); \
	DECLARE_FUNCTION(execGetLeaveTangentWeight); \
	DECLARE_FUNCTION(execSetArriveTangentWeight); \
	DECLARE_FUNCTION(execGetArriveTangentWeight); \
	DECLARE_FUNCTION(execSetTangentWeightMode); \
	DECLARE_FUNCTION(execGetTangentWeightMode); \
	DECLARE_FUNCTION(execSetLeaveTangent); \
	DECLARE_FUNCTION(execGetLeaveTangent); \
	DECLARE_FUNCTION(execSetArriveTangent); \
	DECLARE_FUNCTION(execGetArriveTangent); \
	DECLARE_FUNCTION(execSetTangentMode); \
	DECLARE_FUNCTION(execGetTangentMode); \
	DECLARE_FUNCTION(execSetInterpolationMode); \
	DECLARE_FUNCTION(execGetInterpolationMode); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLeaveTangentWeight); \
	DECLARE_FUNCTION(execGetLeaveTangentWeight); \
	DECLARE_FUNCTION(execSetArriveTangentWeight); \
	DECLARE_FUNCTION(execGetArriveTangentWeight); \
	DECLARE_FUNCTION(execSetTangentWeightMode); \
	DECLARE_FUNCTION(execGetTangentWeightMode); \
	DECLARE_FUNCTION(execSetLeaveTangent); \
	DECLARE_FUNCTION(execGetLeaveTangent); \
	DECLARE_FUNCTION(execSetArriveTangent); \
	DECLARE_FUNCTION(execGetArriveTangent); \
	DECLARE_FUNCTION(execSetTangentMode); \
	DECLARE_FUNCTION(execGetTangentMode); \
	DECLARE_FUNCTION(execSetInterpolationMode); \
	DECLARE_FUNCTION(execGetInterpolationMode); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingDoubleKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingDoubleKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingDoubleKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingDoubleKey(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingDoubleKey_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingDoubleKey, UMovieSceneScriptingKey, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingDoubleKey)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingDoubleKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingDoubleKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingDoubleKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingDoubleKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingDoubleKey(UMovieSceneScriptingDoubleKey&&); \
	NO_API UMovieSceneScriptingDoubleKey(const UMovieSceneScriptingDoubleKey&); \
public: \
	NO_API virtual ~UMovieSceneScriptingDoubleKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingDoubleKey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingDoubleKey(UMovieSceneScriptingDoubleKey&&); \
	NO_API UMovieSceneScriptingDoubleKey(const UMovieSceneScriptingDoubleKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingDoubleKey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingDoubleKey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingDoubleKey) \
	NO_API virtual ~UMovieSceneScriptingDoubleKey();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_22_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingDoubleKey>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execSetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execSetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execComputeEffectiveRange); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasDefault); \
	DECLARE_FUNCTION(execRemoveDefault); \
	DECLARE_FUNCTION(execGetDefault); \
	DECLARE_FUNCTION(execSetDefault); \
	DECLARE_FUNCTION(execSetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPostInfinityExtrapolation); \
	DECLARE_FUNCTION(execSetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execGetPreInfinityExtrapolation); \
	DECLARE_FUNCTION(execComputeEffectiveRange); \
	DECLARE_FUNCTION(execEvaluateKeys); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetKeys); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingDoubleChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingDoubleChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingDoubleChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneScriptingDoubleChannel(); \
	friend struct Z_Construct_UClass_UMovieSceneScriptingDoubleChannel_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneScriptingDoubleChannel, UMovieSceneScriptingChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneScriptingDoubleChannel)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingDoubleChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingDoubleChannel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingDoubleChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingDoubleChannel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingDoubleChannel(UMovieSceneScriptingDoubleChannel&&); \
	NO_API UMovieSceneScriptingDoubleChannel(const UMovieSceneScriptingDoubleChannel&); \
public: \
	NO_API virtual ~UMovieSceneScriptingDoubleChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneScriptingDoubleChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneScriptingDoubleChannel(UMovieSceneScriptingDoubleChannel&&); \
	NO_API UMovieSceneScriptingDoubleChannel(const UMovieSceneScriptingDoubleChannel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneScriptingDoubleChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneScriptingDoubleChannel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneScriptingDoubleChannel) \
	NO_API virtual ~UMovieSceneScriptingDoubleChannel();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_226_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieSceneScriptingDoubleChannel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingDouble_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
