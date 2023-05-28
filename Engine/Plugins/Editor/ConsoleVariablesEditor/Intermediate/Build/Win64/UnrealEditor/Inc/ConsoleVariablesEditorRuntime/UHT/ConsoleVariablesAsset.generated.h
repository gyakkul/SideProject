// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsoleVariablesAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConsoleVariablesAsset;
class UObject;
struct FConsoleVariablesEditorAssetSaveData;
#ifdef CONSOLEVARIABLESEDITORRUNTIME_ConsoleVariablesAsset_generated_h
#error "ConsoleVariablesAsset.generated.h already included, missing '#pragma once' in ConsoleVariablesAsset.h"
#endif
#define CONSOLEVARIABLESEDITORRUNTIME_ConsoleVariablesAsset_generated_h

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData_Statics; \
	CONSOLEVARIABLESEDITORRUNTIME_API static class UScriptStruct* StaticStruct();


template<> CONSOLEVARIABLESEDITORRUNTIME_API UScriptStruct* StaticStruct<struct FConsoleVariablesEditorAssetSaveData>();

#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execAddOrSetConsoleObjectSavedData); \
	DECLARE_FUNCTION(execFindSavedDataByCommandString); \
	DECLARE_FUNCTION(execGetSavedCommandsCount); \
	DECLARE_FUNCTION(execReplaceSavedCommands); \
	DECLARE_FUNCTION(execExecuteSavedCommands); \
	DECLARE_FUNCTION(execGetSavedCommandsAsCommaSeparatedString); \
	DECLARE_FUNCTION(execGetSavedCommandsAsStringArray); \
	DECLARE_FUNCTION(execGetSavedCommands); \
	DECLARE_FUNCTION(execGetVariableCollectionDescription); \
	DECLARE_FUNCTION(execSetVariableCollectionDescription);


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execRemoveConsoleVariable); \
	DECLARE_FUNCTION(execAddOrSetConsoleObjectSavedData); \
	DECLARE_FUNCTION(execFindSavedDataByCommandString); \
	DECLARE_FUNCTION(execGetSavedCommandsCount); \
	DECLARE_FUNCTION(execReplaceSavedCommands); \
	DECLARE_FUNCTION(execExecuteSavedCommands); \
	DECLARE_FUNCTION(execGetSavedCommandsAsCommaSeparatedString); \
	DECLARE_FUNCTION(execGetSavedCommandsAsStringArray); \
	DECLARE_FUNCTION(execGetSavedCommands); \
	DECLARE_FUNCTION(execGetVariableCollectionDescription); \
	DECLARE_FUNCTION(execSetVariableCollectionDescription);


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_ACCESSORS
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleVariablesAsset(); \
	friend struct Z_Construct_UClass_UConsoleVariablesAsset_Statics; \
public: \
	DECLARE_CLASS(UConsoleVariablesAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConsoleVariablesAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UConsoleVariablesAsset*>(this); }


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleVariablesAsset(); \
	friend struct Z_Construct_UClass_UConsoleVariablesAsset_Statics; \
public: \
	DECLARE_CLASS(UConsoleVariablesAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleVariablesEditorRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConsoleVariablesAsset) \
	virtual UObject* _getUObject() const override { return const_cast<UConsoleVariablesAsset*>(this); }


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleVariablesAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleVariablesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleVariablesAsset(UConsoleVariablesAsset&&); \
	NO_API UConsoleVariablesAsset(const UConsoleVariablesAsset&); \
public: \
	NO_API virtual ~UConsoleVariablesAsset();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleVariablesAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleVariablesAsset(UConsoleVariablesAsset&&); \
	NO_API UConsoleVariablesAsset(const UConsoleVariablesAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleVariablesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleVariablesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleVariablesAsset) \
	NO_API virtual ~UConsoleVariablesAsset();


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_34_PROLOG
#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_ACCESSORS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_INCLASS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_ACCESSORS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSOLEVARIABLESEDITORRUNTIME_API UClass* StaticClass<class UConsoleVariablesAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ConsoleVariablesEditor_Source_ConsoleVariablesEditorRuntime_Public_ConsoleVariablesAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
