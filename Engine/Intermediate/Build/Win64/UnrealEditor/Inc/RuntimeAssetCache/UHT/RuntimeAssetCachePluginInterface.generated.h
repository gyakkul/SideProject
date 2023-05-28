// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeAssetCachePluginInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEASSETCACHE_RuntimeAssetCachePluginInterface_generated_h
#error "RuntimeAssetCachePluginInterface.generated.h already included, missing '#pragma once' in RuntimeAssetCachePluginInterface.h"
#endif
#define RUNTIMEASSETCACHE_RuntimeAssetCachePluginInterface_generated_h

#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder(URuntimeAssetCacheBuilder&&); \
	NO_API URuntimeAssetCacheBuilder(const URuntimeAssetCacheBuilder&); \
public: \
	NO_API virtual ~URuntimeAssetCacheBuilder();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeAssetCacheBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeAssetCacheBuilder(URuntimeAssetCacheBuilder&&); \
	NO_API URuntimeAssetCacheBuilder(const URuntimeAssetCacheBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeAssetCacheBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeAssetCacheBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeAssetCacheBuilder) \
	NO_API virtual ~URuntimeAssetCacheBuilder();


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURuntimeAssetCacheBuilder(); \
	friend struct Z_Construct_UClass_URuntimeAssetCacheBuilder_Statics; \
public: \
	DECLARE_CLASS(URuntimeAssetCacheBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/RuntimeAssetCache"), NO_API) \
	DECLARE_SERIALIZER(URuntimeAssetCacheBuilder)


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRuntimeAssetCacheBuilder() {} \
public: \
	typedef URuntimeAssetCacheBuilder UClassType; \
	typedef IRuntimeAssetCacheBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IRuntimeAssetCacheBuilder() {} \
public: \
	typedef URuntimeAssetCacheBuilder UClassType; \
	typedef IRuntimeAssetCacheBuilder ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_14_PROLOG
#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEASSETCACHE_API UClass* StaticClass<class URuntimeAssetCacheBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_RuntimeAssetCache_Public_RuntimeAssetCachePluginInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
