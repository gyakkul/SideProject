// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureRenderTarget2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureRenderTarget2D_generated_h
#error "TextureRenderTarget2D.generated.h already included, missing '#pragma once' in TextureRenderTarget2D.h"
#endif
#define ENGINE_TextureRenderTarget2D_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureRenderTarget2D, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget2D(); \
	friend struct Z_Construct_UClass_UTextureRenderTarget2D_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTarget2D, UTextureRenderTarget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUTextureRenderTarget2D(); \
	friend struct Z_Construct_UClass_UTextureRenderTarget2D_Statics; \
public: \
	DECLARE_CLASS(UTextureRenderTarget2D, UTextureRenderTarget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTextureRenderTarget2D) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureRenderTarget2D(UTextureRenderTarget2D&&); \
	ENGINE_API UTextureRenderTarget2D(const UTextureRenderTarget2D&); \
public: \
	ENGINE_API virtual ~UTextureRenderTarget2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTextureRenderTarget2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTextureRenderTarget2D(UTextureRenderTarget2D&&); \
	ENGINE_API UTextureRenderTarget2D(const UTextureRenderTarget2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTextureRenderTarget2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureRenderTarget2D); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureRenderTarget2D) \
	ENGINE_API virtual ~UTextureRenderTarget2D();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_76_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureRenderTarget2D."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureRenderTarget2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h


#define FOREACH_ENUM_ETEXTURERENDERTARGETFORMAT(op) \
	op(RTF_R8) \
	op(RTF_RG8) \
	op(RTF_RGBA8) \
	op(RTF_RGBA8_SRGB) \
	op(RTF_R16f) \
	op(RTF_RG16f) \
	op(RTF_RGBA16f) \
	op(RTF_R32f) \
	op(RTF_RG32f) \
	op(RTF_RGBA32f) \
	op(RTF_RGB10A2) 

enum ETextureRenderTargetFormat : int;
template<> ENGINE_API UEnum* StaticEnum<ETextureRenderTargetFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
