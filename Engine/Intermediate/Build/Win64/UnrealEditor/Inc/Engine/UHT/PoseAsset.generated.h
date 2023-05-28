// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/PoseAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
#ifdef ENGINE_PoseAsset_generated_h
#error "PoseAsset.generated.h already included, missing '#pragma once' in PoseAsset.h"
#endif
#define ENGINE_PoseAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseAssetInfluence>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseAssetInfluences>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseDataContainer>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdatePoseFromAnimation); \
	DECLARE_FUNCTION(execGetPoseNames); \
	DECLARE_FUNCTION(execRenamePose);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdatePoseFromAnimation); \
	DECLARE_FUNCTION(execGetPoseNames); \
	DECLARE_FUNCTION(execRenamePose);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct Z_Construct_UClass_UPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct Z_Construct_UClass_UPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPoseAsset(UPoseAsset&&); \
	ENGINE_API UPoseAsset(const UPoseAsset&); \
public: \
	ENGINE_API virtual ~UPoseAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPoseAsset(UPoseAsset&&); \
	ENGINE_API UPoseAsset(const UPoseAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset) \
	ENGINE_API virtual ~UPoseAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_153_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_156_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PoseAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
