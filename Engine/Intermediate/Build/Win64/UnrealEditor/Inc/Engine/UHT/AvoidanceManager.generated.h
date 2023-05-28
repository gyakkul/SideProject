// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/AvoidanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovementComponent;
#ifdef ENGINE_AvoidanceManager_generated_h
#error "AvoidanceManager.generated.h already included, missing '#pragma once' in AvoidanceManager.h"
#endif
#define ENGINE_AvoidanceManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavAvoidanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNavAvoidanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent); \
	DECLARE_FUNCTION(execRegisterMovementComponent); \
	DECLARE_FUNCTION(execGetNewAvoidanceUID); \
	DECLARE_FUNCTION(execGetObjectCount);


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvoidanceVelocityForComponent); \
	DECLARE_FUNCTION(execRegisterMovementComponent); \
	DECLARE_FUNCTION(execGetNewAvoidanceUID); \
	DECLARE_FUNCTION(execGetObjectCount);


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend struct Z_Construct_UClass_UAvoidanceManager_Statics; \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUAvoidanceManager(); \
	friend struct Z_Construct_UClass_UAvoidanceManager_Statics; \
public: \
	DECLARE_CLASS(UAvoidanceManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAvoidanceManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public: \
	NO_API virtual ~UAvoidanceManager();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvoidanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAvoidanceManager(UAvoidanceManager&&); \
	NO_API UAvoidanceManager(const UAvoidanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvoidanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvoidanceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvoidanceManager) \
	NO_API virtual ~UAvoidanceManager();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_87_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_90_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AvoidanceManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAvoidanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
