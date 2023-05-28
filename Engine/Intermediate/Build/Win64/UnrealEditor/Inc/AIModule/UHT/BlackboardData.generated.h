// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BlackboardData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BlackboardData_generated_h
#error "BlackboardData.generated.h already included, missing '#pragma once' in BlackboardData.h"
#endif
#define AIMODULE_BlackboardData_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlackboardEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FBlackboardEntry>();

#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackboardData(); \
	friend struct Z_Construct_UClass_UBlackboardData_Statics; \
public: \
	DECLARE_CLASS(UBlackboardData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardData)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUBlackboardData(); \
	friend struct Z_Construct_UClass_UBlackboardData_Statics; \
public: \
	DECLARE_CLASS(UBlackboardData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBlackboardData)


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardData(UBlackboardData&&); \
	NO_API UBlackboardData(const UBlackboardData&); \
public: \
	NO_API virtual ~UBlackboardData();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackboardData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlackboardData(UBlackboardData&&); \
	NO_API UBlackboardData(const UBlackboardData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackboardData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackboardData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackboardData) \
	NO_API virtual ~UBlackboardData();


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_44_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlackboardData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UBlackboardData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
