// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BTFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBehaviorTreeComponent;
class UBlackboardComponent;
class UBTNode;
class UObject;
struct FBlackboardKeySelector;
#ifdef AIMODULE_BTFunctionLibrary_generated_h
#error "BTFunctionLibrary.generated.h already included, missing '#pragma once' in BTFunctionLibrary.h"
#endif
#define AIMODULE_BTFunctionLibrary_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent); \
	DECLARE_FUNCTION(execStartUsingExternalEvent); \
	DECLARE_FUNCTION(execClearBlackboardValue); \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsName); \
	DECLARE_FUNCTION(execSetBlackboardValueAsString); \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execGetBlackboardValueAsName); \
	DECLARE_FUNCTION(execGetBlackboardValueAsString); \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor); \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetOwnerComponent); \
	DECLARE_FUNCTION(execGetOwnersBlackboard);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopUsingExternalEvent); \
	DECLARE_FUNCTION(execStartUsingExternalEvent); \
	DECLARE_FUNCTION(execClearBlackboardValue); \
	DECLARE_FUNCTION(execSetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execClearBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execSetBlackboardValueAsName); \
	DECLARE_FUNCTION(execSetBlackboardValueAsString); \
	DECLARE_FUNCTION(execSetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execSetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execSetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execSetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execSetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execSetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetBlackboardValueAsRotator); \
	DECLARE_FUNCTION(execGetBlackboardValueAsVector); \
	DECLARE_FUNCTION(execGetBlackboardValueAsName); \
	DECLARE_FUNCTION(execGetBlackboardValueAsString); \
	DECLARE_FUNCTION(execGetBlackboardValueAsBool); \
	DECLARE_FUNCTION(execGetBlackboardValueAsFloat); \
	DECLARE_FUNCTION(execGetBlackboardValueAsInt); \
	DECLARE_FUNCTION(execGetBlackboardValueAsEnum); \
	DECLARE_FUNCTION(execGetBlackboardValueAsClass); \
	DECLARE_FUNCTION(execGetBlackboardValueAsActor); \
	DECLARE_FUNCTION(execGetBlackboardValueAsObject); \
	DECLARE_FUNCTION(execGetOwnerComponent); \
	DECLARE_FUNCTION(execGetOwnersBlackboard);


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBTFunctionLibrary(); \
	friend struct Z_Construct_UClass_UBTFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UBTFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTFunctionLibrary)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public: \
	NO_API virtual ~UBTFunctionLibrary();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTFunctionLibrary(UBTFunctionLibrary&&); \
	NO_API UBTFunctionLibrary(const UBTFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTFunctionLibrary) \
	NO_API virtual ~UBTFunctionLibrary();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_28_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBTFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
