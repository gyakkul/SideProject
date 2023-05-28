// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JsonBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFilePath;
struct FJsonObjectWrapper;
#ifdef JSONBLUEPRINTUTILITIES_JsonBlueprintFunctionLibrary_generated_h
#error "JsonBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in JsonBlueprintFunctionLibrary.h"
#endif
#define JSONBLUEPRINTUTILITIES_JsonBlueprintFunctionLibrary_generated_h

#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_SPARSE_DATA
#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execToFile); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execFromString);


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFieldNames); \
	DECLARE_FUNCTION(execHasField); \
	DECLARE_FUNCTION(execToFile); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execFromFile); \
	DECLARE_FUNCTION(execFromString);


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ACCESSORS
#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsonBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UJsonBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonBlueprintUtilities"), NO_API) \
	DECLARE_SERIALIZER(UJsonBlueprintFunctionLibrary)


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUJsonBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UJsonBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UJsonBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JsonBlueprintUtilities"), NO_API) \
	DECLARE_SERIALIZER(UJsonBlueprintFunctionLibrary)


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonBlueprintFunctionLibrary(UJsonBlueprintFunctionLibrary&&); \
	NO_API UJsonBlueprintFunctionLibrary(const UJsonBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UJsonBlueprintFunctionLibrary();


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsonBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsonBlueprintFunctionLibrary(UJsonBlueprintFunctionLibrary&&); \
	NO_API UJsonBlueprintFunctionLibrary(const UJsonBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsonBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsonBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsonBlueprintFunctionLibrary) \
	NO_API virtual ~UJsonBlueprintFunctionLibrary();


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_SPARSE_DATA \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ACCESSORS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JSONBLUEPRINTUTILITIES_API UClass* StaticClass<class UJsonBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_JsonBlueprintUtilities_Source_JsonBlueprintUtilities_Public_JsonBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
