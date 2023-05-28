// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "USDStageEditorBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUsdStageActor;
class UUsdStageImportOptions;
#ifdef USDSTAGEEDITOR_USDStageEditorBlueprintLibrary_generated_h
#error "USDStageEditorBlueprintLibrary.generated.h already included, missing '#pragma once' in USDStageEditorBlueprintLibrary.h"
#endif
#define USDSTAGEEDITOR_USDStageEditorBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExportSelectedLayers); \
	DECLARE_FUNCTION(execActionsImport); \
	DECLARE_FUNCTION(execFileClose); \
	DECLARE_FUNCTION(execFileReset); \
	DECLARE_FUNCTION(execFileReload); \
	DECLARE_FUNCTION(execFileExportFlattenedStage); \
	DECLARE_FUNCTION(execFileExportAllLayers); \
	DECLARE_FUNCTION(execFileSave); \
	DECLARE_FUNCTION(execFileOpen); \
	DECLARE_FUNCTION(execFileNew); \
	DECLARE_FUNCTION(execSetSelectedPropertyNames); \
	DECLARE_FUNCTION(execGetSelectedPropertyNames); \
	DECLARE_FUNCTION(execSetSelectedPrimPaths); \
	DECLARE_FUNCTION(execGetSelectedPrimPaths); \
	DECLARE_FUNCTION(execSetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execGetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execSetAttachedStageActor); \
	DECLARE_FUNCTION(execGetAttachedStageActor); \
	DECLARE_FUNCTION(execCloseStageEditor); \
	DECLARE_FUNCTION(execOpenStageEditor);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExportSelectedLayers); \
	DECLARE_FUNCTION(execActionsImport); \
	DECLARE_FUNCTION(execFileClose); \
	DECLARE_FUNCTION(execFileReset); \
	DECLARE_FUNCTION(execFileReload); \
	DECLARE_FUNCTION(execFileExportFlattenedStage); \
	DECLARE_FUNCTION(execFileExportAllLayers); \
	DECLARE_FUNCTION(execFileSave); \
	DECLARE_FUNCTION(execFileOpen); \
	DECLARE_FUNCTION(execFileNew); \
	DECLARE_FUNCTION(execSetSelectedPropertyNames); \
	DECLARE_FUNCTION(execGetSelectedPropertyNames); \
	DECLARE_FUNCTION(execSetSelectedPrimPaths); \
	DECLARE_FUNCTION(execGetSelectedPrimPaths); \
	DECLARE_FUNCTION(execSetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execGetSelectedLayerIdentifiers); \
	DECLARE_FUNCTION(execSetAttachedStageActor); \
	DECLARE_FUNCTION(execGetAttachedStageActor); \
	DECLARE_FUNCTION(execCloseStageEditor); \
	DECLARE_FUNCTION(execOpenStageEditor);


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUsdStageEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UUsdStageEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStageEditor"), NO_API) \
	DECLARE_SERIALIZER(UUsdStageEditorBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUsdStageEditorBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UUsdStageEditorBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UUsdStageEditorBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/USDStageEditor"), NO_API) \
	DECLARE_SERIALIZER(UUsdStageEditorBlueprintLibrary)


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdStageEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageEditorBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdStageEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageEditorBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdStageEditorBlueprintLibrary(UUsdStageEditorBlueprintLibrary&&); \
	NO_API UUsdStageEditorBlueprintLibrary(const UUsdStageEditorBlueprintLibrary&); \
public: \
	NO_API virtual ~UUsdStageEditorBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUsdStageEditorBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUsdStageEditorBlueprintLibrary(UUsdStageEditorBlueprintLibrary&&); \
	NO_API UUsdStageEditorBlueprintLibrary(const UUsdStageEditorBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUsdStageEditorBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUsdStageEditorBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUsdStageEditorBlueprintLibrary) \
	NO_API virtual ~UUsdStageEditorBlueprintLibrary();


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USDSTAGEEDITOR_API UClass* StaticClass<class UUsdStageEditorBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Importers_USDImporter_Source_USDStageEditor_Public_USDStageEditorBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
