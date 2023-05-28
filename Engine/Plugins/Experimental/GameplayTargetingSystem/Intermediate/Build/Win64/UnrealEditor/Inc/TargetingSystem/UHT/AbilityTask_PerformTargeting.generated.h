// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTasks/AbilityTask_PerformTargeting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_PerformTargeting;
class UGameplayAbility;
class UTargetingPreset;
struct FTargetingRequestHandle;
#ifdef TARGETINGSYSTEM_AbilityTask_PerformTargeting_generated_h
#error "AbilityTask_PerformTargeting.generated.h already included, missing '#pragma once' in AbilityTask_PerformTargeting.h"
#endif
#define TARGETINGSYSTEM_AbilityTask_PerformTargeting_generated_h

#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_13_DELEGATE \
TARGETINGSYSTEM_API void FTargetReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& TargetReadyDelegate, FTargetingRequestHandle TargetingRequestHandle);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPerformFilteringRequest); \
	DECLARE_FUNCTION(execPerformTargetingRequest);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPerformFilteringRequest); \
	DECLARE_FUNCTION(execPerformTargetingRequest);


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_PerformTargeting(); \
	friend struct Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PerformTargeting, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PerformTargeting)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_PerformTargeting(); \
	friend struct Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_PerformTargeting, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TargetingSystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_PerformTargeting)


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PerformTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PerformTargeting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PerformTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PerformTargeting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_PerformTargeting(UAbilityTask_PerformTargeting&&); \
	NO_API UAbilityTask_PerformTargeting(const UAbilityTask_PerformTargeting&); \
public: \
	NO_API virtual ~UAbilityTask_PerformTargeting();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_PerformTargeting(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_PerformTargeting(UAbilityTask_PerformTargeting&&); \
	NO_API UAbilityTask_PerformTargeting(const UAbilityTask_PerformTargeting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_PerformTargeting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_PerformTargeting); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_PerformTargeting) \
	NO_API virtual ~UAbilityTask_PerformTargeting();


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TARGETINGSYSTEM_API UClass* StaticClass<class UAbilityTask_PerformTargeting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
