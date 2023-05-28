// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmarkEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UVPBookmark;
struct FVPBookmarkCreationContext;
#ifdef VPBOOKMARKEDITOR_VPBookmarkEditorBlueprintLibrary_generated_h
#error "VPBookmarkEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in VPBookmarkEditorBlueprintLibrary.h"
#endif
#define VPBOOKMARKEDITOR_VPBookmarkEditorBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllActorsClassThamImplementsVPBookmarkInterface); \
	DECLARE_FUNCTION(execAddBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditorByIndex); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllActorsClassThamImplementsVPBookmarkInterface); \
	DECLARE_FUNCTION(execAddBookmarkAtCurrentLevelEditorPosition); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditorByIndex); \
	DECLARE_FUNCTION(execJumpToBookmarkInLevelEditor);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmarkEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBookmarkEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmarkEditor"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmarkEditorBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVPBookmarkEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UVPBookmarkEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UVPBookmarkEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmarkEditor"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmarkEditorBlueprintLibrary)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkEditorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkEditorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkEditorBlueprintLibrary(UVPBookmarkEditorBlueprintLibrary&&); \
	NO_API UVPBookmarkEditorBlueprintLibrary(const UVPBookmarkEditorBlueprintLibrary&); \
public: \
	NO_API virtual ~UVPBookmarkEditorBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmarkEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmarkEditorBlueprintLibrary(UVPBookmarkEditorBlueprintLibrary&&); \
	NO_API UVPBookmarkEditorBlueprintLibrary(const UVPBookmarkEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmarkEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmarkEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmarkEditorBlueprintLibrary) \
	NO_API virtual ~UVPBookmarkEditorBlueprintLibrary();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPBOOKMARKEDITOR_API UClass* StaticClass<class UVPBookmarkEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmarkEditor_Public_VPBookmarkEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
