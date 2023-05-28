// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;
#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelineEditorBlueprintLibrary_generated_h
#error "MoviePipelineEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in MoviePipelineEditorBlueprintLibrary.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelineEditorBlueprintLibrary_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResolveOutputDirectoryFromJob); \
	DECLARE_FUNCTION(execEnsureJobHasDefaultSettings); \
	DECLARE_FUNCTION(execCreateJobFromSequence); \
	DECLARE_FUNCTION(execConvertManifestFileToString); \
	DECLARE_FUNCTION(execSaveQueueToManifestFile); \
	DECLARE_FUNCTION(execWarnUserOfUnsavedMap); \
	DECLARE_FUNCTION(execIsMapValidForRemoteRender); \
	DECLARE_FUNCTION(execExportConfigToAsset);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResolveOutputDirectoryFromJob); \
	DECLARE_FUNCTION(execEnsureJobHasDefaultSettings); \
	DECLARE_FUNCTION(execCreateJobFromSequence); \
	DECLARE_FUNCTION(execConvertManifestFileToString); \
	DECLARE_FUNCTION(execSaveQueueToManifestFile); \
	DECLARE_FUNCTION(execWarnUserOfUnsavedMap); \
	DECLARE_FUNCTION(execIsMapValidForRemoteRender); \
	DECLARE_FUNCTION(execExportConfigToAsset);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineEditorBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEditorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEditorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineEditorBlueprintLibrary(UMoviePipelineEditorBlueprintLibrary&&); \
	NO_API UMoviePipelineEditorBlueprintLibrary(const UMoviePipelineEditorBlueprintLibrary&); \
public: \
	NO_API virtual ~UMoviePipelineEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineEditorBlueprintLibrary(UMoviePipelineEditorBlueprintLibrary&&); \
	NO_API UMoviePipelineEditorBlueprintLibrary(const UMoviePipelineEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineEditorBlueprintLibrary) \
	NO_API virtual ~UMoviePipelineEditorBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_19_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<class UMoviePipelineEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
