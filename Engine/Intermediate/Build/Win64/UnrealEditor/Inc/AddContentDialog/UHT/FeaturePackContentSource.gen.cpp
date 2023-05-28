// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FeaturePackContentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFeaturePackContentSource() {}
// Cross Module References
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeatureAdditionalFiles();
	ADDCONTENTDIALOG_API UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet();
	UPackage* Z_Construct_UPackage__Script_AddContentDialog();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFeaturePackDetailLevel;
	static UEnum* EFeaturePackDetailLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFeaturePackDetailLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFeaturePackDetailLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, (UObject*)Z_Construct_UPackage__Script_AddContentDialog(), TEXT("EFeaturePackDetailLevel"));
		}
		return Z_Registration_Info_UEnum_EFeaturePackDetailLevel.OuterSingleton;
	}
	template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EFeaturePackDetailLevel>()
	{
		return EFeaturePackDetailLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enumerators[] = {
		{ "EFeaturePackDetailLevel::Standard", (int64)EFeaturePackDetailLevel::Standard },
		{ "EFeaturePackDetailLevel::High", (int64)EFeaturePackDetailLevel::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines categories for shared template resource levels. */" },
		{ "High.Name", "EFeaturePackDetailLevel::High" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "Standard.Name", "EFeaturePackDetailLevel::Standard" },
		{ "ToolTip", "Defines categories for shared template resource levels." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		"EFeaturePackDetailLevel",
		"EFeaturePackDetailLevel",
		Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel()
	{
		if (!Z_Registration_Info_UEnum_EFeaturePackDetailLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFeaturePackDetailLevel.InnerSingleton, Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFeaturePackDetailLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FeaturePackLevelSet;
class UScriptStruct* FFeaturePackLevelSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeaturePackLevelSet, (UObject*)Z_Construct_UPackage__Script_AddContentDialog(), TEXT("FeaturePackLevelSet"));
	}
	return Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.OuterSingleton;
}
template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<FFeaturePackLevelSet>()
{
	return FFeaturePackLevelSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailLevels_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetailLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetailLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MountName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Structure that defines a shared feature pack resource. */" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Structure that defines a shared feature pack resource." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeaturePackLevelSet>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner = { "DetailLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AddContentDialog_EFeaturePackDetailLevel, METADATA_PARAMS(nullptr, 0) }; // 3243622207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData[] = {
		{ "Comment", "/* List of shared resource levels for this shared resource.*/" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "List of shared resource levels for this shared resource." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels = { "DetailLevels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeaturePackLevelSet, DetailLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_MetaData)) }; // 3243622207
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData[] = {
		{ "Comment", "/* Mount name for the shared resource - this is the folder the resource will be copied to on project generation as well as the name of the folder that will appear in the content browser. */" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Mount name for the shared resource - this is the folder the resource will be copied to on project generation as well as the name of the folder that will appear in the content browser." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName = { "MountName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeaturePackLevelSet, MountName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_DetailLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewProp_MountName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		&NewStructOps,
		"FeaturePackLevelSet",
		sizeof(FFeaturePackLevelSet),
		alignof(FFeaturePackLevelSet),
		Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeaturePackLevelSet()
	{
		if (!Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.InnerSingleton, Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FeaturePackLevelSet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles;
class UScriptStruct* FFeatureAdditionalFiles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFeatureAdditionalFiles, (UObject*)Z_Construct_UPackage__Script_AddContentDialog(), TEXT("FeatureAdditionalFiles"));
	}
	return Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.OuterSingleton;
}
template<> ADDCONTENTDIALOG_API UScriptStruct* StaticStruct<FFeatureAdditionalFiles>()
{
	return FFeatureAdditionalFiles::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFilesFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DestinationFilesFolder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalFilesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalFilesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalFilesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Structure that defines a shared feature pack resource. */" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Structure that defines a shared feature pack resource." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFeatureAdditionalFiles>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData[] = {
		{ "Comment", "/* Name of the folder to insert the files to */" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "Name of the folder to insert the files to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder = { "DestinationFilesFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeatureAdditionalFiles, DestinationFilesFolder), METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_Inner = { "AdditionalFilesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData[] = {
		{ "Comment", "/* List of files to insert */" },
		{ "ModuleRelativePath", "Public/FeaturePackContentSource.h" },
		{ "ToolTip", "List of files to insert" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList = { "AdditionalFilesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFeatureAdditionalFiles, AdditionalFilesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_DestinationFilesFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewProp_AdditionalFilesList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		&NewStructOps,
		"FeatureAdditionalFiles",
		sizeof(FFeatureAdditionalFiles),
		alignof(FFeatureAdditionalFiles),
		Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFeatureAdditionalFiles()
	{
		if (!Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.InnerSingleton, Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::EnumInfo[] = {
		{ EFeaturePackDetailLevel_StaticEnum, TEXT("EFeaturePackDetailLevel"), &Z_Registration_Info_UEnum_EFeaturePackDetailLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3243622207U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::ScriptStructInfo[] = {
		{ FFeaturePackLevelSet::StaticStruct, Z_Construct_UScriptStruct_FFeaturePackLevelSet_Statics::NewStructOps, TEXT("FeaturePackLevelSet"), &Z_Registration_Info_UScriptStruct_FeaturePackLevelSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeaturePackLevelSet), 81034129U) },
		{ FFeatureAdditionalFiles::StaticStruct, Z_Construct_UScriptStruct_FFeatureAdditionalFiles_Statics::NewStructOps, TEXT("FeatureAdditionalFiles"), &Z_Registration_Info_UScriptStruct_FeatureAdditionalFiles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFeatureAdditionalFiles), 1419069425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_1300049083(TEXT("/Script/AddContentDialog"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Public_FeaturePackContentSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
