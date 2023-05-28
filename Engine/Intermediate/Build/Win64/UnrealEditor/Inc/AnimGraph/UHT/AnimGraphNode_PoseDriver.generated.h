// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_PoseDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPoseDriverOutput : uint8;
enum class EPoseDriverSource : uint8;
struct FRBFParams;
#ifdef ANIMGRAPH_AnimGraphNode_PoseDriver_generated_h
#error "AnimGraphNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimGraphNode_PoseDriver.h"
#endif
#define ANIMGRAPH_AnimGraphNode_PoseDriver_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOnlyDriveSelectedBones); \
	DECLARE_FUNCTION(execSetOnlyDriveSelectedBones); \
	DECLARE_FUNCTION(execGetPoseDriverOutput); \
	DECLARE_FUNCTION(execSetPoseDriverOutput); \
	DECLARE_FUNCTION(execGetPoseDriverSource); \
	DECLARE_FUNCTION(execSetPoseDriverSource); \
	DECLARE_FUNCTION(execGetRBFParameters); \
	DECLARE_FUNCTION(execSetRBFParameters); \
	DECLARE_FUNCTION(execGetDrivingBoneNames); \
	DECLARE_FUNCTION(execSetDrivingBones); \
	DECLARE_FUNCTION(execGetSourceBoneNames); \
	DECLARE_FUNCTION(execSetSourceBones); \
	DECLARE_FUNCTION(execCopyTargetsFromPoseAsset);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOnlyDriveSelectedBones); \
	DECLARE_FUNCTION(execSetOnlyDriveSelectedBones); \
	DECLARE_FUNCTION(execGetPoseDriverOutput); \
	DECLARE_FUNCTION(execSetPoseDriverOutput); \
	DECLARE_FUNCTION(execGetPoseDriverSource); \
	DECLARE_FUNCTION(execSetPoseDriverSource); \
	DECLARE_FUNCTION(execGetRBFParameters); \
	DECLARE_FUNCTION(execSetRBFParameters); \
	DECLARE_FUNCTION(execGetDrivingBoneNames); \
	DECLARE_FUNCTION(execSetDrivingBones); \
	DECLARE_FUNCTION(execGetSourceBoneNames); \
	DECLARE_FUNCTION(execSetSourceBones); \
	DECLARE_FUNCTION(execCopyTargetsFromPoseAsset);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_PoseDriver, NO_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseDriver(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_PoseDriver, UAnimGraphNode_PoseHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseDriver) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_PoseDriver(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_PoseDriver_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_PoseDriver, UAnimGraphNode_PoseHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_PoseDriver) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_PoseDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_PoseDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_PoseDriver(UAnimGraphNode_PoseDriver&&); \
	NO_API UAnimGraphNode_PoseDriver(const UAnimGraphNode_PoseDriver&); \
public: \
	NO_API virtual ~UAnimGraphNode_PoseDriver();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_PoseDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimGraphNode_PoseDriver(UAnimGraphNode_PoseDriver&&); \
	NO_API UAnimGraphNode_PoseDriver(const UAnimGraphNode_PoseDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_PoseDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_PoseDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_PoseDriver) \
	NO_API virtual ~UAnimGraphNode_PoseDriver();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_14_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_PoseDriver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_PoseDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
