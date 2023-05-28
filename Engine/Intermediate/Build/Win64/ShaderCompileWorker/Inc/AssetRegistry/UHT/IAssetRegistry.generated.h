// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetRegistry/IAssetRegistry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FARFilter;
struct FAssetData;
struct FAssetRegistryDependencyOptions;
struct FSoftObjectPath;
struct FTopLevelAssetPath;
#ifdef ASSETREGISTRY_IAssetRegistry_generated_h
#error "IAssetRegistry.generated.h already included, missing '#pragma once' in IAssetRegistry.h"
#endif
#define ASSETREGISTRY_IAssetRegistry_generated_h

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetRegistryDependencyOptions_Statics; \
	ASSETREGISTRY_API static class UScriptStruct* StaticStruct();


template<> ASSETREGISTRY_API UScriptStruct* StaticStruct<struct FAssetRegistryDependencyOptions>();

#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_SPARSE_DATA
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets); \
	DECLARE_FUNCTION(execScanModifiedAssetFiles); \
	DECLARE_FUNCTION(execPrioritizeSearchPath); \
	DECLARE_FUNCTION(execWaitForPackage); \
	DECLARE_FUNCTION(execWaitForCompletion); \
	DECLARE_FUNCTION(execIsSearchAsync); \
	DECLARE_FUNCTION(execIsSearchAllAssets); \
	DECLARE_FUNCTION(execSearchAllAssets); \
	DECLARE_FUNCTION(execScanFilesSynchronous); \
	DECLARE_FUNCTION(execScanPathsSynchronous); \
	DECLARE_FUNCTION(execUseFilterToExcludeAssets); \
	DECLARE_FUNCTION(execRunAssetsThroughFilter); \
	DECLARE_FUNCTION(execGetSubPaths); \
	DECLARE_FUNCTION(execGetAllCachedPaths); \
	DECLARE_FUNCTION(execGetDerivedClassNames); \
	DECLARE_FUNCTION(execGetAncestorClassNames); \
	DECLARE_FUNCTION(execK2_GetReferencers); \
	DECLARE_FUNCTION(execK2_GetDependencies); \
	DECLARE_FUNCTION(execGetAllAssets); \
	DECLARE_FUNCTION(execK2_GetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetAssetsByClass); \
	DECLARE_FUNCTION(execGetAssetsByPaths); \
	DECLARE_FUNCTION(execGetAssetsByPath); \
	DECLARE_FUNCTION(execGetAssetsByPackageName); \
	DECLARE_FUNCTION(execHasAssets);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLoadingAssets); \
	DECLARE_FUNCTION(execScanModifiedAssetFiles); \
	DECLARE_FUNCTION(execPrioritizeSearchPath); \
	DECLARE_FUNCTION(execWaitForPackage); \
	DECLARE_FUNCTION(execWaitForCompletion); \
	DECLARE_FUNCTION(execIsSearchAsync); \
	DECLARE_FUNCTION(execIsSearchAllAssets); \
	DECLARE_FUNCTION(execSearchAllAssets); \
	DECLARE_FUNCTION(execScanFilesSynchronous); \
	DECLARE_FUNCTION(execScanPathsSynchronous); \
	DECLARE_FUNCTION(execUseFilterToExcludeAssets); \
	DECLARE_FUNCTION(execRunAssetsThroughFilter); \
	DECLARE_FUNCTION(execGetSubPaths); \
	DECLARE_FUNCTION(execGetAllCachedPaths); \
	DECLARE_FUNCTION(execGetDerivedClassNames); \
	DECLARE_FUNCTION(execGetAncestorClassNames); \
	DECLARE_FUNCTION(execK2_GetReferencers); \
	DECLARE_FUNCTION(execK2_GetDependencies); \
	DECLARE_FUNCTION(execGetAllAssets); \
	DECLARE_FUNCTION(execK2_GetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssetByObjectPath); \
	DECLARE_FUNCTION(execGetAssets); \
	DECLARE_FUNCTION(execGetAssetsByClass); \
	DECLARE_FUNCTION(execGetAssetsByPaths); \
	DECLARE_FUNCTION(execGetAssetsByPath); \
	DECLARE_FUNCTION(execGetAssetsByPackageName); \
	DECLARE_FUNCTION(execHasAssets);


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_ACCESSORS
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public: \
	ASSETREGISTRY_API virtual ~UAssetRegistry();


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETREGISTRY_API UAssetRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSETREGISTRY_API UAssetRegistry(UAssetRegistry&&); \
	ASSETREGISTRY_API UAssetRegistry(const UAssetRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETREGISTRY_API, UAssetRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetRegistry); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetRegistry) \
	ASSETREGISTRY_API virtual ~UAssetRegistry();


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetRegistry(); \
	friend struct Z_Construct_UClass_UAssetRegistry_Statics; \
public: \
	DECLARE_CLASS(UAssetRegistry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetRegistry"), ASSETREGISTRY_API) \
	DECLARE_SERIALIZER(UAssetRegistry)


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	typedef IAssetRegistry ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetRegistry() {} \
public: \
	typedef UAssetRegistry UClassType; \
	typedef IAssetRegistry ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_102_PROLOG
#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_SPARSE_DATA \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_ACCESSORS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_SPARSE_DATA \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_ACCESSORS \
	FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h_105_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREGISTRY_API UClass* StaticClass<class UAssetRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AssetRegistry_Public_AssetRegistry_IAssetRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
