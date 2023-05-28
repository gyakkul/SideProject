// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebAPIUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebAPIMessageResponse;
#ifdef WEBAPI_WebAPIUtilities_generated_h
#error "WebAPIUtilities.generated.h already included, missing '#pragma once' in WebAPIUtilities.h"
#endif
#define WEBAPI_WebAPIUtilities_generated_h

#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHostFromUrl); \
	DECLARE_FUNCTION(execGetResponseMessage);


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHostFromUrl); \
	DECLARE_FUNCTION(execGetResponseMessage);


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebAPIUtilities(); \
	friend struct Z_Construct_UClass_UWebAPIUtilities_Statics; \
public: \
	DECLARE_CLASS(UWebAPIUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPI"), NO_API) \
	DECLARE_SERIALIZER(UWebAPIUtilities)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWebAPIUtilities(); \
	friend struct Z_Construct_UClass_UWebAPIUtilities_Statics; \
public: \
	DECLARE_CLASS(UWebAPIUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/WebAPI"), NO_API) \
	DECLARE_SERIALIZER(UWebAPIUtilities)


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebAPIUtilities(UWebAPIUtilities&&); \
	NO_API UWebAPIUtilities(const UWebAPIUtilities&); \
public: \
	NO_API virtual ~UWebAPIUtilities();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebAPIUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebAPIUtilities(UWebAPIUtilities&&); \
	NO_API UWebAPIUtilities(const UWebAPIUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebAPIUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebAPIUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebAPIUtilities) \
	NO_API virtual ~UWebAPIUtilities();


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WEBAPI_API UClass* StaticClass<class UWebAPIUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
