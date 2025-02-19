// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VolumeCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_VolumeCache_generated_h
#error "VolumeCache.generated.h already included, missing '#pragma once' in VolumeCache.h"
#endif
#define NIAGARA_VolumeCache_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVolumeCache(); \
	friend struct Z_Construct_UClass_UVolumeCache_Statics; \
public: \
	DECLARE_CLASS(UVolumeCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UVolumeCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUVolumeCache(); \
	friend struct Z_Construct_UClass_UVolumeCache_Statics; \
public: \
	DECLARE_CLASS(UVolumeCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UVolumeCache)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVolumeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVolumeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVolumeCache(UVolumeCache&&); \
	NO_API UVolumeCache(const UVolumeCache&); \
public: \
	NO_API virtual ~UVolumeCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVolumeCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVolumeCache(UVolumeCache&&); \
	NO_API UVolumeCache(const UVolumeCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVolumeCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVolumeCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVolumeCache) \
	NO_API virtual ~UVolumeCache();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_20_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VolumeCache."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UVolumeCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_VolumeCache_h


#define FOREACH_ENUM_EVOLUMECACHETYPE(op) \
	op(EVolumeCacheType::OpenVDB) 

enum class EVolumeCacheType : uint8;
template<> struct TIsUEnumClass<EVolumeCacheType> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<EVolumeCacheType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
