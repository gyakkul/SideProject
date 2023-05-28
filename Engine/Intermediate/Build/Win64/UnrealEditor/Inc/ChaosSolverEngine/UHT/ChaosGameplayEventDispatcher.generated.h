// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/ChaosGameplayEventDispatcher.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSSOLVERENGINE_ChaosGameplayEventDispatcher_generated_h
#error "ChaosGameplayEventDispatcher.generated.h already included, missing '#pragma once' in ChaosGameplayEventDispatcher.h"
#endif
#define CHAOSSOLVERENGINE_ChaosGameplayEventDispatcher_generated_h

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosBreakEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosBreakEvent>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosRemovalEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosRemovalEvent>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosCrumblingEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosCrumblingEvent>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBreakEventCallbackWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FBreakEventCallbackWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemovalEventCallbackWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FRemovalEventCallbackWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrumblingEventCallbackWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FCrumblingEventCallbackWrapper>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosHandlerSet_Statics; \
	CHAOSSOLVERENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosHandlerSet>();

#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosGameplayEventDispatcher(); \
	friend struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics; \
public: \
	DECLARE_CLASS(UChaosGameplayEventDispatcher, UChaosEventListenerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosGameplayEventDispatcher)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_INCLASS \
private: \
	static void StaticRegisterNativesUChaosGameplayEventDispatcher(); \
	friend struct Z_Construct_UClass_UChaosGameplayEventDispatcher_Statics; \
public: \
	DECLARE_CLASS(UChaosGameplayEventDispatcher, UChaosEventListenerComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosGameplayEventDispatcher)


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosGameplayEventDispatcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosGameplayEventDispatcher) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosGameplayEventDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosGameplayEventDispatcher); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosGameplayEventDispatcher(UChaosGameplayEventDispatcher&&); \
	NO_API UChaosGameplayEventDispatcher(const UChaosGameplayEventDispatcher&); \
public: \
	NO_API virtual ~UChaosGameplayEventDispatcher();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosGameplayEventDispatcher(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosGameplayEventDispatcher(UChaosGameplayEventDispatcher&&); \
	NO_API UChaosGameplayEventDispatcher(const UChaosGameplayEventDispatcher&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosGameplayEventDispatcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosGameplayEventDispatcher); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChaosGameplayEventDispatcher) \
	NO_API virtual ~UChaosGameplayEventDispatcher();


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_190_PROLOG
#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_INCLASS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h_193_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class UChaosGameplayEventDispatcher>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosGameplayEventDispatcher_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
