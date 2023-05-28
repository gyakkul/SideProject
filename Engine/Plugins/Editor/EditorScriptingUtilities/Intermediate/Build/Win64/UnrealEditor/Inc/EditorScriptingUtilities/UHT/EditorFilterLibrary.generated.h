// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFilterLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EEditorScriptingFilterType : uint8;
enum class EEditorScriptingStringMatchType : uint8;
#ifdef EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h
#error "EditorFilterLibrary.generated.h already included, missing '#pragma once' in EditorFilterLibrary.h"
#endif
#define EDITORSCRIPTINGUTILITIES_EditorFilterLibrary_generated_h

#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBySelection); \
	DECLARE_FUNCTION(execByLevelName); \
	DECLARE_FUNCTION(execByLayer); \
	DECLARE_FUNCTION(execByActorTag); \
	DECLARE_FUNCTION(execByActorLabel); \
	DECLARE_FUNCTION(execByIDName); \
	DECLARE_FUNCTION(execByClass);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBySelection); \
	DECLARE_FUNCTION(execByLevelName); \
	DECLARE_FUNCTION(execByLayer); \
	DECLARE_FUNCTION(execByActorTag); \
	DECLARE_FUNCTION(execByActorLabel); \
	DECLARE_FUNCTION(execByIDName); \
	DECLARE_FUNCTION(execByClass);


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ACCESSORS
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFilterLibrary(); \
	friend struct Z_Construct_UClass_UEditorFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorFilterLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEditorFilterLibrary(); \
	friend struct Z_Construct_UClass_UEditorFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorScriptingUtilities"), NO_API) \
	DECLARE_SERIALIZER(UEditorFilterLibrary)


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFilterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFilterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFilterLibrary(UEditorFilterLibrary&&); \
	NO_API UEditorFilterLibrary(const UEditorFilterLibrary&); \
public: \
	NO_API virtual ~UEditorFilterLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorFilterLibrary(UEditorFilterLibrary&&); \
	NO_API UEditorFilterLibrary(const UEditorFilterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFilterLibrary) \
	NO_API virtual ~UEditorFilterLibrary();


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_29_PROLOG
#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ACCESSORS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<class UEditorFilterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorFilterLibrary_h


#define FOREACH_ENUM_EEDITORSCRIPTINGFILTERTYPE(op) \
	op(EEditorScriptingFilterType::Include) \
	op(EEditorScriptingFilterType::Exclude) 

enum class EEditorScriptingFilterType : uint8;
template<> struct TIsUEnumClass<EEditorScriptingFilterType> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EEditorScriptingFilterType>();

#define FOREACH_ENUM_EEDITORSCRIPTINGSTRINGMATCHTYPE(op) \
	op(EEditorScriptingStringMatchType::Contains) \
	op(EEditorScriptingStringMatchType::MatchesWildcard) \
	op(EEditorScriptingStringMatchType::ExactMatch) 

enum class EEditorScriptingStringMatchType : uint8;
template<> struct TIsUEnumClass<EEditorScriptingStringMatchType> { enum { Value = true }; };
template<> EDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EEditorScriptingStringMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
