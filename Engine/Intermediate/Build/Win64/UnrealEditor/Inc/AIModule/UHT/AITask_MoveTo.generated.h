// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tasks/AITask_MoveTo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class UAITask_MoveTo;
#ifdef AIMODULE_AITask_MoveTo_generated_h
#error "AITask_MoveTo.generated.h already included, missing '#pragma once' in AITask_MoveTo.h"
#endif
#define AIMODULE_AITask_MoveTo_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_14_DELEGATE \
AIMODULE_API void FMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompletedSignature, EPathFollowingResult::Type Result, AAIController* AIController);


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAIMoveTo);


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAIMoveTo);


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_MoveTo(); \
	friend struct Z_Construct_UClass_UAITask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UAITask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_MoveTo)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAITask_MoveTo(); \
	friend struct Z_Construct_UClass_UAITask_MoveTo_Statics; \
public: \
	DECLARE_CLASS(UAITask_MoveTo, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_MoveTo)


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask_MoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_MoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_MoveTo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_MoveTo(UAITask_MoveTo&&); \
	NO_API UAITask_MoveTo(const UAITask_MoveTo&); \
public: \
	NO_API virtual ~UAITask_MoveTo();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_MoveTo(UAITask_MoveTo&&); \
	NO_API UAITask_MoveTo(const UAITask_MoveTo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_MoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_MoveTo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_MoveTo) \
	NO_API virtual ~UAITask_MoveTo();


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_16_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAITask_MoveTo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
