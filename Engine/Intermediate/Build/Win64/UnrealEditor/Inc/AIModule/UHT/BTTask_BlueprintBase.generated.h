// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef AIMODULE_BTTask_BlueprintBase_generated_h
#error "BTTask_BlueprintBase.generated.h already included, missing '#pragma once' in BTTask_BlueprintBase.h"
#endif
#define AIMODULE_BTTask_BlueprintBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsTaskAborting); \
	DECLARE_FUNCTION(execIsTaskExecuting); \
	DECLARE_FUNCTION(execSetFinishOnMessageWithId); \
	DECLARE_FUNCTION(execSetFinishOnMessage); \
	DECLARE_FUNCTION(execFinishAbort); \
	DECLARE_FUNCTION(execFinishExecute);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsTaskAborting); \
	DECLARE_FUNCTION(execIsTaskExecuting); \
	DECLARE_FUNCTION(execSetFinishOnMessageWithId); \
	DECLARE_FUNCTION(execSetFinishOnMessage); \
	DECLARE_FUNCTION(execFinishAbort); \
	DECLARE_FUNCTION(execFinishExecute);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlueprintBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTTask_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_BlueprintBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlueprintBase(UBTTask_BlueprintBase&&); \
	NO_API UBTTask_BlueprintBase(const UBTTask_BlueprintBase&); \
public: \
	NO_API virtual ~UBTTask_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_BlueprintBase(UBTTask_BlueprintBase&&); \
	NO_API UBTTask_BlueprintBase(const UBTTask_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_BlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_BlueprintBase) \
	NO_API virtual ~UBTTask_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_23_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_BlueprintBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
