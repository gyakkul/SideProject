// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAssetCacheBuilders.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URuntimeAssetCacheBuilder_ObjectBase;
struct FVoidPtrParam;
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h
#error "RuntimeAssetCacheBuilders.generated.h already included, missing '#pragma once' in RuntimeAssetCacheBuilders.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCacheBuilders_generated_h

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_19_DELEGATE \
RUNTIMEASSETCACHE_API void FOnAssetCacheComplete_DelegateWrapper(const FScriptDelegate& OnAssetCacheComplete, URuntimeAssetCacheBuilder_ObjectBase* CachedAssetBuilder, bool Success);


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS \
	virtual void OnAssetCacheMiss_Implementation(); \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache); \
	DECLARE_FUNCTION(execOnAssetCacheMiss); \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete); \
	DECLARE_FUNCTION(execGetFromCacheAsync);


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveNewAssetToCache); \
	DECLARE_FUNCTION(execOnAssetCacheMiss); \
	DECLARE_FUNCTION(execGetFromCacheAsyncComplete); \
	DECLARE_FUNCTION(execGetFromCacheAsync);


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder_ObjectBase(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBuilder_ObjectBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder_ObjectBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder_ObjectBase) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeAssetCacheBuilder_ObjectBase*>(this); }


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(URuntimeAssetCacheBuilder_ObjectBase&&); \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase&); \
public: \
	NO_API virtual ~URuntimeAssetCacheBuilder_ObjectBase();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(URuntimeAssetCacheBuilder_ObjectBase&&); \
	NO_API URuntimeAssetCacheBuilder_ObjectBase(const URuntimeAssetCacheBuilder_ObjectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder_ObjectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder_ObjectBase) \
	NO_API virtual ~URuntimeAssetCacheBuilder_ObjectBase();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_23_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEASSETCACHE_API UClass* StaticClass<class URuntimeAssetCacheBuilder_ObjectBase>();

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_SPARSE_DATA
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ACCESSORS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics; \
public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder)


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUExampleTextureCacheBuilder(); \
	friend struct Z_Construct_UClass_UExampleTextureCacheBuilder_Statics; \
public: \
	DECLARE_CLASS(UExampleTextureCacheBuilder, URuntimeAssetCacheBuilder_ObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(UExampleTextureCacheBuilder)


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleTextureCacheBuilder(UExampleTextureCacheBuilder&&); \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder&); \
public: \
	NO_API virtual ~UExampleTextureCacheBuilder();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleTextureCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleTextureCacheBuilder(UExampleTextureCacheBuilder&&); \
	NO_API UExampleTextureCacheBuilder(const UExampleTextureCacheBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleTextureCacheBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleTextureCacheBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleTextureCacheBuilder) \
	NO_API virtual ~UExampleTextureCacheBuilder();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_170_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEASSETCACHE_API UClass* StaticClass<class UExampleTextureCacheBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCacheBuilders_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
