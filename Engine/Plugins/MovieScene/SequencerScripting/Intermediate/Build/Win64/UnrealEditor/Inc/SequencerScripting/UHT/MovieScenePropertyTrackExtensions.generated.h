// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExtensionLibraries/MovieScenePropertyTrackExtensions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class UMovieSceneByteTrack;
class UMovieSceneObjectPropertyTrack;
class UMovieScenePropertyTrack;
class UObject;
#ifdef SEQUENCERSCRIPTING_MovieScenePropertyTrackExtensions_generated_h
#error "MovieScenePropertyTrackExtensions.generated.h already included, missing '#pragma once' in MovieScenePropertyTrackExtensions.h"
#endif
#define SEQUENCERSCRIPTING_MovieScenePropertyTrackExtensions_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetByteTrackEnum); \
	DECLARE_FUNCTION(execSetByteTrackEnum); \
	DECLARE_FUNCTION(execGetObjectPropertyClass); \
	DECLARE_FUNCTION(execSetObjectPropertyClass); \
	DECLARE_FUNCTION(execGetUniqueTrackName); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetPropertyNameAndPath);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetByteTrackEnum); \
	DECLARE_FUNCTION(execSetByteTrackEnum); \
	DECLARE_FUNCTION(execGetObjectPropertyClass); \
	DECLARE_FUNCTION(execSetObjectPropertyClass); \
	DECLARE_FUNCTION(execGetUniqueTrackName); \
	DECLARE_FUNCTION(execGetPropertyPath); \
	DECLARE_FUNCTION(execGetPropertyName); \
	DECLARE_FUNCTION(execSetPropertyNameAndPath);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertyTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScenePropertyTrackExtensions(); \
	friend struct Z_Construct_UClass_UMovieScenePropertyTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(UMovieScenePropertyTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SequencerScripting"), NO_API) \
	DECLARE_SERIALIZER(UMovieScenePropertyTrackExtensions)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertyTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrackExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertyTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrackExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertyTrackExtensions(UMovieScenePropertyTrackExtensions&&); \
	NO_API UMovieScenePropertyTrackExtensions(const UMovieScenePropertyTrackExtensions&); \
public: \
	NO_API virtual ~UMovieScenePropertyTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieScenePropertyTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieScenePropertyTrackExtensions(UMovieScenePropertyTrackExtensions&&); \
	NO_API UMovieScenePropertyTrackExtensions(const UMovieScenePropertyTrackExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieScenePropertyTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScenePropertyTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScenePropertyTrackExtensions) \
	NO_API virtual ~UMovieScenePropertyTrackExtensions();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTING_API UClass* StaticClass<class UMovieScenePropertyTrackExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_ExtensionLibraries_MovieScenePropertyTrackExtensions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
