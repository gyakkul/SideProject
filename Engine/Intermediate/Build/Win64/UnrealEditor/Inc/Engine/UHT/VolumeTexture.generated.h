// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/VolumeTexture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_VolumeTexture_generated_h
#error "VolumeTexture.generated.h already included, missing '#pragma once' in VolumeTexture.h"
#endif
#define ENGINE_VolumeTexture_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UVolumeTexture, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeTexture(); \
	friend struct Z_Construct_UClass_UVolumeTexture_Statics; \
public: \
	DECLARE_CLASS(UVolumeTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumeTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeTexture(); \
	friend struct Z_Construct_UClass_UVolumeTexture_Statics; \
public: \
	DECLARE_CLASS(UVolumeTexture, UTexture, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVolumeTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTexture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTexture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumeTexture(UVolumeTexture&&); \
	ENGINE_API UVolumeTexture(const UVolumeTexture&); \
public: \
	ENGINE_API virtual ~UVolumeTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVolumeTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UVolumeTexture(UVolumeTexture&&); \
	ENGINE_API UVolumeTexture(const UVolumeTexture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVolumeTexture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeTexture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeTexture) \
	ENGINE_API virtual ~UVolumeTexture();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VolumeTexture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVolumeTexture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_VolumeTexture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
