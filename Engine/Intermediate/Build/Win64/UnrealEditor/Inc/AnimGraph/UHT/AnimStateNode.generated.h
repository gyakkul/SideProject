// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateNode_generated_h
#error "AnimStateNode.generated.h already included, missing '#pragma once' in AnimStateNode.h"
#endif
#define ANIMGRAPH_AnimStateNode_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateNode(); \
	friend struct Z_Construct_UClass_UAnimStateNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateNode(); \
	friend struct Z_Construct_UClass_UAnimStateNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateNode)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateNode(UAnimStateNode&&); \
	ANIMGRAPH_API UAnimStateNode(const UAnimStateNode&); \
public: \
	ANIMGRAPH_API virtual ~UAnimStateNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateNode(UAnimStateNode&&); \
	ANIMGRAPH_API UAnimStateNode(const UAnimStateNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateNode) \
	ANIMGRAPH_API virtual ~UAnimStateNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_22_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h


#define FOREACH_ENUM_EANIMSTATETYPE(op) \
	op(AST_SingleAnimation) \
	op(AST_BlendGraph) 

enum EAnimStateType : int;
template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
