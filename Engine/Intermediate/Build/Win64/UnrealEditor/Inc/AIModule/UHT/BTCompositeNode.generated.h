// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTCompositeNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTCompositeNode_generated_h
#error "BTCompositeNode.generated.h already included, missing '#pragma once' in BTCompositeNode.h"
#endif
#define AIMODULE_BTCompositeNode_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBTDecoratorLogic_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBTDecoratorLogic>();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBTCompositeChild_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBTCompositeChild>();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTCompositeNode(); \
	friend struct Z_Construct_UClass_UBTCompositeNode_Statics; \
public: \
	DECLARE_CLASS(UBTCompositeNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTCompositeNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUBTCompositeNode(); \
	friend struct Z_Construct_UClass_UBTCompositeNode_Statics; \
public: \
	DECLARE_CLASS(UBTCompositeNode, UBTNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTCompositeNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTCompositeNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTCompositeNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTCompositeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTCompositeNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTCompositeNode(UBTCompositeNode&&); \
	NO_API UBTCompositeNode(const UBTCompositeNode&); \
public:


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTCompositeNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTCompositeNode(UBTCompositeNode&&); \
	NO_API UBTCompositeNode(const UBTCompositeNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTCompositeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTCompositeNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTCompositeNode)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_86_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTCompositeNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTCompositeNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTCompositeNode_h


#define FOREACH_ENUM_EBTCHILDINDEX(op) \
	op(EBTChildIndex::FirstNode) \
	op(EBTChildIndex::TaskNode) 

enum class EBTChildIndex : uint8;
template<> struct TIsUEnumClass<EBTChildIndex> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EBTChildIndex>();

#define FOREACH_ENUM_EBTDECORATORLOGIC(op) \
	op(EBTDecoratorLogic::Invalid) \
	op(EBTDecoratorLogic::Test) \
	op(EBTDecoratorLogic::And) \
	op(EBTDecoratorLogic::Or) \
	op(EBTDecoratorLogic::Not) 

namespace EBTDecoratorLogic { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EBTDecoratorLogic::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
