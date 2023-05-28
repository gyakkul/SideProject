// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAssetManager::StaticRegisterNativesUAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetManager);
	UClass* Z_Construct_UClass_UAssetManager_NoRegister()
	{
		return UAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectReferenceList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectReferenceList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectReferenceList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGlobalAsyncScanEnvironment_MetaData[];
#endif
		static void NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGlobalAsyncScanEnvironment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGuessTypeAndName_MetaData[];
#endif
		static void NewProp_bShouldGuessTypeAndName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGuessTypeAndName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseSynchronousLoad_MetaData[];
#endif
		static void NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseSynchronousLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadingFromPakFiles_MetaData[];
#endif
		static void NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadingFromPakFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[];
#endif
		static void NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAcquireMissingChunksOnLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyCookProductionAssets_MetaData[];
#endif
		static void NewProp_bOnlyCookProductionAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCookProductionAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBulkScanRequests_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBulkScanRequests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData[];
#endif
		static void NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimaryAssetDirectoryCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsManagementDatabaseCurrent_MetaData[];
#endif
		static void NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsManagementDatabaseCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateManagementDatabaseAfterScan_MetaData[];
#endif
		static void NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateManagementDatabaseAfterScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeOnlyOnDiskAssets_MetaData[];
#endif
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCompletedInitialScan_MetaData[];
#endif
		static void NewProp_bHasCompletedInitialScan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCompletedInitialScan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSpawnedNotifications_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfSpawnedNotifications;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\n * Games should override this class and change the class reference\n */" },
		{ "IncludePath", "Engine/AssetManager.h" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "A singleton UObject that is responsible for loading and unloading PrimaryAssets, and maintaining game-specific asset references\nGames should override this class and change the class reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData[] = {
		{ "Comment", "/** List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "List of UObjects that are being kept from being GCd, derived from the asset type map. Arrays are currently more efficient than Sets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList = { "ObjectReferenceList", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetManager, ObjectReferenceList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData[] = {
		{ "Comment", "/** True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are running a build that is already scanning assets globally so we can perhaps avoid scanning paths synchronously" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsGlobalAsyncScanEnvironment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment = { "bIsGlobalAsyncScanEnvironment", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData[] = {
		{ "Comment", "/** True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if PrimaryAssetType/Name will be implied for loading assets that don't have it saved on disk. Won't work for all projects" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldGuessTypeAndName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName = { "bShouldGuessTypeAndName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData[] = {
		{ "Comment", "/** True if we should always use synchronous loads, this speeds up cooking */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we should always use synchronous loads, this speeds up cooking" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldUseSynchronousLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad = { "bShouldUseSynchronousLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData[] = {
		{ "Comment", "/** True if we are loading from pak files */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we are loading from pak files" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsLoadingFromPakFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles = { "bIsLoadingFromPakFiles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData[] = {
		{ "Comment", "/** True if the chunk install interface should be queries before loading assets */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the chunk install interface should be queries before loading assets" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bShouldAcquireMissingChunksOnLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad = { "bShouldAcquireMissingChunksOnLoad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData[] = {
		{ "Comment", "/** If true, DevelopmentCook assets will error when they are cooked */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "If true, DevelopmentCook assets will error when they are cooked" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bOnlyCookProductionAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets = { "bOnlyCookProductionAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests_MetaData[] = {
		{ "Comment", "/** >0 if we are currently in bulk scanning mode */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", ">0 if we are currently in bulk scanning mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests = { "NumBulkScanRequests", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetManager, NumBulkScanRequests), METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData[] = {
		{ "Comment", "/** True if asset data is current, if false it will need to rescan before PIE */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if asset data is current, if false it will need to rescan before PIE" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsPrimaryAssetDirectoryCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent = { "bIsPrimaryAssetDirectoryCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData[] = {
		{ "Comment", "/** True if the asset management database is up to date */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database is up to date" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIsManagementDatabaseCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent = { "bIsManagementDatabaseCurrent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData[] = {
		{ "Comment", "/** True if the asset management database should be updated after scan completes */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if the asset management database should be updated after scan completes" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bUpdateManagementDatabaseAfterScan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan = { "bUpdateManagementDatabaseAfterScan", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData[] = {
		{ "Comment", "/** True if only on-disk assets should be searched by the asset registry */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if only on-disk assets should be searched by the asset registry" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_MetaData[] = {
		{ "Comment", "/** True if we have passed the initial asset registry/type scan */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "True if we have passed the initial asset registry/type scan" },
	};
#endif
	void Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_SetBit(void* Obj)
	{
		((UAssetManager*)Obj)->bHasCompletedInitialScan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan = { "bHasCompletedInitialScan", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAssetManager), &Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData[] = {
		{ "Comment", "/** Number of notifications seen in this update */" },
		{ "ModuleRelativePath", "Classes/Engine/AssetManager.h" },
		{ "ToolTip", "Number of notifications seen in this update" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications = { "NumberOfSpawnedNotifications", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetManager, NumberOfSpawnedNotifications), METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_ObjectReferenceList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_NumBulkScanRequests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetManager_Statics::NewProp_NumberOfSpawnedNotifications,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetManager_Statics::ClassParams = {
		&UAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetManager()
	{
		if (!Z_Registration_Info_UClass_UAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetManager.OuterSingleton, Z_Construct_UClass_UAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetManager.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAssetManager>()
	{
		return UAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetManager);
	UAssetManager::~UAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetManager, UAssetManager::StaticClass, TEXT("UAssetManager"), &Z_Registration_Info_UClass_UAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetManager), 3413638953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_42200371(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
