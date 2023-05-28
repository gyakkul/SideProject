// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesEditorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleVariablesAsset;
#ifdef CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFunctionLibrary_generated_h
#error "ConsoleVariablesEditorFunctionLibrary.generated.h already included, missing '#pragma once' in ConsoleVariablesEditorFunctionLibrary.h"
#endif
#define CONSOLEVARIABLESEDITOR_ConsoleVariablesEditorFunctionLibrary_generated_h

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetConsoleVariableSourceByName); \
	DECLARE_FUNCTION(execGetConsoleVariableStringValue); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_String); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Int); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Bool); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Float); \
	DECLARE_FUNCTION(execGetListOfCommandsFromPreset); \
	DECLARE_FUNCTION(execRemoveCommandFromCurrentPreset); \
	DECLARE_FUNCTION(execAddValidatedCommandToCurrentPreset); \
	DECLARE_FUNCTION(execCopyCurrentListToAsset); \
	DECLARE_FUNCTION(execLoadPresetIntoConsoleVariablesEditor); \
	DECLARE_FUNCTION(execGetCurrentlyLoadedPreset);


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetEnableMultiUserCVarSync); \
	DECLARE_FUNCTION(execGetConsoleVariableSourceByName); \
	DECLARE_FUNCTION(execGetConsoleVariableStringValue); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_String); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Int); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Bool); \
	DECLARE_FUNCTION(execSetConsoleVariableByName_Float); \
	DECLARE_FUNCTION(execGetListOfCommandsFromPreset); \
	DECLARE_FUNCTION(execRemoveCommandFromCurrentPreset); \
	DECLARE_FUNCTION(execAddValidatedCommandToCurrentPreset); \
	DECLARE_FUNCTION(execCopyCurrentListToAsset); \
	DECLARE_FUNCTION(execLoadPresetIntoConsoleVariablesEditor); \
	DECLARE_FUNCTION(execGetCurrentlyLoadedPreset);


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UConsoleVariablesEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), NO_API) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorFunctionLibrary)


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleVariablesEditorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UConsoleVariablesEditorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UConsoleVariablesEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditor"), NO_API) \
	DECLARE_SERIALIZER(UConsoleVariablesEditorFunctionLibrary)


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleVariablesEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesEditorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleVariablesEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleVariablesEditorFunctionLibrary(UConsoleVariablesEditorFunctionLibrary&&); \
	NO_API UConsoleVariablesEditorFunctionLibrary(const UConsoleVariablesEditorFunctionLibrary&); \
public: \
	NO_API virtual ~UConsoleVariablesEditorFunctionLibrary();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleVariablesEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleVariablesEditorFunctionLibrary(UConsoleVariablesEditorFunctionLibrary&&); \
	NO_API UConsoleVariablesEditorFunctionLibrary(const UConsoleVariablesEditorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleVariablesEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesEditorFunctionLibrary) \
	NO_API virtual ~UConsoleVariablesEditorFunctionLibrary();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSOLEVARIABLESEDITOR_API UClass* StaticClass<class UConsoleVariablesEditorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditor_Public_ConsoleVariablesEditorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
