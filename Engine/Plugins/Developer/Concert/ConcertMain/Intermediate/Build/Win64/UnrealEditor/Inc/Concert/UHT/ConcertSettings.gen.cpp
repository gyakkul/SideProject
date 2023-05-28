// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertSettings() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSettings();
	UPackage* Z_Construct_UPackage__Script_Concert();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSessionSettings;
class UScriptStruct* FConcertSessionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSessionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSessionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSessionSettings, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertSessionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSessionSettings.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertSessionSettings>()
{
	return FConcertSessionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSessionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRevision_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BaseRevision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArchiveNameOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSessionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/**\n\x09 * Name of the project of the session.\n\x09 * Can be specified on the server cmd with `-CONCERTPROJECT=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSettings.h" },
		{ "ToolTip", "Name of the project of the session.\nCan be specified on the server cmd with `-CONCERTPROJECT=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSettings, ProjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ProjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ProjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_BaseRevision_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/**\n\x09 * Base Revision the session was created at.\n\x09 * Can be specified on the server cmd with `-CONCERTREVISION=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSettings.h" },
		{ "ToolTip", "Base Revision the session was created at.\nCan be specified on the server cmd with `-CONCERTREVISION=`" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_BaseRevision = { "BaseRevision", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSettings, BaseRevision), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_BaseRevision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_BaseRevision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ArchiveNameOverride_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/**\n\x09 * Override the default name chosen when archiving this session.\n\x09 * Can be specified on the server cmd with `-CONCERTSAVESESSIONAS=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertSettings.h" },
		{ "ToolTip", "Override the default name chosen when archiving this session.\nCan be specified on the server cmd with `-CONCERTSAVESESSIONAS=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ArchiveNameOverride = { "ArchiveNameOverride", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSessionSettings, ArchiveNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ArchiveNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ArchiveNameOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ProjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_BaseRevision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewProp_ArchiveNameOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertSessionSettings",
		sizeof(FConcertSessionSettings),
		alignof(FConcertSessionSettings),
		Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSessionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSessionSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSessionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertSettings_h_Statics::ScriptStructInfo[] = {
		{ FConcertSessionSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertSessionSettings_Statics::NewStructOps, TEXT("ConcertSessionSettings"), &Z_Registration_Info_UScriptStruct_ConcertSessionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSessionSettings), 2384793603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertSettings_h_3127312434(TEXT("/Script/Concert"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
