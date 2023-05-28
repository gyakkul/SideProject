// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
struct FAssetData;
#ifdef UNREALED_EditorAssetSubsystem_generated_h
#error "EditorAssetSubsystem.generated.h already included, missing '#pragma once' in EditorAssetSubsystem.h"
#endif
#define UNREALED_EditorAssetSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_382_DELEGATE \
static void FOnExtractAssetFromFileDynamic_DelegateWrapper(const FScriptDelegate& OnExtractAssetFromFileDynamic, TArray<FString> const& Files, TArray<FAssetData>& AssetDataArray);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execAddOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetsByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryContainAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execAddOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetsByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryContainAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAssetSubsystem(); \
	friend struct Z_Construct_UClass_UEditorAssetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUEditorAssetSubsystem(); \
	friend struct Z_Construct_UClass_UEditorAssetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorAssetSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UEditorAssetSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorAssetSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorAssetSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetSubsystem(UEditorAssetSubsystem&&); \
	NO_API UEditorAssetSubsystem(const UEditorAssetSubsystem&); \
public: \
	NO_API virtual ~UEditorAssetSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorAssetSubsystem(UEditorAssetSubsystem&&); \
	NO_API UEditorAssetSubsystem(const UEditorAssetSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorAssetSubsystem) \
	NO_API virtual ~UEditorAssetSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorAssetSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
