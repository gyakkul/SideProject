// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Texture2D_generated_h
#error "Texture2D.generated.h already included, missing '#pragma once' in Texture2D.h"
#endif
#define ENGINE_Texture2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueprint_GetSizeY); \
	DECLARE_FUNCTION(execBlueprint_GetSizeX);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueprint_GetSizeY); \
	DECLARE_FUNCTION(execBlueprint_GetSizeX);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture2D, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexture2D(); \
	friend struct Z_Construct_UClass_UTexture2D_Statics; \
public: \
	DECLARE_CLASS(UTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUTexture2D(); \
	friend struct Z_Construct_UClass_UTexture2D_Statics; \
public: \
	DECLARE_CLASS(UTexture2D, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTexture2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2D(UTexture2D&&); \
	ENGINE_API UTexture2D(const UTexture2D&); \
public: \
	ENGINE_API virtual ~UTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTexture2D(UTexture2D&&); \
	ENGINE_API UTexture2D(const UTexture2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTexture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture2D) \
	ENGINE_API virtual ~UTexture2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_21_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Texture2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTexture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
