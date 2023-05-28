// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepObjectSelectionFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepObjectSelectionFilter() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepFilterNoFetcher();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepObjectSelectionFilter();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepObjectSelectionFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepObjectSelectionFilter::StaticRegisterNativesUDataprepObjectSelectionFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepObjectSelectionFilter);
	UClass* Z_Construct_UClass_UDataprepObjectSelectionFilter_NoRegister()
	{
		return UDataprepObjectSelectionFilter::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedObjectPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjectPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjectPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAssets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActors_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepFilterNoFetcher,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Selection" },
		{ "Hidden", "" },
		{ "HideCategories", "Filter" },
		{ "IncludePath", "SelectionSystem/DataprepObjectSelectionFilter.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepObjectSelectionFilter.h" },
		{ "ToolTip", "Filter selected objects" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths_Inner = { "SelectedObjectPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths_MetaData[] = {
		{ "Comment", "// Partial paths of objects.\n// For assets, the transient part is cutoff (as it changes between runs), \n// for actors, the path up to level outer is cutoff (in case level name changes between runs)\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepObjectSelectionFilter.h" },
		{ "ToolTip", "Partial paths of objects.\nFor assets, the transient part is cutoff (as it changes between runs),\nfor actors, the path up to level outer is cutoff (in case level name changes between runs)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths = { "SelectedObjectPaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepObjectSelectionFilter, SelectedObjectPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepObjectSelectionFilter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumAssets = { "NumAssets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepObjectSelectionFilter, NumAssets), METADATA_PARAMS(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepObjectSelectionFilter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumActors = { "NumActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepObjectSelectionFilter, NumActors), METADATA_PARAMS(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumActors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames_Inner = { "CachedNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames_MetaData[] = {
		{ "Comment", "// Cache some of the names of selected objects, up to some limit, for preview purpose\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepObjectSelectionFilter.h" },
		{ "ToolTip", "Cache some of the names of selected objects, up to some limit, for preview purpose" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames = { "CachedNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepObjectSelectionFilter, CachedNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_SelectedObjectPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_NumActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::NewProp_CachedNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepObjectSelectionFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::ClassParams = {
		&UDataprepObjectSelectionFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepObjectSelectionFilter()
	{
		if (!Z_Registration_Info_UClass_UDataprepObjectSelectionFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepObjectSelectionFilter.OuterSingleton, Z_Construct_UClass_UDataprepObjectSelectionFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepObjectSelectionFilter.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepObjectSelectionFilter>()
	{
		return UDataprepObjectSelectionFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepObjectSelectionFilter);
	UDataprepObjectSelectionFilter::~UDataprepObjectSelectionFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepObjectSelectionFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepObjectSelectionFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepObjectSelectionFilter, UDataprepObjectSelectionFilter::StaticClass, TEXT("UDataprepObjectSelectionFilter"), &Z_Registration_Info_UClass_UDataprepObjectSelectionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepObjectSelectionFilter), 4158804822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepObjectSelectionFilter_h_181103558(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepObjectSelectionFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepObjectSelectionFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
