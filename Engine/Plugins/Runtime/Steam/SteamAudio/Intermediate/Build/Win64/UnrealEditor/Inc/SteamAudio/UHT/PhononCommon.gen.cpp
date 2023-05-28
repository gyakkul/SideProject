// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononCommon() {}
// Cross Module References
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplAudioEngine();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplConvolutionType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplRayTracerType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSimulationType();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EQualitySettings();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQualitySettings;
	static UEnum* EQualitySettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQualitySettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQualitySettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EQualitySettings, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EQualitySettings"));
		}
		return Z_Registration_Info_UEnum_EQualitySettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EQualitySettings>()
	{
		return EQualitySettings_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enumerators[] = {
		{ "EQualitySettings::LOW", (int64)EQualitySettings::LOW },
		{ "EQualitySettings::MEDIUM", (int64)EQualitySettings::MEDIUM },
		{ "EQualitySettings::HIGH", (int64)EQualitySettings::HIGH },
		{ "EQualitySettings::CUSTOM", (int64)EQualitySettings::CUSTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CUSTOM.DisplayName", "Custom" },
		{ "CUSTOM.Name", "EQualitySettings::CUSTOM" },
		{ "HIGH.DisplayName", "High" },
		{ "HIGH.Name", "EQualitySettings::HIGH" },
		{ "LOW.DisplayName", "Low" },
		{ "LOW.Name", "EQualitySettings::LOW" },
		{ "MEDIUM.DisplayName", "Medium" },
		{ "MEDIUM.Name", "EQualitySettings::MEDIUM" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EQualitySettings",
		"EQualitySettings",
		Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EQualitySettings()
	{
		if (!Z_Registration_Info_UEnum_EQualitySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQualitySettings.InnerSingleton, Z_Construct_UEnum_SteamAudio_EQualitySettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQualitySettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplSpatializationMethod;
	static UEnum* EIplSpatializationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplSpatializationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplSpatializationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplSpatializationMethod"));
		}
		return Z_Registration_Info_UEnum_EIplSpatializationMethod.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplSpatializationMethod>()
	{
		return EIplSpatializationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enumerators[] = {
		{ "EIplSpatializationMethod::PANNING", (int64)EIplSpatializationMethod::PANNING },
		{ "EIplSpatializationMethod::HRTF", (int64)EIplSpatializationMethod::HRTF },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HRTF.Comment", "// Full 3D audio processing with HRTF.\n" },
		{ "HRTF.DisplayName", "HRTF" },
		{ "HRTF.Name", "EIplSpatializationMethod::HRTF" },
		{ "HRTF.ToolTip", "Full 3D audio processing with HRTF." },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "PANNING.Comment", "// Classic 2D panning - fast.\n" },
		{ "PANNING.DisplayName", "Panning" },
		{ "PANNING.Name", "EIplSpatializationMethod::PANNING" },
		{ "PANNING.ToolTip", "Classic 2D panning - fast." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplSpatializationMethod",
		"EIplSpatializationMethod",
		Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod()
	{
		if (!Z_Registration_Info_UEnum_EIplSpatializationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplSpatializationMethod.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplSpatializationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod;
	static UEnum* EIplHrtfInterpolationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplHrtfInterpolationMethod"));
		}
		return Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplHrtfInterpolationMethod>()
	{
		return EIplHrtfInterpolationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enumerators[] = {
		{ "EIplHrtfInterpolationMethod::NEAREST", (int64)EIplHrtfInterpolationMethod::NEAREST },
		{ "EIplHrtfInterpolationMethod::BILINEAR", (int64)EIplHrtfInterpolationMethod::BILINEAR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BILINEAR.Comment", "// Bilinearly interpolates the HRTF before processing. Slower, but can result in a smoother sound as the listener rotates.\n" },
		{ "BILINEAR.DisplayName", "Bilinear" },
		{ "BILINEAR.Name", "EIplHrtfInterpolationMethod::BILINEAR" },
		{ "BILINEAR.ToolTip", "Bilinearly interpolates the HRTF before processing. Slower, but can result in a smoother sound as the listener rotates." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "NEAREST.Comment", "// Uses a nearest neighbor lookup - fast.\n" },
		{ "NEAREST.DisplayName", "Nearest" },
		{ "NEAREST.Name", "EIplHrtfInterpolationMethod::NEAREST" },
		{ "NEAREST.ToolTip", "Uses a nearest neighbor lookup - fast." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplHrtfInterpolationMethod",
		"EIplHrtfInterpolationMethod",
		Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod()
	{
		if (!Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplDirectOcclusionMethod;
	static UEnum* EIplDirectOcclusionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplDirectOcclusionMethod"));
		}
		return Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplDirectOcclusionMethod>()
	{
		return EIplDirectOcclusionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enumerators[] = {
		{ "EIplDirectOcclusionMethod::RAYCAST", (int64)EIplDirectOcclusionMethod::RAYCAST },
		{ "EIplDirectOcclusionMethod::VOLUMETRIC", (int64)EIplDirectOcclusionMethod::VOLUMETRIC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "RAYCAST.Comment", "// Binary visible or not test. Adjusts direct volume accordingly.\n" },
		{ "RAYCAST.DisplayName", "Raycast" },
		{ "RAYCAST.Name", "EIplDirectOcclusionMethod::RAYCAST" },
		{ "RAYCAST.ToolTip", "Binary visible or not test. Adjusts direct volume accordingly." },
		{ "VOLUMETRIC.Comment", "// Treats the source as a sphere instead of a point. Smoothly ramps up volume as source becomes visible to listener.\n" },
		{ "VOLUMETRIC.DisplayName", "Partial" },
		{ "VOLUMETRIC.Name", "EIplDirectOcclusionMethod::VOLUMETRIC" },
		{ "VOLUMETRIC.ToolTip", "Treats the source as a sphere instead of a point. Smoothly ramps up volume as source becomes visible to listener." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplDirectOcclusionMethod",
		"EIplDirectOcclusionMethod",
		Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod()
	{
		if (!Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplDirectOcclusionMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplDirectOcclusionMode;
	static UEnum* EIplDirectOcclusionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplDirectOcclusionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplDirectOcclusionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplDirectOcclusionMode"));
		}
		return Z_Registration_Info_UEnum_EIplDirectOcclusionMode.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplDirectOcclusionMode>()
	{
		return EIplDirectOcclusionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enumerators[] = {
		{ "EIplDirectOcclusionMode::NONE", (int64)EIplDirectOcclusionMode::NONE },
		{ "EIplDirectOcclusionMode::DIRECTOCCLUSION_NOTRANSMISSION", (int64)EIplDirectOcclusionMode::DIRECTOCCLUSION_NOTRANSMISSION },
		{ "EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYVOLUME", (int64)EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYVOLUME },
		{ "EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY", (int64)EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DIRECTOCCLUSION_NOTRANSMISSION.Comment", "// Perform occlusion checks but do not model transmission.\n" },
		{ "DIRECTOCCLUSION_NOTRANSMISSION.DisplayName", "Direct Occlusion, No Transmission" },
		{ "DIRECTOCCLUSION_NOTRANSMISSION.Name", "EIplDirectOcclusionMode::DIRECTOCCLUSION_NOTRANSMISSION" },
		{ "DIRECTOCCLUSION_NOTRANSMISSION.ToolTip", "Perform occlusion checks but do not model transmission." },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY.Comment", "// Perform occlusion checks and model transmission; occluded sound will be rendered with a frequency-dependent transmission filter.\n" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY.DisplayName", "Direct Occlusion, Frequency-Dependent Transmission" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY.Name", "EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY.ToolTip", "Perform occlusion checks and model transmission; occluded sound will be rendered with a frequency-dependent transmission filter." },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYVOLUME.Comment", "// Perform occlusion checks and model transmission; occluded sound will be scaled by a frequency-independent attenuation value.\n" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYVOLUME.DisplayName", "Direct Occlusion, Frequency-Independent Transmission" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYVOLUME.Name", "EIplDirectOcclusionMode::DIRECTOCCLUSION_TRANSMISSIONBYVOLUME" },
		{ "DIRECTOCCLUSION_TRANSMISSIONBYVOLUME.ToolTip", "Perform occlusion checks and model transmission; occluded sound will be scaled by a frequency-independent attenuation value." },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "NONE.Comment", "// Do not perform any occlusion checks.\n" },
		{ "NONE.DisplayName", "None" },
		{ "NONE.Name", "EIplDirectOcclusionMode::NONE" },
		{ "NONE.ToolTip", "Do not perform any occlusion checks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplDirectOcclusionMode",
		"EIplDirectOcclusionMode",
		Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode()
	{
		if (!Z_Registration_Info_UEnum_EIplDirectOcclusionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplDirectOcclusionMode.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplDirectOcclusionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplDirectOcclusionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplSimulationType;
	static UEnum* EIplSimulationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplSimulationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplSimulationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplSimulationType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplSimulationType"));
		}
		return Z_Registration_Info_UEnum_EIplSimulationType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplSimulationType>()
	{
		return EIplSimulationType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enumerators[] = {
		{ "EIplSimulationType::REALTIME", (int64)EIplSimulationType::REALTIME },
		{ "EIplSimulationType::BAKED", (int64)EIplSimulationType::BAKED },
		{ "EIplSimulationType::DISABLED", (int64)EIplSimulationType::DISABLED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enum_MetaDataParams[] = {
		{ "BAKED.Comment", "// Precompute indirect sound.\n" },
		{ "BAKED.DisplayName", "Baked" },
		{ "BAKED.Name", "EIplSimulationType::BAKED" },
		{ "BAKED.ToolTip", "Precompute indirect sound." },
		{ "BlueprintType", "true" },
		{ "DISABLED.Comment", "// Do not simulate indirect sound.\n" },
		{ "DISABLED.DisplayName", "Disabled" },
		{ "DISABLED.Name", "EIplSimulationType::DISABLED" },
		{ "DISABLED.ToolTip", "Do not simulate indirect sound." },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "REALTIME.Comment", "// Simulate indirect sound at run time.\n" },
		{ "REALTIME.DisplayName", "Real-Time" },
		{ "REALTIME.Name", "EIplSimulationType::REALTIME" },
		{ "REALTIME.ToolTip", "Simulate indirect sound at run time." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplSimulationType",
		"EIplSimulationType",
		Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplSimulationType()
	{
		if (!Z_Registration_Info_UEnum_EIplSimulationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplSimulationType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplSimulationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplSimulationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplConvolutionType;
	static UEnum* EIplConvolutionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplConvolutionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplConvolutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplConvolutionType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplConvolutionType"));
		}
		return Z_Registration_Info_UEnum_EIplConvolutionType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplConvolutionType>()
	{
		return EIplConvolutionType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enumerators[] = {
		{ "EIplConvolutionType::PHONON", (int64)EIplConvolutionType::PHONON },
		{ "EIplConvolutionType::TRUEAUDIONEXT", (int64)EIplConvolutionType::TRUEAUDIONEXT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "PHONON.Comment", "// Default CPU convolution renderer.\n" },
		{ "PHONON.DisplayName", "Phonon" },
		{ "PHONON.Name", "EIplConvolutionType::PHONON" },
		{ "PHONON.ToolTip", "Default CPU convolution renderer." },
		{ "TRUEAUDIONEXT.Comment", "// AMD TrueAudio Next GPU convolution renderer.\n" },
		{ "TRUEAUDIONEXT.DisplayName", "AMD TrueAudio Next" },
		{ "TRUEAUDIONEXT.Name", "EIplConvolutionType::TRUEAUDIONEXT" },
		{ "TRUEAUDIONEXT.ToolTip", "AMD TrueAudio Next GPU convolution renderer." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplConvolutionType",
		"EIplConvolutionType",
		Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplConvolutionType()
	{
		if (!Z_Registration_Info_UEnum_EIplConvolutionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplConvolutionType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplConvolutionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplConvolutionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplRayTracerType;
	static UEnum* EIplRayTracerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplRayTracerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplRayTracerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplRayTracerType, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplRayTracerType"));
		}
		return Z_Registration_Info_UEnum_EIplRayTracerType.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplRayTracerType>()
	{
		return EIplRayTracerType_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enumerators[] = {
		{ "EIplRayTracerType::PHONON", (int64)EIplRayTracerType::PHONON },
		{ "EIplRayTracerType::EMBREE", (int64)EIplRayTracerType::EMBREE },
		{ "EIplRayTracerType::RADEONRAYS", (int64)EIplRayTracerType::RADEONRAYS },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EMBREE.Comment", "// Intel Embree Ray Tracer\n" },
		{ "EMBREE.DisplayName", "Intel Embree" },
		{ "EMBREE.Name", "EIplRayTracerType::EMBREE" },
		{ "EMBREE.ToolTip", "Intel Embree Ray Tracer" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "PHONON.Comment", "// Default Ray Tracer\n" },
		{ "PHONON.DisplayName", "Phonon" },
		{ "PHONON.Name", "EIplRayTracerType::PHONON" },
		{ "PHONON.ToolTip", "Default Ray Tracer" },
		{ "RADEONRAYS.Comment", "// AMD Radeon Rays ray tracer, implemented in OpenCL for both CPU and GPU.\n" },
		{ "RADEONRAYS.DisplayName", "AMD Radeon Rays" },
		{ "RADEONRAYS.Name", "EIplRayTracerType::RADEONRAYS" },
		{ "RADEONRAYS.ToolTip", "AMD Radeon Rays ray tracer, implemented in OpenCL for both CPU and GPU." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplRayTracerType",
		"EIplRayTracerType",
		Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplRayTracerType()
	{
		if (!Z_Registration_Info_UEnum_EIplRayTracerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplRayTracerType.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplRayTracerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplRayTracerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIplAudioEngine;
	static UEnum* EIplAudioEngine_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIplAudioEngine.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIplAudioEngine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EIplAudioEngine, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EIplAudioEngine"));
		}
		return Z_Registration_Info_UEnum_EIplAudioEngine.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EIplAudioEngine>()
	{
		return EIplAudioEngine_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enumerators[] = {
		{ "EIplAudioEngine::UNREAL", (int64)EIplAudioEngine::UNREAL },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/PhononCommon.h" },
		{ "UNREAL.Comment", "// Native Unreal audio engine.\n" },
		{ "UNREAL.DisplayName", "Unreal" },
		{ "UNREAL.Name", "EIplAudioEngine::UNREAL" },
		{ "UNREAL.ToolTip", "Native Unreal audio engine." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EIplAudioEngine",
		"EIplAudioEngine",
		Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EIplAudioEngine()
	{
		if (!Z_Registration_Info_UEnum_EIplAudioEngine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIplAudioEngine.InnerSingleton, Z_Construct_UEnum_SteamAudio_EIplAudioEngine_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIplAudioEngine.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h_Statics::EnumInfo[] = {
		{ EQualitySettings_StaticEnum, TEXT("EQualitySettings"), &Z_Registration_Info_UEnum_EQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1817810400U) },
		{ EIplSpatializationMethod_StaticEnum, TEXT("EIplSpatializationMethod"), &Z_Registration_Info_UEnum_EIplSpatializationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3979568022U) },
		{ EIplHrtfInterpolationMethod_StaticEnum, TEXT("EIplHrtfInterpolationMethod"), &Z_Registration_Info_UEnum_EIplHrtfInterpolationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4062162158U) },
		{ EIplDirectOcclusionMethod_StaticEnum, TEXT("EIplDirectOcclusionMethod"), &Z_Registration_Info_UEnum_EIplDirectOcclusionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3810288125U) },
		{ EIplDirectOcclusionMode_StaticEnum, TEXT("EIplDirectOcclusionMode"), &Z_Registration_Info_UEnum_EIplDirectOcclusionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 775141122U) },
		{ EIplSimulationType_StaticEnum, TEXT("EIplSimulationType"), &Z_Registration_Info_UEnum_EIplSimulationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1665621229U) },
		{ EIplConvolutionType_StaticEnum, TEXT("EIplConvolutionType"), &Z_Registration_Info_UEnum_EIplConvolutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1013825717U) },
		{ EIplRayTracerType_StaticEnum, TEXT("EIplRayTracerType"), &Z_Registration_Info_UEnum_EIplRayTracerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3316845201U) },
		{ EIplAudioEngine_StaticEnum, TEXT("EIplAudioEngine"), &Z_Registration_Info_UEnum_EIplAudioEngine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3928391353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h_453945379(TEXT("/Script/SteamAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
