// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneFolder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneFolder_generated_h
#error "MovieSceneFolder.generated.h already included, missing '#pragma once' in MovieSceneFolder.h"
#endif
#define MOVIESCENE_MovieSceneFolder_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneFolder, NO_API)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFolder(); \
	friend struct Z_Construct_UClass_UMovieSceneFolder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolder) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFolder(); \
	friend struct Z_Construct_UClass_UMovieSceneFolder_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFolder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneFolder) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolder(UMovieSceneFolder&&); \
	NO_API UMovieSceneFolder(const UMovieSceneFolder&); \
public: \
	NO_API virtual ~UMovieSceneFolder();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneFolder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneFolder(UMovieSceneFolder&&); \
	NO_API UMovieSceneFolder(const UMovieSceneFolder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneFolder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFolder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFolder) \
	NO_API virtual ~UMovieSceneFolder();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_30_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneFolder."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneFolder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFolder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
