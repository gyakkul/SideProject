// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef AIMODULE_BTDecorator_BlueprintBase_generated_h
#error "BTDecorator_BlueprintBase.generated.h already included, missing '#pragma once' in BTDecorator_BlueprintBase.h"
#endif
#define AIMODULE_BTDecorator_BlueprintBase_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDecoratorObserverActive); \
	DECLARE_FUNCTION(execIsDecoratorExecutionActive);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDecoratorObserverActive); \
	DECLARE_FUNCTION(execIsDecoratorExecutionActive);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTDecorator_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_BlueprintBase, UBTDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUBTDecorator_BlueprintBase(); \
	friend struct Z_Construct_UClass_UBTDecorator_BlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UBTDecorator_BlueprintBase, UBTDecorator, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTDecorator_BlueprintBase)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTDecorator_BlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_BlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_BlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_BlueprintBase(UBTDecorator_BlueprintBase&&); \
	NO_API UBTDecorator_BlueprintBase(const UBTDecorator_BlueprintBase&); \
public: \
	NO_API virtual ~UBTDecorator_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTDecorator_BlueprintBase(UBTDecorator_BlueprintBase&&); \
	NO_API UBTDecorator_BlueprintBase(const UBTDecorator_BlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTDecorator_BlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTDecorator_BlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTDecorator_BlueprintBase) \
	NO_API virtual ~UBTDecorator_BlueprintBase();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_32_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTDecorator_BlueprintBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_Decorators_BTDecorator_BlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
