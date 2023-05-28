// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequenceDirector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMovieSceneSequence;
class UObject;
struct FMovieSceneObjectBindingID;
struct FQualifiedFrameTime;
#ifdef LEVELSEQUENCE_LevelSequenceDirector_generated_h
#error "LevelSequenceDirector.generated.h already included, missing '#pragma once' in LevelSequenceDirector.h"
#endif
#define LEVELSEQUENCE_LevelSequenceDirector_generated_h

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetMasterSequenceTime); \
	DECLARE_FUNCTION(execGetRootSequenceTime);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetBoundActor); \
	DECLARE_FUNCTION(execGetBoundActors); \
	DECLARE_FUNCTION(execGetBoundObject); \
	DECLARE_FUNCTION(execGetBoundObjects); \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetMasterSequenceTime); \
	DECLARE_FUNCTION(execGetRootSequenceTime);


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceDirector(); \
	friend struct Z_Construct_UClass_ULevelSequenceDirector_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceDirector)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceDirector(); \
	friend struct Z_Construct_UClass_ULevelSequenceDirector_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceDirector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceDirector)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceDirector(ULevelSequenceDirector&&); \
	NO_API ULevelSequenceDirector(const ULevelSequenceDirector&); \
public: \
	NO_API virtual ~ULevelSequenceDirector();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceDirector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceDirector(ULevelSequenceDirector&&); \
	NO_API ULevelSequenceDirector(const ULevelSequenceDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceDirector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceDirector) \
	NO_API virtual ~ULevelSequenceDirector();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_16_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceDirector>();

#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_SPARSE_DATA
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_ACCESSORS
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint(); \
	friend struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULegacyLevelSequenceDirectorBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULegacyLevelSequenceDirectorBlueprint)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_INCLASS \
private: \
	static void StaticRegisterNativesULegacyLevelSequenceDirectorBlueprint(); \
	friend struct Z_Construct_UClass_ULegacyLevelSequenceDirectorBlueprint_Statics; \
public: \
	DECLARE_CLASS(ULegacyLevelSequenceDirectorBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULegacyLevelSequenceDirectorBlueprint)


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelSequenceDirectorBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelSequenceDirectorBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(ULegacyLevelSequenceDirectorBlueprint&&); \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const ULegacyLevelSequenceDirectorBlueprint&); \
public: \
	NO_API virtual ~ULegacyLevelSequenceDirectorBlueprint();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULegacyLevelSequenceDirectorBlueprint(ULegacyLevelSequenceDirectorBlueprint&&); \
	NO_API ULegacyLevelSequenceDirectorBlueprint(const ULegacyLevelSequenceDirectorBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelSequenceDirectorBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelSequenceDirectorBlueprint) \
	NO_API virtual ~ULegacyLevelSequenceDirectorBlueprint();


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_107_PROLOG
#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_SPARSE_DATA \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_ACCESSORS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_INCLASS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_SPARSE_DATA \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_ACCESSORS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULegacyLevelSequenceDirectorBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
