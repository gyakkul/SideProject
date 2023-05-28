// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsAssetGraph/PhysicsAssetGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSASSETEDITOR_PhysicsAssetGraphNode_generated_h
#error "PhysicsAssetGraphNode.generated.h already included, missing '#pragma once' in PhysicsAssetGraphNode.h"
#endif
#define PHYSICSASSETEDITOR_PhysicsAssetGraphNode_generated_h

#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_SPARSE_DATA
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_ACCESSORS
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsAssetGraphNode(); \
	friend struct Z_Construct_UClass_UPhysicsAssetGraphNode_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetGraphNode)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsAssetGraphNode(); \
	friend struct Z_Construct_UClass_UPhysicsAssetGraphNode_Statics; \
public: \
	DECLARE_CLASS(UPhysicsAssetGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PhysicsAssetEditor"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsAssetGraphNode)


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsAssetGraphNode(UPhysicsAssetGraphNode&&); \
	NO_API UPhysicsAssetGraphNode(const UPhysicsAssetGraphNode&); \
public: \
	NO_API virtual ~UPhysicsAssetGraphNode();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsAssetGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsAssetGraphNode(UPhysicsAssetGraphNode&&); \
	NO_API UPhysicsAssetGraphNode(const UPhysicsAssetGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsAssetGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsAssetGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsAssetGraphNode) \
	NO_API virtual ~UPhysicsAssetGraphNode();


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_15_PROLOG
#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_SPARSE_DATA \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_ACCESSORS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_INCLASS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_SPARSE_DATA \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_ACCESSORS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsAssetGraphNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSASSETEDITOR_API UClass* StaticClass<class UPhysicsAssetGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
