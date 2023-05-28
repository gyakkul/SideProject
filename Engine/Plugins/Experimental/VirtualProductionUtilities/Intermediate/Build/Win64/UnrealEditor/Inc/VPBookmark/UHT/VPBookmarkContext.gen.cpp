// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmarkContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmarkContext() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VPBookmark();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkCreationContext();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext;
class UScriptStruct* FVPBookmarkCreationContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPBookmarkCreationContext, (UObject*)Z_Construct_UPackage__Script_VPBookmark(), TEXT("VPBookmarkCreationContext"));
	}
	return Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.OuterSingleton;
}
template<> VPBOOKMARK_API UScriptStruct* StaticStruct<FVPBookmarkCreationContext>()
{
	return FVPBookmarkCreationContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcertCreator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConcertCreator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPBookmarkCreationContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_ConcertCreator_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "Comment", "/** Username of the Concert client who is creating this bookmark. */" },
		{ "ModuleRelativePath", "Public/VPBookmarkContext.h" },
		{ "ToolTip", "Username of the Concert client who is creating this bookmark." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_ConcertCreator = { "ConcertCreator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkCreationContext, ConcertCreator), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_ConcertCreator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_ConcertCreator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "Comment", "/** Category of the Bookmark */" },
		{ "ModuleRelativePath", "Public/VPBookmarkContext.h" },
		{ "ToolTip", "Category of the Bookmark" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkCreationContext, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "Comment", "/** Name of the Bookmark */" },
		{ "ModuleRelativePath", "Public/VPBookmarkContext.h" },
		{ "ToolTip", "Name of the Bookmark" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkCreationContext, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_ConcertCreator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
		nullptr,
		&NewStructOps,
		"VPBookmarkCreationContext",
		sizeof(FVPBookmarkCreationContext),
		alignof(FVPBookmarkCreationContext),
		Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkCreationContext()
	{
		if (!Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.InnerSingleton, Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkContext_h_Statics::ScriptStructInfo[] = {
		{ FVPBookmarkCreationContext::StaticStruct, Z_Construct_UScriptStruct_FVPBookmarkCreationContext_Statics::NewStructOps, TEXT("VPBookmarkCreationContext"), &Z_Registration_Info_UScriptStruct_VPBookmarkCreationContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPBookmarkCreationContext), 821625362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkContext_h_2867206878(TEXT("/Script/VPBookmark"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
