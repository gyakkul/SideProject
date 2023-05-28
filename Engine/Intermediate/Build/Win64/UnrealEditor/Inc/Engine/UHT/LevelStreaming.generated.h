// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/LevelStreaming.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelScriptActor;
class ULevel;
class ULevelStreaming;
#ifdef ENGINE_LevelStreaming_generated_h
#error "LevelStreaming.generated.h already included, missing '#pragma once' in LevelStreaming.h"
#endif
#define ENGINE_LevelStreaming_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_104_DELEGATE \
ENGINE_API void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_105_DELEGATE \
ENGINE_API void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execIsStreamingStatePending); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execGetLoadedLevel); \
	DECLARE_FUNCTION(execShouldBeLoaded); \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName); \
	DECLARE_FUNCTION(execSetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execGetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetLevelLODIndex); \
	DECLARE_FUNCTION(execSetShouldBeLoaded); \
	DECLARE_FUNCTION(execSetShouldBeVisible);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execIsStreamingStatePending); \
	DECLARE_FUNCTION(execIsLevelLoaded); \
	DECLARE_FUNCTION(execIsLevelVisible); \
	DECLARE_FUNCTION(execGetLoadedLevel); \
	DECLARE_FUNCTION(execShouldBeLoaded); \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName); \
	DECLARE_FUNCTION(execSetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execGetIsRequestingUnloadAndRemoval); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetLevelLODIndex); \
	DECLARE_FUNCTION(execSetShouldBeLoaded); \
	DECLARE_FUNCTION(execSetShouldBeVisible);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelStreaming, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct Z_Construct_UClass_ULevelStreaming_Statics; \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend struct Z_Construct_UClass_ULevelStreaming_Statics; \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ARCHIVESERIALIZER \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreaming); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreaming(ULevelStreaming&&); \
	NO_API ULevelStreaming(const ULevelStreaming&); \
public: \
	NO_API virtual ~ULevelStreaming();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelStreaming(ULevelStreaming&&); \
	NO_API ULevelStreaming(const ULevelStreaming&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelStreaming); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	NO_API virtual ~ULevelStreaming();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_134_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_137_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreaming."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelStreaming>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
