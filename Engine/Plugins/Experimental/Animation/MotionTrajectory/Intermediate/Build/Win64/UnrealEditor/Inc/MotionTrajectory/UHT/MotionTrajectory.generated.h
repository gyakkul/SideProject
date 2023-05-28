// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MotionTrajectory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMotionTrajectorySettings;
struct FTrajectorySampleRange;
#ifdef MOTIONTRAJECTORY_MotionTrajectory_generated_h
#error "MotionTrajectory.generated.h already included, missing '#pragma once' in MotionTrajectory.h"
#endif
#define MOTIONTRAJECTORY_MotionTrajectory_generated_h

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOTIONTRAJECTORY_API UScriptStruct* StaticStruct<struct FMotionTrajectorySettings>();

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHistory); \
	DECLARE_FUNCTION(execGetTrajectoryWithSettings); \
	DECLARE_FUNCTION(execGetTrajectory);


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHistory); \
	DECLARE_FUNCTION(execGetTrajectoryWithSettings); \
	DECLARE_FUNCTION(execGetTrajectory);


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionTrajectoryComponent(); \
	friend struct Z_Construct_UClass_UMotionTrajectoryComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionTrajectoryComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrajectoryComponent)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUMotionTrajectoryComponent(); \
	friend struct Z_Construct_UClass_UMotionTrajectoryComponent_Statics; \
public: \
	DECLARE_CLASS(UMotionTrajectoryComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), NO_API) \
	DECLARE_SERIALIZER(UMotionTrajectoryComponent)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMotionTrajectoryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrajectoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrajectoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrajectoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrajectoryComponent(UMotionTrajectoryComponent&&); \
	NO_API UMotionTrajectoryComponent(const UMotionTrajectoryComponent&); \
public: \
	NO_API virtual ~UMotionTrajectoryComponent();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMotionTrajectoryComponent(UMotionTrajectoryComponent&&); \
	NO_API UMotionTrajectoryComponent(const UMotionTrajectoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMotionTrajectoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionTrajectoryComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionTrajectoryComponent) \
	NO_API virtual ~UMotionTrajectoryComponent();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_36_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONTRAJECTORY_API UClass* StaticClass<class UMotionTrajectoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
