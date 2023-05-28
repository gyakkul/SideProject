// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PythonScriptLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPythonCommandExecutionMode : uint8;
enum class EPythonFileExecutionScope : uint8;
struct FPythonLogOutputEntry;
#ifdef PYTHONSCRIPTPLUGIN_PythonScriptLibrary_generated_h
#error "PythonScriptLibrary.generated.h already included, missing '#pragma once' in PythonScriptLibrary.h"
#endif
#define PYTHONSCRIPTPLUGIN_PythonScriptLibrary_generated_h

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExecutePythonCommandEx); \
	DECLARE_FUNCTION(execExecutePythonCommand); \
	DECLARE_FUNCTION(execIsPythonAvailable);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExecutePythonCommandEx); \
	DECLARE_FUNCTION(execExecutePythonCommand); \
	DECLARE_FUNCTION(execIsPythonAvailable);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPythonScriptLibrary(); \
	friend struct Z_Construct_UClass_UPythonScriptLibrary_Statics; \
public: \
	DECLARE_CLASS(UPythonScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPythonScriptLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPythonScriptLibrary(); \
	friend struct Z_Construct_UClass_UPythonScriptLibrary_Statics; \
public: \
	DECLARE_CLASS(UPythonScriptLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPythonScriptLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonScriptLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScriptLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonScriptLibrary(UPythonScriptLibrary&&); \
	NO_API UPythonScriptLibrary(const UPythonScriptLibrary&); \
public: \
	NO_API virtual ~UPythonScriptLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPythonScriptLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPythonScriptLibrary(UPythonScriptLibrary&&); \
	NO_API UPythonScriptLibrary(const UPythonScriptLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPythonScriptLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPythonScriptLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPythonScriptLibrary) \
	NO_API virtual ~UPythonScriptLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPythonScriptLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PythonScriptLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
