// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertVersion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertVersion() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertCustomVersionInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEngineVersionInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertFileVersionInfo();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionVersionInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_Concert();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo;
class UScriptStruct* FConcertFileVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertFileVersionInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertFileVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertFileVersionInfo>()
{
	return FConcertFileVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FileVersion;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds file version information */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Holds file version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertFileVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersion_MetaData[] = {
		{ "Comment", "/* UE4 File version */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "UE4 File version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersion = { "FileVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertFileVersionInfo, FileVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData[] = {
		{ "Comment", "/* UE5 File version */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "UE5 File version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionUE5 = { "FileVersionUE5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertFileVersionInfo, FileVersionUE5), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionUE5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData[] = {
		{ "Comment", "/* Licensee file version */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Licensee file version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionLicensee = { "FileVersionLicensee", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertFileVersionInfo, FileVersionLicensee), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionLicensee_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionUE5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewProp_FileVersionLicensee,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertFileVersionInfo",
		sizeof(FConcertFileVersionInfo),
		alignof(FConcertFileVersionInfo),
		Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertFileVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo;
class UScriptStruct* FConcertEngineVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertEngineVersionInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertEngineVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertEngineVersionInfo>()
{
	return FConcertEngineVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds engine version information */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Holds engine version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertEngineVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Major_MetaData[] = {
		{ "Comment", "/** Major version number */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Major version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEngineVersionInfo, Major), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Major_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Major_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Minor_MetaData[] = {
		{ "Comment", "/** Minor version number */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Minor version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEngineVersionInfo, Minor), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Minor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Minor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Patch_MetaData[] = {
		{ "Comment", "/** Patch version number */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Patch version number" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEngineVersionInfo, Patch), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Patch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Patch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Changelist_MetaData[] = {
		{ "Comment", "/** Changelist number. This is used to arbitrate when Major/Minor/Patch version numbers match */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Changelist number. This is used to arbitrate when Major/Minor/Patch version numbers match" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Changelist = { "Changelist", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEngineVersionInfo, Changelist), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Changelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Changelist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Patch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewProp_Changelist,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertEngineVersionInfo",
		sizeof(FConcertEngineVersionInfo),
		alignof(FConcertEngineVersionInfo),
		Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertEngineVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo;
class UScriptStruct* FConcertCustomVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertCustomVersionInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertCustomVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertCustomVersionInfo>()
{
	return FConcertCustomVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds custom version information */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Holds custom version information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertCustomVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Comment", "/** Friendly name of the version */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Friendly name of the version" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCustomVersionInfo, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Comment", "/** Unique custom key */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Unique custom key" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCustomVersionInfo, Key), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Version_MetaData[] = {
		{ "Comment", "/** Custom version */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Custom version" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertCustomVersionInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertCustomVersionInfo",
		sizeof(FConcertCustomVersionInfo),
		alignof(FConcertCustomVersionInfo),
		Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertCustomVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo;
class UScriptStruct* FConcertSessionVersionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionVersionInfo, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionVersionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionVersionInfo>()
{
	return FConcertSessionVersionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds version information for a session */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Holds version information for a session" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionVersionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_FileVersion_MetaData[] = {
		{ "Comment", "/** File version info */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "File version info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_FileVersion = { "FileVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionVersionInfo, FileVersion), Z_Construct_UScriptStruct_FConcertFileVersionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_FileVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_FileVersion_MetaData)) }; // 1879961175
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Comment", "/** Engine version info */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Engine version info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionVersionInfo, EngineVersion), Z_Construct_UScriptStruct_FConcertEngineVersionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_EngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_EngineVersion_MetaData)) }; // 1160357988
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions_Inner = { "CustomVersions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConcertCustomVersionInfo, METADATA_PARAMS(nullptr, 0) }; // 1626327538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions_MetaData[] = {
		{ "Comment", "/** Custom version info */" },
		{ "ModuleRelativePath", "Public/ConcertVersion.h" },
		{ "ToolTip", "Custom version info" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions = { "CustomVersions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionVersionInfo, CustomVersions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions_MetaData)) }; // 1626327538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_FileVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_EngineVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewProp_CustomVersions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionVersionInfo",
		sizeof(FConcertSessionVersionInfo),
		alignof(FConcertSessionVersionInfo),
		Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionVersionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertVersion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertVersion_h_Statics::ScriptStructInfo[] = {
		{ FConcertFileVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertFileVersionInfo_Statics::NewStructOps, TEXT("ConcertFileVersionInfo"), &Z_Registration_Info_UScriptStruct_ConcertFileVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertFileVersionInfo), 1879961175U) },
		{ FConcertEngineVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertEngineVersionInfo_Statics::NewStructOps, TEXT("ConcertEngineVersionInfo"), &Z_Registration_Info_UScriptStruct_ConcertEngineVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertEngineVersionInfo), 1160357988U) },
		{ FConcertCustomVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertCustomVersionInfo_Statics::NewStructOps, TEXT("ConcertCustomVersionInfo"), &Z_Registration_Info_UScriptStruct_ConcertCustomVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertCustomVersionInfo), 1626327538U) },
		{ FConcertSessionVersionInfo::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionVersionInfo_Statics::NewStructOps, TEXT("ConcertSessionVersionInfo"), &Z_Registration_Info_UScriptStruct_ConcertSessionVersionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionVersionInfo), 1164273605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertVersion_h_4084683119(TEXT("/Script/Concert"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertVersion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertVersion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
