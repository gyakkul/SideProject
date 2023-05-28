// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/TemplateMapInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateMapInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TemplateMapInfo;
class UScriptStruct* FTemplateMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TemplateMapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TemplateMapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTemplateMapInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("TemplateMapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TemplateMapInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FTemplateMapInfo>()
{
	return FTemplateMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTemplateMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used by new level dialog. */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "Used by new level dialog." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTemplateMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData[] = {
		{ "Comment", "/** The Texture2D associated with this map template */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "The Texture2D associated with this map template" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateMapInfo, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Comment", "/** The Texture associated with this map template */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "The Texture associated with this map template" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateMapInfo, Thumbnail), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.World" },
		{ "Comment", "/** The object path to the template map */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "The object path to the template map" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateMapInfo, Map), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Optional display name override for this map template  */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "Optional display name override for this map template" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateMapInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Category_MetaData[] = {
		{ "Comment", "/* Optional category used for sorting */" },
		{ "ModuleRelativePath", "Classes/Editor/TemplateMapInfo.h" },
		{ "ToolTip", "Optional category used for sorting" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTemplateMapInfo, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_ThumbnailTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Map,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewProp_Category,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"TemplateMapInfo",
		sizeof(FTemplateMapInfo),
		alignof(FTemplateMapInfo),
		Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTemplateMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TemplateMapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TemplateMapInfo.InnerSingleton, Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TemplateMapInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TemplateMapInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TemplateMapInfo_h_Statics::ScriptStructInfo[] = {
		{ FTemplateMapInfo::StaticStruct, Z_Construct_UScriptStruct_FTemplateMapInfo_Statics::NewStructOps, TEXT("TemplateMapInfo"), &Z_Registration_Info_UScriptStruct_TemplateMapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTemplateMapInfo), 779385839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TemplateMapInfo_h_2463486439(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TemplateMapInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TemplateMapInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
