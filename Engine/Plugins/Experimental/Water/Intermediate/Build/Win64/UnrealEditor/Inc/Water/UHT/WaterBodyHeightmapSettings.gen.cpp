// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterBrushEffects.h"
#include "WaterFalloffSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyHeightmapSettings() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UEnum* Z_Construct_UEnum_Water_EWaterBrushBlendType();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushEffects();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterFalloffSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaterBrushBlendType;
	static UEnum* EWaterBrushBlendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaterBrushBlendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaterBrushBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Water_EWaterBrushBlendType, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("EWaterBrushBlendType"));
		}
		return Z_Registration_Info_UEnum_EWaterBrushBlendType.OuterSingleton;
	}
	template<> WATER_API UEnum* StaticEnum<EWaterBrushBlendType>()
	{
		return EWaterBrushBlendType_StaticEnum();
	}
	struct Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enumerators[] = {
		{ "EWaterBrushBlendType::AlphaBlend", (int64)EWaterBrushBlendType::AlphaBlend },
		{ "EWaterBrushBlendType::Min", (int64)EWaterBrushBlendType::Min },
		{ "EWaterBrushBlendType::Max", (int64)EWaterBrushBlendType::Max },
		{ "EWaterBrushBlendType::Additive", (int64)EWaterBrushBlendType::Additive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Performs an additive blend, using a flat Z=0 terrain as the input. Useful when you want to preserve underlying detail or ramps. */" },
		{ "Additive.Name", "EWaterBrushBlendType::Additive" },
		{ "Additive.ToolTip", "Performs an additive blend, using a flat Z=0 terrain as the input. Useful when you want to preserve underlying detail or ramps." },
		{ "AlphaBlend.Comment", "/** Alpha Blend will affect the heightmap both upwards and downwards. */" },
		{ "AlphaBlend.Name", "EWaterBrushBlendType::AlphaBlend" },
		{ "AlphaBlend.ToolTip", "Alpha Blend will affect the heightmap both upwards and downwards." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The blend mode changes how the brush material is applied to the terrain. */" },
		{ "Max.Comment", "/** Limits the brush to only raising the terrain. */" },
		{ "Max.Name", "EWaterBrushBlendType::Max" },
		{ "Max.ToolTip", "Limits the brush to only raising the terrain." },
		{ "Min.Comment", "/** Limits the brush to only lowering the terrain. */" },
		{ "Min.Name", "EWaterBrushBlendType::Min" },
		{ "Min.ToolTip", "Limits the brush to only lowering the terrain." },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
		{ "ToolTip", "The blend mode changes how the brush material is applied to the terrain." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		"EWaterBrushBlendType",
		"EWaterBrushBlendType",
		Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Water_EWaterBrushBlendType()
	{
		if (!Z_Registration_Info_UEnum_EWaterBrushBlendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaterBrushBlendType.InnerSingleton, Z_Construct_UEnum_Water_EWaterBrushBlendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaterBrushBlendType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings;
class UScriptStruct* FWaterBodyHeightmapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("WaterBodyHeightmapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FWaterBodyHeightmapSettings>()
{
	return FWaterBodyHeightmapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertShape_MetaData[];
#endif
		static void NewProp_bInvertShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyHeightmapSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyHeightmapSettings, BlendMode), Z_Construct_UEnum_Water_EWaterBrushBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode_MetaData)) }; // 752467926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape_SetBit(void* Obj)
	{
		((FWaterBodyHeightmapSettings*)Obj)->bInvertShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape = { "bInvertShape", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWaterBodyHeightmapSettings), &Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_FalloffSettings_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_FalloffSettings = { "FalloffSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyHeightmapSettings, FalloffSettings), Z_Construct_UScriptStruct_FWaterFalloffSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_FalloffSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_FalloffSettings_MetaData)) }; // 4094740673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyHeightmapSettings, Effects), Z_Construct_UScriptStruct_FWaterBrushEffects, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Effects_MetaData)) }; // 2711930548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Priority_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyHeightmapSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyHeightmapSettings, Priority_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_bInvertShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_FalloffSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"WaterBodyHeightmapSettings",
		sizeof(FWaterBodyHeightmapSettings),
		alignof(FWaterBodyHeightmapSettings),
		Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::EnumInfo[] = {
		{ EWaterBrushBlendType_StaticEnum, TEXT("EWaterBrushBlendType"), &Z_Registration_Info_UEnum_EWaterBrushBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 752467926U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaterBodyHeightmapSettings::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings_Statics::NewStructOps, TEXT("WaterBodyHeightmapSettings"), &Z_Registration_Info_UScriptStruct_WaterBodyHeightmapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyHeightmapSettings), 2800671282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_1405492455(TEXT("/Script/Water"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyHeightmapSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
