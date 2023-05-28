// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/HashSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHashSettings() {}
// Cross Module References
	LEVELSNAPSHOTS_API UEnum* Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FHashSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior;
	static UEnum* EHashAlgorithmChooseBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("EHashAlgorithmChooseBehavior"));
		}
		return Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<EHashAlgorithmChooseBehavior::Type>()
	{
		return EHashAlgorithmChooseBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enumerators[] = {
		{ "EHashAlgorithmChooseBehavior::UseFastest", (int64)EHashAlgorithmChooseBehavior::UseFastest },
		{ "EHashAlgorithmChooseBehavior::UseCrc32", (int64)EHashAlgorithmChooseBehavior::UseCrc32 },
		{ "EHashAlgorithmChooseBehavior::UseMD5", (int64)EHashAlgorithmChooseBehavior::UseMD5 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "UseCrc32.Comment", "/**\n\x09\x09 * Always use CRC32 (only works if CRC32 is enabled)\n\x09\x09 */" },
		{ "UseCrc32.Name", "EHashAlgorithmChooseBehavior::UseCrc32" },
		{ "UseCrc32.ToolTip", "Always use CRC32 (only works if CRC32 is enabled)" },
		{ "UseFastest.Comment", "/**\n\x09\x09 * Use whichever algorithm is faster\n\x09\x09 */" },
		{ "UseFastest.Name", "EHashAlgorithmChooseBehavior::UseFastest" },
		{ "UseFastest.ToolTip", "Use whichever algorithm is faster" },
		{ "UseMD5.Comment", "/**\n\x09\x09 * Always use MD5 (only works if MD5 is enabled)\n\x09\x09 */" },
		{ "UseMD5.Name", "EHashAlgorithmChooseBehavior::UseMD5" },
		{ "UseMD5.ToolTip", "Always use MD5 (only works if MD5 is enabled)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		"EHashAlgorithmChooseBehavior",
		"EHashAlgorithmChooseBehavior::Type",
		Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior()
	{
		if (!Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.InnerSingleton, Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HashSettings;
class UScriptStruct* FHashSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HashSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HashSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHashSettings, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("HashSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HashSettings.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FHashSettings>()
{
	return FHashSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHashSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashCutoffSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_HashCutoffSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHashForLoading_MetaData[];
#endif
		static void NewProp_bUseHashForLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHashForLoading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseCRC_MetaData[];
#endif
		static void NewProp_bCanUseCRC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseCRC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseMD5_MetaData[];
#endif
		static void NewProp_bCanUseMD5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseMD5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotDiffAlgorithm_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SnapshotDiffAlgorithm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHashSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHashSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_HashCutoffSeconds_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Performance trade-off. Used when filtering a snapshot.\n\x09 * \n\x09 * For filtering, we need to load every actor into memory. Loading actors takes a long time.\n\x09 * Instead when a snapshot is taken, we compute its hash. When filtering, we can recompute the hash using the actor\n\x09 * in the editor world. If they match, we can skip loading the saved actor data.\n\x09 *\n\x09 * For most actors, it takes about 600 micro seconds to compute a hash. However, there are outliers which can take\n\x09 * more. For such actors, it can be faster to just load the saved actor data into memory.\n\x09 *\n\x09 * Actors for which hashing took more than this configured variable, we skip hashing altogether and immediately load\n\x09 * the actor data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "ToolTip", "Performance trade-off. Used when filtering a snapshot.\n\nFor filtering, we need to load every actor into memory. Loading actors takes a long time.\nInstead when a snapshot is taken, we compute its hash. When filtering, we can recompute the hash using the actor\nin the editor world. If they match, we can skip loading the saved actor data.\n\nFor most actors, it takes about 600 micro seconds to compute a hash. However, there are outliers which can take\nmore. For such actors, it can be faster to just load the saved actor data into memory.\n\nActors for which hashing took more than this configured variable, we skip hashing altogether and immediately load\nthe actor data." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_HashCutoffSeconds = { "HashCutoffSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHashSettings, HashCutoffSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_HashCutoffSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_HashCutoffSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Whether to compare world actor's to its saved hash when loading a snapshot. Boosts performance. */" },
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "ToolTip", "Whether to compare world actor's to its saved hash when loading a snapshot. Boosts performance." },
	};
#endif
	void Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading_SetBit(void* Obj)
	{
		((FHashSettings*)Obj)->bUseHashForLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading = { "bUseHashForLoading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHashSettings), &Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Whether Level Snapshots will compute CRC32 hashes (when taking and analysing snapshots)\n\x09 * Speed: CRC32 < MD5 < SHA1.\n\x09 *\n\x09 * Disabling this option results in:\n\x09 *  1. Taking a snapshot will be faster (CRC32 will no longer be computed when snapshot is taken)\n\x09 *  2. When loading a snapshot, CRC32 is no longer available to quickly check whether an actor has changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "ToolTip", "Whether Level Snapshots will compute CRC32 hashes (when taking and analysing snapshots)\nSpeed: CRC32 < MD5 < SHA1.\n\nDisabling this option results in:\n 1. Taking a snapshot will be faster (CRC32 will no longer be computed when snapshot is taken)\n 2. When loading a snapshot, CRC32 is no longer available to quickly check whether an actor has changed." },
	};
#endif
	void Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC_SetBit(void* Obj)
	{
		((FHashSettings*)Obj)->bCanUseCRC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC = { "bCanUseCRC", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHashSettings), &Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/**\n\x09 * Whether Level Snapshots will compute MD5 hashes (when taking and analysing snapshots).\n\x09 * Speed: CRC32 < MD5 < SHA1.\n\x09 *\n\x09 * Disabling this option results in:\n\x09 *  1. Taking a snapshot will be faster (MD5 will no longer be computed when snapshot is taken)\n\x09 *  2. When loading a snapshot, MD5 is no longer available to quickly check whether an actor has changed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "ToolTip", "Whether Level Snapshots will compute MD5 hashes (when taking and analysing snapshots).\nSpeed: CRC32 < MD5 < SHA1.\n\nDisabling this option results in:\n 1. Taking a snapshot will be faster (MD5 will no longer be computed when snapshot is taken)\n 2. When loading a snapshot, MD5 is no longer available to quickly check whether an actor has changed." },
	};
#endif
	void Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5_SetBit(void* Obj)
	{
		((FHashSettings*)Obj)->bCanUseMD5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5 = { "bCanUseMD5", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHashSettings), &Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_SnapshotDiffAlgorithm_MetaData[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Which hash algorithm to use when comparing a snapshot to the world. */" },
		{ "ModuleRelativePath", "Public/Settings/HashSettings.h" },
		{ "ToolTip", "Which hash algorithm to use when comparing a snapshot to the world." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_SnapshotDiffAlgorithm = { "SnapshotDiffAlgorithm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHashSettings, SnapshotDiffAlgorithm), Z_Construct_UEnum_LevelSnapshots_EHashAlgorithmChooseBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_SnapshotDiffAlgorithm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_SnapshotDiffAlgorithm_MetaData)) }; // 1446352093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHashSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_HashCutoffSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bUseHashForLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseCRC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_bCanUseMD5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHashSettings_Statics::NewProp_SnapshotDiffAlgorithm,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHashSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"HashSettings",
		sizeof(FHashSettings),
		alignof(FHashSettings),
		Z_Construct_UScriptStruct_FHashSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHashSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHashSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHashSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HashSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HashSettings.InnerSingleton, Z_Construct_UScriptStruct_FHashSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HashSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::EnumInfo[] = {
		{ EHashAlgorithmChooseBehavior_StaticEnum, TEXT("EHashAlgorithmChooseBehavior"), &Z_Registration_Info_UEnum_EHashAlgorithmChooseBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1446352093U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::ScriptStructInfo[] = {
		{ FHashSettings::StaticStruct, Z_Construct_UScriptStruct_FHashSettings_Statics::NewStructOps, TEXT("HashSettings"), &Z_Registration_Info_UScriptStruct_HashSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHashSettings), 409608737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_2787810456(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
