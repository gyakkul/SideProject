// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FContentBrowserItem;
#ifdef CONTENTBROWSERDATA_ContentBrowserItem_generated_h
#error "ContentBrowserItem.generated.h already included, missing '#pragma once' in ContentBrowserItem.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserItem_generated_h

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserItem>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_SPARSE_DATA
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execIsFile); \
	DECLARE_FUNCTION(execIsFolder);


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetVirtualPath); \
	DECLARE_FUNCTION(execIsFile); \
	DECLARE_FUNCTION(execIsFolder);


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_ACCESSORS
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentBrowserItemLibrary(); \
	friend struct Z_Construct_UClass_UContentBrowserItemLibrary_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserItemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserItemLibrary)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_INCLASS \
private: \
	static void StaticRegisterNativesUContentBrowserItemLibrary(); \
	friend struct Z_Construct_UClass_UContentBrowserItemLibrary_Statics; \
public: \
	DECLARE_CLASS(UContentBrowserItemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContentBrowserData"), NO_API) \
	DECLARE_SERIALIZER(UContentBrowserItemLibrary)


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserItemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserItemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserItemLibrary(UContentBrowserItemLibrary&&); \
	NO_API UContentBrowserItemLibrary(const UContentBrowserItemLibrary&); \
public: \
	NO_API virtual ~UContentBrowserItemLibrary();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentBrowserItemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentBrowserItemLibrary(UContentBrowserItemLibrary&&); \
	NO_API UContentBrowserItemLibrary(const UContentBrowserItemLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentBrowserItemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentBrowserItemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentBrowserItemLibrary) \
	NO_API virtual ~UContentBrowserItemLibrary();


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_431_PROLOG
#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_SPARSE_DATA \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_ACCESSORS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_INCLASS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_SPARSE_DATA \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_ACCESSORS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h_434_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTENTBROWSERDATA_API UClass* StaticClass<class UContentBrowserItemLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
