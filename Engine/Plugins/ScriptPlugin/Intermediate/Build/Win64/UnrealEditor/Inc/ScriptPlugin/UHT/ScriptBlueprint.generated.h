// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTPLUGIN_ScriptBlueprint_generated_h
#error "ScriptBlueprint.generated.h already included, missing '#pragma once' in ScriptBlueprint.h"
#endif
#define SCRIPTPLUGIN_ScriptBlueprint_generated_h

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_SPARSE_DATA
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_RPC_WRAPPERS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_ACCESSORS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptBlueprint(); \
	friend struct Z_Construct_UClass_UScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(UScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptBlueprint)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUScriptBlueprint(); \
	friend struct Z_Construct_UClass_UScriptBlueprint_Statics; \
public: \
	DECLARE_CLASS(UScriptBlueprint, UBlueprint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptBlueprint)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptBlueprint(UScriptBlueprint&&); \
	NO_API UScriptBlueprint(const UScriptBlueprint&); \
public: \
	NO_API virtual ~UScriptBlueprint();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptBlueprint(UScriptBlueprint&&); \
	NO_API UScriptBlueprint(const UScriptBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptBlueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptBlueprint) \
	NO_API virtual ~UScriptBlueprint();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_12_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptBlueprint."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTPLUGIN_API UClass* StaticClass<class UScriptBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
