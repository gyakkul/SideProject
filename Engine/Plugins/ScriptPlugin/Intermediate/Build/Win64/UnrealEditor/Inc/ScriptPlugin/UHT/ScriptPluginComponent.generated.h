// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptPluginComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTPLUGIN_ScriptPluginComponent_generated_h
#error "ScriptPluginComponent.generated.h already included, missing '#pragma once' in ScriptPluginComponent.h"
#endif
#define SCRIPTPLUGIN_ScriptPluginComponent_generated_h

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_SPARSE_DATA
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_ACCESSORS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptPluginComponent(); \
	friend struct Z_Construct_UClass_UScriptPluginComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptPluginComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptPluginComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUScriptPluginComponent(); \
	friend struct Z_Construct_UClass_UScriptPluginComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptPluginComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptPluginComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptPluginComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptPluginComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptPluginComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptPluginComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptPluginComponent(UScriptPluginComponent&&); \
	NO_API UScriptPluginComponent(const UScriptPluginComponent&); \
public: \
	NO_API virtual ~UScriptPluginComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptPluginComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptPluginComponent(UScriptPluginComponent&&); \
	NO_API UScriptPluginComponent(const UScriptPluginComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptPluginComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptPluginComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptPluginComponent) \
	NO_API virtual ~UScriptPluginComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_14_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptPluginComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTPLUGIN_API UClass* StaticClass<class UScriptPluginComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptPluginComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
