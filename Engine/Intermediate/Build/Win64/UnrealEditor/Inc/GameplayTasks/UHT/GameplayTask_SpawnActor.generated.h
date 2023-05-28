// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/GameplayTask_SpawnActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IGameplayTaskOwnerInterface;
class UGameplayTask_SpawnActor;
class UObject;
#ifdef GAMEPLAYTASKS_GameplayTask_SpawnActor_generated_h
#error "GameplayTask_SpawnActor.generated.h already included, missing '#pragma once' in GameplayTask_SpawnActor.h"
#endif
#define GAMEPLAYTASKS_GameplayTask_SpawnActor_generated_h

#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_13_DELEGATE \
GAMEPLAYTASKS_API void FGameplayTaskSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayTaskSpawnActorDelegate, AActor* SpawnedActor);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTask_SpawnActor(); \
	friend struct Z_Construct_UClass_UGameplayTask_SpawnActor_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_SpawnActor, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_SpawnActor)


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTask_SpawnActor(); \
	friend struct Z_Construct_UClass_UGameplayTask_SpawnActor_Statics; \
public: \
	DECLARE_CLASS(UGameplayTask_SpawnActor, UGameplayTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), GAMEPLAYTASKS_API) \
	DECLARE_SERIALIZER(UGameplayTask_SpawnActor)


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_SpawnActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_SpawnActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_SpawnActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(UGameplayTask_SpawnActor&&); \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(const UGameplayTask_SpawnActor&); \
public: \
	GAMEPLAYTASKS_API virtual ~UGameplayTask_SpawnActor();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(UGameplayTask_SpawnActor&&); \
	GAMEPLAYTASKS_API UGameplayTask_SpawnActor(const UGameplayTask_SpawnActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTASKS_API, UGameplayTask_SpawnActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTask_SpawnActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTask_SpawnActor) \
	GAMEPLAYTASKS_API virtual ~UGameplayTask_SpawnActor();


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_28_PROLOG
#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_INCLASS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTask_SpawnActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
