// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_PawnActionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_PawnActionBase_generated_h
#error "BTTask_PawnActionBase.generated.h already included, missing '#pragma once' in BTTask_PawnActionBase.h"
#endif
#define AIMODULE_BTTask_PawnActionBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_PawnActionBase(); \
	friend struct Z_Construct_UClass_UBTTask_PawnActionBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_PawnActionBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_PawnActionBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_PawnActionBase(); \
	friend struct Z_Construct_UClass_UBTTask_PawnActionBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_PawnActionBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_PawnActionBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_PawnActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PawnActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_PawnActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PawnActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_PawnActionBase(UBTTask_PawnActionBase&&); \
	NO_API UBTTask_PawnActionBase(const UBTTask_PawnActionBase&); \
public: \
	NO_API virtual ~UBTTask_PawnActionBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_PawnActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_PawnActionBase(UBTTask_PawnActionBase&&); \
	NO_API UBTTask_PawnActionBase(const UBTTask_PawnActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_PawnActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_PawnActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_PawnActionBase) \
	NO_API virtual ~UBTTask_PawnActionBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_29_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_PawnActionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_PawnActionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_PawnActionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
