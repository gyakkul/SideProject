// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorDialogLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FEditorDialogLibraryObjectDetailsViewOptions;
#ifdef EDITORSCRIPTINGUTILITIES_EditorDialogLibrary_generated_h
#error "EditorDialogLibrary.generated.h already included, missing '#pragma once' in EditorDialogLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorDialogLibrary_generated_h

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics; \
	EDITORSCRIPTINGUTILITIES_API static class UScriptStruct* StaticStruct();


template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<struct FEditorDialogLibraryObjectDetailsViewOptions>();

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowObjectsDetailsView); \
	DECLARE_FUNCTION(execShowObjectDetailsView); \
	DECLARE_FUNCTION(execShowSuppressableWarningDialog); \
	DECLARE_FUNCTION(execShowMessage);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowObjectsDetailsView); \
	DECLARE_FUNCTION(execShowObjectDetailsView); \
	DECLARE_FUNCTION(execShowSuppressableWarningDialog); \
	DECLARE_FUNCTION(execShowMessage);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_ACCESSORS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorDialogLibrary(); \
	friend struct Z_Construct_UClass_UEditorDialogLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorDialogLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorDialogLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUEditorDialogLibrary(); \
	friend struct Z_Construct_UClass_UEditorDialogLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorDialogLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorDialogLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDialogLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDialogLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDialogLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDialogLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorDialogLibrary(UEditorDialogLibrary&&); \
	NO_API UEditorDialogLibrary(const UEditorDialogLibrary&); \
public: \
	NO_API virtual ~UEditorDialogLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorDialogLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorDialogLibrary(UEditorDialogLibrary&&); \
	NO_API UEditorDialogLibrary(const UEditorDialogLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorDialogLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorDialogLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorDialogLibrary) \
	NO_API virtual ~UEditorDialogLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_37_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_INCLASS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorDialogLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
