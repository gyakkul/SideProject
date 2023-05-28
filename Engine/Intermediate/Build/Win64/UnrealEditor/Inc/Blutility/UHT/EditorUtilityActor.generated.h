// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputComponent;
#ifdef BLUTILITY_EditorUtilityActor_generated_h
#error "EditorUtilityActor.generated.h already included, missing '#pragma once' in EditorUtilityActor.h"
#endif
#define BLUTILITY_EditorUtilityActor_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetReceivesEditorInput); \
	DECLARE_FUNCTION(execSetReceivesEditorInput); \
	DECLARE_FUNCTION(execGetInputComponent);


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEditorUtilityActor(); \
	friend struct Z_Construct_UClass_AEditorUtilityActor_Statics; \
public: \
	DECLARE_CLASS(AEditorUtilityActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(AEditorUtilityActor)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAEditorUtilityActor(); \
	friend struct Z_Construct_UClass_AEditorUtilityActor_Statics; \
public: \
	DECLARE_CLASS(AEditorUtilityActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(AEditorUtilityActor)


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEditorUtilityActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorUtilityActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEditorUtilityActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorUtilityActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEditorUtilityActor(AEditorUtilityActor&&); \
	NO_API AEditorUtilityActor(const AEditorUtilityActor&); \
public: \
	NO_API virtual ~AEditorUtilityActor();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEditorUtilityActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEditorUtilityActor(AEditorUtilityActor&&); \
	NO_API AEditorUtilityActor(const AEditorUtilityActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEditorUtilityActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEditorUtilityActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEditorUtilityActor) \
	NO_API virtual ~AEditorUtilityActor();


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_25_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class AEditorUtilityActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
