// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaPlayer;
#ifdef MEDIAASSETS_MediaTexture_generated_h
#error "MediaTexture.generated.h already included, missing '#pragma once' in MediaTexture.h"
#endif
#define MEDIAASSETS_MediaTexture_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_SPARSE_DATA
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateResource); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetTextureNumMips); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetAspectRatio);


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateResource); \
	DECLARE_FUNCTION(execSetMediaPlayer); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetTextureNumMips); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetAspectRatio);


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_ACCESSORS
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaTexture(); \
	friend struct Z_Construct_UClass_UMediaTexture_Statics; \
public: \
	DECLARE_CLASS(UMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaTexture)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUMediaTexture(); \
	friend struct Z_Construct_UClass_UMediaTexture_Statics; \
public: \
	DECLARE_CLASS(UMediaTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UMediaTexture)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaTexture(UMediaTexture&&); \
	NO_API UMediaTexture(const UMediaTexture&); \
public: \
	NO_API virtual ~UMediaTexture();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaTexture(UMediaTexture&&); \
	NO_API UMediaTexture(const UMediaTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaTexture) \
	NO_API virtual ~UMediaTexture();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_47_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_INCLASS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h


#define FOREACH_ENUM_MEDIATEXTUREOUTPUTFORMAT(op) \
	op(MTOF_Default) \
	op(MTOF_SRGB_LINOUT) 

enum MediaTextureOutputFormat : int;
template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOutputFormat>();

#define FOREACH_ENUM_MEDIATEXTUREORIENTATION(op) \
	op(MTORI_Original) \
	op(MTORI_CW90) \
	op(MTORI_CW180) \
	op(MTORI_CW270) 

enum MediaTextureOrientation : int;
template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
