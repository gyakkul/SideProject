// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXNameListItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXNameListItem() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNameListItem();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXNameListItem;
class UScriptStruct* FDMXNameListItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXNameListItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXNameListItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXNameListItem, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXNameListItem"));
	}
	return Z_Registration_Info_UScriptStruct_DMXNameListItem.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXNameListItem>()
{
	return FDMXNameListItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXNameListItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXNameListItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXNameListItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXNameListItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Label of the item this struct represents */" },
		{ "ModuleRelativePath", "Public/DMXNameListItem.h" },
		{ "ToolTip", "Label of the item this struct represents" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXNameListItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXNameListItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXNameListItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXNameListItem",
		sizeof(FDMXNameListItem),
		alignof(FDMXNameListItem),
		Z_Construct_UScriptStruct_FDMXNameListItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNameListItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXNameListItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNameListItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXNameListItem()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXNameListItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXNameListItem.InnerSingleton, Z_Construct_UScriptStruct_FDMXNameListItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXNameListItem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXNameListItem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXNameListItem_h_Statics::ScriptStructInfo[] = {
		{ FDMXNameListItem::StaticStruct, Z_Construct_UScriptStruct_FDMXNameListItem_Statics::NewStructOps, TEXT("DMXNameListItem"), &Z_Registration_Info_UScriptStruct_DMXNameListItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXNameListItem), 1932448996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXNameListItem_h_1979406127(TEXT("/Script/DMXProtocol"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXNameListItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXNameListItem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
