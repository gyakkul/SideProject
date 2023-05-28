// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/AssetFilterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetFilterData() {}
// Cross Module References
	ASSETDEFINITION_API UScriptStruct* Z_Construct_UScriptStruct_FAssetFilterData();
	UPackage* Z_Construct_UPackage__Script_AssetDefinition();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetFilterData;
class UScriptStruct* FAssetFilterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetFilterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetFilterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetFilterData, (UObject*)Z_Construct_UPackage__Script_AssetDefinition(), TEXT("AssetFilterData"));
	}
	return Z_Registration_Info_UScriptStruct_AssetFilterData.OuterSingleton;
}
template<> ASSETDEFINITION_API UScriptStruct* StaticStruct<FAssetFilterData>()
{
	return FAssetFilterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetFilterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetFilterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Misc/AssetFilterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetFilterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetFilterData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetFilterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetDefinition,
		nullptr,
		&NewStructOps,
		"AssetFilterData",
		sizeof(FAssetFilterData),
		alignof(FAssetFilterData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetFilterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetFilterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetFilterData()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetFilterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetFilterData.InnerSingleton, Z_Construct_UScriptStruct_FAssetFilterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetFilterData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_Misc_AssetFilterData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_Misc_AssetFilterData_h_Statics::ScriptStructInfo[] = {
		{ FAssetFilterData::StaticStruct, Z_Construct_UScriptStruct_FAssetFilterData_Statics::NewStructOps, TEXT("AssetFilterData"), &Z_Registration_Info_UScriptStruct_AssetFilterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetFilterData), 2986173924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_Misc_AssetFilterData_h_2788164819(TEXT("/Script/AssetDefinition"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_Misc_AssetFilterData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AssetDefinition_Public_Misc_AssetFilterData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
