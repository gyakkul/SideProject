// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneDataLayerSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerAsset;
enum class EDataLayerRuntimeState : uint8;
struct FActorDataLayer;
#ifdef MOVIESCENETRACKS_MovieSceneDataLayerSection_generated_h
#error "MovieSceneDataLayerSection.generated.h already included, missing '#pragma once' in MovieSceneDataLayerSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneDataLayerSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDataLayers); \
	DECLARE_FUNCTION(execGetDataLayers); \
	DECLARE_FUNCTION(execSetDataLayerAssets); \
	DECLARE_FUNCTION(execGetDataLayerAssets); \
	DECLARE_FUNCTION(execSetFlushOnUnload); \
	DECLARE_FUNCTION(execGetFlushOnUnload); \
	DECLARE_FUNCTION(execSetPrerollState); \
	DECLARE_FUNCTION(execGetPrerollState); \
	DECLARE_FUNCTION(execSetDesiredState); \
	DECLARE_FUNCTION(execGetDesiredState);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDataLayers); \
	DECLARE_FUNCTION(execGetDataLayers); \
	DECLARE_FUNCTION(execSetDataLayerAssets); \
	DECLARE_FUNCTION(execGetDataLayerAssets); \
	DECLARE_FUNCTION(execSetFlushOnUnload); \
	DECLARE_FUNCTION(execGetFlushOnUnload); \
	DECLARE_FUNCTION(execSetPrerollState); \
	DECLARE_FUNCTION(execGetPrerollState); \
	DECLARE_FUNCTION(execSetDesiredState); \
	DECLARE_FUNCTION(execGetDesiredState);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDataLayerSection(); \
	friend struct Z_Construct_UClass_UMovieSceneDataLayerSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDataLayerSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneDataLayerSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneDataLayerSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneDataLayerSection(); \
	friend struct Z_Construct_UClass_UMovieSceneDataLayerSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDataLayerSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneDataLayerSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneDataLayerSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneDataLayerSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDataLayerSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDataLayerSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDataLayerSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneDataLayerSection(UMovieSceneDataLayerSection&&); \
	MOVIESCENETRACKS_API UMovieSceneDataLayerSection(const UMovieSceneDataLayerSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDataLayerSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneDataLayerSection(UMovieSceneDataLayerSection&&); \
	MOVIESCENETRACKS_API UMovieSceneDataLayerSection(const UMovieSceneDataLayerSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneDataLayerSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDataLayerSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDataLayerSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneDataLayerSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneDataLayerSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDataLayerSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
