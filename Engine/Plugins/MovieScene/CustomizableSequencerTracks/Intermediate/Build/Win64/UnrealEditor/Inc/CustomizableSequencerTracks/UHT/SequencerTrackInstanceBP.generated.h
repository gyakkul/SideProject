// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SequencerTrackInstanceBP.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FSequencerTrackInstanceInput;
#ifdef CUSTOMIZABLESEQUENCERTRACKS_SequencerTrackInstanceBP_generated_h
#error "SequencerTrackInstanceBP.generated.h already included, missing '#pragma once' in SequencerTrackInstanceBP.h"
#endif
#define CUSTOMIZABLESEQUENCERTRACKS_SequencerTrackInstanceBP_generated_h

#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics; \
	CUSTOMIZABLESEQUENCERTRACKS_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLESEQUENCERTRACKS_API UScriptStruct* StaticStruct<struct FSequencerTrackInstanceInput>();

#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInput); \
	DECLARE_FUNCTION(execGetNumInputs); \
	DECLARE_FUNCTION(execGetInputs); \
	DECLARE_FUNCTION(execGetAnimatedObject);


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInput); \
	DECLARE_FUNCTION(execGetNumInputs); \
	DECLARE_FUNCTION(execGetInputs); \
	DECLARE_FUNCTION(execGetAnimatedObject);


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_ACCESSORS
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSequencerTrackInstanceBP(); \
	friend struct Z_Construct_UClass_USequencerTrackInstanceBP_Statics; \
public: \
	DECLARE_CLASS(USequencerTrackInstanceBP, UMovieSceneTrackInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CustomizableSequencerTracks"), NO_API) \
	DECLARE_SERIALIZER(USequencerTrackInstanceBP)


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUSequencerTrackInstanceBP(); \
	friend struct Z_Construct_UClass_USequencerTrackInstanceBP_Statics; \
public: \
	DECLARE_CLASS(USequencerTrackInstanceBP, UMovieSceneTrackInstance, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CustomizableSequencerTracks"), NO_API) \
	DECLARE_SERIALIZER(USequencerTrackInstanceBP)


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerTrackInstanceBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerTrackInstanceBP) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerTrackInstanceBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerTrackInstanceBP); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerTrackInstanceBP(USequencerTrackInstanceBP&&); \
	NO_API USequencerTrackInstanceBP(const USequencerTrackInstanceBP&); \
public: \
	NO_API virtual ~USequencerTrackInstanceBP();


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerTrackInstanceBP(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerTrackInstanceBP(USequencerTrackInstanceBP&&); \
	NO_API USequencerTrackInstanceBP(const USequencerTrackInstanceBP&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerTrackInstanceBP); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerTrackInstanceBP); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerTrackInstanceBP) \
	NO_API virtual ~USequencerTrackInstanceBP();


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_29_PROLOG
#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_ACCESSORS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_INCLASS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_ACCESSORS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_35_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMIZABLESEQUENCERTRACKS_API UClass* StaticClass<class USequencerTrackInstanceBP>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
