// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetImportTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UNREALED_AssetImportTask_generated_h
#error "AssetImportTask.generated.h already included, missing '#pragma once' in AssetImportTask.h"
#endif
#define UNREALED_AssetImportTask_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAsyncImportComplete); \
	DECLARE_FUNCTION(execGetObjects);


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAsyncImportComplete); \
	DECLARE_FUNCTION(execGetObjects);


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportTask(); \
	friend struct Z_Construct_UClass_UAssetImportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetImportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportTask)


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAssetImportTask(); \
	friend struct Z_Construct_UClass_UAssetImportTask_Statics; \
public: \
	DECLARE_CLASS(UAssetImportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UAssetImportTask)


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetImportTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetImportTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportTask(UAssetImportTask&&); \
	NO_API UAssetImportTask(const UAssetImportTask&); \
public: \
	NO_API virtual ~UAssetImportTask();


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetImportTask(UAssetImportTask&&); \
	NO_API UAssetImportTask(const UAssetImportTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetImportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetImportTask) \
	NO_API virtual ~UAssetImportTask();


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UAssetImportTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
