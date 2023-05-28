// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyWeightmapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyWeightmapSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings;
class UScriptStruct* FWaterBodyWeightmapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBodyWeightmapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBodyWeightmapSettings>()
{
	return FWaterBodyWeightmapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModulationTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Midpoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Midpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyWeightmapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FalloffWidth_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ClampMin", "0.1" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FalloffWidth = { "FalloffWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, FalloffWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FalloffWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FalloffWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_EdgeOffset_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_EdgeOffset = { "EdgeOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, EdgeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_EdgeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_EdgeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_ModulationTexture_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_ModulationTexture = { "ModulationTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, ModulationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_ModulationTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_ModulationTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureTiling_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureTiling = { "TextureTiling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, TextureTiling), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureInfluence_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureInfluence = { "TextureInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, TextureInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_Midpoint_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_Midpoint = { "Midpoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, Midpoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_Midpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_Midpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FinalOpacity_MetaData[] = {
		{ "Category", "WaterBodyWeightmapSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyWeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FinalOpacity = { "FinalOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyWeightmapSettings, FinalOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FinalOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FinalOpacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FalloffWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_EdgeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_ModulationTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_TextureInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_Midpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewProp_FinalOpacity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBodyWeightmapSettings",
		sizeof(FWaterBodyWeightmapSettings),
		alignof(FWaterBodyWeightmapSettings),
		Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyWeightmapSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyWeightmapSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaterBodyWeightmapSettings::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings_Statics::NewStructOps, TEXT("WaterBodyWeightmapSettings"), &Z_Registration_Info_UScriptStruct_WaterBodyWeightmapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyWeightmapSettings), 1437509207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyWeightmapSettings_h_72645133(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyWeightmapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyWeightmapSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
