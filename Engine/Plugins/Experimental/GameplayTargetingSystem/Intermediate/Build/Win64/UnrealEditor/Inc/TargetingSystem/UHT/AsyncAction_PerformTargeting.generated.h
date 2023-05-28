// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/AsyncAction_PerformTargeting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncAction_PerformTargeting;
class UTargetingPreset;
struct FTargetingRequestHandle;
#ifdef TARGETINGSYSTEM_AsyncAction_PerformTargeting_generated_h
#error "AsyncAction_PerformTargeting.generated.h already included, missing '#pragma once' in AsyncAction_PerformTargeting.h"
#endif
#define TARGETINGSYSTEM_AsyncAction_PerformTargeting_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_15_DELEGATE \
TARGETINGSYSTEM_API void FPerformTargetingReady_DelegateWrapper(const FMulticastScriptDelegate& PerformTargetingReady, FTargetingRequestHandle TargetingHandle);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPerformFilteringRequest); \
	DECLARE_FUNCTION(execPerformTargetingRequest);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPerformFilteringRequest); \
	DECLARE_FUNCTION(execPerformTargetingRequest);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_PerformTargeting(); \
	friend struct Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_PerformTargeting, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_PerformTargeting)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_PerformTargeting(); \
	friend struct Z_Construct_UClass_UAsyncAction_PerformTargeting_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_PerformTargeting, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_PerformTargeting)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PerformTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PerformTargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PerformTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PerformTargeting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_PerformTargeting(UAsyncAction_PerformTargeting&&); \
	NO_API UAsyncAction_PerformTargeting(const UAsyncAction_PerformTargeting&); \
public: \
	NO_API virtual ~UAsyncAction_PerformTargeting();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PerformTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncAction_PerformTargeting(UAsyncAction_PerformTargeting&&); \
	NO_API UAsyncAction_PerformTargeting(const UAsyncAction_PerformTargeting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PerformTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PerformTargeting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PerformTargeting) \
	NO_API virtual ~UAsyncAction_PerformTargeting();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_21_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncAction_PerformTargeting."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UAsyncAction_PerformTargeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Async_AsyncAction_PerformTargeting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
