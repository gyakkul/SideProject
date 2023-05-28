// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h
#error "BlueprintEditorSettings.generated.h already included, missing '#pragma once' in BlueprintEditorSettings.h"
#endif
#define BLUEPRINTGRAPH_BlueprintEditorSettings_generated_h

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBlueprintSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<struct FPerBlueprintSettings>();

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdditionalBlueprintCategory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BLUEPRINTGRAPH_API UScriptStruct* StaticStruct<struct FAdditionalBlueprintCategory>();

#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_SPARSE_DATA
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_RPC_WRAPPERS
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_ACCESSORS
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorSettings(UBlueprintEditorSettings&&); \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings&); \
public: \
	NO_API virtual ~UBlueprintEditorSettings();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorSettings(UBlueprintEditorSettings&&); \
	NO_API UBlueprintEditorSettings(const UBlueprintEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorSettings) \
	NO_API virtual ~UBlueprintEditorSettings();


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_86_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_RPC_WRAPPERS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_SPARSE_DATA \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_ACCESSORS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h_89_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTGRAPH_API UClass* StaticClass<class UBlueprintEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintEditorSettings_h


#define FOREACH_ENUM_ESAVEONCOMPILE(op) \
	op(SoC_Never) \
	op(SoC_SuccessOnly) \
	op(SoC_Always) 

enum ESaveOnCompile : int;
template<> BLUEPRINTGRAPH_API UEnum* StaticEnum<ESaveOnCompile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
