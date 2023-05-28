// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "../../Source/Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "../../Source/Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionEditorPerProjectUserSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundMix_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartition_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInteriorSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetViewer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FReverbSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityAggressiveness;
	static UEnum* EVisibilityAggressiveness_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityAggressiveness, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityAggressiveness"));
		}
		return Z_Registration_Info_UEnum_EVisibilityAggressiveness.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityAggressiveness>()
	{
		return EVisibilityAggressiveness_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enumerators[] = {
		{ "VIS_LeastAggressive", (int64)VIS_LeastAggressive },
		{ "VIS_ModeratelyAggressive", (int64)VIS_ModeratelyAggressive },
		{ "VIS_MostAggressive", (int64)VIS_MostAggressive },
		{ "VIS_Max", (int64)VIS_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "VIS_LeastAggressive.DisplayName", "Least Aggressive" },
		{ "VIS_LeastAggressive.Name", "VIS_LeastAggressive" },
		{ "VIS_Max.Hidden", "" },
		{ "VIS_Max.Name", "VIS_Max" },
		{ "VIS_ModeratelyAggressive.DisplayName", "Moderately Aggressive" },
		{ "VIS_ModeratelyAggressive.Name", "VIS_ModeratelyAggressive" },
		{ "VIS_MostAggressive.DisplayName", "Most Aggressive" },
		{ "VIS_MostAggressive.Name", "VIS_MostAggressive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVisibilityAggressiveness",
		"EVisibilityAggressiveness",
		Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVisibilityAggressiveness()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton, Z_Construct_UEnum_Engine_EVisibilityAggressiveness_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilityAggressiveness.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVolumeLightingMethod;
	static UEnum* EVolumeLightingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVolumeLightingMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVolumeLightingMethod"));
		}
		return Z_Registration_Info_UEnum_EVolumeLightingMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVolumeLightingMethod>()
	{
		return EVolumeLightingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enumerators[] = {
		{ "VLM_VolumetricLightmap", (int64)VLM_VolumetricLightmap },
		{ "VLM_SparseVolumeLightingSamples", (int64)VLM_SparseVolumeLightingSamples },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "VLM_SparseVolumeLightingSamples.Comment", "/** \n\x09 * Volume lighting samples are placed on top of static surfaces at medium density, and everywhere else in the Lightmass Importance Volume at low density.  Positions outside of the Importance Volume will have no indirect lighting.\n\x09 * This method requires CPU interpolation so the Indirect Lighting Cache is used to interpolate results for each dynamic object, adding Rendering Thread overhead.  \n\x09 * Volumetric Fog cannot be affected by precomputed lighting with this method.\n\x09 */" },
		{ "VLM_SparseVolumeLightingSamples.DisplayName", "Sparse Volume Lighting Samples" },
		{ "VLM_SparseVolumeLightingSamples.Name", "VLM_SparseVolumeLightingSamples" },
		{ "VLM_SparseVolumeLightingSamples.ToolTip", "Volume lighting samples are placed on top of static surfaces at medium density, and everywhere else in the Lightmass Importance Volume at low density.  Positions outside of the Importance Volume will have no indirect lighting.\nThis method requires CPU interpolation so the Indirect Lighting Cache is used to interpolate results for each dynamic object, adding Rendering Thread overhead.\nVolumetric Fog cannot be affected by precomputed lighting with this method." },
		{ "VLM_VolumetricLightmap.Comment", "/** \n\x09 * Lighting samples are computed in an adaptive grid which covers the entire Lightmass Importance Volume.  Higher density grids are used near geometry.\n\x09 * The Volumetric Lightmap is interpolated efficiently on the GPU per-pixel, allowing accurate indirect lighting for dynamic objects and volumetric fog.\n\x09 * Positions outside of the Importance Volume reuse the border texels of the Volumetric Lightmap (clamp addressing).\n\x09 * On mobile, interpolation is done on the CPU at the center of each object's bounds.\n\x09 */" },
		{ "VLM_VolumetricLightmap.DisplayName", "Volumetric Lightmap" },
		{ "VLM_VolumetricLightmap.Name", "VLM_VolumetricLightmap" },
		{ "VLM_VolumetricLightmap.ToolTip", "Lighting samples are computed in an adaptive grid which covers the entire Lightmass Importance Volume.  Higher density grids are used near geometry.\nThe Volumetric Lightmap is interpolated efficiently on the GPU per-pixel, allowing accurate indirect lighting for dynamic objects and volumetric fog.\nPositions outside of the Importance Volume reuse the border texels of the Volumetric Lightmap (clamp addressing).\nOn mobile, interpolation is done on the CPU at the center of each object's bounds." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVolumeLightingMethod",
		"EVolumeLightingMethod",
		Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVolumeLightingMethod()
	{
		if (!Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton, Z_Construct_UEnum_Engine_EVolumeLightingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVolumeLightingMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings;
class UScriptStruct* FLightmassWorldInfoSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LightmassWorldInfoSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLightmassWorldInfoSettings>()
{
	return FLightmassWorldInfoSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingLevelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticLightingLevelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIndirectLightingBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIndirectLightingBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSkyLightingBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSkyLightingBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingSmoothness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingSmoothness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnvironmentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvironmentIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeLightingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VolumeLightingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bUseAmbientOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData[];
#endif
		static void NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAmbientOcclusionMaterialMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeMaterialDiffuse_MetaData[];
#endif
		static void NewProp_bVisualizeMaterialDiffuse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeMaterialDiffuse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bVisualizeAmbientOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressLightmaps_MetaData[];
#endif
		static void NewProp_bCompressLightmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressLightmaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapDetailCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapDetailCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapMaximumBrickMemoryMb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricLightmapSphericalHarmonicSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeLightSamplePlacementScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeLightSamplePlacementScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectIlluminationOcclusionFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectIlluminationOcclusionFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectIlluminationOcclusionFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectIlluminationOcclusionFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullyOccludedSamplesFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FullyOccludedSamplesFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOcclusionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOcclusionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassWorldInfoSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Warning: Setting this to less than 1 will greatly increase build times!\n\x09 * Scale of the level relative to real world scale (1 Unreal Unit = 1 cm). \n\x09 * All scale-dependent Lightmass setting defaults have been tweaked to work well with real world scale, \n\x09 * Any levels with a different scale should use this scale to compensate. \n\x09 * For large levels it can drastically reduce build times to set this to 2 or 4.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Warning: Setting this to less than 1 will greatly increase build times!\nScale of the level relative to real world scale (1 Unreal Unit = 1 cm).\nAll scale-dependent Lightmass setting defaults have been tweaked to work well with real world scale,\nAny levels with a different scale should use this scale to compensate.\nFor large levels it can drastically reduce build times to set this to 2 or 4." },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale = { "StaticLightingLevelScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, StaticLightingLevelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Number of light bounces to simulate for point / spot / directional lights, starting from the light source. \n\x09 * 0 is direct lighting only, 1 is one bounce, etc. \n\x09 * Bounce 1 takes the most time to calculate and contributes the most to visual quality, followed by bounce 2.\n\x09 * Successive bounces don't really affect build times, but have a much lower visual impact, unless the material diffuse colors are close to 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of light bounces to simulate for point / spot / directional lights, starting from the light source.\n0 is direct lighting only, 1 is one bounce, etc.\nBounce 1 takes the most time to calculate and contributes the most to visual quality, followed by bounce 2.\nSuccessive bounces don't really affect build times, but have a much lower visual impact, unless the material diffuse colors are close to 1." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces = { "NumIndirectLightingBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumIndirectLightingBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Number of skylight and emissive bounces to simulate.  \n\x09 * Lightmass uses a non-distributable radiosity method for skylight bounces whose cost is proportional to the number of bounces.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of skylight and emissive bounces to simulate.\nLightmass uses a non-distributable radiosity method for skylight bounces whose cost is proportional to the number of bounces." },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces = { "NumSkyLightingBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, NumSkyLightingBounces), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Warning: Setting this higher than 1 will greatly increase build times!\n\x09 * Can be used to increase the GI solver sample counts in order to get higher quality for levels that need it.\n\x09 * It can be useful to reduce IndirectLightingSmoothness somewhat (~.75) when increasing quality to get defined indirect shadows.\n\x09 * Note that this can't affect compression artifacts, UV seams or other texture based artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Warning: Setting this higher than 1 will greatly increase build times!\nCan be used to increase the GI solver sample counts in order to get higher quality for levels that need it.\nIt can be useful to reduce IndirectLightingSmoothness somewhat (~.75) when increasing quality to get defined indirect shadows.\nNote that this can't affect compression artifacts, UV seams or other texture based artifacts." },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality = { "IndirectLightingQuality", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingQuality), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Smoothness factor to apply to indirect lighting.  This is useful in some lighting conditions when Lightmass cannot resolve accurate indirect lighting.\n\x09 * 1 is default smoothness tweaked for a variety of lighting situations.\n\x09 * Higher values like 3 smooth out the indirect lighting more, but at the cost of indirect shadows losing detail.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Smoothness factor to apply to indirect lighting.  This is useful in some lighting conditions when Lightmass cannot resolve accurate indirect lighting.\n1 is default smoothness tweaked for a variety of lighting situations.\nHigher values like 3 smooth out the indirect lighting more, but at the cost of indirect shadows losing detail." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness = { "IndirectLightingSmoothness", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectLightingSmoothness), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Represents a constant color light surrounding the upper hemisphere of the level, like a sky.\n\x09 * This light source currently does not get bounced as indirect lighting and causes reflection capture brightness to be incorrect.  Prefer using a Static Skylight instead.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Represents a constant color light surrounding the upper hemisphere of the level, like a sky.\nThis light source currently does not get bounced as indirect lighting and causes reflection capture brightness to be incorrect.  Prefer using a Static Skylight instead." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor = { "EnvironmentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** Scales EnvironmentColor to allow independent color and brightness controls. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales EnvironmentColor to allow independent color and brightness controls." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity = { "EnvironmentIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EnvironmentIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData[] = {
		{ "Comment", "/** Scales the emissive contribution of all materials in the scene.  Currently disabled and should be removed with mesh area lights. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the emissive contribution of all materials in the scene.  Currently disabled and should be removed with mesh area lights." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, EmissiveBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** Scales the diffuse contribution of all materials in the scene. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the diffuse contribution of all materials in the scene." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, DiffuseBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "Comment", "/** Technique to use for providing precomputed lighting at all positions inside the Lightmass Importance Volume */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Technique to use for providing precomputed lighting at all positions inside the Lightmass Importance Volume" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod = { "VolumeLightingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightingMethod), Z_Construct_UEnum_Engine_EVolumeLightingMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod_MetaData)) }; // 48692031
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** If true, AmbientOcclusion will be enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, AmbientOcclusion will be enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bUseAmbientOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion = { "bUseAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** \n\x09 * Whether to generate textures storing the AO computed by Lightmass.\n\x09 * These can be accessed through the PrecomputedAOMask material node, \n\x09 * Which is useful for blending between material layers on environment assets.\n\x09 * Be sure to set DirectIlluminationOcclusionFraction and IndirectIlluminationOcclusionFraction to 0 if you only want the PrecomputedAOMask!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to generate textures storing the AO computed by Lightmass.\nThese can be accessed through the PrecomputedAOMask material node,\nWhich is useful for blending between material layers on environment assets.\nBe sure to set DirectIlluminationOcclusionFraction and IndirectIlluminationOcclusionFraction to 0 if you only want the PrecomputedAOMask!" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bGenerateAmbientOcclusionMaterialMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask = { "bGenerateAmbientOcclusionMaterialMask", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData[] = {
		{ "Category", "LightmassDebug" },
		{ "Comment", "/** If true, override normal direct and indirect lighting with just the exported diffuse term. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, override normal direct and indirect lighting with just the exported diffuse term." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bVisualizeMaterialDiffuse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse = { "bVisualizeMaterialDiffuse", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData[] = {
		{ "Category", "LightmassDebug" },
		{ "Comment", "/** If true, override normal direct and indirect lighting with just the AO term. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, override normal direct and indirect lighting with just the AO term." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bVisualizeAmbientOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion = { "bVisualizeAmbientOcclusion", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData[] = {
		{ "Category", "LightmassGeneral" },
		{ "Comment", "/** \n\x09 * Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\n\x09 * Use caution when disabling this.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\nUse caution when disabling this." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_SetBit(void* Obj)
	{
		((FLightmassWorldInfoSettings*)Obj)->bCompressLightmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps = { "bCompressLightmaps", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLightmassWorldInfoSettings), &Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "Comment", "/** \n\x09 * Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units. \n\x09 * This setting has a large impact on build times and memory, use with caution.  \n\x09 * Halving the DetailCellSize can increase memory by up to a factor of 8x.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units.\nThis setting has a large impact on build times and memory, use with caution.\nHalving the DetailCellSize can increase memory by up to a factor of 8x." },
		{ "UIMax", "1000" },
		{ "UIMin", "50" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize = { "VolumetricLightmapDetailCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapDetailCellSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "Comment", "/** \n\x09 * Maximum amount of memory to spend on Volumetric Lightmap Brick data.  High density bricks will be discarded until this limit is met, with bricks furthest from geometry discarded first.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum amount of memory to spend on Volumetric Lightmap Brick data.  High density bricks will be discarded until this limit is met, with bricks furthest from geometry discarded first." },
		{ "UIMax", "500" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb = { "VolumetricLightmapMaximumBrickMemoryMb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapMaximumBrickMemoryMb), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "Comment", "/** \n\x09 * Controls how much smoothing should be done to Volumetric Lightmap samples during Spherical Harmonic de-ringing.  \n\x09 * Whenever highly directional lighting is stored in a Spherical Harmonic, a ringing artifact occurs which manifests as unexpected black areas on the opposite side.\n\x09 * Smoothing can reduce this artifact.  Smoothing is only applied when the ringing artifact is present.\n\x09 * 0 = no smoothing, 1 = strong smooth (little directionality in lighting).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Controls how much smoothing should be done to Volumetric Lightmap samples during Spherical Harmonic de-ringing.\nWhenever highly directional lighting is stored in a Spherical Harmonic, a ringing artifact occurs which manifests as unexpected black areas on the opposite side.\nSmoothing can reduce this artifact.  Smoothing is only applied when the ringing artifact is present.\n0 = no smoothing, 1 = strong smooth (little directionality in lighting)." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing = { "VolumetricLightmapSphericalHarmonicSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumetricLightmapSphericalHarmonicSmoothing), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData[] = {
		{ "Category", "LightmassVolumeLighting" },
		{ "Comment", "/** \n\x09 * Scales the distances at which volume lighting samples are placed.  Volume lighting samples are computed by Lightmass and are used for GI on movable components.\n\x09 * Using larger scales results in less sample memory usage and reduces Indirect Lighting Cache update times, but less accurate transitions between lighting areas.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Scales the distances at which volume lighting samples are placed.  Volume lighting samples are computed by Lightmass and are used for GI on movable components.\nUsing larger scales results in less sample memory usage and reduces Indirect Lighting Cache update times, but less accurate transitions between lighting areas." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale = { "VolumeLightSamplePlacementScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, VolumeLightSamplePlacementScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** How much of the AO to apply to direct lighting. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "How much of the AO to apply to direct lighting." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction = { "DirectIlluminationOcclusionFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, DirectIlluminationOcclusionFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** How much of the AO to apply to indirect lighting. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "How much of the AO to apply to indirect lighting." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction = { "IndirectIlluminationOcclusionFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, IndirectIlluminationOcclusionFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** Higher exponents increase contrast. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Higher exponents increase contrast." },
		{ "UIMax", "8" },
		{ "UIMin", ".5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent = { "OcclusionExponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, OcclusionExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** Fraction of samples taken that must be occluded in order to reach full occlusion. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Fraction of samples taken that must be occluded in order to reach full occlusion." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction = { "FullyOccludedSamplesFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, FullyOccludedSamplesFraction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData[] = {
		{ "Category", "LightmassOcclusion" },
		{ "Comment", "/** Maximum distance for an object to cause occlusion on another object. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum distance for an object to cause occlusion on another object." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance = { "MaxOcclusionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightmassWorldInfoSettings, MaxOcclusionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_StaticLightingLevelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumIndirectLightingBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_NumSkyLightingBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectLightingSmoothness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EnvironmentIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_EmissiveBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DiffuseBoost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bUseAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bGenerateAmbientOcclusionMaterialMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeMaterialDiffuse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bVisualizeAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_bCompressLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapDetailCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapMaximumBrickMemoryMb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumetricLightmapSphericalHarmonicSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_VolumeLightSamplePlacementScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_DirectIlluminationOcclusionFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_IndirectIlluminationOcclusionFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_OcclusionExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_FullyOccludedSamplesFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewProp_MaxOcclusionDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LightmassWorldInfoSettings",
		sizeof(FLightmassWorldInfoSettings),
		alignof(FLightmassWorldInfoSettings),
		Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassWorldInfoSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.InnerSingleton, Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetViewer;
class UScriptStruct* FNetViewer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetViewer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetViewer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetViewer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NetViewer"));
	}
	return Z_Registration_Info_UScriptStruct_NetViewer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNetViewer>()
{
	return FNetViewer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetViewer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Connection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InViewer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InViewer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** stores information on a viewer that actors need to be checked against for relevancy */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "stores information on a viewer that actors need to be checked against for relevancy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetViewer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetViewer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetViewer, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData[] = {
		{ "Comment", "/** The \"controlling net object\" associated with this view (typically player controller) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The \"controlling net object\" associated with this view (typically player controller)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer = { "InViewer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetViewer, InViewer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData[] = {
		{ "Comment", "/** The actor that is being directly viewed, usually a pawn.  Could also be the net actor of consequence */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The actor that is being directly viewed, usually a pawn.  Could also be the net actor of consequence" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetViewer, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData[] = {
		{ "Comment", "/** Where the viewer is looking from */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Where the viewer is looking from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetViewer, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData[] = {
		{ "Comment", "/** Direction the viewer is looking */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Direction the viewer is looking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir = { "ViewDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetViewer, ViewDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_Connection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_InViewer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetViewer_Statics::NewProp_ViewDir,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetViewer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NetViewer",
		sizeof(FNetViewer),
		alignof(FNetViewer),
		Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetViewer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetViewer()
	{
		if (!Z_Registration_Info_UScriptStruct_NetViewer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetViewer.InnerSingleton, Z_Construct_UScriptStruct_FNetViewer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetViewer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod;
	static UEnum* EHierarchicalSimplificationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHierarchicalSimplificationMethod"));
		}
		return Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHierarchicalSimplificationMethod>()
	{
		return EHierarchicalSimplificationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enumerators[] = {
		{ "EHierarchicalSimplificationMethod::None", (int64)EHierarchicalSimplificationMethod::None },
		{ "EHierarchicalSimplificationMethod::Merge", (int64)EHierarchicalSimplificationMethod::Merge },
		{ "EHierarchicalSimplificationMethod::Simplify", (int64)EHierarchicalSimplificationMethod::Simplify },
		{ "EHierarchicalSimplificationMethod::Approximate", (int64)EHierarchicalSimplificationMethod::Approximate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enum_MetaDataParams[] = {
		{ "Approximate.Name", "EHierarchicalSimplificationMethod::Approximate" },
		{ "Merge.Name", "EHierarchicalSimplificationMethod::Merge" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "None.hidden", "" },
		{ "None.Name", "EHierarchicalSimplificationMethod::None" },
		{ "Simplify.Name", "EHierarchicalSimplificationMethod::Simplify" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHierarchicalSimplificationMethod",
		"EHierarchicalSimplificationMethod",
		Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod()
	{
		if (!Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton, Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HierarchicalSimplification;
class UScriptStruct* FHierarchicalSimplification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHierarchicalSimplification, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HierarchicalSimplification"));
	}
	return Z_Registration_Info_UScriptStruct_HierarchicalSimplification.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHierarchicalSimplification>()
{
	return FHierarchicalSimplification::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransitionScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOverrideDrawDistance_MetaData[];
#endif
		static void NewProp_bUseOverrideDrawDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOverrideDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSpecificExclusion_MetaData[];
#endif
		static void NewProp_bAllowSpecificExclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSpecificExclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyGenerateClustersForVolumes_MetaData[];
#endif
		static void NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyGenerateClustersForVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReusePreviousLevelClusters_MetaData[];
#endif
		static void NewProp_bReusePreviousLevelClusters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReusePreviousLevelClusters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplificationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplificationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimplificationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxySetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxySetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeSetting_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApproximateSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApproximateSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredBoundRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredBoundRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredFillingPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredFillingPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinNumberOfActorsToBuild_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinNumberOfActorsToBuild;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyMesh_MetaData[];
#endif
		static void NewProp_bSimplifyMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHierarchicalSimplification>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The screen radius an mesh object should reach before swapping to the LOD actor, once one of parent displays, it won't draw any of children." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize = { "TransitionScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, TransitionScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1.0" },
		{ "editcondition", "bUseOverrideDrawDistance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "UIMax", "50000.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance = { "OverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, OverrideDrawDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bUseOverrideDrawDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance = { "bUseOverrideDrawDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bAllowSpecificExclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion = { "bAllowSpecificExclusion", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Only generate clusters for HLOD volumes */" },
		{ "DisplayAfter", "MinNumberOfActorsToBuild" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Only generate clusters for HLOD volumes" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bOnlyGenerateClustersForVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes = { "bOnlyGenerateClustersForVolumes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Will reuse the clusters generated for the previous (lower) HLOD level */" },
		{ "DisplayAfter", "bOnlyGenerateClustersForVolumes" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Will reuse the clusters generated for the previous (lower) HLOD level" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bReusePreviousLevelClusters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters = { "bReusePreviousLevelClusters", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod = { "SimplificationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, SimplificationMethod), Z_Construct_UEnum_Engine_EHierarchicalSimplificationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_MetaData)) }; // 670895966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Simplification settings, used if SimplificationMethod is Simplify */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Simplification settings, used if SimplificationMethod is Simplify" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting = { "ProxySetting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, ProxySetting), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting_MetaData)) }; // 1902887107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Merge settings, used if SimplificationMethod is Merge */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Merge settings, used if SimplificationMethod is Merge" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting = { "MergeSetting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, MergeSetting), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting_MetaData)) }; // 1528135240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "Comment", "/** Approximate settings, used if SimplificationMethod is Approximate */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Approximate settings, used if SimplificationMethod is Approximate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings = { "ApproximateSettings", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, ApproximateSettings), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings_MetaData)) }; // 1720125939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Desired Bounding Radius for clustering - this is not guaranteed but used to calculate filling factor for auto clustering" },
		{ "UIMin", "10.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius = { "DesiredBoundRadius", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, DesiredBoundRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Desired Filling Percentage for clustering - this is not guaranteed but used to calculate filling factor  for auto clustering" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage = { "DesiredFillingPercentage", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, DesiredFillingPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData[] = {
		{ "Category", "FHierarchicalSimplification" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Min number of actors to build LODActor */" },
		{ "editcondition", "!bReusePreviousLevelClusters" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Min number of actors to build LODActor" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild = { "MinNumberOfActorsToBuild", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHierarchicalSimplification, MinNumberOfActorsToBuild), METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit(void* Obj)
	{
		((FHierarchicalSimplification*)Obj)->bSimplifyMesh_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh = { "bSimplifyMesh", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FHierarchicalSimplification), &Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_TransitionScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_OverrideDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bUseOverrideDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bAllowSpecificExclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bOnlyGenerateClustersForVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bReusePreviousLevelClusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_SimplificationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ProxySetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MergeSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_ApproximateSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredBoundRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_DesiredFillingPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_MinNumberOfActorsToBuild,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewProp_bSimplifyMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HierarchicalSimplification",
		sizeof(FHierarchicalSimplification),
		alignof(FHierarchicalSimplification),
		Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHierarchicalSimplification()
	{
		if (!Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton, Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HierarchicalSimplification.InnerSingleton;
	}
	void UHierarchicalLODSetup::StaticRegisterNativesUHierarchicalLODSetup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHierarchicalLODSetup);
	UClass* Z_Construct_UClass_UHierarchicalLODSetup_NoRegister()
	{
		return UHierarchicalLODSetup::StaticClass();
	}
	struct Z_Construct_UClass_UHierarchicalLODSetup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideBaseMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHierarchicalLODSetup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameFramework/WorldSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(nullptr, 0) }; // 2841234047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** Hierarchical LOD Setup */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Hierarchical LOD Setup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSetup, HierarchicalLODSetup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_MetaData)) }; // 2841234047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial = { "OverrideBaseMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHierarchicalLODSetup, OverrideBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_HierarchicalLODSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHierarchicalLODSetup_Statics::NewProp_OverrideBaseMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHierarchicalLODSetup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHierarchicalLODSetup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams = {
		&UHierarchicalLODSetup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHierarchicalLODSetup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHierarchicalLODSetup()
	{
		if (!Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton, Z_Construct_UClass_UHierarchicalLODSetup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHierarchicalLODSetup.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHierarchicalLODSetup>()
	{
		return UHierarchicalLODSetup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHierarchicalLODSetup);
	UHierarchicalLODSetup::~UHierarchicalLODSetup() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BroadphaseSettings;
class UScriptStruct* FBroadphaseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BroadphaseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BroadphaseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBroadphaseSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BroadphaseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BroadphaseSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBroadphaseSettings>()
{
	return FBroadphaseSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBroadphaseSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMBPOnClient_MetaData[];
#endif
		static void NewProp_bUseMBPOnClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMBPOnClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMBPOnServer_MetaData[];
#endif
		static void NewProp_bUseMBPOnServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMBPOnServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMBPOuterBounds_MetaData[];
#endif
		static void NewProp_bUseMBPOuterBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMBPOuterBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MBPBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MBPBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MBPOuterBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MBPOuterBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MBPNumSubdivs_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MBPNumSubdivs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Settings pertaining to which PhysX broadphase to use, and settings for MBP if that is the chosen broadphase type */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Settings pertaining to which PhysX broadphase to use, and settings for MBP if that is the chosen broadphase type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBroadphaseSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** Whether to use MBP (Multi Broadphase Pruning */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to use MBP (Multi Broadphase Pruning" },
	};
#endif
	void Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_SetBit(void* Obj)
	{
		((FBroadphaseSettings*)Obj)->bUseMBPOnClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient = { "bUseMBPOnClient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBroadphaseSettings), &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_SetBit(void* Obj)
	{
		((FBroadphaseSettings*)Obj)->bUseMBPOnServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer = { "bUseMBPOnServer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBroadphaseSettings), &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** Whether to have MBP grid over concentrated inner bounds with loose outer bounds */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to have MBP grid over concentrated inner bounds with loose outer bounds" },
	};
#endif
	void Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_SetBit(void* Obj)
	{
		((FBroadphaseSettings*)Obj)->bUseMBPOuterBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds = { "bUseMBPOuterBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBroadphaseSettings), &Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** Total bounds for MBP, must cover the game world or collisions are disabled for out of bounds actors */" },
		{ "EditCondition", "bUseMBPOnClient || bUseMBPOnServer" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Total bounds for MBP, must cover the game world or collisions are disabled for out of bounds actors" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds = { "MBPBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBroadphaseSettings, MBPBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPOuterBounds_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "Comment", "/** Total bounds for MBP, should cover absolute maximum bounds of the game world where physics is required */" },
		{ "EditCondition", "bUseMBPOnClient || bUseMBPOnServer" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Total bounds for MBP, should cover absolute maximum bounds of the game world where physics is required" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPOuterBounds = { "MBPOuterBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBroadphaseSettings, MBPOuterBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPOuterBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPOuterBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of times to subdivide the MBP bounds, final number of regions is MBPNumSubdivs^2 */" },
		{ "EditCondition", "bUseMBPOnClient || bUseMBPOnServer" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Number of times to subdivide the MBP bounds, final number of regions is MBPNumSubdivs^2" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs = { "MBPNumSubdivs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBroadphaseSettings, MBPNumSubdivs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOnServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_bUseMBPOuterBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPOuterBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewProp_MBPNumSubdivs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BroadphaseSettings",
		sizeof(FBroadphaseSettings),
		alignof(FBroadphaseSettings),
		Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBroadphaseSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BroadphaseSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BroadphaseSettings.InnerSingleton, Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BroadphaseSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(AWorldSettings::execOnRep_WorldGravityZ)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WorldGravityZ();
		P_NATIVE_END;
	}
	void AWorldSettings::StaticRegisterNativesAWorldSettings()
	{
		UClass* Class = AWorldSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_WorldGravityZ", &AWorldSettings::execOnRep_WorldGravityZ },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldSettings, nullptr, "OnRep_WorldGravityZ", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldSettings);
	UClass* Z_Construct_UClass_AWorldSettings_NoRegister()
	{
		return AWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_AWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VisibilityCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityAggressiveness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityAggressiveness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrecomputeVisibility_MetaData[];
#endif
		static void NewProp_bPrecomputeVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecomputeVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData[];
#endif
		static void NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaceCellsOnlyAlongCameraTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldBoundsChecks_MetaData[];
#endif
		static void NewProp_bEnableWorldBoundsChecks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldBoundsChecks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNavigationSystem_MetaData[];
#endif
		static void NewProp_bEnableNavigationSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNavigationSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAISystem_MetaData[];
#endif
		static void NewProp_bEnableAISystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAISystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldComposition_MetaData[];
#endif
		static void NewProp_bEnableWorldComposition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldComposition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseClientSideLevelStreamingVolumes_MetaData[];
#endif
		static void NewProp_bUseClientSideLevelStreamingVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseClientSideLevelStreamingVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldOriginRebasing_MetaData[];
#endif
		static void NewProp_bEnableWorldOriginRebasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldOriginRebasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldGravitySet_MetaData[];
#endif
		static void NewProp_bWorldGravitySet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldGravitySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalGravitySet_MetaData[];
#endif
		static void NewProp_bGlobalGravitySet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalGravitySet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMinimizeBSPSections_MetaData[];
#endif
		static void NewProp_bMinimizeBSPSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMinimizeBSPSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceNoPrecomputedLighting_MetaData[];
#endif
		static void NewProp_bForceNoPrecomputedLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNoPrecomputedLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoading_MetaData[];
#endif
		static void NewProp_bHighPriorityLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHighPriorityLoadingLocal_MetaData[];
#endif
		static void NewProp_bHighPriorityLoadingLocal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriorityLoadingLocal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultBroadphaseSettings_MetaData[];
#endif
		static void NewProp_bOverrideDefaultBroadphaseSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultBroadphaseSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSingleClusterForLevel_MetaData[];
#endif
		static void NewProp_bGenerateSingleClusterForLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSingleClusterForLevel;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGridSizeInNameForFoliageActors_MetaData[];
#endif
		static void NewProp_bIncludeGridSizeInNameForFoliageActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGridSizeInNameForFoliageActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGridSizeInNameForPartitionedActors_MetaData[];
#endif
		static void NewProp_bIncludeGridSizeInNameForPartitionedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGridSizeInNameForPartitionedActors;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISystemClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_AISystemClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstancePivotOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstancePivotOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavigationSystemConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfigOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavigationSystemConfigOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldPartition;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedFoliageGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InstancedFoliageGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineMeshesGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LandscapeSplineMeshesGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationDataChunkGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NavigationDataChunkGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationDataBuilderLoadingCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NavigationDataBuilderLoadingCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlacementGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultPlacementGridSize;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseNavmeshDataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNavmeshDataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BaseNavmeshDataLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldToMeters_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KillZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KillZDamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_KillZDamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldGravityZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldGravityZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGravityZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalGravityZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPhysicsVolumeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPhysicsVolumeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsCollisionHandlerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsCollisionHandlerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameMode_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameNetworkManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameNetworkManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedLightAndShadowMapTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PackedLightAndShadowMapTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultColorScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultColorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMaxDistanceFieldOcclusionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalDistanceFieldViewDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalDistanceFieldViewDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicIndirectShadowsSelfShadowingIntensity;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultReverbSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAmbientZoneSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAmbientZoneSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultBaseSoundMix;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODSetupAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HLODSetupAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OverrideBaseMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchicalLODSetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchicalLODSetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HierarchicalLODSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHLODLevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHLODLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODBakingTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODBakingTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookMarks_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookMarks;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CinematicTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CinematicTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DemoPlayTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DemoPlayTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGlobalTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGlobalTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlobalTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGlobalTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinUndilatedFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinUndilatedFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUndilatedFrameTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxUndilatedFrameTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BroadphaseSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BroadphaseSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicationViewers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationViewers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicationViewers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauserPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PauserPlayerState;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldPartitionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWorldPartitionSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfBookmarks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfBookmarks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBookmarkClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultBookmarkClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookmarkArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BookmarkArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBookmarkClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LastBookmarkClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHierarchicalLODSystem_MetaData[];
#endif
		static void NewProp_bEnableHierarchicalLODSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHierarchicalLODSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLargeWorlds_MetaData[];
#endif
		static void NewProp_bEnableLargeWorlds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLargeWorlds;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorldSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorldSettings_OnRep_WorldGravityZ, "OnRep_WorldGravityZ" }, // 5092529
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor containing all script accessible world properties.\n */" },
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "GameFramework/WorldSettings.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Actor containing all script accessible world properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "Comment", "/** \n\x09 * World space size of precomputed visibility cells in x and y.\n\x09 * Smaller sizes produce more effective occlusion culling at the cost of increased runtime memory usage and lighting build times.\n\x09 */" },
		{ "DisplayAfter", "bPlaceCellsOnlyAlongCameraTracks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "World space size of precomputed visibility cells in x and y.\nSmaller sizes produce more effective occlusion culling at the cost of increased runtime memory usage and lighting build times." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize = { "VisibilityCellSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, VisibilityCellSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "Comment", "/** \n\x09 * Determines how aggressive precomputed visibility should be.\n\x09 * More aggressive settings cull more objects but also cause more visibility errors like popping.\n\x09 */" },
		{ "DisplayAfter", "bPlaceCellsOnlyAlongCameraTracks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Determines how aggressive precomputed visibility should be.\nMore aggressive settings cull more objects but also cause more visibility errors like popping." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness = { "VisibilityAggressiveness", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, VisibilityAggressiveness), Z_Construct_UEnum_Engine_EVisibilityAggressiveness, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness_MetaData)) }; // 3816150363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "Comment", "/** \n\x09 * Whether to place visibility cells inside Precomputed Visibility Volumes and along camera tracks in this level. \n\x09 * Precomputing visibility reduces rendering thread time at the cost of some runtime memory and somewhat increased lighting build times.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to place visibility cells inside Precomputed Visibility Volumes and along camera tracks in this level.\nPrecomputing visibility reduces rendering thread time at the cost of some runtime memory and somewhat increased lighting build times." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bPrecomputeVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility = { "bPrecomputeVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData[] = {
		{ "Category", "PrecomputedVisibility" },
		{ "Comment", "/** \n\x09 * Whether to place visibility cells only along camera tracks or only above shadow casting surfaces.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to place visibility cells only along camera tracks or only above shadow casting surfaces." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bPlaceCellsOnlyAlongCameraTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks = { "bPlaceCellsOnlyAlongCameraTracks", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** If true, enables CheckStillInWorld checks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If true, enables CheckStillInWorld checks" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldBoundsChecks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks = { "bEnableWorldBoundsChecks", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData[] = {
		{ "Category", "World" },
		{ "DisplayName", "DEPRECATED_bEnableNavigationSystem" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableNavigationSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem = { "bEnableNavigationSystem", nullptr, (EPropertyFlags)0x0020080000004014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** if set to false AI system will not get created. Use it to disable all AI-related activity on a map */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to false AI system will not get created. Use it to disable all AI-related activity on a map" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableAISystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem = { "bEnableAISystem", nullptr, (EPropertyFlags)0x00200c0000004015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** \n\x09 * Enables tools for composing a tiled world. \n\x09 * Level has to be saved and all sub-levels removed before enabling this option.\n\x09 */" },
		{ "EditCondition", "WorldPartition == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Enables tools for composing a tiled world.\nLevel has to be saved and all sub-levels removed before enabling this option." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldComposition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition = { "bEnableWorldComposition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/**\n\x09 * Enables client-side streaming volumes instead of server-side.\n\x09 * Expected usage scenario: server has all streaming levels always loaded, clients independently stream levels in/out based on streaming volumes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Enables client-side streaming volumes instead of server-side.\nExpected usage scenario: server has all streaming levels always loaded, clients independently stream levels in/out based on streaming volumes." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bUseClientSideLevelStreamingVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes = { "bUseClientSideLevelStreamingVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** World origin will shift to a camera position when camera goes far away from current origin */" },
		{ "EditCondition", "bEnableWorldComposition" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "World origin will shift to a camera position when camera goes far away from current origin" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableWorldOriginRebasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing = { "bEnableWorldOriginRebasing", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData[] = {
		{ "Comment", "/** if set to true, when we call GetGravityZ we assume WorldGravityZ has already been initialized and skip the lookup of DefaultGravityZ and GlobalGravityZ */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "if set to true, when we call GetGravityZ we assume WorldGravityZ has already been initialized and skip the lookup of DefaultGravityZ and GlobalGravityZ" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bWorldGravitySet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet = { "bWorldGravitySet", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** If set to true we will use GlobalGravityZ instead of project setting DefaultGravityZ */" },
		{ "DisplayName", "Override World Gravity" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set to true we will use GlobalGravityZ instead of project setting DefaultGravityZ" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bGlobalGravitySet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet = { "bGlobalGravitySet", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** \n\x09 * Causes the BSP build to generate as few sections as possible.\n\x09 * This is useful when you need to reduce draw calls but can reduce texture streaming efficiency and effective lightmap resolution.\n\x09 * Note - changes require a rebuild to propagate.  Also, be sure to select all surfaces and make sure they all have the same flags to minimize section count.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Causes the BSP build to generate as few sections as possible.\nThis is useful when you need to reduce draw calls but can reduce texture streaming efficiency and effective lightmap resolution.\nNote - changes require a rebuild to propagate.  Also, be sure to select all surfaces and make sure they all have the same flags to minimize section count." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bMinimizeBSPSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections = { "bMinimizeBSPSections", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** \n\x09 * Whether to force lightmaps and other precomputed lighting to not be created even when the engine thinks they are needed.\n\x09 * This is useful for improving iteration in levels with fully dynamic lighting and shadowing.\n\x09 * Note that any lighting and shadowing interactions that are usually precomputed will be lost if this is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether to force lightmaps and other precomputed lighting to not be created even when the engine thinks they are needed.\nThis is useful for improving iteration in levels with fully dynamic lighting and shadowing.\nNote that any lighting and shadowing interactions that are usually precomputed will be lost if this is enabled." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bForceNoPrecomputedLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting = { "bForceNoPrecomputedLighting", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData[] = {
		{ "Comment", "/** when this flag is set, more time is allocated to background loading (replicated) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "when this flag is set, more time is allocated to background loading (replicated)" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bHighPriorityLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading = { "bHighPriorityLoading", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData[] = {
		{ "Comment", "/** copy of bHighPriorityLoading that is not replicated, for clientside-only loading operations */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "copy of bHighPriorityLoading that is not replicated, for clientside-only loading operations" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bHighPriorityLoadingLocal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal = { "bHighPriorityLoadingLocal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bOverrideDefaultBroadphaseSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings = { "bOverrideDefaultBroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** If set to true, all eligible actors in this level will be added to a single cluster representing the entire level (used for small sublevels) */" },
		{ "DisplayAfter", "HierarchicalLODSetup" },
		{ "EditCondition", "WorldPartition == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set to true, all eligible actors in this level will be added to a single cluster representing the entire level (used for small sublevels)" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bGenerateSingleClusterForLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel = { "bGenerateSingleClusterForLevel", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether Foliage actors of this world contain their grid size in their name. This should only be changed by UWorldPartitionFoliageBuilder or when creating new worlds so that older worlds are unaffected\n\x09 * and is used by the UActorPartitionSubsystem to find existing foliage actors by name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether Foliage actors of this world contain their grid size in their name. This should only be changed by UWorldPartitionFoliageBuilder or when creating new worlds so that older worlds are unaffected\nand is used by the UActorPartitionSubsystem to find existing foliage actors by name." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bIncludeGridSizeInNameForFoliageActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors = { "bIncludeGridSizeInNameForFoliageActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether partitioned actors of this world contain their grid size in their name. This should only be changed when creating new worlds so that older worlds are unaffected\n\x09 * and is used by the UActorPartitionSubsystem to find existing foliage actors by name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Whether partitioned actors of this world contain their grid size in their name. This should only be changed when creating new worlds so that older worlds are unaffected\nand is used by the UActorPartitionSubsystem to find existing foliage actors by name." },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bIncludeGridSizeInNameForPartitionedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors = { "bIncludeGridSizeInNameForPartitionedActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_AISystemClass_MetaData[] = {
		{ "Category", "AI" },
		{ "editcondition", "bEnableAISystem" },
		{ "MetaClass", "/Script/Engine.AISystemBase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_AISystemClass = { "AISystemClass", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, AISystemClass), Z_Construct_UClass_UAISystemBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AISystemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AISystemClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LevelInstancePivotOffset_MetaData[] = {
		{ "Comment", "/** Additional transform applied when applying LevelStreaming Transform to LevelInstance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Additional transform applied when applying LevelStreaming Transform to LevelInstance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LevelInstancePivotOffset = { "LevelInstancePivotOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, LevelInstancePivotOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LevelInstancePivotOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LevelInstancePivotOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Holds parameters for NavigationSystem's creation. Set to Null will result\n\x09 *\x09in NavigationSystem instance not being created for this world. Note that\n\x09 *\x09if set NavigationSystemConfigOverride will be used instead. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Holds parameters for NavigationSystem's creation. Set to Null will result\n    in NavigationSystem instance not being created for this world. Note that\n    if set NavigationSystemConfigOverride will be used instead." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig = { "NavigationSystemConfig", nullptr, (EPropertyFlags)0x00260c000208001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData[] = {
		{ "Comment", "/** Overrides NavigationSystemConfig. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Overrides NavigationSystemConfig." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride = { "NavigationSystemConfigOverride", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, NavigationSystemConfigOverride), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldPartition_MetaData[] = {
		{ "Category", "WorldPartitionSetup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldPartition = { "WorldPartition", nullptr, (EPropertyFlags)0x00260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, WorldPartition), Z_Construct_UClass_UWorldPartition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldPartition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldPartition_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData[] = {
		{ "Category", "Foliage" },
		{ "Comment", "/** Size of the grid for instanced foliage actors, only used for partitioned worlds */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Size of the grid for instanced foliage actors, only used for partitioned worlds" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_InstancedFoliageGridSize = { "InstancedFoliageGridSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, InstancedFoliageGridSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LandscapeSplineMeshesGridSize_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LandscapeSplineMeshesGridSize = { "LandscapeSplineMeshesGridSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, LandscapeSplineMeshesGridSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LandscapeSplineMeshesGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LandscapeSplineMeshesGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataChunkGridSize_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Size of the grid for navigation data chunk actors */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Size of the grid for navigation data chunk actors" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataChunkGridSize = { "NavigationDataChunkGridSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, NavigationDataChunkGridSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataChunkGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataChunkGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataBuilderLoadingCellSize_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ClampMin", "5000" },
		{ "Comment", "/**\n\x09 * Loading cell size used when building navigation data iteratively.\n\x09 * The actual cell size used will be rounded using the NavigationDataChunkGridSize.\n\x09 * It's recommended to use a value as high as the hardware memory allows to load. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Loading cell size used when building navigation data iteratively.\nThe actual cell size used will be rounded using the NavigationDataChunkGridSize.\nIt's recommended to use a value as high as the hardware memory allows to load." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataBuilderLoadingCellSize = { "NavigationDataBuilderLoadingCellSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, NavigationDataBuilderLoadingCellSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataBuilderLoadingCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataBuilderLoadingCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPlacementGridSize_MetaData[] = {
		{ "Comment", "/** Default size of the grid for placed elements from the editor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default size of the grid for placed elements from the editor" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPlacementGridSize = { "DefaultPlacementGridSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultPlacementGridSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPlacementGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPlacementGridSize_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers_Inner = { "BaseNavmeshDataLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataLayerAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/**\n\x09 * A list of runtime data layers that should be included in the base navmesh.\n\x09 * Editor data layers and actors outside data layers will be included.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "A list of runtime data layers that should be included in the base navmesh.\nEditor data layers and actors outside data layers will be included." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers = { "BaseNavmeshDataLayers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, BaseNavmeshDataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData[] = {
		{ "Category", "VR" },
		{ "Comment", "/** scale of 1uu to 1m in real world measurements, for HMD and other physically tracked devices (e.g. 1uu = 1cm would be 100.0) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "scale of 1uu to 1m in real world measurements, for HMD and other physically tracked devices (e.g. 1uu = 1cm would be 100.0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters = { "WorldToMeters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, WorldToMeters), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "// any actor falling below this level gets destroyed\n" },
		{ "editcondition", "bEnableWorldBoundsChecks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "any actor falling below this level gets destroyed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ = { "KillZ", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, KillZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "// The type of damage inflicted when a actor falls below KillZ\n" },
		{ "editcondition", "bEnableWorldBoundsChecks" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The type of damage inflicted when a actor falls below KillZ" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType = { "KillZDamageType", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, KillZDamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData[] = {
		{ "Comment", "// current gravity actually being used\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "current gravity actually being used" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ = { "WorldGravityZ", "OnRep_WorldGravityZ", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, WorldGravityZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// optional level specific gravity override set by level designer\n" },
		{ "editcondition", "bGlobalGravitySet" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "optional level specific gravity override set by level designer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ = { "GlobalGravityZ", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, GlobalGravityZ), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// level specific default physics volume\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "level specific default physics volume" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass = { "DefaultPhysicsVolumeClass", nullptr, (EPropertyFlags)0x0014040002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultPhysicsVolumeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADefaultPhysicsVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// optional level specific collision handler\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "optional level specific collision handler" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass = { "PhysicsCollisionHandlerClass", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, PhysicsCollisionHandlerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData[] = {
		{ "Category", "GameMode" },
		{ "Comment", "/** The default GameMode to use when starting this map in the game. If this value is NULL, the INI setting for default game type is used. */" },
		{ "DisplayName", "GameMode Override" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "The default GameMode to use when starting this map in the game. If this value is NULL, the INI setting for default game type is used." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode = { "DefaultGameMode", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultGameMode), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData[] = {
		{ "Comment", "/** Class of GameNetworkManager to spawn for network games */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Class of GameNetworkManager to spawn for network games" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass = { "GameNetworkManagerClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, GameNetworkManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameNetworkManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** Maximum size of textures for packed light and shadow maps */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum size of textures for packed light and shadow maps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize = { "PackedLightAndShadowMapTextureSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, PackedLightAndShadowMapTextureSize), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData[] = {
		{ "Category", "World" },
		{ "Comment", "/** Default color scale for the level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default color scale for the level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale = { "DefaultColorScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultColorScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Max occlusion distance used by mesh distance fields, overridden if there is a movable skylight. */" },
		{ "DisplayName", "Default Max DistanceField Occlusion Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Max occlusion distance used by mesh distance fields, overridden if there is a movable skylight." },
		{ "UIMax", "5000" },
		{ "UIMin", "500" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance = { "DefaultMaxDistanceFieldOcclusionDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultMaxDistanceFieldOcclusionDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Distance from the camera that the global distance field should cover. */" },
		{ "DisplayName", "Global DistanceField View Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Distance from the camera that the global distance field should cover." },
		{ "UIMax", "100000" },
		{ "UIMin", "10000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance = { "GlobalDistanceFieldViewDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, GlobalDistanceFieldViewDistance), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** \n\x09 * Controls the intensity of self-shadowing from capsule indirect shadows. \n\x09 * These types of shadows use approximate occluder representations, so reducing self-shadowing intensity can hide those artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Controls the intensity of self-shadowing from capsule indirect shadows.\nThese types of shadows use approximate occluder representations, so reducing self-shadowing intensity can hide those artifacts." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity = { "DynamicIndirectShadowsSelfShadowingIntensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DynamicIndirectShadowsSelfShadowingIntensity), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** LIGHTMASS RELATED SETTINGS **/" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "LIGHTMASS RELATED SETTINGS *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, LightmassSettings), Z_Construct_UScriptStruct_FLightmassWorldInfoSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings_MetaData)) }; // 1094695456
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Default reverb settings used by audio volumes.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default reverb settings used by audio volumes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings = { "DefaultReverbSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultReverbSettings), Z_Construct_UScriptStruct_FReverbSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings_MetaData)) }; // 3785251137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Default interior settings applied to sounds that have \"apply ambient volumes\" set to true on their SoundClass. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default interior settings applied to sounds that have \"apply ambient volumes\" set to true on their SoundClass." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings = { "DefaultAmbientZoneSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultAmbientZoneSettings), Z_Construct_UScriptStruct_FInteriorSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings_MetaData)) }; // 1676220257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Default Base SoundMix.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Default Base SoundMix." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix = { "DefaultBaseSoundMix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultBaseSoundMix), Z_Construct_UClass_USoundMix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** If set overrides the level settings and global project settings */" },
		{ "EditCondition", "WorldPartition == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set overrides the level settings and global project settings" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset = { "HLODSetupAsset", nullptr, (EPropertyFlags)0x0014000800004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, HLODSetupAsset), Z_Construct_UClass_UHierarchicalLODSetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** If set overrides the project-wide base material used for Proxy Materials */" },
		{ "EditCondition", "WorldPartition == nullptr && HLODSetupAsset == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If set overrides the project-wide base material used for Proxy Materials" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial = { "OverrideBaseMaterial", nullptr, (EPropertyFlags)0x0014000800004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, OverrideBaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_Inner = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHierarchicalSimplification, METADATA_PARAMS(nullptr, 0) }; // 2841234047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** Hierarchical LOD Setup */" },
		{ "EditCondition", "WorldPartition == nullptr && HLODSetupAsset == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Hierarchical LOD Setup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup = { "HierarchicalLODSetup", nullptr, (EPropertyFlags)0x0020080800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, HierarchicalLODSetup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_MetaData)) }; // 2841234047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels = { "NumHLODLevels", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, NumHLODLevels), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODBakingTransform_MetaData[] = {
		{ "Category", "HLODSystem" },
		{ "Comment", "/** Specify the transform to apply to the source meshes when building HLODs. */" },
		{ "DisplayName", "HLOD Baking Transform" },
		{ "EditCondition", "WorldPartition == nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Specify the transform to apply to the source meshes when building HLODs." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODBakingTransform = { "HLODBakingTransform", nullptr, (EPropertyFlags)0x0010040800004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, HLODBakingTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODBakingTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODBakingTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks = { "BookMarks", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BookMarks, AWorldSettings), nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, BookMarks), Z_Construct_UClass_UBookMark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData[] = {
		{ "Comment", "/** \n\x09 * Normally 1 - scales real time passage.\n\x09 * Warning - most use cases should use GetEffectiveTimeDilation() instead of reading from this directly\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Normally 1 - scales real time passage.\nWarning - most use cases should use GetEffectiveTimeDilation() instead of reading from this directly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, TimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_CinematicTimeDilation_MetaData[] = {
		{ "Comment", "// Additional time dilation used by Sequencer slomo track.  Transient because this is often \n// temporarily modified by the editor when previewing slow motion effects, yet we don't want it saved or loaded from level packages.\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Additional time dilation used by Sequencer slomo track.  Transient because this is often\ntemporarily modified by the editor when previewing slow motion effects, yet we don't want it saved or loaded from level packages." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_CinematicTimeDilation = { "CinematicTimeDilation", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, CinematicTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_CinematicTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_CinematicTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData[] = {
		{ "Comment", "// Additional TimeDilation used to control demo playback speed\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Additional TimeDilation used to control demo playback speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation = { "DemoPlayTimeDilation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DemoPlayTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Lowest acceptable global time dilation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Lowest acceptable global time dilation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation = { "MinGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, MinGlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Highest acceptable global time dilation. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Highest acceptable global time dilation." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation = { "MaxGlobalTimeDilation", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, MaxGlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smallest possible frametime, not considering dilation. Equiv to 1/FastestFPS. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Smallest possible frametime, not considering dilation. Equiv to 1/FastestFPS." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime = { "MinUndilatedFrameTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, MinUndilatedFrameTime), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData[] = {
		{ "Category", "Tick" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Largest possible frametime, not considering dilation. Equiv to 1/SlowestFPS. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Largest possible frametime, not considering dilation. Equiv to 1/SlowestFPS." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime = { "MaxUndilatedFrameTime", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, MaxUndilatedFrameTime), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData[] = {
		{ "Category", "Broadphase" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings = { "BroadphaseSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, BroadphaseSettings), Z_Construct_UScriptStruct_FBroadphaseSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings_MetaData)) }; // 2862916817
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_Inner = { "ReplicationViewers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetViewer, METADATA_PARAMS(nullptr, 0) }; // 2747595896
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData[] = {
		{ "Comment", "/** valid only during replication - information about the player(s) being replicated to\n\x09 * (there could be more than one in the case of a splitscreen client)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "valid only during replication - information about the player(s) being replicated to\n(there could be more than one in the case of a splitscreen client)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers = { "ReplicationViewers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, ReplicationViewers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_MetaData)) }; // 2747595896
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_PauserPlayerState_MetaData[] = {
		{ "Comment", "// If paused, PlayerState of person pausing the game.\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "If paused, PlayerState of person pausing the game." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_PauserPlayerState = { "PauserPlayerState", nullptr, (EPropertyFlags)0x0024080000002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, PauserPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PauserPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_PauserPlayerState_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultWorldPartitionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultWorldPartitionSettings = { "DefaultWorldPartitionSettings", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultWorldPartitionSettings), Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultWorldPartitionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultWorldPartitionSettings_MetaData)) }; // 3921819268
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData[] = {
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Maximum number of bookmarks allowed.\n\x09 * Changing this will change the allocation of the bookmarks array, and when shrinking\n\x09 * may cause some bookmarks to become eligible for GC.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Maximum number of bookmarks allowed.\nChanging this will change the allocation of the bookmarks array, and when shrinking\nmay cause some bookmarks to become eligible for GC." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks = { "MaxNumberOfBookmarks", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, MaxNumberOfBookmarks), METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "AllowedClasses", "/Script/Engine.BookmarkBase" },
		{ "Comment", "/**\n\x09 * Class that will be used when creating new bookmarks.\n\x09 * Old bookmarks may be recreated with the new class where possible.\n\x09 */" },
		{ "ExactClass", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Class that will be used when creating new bookmarks.\nOld bookmarks may be recreated with the new class where possible." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass = { "DefaultBookmarkClass", nullptr, (EPropertyFlags)0x0044000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, DefaultBookmarkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBookmarkBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_Inner = { "BookmarkArray", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBookmarkBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray = { "BookmarkArray", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, BookmarkArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData[] = {
		{ "Comment", "// Tracked so we can detect changes from Config\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "Tracked so we can detect changes from Config" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass = { "LastBookmarkClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWorldSettings, LastBookmarkClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBookmarkBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData[] = {
		{ "Comment", "//DEPRECATED\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
		{ "ToolTip", "DEPRECATED" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableHierarchicalLODSystem_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem = { "bEnableHierarchicalLODSystem", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "As of UE 5.1 all worlds are large. Set UE_USE_UE4_WORLD_MAX in EngineDefines.h to alter this." },
		{ "ModuleRelativePath", "Classes/GameFramework/WorldSettings.h" },
	};
#endif
	void Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds_SetBit(void* Obj)
	{
		((AWorldSettings*)Obj)->bEnableLargeWorlds_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds = { "bEnableLargeWorlds", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AWorldSettings), &Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_VisibilityAggressiveness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPrecomputeVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bPlaceCellsOnlyAlongCameraTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldBoundsChecks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableNavigationSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableAISystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldComposition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bUseClientSideLevelStreamingVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableWorldOriginRebasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bWorldGravitySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGlobalGravitySet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bMinimizeBSPSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bForceNoPrecomputedLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bHighPriorityLoadingLocal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bOverrideDefaultBroadphaseSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bGenerateSingleClusterForLevel,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForFoliageActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bIncludeGridSizeInNameForPartitionedActors,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_AISystemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LevelInstancePivotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationSystemConfigOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldPartition,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_InstancedFoliageGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LandscapeSplineMeshesGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataChunkGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NavigationDataBuilderLoadingCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPlacementGridSize,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BaseNavmeshDataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldToMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_KillZDamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_WorldGravityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalGravityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultPhysicsVolumeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_PhysicsCollisionHandlerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GameNetworkManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_PackedLightAndShadowMapTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultMaxDistanceFieldOcclusionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_GlobalDistanceFieldViewDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DynamicIndirectShadowsSelfShadowingIntensity,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LightmassSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultReverbSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultAmbientZoneSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBaseSoundMix,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODSetupAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_OverrideBaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HierarchicalLODSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_NumHLODLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_HLODBakingTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookMarks,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_TimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_CinematicTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DemoPlayTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxGlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MinUndilatedFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxUndilatedFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BroadphaseSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_ReplicationViewers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_AssetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_PauserPlayerState,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultWorldPartitionSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_MaxNumberOfBookmarks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_DefaultBookmarkClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_BookmarkArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_LastBookmarkClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableHierarchicalLODSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldSettings_Statics::NewProp_bEnableLargeWorlds,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWorldSettings_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(AWorldSettings, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldSettings_Statics::ClassParams = {
		&AWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorldSettings_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldSettings()
	{
		if (!Z_Registration_Info_UClass_AWorldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldSettings.OuterSingleton, Z_Construct_UClass_AWorldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldSettings>()
	{
		return AWorldSettings::StaticClass();
	}

	void AWorldSettings::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bHighPriorityLoading(TEXT("bHighPriorityLoading"));
		static const FName Name_WorldGravityZ(TEXT("WorldGravityZ"));
		static const FName Name_TimeDilation(TEXT("TimeDilation"));
		static const FName Name_CinematicTimeDilation(TEXT("CinematicTimeDilation"));
		static const FName Name_PauserPlayerState(TEXT("PauserPlayerState"));

		const bool bIsValid = true
			&& Name_bHighPriorityLoading == ClassReps[(int32)ENetFields_Private::bHighPriorityLoading].Property->GetFName()
			&& Name_WorldGravityZ == ClassReps[(int32)ENetFields_Private::WorldGravityZ].Property->GetFName()
			&& Name_TimeDilation == ClassReps[(int32)ENetFields_Private::TimeDilation].Property->GetFName()
			&& Name_CinematicTimeDilation == ClassReps[(int32)ENetFields_Private::CinematicTimeDilation].Property->GetFName()
			&& Name_PauserPlayerState == ClassReps[(int32)ENetFields_Private::PauserPlayerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWorldSettings"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldSettings);
	AWorldSettings::~AWorldSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldSettings)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::EnumInfo[] = {
		{ EVisibilityAggressiveness_StaticEnum, TEXT("EVisibilityAggressiveness"), &Z_Registration_Info_UEnum_EVisibilityAggressiveness, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3816150363U) },
		{ EVolumeLightingMethod_StaticEnum, TEXT("EVolumeLightingMethod"), &Z_Registration_Info_UEnum_EVolumeLightingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 48692031U) },
		{ EHierarchicalSimplificationMethod_StaticEnum, TEXT("EHierarchicalSimplificationMethod"), &Z_Registration_Info_UEnum_EHierarchicalSimplificationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 670895966U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ScriptStructInfo[] = {
		{ FLightmassWorldInfoSettings::StaticStruct, Z_Construct_UScriptStruct_FLightmassWorldInfoSettings_Statics::NewStructOps, TEXT("LightmassWorldInfoSettings"), &Z_Registration_Info_UScriptStruct_LightmassWorldInfoSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightmassWorldInfoSettings), 1094695456U) },
		{ FNetViewer::StaticStruct, Z_Construct_UScriptStruct_FNetViewer_Statics::NewStructOps, TEXT("NetViewer"), &Z_Registration_Info_UScriptStruct_NetViewer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetViewer), 2747595896U) },
		{ FHierarchicalSimplification::StaticStruct, Z_Construct_UScriptStruct_FHierarchicalSimplification_Statics::NewStructOps, TEXT("HierarchicalSimplification"), &Z_Registration_Info_UScriptStruct_HierarchicalSimplification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHierarchicalSimplification), 2841234047U) },
		{ FBroadphaseSettings::StaticStruct, Z_Construct_UScriptStruct_FBroadphaseSettings_Statics::NewStructOps, TEXT("BroadphaseSettings"), &Z_Registration_Info_UScriptStruct_BroadphaseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBroadphaseSettings), 2862916817U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHierarchicalLODSetup, UHierarchicalLODSetup::StaticClass, TEXT("UHierarchicalLODSetup"), &Z_Registration_Info_UClass_UHierarchicalLODSetup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHierarchicalLODSetup), 3972329506U) },
		{ Z_Construct_UClass_AWorldSettings, AWorldSettings::StaticClass, TEXT("AWorldSettings"), &Z_Registration_Info_UClass_AWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldSettings), 642432472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_1707288059(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_WorldSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
