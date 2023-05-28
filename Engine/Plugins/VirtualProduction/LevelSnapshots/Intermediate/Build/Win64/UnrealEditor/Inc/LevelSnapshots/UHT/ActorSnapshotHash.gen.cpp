// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ActorSnapshotHash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSnapshotHash() {}
// Cross Module References
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotHash();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSnapshotHash;
class UScriptStruct* FActorSnapshotHash::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSnapshotHash.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSnapshotHash.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSnapshotHash, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ActorSnapshotHash"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSnapshotHash.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FActorSnapshotHash>()
{
	return FActorSnapshotHash::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSnapshotHash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MicroSecondsForCrc_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MicroSecondsForCrc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MicroSecondsForMD5_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MicroSecondsForMD5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crc32DataLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Crc32DataLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MD5DataLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MD5DataLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crc32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Crc32;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Every actor is hashed when it is saved so we can quickly check whether an actor has changed. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "Every actor is hashed when it is saved so we can quickly check whether an actor has changed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSnapshotHash>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForCrc_MetaData[] = {
		{ "Comment", "/**\n\x09 * How many micro seconds it took to compute the actor CRC32 during saving. Used when loading actors.\n\x09 * If the hash time is excessively high, it is more efficient simply to load the actor. Configured in project settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "How many micro seconds it took to compute the actor CRC32 during saving. Used when loading actors.\nIf the hash time is excessively high, it is more efficient simply to load the actor. Configured in project settings." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForCrc = { "MicroSecondsForCrc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotHash, MicroSecondsForCrc), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForCrc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForCrc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForMD5_MetaData[] = {
		{ "Comment", "/** How many micro seconds it took to compute the MD5 hash. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "How many micro seconds it took to compute the MD5 hash." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForMD5 = { "MicroSecondsForMD5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotHash, MicroSecondsForMD5), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForMD5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForMD5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32DataLength_MetaData[] = {
		{ "Comment", "/** How many bytes of data were in the data were used for CRC32. Used to avoid computing hash. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "How many bytes of data were in the data were used for CRC32. Used to avoid computing hash." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32DataLength = { "Crc32DataLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotHash, Crc32DataLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32DataLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32DataLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MD5DataLength_MetaData[] = {
		{ "Comment", "/** How many bytes of data were in the data were used for MD5. Used to avoid computing hash. */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "How many bytes of data were in the data were used for MD5. Used to avoid computing hash." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MD5DataLength = { "MD5DataLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotHash, MD5DataLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MD5DataLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MD5DataLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32_MetaData[] = {
		{ "Comment", "/**\n\x09 * Crc32 hash of actor when it was snapshot. Used to check for changes without loading actor. Sometimes MD5 is faster.\n\x09 * Cost is 0.0003s on \"average\" actors, like world settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/ActorSnapshotHash.h" },
		{ "ToolTip", "Crc32 hash of actor when it was snapshot. Used to check for changes without loading actor. Sometimes MD5 is faster.\nCost is 0.0003s on \"average\" actors, like world settings." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32 = { "Crc32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorSnapshotHash, Crc32), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForCrc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MicroSecondsForMD5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32DataLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_MD5DataLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewProp_Crc32,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ActorSnapshotHash",
		sizeof(FActorSnapshotHash),
		alignof(FActorSnapshotHash),
		Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSnapshotHash()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorSnapshotHash.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSnapshotHash.InnerSingleton, Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSnapshotHash.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotHash_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotHash_h_Statics::ScriptStructInfo[] = {
		{ FActorSnapshotHash::StaticStruct, Z_Construct_UScriptStruct_FActorSnapshotHash_Statics::NewStructOps, TEXT("ActorSnapshotHash"), &Z_Registration_Info_UScriptStruct_ActorSnapshotHash, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSnapshotHash), 4254594790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotHash_h_895282314(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ActorSnapshotHash_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
