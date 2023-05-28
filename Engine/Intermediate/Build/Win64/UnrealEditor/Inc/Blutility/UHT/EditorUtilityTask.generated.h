// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityTask;
#ifdef BLUTILITY_EditorUtilityTask_generated_h
#error "EditorUtilityTask.generated.h already included, missing '#pragma once' in EditorUtilityTask.h"
#endif
#define BLUTILITY_EditorUtilityTask_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_22_DELEGATE \
BLUTILITY_API void FOnEditorUtilityTaskDynamicDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityTaskDynamicDelegate, UEditorUtilityTask* Task);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWasCancelRequested); \
	DECLARE_FUNCTION(execSetTaskNotificationText); \
	DECLARE_FUNCTION(execFinishExecutingTask); \
	DECLARE_FUNCTION(execRun);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWasCancelRequested); \
	DECLARE_FUNCTION(execSetTaskNotificationText); \
	DECLARE_FUNCTION(execFinishExecutingTask); \
	DECLARE_FUNCTION(execRun);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityTask(); \
	friend struct Z_Construct_UClass_UEditorUtilityTask_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityTask)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityTask(); \
	friend struct Z_Construct_UClass_UEditorUtilityTask_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityTask)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityTask(UEditorUtilityTask&&); \
	NO_API UEditorUtilityTask(const UEditorUtilityTask&); \
public: \
	NO_API virtual ~UEditorUtilityTask();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityTask(UEditorUtilityTask&&); \
	NO_API UEditorUtilityTask(const UEditorUtilityTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorUtilityTask) \
	NO_API virtual ~UEditorUtilityTask();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_28_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
