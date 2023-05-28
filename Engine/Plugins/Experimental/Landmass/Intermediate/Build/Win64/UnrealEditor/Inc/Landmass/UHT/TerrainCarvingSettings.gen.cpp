// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainCarvingSettings.h"
#include "BrushEffectsList.h"
#include "FalloffSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainCarvingSettings() {}
// Cross Module References
	LANDMASS_API UEnum* Z_Construct_UEnum_Landmass_EBrushBlendType();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassBrushEffectsList();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassFalloffSettings();
	LANDMASS_API UScriptStruct* Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings();
	UPackage* Z_Construct_UPackage__Script_Landmass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBrushBlendType;
	static UEnum* EBrushBlendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBrushBlendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBrushBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landmass_EBrushBlendType, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("EBrushBlendType"));
		}
		return Z_Registration_Info_UEnum_EBrushBlendType.OuterSingleton;
	}
	template<> LANDMASS_API UEnum* StaticEnum<EBrushBlendType>()
	{
		return EBrushBlendType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landmass_EBrushBlendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enumerators[] = {
		{ "EBrushBlendType::AlphaBlend", (int64)EBrushBlendType::AlphaBlend },
		{ "EBrushBlendType::Min", (int64)EBrushBlendType::Min },
		{ "EBrushBlendType::Max", (int64)EBrushBlendType::Max },
		{ "EBrushBlendType::Additive", (int64)EBrushBlendType::Additive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Performs an additive blend, using a flat Z=0 terrain as the input. Useful when you want to preserve underlying detail or ramps. */" },
		{ "Additive.Name", "EBrushBlendType::Additive" },
		{ "Additive.ToolTip", "Performs an additive blend, using a flat Z=0 terrain as the input. Useful when you want to preserve underlying detail or ramps." },
		{ "AlphaBlend.Comment", "/** Alpha Blend will affect the heightmap both upwards and downwards. */" },
		{ "AlphaBlend.Name", "EBrushBlendType::AlphaBlend" },
		{ "AlphaBlend.ToolTip", "Alpha Blend will affect the heightmap both upwards and downwards." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** The blend mode changes how the brush material is applied to the terrain. */" },
		{ "Max.Comment", "/** Limits the brush to only raising the terrain. */" },
		{ "Max.Name", "EBrushBlendType::Max" },
		{ "Max.ToolTip", "Limits the brush to only raising the terrain." },
		{ "Min.Comment", "/** Limits the brush to only lowering the terrain. */" },
		{ "Min.Name", "EBrushBlendType::Min" },
		{ "Min.ToolTip", "Limits the brush to only lowering the terrain." },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
		{ "ToolTip", "The blend mode changes how the brush material is applied to the terrain." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		"EBrushBlendType",
		"EBrushBlendType",
		Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landmass_EBrushBlendType()
	{
		if (!Z_Registration_Info_UEnum_EBrushBlendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBrushBlendType.InnerSingleton, Z_Construct_UEnum_Landmass_EBrushBlendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBrushBlendType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings;
class UScriptStruct* FLandmassTerrainCarvingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings, (UObject*)Z_Construct_UPackage__Script_Landmass(), TEXT("LandmassTerrainCarvingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.OuterSingleton;
}
template<> LANDMASS_API UScriptStruct* StaticStruct<FLandmassTerrainCarvingSettings>()
{
	return FLandmassTerrainCarvingSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandmassTerrainCarvingSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassTerrainCarvingSettings, BlendMode), Z_Construct_UEnum_Landmass_EBrushBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode_MetaData)) }; // 3948413676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape_SetBit(void* Obj)
	{
		((FLandmassTerrainCarvingSettings*)Obj)->bInvertShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape = { "bInvertShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandmassTerrainCarvingSettings), &Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_FalloffSettings_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_FalloffSettings = { "FalloffSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassTerrainCarvingSettings, FalloffSettings), Z_Construct_UScriptStruct_FLandmassFalloffSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_FalloffSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_FalloffSettings_MetaData)) }; // 201546117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassTerrainCarvingSettings, Effects), Z_Construct_UScriptStruct_FLandmassBrushEffectsList, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Effects_MetaData)) }; // 1346357647
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "TerrainCarvingSettings" },
		{ "ModuleRelativePath", "Public/TerrainCarvingSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandmassTerrainCarvingSettings, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Priority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_bInvertShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_FalloffSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewProp_Priority,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landmass,
		nullptr,
		&NewStructOps,
		"LandmassTerrainCarvingSettings",
		sizeof(FLandmassTerrainCarvingSettings),
		alignof(FLandmassTerrainCarvingSettings),
		Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.InnerSingleton, Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::EnumInfo[] = {
		{ EBrushBlendType_StaticEnum, TEXT("EBrushBlendType"), &Z_Registration_Info_UEnum_EBrushBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3948413676U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::ScriptStructInfo[] = {
		{ FLandmassTerrainCarvingSettings::StaticStruct, Z_Construct_UScriptStruct_FLandmassTerrainCarvingSettings_Statics::NewStructOps, TEXT("LandmassTerrainCarvingSettings"), &Z_Registration_Info_UScriptStruct_LandmassTerrainCarvingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandmassTerrainCarvingSettings), 4033287237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_1059226899(TEXT("/Script/Landmass"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Landmass_Source_Runtime_Public_TerrainCarvingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
