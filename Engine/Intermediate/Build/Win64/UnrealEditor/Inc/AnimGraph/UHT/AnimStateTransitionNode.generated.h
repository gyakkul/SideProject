// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimStateTransitionNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPH_AnimStateTransitionNode_generated_h
#error "AnimStateTransitionNode.generated.h already included, missing '#pragma once' in AnimStateTransitionNode.h"
#endif
#define ANIMGRAPH_AnimStateTransitionNode_generated_h

#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ACCESSORS
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateTransitionNode, ANIMGRAPH_API)


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateTransitionNode(); \
	friend struct Z_Construct_UClass_UAnimStateTransitionNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateTransitionNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateTransitionNode) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateTransitionNode(); \
	friend struct Z_Construct_UClass_UAnimStateTransitionNode_Statics; \
public: \
	DECLARE_CLASS(UAnimStateTransitionNode, UAnimStateNodeBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimGraph"), ANIMGRAPH_API) \
	DECLARE_SERIALIZER(UAnimStateTransitionNode) \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateTransitionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateTransitionNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateTransitionNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateTransitionNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateTransitionNode(UAnimStateTransitionNode&&); \
	ANIMGRAPH_API UAnimStateTransitionNode(const UAnimStateTransitionNode&); \
public: \
	ANIMGRAPH_API virtual ~UAnimStateTransitionNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPH_API UAnimStateTransitionNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANIMGRAPH_API UAnimStateTransitionNode(UAnimStateTransitionNode&&); \
	ANIMGRAPH_API UAnimStateTransitionNode(const UAnimStateTransitionNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPH_API, UAnimStateTransitionNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateTransitionNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateTransitionNode) \
	ANIMGRAPH_API virtual ~UAnimStateTransitionNode();


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_19_PROLOG
#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ACCESSORS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateTransitionNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPH_API UClass* StaticClass<class UAnimStateTransitionNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimGraph_Public_AnimStateTransitionNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
