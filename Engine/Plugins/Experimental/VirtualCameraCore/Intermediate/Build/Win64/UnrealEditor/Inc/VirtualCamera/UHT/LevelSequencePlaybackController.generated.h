// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelSequence/LevelSequencePlaybackController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
struct FFrameNumber;
struct FFrameRate;
struct FFrameTime;
struct FLevelSequenceData;
struct FTimecode;
#ifdef VIRTUALCAMERA_LevelSequencePlaybackController_generated_h
#error "LevelSequencePlaybackController.generated.h already included, missing '#pragma once' in LevelSequencePlaybackController.h"
#endif
#define VIRTUALCAMERA_LevelSequencePlaybackController_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSequenceData_Statics; \
	VIRTUALCAMERA_API static class UScriptStruct* StaticStruct();


template<> VIRTUALCAMERA_API UScriptStruct* StaticStruct<struct FLevelSequenceData>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearActiveLevelSequence); \
	DECLARE_FUNCTION(execSetActiveLevelSequence); \
	DECLARE_FUNCTION(execStopLevelSequencePlay); \
	DECLARE_FUNCTION(execPlayLevelSequenceReverse); \
	DECLARE_FUNCTION(execPlayLevelSequence); \
	DECLARE_FUNCTION(execPauseLevelSequence); \
	DECLARE_FUNCTION(execIsSequencePlaybackActive); \
	DECLARE_FUNCTION(execJumpToPlaybackPosition); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackTimecode); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackPosition); \
	DECLARE_FUNCTION(execGetCurrentSequenceDuration); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackEnd); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackStart); \
	DECLARE_FUNCTION(execSetSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execIsSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execGetCurrentSequenceFrameRate); \
	DECLARE_FUNCTION(execGetActiveLevelSequence); \
	DECLARE_FUNCTION(execGetActiveLevelSequenceName); \
	DECLARE_FUNCTION(execGetLevelSequences);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearActiveLevelSequence); \
	DECLARE_FUNCTION(execSetActiveLevelSequence); \
	DECLARE_FUNCTION(execStopLevelSequencePlay); \
	DECLARE_FUNCTION(execPlayLevelSequenceReverse); \
	DECLARE_FUNCTION(execPlayLevelSequence); \
	DECLARE_FUNCTION(execPauseLevelSequence); \
	DECLARE_FUNCTION(execIsSequencePlaybackActive); \
	DECLARE_FUNCTION(execJumpToPlaybackPosition); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackTimecode); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackPosition); \
	DECLARE_FUNCTION(execGetCurrentSequenceDuration); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackEnd); \
	DECLARE_FUNCTION(execGetCurrentSequencePlaybackStart); \
	DECLARE_FUNCTION(execSetSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execIsSequencerLockedToCameraCut); \
	DECLARE_FUNCTION(execGetCurrentSequenceFrameRate); \
	DECLARE_FUNCTION(execGetActiveLevelSequence); \
	DECLARE_FUNCTION(execGetActiveLevelSequenceName); \
	DECLARE_FUNCTION(execGetLevelSequences);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequencePlaybackController(); \
	friend struct Z_Construct_UClass_ULevelSequencePlaybackController_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlaybackController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlaybackController)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequencePlaybackController(); \
	friend struct Z_Construct_UClass_ULevelSequencePlaybackController_Statics; \
public: \
	DECLARE_CLASS(ULevelSequencePlaybackController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VirtualCamera"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequencePlaybackController)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequencePlaybackController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlaybackController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlaybackController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlaybackController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlaybackController(ULevelSequencePlaybackController&&); \
	NO_API ULevelSequencePlaybackController(const ULevelSequencePlaybackController&); \
public: \
	NO_API virtual ~ULevelSequencePlaybackController();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequencePlaybackController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequencePlaybackController(ULevelSequencePlaybackController&&); \
	NO_API ULevelSequencePlaybackController(const ULevelSequencePlaybackController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequencePlaybackController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequencePlaybackController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequencePlaybackController) \
	NO_API virtual ~ULevelSequencePlaybackController();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelSequencePlaybackController."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCAMERA_API UClass* StaticClass<class ULevelSequencePlaybackController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_LevelSequence_LevelSequencePlaybackController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
