// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDatasmithImportOptions;
class UDatasmithSceneElement;
class UObject;
class UObject; class UObject;
struct FDatasmithImportFactoryCreateFileResult;
#ifdef DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h
#error "DatasmithBlueprintLibrary.generated.h already included, missing '#pragma once' in DatasmithBlueprintLibrary.h"
#endif
#define DATASMITHIMPORTER_DatasmithBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatasmithImportFactoryCreateFileResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATASMITHIMPORTER_API UScriptStruct* StaticStruct<struct FDatasmithImportFactoryCreateFileResult>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroyScene); \
	DECLARE_FUNCTION(execGetImportOptions); \
	DECLARE_FUNCTION(execGetAllOptions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execReimportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execTranslateScene); \
	DECLARE_FUNCTION(execGetExistingDatasmithScene); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromCADFiles); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromSourceUri); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroyScene); \
	DECLARE_FUNCTION(execGetImportOptions); \
	DECLARE_FUNCTION(execGetAllOptions); \
	DECLARE_FUNCTION(execGetOptions); \
	DECLARE_FUNCTION(execReimportScene); \
	DECLARE_FUNCTION(execImportScenes); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execTranslateScene); \
	DECLARE_FUNCTION(execGetExistingDatasmithScene); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromCADFiles); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromSourceUri); \
	DECLARE_FUNCTION(execConstructDatasmithSceneFromFile);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElement(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElement, UDatasmithSceneElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithSceneElement(); \
	friend struct Z_Construct_UClass_UDatasmithSceneElement_Statics; \
public: \
	DECLARE_CLASS(UDatasmithSceneElement, UDatasmithSceneElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), NO_API) \
	DECLARE_SERIALIZER(UDatasmithSceneElement)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElement(UDatasmithSceneElement&&); \
	NO_API UDatasmithSceneElement(const UDatasmithSceneElement&); \
public: \
	NO_API virtual ~UDatasmithSceneElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatasmithSceneElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDatasmithSceneElement(UDatasmithSceneElement&&); \
	NO_API UDatasmithSceneElement(const UDatasmithSceneElement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatasmithSceneElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithSceneElement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithSceneElement) \
	NO_API virtual ~UDatasmithSceneElement();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_45_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithSceneElement>();

#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetupStaticLighting); \
	DECLARE_FUNCTION(execComputeLightmapResolution);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupStaticLighting); \
	DECLARE_FUNCTION(execComputeLightmapResolution);


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithStaticMeshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), DATASMITHIMPORTER_API) \
	DECLARE_SERIALIZER(UDatasmithStaticMeshBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS \
private: \
	static void StaticRegisterNativesUDatasmithStaticMeshBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDatasmithStaticMeshBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDatasmithStaticMeshBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithImporter"), DATASMITHIMPORTER_API) \
	DECLARE_SERIALIZER(UDatasmithStaticMeshBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStaticMeshBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStaticMeshBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(UDatasmithStaticMeshBlueprintLibrary&&); \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const UDatasmithStaticMeshBlueprintLibrary&); \
public: \
	DATASMITHIMPORTER_API virtual ~UDatasmithStaticMeshBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(UDatasmithStaticMeshBlueprintLibrary&&); \
	DATASMITHIMPORTER_API UDatasmithStaticMeshBlueprintLibrary(const UDatasmithStaticMeshBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHIMPORTER_API, UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatasmithStaticMeshBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatasmithStaticMeshBlueprintLibrary) \
	DATASMITHIMPORTER_API virtual ~UDatasmithStaticMeshBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_149_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h_152_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHIMPORTER_API UClass* StaticClass<class UDatasmithStaticMeshBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_DatasmithBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
