// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SnapshotVersion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotVersion() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotFileVersionInfo();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotVersionInfo();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo;
class UScriptStruct* FSnapshotFileVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotFileVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotFileVersionInfo>()
{
	return FSnapshotFileVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersionUE4_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileVersionUE4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersionUE5_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileVersionUE5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersionLicensee_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileVersionLicensee;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds file version information */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Holds file version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotFileVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE4_MetaData[] = {
		{ "Comment", "/* UE4 File version */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "UE4 File version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE4 = { "FileVersionUE4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotFileVersionInfo, FileVersionUE4), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData[] = {
		{ "Comment", "/* UE5 File version */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "UE5 File version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE5 = { "FileVersionUE5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotFileVersionInfo, FileVersionUE5), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData[] = {
		{ "Comment", "/* Licensee file version */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Licensee file version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionLicensee = { "FileVersionLicensee", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotFileVersionInfo, FileVersionLicensee), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionUE5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewProp_FileVersionLicensee,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotFileVersionInfo",
		sizeof(FSnapshotFileVersionInfo),
		alignof(FSnapshotFileVersionInfo),
		Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotFileVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo;
class UScriptStruct* FSnapshotEngineVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotEngineVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotEngineVersionInfo>()
{
	return FSnapshotEngineVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Major_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Major;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minor_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Minor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Patch_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Patch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Changelist_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Changelist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds engine version information */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Holds engine version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotEngineVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Major_MetaData[] = {
		{ "Comment", "/** Major version number */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Major version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotEngineVersionInfo, Major), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Major_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Major_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Minor_MetaData[] = {
		{ "Comment", "/** Minor version number */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Minor version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotEngineVersionInfo, Minor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Minor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Minor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Patch_MetaData[] = {
		{ "Comment", "/** Patch version number */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Patch version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotEngineVersionInfo, Patch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Patch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Patch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Changelist_MetaData[] = {
		{ "Comment", "/** Changelist number. This is used to arbitrate when Major/Minor/Patch version numbers match */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Changelist number. This is used to arbitrate when Major/Minor/Patch version numbers match" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotEngineVersionInfo, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Changelist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Patch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewProp_Changelist,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotEngineVersionInfo",
		sizeof(FSnapshotEngineVersionInfo),
		alignof(FSnapshotEngineVersionInfo),
		Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo;
class UScriptStruct* FSnapshotCustomVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotCustomVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotCustomVersionInfo>()
{
	return FSnapshotCustomVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds custom version information */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Holds custom version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotCustomVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Comment", "/** Friendly name of the version */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Friendly name of the version" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotCustomVersionInfo, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Comment", "/** Unique custom key */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Unique custom key" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotCustomVersionInfo, Key), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/** Custom version */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Custom version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotCustomVersionInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotCustomVersionInfo",
		sizeof(FSnapshotCustomVersionInfo),
		alignof(FSnapshotCustomVersionInfo),
		Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapshotVersionInfo;
class UScriptStruct* FSnapshotVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotVersionInfo, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("SnapshotVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FSnapshotVersionInfo>()
{
	return FSnapshotVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FileVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EngineVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomVersions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomVersions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomVersions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds version information for a session */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Holds version information for a session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_FileVersion_MetaData[] = {
		{ "Comment", "/** File version info */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "File version info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_FileVersion = { "FileVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotVersionInfo, FileVersion), Z_Construct_UScriptStruct_FSnapshotFileVersionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_FileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_FileVersion_MetaData)) }; // 3837273220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Comment", "/** Engine version info */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Engine version info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotVersionInfo, EngineVersion), Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_EngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_EngineVersion_MetaData)) }; // 4225985662
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions_Inner = { "CustomVersions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo, METADATA_PARAMS(nullptr, 0) }; // 2461307442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions_MetaData[] = {
		{ "Comment", "/** Custom version info */" },
		{ "ModuleRelativePath", "Public/Data/SnapshotVersion.h" },
		{ "ToolTip", "Custom version info" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions = { "CustomVersions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSnapshotVersionInfo, CustomVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions_MetaData)) }; // 2461307442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_FileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_EngineVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewProp_CustomVersions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"SnapshotVersionInfo",
		sizeof(FSnapshotVersionInfo),
		alignof(FSnapshotVersionInfo),
		Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SnapshotVersionInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotVersion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotVersion_h_Statics::ScriptStructInfo[] = {
		{ FSnapshotFileVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapshotFileVersionInfo_Statics::NewStructOps, TEXT("SnapshotFileVersionInfo"), &Z_Registration_Info_UScriptStruct_SnapshotFileVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotFileVersionInfo), 3837273220U) },
		{ FSnapshotEngineVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapshotEngineVersionInfo_Statics::NewStructOps, TEXT("SnapshotEngineVersionInfo"), &Z_Registration_Info_UScriptStruct_SnapshotEngineVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotEngineVersionInfo), 4225985662U) },
		{ FSnapshotCustomVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapshotCustomVersionInfo_Statics::NewStructOps, TEXT("SnapshotCustomVersionInfo"), &Z_Registration_Info_UScriptStruct_SnapshotCustomVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotCustomVersionInfo), 2461307442U) },
		{ FSnapshotVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapshotVersionInfo_Statics::NewStructOps, TEXT("SnapshotVersionInfo"), &Z_Registration_Info_UScriptStruct_SnapshotVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapshotVersionInfo), 472184872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotVersion_h_4200481797(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotVersion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_SnapshotVersion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
