// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptContextComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTPLUGIN_ScriptContextComponent_generated_h
#error "ScriptContextComponent.generated.h already included, missing '#pragma once' in ScriptContextComponent.h"
#endif
#define SCRIPTPLUGIN_ScriptContextComponent_generated_h

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_SPARSE_DATA
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallScriptFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_ACCESSORS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScriptContextComponent(); \
	friend struct Z_Construct_UClass_UScriptContextComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptContextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContextComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUScriptContextComponent(); \
	friend struct Z_Construct_UClass_UScriptContextComponent_Statics; \
public: \
	DECLARE_CLASS(UScriptContextComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UScriptContextComponent)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContextComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContextComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContextComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContextComponent(UScriptContextComponent&&); \
	NO_API UScriptContextComponent(const UScriptContextComponent&); \
public: \
	NO_API virtual ~UScriptContextComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScriptContextComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScriptContextComponent(UScriptContextComponent&&); \
	NO_API UScriptContextComponent(const UScriptContextComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScriptContextComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScriptContextComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScriptContextComponent) \
	NO_API virtual ~UScriptContextComponent();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_13_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptContextComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTPLUGIN_API UClass* StaticClass<class UScriptContextComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptContextComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
