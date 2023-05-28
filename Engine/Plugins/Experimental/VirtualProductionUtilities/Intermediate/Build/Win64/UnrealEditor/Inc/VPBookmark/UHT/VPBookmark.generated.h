// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VPBookmark.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VPBOOKMARK_VPBookmark_generated_h
#error "VPBookmark.generated.h already included, missing '#pragma once' in VPBookmark.h"
#endif
#define VPBOOKMARK_VPBookmark_generated_h

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VPBOOKMARK_API UScriptStruct* StaticStruct<struct FVPBookmarkViewportData>();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBookmarkBaseJumpToSettings Super;


template<> VPBOOKMARK_API UScriptStruct* StaticStruct<struct FVPBookmarkJumpToSettings>();

#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetAssociatedBookmarkActor); \
	DECLARE_FUNCTION(execGetBookmarkIndex); \
	DECLARE_FUNCTION(execIsActive);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetAssociatedBookmarkActor); \
	DECLARE_FUNCTION(execGetBookmarkIndex); \
	DECLARE_FUNCTION(execIsActive);


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVPBookmark(); \
	friend struct Z_Construct_UClass_UVPBookmark_Statics; \
public: \
	DECLARE_CLASS(UVPBookmark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmark)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUVPBookmark(); \
	friend struct Z_Construct_UClass_UVPBookmark_Statics; \
public: \
	DECLARE_CLASS(UVPBookmark, UBookmarkBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VPBookmark"), NO_API) \
	DECLARE_SERIALIZER(UVPBookmark)


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmark) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmark); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmark); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmark(UVPBookmark&&); \
	NO_API UVPBookmark(const UVPBookmark&); \
public: \
	NO_API virtual ~UVPBookmark();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVPBookmark(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVPBookmark(UVPBookmark&&); \
	NO_API UVPBookmark(const UVPBookmark&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVPBookmark); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVPBookmark); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVPBookmark) \
	NO_API virtual ~UVPBookmark();


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_44_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPBOOKMARK_API UClass* StaticClass<class UVPBookmark>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
