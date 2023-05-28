// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookerStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookerStats() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATSVIEWER_API UClass* Z_Construct_UClass_UCookerStats();
	STATSVIEWER_API UClass* Z_Construct_UClass_UCookerStats_NoRegister();
	STATSVIEWER_API UEnum* Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets();
	UPackage* Z_Construct_UPackage__Script_StatsViewer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECookerStatsObjectSets;
	static UEnum* ECookerStatsObjectSets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECookerStatsObjectSets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECookerStatsObjectSets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets, (UObject*)Z_Construct_UPackage__Script_StatsViewer(), TEXT("ECookerStatsObjectSets"));
		}
		return Z_Registration_Info_UEnum_ECookerStatsObjectSets.OuterSingleton;
	}
	template<> STATSVIEWER_API UEnum* StaticEnum<ECookerStatsObjectSets>()
	{
		return ECookerStatsObjectSets_StaticEnum();
	}
	struct Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enumerators[] = {
		{ "CookerStatsObjectSets_Default", (int64)CookerStatsObjectSets_Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum defining the object sets for this stats object */" },
		{ "CookerStatsObjectSets_Default.DisplayName", "Default" },
		{ "CookerStatsObjectSets_Default.Name", "CookerStatsObjectSets_Default" },
		{ "CookerStatsObjectSets_Default.ToolTip", "View cooker statistics" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ToolTip", "Enum defining the object sets for this stats object" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StatsViewer,
		nullptr,
		"ECookerStatsObjectSets",
		"ECookerStatsObjectSets",
		Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets()
	{
		if (!Z_Registration_Info_UEnum_ECookerStatsObjectSets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECookerStatsObjectSets.InnerSingleton, Z_Construct_UEnum_StatsViewer_ECookerStatsObjectSets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECookerStatsObjectSets.InnerSingleton;
	}
	void UCookerStats::StaticRegisterNativesUCookerStats()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookerStats);
	UClass* Z_Construct_UClass_UCookerStats_NoRegister()
	{
		return UCookerStats::StaticClass();
	}
	struct Z_Construct_UClass_UCookerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeBefore_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeBefore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeAfter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeAfter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Statistics for a cooked asset.\n *\n * Note: We assume that asset files are not larger than 2GB, because the StatsViewer is still lacking int64 support.\n */" },
		{ "DisplayName", "Cooker Stats" },
		{ "IncludePath", "CookerStats.h" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ObjectSetType", "ECookerStatsObjectSets" },
		{ "ToolTip", "Statistics for a cooked asset.\n\nNote: We assume that asset files are not larger than 2GB, because the StatsViewer is still lacking int64 support." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "100" },
		{ "Comment", "/** The assets contained in the file. */" },
		{ "DisplayName", "Asset(s)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ToolTip", "The assets contained in the file." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0014010000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerStats, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** The size of the assets before cooking. */" },
		{ "DisplayName", "Size (Original)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The size of the assets before cooking." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore = { "SizeBefore", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerStats, SizeBefore), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "50" },
		{ "Comment", "/** The size of the assets after cooking. */" },
		{ "DisplayName", "Size (Cooked)" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ShowTotal", "true" },
		{ "ToolTip", "The size of the assets after cooking." },
		{ "Unit", "KB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter = { "SizeAfter", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerStats, SizeAfter), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Stats" },
		{ "ColumnWidth", "300" },
		{ "Comment", "/** Asset path without the name \"package.[group.]\" */" },
		{ "ModuleRelativePath", "Classes/CookerStats.h" },
		{ "ToolTip", "Asset path without the name \"package.[group.]\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCookerStats_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCookerStats, Path), METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCookerStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_SizeAfter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCookerStats_Statics::NewProp_Path,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookerStats>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookerStats_Statics::ClassParams = {
		&UCookerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCookerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::PropPointers),
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookerStats()
	{
		if (!Z_Registration_Info_UClass_UCookerStats.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookerStats.OuterSingleton, Z_Construct_UClass_UCookerStats_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookerStats.OuterSingleton;
	}
	template<> STATSVIEWER_API UClass* StaticClass<UCookerStats>()
	{
		return UCookerStats::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookerStats);
	UCookerStats::~UCookerStats() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::EnumInfo[] = {
		{ ECookerStatsObjectSets_StaticEnum, TEXT("ECookerStatsObjectSets"), &Z_Registration_Info_UEnum_ECookerStatsObjectSets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1143178373U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookerStats, UCookerStats::StaticClass, TEXT("UCookerStats"), &Z_Registration_Info_UClass_UCookerStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookerStats), 3585207138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_4123436496(TEXT("/Script/StatsViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
