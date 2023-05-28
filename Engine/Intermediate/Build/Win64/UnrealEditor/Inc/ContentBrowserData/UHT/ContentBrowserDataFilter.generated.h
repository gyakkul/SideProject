// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContentBrowserDataFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONTENTBROWSERDATA_ContentBrowserDataFilter_generated_h
#error "ContentBrowserDataFilter.generated.h already included, missing '#pragma once' in ContentBrowserDataFilter.h"
#endif
#define CONTENTBROWSERDATA_ContentBrowserDataFilter_generated_h

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserDataFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserDataFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserDataObjectFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserDataObjectFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_234_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserDataPackageFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserDataPackageFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserDataClassFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserDataClassFilter>();

#define FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContentBrowserDataCollectionFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<struct FContentBrowserDataCollectionFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataFilter_h


#define FOREACH_ENUM_ECONTENTBROWSERITEMTYPEFILTER(op) \
	op(EContentBrowserItemTypeFilter::IncludeNone) \
	op(EContentBrowserItemTypeFilter::IncludeFolders) \
	op(EContentBrowserItemTypeFilter::IncludeFiles) \
	op(EContentBrowserItemTypeFilter::IncludeAll) 

enum class EContentBrowserItemTypeFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemTypeFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemTypeFilter>();

#define FOREACH_ENUM_ECONTENTBROWSERITEMCATEGORYFILTER(op) \
	op(EContentBrowserItemCategoryFilter::IncludeNone) \
	op(EContentBrowserItemCategoryFilter::IncludeAssets) \
	op(EContentBrowserItemCategoryFilter::IncludeClasses) \
	op(EContentBrowserItemCategoryFilter::IncludeCollections) \
	op(EContentBrowserItemCategoryFilter::IncludeMisc) \
	op(EContentBrowserItemCategoryFilter::IncludeAll) 

enum class EContentBrowserItemCategoryFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemCategoryFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemCategoryFilter>();

#define FOREACH_ENUM_ECONTENTBROWSERITEMATTRIBUTEFILTER(op) \
	op(EContentBrowserItemAttributeFilter::IncludeNone) \
	op(EContentBrowserItemAttributeFilter::IncludeProject) \
	op(EContentBrowserItemAttributeFilter::IncludeEngine) \
	op(EContentBrowserItemAttributeFilter::IncludePlugins) \
	op(EContentBrowserItemAttributeFilter::IncludeDeveloper) \
	op(EContentBrowserItemAttributeFilter::IncludeLocalized) \
	op(EContentBrowserItemAttributeFilter::IncludeAll) 

enum class EContentBrowserItemAttributeFilter : uint8;
template<> struct TIsUEnumClass<EContentBrowserItemAttributeFilter> { enum { Value = true }; };
template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserItemAttributeFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
