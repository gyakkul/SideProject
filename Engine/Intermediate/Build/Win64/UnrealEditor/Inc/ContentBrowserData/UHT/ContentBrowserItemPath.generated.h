// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserItemPath.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EContentBrowserPathType : uint8;
struct FContentBrowserItemPath;
#ifdef CONTENTBROWSERDATA_ContentBrowserItemPath_generated_h
#error "ContentBrowserItemPath.generated.h already included, missing '#pragma once' in ContentBrowserItemPath.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserItemPath_generated_h

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserItemPath_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserItemPath>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_SPARSE_DATA
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreakContentBrowserItemPath); \
	DECLARE_FUNCTION(execMakeContentBrowserItemPath); \
	DECLARE_FUNCTION(execGetInternalPath); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execSetPath);


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreakContentBrowserItemPath); \
	DECLARE_FUNCTION(execMakeContentBrowserItemPath); \
	DECLARE_FUNCTION(execGetInternalPath); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execSetPath);


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_ACCESSORS
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserItemPathExtensions(); \
	friend struct Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserItemPathExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserItemPathExtensions)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_INCLASS \
private: \
	static void StaticRegisterNativesUContentBrowserItemPathExtensions(); \
	friend struct Z_Construct_UClass_UContentBrowserItemPathExtensions_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserItemPathExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserItemPathExtensions)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserItemPathExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemPathExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserItemPathExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemPathExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserItemPathExtensions(UContentBrowserItemPathExtensions&&); \
	NO_API UContentBrowserItemPathExtensions(const UContentBrowserItemPathExtensions&); \
public: \
	NO_API virtual ~UContentBrowserItemPathExtensions();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserItemPathExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserItemPathExtensions(UContentBrowserItemPathExtensions&&); \
	NO_API UContentBrowserItemPathExtensions(const UContentBrowserItemPathExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserItemPathExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemPathExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemPathExtensions) \
	NO_API virtual ~UContentBrowserItemPathExtensions();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_94_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_SPARSE_DATA \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_ACCESSORS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_INCLASS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_SPARSE_DATA \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_ACCESSORS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h_97_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTENTBROWSERDATA_API UClass* StaticClass<class UContentBrowserItemPathExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItemPath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
