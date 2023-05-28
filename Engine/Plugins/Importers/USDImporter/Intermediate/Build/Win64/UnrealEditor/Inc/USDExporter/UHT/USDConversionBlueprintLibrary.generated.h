// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDConversionBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AInstancedFoliageActor;
class UFoliageType;
class ULevel;
class ULevelExporterUSDOptions;
class UObject;
class USceneComponent;
class UWorld;
enum class EUsdDuplicateType : uint8;
struct FAnalyticsEventAttr;
#ifdef USDEXPORTER_USDConversionBlueprintLibrary_generated_h
#error "USDConversionBlueprintLibrary.generated.h already included, missing '#pragma once' in USDConversionBlueprintLibrary.h"
#endif
#define USDEXPORTER_USDConversionBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicatePrims); \
	DECLARE_FUNCTION(execClearPrimClipboard); \
	DECLARE_FUNCTION(execCanPastePrims); \
	DECLARE_FUNCTION(execPastePrims); \
	DECLARE_FUNCTION(execCopyPrims); \
	DECLARE_FUNCTION(execCutPrims); \
	DECLARE_FUNCTION(execRemoveAllPrimSpecs); \
	DECLARE_FUNCTION(execSendAnalytics); \
	DECLARE_FUNCTION(execGetAnalyticsAttributes); \
	DECLARE_FUNCTION(execGetInstanceTransforms); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetUsedFoliageTypes); \
	DECLARE_FUNCTION(execGetInstancedFoliageActorForLevel); \
	DECLARE_FUNCTION(execGetSchemaNameForComponent); \
	DECLARE_FUNCTION(execGetPrimPathForObject); \
	DECLARE_FUNCTION(execAddPayload); \
	DECLARE_FUNCTION(execInsertSubLayer); \
	DECLARE_FUNCTION(execMakePathRelativeToLayer); \
	DECLARE_FUNCTION(execCanExportToLayer); \
	DECLARE_FUNCTION(execGenerateObjectVersionString); \
	DECLARE_FUNCTION(execGetActorsToConvert); \
	DECLARE_FUNCTION(execStreamOutLevels); \
	DECLARE_FUNCTION(execGetVisibleInEditorLevelNames); \
	DECLARE_FUNCTION(execGetLoadedLevelNames); \
	DECLARE_FUNCTION(execReapplySequencerAnimations); \
	DECLARE_FUNCTION(execRevertSequencerAnimations); \
	DECLARE_FUNCTION(execStreamInRequiredLevels);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicatePrims); \
	DECLARE_FUNCTION(execClearPrimClipboard); \
	DECLARE_FUNCTION(execCanPastePrims); \
	DECLARE_FUNCTION(execPastePrims); \
	DECLARE_FUNCTION(execCopyPrims); \
	DECLARE_FUNCTION(execCutPrims); \
	DECLARE_FUNCTION(execRemoveAllPrimSpecs); \
	DECLARE_FUNCTION(execSendAnalytics); \
	DECLARE_FUNCTION(execGetAnalyticsAttributes); \
	DECLARE_FUNCTION(execGetInstanceTransforms); \
	DECLARE_FUNCTION(execGetSource); \
	DECLARE_FUNCTION(execGetUsedFoliageTypes); \
	DECLARE_FUNCTION(execGetInstancedFoliageActorForLevel); \
	DECLARE_FUNCTION(execGetSchemaNameForComponent); \
	DECLARE_FUNCTION(execGetPrimPathForObject); \
	DECLARE_FUNCTION(execAddPayload); \
	DECLARE_FUNCTION(execInsertSubLayer); \
	DECLARE_FUNCTION(execMakePathRelativeToLayer); \
	DECLARE_FUNCTION(execCanExportToLayer); \
	DECLARE_FUNCTION(execGenerateObjectVersionString); \
	DECLARE_FUNCTION(execGetActorsToConvert); \
	DECLARE_FUNCTION(execStreamOutLevels); \
	DECLARE_FUNCTION(execGetVisibleInEditorLevelNames); \
	DECLARE_FUNCTION(execGetLoadedLevelNames); \
	DECLARE_FUNCTION(execReapplySequencerAnimations); \
	DECLARE_FUNCTION(execRevertSequencerAnimations); \
	DECLARE_FUNCTION(execStreamInRequiredLevels);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UUsdConversionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), NO_API) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUsdConversionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUsdConversionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UUsdConversionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDExporter"), NO_API) \
	DECLARE_SERIALIZER(UUsdConversionBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdConversionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdConversionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdConversionBlueprintLibrary(UUsdConversionBlueprintLibrary&&); \
	NO_API UUsdConversionBlueprintLibrary(const UUsdConversionBlueprintLibrary&); \
public: \
	NO_API virtual ~UUsdConversionBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdConversionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdConversionBlueprintLibrary(UUsdConversionBlueprintLibrary&&); \
	NO_API UUsdConversionBlueprintLibrary(const UUsdConversionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdConversionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdConversionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdConversionBlueprintLibrary) \
	NO_API virtual ~UUsdConversionBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDEXPORTER_API UClass* StaticClass<class UUsdConversionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
