// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UEdGraph;
class UObject;
#ifdef BLUEPRINTEDITORLIBRARY_BlueprintEditorLibrary_generated_h
#error "BlueprintEditorLibrary.generated.h already included, missing '#pragma once' in BlueprintEditorLibrary.h"
#endif
#define BLUEPRINTEDITORLIBRARY_BlueprintEditorLibrary_generated_h

#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_SPARSE_DATA
#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBlueprintVariableInstanceEditable); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeToCinematics); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeOnSpawn); \
	DECLARE_FUNCTION(execGeneratedClass); \
	DECLARE_FUNCTION(execRemoveUnusedVariables); \
	DECLARE_FUNCTION(execReparentBlueprint); \
	DECLARE_FUNCTION(execRefreshAllOpenBlueprintEditors); \
	DECLARE_FUNCTION(execRefreshOpenEditorsForBlueprint); \
	DECLARE_FUNCTION(execGetBlueprintAsset); \
	DECLARE_FUNCTION(execRenameGraph); \
	DECLARE_FUNCTION(execRemoveGraph); \
	DECLARE_FUNCTION(execRemoveUnusedNodes); \
	DECLARE_FUNCTION(execRemoveFunctionGraph); \
	DECLARE_FUNCTION(execAddFunctionGraph); \
	DECLARE_FUNCTION(execCompileBlueprint); \
	DECLARE_FUNCTION(execUpgradeOperatorNodes); \
	DECLARE_FUNCTION(execFindGraph); \
	DECLARE_FUNCTION(execFindEventGraph); \
	DECLARE_FUNCTION(execReplaceVariableReferences);


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBlueprintVariableInstanceEditable); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeToCinematics); \
	DECLARE_FUNCTION(execSetBlueprintVariableExposeOnSpawn); \
	DECLARE_FUNCTION(execGeneratedClass); \
	DECLARE_FUNCTION(execRemoveUnusedVariables); \
	DECLARE_FUNCTION(execReparentBlueprint); \
	DECLARE_FUNCTION(execRefreshAllOpenBlueprintEditors); \
	DECLARE_FUNCTION(execRefreshOpenEditorsForBlueprint); \
	DECLARE_FUNCTION(execGetBlueprintAsset); \
	DECLARE_FUNCTION(execRenameGraph); \
	DECLARE_FUNCTION(execRemoveGraph); \
	DECLARE_FUNCTION(execRemoveUnusedNodes); \
	DECLARE_FUNCTION(execRemoveFunctionGraph); \
	DECLARE_FUNCTION(execAddFunctionGraph); \
	DECLARE_FUNCTION(execCompileBlueprint); \
	DECLARE_FUNCTION(execUpgradeOperatorNodes); \
	DECLARE_FUNCTION(execFindGraph); \
	DECLARE_FUNCTION(execFindEventGraph); \
	DECLARE_FUNCTION(execReplaceVariableReferences);


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_ACCESSORS
#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintEditorLibrary"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorLibrary)


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintEditorLibrary"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorLibrary)


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorLibrary(UBlueprintEditorLibrary&&); \
	NO_API UBlueprintEditorLibrary(const UBlueprintEditorLibrary&); \
public: \
	NO_API virtual ~UBlueprintEditorLibrary();


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorLibrary(UBlueprintEditorLibrary&&); \
	NO_API UBlueprintEditorLibrary(const UBlueprintEditorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorLibrary) \
	NO_API virtual ~UBlueprintEditorLibrary();


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_28_PROLOG
#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_INCLASS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintEditorLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTEDITORLIBRARY_API UClass* StaticClass<class UBlueprintEditorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintEditorLibrary_Public_BlueprintEditorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
