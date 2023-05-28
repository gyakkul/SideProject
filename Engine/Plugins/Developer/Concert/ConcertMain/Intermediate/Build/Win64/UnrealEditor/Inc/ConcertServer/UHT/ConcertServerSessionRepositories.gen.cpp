// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ConcertServerSessionRepositories.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertServerSessionRepositories() {}
// Cross Module References
	CONCERTSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSessionRepository();
	CONCERTSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertServer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository;
class UScriptStruct* FConcertServerSessionRepository::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertServerSessionRepository, (UObject*)Z_Construct_UPackage__Script_ConcertServer(), TEXT("ConcertServerSessionRepository"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.OuterSingleton;
}
template<> CONCERTSERVER_API UScriptStruct* StaticStruct<FConcertServerSessionRepository>()
{
	return FConcertServerSessionRepository::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositoryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepositoryId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositoryRootDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RepositoryRootDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavedDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMounted_MetaData[];
#endif
		static void NewProp_bMounted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMounted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Keep the information about a the session repository. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "Keep the information about a the session repository." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertServerSessionRepository>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryId_MetaData[] = {
		{ "Comment", "/** The repository id.*/" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "The repository id." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryId = { "RepositoryId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepository, RepositoryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryRootDir_MetaData[] = {
		{ "Comment", "/** The repository root directory. Can be empty is the working/archive dir are not stored in a standard repository. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "The repository root directory. Can be empty is the working/archive dir are not stored in a standard repository." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryRootDir = { "RepositoryRootDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepository, RepositoryRootDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryRootDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryRootDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_WorkingDir_MetaData[] = {
		{ "Comment", "/** This repository working directory. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "This repository working directory." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_WorkingDir = { "WorkingDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepository, WorkingDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_WorkingDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_WorkingDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_SavedDir_MetaData[] = {
		{ "Comment", "/** This repository saving directory. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "This repository saving directory." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_SavedDir = { "SavedDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepository, SavedDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_SavedDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_SavedDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_ProcessId_MetaData[] = {
		{ "Comment", "/** The server process ID that mounted the workspace if bMounted is true. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "The server process ID that mounted the workspace if bMounted is true." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_ProcessId = { "ProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepository, ProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_ProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_ProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted_MetaData[] = {
		{ "Comment", "/** Whether the workspace is mounted on a server.*/" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "Whether the workspace is mounted on a server." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted_SetBit(void* Obj)
	{
		((FConcertServerSessionRepository*)Obj)->bMounted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted = { "bMounted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertServerSessionRepository), &Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_RepositoryRootDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_WorkingDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_SavedDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_ProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewProp_bMounted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertServer,
		nullptr,
		&NewStructOps,
		"ConcertServerSessionRepository",
		sizeof(FConcertServerSessionRepository),
		alignof(FConcertServerSessionRepository),
		Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSessionRepository()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.InnerSingleton, Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase;
class UScriptStruct* FConcertServerSessionRepositoryDatabase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase, (UObject*)Z_Construct_UPackage__Script_ConcertServer(), TEXT("ConcertServerSessionRepositoryDatabase"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.OuterSingleton;
}
template<> CONCERTSERVER_API UScriptStruct* StaticStruct<FConcertServerSessionRepositoryDatabase>()
{
	return FConcertServerSessionRepositoryDatabase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Repositories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Repositories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Repositories;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Tracks the session repositories across the server instances. */" },
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
		{ "ToolTip", "Tracks the session repositories across the server instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertServerSessionRepositoryDatabase>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories_Inner = { "Repositories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertServerSessionRepository, METADATA_PARAMS(nullptr, 0) }; // 400307660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories_MetaData[] = {
		{ "ModuleRelativePath", "Private/ConcertServerSessionRepositories.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories = { "Repositories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSessionRepositoryDatabase, Repositories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories_MetaData)) }; // 400307660
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewProp_Repositories,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertServer,
		nullptr,
		&NewStructOps,
		"ConcertServerSessionRepositoryDatabase",
		sizeof(FConcertServerSessionRepositoryDatabase),
		alignof(FConcertServerSessionRepositoryDatabase),
		Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.InnerSingleton, Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Private_ConcertServerSessionRepositories_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Private_ConcertServerSessionRepositories_h_Statics::ScriptStructInfo[] = {
		{ FConcertServerSessionRepository::StaticStruct, Z_Construct_UScriptStruct_FConcertServerSessionRepository_Statics::NewStructOps, TEXT("ConcertServerSessionRepository"), &Z_Registration_Info_UScriptStruct_ConcertServerSessionRepository, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertServerSessionRepository), 400307660U) },
		{ FConcertServerSessionRepositoryDatabase::StaticStruct, Z_Construct_UScriptStruct_FConcertServerSessionRepositoryDatabase_Statics::NewStructOps, TEXT("ConcertServerSessionRepositoryDatabase"), &Z_Registration_Info_UScriptStruct_ConcertServerSessionRepositoryDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertServerSessionRepositoryDatabase), 833171833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Private_ConcertServerSessionRepositories_h_216075241(TEXT("/Script/ConcertServer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Private_ConcertServerSessionRepositories_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Private_ConcertServerSessionRepositories_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
