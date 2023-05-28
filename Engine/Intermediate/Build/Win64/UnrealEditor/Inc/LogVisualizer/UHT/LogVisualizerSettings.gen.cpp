// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Public/LogVisualizerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogVisualizerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSettings();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSettings_NoRegister();
	LOGVISUALIZER_API UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter();
	LOGVISUALIZER_API UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters();
	LOGVISUALIZER_API UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFiltersData();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CategoryFilter;
class UScriptStruct* FCategoryFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CategoryFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CategoryFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategoryFilter, (UObject*)Z_Construct_UPackage__Script_LogVisualizer(), TEXT("CategoryFilter"));
	}
	return Z_Registration_Info_UScriptStruct_CategoryFilter.OuterSingleton;
}
template<> LOGVISUALIZER_API UScriptStruct* StaticStruct<FCategoryFilter>()
{
	return FCategoryFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCategoryFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogVerbosity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LogVerbosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCategoryFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCategoryFilter, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_LogVerbosity_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_LogVerbosity = { "LogVerbosity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCategoryFilter, LogVerbosity), METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_LogVerbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_LogVerbosity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FCategoryFilter*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCategoryFilter), &Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCategoryFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_LogVerbosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewProp_Enabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCategoryFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
		nullptr,
		&NewStructOps,
		"CategoryFilter",
		sizeof(FCategoryFilter),
		alignof(FCategoryFilter),
		Z_Construct_UScriptStruct_FCategoryFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCategoryFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_CategoryFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CategoryFilter.InnerSingleton, Z_Construct_UScriptStruct_FCategoryFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CategoryFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData;
class UScriptStruct* FVisualLoggerFiltersData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisualLoggerFiltersData, (UObject*)Z_Construct_UPackage__Script_LogVisualizer(), TEXT("VisualLoggerFiltersData"));
	}
	return Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.OuterSingleton;
}
template<> LOGVISUALIZER_API UScriptStruct* StaticStruct<FVisualLoggerFiltersData>()
{
	return FVisualLoggerFiltersData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchBoxFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchBoxFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectNameFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectNameFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisualLoggerFiltersData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SearchBoxFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SearchBoxFilter = { "SearchBoxFilter", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVisualLoggerFiltersData, SearchBoxFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SearchBoxFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SearchBoxFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_ObjectNameFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_ObjectNameFilter = { "ObjectNameFilter", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVisualLoggerFiltersData, ObjectNameFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_ObjectNameFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_ObjectNameFilter_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCategoryFilter, METADATA_PARAMS(nullptr, 0) }; // 417706946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVisualLoggerFiltersData, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories_MetaData)) }; // 417706946
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses_Inner = { "SelectedClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses = { "SelectedClasses", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVisualLoggerFiltersData, SelectedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SearchBoxFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_ObjectNameFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_Categories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewProp_SelectedClasses,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
		nullptr,
		&NewStructOps,
		"VisualLoggerFiltersData",
		sizeof(FVisualLoggerFiltersData),
		alignof(FVisualLoggerFiltersData),
		Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFiltersData()
	{
		if (!Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.InnerSingleton, Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVisualLoggerFilters>() == std::is_polymorphic<FVisualLoggerFiltersData>(), "USTRUCT FVisualLoggerFilters cannot be polymorphic unless super FVisualLoggerFiltersData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VisualLoggerFilters;
class UScriptStruct* FVisualLoggerFilters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VisualLoggerFilters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VisualLoggerFilters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVisualLoggerFilters, (UObject*)Z_Construct_UPackage__Script_LogVisualizer(), TEXT("VisualLoggerFilters"));
	}
	return Z_Registration_Info_UScriptStruct_VisualLoggerFilters.OuterSingleton;
}
template<> LOGVISUALIZER_API UScriptStruct* StaticStruct<FVisualLoggerFilters>()
{
	return FVisualLoggerFilters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVisualLoggerFilters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
		Z_Construct_UScriptStruct_FVisualLoggerFiltersData,
		&NewStructOps,
		"VisualLoggerFilters",
		sizeof(FVisualLoggerFilters),
		alignof(FVisualLoggerFilters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVisualLoggerFilters()
	{
		if (!Z_Registration_Info_UScriptStruct_VisualLoggerFilters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VisualLoggerFilters.InnerSingleton, Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VisualLoggerFilters.InnerSingleton;
	}
	void ULogVisualizerSettings::StaticRegisterNativesULogVisualizerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogVisualizerSettings);
	UClass* Z_Construct_UClass_ULogVisualizerSettings_NoRegister()
	{
		return ULogVisualizerSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULogVisualizerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTrivialLogs_MetaData[];
#endif
		static void NewProp_bIgnoreTrivialLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTrivialLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrivialLogsThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrivialLogsThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStickToRecentData_MetaData[];
#endif
		static void NewProp_bStickToRecentData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStickToRecentData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetDataWithNewSession_MetaData[];
#endif
		static void NewProp_bResetDataWithNewSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetDataWithNewSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHistogramLabelsOutside_MetaData[];
#endif
		static void NewProp_bShowHistogramLabelsOutside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHistogramLabelsOutside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCameraDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchInsideLogs_MetaData[];
#endif
		static void NewProp_bSearchInsideLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchInsideLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFilterVolumes_MetaData[];
#endif
		static void NewProp_bUseFilterVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFilterVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphsBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphsBackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPersistentFilters_MetaData[];
#endif
		static void NewProp_bPersistentFilters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPersistentFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawExtremesOnGraphs_MetaData[];
#endif
		static void NewProp_bDrawExtremesOnGraphs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawExtremesOnGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainGraphToLocalMinMax_MetaData[];
#endif
		static void NewProp_bConstrainGraphToLocalMinMax_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainGraphToLocalMinMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlayersOnlyForPause_MetaData[];
#endif
		static void NewProp_bUsePlayersOnlyForPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlayersOnlyForPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogNavOctreeOnStop_MetaData[];
#endif
		static void NewProp_bLogNavOctreeOnStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNavOctreeOnStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUniqueLogNames_MetaData[];
#endif
		static void NewProp_bForceUniqueLogNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUniqueLogNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentFilters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PersistentFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterialFakeLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugMeshMaterialFakeLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMeshMaterialFakeLightName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMeshMaterialFakeLightName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogVisualizerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LogVisualizerSettings.h" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to show trivial logs, i.e. the ones with only one entry.*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to show trivial logs, i.e. the ones with only one entry." },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bIgnoreTrivialLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs = { "bIgnoreTrivialLogs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_TrivialLogsThreshold_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Threshold for trivial Logs*/" },
		{ "EditCondition", "bIgnoreTrivialLogs" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Threshold for trivial Logs" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_TrivialLogsThreshold = { "TrivialLogsThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, TrivialLogsThreshold), METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_TrivialLogsThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_TrivialLogsThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to show the recent data or not. Property disabled for now.*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to show the recent data or not. Property disabled for now." },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bStickToRecentData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData = { "bStickToRecentData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to reset current data or not for each new session.*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to reset current data or not for each new session." },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bResetDataWithNewSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession = { "bResetDataWithNewSession", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to show histogram labels inside graph or outside. Property disabled for now.*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to show histogram labels inside graph or outside. Property disabled for now." },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bShowHistogramLabelsOutside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside = { "bShowHistogramLabelsOutside", nullptr, (EPropertyFlags)0x0010000000024001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DefaultCameraDistance_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10" },
		{ "Comment", "/** Camera distance used to setup location during reaction on log item double click */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Camera distance used to setup location during reaction on log item double click" },
		{ "UIMax", "1000" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DefaultCameraDistance = { "DefaultCameraDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, DefaultCameraDistance), METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DefaultCameraDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DefaultCameraDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to search/filter categories or to get text vlogs into account too */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to search/filter categories or to get text vlogs into account too" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bSearchInsideLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs = { "bSearchInsideLogs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Whether to only show events occuring within one of visual logger filter volumes currently in the level */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to only show events occuring within one of visual logger filter volumes currently in the level" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bUseFilterVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes = { "bUseFilterVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_GraphsBackgroundColor_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Background color for 2d graphs visualization */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Background color for 2d graphs visualization" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_GraphsBackgroundColor = { "GraphsBackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, GraphsBackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_GraphsBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_GraphsBackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to store all filter settings on exit*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to store all filter settings on exit" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bPersistentFilters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters = { "bPersistentFilters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Whether to extreme values on graph (data has to be provided for extreme values) */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to extreme values on graph (data has to be provided for extreme values)" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bDrawExtremesOnGraphs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs = { "bDrawExtremesOnGraphs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Graphs will be scaled around local Min/Max values (values being displayed) rather than all historic data */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Graphs will be scaled around local Min/Max values (values being displayed) rather than all historic data" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bConstrainGraphToLocalMinMax = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax = { "bConstrainGraphToLocalMinMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Whether to use PlayersOnly during Pause or not */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to use PlayersOnly during Pause or not" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bUsePlayersOnlyForPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause = { "bUsePlayersOnlyForPause", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** Whether to dump Navigation Octree on Stop recording or not */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "Whether to dump Navigation Octree on Stop recording or not" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bLogNavOctreeOnStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop = { "bLogNavOctreeOnStop", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/** controls how we generate log names. When set to TRUE there's a lot lower \n\x09 *\x09""chance of name conflict, but it's more expensive */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "controls how we generate log names. When set to TRUE there's a lot lower\n    chance of name conflict, but it's more expensive" },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames_SetBit(void* Obj)
	{
		((ULogVisualizerSettings*)Obj)->bForceUniqueLogNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames = { "bForceUniqueLogNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSettings), &Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_PersistentFilters_MetaData[] = {
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_PersistentFilters = { "PersistentFilters", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, PersistentFilters), Z_Construct_UScriptStruct_FVisualLoggerFiltersData, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_PersistentFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_PersistentFilters_MetaData)) }; // 2032110399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLight_MetaData[] = {
		{ "Comment", "/** A material used to render debug meshes with kind of flat shading, mostly used by Visual Logger tool. */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "A material used to render debug meshes with kind of flat shading, mostly used by Visual Logger tool." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLight = { "DebugMeshMaterialFakeLight", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, DebugMeshMaterialFakeLight), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLightName_MetaData[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Public/LogVisualizerSettings.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLightName = { "DebugMeshMaterialFakeLightName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogVisualizerSettings, DebugMeshMaterialFakeLightName), METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLightName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLightName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogVisualizerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bIgnoreTrivialLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_TrivialLogsThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bStickToRecentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bResetDataWithNewSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bShowHistogramLabelsOutside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DefaultCameraDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bSearchInsideLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUseFilterVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_GraphsBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bPersistentFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bDrawExtremesOnGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bConstrainGraphToLocalMinMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bUsePlayersOnlyForPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bLogNavOctreeOnStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_bForceUniqueLogNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_PersistentFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSettings_Statics::NewProp_DebugMeshMaterialFakeLightName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogVisualizerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogVisualizerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogVisualizerSettings_Statics::ClassParams = {
		&ULogVisualizerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULogVisualizerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogVisualizerSettings()
	{
		if (!Z_Registration_Info_UClass_ULogVisualizerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogVisualizerSettings.OuterSingleton, Z_Construct_UClass_ULogVisualizerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogVisualizerSettings.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<ULogVisualizerSettings>()
	{
		return ULogVisualizerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogVisualizerSettings);
	ULogVisualizerSettings::~ULogVisualizerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ScriptStructInfo[] = {
		{ FCategoryFilter::StaticStruct, Z_Construct_UScriptStruct_FCategoryFilter_Statics::NewStructOps, TEXT("CategoryFilter"), &Z_Registration_Info_UScriptStruct_CategoryFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCategoryFilter), 417706946U) },
		{ FVisualLoggerFiltersData::StaticStruct, Z_Construct_UScriptStruct_FVisualLoggerFiltersData_Statics::NewStructOps, TEXT("VisualLoggerFiltersData"), &Z_Registration_Info_UScriptStruct_VisualLoggerFiltersData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisualLoggerFiltersData), 2032110399U) },
		{ FVisualLoggerFilters::StaticStruct, Z_Construct_UScriptStruct_FVisualLoggerFilters_Statics::NewStructOps, TEXT("VisualLoggerFilters"), &Z_Registration_Info_UScriptStruct_VisualLoggerFilters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVisualLoggerFilters), 256764485U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogVisualizerSettings, ULogVisualizerSettings::StaticClass, TEXT("ULogVisualizerSettings"), &Z_Registration_Info_UClass_ULogVisualizerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogVisualizerSettings), 2766917457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_867634895(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
