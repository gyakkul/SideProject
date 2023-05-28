// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptTestActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTPLUGIN_ScriptTestActor_generated_h
#error "ScriptTestActor.generated.h already included, missing '#pragma once' in ScriptTestActor.h"
#endif
#define SCRIPTPLUGIN_ScriptTestActor_generated_h

#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_SPARSE_DATA
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestFunction);


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_ACCESSORS
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScriptTestActor(); \
	friend struct Z_Construct_UClass_AScriptTestActor_Statics; \
public: \
	DECLARE_CLASS(AScriptTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), SCRIPTPLUGIN_API) \
	DECLARE_SERIALIZER(AScriptTestActor)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAScriptTestActor(); \
	friend struct Z_Construct_UClass_AScriptTestActor_Statics; \
public: \
	DECLARE_CLASS(AScriptTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ScriptPlugin"), SCRIPTPLUGIN_API) \
	DECLARE_SERIALIZER(AScriptTestActor)


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTPLUGIN_API AScriptTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScriptTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTPLUGIN_API, AScriptTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCRIPTPLUGIN_API AScriptTestActor(AScriptTestActor&&); \
	SCRIPTPLUGIN_API AScriptTestActor(const AScriptTestActor&); \
public: \
	SCRIPTPLUGIN_API virtual ~AScriptTestActor();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCRIPTPLUGIN_API AScriptTestActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCRIPTPLUGIN_API AScriptTestActor(AScriptTestActor&&); \
	SCRIPTPLUGIN_API AScriptTestActor(const AScriptTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCRIPTPLUGIN_API, AScriptTestActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptTestActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScriptTestActor) \
	SCRIPTPLUGIN_API virtual ~AScriptTestActor();


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_10_PROLOG
#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_SPARSE_DATA \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_ACCESSORS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ScriptTestActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCRIPTPLUGIN_API UClass* StaticClass<class AScriptTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ScriptPlugin_Source_ScriptPlugin_Classes_ScriptTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
