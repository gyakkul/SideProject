// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EyeTrackerFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FEyeTrackerGazeData;
struct FEyeTrackerStereoGazeData;
#ifdef EYETRACKER_EyeTrackerFunctionLibrary_generated_h
#error "EyeTrackerFunctionLibrary.generated.h already included, missing '#pragma once' in EyeTrackerFunctionLibrary.h"
#endif
#define EYETRACKER_EyeTrackerFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEyeTrackedPlayer); \
	DECLARE_FUNCTION(execGetStereoGazeData); \
	DECLARE_FUNCTION(execGetGazeData); \
	DECLARE_FUNCTION(execIsStereoGazeDataAvailable); \
	DECLARE_FUNCTION(execIsEyeTrackerConnected);


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEyeTrackedPlayer); \
	DECLARE_FUNCTION(execGetStereoGazeData); \
	DECLARE_FUNCTION(execGetGazeData); \
	DECLARE_FUNCTION(execIsStereoGazeDataAvailable); \
	DECLARE_FUNCTION(execIsEyeTrackerConnected);


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UEyeTrackerFunctionLibrary)


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEyeTrackerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UEyeTrackerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EyeTracker"), NO_API) \
	DECLARE_SERIALIZER(UEyeTrackerFunctionLibrary)


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEyeTrackerFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEyeTrackerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEyeTrackerFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary&&); \
	NO_API UEyeTrackerFunctionLibrary(const UEyeTrackerFunctionLibrary&); \
public: \
	NO_API virtual ~UEyeTrackerFunctionLibrary();


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEyeTrackerFunctionLibrary(UEyeTrackerFunctionLibrary&&); \
	NO_API UEyeTrackerFunctionLibrary(const UEyeTrackerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEyeTrackerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEyeTrackerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEyeTrackerFunctionLibrary) \
	NO_API virtual ~UEyeTrackerFunctionLibrary();


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_12_PROLOG
#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EYETRACKER_API UClass* StaticClass<class UEyeTrackerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
