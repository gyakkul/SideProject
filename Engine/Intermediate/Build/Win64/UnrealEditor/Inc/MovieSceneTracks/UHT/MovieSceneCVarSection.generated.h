// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneCVarSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneCVarSection_generated_h
#error "MovieSceneCVarSection.generated.h already included, missing '#pragma once' in MovieSceneCVarSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneCVarSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneConsoleVariableCollection_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneConsoleVariableCollection>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneCVarOverrides_Statics; \
	MOVIESCENETRACKS_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<struct FMovieSceneCVarOverrides>();

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetFromString);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execSetFromString);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCVarSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCVarSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCVarSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCVarSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCVarSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCVarSection(); \
	friend struct Z_Construct_UClass_UMovieSceneCVarSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCVarSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneCVarSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneCVarSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneCVarSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCVarSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCVarSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCVarSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCVarSection(UMovieSceneCVarSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCVarSection(const UMovieSceneCVarSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCVarSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneCVarSection(UMovieSceneCVarSection&&); \
	MOVIESCENETRACKS_API UMovieSceneCVarSection(const UMovieSceneCVarSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneCVarSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCVarSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCVarSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneCVarSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_55_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneCVarSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCVarSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
