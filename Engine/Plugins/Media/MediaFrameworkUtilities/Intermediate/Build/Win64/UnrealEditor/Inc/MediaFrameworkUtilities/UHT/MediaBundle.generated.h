// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaBundle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UTextureRenderTarget2D;
struct FOpenCVCameraViewInfo;
#ifdef MEDIAFRAMEWORKUTILITIES_MediaBundle_generated_h
#error "MediaBundle.generated.h already included, missing '#pragma once' in MediaBundle.h"
#endif
#define MEDIAFRAMEWORKUTILITIES_MediaBundle_generated_h

#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMediaOpenFailed); \
	DECLARE_FUNCTION(execOnMediaOpenOpened); \
	DECLARE_FUNCTION(execOnMediaClosed); \
	DECLARE_FUNCTION(execGetUndistortedCameraViewInfo); \
	DECLARE_FUNCTION(execGetMediaSource); \
	DECLARE_FUNCTION(execGetLensDisplacementTexture); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetMaterial);


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMediaOpenFailed); \
	DECLARE_FUNCTION(execOnMediaOpenOpened); \
	DECLARE_FUNCTION(execOnMediaClosed); \
	DECLARE_FUNCTION(execGetUndistortedCameraViewInfo); \
	DECLARE_FUNCTION(execGetMediaSource); \
	DECLARE_FUNCTION(execGetLensDisplacementTexture); \
	DECLARE_FUNCTION(execGetMediaTexture); \
	DECLARE_FUNCTION(execGetMediaPlayer); \
	DECLARE_FUNCTION(execGetMaterial);


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_ACCESSORS
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaBundle(); \
	friend struct Z_Construct_UClass_UMediaBundle_Statics; \
public: \
	DECLARE_CLASS(UMediaBundle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMediaBundle)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUMediaBundle(); \
	friend struct Z_Construct_UClass_UMediaBundle_Statics; \
public: \
	DECLARE_CLASS(UMediaBundle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaFrameworkUtilities"), NO_API) \
	DECLARE_SERIALIZER(UMediaBundle)


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBundle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBundle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBundle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBundle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBundle(UMediaBundle&&); \
	NO_API UMediaBundle(const UMediaBundle&); \
public: \
	NO_API virtual ~UMediaBundle();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaBundle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaBundle(UMediaBundle&&); \
	NO_API UMediaBundle(const UMediaBundle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaBundle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaBundle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaBundle) \
	NO_API virtual ~UMediaBundle();


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_39_PROLOG
#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_ACCESSORS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_ACCESSORS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MediaBundle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<class UMediaBundle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
