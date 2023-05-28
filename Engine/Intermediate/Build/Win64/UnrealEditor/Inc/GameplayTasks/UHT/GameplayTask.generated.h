// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTASKS_GameplayTask_generated_h
#error "GameplayTask.generated.h already included, missing '#pragma once' in GameplayTask.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_generated_h

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayResourceSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTASKS_API UScriptStruct* StaticStruct<struct FGameplayResourceSet>();

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_151_DELEGATE \
static void FGenericGameplayTaskDelegate_DelegateWrapper(const FMulticastScriptDelegate& GenericGameplayTaskDelegate);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execReadyForActivation);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndTask); \
	DECLARE_FUNCTION(execReadyForActivation);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend struct Z_Construct_UClass_UGameplayTask_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask*>(this); }


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask(); \
	friend struct Z_Construct_UClass_UGameplayTask_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTask) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTask*>(this); }


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask(UGameplayTask&&); \
	NO_API UGameplayTask(const UGameplayTask&); \
public: \
	NO_API virtual ~UGameplayTask();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTask(UGameplayTask&&); \
	NO_API UGameplayTask(const UGameplayTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask) \
	NO_API virtual ~UGameplayTask();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_144_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTask_h


#define FOREACH_ENUM_EGAMEPLAYTASKSTATE(op) \
	op(EGameplayTaskState::Uninitialized) \
	op(EGameplayTaskState::AwaitingActivation) \
	op(EGameplayTaskState::Paused) \
	op(EGameplayTaskState::Active) \
	op(EGameplayTaskState::Finished) 

enum class EGameplayTaskState : uint8;
template<> struct TIsUEnumClass<EGameplayTaskState> { enum { Value = true }; };
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskState>();

#define FOREACH_ENUM_ETASKRESOURCEOVERLAPPOLICY(op) \
	op(ETaskResourceOverlapPolicy::StartOnTop) \
	op(ETaskResourceOverlapPolicy::StartAtEnd) \
	op(ETaskResourceOverlapPolicy::RequestCancelAndStartOnTop) \
	op(ETaskResourceOverlapPolicy::RequestCancelAndStartAtEnd) 

enum class ETaskResourceOverlapPolicy : uint8;
template<> struct TIsUEnumClass<ETaskResourceOverlapPolicy> { enum { Value = true }; };
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<ETaskResourceOverlapPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
