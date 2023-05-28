// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UVPBookmark;
#ifdef VPBOOKMARK_VPBookmarkBlueprintLibrary_generated_h
#error "VPBookmarkBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBookmarkBlueprintLibrary.h"
#endif
#define VPBOOKMARK_VPBookmarkBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateVPBookmarkName); \
	DECLARE_FUNCTION(execGetAllVPBookmark); \
	DECLARE_FUNCTION(execGetAllVPBookmarkActors); \
	DECLARE_FUNCTION(execFindVPBookmark);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateVPBookmarkName); \
	DECLARE_FUNCTION(execGetAllVPBookmark); \
	DECLARE_FUNCTION(execGetAllVPBookmarkActors); \
	DECLARE_FUNCTION(execFindVPBookmark);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmarkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBookmarkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmarkBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVPBookmarkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBookmarkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmarkBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkBlueprintLibrary(UVPBookmarkBlueprintLibrary&&); \
	NO_API UVPBookmarkBlueprintLibrary(const UVPBookmarkBlueprintLibrary&); \
public: \
	NO_API virtual ~UVPBookmarkBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkBlueprintLibrary(UVPBookmarkBlueprintLibrary&&); \
	NO_API UVPBookmarkBlueprintLibrary(const UVPBookmarkBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkBlueprintLibrary) \
	NO_API virtual ~UVPBookmarkBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPBOOKMARK_API UClass* StaticClass<class UVPBookmarkBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
