// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTPLUGIN_ScriptContext_generated_h
#error "ScriptContext.generated.h already included, missing '#pragma once' in ScriptContext.h"
#endif
#define SCRIPTPLUGIN_ScriptContext_generated_h

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_SPARSE_DATA
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_ACCESSORS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptContext(); \
	friend struct Z_Construct_UClass_UScriptContext_Statics; \
public: \
	DECLARE_CLASS(UScriptContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContext)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScriptContext(); \
	friend struct Z_Construct_UClass_UScriptContext_Statics; \
public: \
	DECLARE_CLASS(UScriptContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContext)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContext(UScriptContext&&); \
	NO_API UScriptContext(const UScriptContext&); \
public: \
	NO_API virtual ~UScriptContext();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContext(UScriptContext&&); \
	NO_API UScriptContext(const UScriptContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContext) \
	NO_API virtual ~UScriptContext();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_14_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptContext."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTPLUGIN_API UClass* StaticClass<class UScriptContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
