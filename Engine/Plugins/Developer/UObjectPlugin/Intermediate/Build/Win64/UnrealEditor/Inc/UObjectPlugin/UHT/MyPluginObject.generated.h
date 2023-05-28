// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPluginObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UOBJECTPLUGIN_MyPluginObject_generated_h
#error "MyPluginObject.generated.h already included, missing '#pragma once' in MyPluginObject.h"
#endif
#define UOBJECTPLUGIN_MyPluginObject_generated_h

#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMyPluginStruct_Statics; \
	UOBJECTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> UOBJECTPLUGIN_API UScriptStruct* StaticStruct<struct FMyPluginStruct>();

#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA
#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS
#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ACCESSORS
#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPluginObject(); \
	friend struct Z_Construct_UClass_UMyPluginObject_Statics; \
public: \
	DECLARE_CLASS(UMyPluginObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginObject)


#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUMyPluginObject(); \
	friend struct Z_Construct_UClass_UMyPluginObject_Statics; \
public: \
	DECLARE_CLASS(UMyPluginObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UObjectPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMyPluginObject)


#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginObject(UMyPluginObject&&); \
	NO_API UMyPluginObject(const UMyPluginObject&); \
public: \
	NO_API virtual ~UMyPluginObject();


#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPluginObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPluginObject(UMyPluginObject&&); \
	NO_API UMyPluginObject(const UMyPluginObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPluginObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPluginObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPluginObject) \
	NO_API virtual ~UMyPluginObject();


#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_27_PROLOG
#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ACCESSORS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_SPARSE_DATA \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ACCESSORS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MyPluginObject."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UOBJECTPLUGIN_API UClass* StaticClass<class UMyPluginObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
