// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SteamAudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplAudioEngine();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplConvolutionType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplRayTracerType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSimulationType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EPhononMaterial();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EQualitySettings();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void USteamAudioSettings::StaticRegisterNativesUSteamAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamAudioSettings);
	UClass* Z_Construct_UClass_USteamAudioSettings_NoRegister()
	{
		return USteamAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_USteamAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputSubmix;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AudioEngine_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEngine_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AudioEngine;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RayTracer_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracer_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RayTracer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConvolutionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvolutionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConvolutionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportBSPGeometry_MetaData[];
#endif
		static void NewProp_ExportBSPGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExportBSPGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportLandscapeGeometry_MetaData[];
#endif
		static void NewProp_ExportLandscapeGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExportLandscapeGeometry;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StaticMeshMaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StaticMeshMaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLowFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshLowFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMidFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshMidFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshHighFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshHighFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLowFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshLowFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMidFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshMidFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshHighFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshHighFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshScattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticMeshScattering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BSPMaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPMaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BSPMaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPLowFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPLowFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPMidFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPMidFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPHighFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPHighFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPLowFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPLowFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPMidFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPMidFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPHighFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPHighFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BSPScattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BSPScattering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeMaterialPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeMaterialPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLowFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeLowFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMidFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeMidFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeHighFreqAbsorption_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeHighFreqAbsorption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLowFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeLowFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMidFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeMidFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeHighFreqTransmission_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeHighFreqTransmission;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeScattering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandscapeScattering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionSampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OcclusionSampleCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ListenerReverbSimulationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerReverbSimulationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ListenerReverbSimulationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListenerReverbContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ListenerReverbContribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectImpulseResponseOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndirectImpulseResponseOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectImpulseResponseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectImpulseResponseDuration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IndirectSpatializationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndirectSpatializationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IndirectSpatializationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrradianceMinDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IrradianceMinDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSources_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSources;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RealtimeQualityPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeQualityPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RealtimeQualityPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealTimeCPUCoresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealTimeCPUCoresPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealtimeBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealtimeRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealtimeSecondaryRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RealtimeSecondaryRays;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakedQualityPreset_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedQualityPreset_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakedQualityPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingCPUCoresPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakingCPUCoresPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakedBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakedRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedSecondaryRays_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BakedSecondaryRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxComputeUnits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxComputeUnits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractionComputeUnitsForIRUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionComputeUnitsForIRUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANIndirectImpulseResponseOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TANIndirectImpulseResponseOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANIndirectImpulseResponseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TANIndirectImpulseResponseDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TANMaxSources_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TANMaxSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadeonRaysBakingBatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RadeonRaysBakingBatchSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamAudioSettings.h" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OutputSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OutputSubmix = { "OutputSubmix", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, OutputSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OutputSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OutputSubmix_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Which audio engine to use.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Which audio engine to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine = { "AudioEngine", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, AudioEngine), Z_Construct_UEnum_SteamAudio_EIplAudioEngine, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_MetaData)) }; // 3928391353
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Which ray tracer type to use.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Which ray tracer type to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer = { "RayTracer", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RayTracer), Z_Construct_UEnum_SteamAudio_EIplRayTracerType, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer_MetaData)) }; // 3316845201
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Which convolution renderer to use.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Which convolution renderer to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType = { "ConvolutionType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, ConvolutionType), Z_Construct_UEnum_SteamAudio_EIplConvolutionType, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType_MetaData)) }; // 1013825717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry_MetaData[] = {
		{ "Category", "Scene Export" },
		{ "Comment", "// Whether or not to export BSP geometry.\n" },
		{ "DisplayName", "Export BSP Geometry" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Whether or not to export BSP geometry." },
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->ExportBSPGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry = { "ExportBSPGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry_MetaData[] = {
		{ "Category", "Scene Export" },
		{ "Comment", "// Whether or not to export Landscape geometry.\n" },
		{ "DisplayName", "Export Landscape Geometry" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Whether or not to export Landscape geometry." },
	};
#endif
	void Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry_SetBit(void* Obj)
	{
		((USteamAudioSettings*)Obj)->ExportLandscapeGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry = { "ExportLandscapeGeometry", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USteamAudioSettings), &Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "Comment", "// Preset material settings for Static Mesh actors.\n" },
		{ "DisplayName", "Material Preset" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Preset material settings for Static Mesh actors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset = { "StaticMeshMaterialPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshMaterialPreset), Z_Construct_UEnum_SteamAudio_EPhononMaterial, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset_MetaData)) }; // 1889328730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqAbsorption = { "StaticMeshLowFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshLowFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqAbsorption = { "StaticMeshMidFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshMidFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs high frequency sound.\n" },
		{ "DisplayName", "High Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqAbsorption = { "StaticMeshHighFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshHighFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqTransmission = { "StaticMeshLowFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshLowFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqTransmission = { "StaticMeshMidFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshMidFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits high frequency sound.\n" },
		{ "DisplayName", "High Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqTransmission = { "StaticMeshHighFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshHighFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshScattering_MetaData[] = {
		{ "Category", "Scene Export|Default Static Mesh Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\n// surfaces with a low scattering value reflect sound in a mirror-like manner.\n" },
		{ "DisplayName", "Scattering" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\nsurfaces with a low scattering value reflect sound in a mirror-like manner." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshScattering = { "StaticMeshScattering", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, StaticMeshScattering), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshScattering_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "Comment", "// Preset material settings for BSP geometry.\n" },
		{ "DisplayName", "Material Preset" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Preset material settings for BSP geometry." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset = { "BSPMaterialPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPMaterialPreset), Z_Construct_UEnum_SteamAudio_EPhononMaterial, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset_MetaData)) }; // 1889328730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqAbsorption = { "BSPLowFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPLowFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqAbsorption = { "BSPMidFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPMidFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs high frequency sound.\n" },
		{ "DisplayName", "High Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqAbsorption = { "BSPHighFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPHighFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqTransmission = { "BSPLowFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPLowFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqTransmission = { "BSPMidFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPMidFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits high frequency sound.\n" },
		{ "DisplayName", "High Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqTransmission = { "BSPHighFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPHighFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPScattering_MetaData[] = {
		{ "Category", "Scene Export|Default BSP Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\n// surfaces with a low scattering value reflect sound in a mirror-like manner.\n" },
		{ "DisplayName", "Scattering" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\nsurfaces with a low scattering value reflect sound in a mirror-like manner." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPScattering = { "BSPScattering", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BSPScattering), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPScattering_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "Comment", "// Preset material settings for landscape actors.\n" },
		{ "DisplayName", "Material Preset" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Preset material settings for landscape actors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset = { "LandscapeMaterialPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeMaterialPreset), Z_Construct_UEnum_SteamAudio_EPhononMaterial, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset_MetaData)) }; // 1889328730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqAbsorption = { "LandscapeLowFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeLowFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqAbsorption = { "LandscapeMidFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeMidFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqAbsorption_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material absorbs high frequency sound.\n" },
		{ "DisplayName", "High Frequency Absorption" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material absorbs high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqAbsorption = { "LandscapeHighFreqAbsorption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeHighFreqAbsorption), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqAbsorption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits low frequency sound.\n" },
		{ "DisplayName", "Low Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits low frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqTransmission = { "LandscapeLowFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeLowFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits mid frequency sound.\n" },
		{ "DisplayName", "Mid Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits mid frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqTransmission = { "LandscapeMidFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeMidFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqTransmission_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much this material transmits high frequency sound.\n" },
		{ "DisplayName", "High Frequency Transmission" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much this material transmits high frequency sound." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqTransmission = { "LandscapeHighFreqTransmission", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeHighFreqTransmission), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqTransmission_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqTransmission_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeScattering_MetaData[] = {
		{ "Category", "Scene Export|Default Landscape Material" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\n// surfaces with a low scattering value reflect sound in a mirror-like manner.\n" },
		{ "DisplayName", "Scattering" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Specifies how \"rough\" the surface is. Surfaces with a high scattering value randomly reflect sound in all directions;\nsurfaces with a low scattering value reflect sound in a mirror-like manner." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeScattering = { "LandscapeScattering", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, LandscapeScattering), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeScattering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OcclusionSampleCount_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "Comment", "// The number of rays to trace from the listener to a source when simulating volumetric occlusion. Increasing this number increases the smoothness of occlusion transitions, but also increases CPU usage and memory consumption.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "The number of rays to trace from the listener to a source when simulating volumetric occlusion. Increasing this number increases the smoothness of occlusion transitions, but also increases CPU usage and memory consumption." },
		{ "UIMax", "1024" },
		{ "UIMin", "4" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OcclusionSampleCount = { "OcclusionSampleCount", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, OcclusionSampleCount), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OcclusionSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OcclusionSampleCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType_MetaData[] = {
		{ "Category", "Reverb" },
		{ "Comment", "// How to simulate listener-centric reverb.\n" },
		{ "DisplayName", "Listener-Centric Reverb Simulation" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How to simulate listener-centric reverb." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType = { "ListenerReverbSimulationType", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, ListenerReverbSimulationType), Z_Construct_UEnum_SteamAudio_EIplSimulationType, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType_MetaData)) }; // 1665621229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbContribution_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much listener-centric reverb should contribute.\n" },
		{ "DisplayName", "Listener-Centric Reverb Contribution" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How much listener-centric reverb should contribute." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbContribution = { "ListenerReverbContribution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, ListenerReverbContribution), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbContribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseOrder_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "// Output of indirect propagation is stored in ambisonics of this order.\n" },
		{ "DisplayName", "Ambisonics Order" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Output of indirect propagation is stored in ambisonics of this order." },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseOrder = { "IndirectImpulseResponseOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, IndirectImpulseResponseOrder), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseDuration_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Length of impulse response to compute for each sound source.\n" },
		{ "DisplayName", "Impulse Response Duration" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Length of impulse response to compute for each sound source." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseDuration = { "IndirectImpulseResponseDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, IndirectImpulseResponseDuration), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseDuration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod_MetaData[] = {
		{ "Category", "Reverb" },
		{ "Comment", "// How to spatialize indirect sound.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "How to spatialize indirect sound." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod = { "IndirectSpatializationMethod", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, IndirectSpatializationMethod), Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod_MetaData)) }; // 3979568022
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IrradianceMinDistance_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// The minimum distance between a source and a scene surface, used when calculating the energy received at the surface from the source during indirect sound simulation.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "The minimum distance between a source and a scene surface, used when calculating the energy received at the surface from the source during indirect sound simulation." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IrradianceMinDistance = { "IrradianceMinDistance", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, IrradianceMinDistance), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IrradianceMinDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IrradianceMinDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxSources_MetaData[] = {
		{ "Category", "Reverb" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "Comment", "// Maximum number of supported sources.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Maximum number of supported sources." },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxSources = { "MaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, MaxSources), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxSources_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset_MetaData[] = {
		{ "Category", "Reverb|Real-Time Quality Settings" },
		{ "Comment", "// Preset quality settings for realtime simulation.\n" },
		{ "DisplayName", "Quality Preset" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Preset quality settings for realtime simulation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset = { "RealtimeQualityPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RealtimeQualityPreset), Z_Construct_UEnum_SteamAudio_EQualitySettings, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset_MetaData)) }; // 1817810400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData[] = {
		{ "Category", "Reverb|Real-Time Quality Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Percentage of CPU cores to use on an end user\xe2\x80\x99s machine for performing real-time computation of environmental effects.\n" },
		{ "DisplayName", "Real-time CPU Cores (%)" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Percentage of CPU cores to use on an end user\xe2\x80\x99s machine for performing real-time computation of environmental effects." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage = { "RealTimeCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RealTimeCPUCoresPercentage), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeBounces_MetaData[] = {
		{ "Category", "Reverb|Real-Time Quality Settings" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of bounces for realtime simulation.\n" },
		{ "DisplayName", "Bounces" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of bounces for realtime simulation." },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeBounces = { "RealtimeBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RealtimeBounces), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeRays_MetaData[] = {
		{ "Category", "Reverb|Real-Time Quality Settings" },
		{ "ClampMax", "16384" },
		{ "ClampMin", "512" },
		{ "Comment", "// Number of rays to trace for realtime simulation.\n" },
		{ "DisplayName", "Rays" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of rays to trace for realtime simulation." },
		{ "UIMax", "16384" },
		{ "UIMin", "512" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeRays = { "RealtimeRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RealtimeRays), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeSecondaryRays_MetaData[] = {
		{ "Category", "Reverb|Real-Time Quality Settings" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "128" },
		{ "Comment", "// Number of secondary rays to trace for realtime simulation.\n" },
		{ "DisplayName", "Secondary Rays" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of secondary rays to trace for realtime simulation." },
		{ "UIMax", "4096" },
		{ "UIMin", "128" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeSecondaryRays = { "RealtimeSecondaryRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RealtimeSecondaryRays), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeSecondaryRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeSecondaryRays_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset_MetaData[] = {
		{ "Category", "Reverb|Baked Quality Settings" },
		{ "Comment", "// Preset quality settings for baked simulation.\n" },
		{ "DisplayName", "Quality Preset" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Preset quality settings for baked simulation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset = { "BakedQualityPreset", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BakedQualityPreset), Z_Construct_UEnum_SteamAudio_EQualitySettings, METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset_MetaData)) }; // 1817810400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData[] = {
		{ "Category", "Reverb|Baked Quality Settings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Percentage of CPU cores to use on a developer\xe2\x80\x99s machine for baking environmental effects during the design phase.\n" },
		{ "DisplayName", "Baking CPU Cores (%)" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Percentage of CPU cores to use on a developer\xe2\x80\x99s machine for baking environmental effects during the design phase." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage = { "BakingCPUCoresPercentage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BakingCPUCoresPercentage), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedBounces_MetaData[] = {
		{ "Category", "Reverb|Baked Quality Settings" },
		{ "ClampMax", "256" },
		{ "ClampMin", "16" },
		{ "Comment", "// Number of bounces for baked simulation.\n" },
		{ "DisplayName", "Bounces" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of bounces for baked simulation." },
		{ "UIMax", "256" },
		{ "UIMin", "16" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedBounces = { "BakedBounces", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BakedBounces), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedRays_MetaData[] = {
		{ "Category", "Reverb|Baked Quality Settings" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "8192" },
		{ "Comment", "// Number of rays to shoot for baked simulation.\n" },
		{ "DisplayName", "Rays" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of rays to shoot for baked simulation." },
		{ "UIMax", "65536" },
		{ "UIMin", "8192" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedRays = { "BakedRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BakedRays), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedSecondaryRays_MetaData[] = {
		{ "Category", "Reverb|Baked Quality Settings" },
		{ "ClampMax", "16384" },
		{ "ClampMin", "1024" },
		{ "Comment", "// Number of secondary rays to shoot for baked simulation.\n" },
		{ "DisplayName", "Secondary Rays" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Number of secondary rays to shoot for baked simulation." },
		{ "UIMax", "16384" },
		{ "UIMin", "1024" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedSecondaryRays = { "BakedSecondaryRays", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, BakedSecondaryRays), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedSecondaryRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedSecondaryRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxComputeUnits_MetaData[] = {
		{ "Category", "GPU Resource Reservation" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum number of compute units to reserve on the GPU.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Maximum number of compute units to reserve on the GPU." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxComputeUnits = { "MaxComputeUnits", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, MaxComputeUnits), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxComputeUnits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxComputeUnits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData[] = {
		{ "Category", "GPU Resource Reservation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Fraction of maximum reserved CUs that should be used for impulse response (IR) update.\n" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "Fraction of maximum reserved CUs that should be used for impulse response (IR) update." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate = { "FractionComputeUnitsForIRUpdate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, FractionComputeUnitsForIRUpdate), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseOrder_MetaData[] = {
		{ "Category", "TrueAudio Next Overrides" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "Comment", "// TAN override output of indirect propagation is stored in ambisonics of this order.\n" },
		{ "DisplayName", "Override Ambisonics Order" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "TAN override output of indirect propagation is stored in ambisonics of this order." },
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseOrder = { "TANIndirectImpulseResponseOrder", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, TANIndirectImpulseResponseOrder), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseDuration_MetaData[] = {
		{ "Category", "TrueAudio Next Overrides" },
		{ "ClampMax", "5.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// TAN override length of impulse response to compute for each sound source.\n" },
		{ "DisplayName", "Override Impulse Response Duration" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "TAN override length of impulse response to compute for each sound source." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseDuration = { "TANIndirectImpulseResponseDuration", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, TANIndirectImpulseResponseDuration), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData[] = {
		{ "Category", "TrueAudio Next Overrides" },
		{ "ClampMax", "128" },
		{ "ClampMin", "1" },
		{ "Comment", "// TAN override maximum number of supported sources.\n" },
		{ "DisplayName", "Override Max Sources" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "TAN override maximum number of supported sources." },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources = { "TANMaxSources", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, TANMaxSources), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RadeonRaysBakingBatchSize_MetaData[] = {
		{ "Category", "Radeon Rays" },
		{ "ClampMax", "16" },
		{ "ClampMin", "0" },
		{ "Comment", "// This is the number of probes that are simultaneously baked on the GPU. Increasing this number results in better utilization of available GPU compute resources, \n// at the cost of increased GPU memory consumption. If this number is set too high, you may encounter errors when baking; if this happens, reduce the Baking Batch \n// Size value until baking succeeds.\n" },
		{ "DisplayName", "Baking Batch Size" },
		{ "ModuleRelativePath", "Private/SteamAudioSettings.h" },
		{ "ToolTip", "This is the number of probes that are simultaneously baked on the GPU. Increasing this number results in better utilization of available GPU compute resources,\nat the cost of increased GPU memory consumption. If this number is set too high, you may encounter errors when baking; if this happens, reduce the Baking Batch\nSize value until baking succeeds." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RadeonRaysBakingBatchSize = { "RadeonRaysBakingBatchSize", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamAudioSettings, RadeonRaysBakingBatchSize), METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RadeonRaysBakingBatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RadeonRaysBakingBatchSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OutputSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_AudioEngine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RayTracer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ConvolutionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportBSPGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ExportLandscapeGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshLowFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshMidFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshHighFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_StaticMeshScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPLowFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPMidFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPHighFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BSPScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMaterialPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqAbsorption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeLowFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeMidFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeHighFreqTransmission,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_LandscapeScattering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_OcclusionSampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbSimulationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_ListenerReverbContribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectImpulseResponseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IndirectSpatializationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_IrradianceMinDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeQualityPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealTimeCPUCoresPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RealtimeSecondaryRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedQualityPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakingCPUCoresPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_BakedSecondaryRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_MaxComputeUnits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_FractionComputeUnitsForIRUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANIndirectImpulseResponseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_TANMaxSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamAudioSettings_Statics::NewProp_RadeonRaysBakingBatchSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams = {
		&USteamAudioSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamAudioSettings()
	{
		if (!Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton, Z_Construct_UClass_USteamAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamAudioSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USteamAudioSettings>()
	{
		return USteamAudioSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamAudioSettings);
	USteamAudioSettings::~USteamAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_SteamAudioSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_SteamAudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamAudioSettings, USteamAudioSettings::StaticClass, TEXT("USteamAudioSettings"), &Z_Registration_Info_UClass_USteamAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamAudioSettings), 991158385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_SteamAudioSettings_h_3160848762(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_SteamAudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_SteamAudioSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
