// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothTetherData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothTetherData() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothTetherData();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothTetherData;
class UScriptStruct* FClothTetherData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothTetherData, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("ClothTetherData"));
	}
	return Z_Registration_Info_UScriptStruct_ClothTetherData.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FClothTetherData>()
{
	return FClothTetherData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothTetherData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothTetherData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Long range attachment tether pathfinding based on Dijkstra's algorithm.\n * For more information about the long range attachment, see:\n * https://matthias-research.github.io/pages/publications/sca2012cloth.pdf\n */" },
		{ "ModuleRelativePath", "Public/ClothTetherData.h" },
		{ "ToolTip", "Long range attachment tether pathfinding based on Dijkstra's algorithm.\nFor more information about the long range attachment, see:\nhttps://matthias-research.github.io/pages/publications/sca2012cloth.pdf" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothTetherData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothTetherData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothTetherData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"ClothTetherData",
		sizeof(FClothTetherData),
		alignof(FClothTetherData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothTetherData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothTetherData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothTetherData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton, Z_Construct_UScriptStruct_FClothTetherData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothTetherData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics::ScriptStructInfo[] = {
		{ FClothTetherData::StaticStruct, Z_Construct_UScriptStruct_FClothTetherData_Statics::NewStructOps, TEXT("ClothTetherData"), &Z_Registration_Info_UScriptStruct_ClothTetherData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothTetherData), 3504463721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_2301946870(TEXT("/Script/ClothingSystemRuntimeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothTetherData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
