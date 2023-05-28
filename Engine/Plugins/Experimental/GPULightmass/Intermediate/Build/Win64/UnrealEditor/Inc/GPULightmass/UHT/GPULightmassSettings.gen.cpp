// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Plugins/Experimental/GPULightmass/Source/GPULightmass/Public/GPULightmassSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGPULightmassSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_AGPULightmassSettingsActor();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_AGPULightmassSettingsActor_NoRegister();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSettings();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSettings_NoRegister();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSubsystem();
	GPULIGHTMASS_API UClass* Z_Construct_UClass_UGPULightmassSubsystem_NoRegister();
	GPULIGHTMASS_API UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser();
	GPULIGHTMASS_API UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions();
	GPULIGHTMASS_API UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassMode();
	UPackage* Z_Construct_UPackage__Script_GPULightmass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGPULightmassMode;
	static UEnum* EGPULightmassMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGPULightmassMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GPULightmass_EGPULightmassMode, (UObject*)Z_Construct_UPackage__Script_GPULightmass(), TEXT("EGPULightmassMode"));
		}
		return Z_Registration_Info_UEnum_EGPULightmassMode.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UEnum* StaticEnum<EGPULightmassMode>()
	{
		return EGPULightmassMode_StaticEnum();
	}
	struct Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enumerators[] = {
		{ "EGPULightmassMode::FullBake", (int64)EGPULightmassMode::FullBake },
		{ "EGPULightmassMode::BakeWhatYouSee", (int64)EGPULightmassMode::BakeWhatYouSee },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enum_MetaDataParams[] = {
		{ "BakeWhatYouSee.Name", "EGPULightmassMode::BakeWhatYouSee" },
		{ "FullBake.Name", "EGPULightmassMode::FullBake" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GPULightmass,
		nullptr,
		"EGPULightmassMode",
		"EGPULightmassMode",
		Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassMode()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGPULightmassMode.InnerSingleton, Z_Construct_UEnum_GPULightmass_EGPULightmassMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGPULightmassMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions;
	static UEnum* EGPULightmassDenoisingOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions, (UObject*)Z_Construct_UPackage__Script_GPULightmass(), TEXT("EGPULightmassDenoisingOptions"));
		}
		return Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UEnum* StaticEnum<EGPULightmassDenoisingOptions>()
	{
		return EGPULightmassDenoisingOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enumerators[] = {
		{ "EGPULightmassDenoisingOptions::None", (int64)EGPULightmassDenoisingOptions::None },
		{ "EGPULightmassDenoisingOptions::OnCompletion", (int64)EGPULightmassDenoisingOptions::OnCompletion },
		{ "EGPULightmassDenoisingOptions::DuringInteractivePreview", (int64)EGPULightmassDenoisingOptions::DuringInteractivePreview },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enum_MetaDataParams[] = {
		{ "DuringInteractivePreview.Name", "EGPULightmassDenoisingOptions::DuringInteractivePreview" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "None.Name", "EGPULightmassDenoisingOptions::None" },
		{ "OnCompletion.Name", "EGPULightmassDenoisingOptions::OnCompletion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GPULightmass,
		nullptr,
		"EGPULightmassDenoisingOptions",
		"EGPULightmassDenoisingOptions",
		Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.InnerSingleton, Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGPULightmassDenoiser;
	static UEnum* EGPULightmassDenoiser_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassDenoiser.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGPULightmassDenoiser.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser, (UObject*)Z_Construct_UPackage__Script_GPULightmass(), TEXT("EGPULightmassDenoiser"));
		}
		return Z_Registration_Info_UEnum_EGPULightmassDenoiser.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UEnum* StaticEnum<EGPULightmassDenoiser>()
	{
		return EGPULightmassDenoiser_StaticEnum();
	}
	struct Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enumerators[] = {
		{ "EGPULightmassDenoiser::IntelOIDN", (int64)EGPULightmassDenoiser::IntelOIDN },
		{ "EGPULightmassDenoiser::SimpleFireflyRemover", (int64)EGPULightmassDenoiser::SimpleFireflyRemover },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enum_MetaDataParams[] = {
		{ "IntelOIDN.DisplayName", "Intel Open Image Denoise" },
		{ "IntelOIDN.Name", "EGPULightmassDenoiser::IntelOIDN" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "SimpleFireflyRemover.Name", "EGPULightmassDenoiser::SimpleFireflyRemover" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GPULightmass,
		nullptr,
		"EGPULightmassDenoiser",
		"EGPULightmassDenoiser",
		Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser()
	{
		if (!Z_Registration_Info_UEnum_EGPULightmassDenoiser.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGPULightmassDenoiser.InnerSingleton, Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGPULightmassDenoiser.InnerSingleton;
	}
	void UGPULightmassSettings::StaticRegisterNativesUGPULightmassSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPULightmassSettings);
	UClass* Z_Construct_UClass_UGPULightmassSettings_NoRegister()
	{
		return UGPULightmassSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGPULightmassSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowProgressBars_MetaData[];
#endif
		static void NewProp_bShowProgressBars_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowProgressBars;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DenoisingOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DenoisingOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DenoisingOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Denoiser_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Denoiser_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Denoiser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressLightmaps_MetaData[];
#endif
		static void NewProp_bCompressLightmaps_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressLightmaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GISamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GISamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StationaryLightShadowSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StationaryLightShadowSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIrradianceCaching_MetaData[];
#endif
		static void NewProp_bUseIrradianceCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIrradianceCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstBounceRayGuiding_MetaData[];
#endif
		static void NewProp_bUseFirstBounceRayGuiding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstBounceRayGuiding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapQualityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumetricLightmapQualityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricLightmapDetailCellSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VolumetricLightmapDetailCellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrradianceCacheQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IrradianceCacheQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIrradianceCacheBackfaceDetection_MetaData[];
#endif
		static void NewProp_bUseIrradianceCacheBackfaceDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIrradianceCacheBackfaceDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrradianceCacheSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IrradianceCacheSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrradianceCacheCornerRejection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IrradianceCacheCornerRejection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeIrradianceCache_MetaData[];
#endif
		static void NewProp_bVisualizeIrradianceCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeIrradianceCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstBounceRayGuidingTrialSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstBounceRayGuidingTrialSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePassesInSlowMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TilePassesInSlowMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePassesInFullSpeedMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TilePassesInFullSpeedMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapTilePoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightmapTilePoolSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGPULightmassSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GPULightmass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GPULightmassSettings.h" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// If true, draw a green progress bar within each tile as it renders.\n// A red bar indicates that First Bounce Ray Guiding is in progress.\n// Bars may appear black in very bright scenes that have been exposed down.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "If true, draw a green progress bar within each tile as it renders.\nA red bar indicates that First Bounce Ray Guiding is in progress.\nBars may appear black in very bright scenes that have been exposed down." },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bShowProgressBars = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars = { "bShowProgressBars", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Full Bake mode renders the full lightmap resolution for every object in the scene.\n// Bake What You See mode renders only the virtual texture tiles for objects in view,\n// at the mip level determined by the virtual texture system. The camera can be moved to render\n// more tiles. Bake What You See mode only saves its results if you press the Save button.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Full Bake mode renders the full lightmap resolution for every object in the scene.\nBake What You See mode renders only the virtual texture tiles for objects in view,\nat the mip level determined by the virtual texture system. The camera can be moved to render\nmore tiles. Bake What You See mode only saves its results if you press the Save button." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, Mode), Z_Construct_UEnum_GPULightmass_EGPULightmassMode, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode_MetaData)) }; // 1287567041
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions_MetaData[] = {
		{ "Category", "Denoising" },
		{ "Comment", "// If enabled, denoise the results on the CPU after rendering. On Completion denoises the entire lightmap when it is finished.\n// During Interactive Preview denoises each tile as it finishes, which is useful for previewing but less efficient.\n" },
		{ "DisplayName", "Denoise when" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "If enabled, denoise the results on the CPU after rendering. On Completion denoises the entire lightmap when it is finished.\nDuring Interactive Preview denoises each tile as it finishes, which is useful for previewing but less efficient." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions = { "DenoisingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, DenoisingOptions), Z_Construct_UEnum_GPULightmass_EGPULightmassDenoisingOptions, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions_MetaData)) }; // 2304139235
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser_MetaData[] = {
		{ "Category", "Denoising" },
		{ "EditCondition", "DenoisingOptions != EGPULightmassDenoisingOptions::None" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser = { "Denoiser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, Denoiser), Z_Construct_UEnum_GPULightmass_EGPULightmassDenoiser, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser_MetaData)) }; // 98988549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\n// Use caution when disabling this.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Whether to compress lightmap textures.  Disabling lightmap texture compression will reduce artifacts but increase memory and disk size by 4x.\nUse caution when disabling this." },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bCompressLightmaps = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps = { "bCompressLightmaps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_GISamples_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "32" },
		{ "Comment", "// Total number of ray paths executed per texel across all bounces.\n// Set this to the lowest value that gives artifact-free results with the denoiser.\n" },
		{ "DisplayName", "GI Samples" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Total number of ray paths executed per texel across all bounces.\nSet this to the lowest value that gives artifact-free results with the denoiser." },
		{ "UIMax", "8192" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_GISamples = { "GISamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, GISamples), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_GISamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_GISamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_StationaryLightShadowSamples_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "32" },
		{ "Comment", "// Number of samples for stationary shadows, which are calculated and stored separately from GI.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Number of samples for stationary shadows, which are calculated and stored separately from GI." },
		{ "UIMax", "8192" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_StationaryLightShadowSamples = { "StationaryLightShadowSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, StationaryLightShadowSamples), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_StationaryLightShadowSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_StationaryLightShadowSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "Comment", "// Irradiance Caching should be enabled with interior scenes to achieve more physically correct GI intensities,\n// albeit with some biasing. Without IC the results may be darker than expected. It should be disabled for exterior scenes.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Irradiance Caching should be enabled with interior scenes to achieve more physically correct GI intensities,\nalbeit with some biasing. Without IC the results may be darker than expected. It should be disabled for exterior scenes." },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bUseIrradianceCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching = { "bUseIrradianceCaching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "Comment", "// If Irradiance Caching is enabled, First Bounce Ray Guiding will search the hemisphere over\n// each first bounce sample to find the brightest directions to weigh the rest of the samples towards.\n// This improves results for interior scenes with specific sources of light like a window.\n// The quality of this pass is controlled with the Trial Samples setting.\n" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "If Irradiance Caching is enabled, First Bounce Ray Guiding will search the hemisphere over\neach first bounce sample to find the brightest directions to weigh the rest of the samples towards.\nThis improves results for interior scenes with specific sources of light like a window.\nThe quality of this pass is controlled with the Trial Samples setting." },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bUseFirstBounceRayGuiding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding = { "bUseFirstBounceRayGuiding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapQualityMultiplier_MetaData[] = {
		{ "Category", "VolumetricLightmap" },
		{ "ClampMax", "256" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Quality Multiplier" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "UIMax", "32" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapQualityMultiplier = { "VolumetricLightmapQualityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, VolumetricLightmapQualityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapQualityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapQualityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData[] = {
		{ "Category", "VolumetricLightmap" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "1" },
		{ "Comment", "// Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units.\n// This setting has a large impact on build times and memory, use with caution.\n// Halving the DetailCellSize can increase memory by up to a factor of 8x.\n" },
		{ "DisplayName", "Detail Cell Size" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Size of an Volumetric Lightmap voxel at the highest density (used around geometry), in world space units.\nThis setting has a large impact on build times and memory, use with caution.\nHalving the DetailCellSize can increase memory by up to a factor of 8x." },
		{ "UIMax", "2000" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapDetailCellSize = { "VolumetricLightmapDetailCellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, VolumetricLightmapDetailCellSize), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapDetailCellSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheQuality_MetaData[] = {
		{ "Category", "IrradianceCaching" },
		{ "ClampMax", "65536" },
		{ "ClampMin", "4" },
		{ "Comment", "// Number of samples per Irradiance Cache cell.\n" },
		{ "DisplayName", "Quality" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Number of samples per Irradiance Cache cell." },
		{ "UIMax", "8192" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheQuality = { "IrradianceCacheQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, IrradianceCacheQuality), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheQuality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection_MetaData[] = {
		{ "Category", "IrradianceCaching" },
		{ "Comment", "// Further prevent leaks caused by irradiance cache cells being placed inside geometry, at the cost of more fireflies and slower sampling speed. Recommended to be used with higher irradiance cache quality (>=256)\n" },
		{ "DisplayName", "Aggressive Leak Prevention" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Further prevent leaks caused by irradiance cache cells being placed inside geometry, at the cost of more fireflies and slower sampling speed. Recommended to be used with higher irradiance cache quality (>=256)" },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bUseIrradianceCacheBackfaceDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection = { "bUseIrradianceCacheBackfaceDetection", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheSpacing_MetaData[] = {
		{ "Category", "IrradianceCaching" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "Comment", "// Size of each Irradiance Cache cell. Smaller sizes will be slower but more accurate.\n" },
		{ "DisplayName", "Size" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Size of each Irradiance Cache cell. Smaller sizes will be slower but more accurate." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheSpacing = { "IrradianceCacheSpacing", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, IrradianceCacheSpacing), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheCornerRejection_MetaData[] = {
		{ "Category", "IrradianceCaching" },
		{ "ClampMax", "8.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Reject IC entries around corners to help reduce leaking and artifacts.\n" },
		{ "DisplayName", "Corner Rejection" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Reject IC entries around corners to help reduce leaking and artifacts." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheCornerRejection = { "IrradianceCacheCornerRejection", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, IrradianceCacheCornerRejection), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheCornerRejection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheCornerRejection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache_MetaData[] = {
		{ "Category", "IrradianceCaching" },
		{ "Comment", "// If true, visualize the Irradiance Cache cells. This can be useful for setting the IC size and quality.\n// The visualization may appear black in very bright scenes that have been exposed down. \n" },
		{ "DisplayName", "Debug: Visualize" },
		{ "EditCondition", "bUseIrradianceCaching" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "If true, visualize the Irradiance Cache cells. This can be useful for setting the IC size and quality.\nThe visualization may appear black in very bright scenes that have been exposed down." },
	};
#endif
	void Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache_SetBit(void* Obj)
	{
		((UGPULightmassSettings*)Obj)->bVisualizeIrradianceCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache = { "bVisualizeIrradianceCache", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGPULightmassSettings), &Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_FirstBounceRayGuidingTrialSamples_MetaData[] = {
		{ "Category", "FirstBounceRayGuiding" },
		{ "Comment", "// Number of samples used for First Bounce Ray Guiding, which are thrown away before sampling for lighting.\n" },
		{ "DisplayName", "Trial Samples" },
		{ "EditCondition", "bUseFirstBounceRayGuiding" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Number of samples used for First Bounce Ray Guiding, which are thrown away before sampling for lighting." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_FirstBounceRayGuidingTrialSamples = { "FirstBounceRayGuidingTrialSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, FirstBounceRayGuidingTrialSamples), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_FirstBounceRayGuidingTrialSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_FirstBounceRayGuidingTrialSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInSlowMode_MetaData[] = {
		{ "Category", "System" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "Comment", "// Baking speed multiplier when Realtime is enabled in the viewer.\n// Setting this too high can cause the editor to become unresponsive with heavy scenes.\n" },
		{ "DisplayName", "Realtime Workload Factor" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Baking speed multiplier when Realtime is enabled in the viewer.\nSetting this too high can cause the editor to become unresponsive with heavy scenes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInSlowMode = { "TilePassesInSlowMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, TilePassesInSlowMode), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInSlowMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInSlowMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInFullSpeedMode_MetaData[] = {
		{ "Category", "System" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "Comment", "// Baking speed multiplier when Realtime is disabled in the viewer.\n" },
		{ "DisplayName", "Non-Realtime Workload Factor" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "Baking speed multiplier when Realtime is disabled in the viewer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInFullSpeedMode = { "TilePassesInFullSpeedMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, TilePassesInFullSpeedMode), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInFullSpeedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInFullSpeedMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_LightmapTilePoolSize_MetaData[] = {
		{ "Category", "System" },
		{ "ClampMax", "128" },
		{ "ClampMin", "16" },
		{ "Comment", "// GPU Lightmass manages a pool for calculations of visible tiles. The pool size should be set based on the size of the\n// viewport and how many tiles will be visible on screen at once. Increasing this number increases GPU memory usage.\n" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ToolTip", "GPU Lightmass manages a pool for calculations of visible tiles. The pool size should be set based on the size of the\nviewport and how many tiles will be visible on screen at once. Increasing this number increases GPU memory usage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_LightmapTilePoolSize = { "LightmapTilePoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGPULightmassSettings, LightmapTilePoolSize), METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_LightmapTilePoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_LightmapTilePoolSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGPULightmassSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bShowProgressBars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_DenoisingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_Denoiser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bCompressLightmaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_GISamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_StationaryLightShadowSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseFirstBounceRayGuiding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapQualityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_VolumetricLightmapDetailCellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bUseIrradianceCacheBackfaceDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_IrradianceCacheCornerRejection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_bVisualizeIrradianceCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_FirstBounceRayGuidingTrialSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInSlowMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_TilePassesInFullSpeedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGPULightmassSettings_Statics::NewProp_LightmapTilePoolSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGPULightmassSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPULightmassSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPULightmassSettings_Statics::ClassParams = {
		&UGPULightmassSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGPULightmassSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGPULightmassSettings()
	{
		if (!Z_Registration_Info_UClass_UGPULightmassSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPULightmassSettings.OuterSingleton, Z_Construct_UClass_UGPULightmassSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGPULightmassSettings.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UClass* StaticClass<UGPULightmassSettings>()
	{
		return UGPULightmassSettings::StaticClass();
	}
	UGPULightmassSettings::UGPULightmassSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGPULightmassSettings);
	UGPULightmassSettings::~UGPULightmassSettings() {}
	void AGPULightmassSettingsActor::StaticRegisterNativesAGPULightmassSettingsActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGPULightmassSettingsActor);
	UClass* Z_Construct_UClass_AGPULightmassSettingsActor_NoRegister()
	{
		return AGPULightmassSettingsActor::StaticClass();
	}
	struct Z_Construct_UClass_AGPULightmassSettingsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGPULightmassSettingsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_GPULightmass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPULightmassSettingsActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GPULightmassSettings.h" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGPULightmassSettingsActor_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGPULightmassSettingsActor_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGPULightmassSettingsActor, Settings), Z_Construct_UClass_UGPULightmassSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGPULightmassSettingsActor_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGPULightmassSettingsActor_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGPULightmassSettingsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGPULightmassSettingsActor_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGPULightmassSettingsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGPULightmassSettingsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGPULightmassSettingsActor_Statics::ClassParams = {
		&AGPULightmassSettingsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGPULightmassSettingsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGPULightmassSettingsActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGPULightmassSettingsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGPULightmassSettingsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGPULightmassSettingsActor()
	{
		if (!Z_Registration_Info_UClass_AGPULightmassSettingsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGPULightmassSettingsActor.OuterSingleton, Z_Construct_UClass_AGPULightmassSettingsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGPULightmassSettingsActor.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UClass* StaticClass<AGPULightmassSettingsActor>()
	{
		return AGPULightmassSettingsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGPULightmassSettingsActor);
	AGPULightmassSettingsActor::~AGPULightmassSettingsActor() {}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execSetRealtime)
	{
		P_GET_UBOOL(Z_Param_bInRealtime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRealtime(Z_Param_bInRealtime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execGetPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execEndRecordingVisibleTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRecordingVisibleTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execStartRecordingVisibleTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecordingVisibleTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execLaunch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Launch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGPULightmassSubsystem::execGetSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGPULightmassSettings**)Z_Param__Result=P_THIS->GetSettings();
		P_NATIVE_END;
	}
	void UGPULightmassSubsystem::StaticRegisterNativesUGPULightmassSubsystem()
	{
		UClass* Class = UGPULightmassSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndRecordingVisibleTiles", &UGPULightmassSubsystem::execEndRecordingVisibleTiles },
			{ "GetPercentage", &UGPULightmassSubsystem::execGetPercentage },
			{ "GetSettings", &UGPULightmassSubsystem::execGetSettings },
			{ "IsRunning", &UGPULightmassSubsystem::execIsRunning },
			{ "Launch", &UGPULightmassSubsystem::execLaunch },
			{ "Save", &UGPULightmassSubsystem::execSave },
			{ "SetRealtime", &UGPULightmassSubsystem::execSetRealtime },
			{ "StartRecordingVisibleTiles", &UGPULightmassSubsystem::execStartRecordingVisibleTiles },
			{ "Stop", &UGPULightmassSubsystem::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "EndRecordingVisibleTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics
	{
		struct GPULightmassSubsystem_eventGetPercentage_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GPULightmassSubsystem_eventGetPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "GetPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::GPULightmassSubsystem_eventGetPercentage_Parms), Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics
	{
		struct GPULightmassSubsystem_eventGetSettings_Parms
		{
			UGPULightmassSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GPULightmassSubsystem_eventGetSettings_Parms, ReturnValue), Z_Construct_UClass_UGPULightmassSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "GetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::GPULightmassSubsystem_eventGetSettings_Parms), Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics
	{
		struct GPULightmassSubsystem_eventIsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GPULightmassSubsystem_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GPULightmassSubsystem_eventIsRunning_Parms), &Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "IsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::GPULightmassSubsystem_eventIsRunning_Parms), Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "Launch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_Launch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_Launch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "Save", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics
	{
		struct GPULightmassSubsystem_eventSetRealtime_Parms
		{
			bool bInRealtime;
		};
		static void NewProp_bInRealtime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRealtime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::NewProp_bInRealtime_SetBit(void* Obj)
	{
		((GPULightmassSubsystem_eventSetRealtime_Parms*)Obj)->bInRealtime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::NewProp_bInRealtime = { "bInRealtime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GPULightmassSubsystem_eventSetRealtime_Parms), &Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::NewProp_bInRealtime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::NewProp_bInRealtime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "SetRealtime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::GPULightmassSubsystem_eventSetRealtime_Parms), Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "StartRecordingVisibleTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "GPULightmass" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGPULightmassSubsystem, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGPULightmassSubsystem_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGPULightmassSubsystem_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGPULightmassSubsystem);
	UClass* Z_Construct_UClass_UGPULightmassSubsystem_NoRegister()
	{
		return UGPULightmassSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGPULightmassSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGPULightmassSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GPULightmass,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGPULightmassSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_EndRecordingVisibleTiles, "EndRecordingVisibleTiles" }, // 3654660981
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_GetPercentage, "GetPercentage" }, // 2594070589
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_GetSettings, "GetSettings" }, // 1482900278
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_IsRunning, "IsRunning" }, // 4135780140
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_Launch, "Launch" }, // 3069825935
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_Save, "Save" }, // 3719695591
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_SetRealtime, "SetRealtime" }, // 3536803454
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_StartRecordingVisibleTiles, "StartRecordingVisibleTiles" }, // 261797991
		{ &Z_Construct_UFunction_UGPULightmassSubsystem_Stop, "Stop" }, // 4266238154
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGPULightmassSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GPULightmassSettings.h" },
		{ "ModuleRelativePath", "Public/GPULightmassSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGPULightmassSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGPULightmassSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGPULightmassSubsystem_Statics::ClassParams = {
		&UGPULightmassSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGPULightmassSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGPULightmassSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGPULightmassSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGPULightmassSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGPULightmassSubsystem.OuterSingleton, Z_Construct_UClass_UGPULightmassSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGPULightmassSubsystem.OuterSingleton;
	}
	template<> GPULIGHTMASS_API UClass* StaticClass<UGPULightmassSubsystem>()
	{
		return UGPULightmassSubsystem::StaticClass();
	}
	UGPULightmassSubsystem::UGPULightmassSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGPULightmassSubsystem);
	UGPULightmassSubsystem::~UGPULightmassSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::EnumInfo[] = {
		{ EGPULightmassMode_StaticEnum, TEXT("EGPULightmassMode"), &Z_Registration_Info_UEnum_EGPULightmassMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1287567041U) },
		{ EGPULightmassDenoisingOptions_StaticEnum, TEXT("EGPULightmassDenoisingOptions"), &Z_Registration_Info_UEnum_EGPULightmassDenoisingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2304139235U) },
		{ EGPULightmassDenoiser_StaticEnum, TEXT("EGPULightmassDenoiser"), &Z_Registration_Info_UEnum_EGPULightmassDenoiser, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98988549U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGPULightmassSettings, UGPULightmassSettings::StaticClass, TEXT("UGPULightmassSettings"), &Z_Registration_Info_UClass_UGPULightmassSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPULightmassSettings), 2080373416U) },
		{ Z_Construct_UClass_AGPULightmassSettingsActor, AGPULightmassSettingsActor::StaticClass, TEXT("AGPULightmassSettingsActor"), &Z_Registration_Info_UClass_AGPULightmassSettingsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGPULightmassSettingsActor), 3846588783U) },
		{ Z_Construct_UClass_UGPULightmassSubsystem, UGPULightmassSubsystem::StaticClass, TEXT("UGPULightmassSubsystem"), &Z_Registration_Info_UClass_UGPULightmassSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGPULightmassSubsystem), 4226400075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_3842919677(TEXT("/Script/GPULightmass"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GPULightmass_Source_GPULightmass_Public_GPULightmassSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
