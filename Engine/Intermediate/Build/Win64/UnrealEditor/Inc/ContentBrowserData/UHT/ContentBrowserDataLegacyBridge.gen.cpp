// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserDataLegacyBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserDataLegacyBridge() {}
// Cross Module References
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter;
class UScriptStruct* FContentBrowserDataLegacyFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("ContentBrowserDataLegacyFilter"));
	}
	return Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.OuterSingleton;
}
template<> CONTENTBROWSERDATA_API UScriptStruct* StaticStruct<FContentBrowserDataLegacyFilter>()
{
	return FContentBrowserDataLegacyFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Filter data used to provide legacy information to the asset data source */" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataLegacyBridge.h" },
		{ "ToolTip", "Filter data used to provide legacy information to the asset data source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContentBrowserDataLegacyFilter>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		&NewStructOps,
		"ContentBrowserDataLegacyFilter",
		sizeof(FContentBrowserDataLegacyFilter),
		alignof(FContentBrowserDataLegacyFilter),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.InnerSingleton, Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataLegacyBridge_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataLegacyBridge_h_Statics::ScriptStructInfo[] = {
		{ FContentBrowserDataLegacyFilter::StaticStruct, Z_Construct_UScriptStruct_FContentBrowserDataLegacyFilter_Statics::NewStructOps, TEXT("ContentBrowserDataLegacyFilter"), &Z_Registration_Info_UScriptStruct_ContentBrowserDataLegacyFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContentBrowserDataLegacyFilter), 2044611083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataLegacyBridge_h_591914813(TEXT("/Script/ContentBrowserData"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataLegacyBridge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataLegacyBridge_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
