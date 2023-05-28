// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerTools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSeqExportOption;
class UAnimSequence;
class UAnimSequenceLevelSequenceLink;
class ULevelSequence;
class ULevelSequenceAnimSequenceLink;
class UMovieSceneCapture;
class UMovieSceneEventSectionBase;
class UMovieSceneSequence;
class UMovieSceneUserImportFBXControlRigSettings;
class UMovieSceneUserImportFBXSettings;
class UObject;
class UWorld;
struct FMovieSceneBindingProxy;
struct FMovieSceneEvent;
struct FSequencerBoundObjects;
struct FSequencerExportFBXParams;
struct FSequencerQuickBindingResult;
struct FSequencerScriptingRange;
#ifdef SEQUENCERSCRIPTINGEDITOR_SequencerTools_generated_h
#error "SequencerTools.generated.h already included, missing '#pragma once' in SequencerTools.h"
#endif
#define SEQUENCERSCRIPTINGEDITOR_SequencerTools_generated_h

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_32_DELEGATE \
SEQUENCERSCRIPTINGEDITOR_API void FOnRenderMovieStopped_DelegateWrapper(const FScriptDelegate& OnRenderMovieStopped, bool bSuccess);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerBoundObjects_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FSequencerBoundObjects>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerQuickBindingResult_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FSequencerQuickBindingResult>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerExportFBXParams_Statics; \
	SEQUENCERSCRIPTINGEDITOR_API static class UScriptStruct* StaticStruct();


template<> SEQUENCERSCRIPTINGEDITOR_API UScriptStruct* StaticStruct<struct FSequencerExportFBXParams>();

#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execImportFBXToControlRig); \
	DECLARE_FUNCTION(execCreateQuickBinding); \
	DECLARE_FUNCTION(execIsEventEndpointValid); \
	DECLARE_FUNCTION(execCreateEvent); \
	DECLARE_FUNCTION(execImportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetAnimSequenceLinkFromLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequenceLinkFromAnimSequence); \
	DECLARE_FUNCTION(execClearLinkedAnimSequences); \
	DECLARE_FUNCTION(execLinkAnimSequence); \
	DECLARE_FUNCTION(execExportAnimSequence); \
	DECLARE_FUNCTION(execExportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCancelMovieRender); \
	DECLARE_FUNCTION(execIsRenderingMovie); \
	DECLARE_FUNCTION(execRenderMovie);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportFBXToControlRig); \
	DECLARE_FUNCTION(execCreateQuickBinding); \
	DECLARE_FUNCTION(execIsEventEndpointValid); \
	DECLARE_FUNCTION(execCreateEvent); \
	DECLARE_FUNCTION(execImportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetAnimSequenceLinkFromLevelSequence); \
	DECLARE_FUNCTION(execGetLevelSequenceLinkFromAnimSequence); \
	DECLARE_FUNCTION(execClearLinkedAnimSequences); \
	DECLARE_FUNCTION(execLinkAnimSequence); \
	DECLARE_FUNCTION(execExportAnimSequence); \
	DECLARE_FUNCTION(execExportLevelSequenceFBX); \
	DECLARE_FUNCTION(execGetObjectBindings); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execCancelMovieRender); \
	DECLARE_FUNCTION(execIsRenderingMovie); \
	DECLARE_FUNCTION(execRenderMovie);


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_ACCESSORS
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerToolsFunctionLibrary(); \
	friend struct Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USequencerToolsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SequencerScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(USequencerToolsFunctionLibrary)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerToolsFunctionLibrary(); \
	friend struct Z_Construct_UClass_USequencerToolsFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USequencerToolsFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SequencerScriptingEditor"), NO_API) \
	DECLARE_SERIALIZER(USequencerToolsFunctionLibrary)


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerToolsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerToolsFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerToolsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerToolsFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerToolsFunctionLibrary(USequencerToolsFunctionLibrary&&); \
	NO_API USequencerToolsFunctionLibrary(const USequencerToolsFunctionLibrary&); \
public: \
	NO_API virtual ~USequencerToolsFunctionLibrary();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerToolsFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerToolsFunctionLibrary(USequencerToolsFunctionLibrary&&); \
	NO_API USequencerToolsFunctionLibrary(const USequencerToolsFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerToolsFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerToolsFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerToolsFunctionLibrary) \
	NO_API virtual ~USequencerToolsFunctionLibrary();


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_114_PROLOG
#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_INCLASS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_ACCESSORS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEQUENCERSCRIPTINGEDITOR_API UClass* StaticClass<class USequencerToolsFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScriptingEditor_Public_SequencerTools_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
