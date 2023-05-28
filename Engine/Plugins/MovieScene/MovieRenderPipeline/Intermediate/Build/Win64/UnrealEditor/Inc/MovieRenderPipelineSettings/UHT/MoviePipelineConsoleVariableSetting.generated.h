// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineConsoleVariableSetting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMoviePipelineConsoleVariableEntry;
#ifdef MOVIERENDERPIPELINESETTINGS_MoviePipelineConsoleVariableSetting_generated_h
#error "MoviePipelineConsoleVariableSetting.generated.h already included, missing '#pragma once' in MoviePipelineConsoleVariableSetting.h"
#endif
#define MOVIERENDERPIPELINESETTINGS_MoviePipelineConsoleVariableSetting_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineConsoleVariableEntry_Statics; \
	MOVIERENDERPIPELINESETTINGS_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINESETTINGS_API UScriptStruct* StaticStruct<struct FMoviePipelineConsoleVariableEntry>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateConsoleVariableEnableState); \
	DECLARE_FUNCTION(execAddConsoleVariable); \
	DECLARE_FUNCTION(execAddOrUpdateConsoleVariable); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execGetConsoleVariables);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateConsoleVariableEnableState); \
	DECLARE_FUNCTION(execAddConsoleVariable); \
	DECLARE_FUNCTION(execAddOrUpdateConsoleVariable); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execGetConsoleVariables);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineConsoleVariableSetting(); \
	friend struct Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineConsoleVariableSetting, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineSettings"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineConsoleVariableSetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineConsoleVariableSetting(); \
	friend struct Z_Construct_UClass_UMoviePipelineConsoleVariableSetting_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineConsoleVariableSetting, UMoviePipelineSetting, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineSettings"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineConsoleVariableSetting)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineConsoleVariableSetting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineConsoleVariableSetting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineConsoleVariableSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConsoleVariableSetting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineConsoleVariableSetting(UMoviePipelineConsoleVariableSetting&&); \
	NO_API UMoviePipelineConsoleVariableSetting(const UMoviePipelineConsoleVariableSetting&); \
public: \
	NO_API virtual ~UMoviePipelineConsoleVariableSetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineConsoleVariableSetting(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineConsoleVariableSetting(UMoviePipelineConsoleVariableSetting&&); \
	NO_API UMoviePipelineConsoleVariableSetting(const UMoviePipelineConsoleVariableSetting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineConsoleVariableSetting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineConsoleVariableSetting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineConsoleVariableSetting) \
	NO_API virtual ~UMoviePipelineConsoleVariableSetting();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_66_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<class UMoviePipelineConsoleVariableSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineConsoleVariableSetting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
