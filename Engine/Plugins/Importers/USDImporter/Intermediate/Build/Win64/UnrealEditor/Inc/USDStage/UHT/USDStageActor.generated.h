// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UObject;
class USceneComponent;
class UUsdAssetCache2;
enum class EUsdInitialLoadSet : uint8;
enum class EUsdInterpolationType : uint8;
enum class EUsdRootMotionHandling : int32;
#ifdef USDSTAGE_USDStageActor_generated_h
#error "USDStageActor.generated.h already included, missing '#pragma once' in USDStageActor.h"
#endif
#define USDSTAGE_USDStageActor_generated_h

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetIsolatedRootLayer); \
	DECLARE_FUNCTION(execSetIsolatedRootLayer); \
	DECLARE_FUNCTION(execNewStage); \
	DECLARE_FUNCTION(execGetSourcePrimPath); \
	DECLARE_FUNCTION(execGetGeneratedAssets); \
	DECLARE_FUNCTION(execGetGeneratedComponent); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetRootMotionHandling); \
	DECLARE_FUNCTION(execSetMaterialPurpose); \
	DECLARE_FUNCTION(execSetRenderContext); \
	DECLARE_FUNCTION(execSetNaniteTriangleThreshold); \
	DECLARE_FUNCTION(execSetPurposesToLoad); \
	DECLARE_FUNCTION(execSetCollapseTopLevelPointInstancers); \
	DECLARE_FUNCTION(execSetMergeIdenticalMaterialSlots); \
	DECLARE_FUNCTION(execSetKindsToCollapse); \
	DECLARE_FUNCTION(execSetInterpolationType); \
	DECLARE_FUNCTION(execSetInitialLoadSet); \
	DECLARE_FUNCTION(execSetAssetCache); \
	DECLARE_FUNCTION(execSetRootLayer);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetIsolatedRootLayer); \
	DECLARE_FUNCTION(execSetIsolatedRootLayer); \
	DECLARE_FUNCTION(execNewStage); \
	DECLARE_FUNCTION(execGetSourcePrimPath); \
	DECLARE_FUNCTION(execGetGeneratedAssets); \
	DECLARE_FUNCTION(execGetGeneratedComponent); \
	DECLARE_FUNCTION(execGetLevelSequence); \
	DECLARE_FUNCTION(execSetTime); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execSetRootMotionHandling); \
	DECLARE_FUNCTION(execSetMaterialPurpose); \
	DECLARE_FUNCTION(execSetRenderContext); \
	DECLARE_FUNCTION(execSetNaniteTriangleThreshold); \
	DECLARE_FUNCTION(execSetPurposesToLoad); \
	DECLARE_FUNCTION(execSetCollapseTopLevelPointInstancers); \
	DECLARE_FUNCTION(execSetMergeIdenticalMaterialSlots); \
	DECLARE_FUNCTION(execSetKindsToCollapse); \
	DECLARE_FUNCTION(execSetInterpolationType); \
	DECLARE_FUNCTION(execSetInitialLoadSet); \
	DECLARE_FUNCTION(execSetAssetCache); \
	DECLARE_FUNCTION(execSetRootLayer);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AUsdStageActor, USDSTAGE_API)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUsdStageActor(); \
	friend struct Z_Construct_UClass_AUsdStageActor_Statics; \
public: \
	DECLARE_CLASS(AUsdStageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDStage"), USDSTAGE_API) \
	DECLARE_SERIALIZER(AUsdStageActor) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("USDImporter");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAUsdStageActor(); \
	friend struct Z_Construct_UClass_AUsdStageActor_Statics; \
public: \
	DECLARE_CLASS(AUsdStageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USDStage"), USDSTAGE_API) \
	DECLARE_SERIALIZER(AUsdStageActor) \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("USDImporter");} \



#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	USDSTAGE_API AUsdStageActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUsdStageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGE_API, AUsdStageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUsdStageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USDSTAGE_API AUsdStageActor(AUsdStageActor&&); \
	USDSTAGE_API AUsdStageActor(const AUsdStageActor&); \
public: \
	USDSTAGE_API virtual ~AUsdStageActor();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USDSTAGE_API AUsdStageActor(AUsdStageActor&&); \
	USDSTAGE_API AUsdStageActor(const AUsdStageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(USDSTAGE_API, AUsdStageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUsdStageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUsdStageActor) \
	USDSTAGE_API virtual ~AUsdStageActor();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_28_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDSTAGE_API UClass* StaticClass<class AUsdStageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStage_Public_USDStageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
