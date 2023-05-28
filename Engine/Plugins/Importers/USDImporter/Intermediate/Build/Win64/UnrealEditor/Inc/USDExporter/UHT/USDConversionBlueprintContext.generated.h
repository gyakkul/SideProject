// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDConversionBlueprintContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AInstancedFoliageActor;
class ALandscapeProxy;
class UCineCameraComponent;
class UDirectionalLightComponent;
class UHierarchicalInstancedStaticMeshComponent;
class ULevel;
class ULightComponentBase;
class UMeshComponent;
class UPointLightComponent;
class URectLightComponent;
class USceneComponent;
class USkyLightComponent;
class USpotLightComponent;
struct FDirectoryPath;
struct FFilePath;
struct FPropertyEntry;
struct FUsdUnrealAssetInfo;
#ifdef USDEXPORTER_USDConversionBlueprintContext_generated_h
#error "USDConversionBlueprintContext.generated.h already included, missing '#pragma once' in USDConversionBlueprintContext.h"
#endif
#define USDEXPORTER_USDConversionBlueprintContext_generated_h

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_SPARSE_DATA
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrimAssetInfo); \
	DECLARE_FUNCTION(execSetPrimAssetInfo); \
	DECLARE_FUNCTION(execGetUsdStageNumFrames); \
	DECLARE_FUNCTION(execRemoveUnrealSurfaceOutput); \
	DECLARE_FUNCTION(execReplaceUnrealMaterialsWithBaked); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMaterial); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMesh); \
	DECLARE_FUNCTION(execConvertInstancedFoliageActor); \
	DECLARE_FUNCTION(execConvertCineCameraComponent); \
	DECLARE_FUNCTION(execConvertMeshComponent); \
	DECLARE_FUNCTION(execConvertHismComponent); \
	DECLARE_FUNCTION(execConvertSceneComponent); \
	DECLARE_FUNCTION(execConvertSpotLightComponent); \
	DECLARE_FUNCTION(execConvertSkyLightComponent); \
	DECLARE_FUNCTION(execConvertPointLightComponent); \
	DECLARE_FUNCTION(execConvertRectLightComponent); \
	DECLARE_FUNCTION(execConvertDirectionalLightComponent); \
	DECLARE_FUNCTION(execConvertLightComponent); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execGetEditTarget); \
	DECLARE_FUNCTION(execSetEditTarget); \
	DECLARE_FUNCTION(execGetStageRootLayer); \
	DECLARE_FUNCTION(execSetStageRootLayer);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrimAssetInfo); \
	DECLARE_FUNCTION(execSetPrimAssetInfo); \
	DECLARE_FUNCTION(execGetUsdStageNumFrames); \
	DECLARE_FUNCTION(execRemoveUnrealSurfaceOutput); \
	DECLARE_FUNCTION(execReplaceUnrealMaterialsWithBaked); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMaterial); \
	DECLARE_FUNCTION(execConvertLandscapeProxyActorMesh); \
	DECLARE_FUNCTION(execConvertInstancedFoliageActor); \
	DECLARE_FUNCTION(execConvertCineCameraComponent); \
	DECLARE_FUNCTION(execConvertMeshComponent); \
	DECLARE_FUNCTION(execConvertHismComponent); \
	DECLARE_FUNCTION(execConvertSceneComponent); \
	DECLARE_FUNCTION(execConvertSpotLightComponent); \
	DECLARE_FUNCTION(execConvertSkyLightComponent); \
	DECLARE_FUNCTION(execConvertPointLightComponent); \
	DECLARE_FUNCTION(execConvertRectLightComponent); \
	DECLARE_FUNCTION(execConvertDirectionalLightComponent); \
	DECLARE_FUNCTION(execConvertLightComponent); \
	DECLARE_FUNCTION(execCleanup); \
	DECLARE_FUNCTION(execGetEditTarget); \
	DECLARE_FUNCTION(execSetEditTarget); \
	DECLARE_FUNCTION(execGetStageRootLayer); \
	DECLARE_FUNCTION(execSetStageRootLayer);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintContext(); \
	friend struct Z_Construct_UClass_UUsdConversionBlueprintContext_Statics; \
public: \
	DECLARE_CLASS(UUsdConversionBlueprintContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), NO_API) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintContext)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintContext(); \
	friend struct Z_Construct_UClass_UUsdConversionBlueprintContext_Statics; \
public: \
	DECLARE_CLASS(UUsdConversionBlueprintContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), NO_API) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintContext)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdConversionBlueprintContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdConversionBlueprintContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdConversionBlueprintContext(UUsdConversionBlueprintContext&&); \
	NO_API UUsdConversionBlueprintContext(const UUsdConversionBlueprintContext&); \
public:


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdConversionBlueprintContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdConversionBlueprintContext(UUsdConversionBlueprintContext&&); \
	NO_API UUsdConversionBlueprintContext(const UUsdConversionBlueprintContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdConversionBlueprintContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintContext)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_43_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_RPC_WRAPPERS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDEXPORTER_API UClass* StaticClass<class UUsdConversionBlueprintContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
