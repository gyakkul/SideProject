// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTTask_GameplayTaskBase_generated_h
#error "BTTask_GameplayTaskBase.generated.h already included, missing '#pragma once' in BTTask_GameplayTaskBase.h"
#endif
#define AIMODULE_BTTask_GameplayTaskBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTTask_GameplayTaskBase(); \
	friend struct Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_GameplayTaskBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_GameplayTaskBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUBTTask_GameplayTaskBase(); \
	friend struct Z_Construct_UClass_UBTTask_GameplayTaskBase_Statics; \
public: \
	DECLARE_CLASS(UBTTask_GameplayTaskBase, UBTTaskNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTTask_GameplayTaskBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_GameplayTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_GameplayTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_GameplayTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_GameplayTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_GameplayTaskBase(UBTTask_GameplayTaskBase&&); \
	NO_API UBTTask_GameplayTaskBase(const UBTTask_GameplayTaskBase&); \
public: \
	NO_API virtual ~UBTTask_GameplayTaskBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTTask_GameplayTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTTask_GameplayTaskBase(UBTTask_GameplayTaskBase&&); \
	NO_API UBTTask_GameplayTaskBase(const UBTTask_GameplayTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTTask_GameplayTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTTask_GameplayTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTTask_GameplayTaskBase) \
	NO_API virtual ~UBTTask_GameplayTaskBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_25_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTTask_GameplayTaskBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTTask_GameplayTaskBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Tasks_BTTask_GameplayTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
