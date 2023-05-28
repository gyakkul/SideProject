// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureCubeArray.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureCubeArray_generated_h
#error "TextureCubeArray.generated.h already included, missing '#pragma once' in TextureCubeArray.h"
#endif
#define ENGINE_TextureCubeArray_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCubeArray, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureCubeArray(); \
	friend struct Z_Construct_UClass_UTextureCubeArray_Statics; \
public: \
	DECLARE_CLASS(UTextureCubeArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureCubeArray) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUTextureCubeArray(); \
	friend struct Z_Construct_UClass_UTextureCubeArray_Statics; \
public: \
	DECLARE_CLASS(UTextureCubeArray, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureCubeArray) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCubeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCubeArray) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCubeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCubeArray); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureCubeArray(UTextureCubeArray&&); \
	ENGINE_API UTextureCubeArray(const UTextureCubeArray&); \
public: \
	ENGINE_API virtual ~UTextureCubeArray();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureCubeArray(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureCubeArray(UTextureCubeArray&&); \
	ENGINE_API UTextureCubeArray(const UTextureCubeArray&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureCubeArray); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureCubeArray); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureCubeArray) \
	ENGINE_API virtual ~UTextureCubeArray();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureCubeArray."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureCubeArray>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCubeArray_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
