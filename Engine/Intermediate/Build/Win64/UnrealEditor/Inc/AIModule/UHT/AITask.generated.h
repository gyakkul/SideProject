// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AITask_generated_h
#error "AITask.generated.h already included, missing '#pragma once' in AITask.h"
#endif
#define AIMODULE_AITask_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask(); \
	friend struct Z_Construct_UClass_UAITask_Statics; \
public: \
	DECLARE_CLASS(UAITask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUAITask(); \
	friend struct Z_Construct_UClass_UAITask_Statics; \
public: \
	DECLARE_CLASS(UAITask, UGameplayTask, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask(UAITask&&); \
	NO_API UAITask(const UAITask&); \
public: \
	NO_API virtual ~UAITask();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask(UAITask&&); \
	NO_API UAITask(const UAITask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask) \
	NO_API virtual ~UAITask();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_23_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h


#define FOREACH_ENUM_EAITASKPRIORITY(op) \
	op(EAITaskPriority::Lowest) \
	op(EAITaskPriority::Low) \
	op(EAITaskPriority::AutonomousAI) \
	op(EAITaskPriority::High) \
	op(EAITaskPriority::Ultimate) 

enum class EAITaskPriority : uint8;
template<> struct TIsUEnumClass<EAITaskPriority> { enum { Value = true }; };
template<> AIMODULE_API UEnum* StaticEnum<EAITaskPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
