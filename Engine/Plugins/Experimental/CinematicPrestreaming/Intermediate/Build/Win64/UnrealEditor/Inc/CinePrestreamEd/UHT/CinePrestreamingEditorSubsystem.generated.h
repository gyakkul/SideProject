// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CinePrestreamingEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorBase;
struct FCinePrestreamingGenerateAssetArgs;
struct FMoviePipelineCinePrestreamingGeneratedData;
#ifdef CINEMATICPRESTREAMINGEDITOR_CinePrestreamingEditorSubsystem_generated_h
#error "CinePrestreamingEditorSubsystem.generated.h already included, missing '#pragma once' in CinePrestreamingEditorSubsystem.h"
#endif
#define CINEMATICPRESTREAMINGEDITOR_CinePrestreamingEditorSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCinePrestreamingGenerateAssetArgs_Statics; \
	CINEMATICPRESTREAMINGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CINEMATICPRESTREAMINGEDITOR_API UScriptStruct* StaticStruct<struct FCinePrestreamingGenerateAssetArgs>();

#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_36_DELEGATE \
CINEMATICPRESTREAMINGEDITOR_API void FOnCinePrestreamingGenerateAsset_DelegateWrapper(const FMulticastScriptDelegate& OnCinePrestreamingGenerateAsset, FCinePrestreamingGenerateAssetArgs OriginalGenerationArgs);


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBuildPrestreamingComplete); \
	DECLARE_FUNCTION(execCreatePackagesFromGeneratedData); \
	DECLARE_FUNCTION(execGeneratePrestreamingAsset); \
	DECLARE_FUNCTION(execIsRendering);


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBuildPrestreamingComplete); \
	DECLARE_FUNCTION(execCreatePackagesFromGeneratedData); \
	DECLARE_FUNCTION(execGeneratePrestreamingAsset); \
	DECLARE_FUNCTION(execIsRendering);


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_ACCESSORS
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCinePrestreamingEditorSubsystem(); \
	friend struct Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCinePrestreamingEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicPrestreamingEditor"), NO_API) \
	DECLARE_SERIALIZER(UCinePrestreamingEditorSubsystem)


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUCinePrestreamingEditorSubsystem(); \
	friend struct Z_Construct_UClass_UCinePrestreamingEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UCinePrestreamingEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CinematicPrestreamingEditor"), NO_API) \
	DECLARE_SERIALIZER(UCinePrestreamingEditorSubsystem)


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCinePrestreamingEditorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCinePrestreamingEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinePrestreamingEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinePrestreamingEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinePrestreamingEditorSubsystem(UCinePrestreamingEditorSubsystem&&); \
	NO_API UCinePrestreamingEditorSubsystem(const UCinePrestreamingEditorSubsystem&); \
public: \
	NO_API virtual ~UCinePrestreamingEditorSubsystem();


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCinePrestreamingEditorSubsystem(UCinePrestreamingEditorSubsystem&&); \
	NO_API UCinePrestreamingEditorSubsystem(const UCinePrestreamingEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCinePrestreamingEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCinePrestreamingEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCinePrestreamingEditorSubsystem) \
	NO_API virtual ~UCinePrestreamingEditorSubsystem();


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_39_PROLOG
#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_INCLASS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_ACCESSORS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICPRESTREAMINGEDITOR_API UClass* StaticClass<class UCinePrestreamingEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreamingEditor_Public_CinePrestreamingEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
