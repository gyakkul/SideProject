// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_LookAt.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimGraphNode_LookAt_generated_h
#error "AnimGraphNode_LookAt.generated.h already included, missing '#pragma once' in AnimGraphNode_LookAt.h"
#endif
#define ANIMGRAPH_AnimGraphNode_LookAt_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LookAt, ANIMGRAPH_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LookAt(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_LookAt_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_LookAt, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LookAt) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_LookAt(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_LookAt_Statics; \
public: \
	DECLARE_CLASS(UAnimGraphNode_LookAt, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimGraphNode_LookAt) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LookAt) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LookAt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LookAt); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(UAnimGraphNode_LookAt&&); \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const UAnimGraphNode_LookAt&); \
public: \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LookAt();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimGraphNode_LookAt(UAnimGraphNode_LookAt&&); \
	ANIMGRAPH_API UAnimGraphNode_LookAt(const UAnimGraphNode_LookAt&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimGraphNode_LookAt); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_LookAt); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_LookAt) \
	ANIMGRAPH_API virtual ~UAnimGraphNode_LookAt();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_15_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimGraphNode_LookAt."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimGraphNode_LookAt>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LookAt_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
