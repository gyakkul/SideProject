// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VariantSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelVariantSets;
class UObject;
class UTexture2D;
class UVariant;
#ifdef VARIANTMANAGERCONTENT_VariantSet_generated_h
#error "VariantSet.generated.h already included, missing '#pragma once' in VariantSet.h"
#endif
#define VARIANTMANAGERCONTENT_VariantSet_generated_h

#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execSetThumbnailFromEditorViewport); \
	DECLARE_FUNCTION(execSetThumbnailFromCamera); \
	DECLARE_FUNCTION(execSetThumbnailFromFile); \
	DECLARE_FUNCTION(execSetThumbnailFromTexture); \
	DECLARE_FUNCTION(execGetVariantByName); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetNumVariants); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetParent);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetThumbnail); \
	DECLARE_FUNCTION(execSetThumbnailFromEditorViewport); \
	DECLARE_FUNCTION(execSetThumbnailFromCamera); \
	DECLARE_FUNCTION(execSetThumbnailFromFile); \
	DECLARE_FUNCTION(execSetThumbnailFromTexture); \
	DECLARE_FUNCTION(execGetVariantByName); \
	DECLARE_FUNCTION(execGetVariant); \
	DECLARE_FUNCTION(execGetNumVariants); \
	DECLARE_FUNCTION(execGetDisplayText); \
	DECLARE_FUNCTION(execSetDisplayText); \
	DECLARE_FUNCTION(execGetParent);


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ACCESSORS
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVariantSet, NO_API)


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVariantSet(); \
	friend struct Z_Construct_UClass_UVariantSet_Statics; \
public: \
	DECLARE_CLASS(UVariantSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariantSet) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUVariantSet(); \
	friend struct Z_Construct_UClass_UVariantSet_Statics; \
public: \
	DECLARE_CLASS(UVariantSet, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VariantManagerContent"), NO_API) \
	DECLARE_SERIALIZER(UVariantSet) \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantSet(UVariantSet&&); \
	NO_API UVariantSet(const UVariantSet&); \
public: \
	NO_API virtual ~UVariantSet();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVariantSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVariantSet(UVariantSet&&); \
	NO_API UVariantSet(const UVariantSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVariantSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVariantSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVariantSet) \
	NO_API virtual ~UVariantSet();


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_12_PROLOG
#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_INCLASS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ACCESSORS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VariantSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<class UVariantSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
