// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/MovieSceneDMXLibrarySection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXEntityFixturePatchRef;
#ifdef DMXRUNTIME_MovieSceneDMXLibrarySection_generated_h
#error "MovieSceneDMXLibrarySection.generated.h already included, missing '#pragma once' in MovieSceneDMXLibrarySection.h"
#endif
#define DMXRUNTIME_MovieSceneDMXLibrarySection_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXFixtureFunctionChannel>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics; \
	DMXRUNTIME_API static class UScriptStruct* StaticStruct();


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXFixturePatchChannel>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNumPatches); \
	DECLARE_FUNCTION(execGetFixturePatches); \
	DECLARE_FUNCTION(execGetFixturePatchChannelEnabled); \
	DECLARE_FUNCTION(execToggleFixturePatchChannel); \
	DECLARE_FUNCTION(execSetFixturePatchActiveMode); \
	DECLARE_FUNCTION(execContainsFixturePatch); \
	DECLARE_FUNCTION(execRemoveFixturePatch); \
	DECLARE_FUNCTION(execAddFixturePatches); \
	DECLARE_FUNCTION(execAddFixturePatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNumPatches); \
	DECLARE_FUNCTION(execGetFixturePatches); \
	DECLARE_FUNCTION(execGetFixturePatchChannelEnabled); \
	DECLARE_FUNCTION(execToggleFixturePatchChannel); \
	DECLARE_FUNCTION(execSetFixturePatchActiveMode); \
	DECLARE_FUNCTION(execContainsFixturePatch); \
	DECLARE_FUNCTION(execRemoveFixturePatch); \
	DECLARE_FUNCTION(execAddFixturePatches); \
	DECLARE_FUNCTION(execAddFixturePatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDMXLibrarySection, NO_API)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneDMXLibrarySection(); \
	friend struct Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDMXLibrarySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneDMXLibrarySection) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneDMXLibrarySection(); \
	friend struct Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneDMXLibrarySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneDMXLibrarySection) \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ARCHIVESERIALIZER


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneDMXLibrarySection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneDMXLibrarySection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDMXLibrarySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDMXLibrarySection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneDMXLibrarySection(UMovieSceneDMXLibrarySection&&); \
	NO_API UMovieSceneDMXLibrarySection(const UMovieSceneDMXLibrarySection&); \
public: \
	NO_API virtual ~UMovieSceneDMXLibrarySection();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneDMXLibrarySection(UMovieSceneDMXLibrarySection&&); \
	NO_API UMovieSceneDMXLibrarySection(const UMovieSceneDMXLibrarySection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneDMXLibrarySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneDMXLibrarySection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovieSceneDMXLibrarySection) \
	NO_API virtual ~UMovieSceneDMXLibrarySection();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_153_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_159_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UMovieSceneDMXLibrarySection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
