// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserDataFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserDataFilter() {}
// Cross Module References
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataClassFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter;
	static UEnum* EContentBrowserItemTypeFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("EContentBrowserItemTypeFilter"));
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemTypeFilter>()
	{
		return EContentBrowserItemTypeFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enumerators[] = {
		{ "EContentBrowserItemTypeFilter::IncludeNone", (int64)EContentBrowserItemTypeFilter::IncludeNone },
		{ "EContentBrowserItemTypeFilter::IncludeFolders", (int64)EContentBrowserItemTypeFilter::IncludeFolders },
		{ "EContentBrowserItemTypeFilter::IncludeFiles", (int64)EContentBrowserItemTypeFilter::IncludeFiles },
		{ "EContentBrowserItemTypeFilter::IncludeAll", (int64)EContentBrowserItemTypeFilter::IncludeAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Flags controlling which item types should be included */" },
		{ "IncludeAll.Name", "EContentBrowserItemTypeFilter::IncludeAll" },
		{ "IncludeFiles.Name", "EContentBrowserItemTypeFilter::IncludeFiles" },
		{ "IncludeFolders.Name", "EContentBrowserItemTypeFilter::IncludeFolders" },
		{ "IncludeNone.Name", "EContentBrowserItemTypeFilter::IncludeNone" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item types should be included" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		"EContentBrowserItemTypeFilter",
		"EContentBrowserItemTypeFilter",
		Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.InnerSingleton, Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter;
	static UEnum* EContentBrowserItemCategoryFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("EContentBrowserItemCategoryFilter"));
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemCategoryFilter>()
	{
		return EContentBrowserItemCategoryFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enumerators[] = {
		{ "EContentBrowserItemCategoryFilter::IncludeNone", (int64)EContentBrowserItemCategoryFilter::IncludeNone },
		{ "EContentBrowserItemCategoryFilter::IncludeAssets", (int64)EContentBrowserItemCategoryFilter::IncludeAssets },
		{ "EContentBrowserItemCategoryFilter::IncludeClasses", (int64)EContentBrowserItemCategoryFilter::IncludeClasses },
		{ "EContentBrowserItemCategoryFilter::IncludeCollections", (int64)EContentBrowserItemCategoryFilter::IncludeCollections },
		{ "EContentBrowserItemCategoryFilter::IncludeMisc", (int64)EContentBrowserItemCategoryFilter::IncludeMisc },
		{ "EContentBrowserItemCategoryFilter::IncludeAll", (int64)EContentBrowserItemCategoryFilter::IncludeAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Flags controlling which item categories should be included */" },
		{ "IncludeAll.Name", "EContentBrowserItemCategoryFilter::IncludeAll" },
		{ "IncludeAssets.Name", "EContentBrowserItemCategoryFilter::IncludeAssets" },
		{ "IncludeClasses.Name", "EContentBrowserItemCategoryFilter::IncludeClasses" },
		{ "IncludeCollections.Name", "EContentBrowserItemCategoryFilter::IncludeCollections" },
		{ "IncludeMisc.Name", "EContentBrowserItemCategoryFilter::IncludeMisc" },
		{ "IncludeNone.Name", "EContentBrowserItemCategoryFilter::IncludeNone" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item categories should be included" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		"EContentBrowserItemCategoryFilter",
		"EContentBrowserItemCategoryFilter",
		Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.InnerSingleton, Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter;
	static UEnum* EContentBrowserItemAttributeFilter_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("EContentBrowserItemAttributeFilter"));
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemAttributeFilter>()
	{
		return EContentBrowserItemAttributeFilter_StaticEnum();
	}
	struct Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enumerators[] = {
		{ "EContentBrowserItemAttributeFilter::IncludeNone", (int64)EContentBrowserItemAttributeFilter::IncludeNone },
		{ "EContentBrowserItemAttributeFilter::IncludeProject", (int64)EContentBrowserItemAttributeFilter::IncludeProject },
		{ "EContentBrowserItemAttributeFilter::IncludeEngine", (int64)EContentBrowserItemAttributeFilter::IncludeEngine },
		{ "EContentBrowserItemAttributeFilter::IncludePlugins", (int64)EContentBrowserItemAttributeFilter::IncludePlugins },
		{ "EContentBrowserItemAttributeFilter::IncludeDeveloper", (int64)EContentBrowserItemAttributeFilter::IncludeDeveloper },
		{ "EContentBrowserItemAttributeFilter::IncludeLocalized", (int64)EContentBrowserItemAttributeFilter::IncludeLocalized },
		{ "EContentBrowserItemAttributeFilter::IncludeAll", (int64)EContentBrowserItemAttributeFilter::IncludeAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Flags controlling which item attributes should be included */" },
		{ "IncludeAll.Name", "EContentBrowserItemAttributeFilter::IncludeAll" },
		{ "IncludeDeveloper.Name", "EContentBrowserItemAttributeFilter::IncludeDeveloper" },
		{ "IncludeEngine.Name", "EContentBrowserItemAttributeFilter::IncludeEngine" },
		{ "IncludeLocalized.Name", "EContentBrowserItemAttributeFilter::IncludeLocalized" },
		{ "IncludeNone.Name", "EContentBrowserItemAttributeFilter::IncludeNone" },
		{ "IncludePlugins.Name", "EContentBrowserItemAttributeFilter::IncludePlugins" },
		{ "IncludeProject.Name", "EContentBrowserItemAttributeFilter::IncludeProject" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item attributes should be included" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		"EContentBrowserItemAttributeFilter",
		"EContentBrowserItemAttributeFilter",
		Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.InnerSingleton, Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter;
class UScriptStruct* FContentBrowserDataFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataFilter>()
{
	return FContentBrowserDataFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursivePaths_MetaData[];
#endif
		static void NewProp_bRecursivePaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursivePaths;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemTypeFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemTypeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemTypeFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemCategoryFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemCategoryFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemCategoryFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemAttributeFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemAttributeFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemAttributeFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A filter used to control what is returned from Content Browser data queries.\n * @note The compiled version of this, FContentBrowserDataCompiledFilter, is produced via UContentBrowserDataSubsystem::CompileFilter.\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "A filter used to control what is returned from Content Browser data queries.\n@note The compiled version of this, FContentBrowserDataCompiledFilter, is produced via UContentBrowserDataSubsystem::CompileFilter." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include sub-paths in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include sub-paths in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths_SetBit(void* Obj)
	{
		((FContentBrowserDataFilter*)Obj)->bRecursivePaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths = { "bRecursivePaths", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataFilter), &Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Flags controlling which item types should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item types should be included in this query" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter = { "ItemTypeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataFilter, ItemTypeFilter), Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemTypeFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter_MetaData)) }; // 377853413
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Flags controlling which item categories should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item categories should be included in this query" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter = { "ItemCategoryFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataFilter, ItemCategoryFilter), Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemCategoryFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter_MetaData)) }; // 142944526
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Flags controlling which item attributes should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Flags controlling which item attributes should be included in this query" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter = { "ItemAttributeFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataFilter, ItemAttributeFilter), Z_Construct_UEnum_ContentBrowserData_EContentBrowserItemAttributeFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter_MetaData)) }; // 3037559858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_bRecursivePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemTypeFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemCategoryFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewProp_ItemAttributeFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataFilter",
		sizeof(FContentBrowserDataFilter),
		alignof(FContentBrowserDataFilter),
		Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter;
