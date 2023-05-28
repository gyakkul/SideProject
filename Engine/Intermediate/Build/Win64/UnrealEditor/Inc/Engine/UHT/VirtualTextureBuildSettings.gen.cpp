// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/VirtualTextureBuildSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTextureBuildSettings() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings;
class UScriptStruct* FVirtualTextureBuildSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureBuildSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureBuildSettings>()
{
	return FVirtualTextureBuildSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Build settings used for virtual textures. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
		{ "ToolTip", "Build settings used for virtual textures." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureBuildSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTextureBuildSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureBuildSettings, TileBorderSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewProp_TileBorderSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualTextureBuildSettings",
		sizeof(FVirtualTextureBuildSettings),
		alignof(FVirtualTextureBuildSettings),
		Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureBuildSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton, Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics::ScriptStructInfo[] = {
		{ FVirtualTextureBuildSettings::StaticStruct, Z_Construct_UScriptStruct_FVirtualTextureBuildSettings_Statics::NewStructOps, TEXT("VirtualTextureBuildSettings"), &Z_Registration_Info_UScriptStruct_VirtualTextureBuildSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualTextureBuildSettings), 3248024453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_1358086471(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTextureBuildSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
