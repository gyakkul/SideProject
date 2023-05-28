// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterEditorSettings.h"
#include "WaterBodyHeightmapSettings.h"
#include "WaterBodyWeightmapSettings.h"
#include "WaterCurveSettings.h"
#include "WaterSplineMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATER_API UClass* Z_Construct_UClass_UWaterWavesBase_NoRegister();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterCurveSettings();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FWaterSplineCurveDefaults();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSettings();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterEditorSettings_NoRegister();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyCustomDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyIslandDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyLakeDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyOceanDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyRiverDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushActorDefaults();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterZoneActorDefaults();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults;
class UScriptStruct* FWaterBrushActorDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBrushActorDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBrushActorDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBrushActorDefaults>()
{
	return FWaterBrushActorDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerWeightmapSettings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerWeightmapSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerWeightmapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerWeightmapSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBrushActorDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_CurveSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_CurveSettings = { "CurveSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushActorDefaults, CurveSettings), Z_Construct_UScriptStruct_FWaterCurveSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_CurveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_CurveSettings_MetaData)) }; // 1417696216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_HeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_HeightmapSettings = { "HeightmapSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushActorDefaults, HeightmapSettings), Z_Construct_UScriptStruct_FWaterBodyHeightmapSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_HeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_HeightmapSettings_MetaData)) }; // 2800671282
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_ValueProp = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaterBodyWeightmapSettings, METADATA_PARAMS(nullptr, 0) }; // 1437509207
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp = { "LayerWeightmapSettings_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings = { "LayerWeightmapSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBrushActorDefaults, LayerWeightmapSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_MetaData)) }; // 1437509207
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_CurveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_HeightmapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewProp_LayerWeightmapSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		nullptr,
		&NewStructOps,
		"WaterBrushActorDefaults",
		sizeof(FWaterBrushActorDefaults),
		alignof(FWaterBrushActorDefaults),
		Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBrushActorDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults;
