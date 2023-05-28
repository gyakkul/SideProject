// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTTaskNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTaskNode_generated_h
#error "BTTaskNode.generated.h already included, missing '#pragma once' in BTTaskNode.h"
#endif
#define AIMODULE_BTTaskNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTaskNode(); \
	friend struct Z_Construct_UClass_UBTTaskNode_Statics; \
public: \
	DECLARE_CLASS(UBTTaskNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBTTaskNode(); \
	friend struct Z_Construct_UClass_UBTTaskNode_Statics; \
public: \
	DECLARE_CLASS(UBTTaskNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTaskNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskNode(UBTTaskNode&&); \
	NO_API UBTTaskNode(const UBTTaskNode&); \
public: \
	NO_API virtual ~UBTTaskNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTaskNode(UBTTaskNode&&); \
	NO_API UBTTaskNode(const UBTTaskNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTaskNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTaskNode) \
	NO_API virtual ~UBTTaskNode();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTaskNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTaskNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTTaskNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
