// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionTrajectoryLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
struct FLinearColor;
struct FTrajectorySampleRange;
#ifdef MOTIONTRAJECTORY_MotionTrajectoryLibrary_generated_h
#error "MotionTrajectoryLibrary.generated.h already included, missing '#pragma once' in MotionTrajectoryLibrary.h"
#endif
#define MOTIONTRAJECTORY_MotionTrajectoryLibrary_generated_h

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOTIONTRAJECTORY_API UScriptStruct* StaticStruct<struct FTrajectoryDirectionClamp>();

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsConstantSpeedTrajectory); \
	DECLARE_FUNCTION(execIsStartingTrajectory); \
	DECLARE_FUNCTION(execIsStoppingTrajectory); \
	DECLARE_FUNCTION(execDebugDrawTrajectory); \
	DECLARE_FUNCTION(execMakeTrajectoryRelativeToComponent); \
	DECLARE_FUNCTION(execRotateTrajectory); \
	DECLARE_FUNCTION(execFlattenTrajectory2D);


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsConstantSpeedTrajectory); \
	DECLARE_FUNCTION(execIsStartingTrajectory); \
	DECLARE_FUNCTION(execIsStoppingTrajectory); \
	DECLARE_FUNCTION(execDebugDrawTrajectory); \
	DECLARE_FUNCTION(execMakeTrajectoryRelativeToComponent); \
	DECLARE_FUNCTION(execRotateTrajectory); \
	DECLARE_FUNCTION(execFlattenTrajectory2D);


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrajectoryBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrajectoryBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrajectoryBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMotionTrajectoryBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMotionTrajectoryBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrajectoryBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrajectoryBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrajectoryBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrajectoryBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrajectoryBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrajectoryBlueprintLibrary(UMotionTrajectoryBlueprintLibrary&&); \
	NO_API UMotionTrajectoryBlueprintLibrary(const UMotionTrajectoryBlueprintLibrary&); \
public: \
	NO_API virtual ~UMotionTrajectoryBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrajectoryBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrajectoryBlueprintLibrary(UMotionTrajectoryBlueprintLibrary&&); \
	NO_API UMotionTrajectoryBlueprintLibrary(const UMotionTrajectoryBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrajectoryBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrajectoryBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrajectoryBlueprintLibrary) \
	NO_API virtual ~UMotionTrajectoryBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONTRAJECTORY_API UClass* StaticClass<class UMotionTrajectoryBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
