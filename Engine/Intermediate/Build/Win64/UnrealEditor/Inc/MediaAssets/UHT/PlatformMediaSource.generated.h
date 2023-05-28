// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_PlatformMediaSource_generated_h
#error "PlatformMediaSource.generated.h already included, missing '#pragma once' in PlatformMediaSource.h"
#endif
#define MEDIAASSETS_PlatformMediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPlatformMediaSource, NO_API)


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformMediaSource(); \
	friend struct Z_Construct_UClass_UPlatformMediaSource_Statics; \
public: \
	DECLARE_CLASS(UPlatformMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UPlatformMediaSource) \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformMediaSource(); \
	friend struct Z_Construct_UClass_UPlatformMediaSource_Statics; \
public: \
	DECLARE_CLASS(UPlatformMediaSource, UMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), NO_API) \
	DECLARE_SERIALIZER(UPlatformMediaSource) \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformMediaSource(UPlatformMediaSource&&); \
	NO_API UPlatformMediaSource(const UPlatformMediaSource&); \
public: \
	NO_API virtual ~UPlatformMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformMediaSource(UPlatformMediaSource&&); \
	NO_API UPlatformMediaSource(const UPlatformMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformMediaSource) \
	NO_API virtual ~UPlatformMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_28_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UPlatformMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_PlatformMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
