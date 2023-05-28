// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimGraphNode_Base;
#ifdef ANIMGRAPH_AnimationGraph_generated_h
#error "AnimationGraph.generated.h already included, missing '#pragma once' in AnimationGraph.h"
#endif
#define ANIMGRAPH_AnimationGraph_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGraphNodesOfClass);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGraphNodesOfClass);


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationGraph(); \
	friend struct Z_Construct_UClass_UAnimationGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimationGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationGraph(); \
	friend struct Z_Construct_UClass_UAnimationGraph_Statics; \
public: \
	DECLARE_CLASS(UAnimationGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), NO_API) \
	DECLARE_SERIALIZER(UAnimationGraph)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationGraph(UAnimationGraph&&); \
	NO_API UAnimationGraph(const UAnimationGraph&); \
public: \
	NO_API virtual ~UAnimationGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationGraph(UAnimationGraph&&); \
	NO_API UAnimationGraph(const UAnimationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationGraph) \
	NO_API virtual ~UAnimationGraph();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_17_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimationGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
