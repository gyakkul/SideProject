// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFramework/AssetImportData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetImportData_generated_h
#error "AssetImportData.generated.h already included, missing '#pragma once' in AssetImportData.h"
#endif
#define ENGINE_AssetImportData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetImportInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAssetImportInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_ExtractFilenames); \
	DECLARE_FUNCTION(execK2_GetFirstFilename); \
	DECLARE_FUNCTION(execScriptedAddFilename);


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_ExtractFilenames); \
	DECLARE_FUNCTION(execK2_GetFirstFilename); \
	DECLARE_FUNCTION(execScriptedAddFilename);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UAssetImportData, NO_API)


#else
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportData(); \
	friend struct Z_Construct_UClass_UAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UAssetImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportData) \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUAssetImportData(); \
	friend struct Z_Construct_UClass_UAssetImportData_Statics; \
public: \
	DECLARE_CLASS(UAssetImportData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportData) \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportData(UAssetImportData&&); \
	NO_API UAssetImportData(const UAssetImportData&); \
public: \
	NO_API virtual ~UAssetImportData();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportData(UAssetImportData&&); \
	NO_API UAssetImportData(const UAssetImportData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportData) \
	NO_API virtual ~UAssetImportData();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_69_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetImportData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetImportData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_AssetImportData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