class UScriptStruct* FWaterZoneActorDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterZoneActorDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterZoneActorDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterZoneActorDefaults>()
{
	return FWaterZoneActorDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMeshExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarDistanceMeshExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWaterZoneScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWaterZoneScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FarDistanceMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterZoneActorDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMeshExtent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMeshExtent = { "FarDistanceMeshExtent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterZoneActorDefaults, FarDistanceMeshExtent), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMeshExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMeshExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_NewWaterZoneScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_NewWaterZoneScale = { "NewWaterZoneScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterZoneActorDefaults, NewWaterZoneScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_NewWaterZoneScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_NewWaterZoneScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMaterial = { "FarDistanceMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterZoneActorDefaults, FarDistanceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMeshExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_NewWaterZoneScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewProp_FarDistanceMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		nullptr,
		&NewStructOps,
		"WaterZoneActorDefaults",
		sizeof(FWaterZoneActorDefaults),
		alignof(FWaterZoneActorDefaults),
		Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterZoneActorDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyDefaults;
class UScriptStruct* FWaterBodyDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyDefaults>()
{
	return FWaterBodyDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SplineDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterHLODMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterHLODMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderwaterPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UnderwaterPostProcessMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_SplineDefaults_MetaData[] = {
		{ "Category", "Water Spline" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_SplineDefaults = { "SplineDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyDefaults, SplineDefaults), Z_Construct_UScriptStruct_FWaterSplineCurveDefaults, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_SplineDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_SplineDefaults_MetaData)) }; // 1062460365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterMaterial = { "WaterMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyDefaults, WaterMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterHLODMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterHLODMaterial = { "WaterHLODMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyDefaults, WaterHLODMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterHLODMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterHLODMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_UnderwaterPostProcessMaterial = { "UnderwaterPostProcessMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyDefaults, UnderwaterPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_UnderwaterPostProcessMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_SplineDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_WaterHLODMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewProp_UnderwaterPostProcessMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		nullptr,
		&NewStructOps,
		"WaterBodyDefaults",
		sizeof(FWaterBodyDefaults),
		alignof(FWaterBodyDefaults),
		Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyDefaults.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaterBodyRiverDefaults>() == std::is_polymorphic<FWaterBodyDefaults>(), "USTRUCT FWaterBodyRiverDefaults cannot be polymorphic unless super FWaterBodyDefaults is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults;
class UScriptStruct* FWaterBodyRiverDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyRiverDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyRiverDefaults>()
{
	return FWaterBodyRiverDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverToOceanTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RiverToOceanTransitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverToLakeTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RiverToLakeTransitionMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyRiverDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_BrushDefaults_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_BrushDefaults = { "BrushDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyRiverDefaults, BrushDefaults), Z_Construct_UScriptStruct_FWaterBrushActorDefaults, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_BrushDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_BrushDefaults_MetaData)) }; // 2370674979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToOceanTransitionMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToOceanTransitionMaterial = { "RiverToOceanTransitionMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyRiverDefaults, RiverToOceanTransitionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToOceanTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToOceanTransitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToLakeTransitionMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToLakeTransitionMaterial = { "RiverToLakeTransitionMaterial", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyRiverDefaults, RiverToLakeTransitionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToLakeTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToLakeTransitionMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_BrushDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToOceanTransitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewProp_RiverToLakeTransitionMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		Z_Construct_UScriptStruct_FWaterBodyDefaults,
		&NewStructOps,
		"WaterBodyRiverDefaults",
		sizeof(FWaterBodyRiverDefaults),
		alignof(FWaterBodyRiverDefaults),
		Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyRiverDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaterBodyLakeDefaults>() == std::is_polymorphic<FWaterBodyDefaults>(), "USTRUCT FWaterBodyLakeDefaults cannot be polymorphic unless super FWaterBodyDefaults is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults;
class UScriptStruct* FWaterBodyLakeDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyLakeDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyLakeDefaults>()
{
	return FWaterBodyLakeDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWaves_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyLakeDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_BrushDefaults_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_BrushDefaults = { "BrushDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyLakeDefaults, BrushDefaults), Z_Construct_UScriptStruct_FWaterBrushActorDefaults, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_BrushDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_BrushDefaults_MetaData)) }; // 2370674979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_WaterWaves_MetaData[] = {
		{ "Category", "Wave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_WaterWaves = { "WaterWaves", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyLakeDefaults, WaterWaves), Z_Construct_UClass_UWaterWavesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_WaterWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_WaterWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_BrushDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewProp_WaterWaves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		Z_Construct_UScriptStruct_FWaterBodyDefaults,
		&NewStructOps,
		"WaterBodyLakeDefaults",
		sizeof(FWaterBodyLakeDefaults),
		alignof(FWaterBodyLakeDefaults),
		Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyLakeDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaterBodyOceanDefaults>() == std::is_polymorphic<FWaterBodyDefaults>(), "USTRUCT FWaterBodyOceanDefaults cannot be polymorphic unless super FWaterBodyDefaults is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults;
class UScriptStruct* FWaterBodyOceanDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyOceanDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyOceanDefaults>()
{
	return FWaterBodyOceanDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterWaves_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyOceanDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_BrushDefaults_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_BrushDefaults = { "BrushDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyOceanDefaults, BrushDefaults), Z_Construct_UScriptStruct_FWaterBrushActorDefaults, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_BrushDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_BrushDefaults_MetaData)) }; // 2370674979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_WaterWaves_MetaData[] = {
		{ "Category", "Wave" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_WaterWaves = { "WaterWaves", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyOceanDefaults, WaterWaves), Z_Construct_UClass_UWaterWavesBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_WaterWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_WaterWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_BrushDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewProp_WaterWaves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		Z_Construct_UScriptStruct_FWaterBodyDefaults,
		&NewStructOps,
		"WaterBodyOceanDefaults",
		sizeof(FWaterBodyOceanDefaults),
		alignof(FWaterBodyOceanDefaults),
		Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyOceanDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWaterBodyCustomDefaults>() == std::is_polymorphic<FWaterBodyDefaults>(), "USTRUCT FWaterBodyCustomDefaults cannot be polymorphic unless super FWaterBodyDefaults is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults;
class UScriptStruct* FWaterBodyCustomDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyCustomDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyCustomDefaults>()
{
	return FWaterBodyCustomDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_WaterMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyCustomDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewProp_WaterMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewProp_WaterMesh = { "WaterMesh", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyCustomDefaults, WaterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewProp_WaterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewProp_WaterMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewProp_WaterMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		Z_Construct_UScriptStruct_FWaterBodyDefaults,
		&NewStructOps,
		"WaterBodyCustomDefaults",
		sizeof(FWaterBodyCustomDefaults),
		alignof(FWaterBodyCustomDefaults),
		Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyCustomDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults;
class UScriptStruct* FWaterBodyIslandDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults, (UObject*)Z_Construct_UPackage__Script_WaterEditor(), TEXT("WaterBodyIslandDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.OuterSingleton;
}
template<> WATEREDITOR_API UScriptStruct* StaticStruct<FWaterBodyIslandDefaults>()
{
	return FWaterBodyIslandDefaults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushDefaults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaterBodyIslandDefaults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewProp_BrushDefaults_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewProp_BrushDefaults = { "BrushDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaterBodyIslandDefaults, BrushDefaults), Z_Construct_UScriptStruct_FWaterBrushActorDefaults, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewProp_BrushDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewProp_BrushDefaults_MetaData)) }; // 2370674979
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewProp_BrushDefaults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
		nullptr,
		&NewStructOps,
		"WaterBodyIslandDefaults",
		sizeof(FWaterBodyIslandDefaults),
		alignof(FWaterBodyIslandDefaults),
		Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyIslandDefaults()
	{
		if (!Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.InnerSingleton, Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults.InnerSingleton;
	}
	void UWaterEditorSettings::StaticRegisterNativesUWaterEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterEditorSettings);
	UClass* Z_Construct_UClass_UWaterEditorSettings_NoRegister()
	{
		return UWaterEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWaterEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureGroupForGeneratedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureGroupForGeneratedTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaterVelocityAndHeightTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWaterVelocityAndHeightTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeWaterVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisualizeWaterVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeMaterialParameterCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterZoneActorDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterZoneActorDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyRiverDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterBodyRiverDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyLakeDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterBodyLakeDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyOceanDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterBodyOceanDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyCustomDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterBodyCustomDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIslandDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterBodyIslandDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateLandscapeDuringInteractiveChanges_MetaData[];
#endif
		static void NewProp_bUpdateLandscapeDuringInteractiveChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateLandscapeDuringInteractiveChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateWaterMeshDuringInteractiveChanges_MetaData[];
#endif
		static void NewProp_bUpdateWaterMeshDuringInteractiveChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateWaterMeshDuringInteractiveChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterZoneClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterZoneClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterManagerClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaterManagerClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrushAngleFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrushAngleFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrushIslandFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrushIslandFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrushWidthFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrushWidthFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrushWeightmapMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrushWeightmapMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCacheDistanceFieldCacheMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultCacheDistanceFieldCacheMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompositeWaterBodyTextureMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultCompositeWaterBodyTextureMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultJumpFloodStepMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultJumpFloodStepMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlurEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBlurEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFindEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultFindEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDrawCanvasMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultDrawCanvasMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRenderRiverSplineDepthsMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultRenderRiverSplineDepthsMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the editor settings for the Water plugin.\n */" },
		{ "DisplayName", "Water Editor" },
		{ "IncludePath", "WaterEditorSettings.h" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Implements the editor settings for the Water plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_TextureGroupForGeneratedTextures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The texture group to use for generated textures such as the combined veloctiy and height texture */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "The texture group to use for generated textures such as the combined veloctiy and height texture" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_TextureGroupForGeneratedTextures = { "TextureGroupForGeneratedTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, TextureGroupForGeneratedTextures), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_TextureGroupForGeneratedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_TextureGroupForGeneratedTextures_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_MaxWaterVelocityAndHeightTextureSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum size of the water velocity/height texture for a WaterZoneActor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Maximum size of the water velocity/height texture for a WaterZoneActor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_MaxWaterVelocityAndHeightTextureSize = { "MaxWaterVelocityAndHeightTextureSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, MaxWaterVelocityAndHeightTextureSize), METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_MaxWaterVelocityAndHeightTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_MaxWaterVelocityAndHeightTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_VisualizeWaterVelocityScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Scale factor for visualizing water velocity */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Scale factor for visualizing water velocity" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_VisualizeWaterVelocityScale = { "VisualizeWaterVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, VisualizeWaterVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_VisualizeWaterVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_VisualizeWaterVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Material Parameter Collection for everything landscape-related */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Material Parameter Collection for everything landscape-related" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_LandscapeMaterialParameterCollection = { "LandscapeMaterialParameterCollection", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, LandscapeMaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_LandscapeMaterialParameterCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneActorDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterMesh actor*/" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterMesh actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneActorDefaults = { "WaterZoneActorDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterZoneActorDefaults), Z_Construct_UScriptStruct_FWaterZoneActorDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneActorDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneActorDefaults_MetaData)) }; // 516331486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyRiverDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterBodyRiver actor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterBodyRiver actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyRiverDefaults = { "WaterBodyRiverDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterBodyRiverDefaults), Z_Construct_UScriptStruct_FWaterBodyRiverDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyRiverDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyRiverDefaults_MetaData)) }; // 2108082623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyLakeDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterBodyLake actor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterBodyLake actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyLakeDefaults = { "WaterBodyLakeDefaults", nullptr, (EPropertyFlags)0x0010008000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterBodyLakeDefaults), Z_Construct_UScriptStruct_FWaterBodyLakeDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyLakeDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyLakeDefaults_MetaData)) }; // 1531618187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyOceanDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterBodyOcean actor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterBodyOcean actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyOceanDefaults = { "WaterBodyOceanDefaults", nullptr, (EPropertyFlags)0x0010008000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterBodyOceanDefaults), Z_Construct_UScriptStruct_FWaterBodyOceanDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyOceanDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyOceanDefaults_MetaData)) }; // 1374207060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyCustomDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterBodyCustom actor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterBodyCustom actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyCustomDefaults = { "WaterBodyCustomDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterBodyCustomDefaults), Z_Construct_UScriptStruct_FWaterBodyCustomDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyCustomDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyCustomDefaults_MetaData)) }; // 1859311867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyIslandDefaults_MetaData[] = {
		{ "Category", "ActorDefaults" },
		{ "Comment", "/** Default values for base WaterBodyIsland actor */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Default values for base WaterBodyIsland actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyIslandDefaults = { "WaterBodyIslandDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterBodyIslandDefaults), Z_Construct_UScriptStruct_FWaterBodyIslandDefaults, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyIslandDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyIslandDefaults_MetaData)) }; // 1645807364
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** For landscape-affecting water bodies, allows the landscape to be updated when the water body's shape is modified interactively (e.g. when dragging a spline point). Set to false if the performance when editing a water body gets too bad (the landscape will be properly updated when the dragging operation is done). */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "For landscape-affecting water bodies, allows the landscape to be updated when the water body's shape is modified interactively (e.g. when dragging a spline point). Set to false if the performance when editing a water body gets too bad (the landscape will be properly updated when the dragging operation is done)." },
	};
#endif
	void Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges_SetBit(void* Obj)
	{
		((UWaterEditorSettings*)Obj)->bUpdateLandscapeDuringInteractiveChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges = { "bUpdateLandscapeDuringInteractiveChanges", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterEditorSettings), &Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Allows the water mesh to be updated when the water body's shape is modified interactively (e.g. when dragging a spline point). Set to false if the performance when editing a water body gets too bad (the water mesh will be properly updated when the dragging operation is done). */" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Allows the water mesh to be updated when the water body's shape is modified interactively (e.g. when dragging a spline point). Set to false if the performance when editing a water body gets too bad (the water mesh will be properly updated when the dragging operation is done)." },
	};
#endif
	void Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges_SetBit(void* Obj)
	{
		((UWaterEditorSettings*)Obj)->bUpdateWaterMeshDuringInteractiveChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges = { "bUpdateWaterMeshDuringInteractiveChanges", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterEditorSettings), &Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneClassPath_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Class of the water zone to be used*/" },
		{ "MetaClass", "/Script/Water.WaterZone" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Class of the water zone to be used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneClassPath = { "WaterZoneClassPath", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterZoneClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterManagerClassPath_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** Class of the water brush to be used in landscape */" },
		{ "MetaClass", "/Script/WaterEditor.WaterLandscapeBrush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
		{ "ToolTip", "Class of the water brush to be used in landscape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterManagerClassPath = { "WaterManagerClassPath", nullptr, (EPropertyFlags)0x0040040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, WaterManagerClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterManagerClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterManagerClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushAngleFalloffMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushAngleFalloffMaterial = { "DefaultBrushAngleFalloffMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushAngleFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushAngleFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushAngleFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushIslandFalloffMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushIslandFalloffMaterial = { "DefaultBrushIslandFalloffMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushIslandFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushIslandFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushIslandFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWidthFalloffMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWidthFalloffMaterial = { "DefaultBrushWidthFalloffMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushWidthFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWidthFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWidthFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWeightmapMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWeightmapMaterial = { "DefaultBrushWeightmapMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultBrushWeightmapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWeightmapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWeightmapMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCacheDistanceFieldCacheMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCacheDistanceFieldCacheMaterial = { "DefaultCacheDistanceFieldCacheMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultCacheDistanceFieldCacheMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCacheDistanceFieldCacheMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCacheDistanceFieldCacheMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCompositeWaterBodyTextureMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCompositeWaterBodyTextureMaterial = { "DefaultCompositeWaterBodyTextureMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultCompositeWaterBodyTextureMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCompositeWaterBodyTextureMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCompositeWaterBodyTextureMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultJumpFloodStepMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultJumpFloodStepMaterial = { "DefaultJumpFloodStepMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultJumpFloodStepMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultJumpFloodStepMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultJumpFloodStepMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBlurEdgesMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBlurEdgesMaterial = { "DefaultBlurEdgesMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultBlurEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBlurEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBlurEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultFindEdgesMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultFindEdgesMaterial = { "DefaultFindEdgesMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultFindEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultFindEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultFindEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultDrawCanvasMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultDrawCanvasMaterial = { "DefaultDrawCanvasMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultDrawCanvasMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultDrawCanvasMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultDrawCanvasMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultRenderRiverSplineDepthsMaterial_MetaData[] = {
		{ "Category", "Brush" },
		{ "ModuleRelativePath", "Public/WaterEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultRenderRiverSplineDepthsMaterial = { "DefaultRenderRiverSplineDepthsMaterial", nullptr, (EPropertyFlags)0x0044040000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterEditorSettings, DefaultRenderRiverSplineDepthsMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultRenderRiverSplineDepthsMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultRenderRiverSplineDepthsMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_TextureGroupForGeneratedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_MaxWaterVelocityAndHeightTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_VisualizeWaterVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_LandscapeMaterialParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneActorDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyRiverDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyLakeDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyOceanDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyCustomDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterBodyIslandDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateLandscapeDuringInteractiveChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_bUpdateWaterMeshDuringInteractiveChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterZoneClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_WaterManagerClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushAngleFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushIslandFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWidthFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBrushWeightmapMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCacheDistanceFieldCacheMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultCompositeWaterBodyTextureMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultJumpFloodStepMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultBlurEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultFindEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultDrawCanvasMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterEditorSettings_Statics::NewProp_DefaultRenderRiverSplineDepthsMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterEditorSettings_Statics::ClassParams = {
		&UWaterEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::PropPointers),
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UWaterEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterEditorSettings.OuterSingleton, Z_Construct_UClass_UWaterEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterEditorSettings.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterEditorSettings>()
	{
		return UWaterEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterEditorSettings);
	UWaterEditorSettings::~UWaterEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FWaterBrushActorDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics::NewStructOps, TEXT("WaterBrushActorDefaults"), &Z_Registration_Info_UScriptStruct_WaterBrushActorDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBrushActorDefaults), 2370674979U) },
		{ FWaterZoneActorDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics::NewStructOps, TEXT("WaterZoneActorDefaults"), &Z_Registration_Info_UScriptStruct_WaterZoneActorDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterZoneActorDefaults), 516331486U) },
		{ FWaterBodyDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics::NewStructOps, TEXT("WaterBodyDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyDefaults), 481600604U) },
		{ FWaterBodyRiverDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics::NewStructOps, TEXT("WaterBodyRiverDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyRiverDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyRiverDefaults), 2108082623U) },
		{ FWaterBodyLakeDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics::NewStructOps, TEXT("WaterBodyLakeDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyLakeDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyLakeDefaults), 1531618187U) },
		{ FWaterBodyOceanDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics::NewStructOps, TEXT("WaterBodyOceanDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyOceanDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyOceanDefaults), 1374207060U) },
		{ FWaterBodyCustomDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics::NewStructOps, TEXT("WaterBodyCustomDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyCustomDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyCustomDefaults), 1859311867U) },
		{ FWaterBodyIslandDefaults::StaticStruct, Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics::NewStructOps, TEXT("WaterBodyIslandDefaults"), &Z_Registration_Info_UScriptStruct_WaterBodyIslandDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaterBodyIslandDefaults), 1645807364U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterEditorSettings, UWaterEditorSettings::StaticClass, TEXT("UWaterEditorSettings"), &Z_Registration_Info_UClass_UWaterEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterEditorSettings), 585602400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_840446567(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