class UScriptStruct* FContentBrowserDataObjectFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataObjectFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataObjectFilter>()
{
	return FContentBrowserDataObjectFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectNamesToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectNamesToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectNamesToInclude;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectNamesToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectNamesToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectNamesToExclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnDiskObjectsOnly_MetaData[];
#endif
		static void NewProp_bOnDiskObjectsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnDiskObjectsOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data used to filter object instances by their name and tags.\n * @note This will typically limit your query to returning assets.\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Data used to filter object instances by their name and tags.\n@note This will typically limit your query to returning assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataObjectFilter>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude_Inner = { "ObjectNamesToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of object names that should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of object names that should be included in this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude = { "ObjectNamesToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataObjectFilter, ObjectNamesToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude_Inner = { "ObjectNamesToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of object names that should be excluded from this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of object names that should be excluded from this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude = { "ObjectNamesToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataObjectFilter, ObjectNamesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should only include on-disk objects (ignoring those that exist only in memory) */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should only include on-disk objects (ignoring those that exist only in memory)" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly_SetBit(void* Obj)
	{
		((FContentBrowserDataObjectFilter*)Obj)->bOnDiskObjectsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly = { "bOnDiskObjectsOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataObjectFilter), &Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_ObjectNamesToExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewProp_bOnDiskObjectsOnly,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataObjectFilter",
		sizeof(FContentBrowserDataObjectFilter),
		alignof(FContentBrowserDataObjectFilter),
		Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter;
class UScriptStruct* FContentBrowserDataPackageFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataPackageFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataPackageFilter>()
{
	return FContentBrowserDataPackageFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageNamesToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNamesToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackageNamesToInclude;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageNamesToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageNamesToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackageNamesToExclude;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePathsToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePathsToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePathsToInclude;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackagePathsToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackagePathsToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackagePathsToExclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursivePackagePathsToInclude_MetaData[];
#endif
		static void NewProp_bRecursivePackagePathsToInclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursivePackagePathsToInclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursivePackagePathsToExclude_MetaData[];
#endif
		static void NewProp_bRecursivePackagePathsToExclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursivePackagePathsToExclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data used to filter object instances by their package.\n * @note This will typically limit your query to returning assets.\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Data used to filter object instances by their package.\n@note This will typically limit your query to returning assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataPackageFilter>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude_Inner = { "PackageNamesToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of package names that should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of package names that should be included in this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude = { "PackageNamesToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataPackageFilter, PackageNamesToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude_Inner = { "PackageNamesToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of package names that should be excluded from this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of package names that should be excluded from this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude = { "PackageNamesToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataPackageFilter, PackageNamesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude_Inner = { "PackagePathsToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of package paths that should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of package paths that should be included in this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude = { "PackagePathsToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataPackageFilter, PackagePathsToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude_Inner = { "PackagePathsToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of package paths that should be excluded from this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of package paths that should be excluded from this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude = { "PackagePathsToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataPackageFilter, PackagePathsToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include inclusive package sub-paths in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include inclusive package sub-paths in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude_SetBit(void* Obj)
	{
		((FContentBrowserDataPackageFilter*)Obj)->bRecursivePackagePathsToInclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude = { "bRecursivePackagePathsToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataPackageFilter), &Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include exclusive package sub-paths in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include exclusive package sub-paths in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude_SetBit(void* Obj)
	{
		((FContentBrowserDataPackageFilter*)Obj)->bRecursivePackagePathsToExclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude = { "bRecursivePackagePathsToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataPackageFilter), &Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackageNamesToExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_PackagePathsToExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewProp_bRecursivePackagePathsToExclude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataPackageFilter",
		sizeof(FContentBrowserDataPackageFilter),
		alignof(FContentBrowserDataPackageFilter),
		Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter;
class UScriptStruct* FContentBrowserDataClassFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataClassFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataClassFilter>()
{
	return FContentBrowserDataClassFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassNamesToInclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNamesToInclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNamesToInclude;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClassNamesToExclude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassNamesToExclude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassNamesToExclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursiveClassNamesToInclude_MetaData[];
#endif
		static void NewProp_bRecursiveClassNamesToInclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursiveClassNamesToInclude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursiveClassNamesToExclude_MetaData[];
#endif
		static void NewProp_bRecursiveClassNamesToExclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursiveClassNamesToExclude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data used to filter object instances by their class.\n * @note This will typically limit your query to returning assets.\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Data used to filter object instances by their class.\n@note This will typically limit your query to returning assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataClassFilter>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude_Inner = { "ClassNamesToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of class names that should be included in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of class names that should be included in this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude = { "ClassNamesToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataClassFilter, ClassNamesToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude_Inner = { "ClassNamesToExclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Array of class names that should be excluded from this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Array of class names that should be excluded from this query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude = { "ClassNamesToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FContentBrowserDataClassFilter, ClassNamesToExclude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include inclusive sub-classes in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include inclusive sub-classes in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude_SetBit(void* Obj)
	{
		((FContentBrowserDataClassFilter*)Obj)->bRecursiveClassNamesToInclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude = { "bRecursiveClassNamesToInclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataClassFilter), &Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include exclusive sub-classes in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include exclusive sub-classes in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude_SetBit(void* Obj)
	{
		((FContentBrowserDataClassFilter*)Obj)->bRecursiveClassNamesToExclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude = { "bRecursiveClassNamesToExclude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataClassFilter), &Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_ClassNamesToExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToInclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewProp_bRecursiveClassNamesToExclude,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataClassFilter",
		sizeof(FContentBrowserDataClassFilter),
		alignof(FContentBrowserDataClassFilter),
		Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataClassFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter;
class UScriptStruct* FContentBrowserDataCollectionFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataCollectionFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataCollectionFilter>()
{
	return FContentBrowserDataCollectionFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChildCollections_MetaData[];
#endif
		static void NewProp_bIncludeChildCollections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildCollections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Data used to filter items by their collection.\n * @note This will typically limit your query to items that support being inside a collection.\n */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Data used to filter items by their collection.\n@note This will typically limit your query to items that support being inside a collection." },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataCollectionFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "/** Whether we should include child collections in this query */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataFilter.h" },
		{ "ToolTip", "Whether we should include child collections in this query" },
	};
#endif
	void Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections_SetBit(void* Obj)
	{
		((FContentBrowserDataCollectionFilter*)Obj)->bIncludeChildCollections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections = { "bIncludeChildCollections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FContentBrowserDataCollectionFilter), &Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewProp_bIncludeChildCollections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataCollectionFilter",
		sizeof(FContentBrowserDataCollectionFilter),
		alignof(FContentBrowserDataCollectionFilter),
		Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::EnumInfo[] = {
		{ EContentBrowserItemTypeFilter_StaticEnum, TEXT("EContentBrowserItemTypeFilter"), &Z_Registration_Info_UEnum_EContentBrowserItemTypeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377853413U) },
		{ EContentBrowserItemCategoryFilter_StaticEnum, TEXT("EContentBrowserItemCategoryFilter"), &Z_Registration_Info_UEnum_EContentBrowserItemCategoryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 142944526U) },
		{ EContentBrowserItemAttributeFilter_StaticEnum, TEXT("EContentBrowserItemAttributeFilter"), &Z_Registration_Info_UEnum_EContentBrowserItemAttributeFilter, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3037559858U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserDataFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics::NewStructOps, TEXT("ContentBrowserDataFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataFilter), 3676905636U) },
		{ FContentBrowserDataObjectFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics::NewStructOps, TEXT("ContentBrowserDataObjectFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataObjectFilter), 2942020192U) },
		{ FContentBrowserDataPackageFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics::NewStructOps, TEXT("ContentBrowserDataPackageFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataPackageFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataPackageFilter), 2634364984U) },
		{ FContentBrowserDataClassFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics::NewStructOps, TEXT("ContentBrowserDataClassFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataClassFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataClassFilter), 2061042446U) },
		{ FContentBrowserDataCollectionFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics::NewStructOps, TEXT("ContentBrowserDataCollectionFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataCollectionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataCollectionFilter), 265617156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_793824646(TEXT("/Script/ContentBrowserData"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
