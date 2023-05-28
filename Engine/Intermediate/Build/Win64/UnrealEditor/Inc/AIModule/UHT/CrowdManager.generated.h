// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/CrowdManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdManager_generated_h
#error "CrowdManager.generated.h already included, missing '#pragma once' in CrowdManager.h"
#endif
#define AIMODULE_CrowdManager_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdAvoidanceConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FCrowdAvoidanceConfig>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrowdAvoidanceSamplingPattern_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FCrowdAvoidanceSamplingPattern>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend struct Z_Construct_UClass_UCrowdManager_Statics; \
public: \
	DECLARE_CLASS(UCrowdManager, UCrowdManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS \
private: \
	static void StaticRegisterNativesUCrowdManager(); \
	friend struct Z_Construct_UClass_UCrowdManager_Statics; \
public: \
	DECLARE_CLASS(UCrowdManager, UCrowdManagerBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UCrowdManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrowdManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public: \
	NO_API virtual ~UCrowdManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCrowdManager(UCrowdManager&&); \
	NO_API UCrowdManager(const UCrowdManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrowdManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdManager) \
	NO_API virtual ~UCrowdManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_167_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UCrowdManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
