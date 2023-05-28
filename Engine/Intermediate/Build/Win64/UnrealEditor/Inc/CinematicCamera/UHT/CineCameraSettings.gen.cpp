// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraSettings() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraSettings();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraSettings_NoRegister();
	CINEMATICCAMERA_API UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPlateCropPreset();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPlateCropSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFilmbackSettings;
class UScriptStruct* FCameraFilmbackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFilmbackSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFilmbackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFilmbackSettings>()
{
	return FCameraFilmbackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SensorAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SensorAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** #note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraFilmbackSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFilmbackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Horizontal size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Horizontal size of filmback or digital sensor, in mm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth = { "SensorWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Vertical size of filmback or digital sensor, in mm. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Vertical size of filmback or digital sensor, in mm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight = { "SensorHeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Read-only. Computed from Sensor dimensions. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Read-only. Computed from Sensor dimensions." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio = { "SensorAspectRatio", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFilmbackSettings, SensorAspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewProp_SensorAspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFilmbackSettings",
		sizeof(FCameraFilmbackSettings),
		alignof(FCameraFilmbackSettings),
		Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraFilmbackSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedFilmbackPreset;
class UScriptStruct* FNamedFilmbackPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFilmbackPreset, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedFilmbackPreset"));
	}
	return Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedFilmbackPreset>()
{
	return FNamedFilmbackPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of filmback settings used to implement filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "A named bundle of filmback settings used to implement filmback presets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFilmbackPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Filmback" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedFilmbackPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData[] = {
		{ "Category", "Filmback" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedFilmbackPreset, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings_MetaData)) }; // 833749679
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewProp_FilmbackSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedFilmbackPreset",
		sizeof(FNamedFilmbackPreset),
		alignof(FNamedFilmbackPreset),
		Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton, Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedFilmbackPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraLensSettings;
class UScriptStruct* FCameraLensSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraLensSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraLensSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraLensSettings>()
{
	return FCameraLensSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SqueezeFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SqueezeFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiaphragmBladeCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DiaphragmBladeCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * #note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h\n */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraLensSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Minimum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Minimum focal length for this lens" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength = { "MinFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum focal length for this lens */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Maximum focal length for this lens" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength = { "MaxFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, MaxFocalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Minimum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop = { "MinFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Maximum aperture for this lens (e.g. 2.8 for an f/2.8 lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop = { "MaxFStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, MaxFStop), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Shortest distance this lens can focus on. */" },
		{ "ForceUnits", "mm" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Shortest distance this lens can focus on." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance = { "MinimumFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, MinimumFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_SqueezeFactor_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMax", "2" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Squeeze factor for anamorphic lenses. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Squeeze factor for anamorphic lenses." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_SqueezeFactor = { "SqueezeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, SqueezeFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_SqueezeFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_SqueezeFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData[] = {
		{ "Category", "Lens" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Number of blades of diaphragm. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Number of blades of diaphragm." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount = { "DiaphragmBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensSettings, DiaphragmBladeCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinFStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MaxFStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_MinimumFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_SqueezeFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewProp_DiaphragmBladeCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraLensSettings",
		sizeof(FCameraLensSettings),
		alignof(FCameraLensSettings),
		Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraLensSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraLensSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedLensPreset;
class UScriptStruct* FNamedLensPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedLensPreset, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedLensPreset"));
	}
	return Z_Registration_Info_UScriptStruct_NamedLensPreset.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedLensPreset>()
{
	return FNamedLensPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of lens settings used to implement lens presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "A named bundle of lens settings used to implement lens presets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedLensPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedLensPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedLensPreset, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings_MetaData)) }; // 3012950202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewProp_LensSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedLensPreset",
		sizeof(FNamedLensPreset),
		alignof(FNamedLensPreset),
		Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedLensPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton, Z_Construct_UScriptStruct_FNamedLensPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedLensPreset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlateCropSettings;
class UScriptStruct* FPlateCropSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlateCropSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlateCropSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlateCropSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("PlateCropSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PlateCropSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FPlateCropSettings>()
{
	return FPlateCropSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlateCropSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlateCropSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * #note, this struct has a details customization in CameraCropSettingsCustomization.cpp/h\n */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "#note, this struct has a details customization in CameraCropSettingsCustomization.cpp/h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlateCropSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Crop" },
		{ "DisplayName", "Cropped Aspect Ratio" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlateCropSettings, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewProp_AspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlateCropSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewProp_AspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlateCropSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"PlateCropSettings",
		sizeof(FPlateCropSettings),
		alignof(FPlateCropSettings),
		Z_Construct_UScriptStruct_FPlateCropSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlateCropSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlateCropSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlateCropSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlateCropSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PlateCropSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlateCropSettings.InnerSingleton, Z_Construct_UScriptStruct_FPlateCropSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlateCropSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedPlateCropPreset;
class UScriptStruct* FNamedPlateCropPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedPlateCropPreset, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("NamedPlateCropPreset"));
	}
	return Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FNamedPlateCropPreset>()
{
	return FNamedPlateCropPreset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named bundle of crop settings used to implement crop presets. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "A named bundle of crop settings used to implement crop presets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedPlateCropPreset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Crop" },
		{ "Comment", "/** Name for the preset. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name for the preset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedPlateCropPreset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_CropSettings_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_CropSettings = { "CropSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedPlateCropPreset, CropSettings), Z_Construct_UScriptStruct_FPlateCropSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_CropSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_CropSettings_MetaData)) }; // 2230578511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewProp_CropSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"NamedPlateCropPreset",
		sizeof(FNamedPlateCropPreset),
		alignof(FNamedPlateCropPreset),
		Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedPlateCropPreset()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.InnerSingleton, Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedPlateCropPreset.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraFocusMethod;
	static UEnum* ECameraFocusMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("ECameraFocusMethod"));
		}
		return Z_Registration_Info_UEnum_ECameraFocusMethod.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>()
	{
		return ECameraFocusMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators[] = {
		{ "ECameraFocusMethod::DoNotOverride", (int64)ECameraFocusMethod::DoNotOverride },
		{ "ECameraFocusMethod::Manual", (int64)ECameraFocusMethod::Manual },
		{ "ECameraFocusMethod::Tracking", (int64)ECameraFocusMethod::Tracking },
		{ "ECameraFocusMethod::Disable", (int64)ECameraFocusMethod::Disable },
		{ "ECameraFocusMethod::MAX", (int64)ECameraFocusMethod::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Supported methods for focusing the camera. */" },
		{ "Disable.Comment", "/** Disable depth of field entirely. */" },
		{ "Disable.Name", "ECameraFocusMethod::Disable" },
		{ "Disable.ToolTip", "Disable depth of field entirely." },
		{ "DoNotOverride.Comment", "/** Don't override, ie. allow post process volume settings to persist. */" },
		{ "DoNotOverride.Name", "ECameraFocusMethod::DoNotOverride" },
		{ "DoNotOverride.ToolTip", "Don't override, ie. allow post process volume settings to persist." },
		{ "Manual.Comment", "/** Allows for specifying or animating exact focus distances. */" },
		{ "Manual.Name", "ECameraFocusMethod::Manual" },
		{ "Manual.ToolTip", "Allows for specifying or animating exact focus distances." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ECameraFocusMethod::MAX" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Supported methods for focusing the camera." },
		{ "Tracking.Comment", "/** Locks focus to specific object. */" },
		{ "Tracking.Name", "ECameraFocusMethod::Tracking" },
		{ "Tracking.ToolTip", "Locks focus to specific object." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		"ECameraFocusMethod",
		"ECameraFocusMethod",
		Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod()
	{
		if (!Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton, Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraFocusMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings;
class UScriptStruct* FCameraTrackingFocusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraTrackingFocusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraTrackingFocusSettings>()
{
	return FCameraTrackingFocusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugTrackingFocusPoint_MetaData[];
#endif
		static void NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrackingFocusPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control tracking-focus mode. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Settings to control tracking-focus mode." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraTrackingFocusSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Focus distance will be tied to this actor's location. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Focus distance will be tied to this actor's location." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraTrackingFocusSettings, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Offset from actor position to track. Relative to actor if tracking an actor, relative to world otherwise." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraTrackingFocusSettings, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData[] = {
		{ "Category", "Tracking Focus" },
		{ "Comment", "/** True to draw a debug representation of the tracked position. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "True to draw a debug representation of the tracked position." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj)
	{
		((FCameraTrackingFocusSettings*)Obj)->bDrawDebugTrackingFocusPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint = { "bDrawDebugTrackingFocusPoint", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraTrackingFocusSettings), &Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraTrackingFocusSettings",
		sizeof(FCameraTrackingFocusSettings),
		alignof(FCameraTrackingFocusSettings),
		Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraFocusSettings;
class UScriptStruct* FCameraFocusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFocusSettings, (UObject*)Z_Construct_UPackage__Script_CinematicCamera(), TEXT("CameraFocusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CameraFocusSettings.OuterSingleton;
}
template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<FCameraFocusSettings>()
{
	return FCameraFocusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FocusMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FocusMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualFocusDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManualFocusDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingFocusSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingFocusSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFocusPlane_MetaData[];
#endif
		static void NewProp_bDrawDebugFocusPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFocusPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugFocusPlaneColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothFocusChanges_MetaData[];
#endif
		static void NewProp_bSmoothFocusChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothFocusChanges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusSmoothingInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusSmoothingInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocusOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Settings to control camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Settings to control camera focus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFocusSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData[] = {
		{ "Category", "Focus Method" },
		{ "Comment", "/** Which method to use to handle camera focus */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Which method to use to handle camera focus" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod = { "FocusMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusMethod), Z_Construct_UEnum_CinematicCamera_ECameraFocusMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_MetaData)) }; // 4223009113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData[] = {
		{ "Category", "Manual Focus Settings" },
		{ "Comment", "/** Manually-controlled focus distance (manual focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Manually-controlled focus distance (manual focus mode only)" },
		{ "Units", "cm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance = { "ManualFocusDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, ManualFocusDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData[] = {
		{ "Category", "Tracking Focus Settings" },
		{ "Comment", "/** Settings to control tracking focus (tracking focus mode only) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Settings to control tracking focus (tracking focus mode only)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings = { "TrackingFocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, TrackingFocusSettings), Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings_MetaData)) }; // 3475425736
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to draw a translucent plane at the current focus depth, for easy tweaking. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "True to draw a translucent plane at the current focus depth, for easy tweaking." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bDrawDebugFocusPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane = { "bDrawDebugFocusPlane", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** For customizing the focus plane color, in case the default doesn't show up well in your scene. */" },
		{ "EditCondition", "bDrawDebugFocusPlane" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "For customizing the focus plane color, in case the default doesn't show up well in your scene." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor = { "DebugFocusPlaneColor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, DebugFocusPlaneColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "True to use interpolation to smooth out changes in focus distance, false for focus distance changes to be instantaneous." },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit(void* Obj)
	{
		((FCameraFocusSettings*)Obj)->bSmoothFocusChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges = { "bSmoothFocusChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FCameraFocusSettings), &Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false. */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Controls interpolation speed when smoothing focus distance changes. Ignored if bSmoothFocusChanges is false." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed = { "FocusSmoothingInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusSmoothingInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData[] = {
		{ "Category", "Focus Settings" },
		{ "Comment", "/** Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Additional focus depth offset, used for manually tweaking if your chosen focus method needs adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset = { "FocusOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraFocusSettings, FocusOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_ManualFocusDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_TrackingFocusSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bDrawDebugFocusPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_DebugFocusPlaneColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_bSmoothFocusChanges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusSmoothingInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewProp_FocusOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
		nullptr,
		&NewStructOps,
		"CameraFocusSettings",
		sizeof(FCameraFocusSettings),
		alignof(FCameraFocusSettings),
		Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton, Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraFocusSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetCropPresetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetCropPresetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetFilmbackPresetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetFilmbackPresetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetLensPresetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetLensPresetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetCropPresets)
	{
		P_GET_TARRAY_REF(FNamedPlateCropPreset,Z_Param_Out_InCropPresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCropPresets(Z_Param_Out_InCropPresets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetDefaultCropPresetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultCropPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultCropPresetName(Z_Param_InDefaultCropPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetFilmbackPresets)
	{
		P_GET_TARRAY_REF(FNamedFilmbackPreset,Z_Param_Out_InFilmbackPresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFilmbackPresets(Z_Param_Out_InFilmbackPresets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetDefaultFilmbackPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultFilmbackPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultFilmbackPreset(Z_Param_InDefaultFilmbackPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetLensPresets)
	{
		P_GET_TARRAY_REF(FNamedLensPreset,Z_Param_Out_InLensPresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensPresets(Z_Param_Out_InLensPresets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetDefaultLensFStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDefaultLensFStop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLensFStop(Z_Param_InDefaultLensFStop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetDefaultLensFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDefaultLensFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLensFocalLength(Z_Param_InDefaultLensFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execSetDefaultLensPresetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDefaultLensPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLensPresetName(Z_Param_InDefaultLensPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetCineCameraSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineCameraSettings**)Z_Param__Result=UCineCameraSettings::GetCineCameraSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetCropPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_GET_STRUCT_REF(FPlateCropSettings,Z_Param_Out_CropSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCropPresetByName(Z_Param_PresetName,Z_Param_Out_CropSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetFilmbackPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_GET_STRUCT_REF(FCameraFilmbackSettings,Z_Param_Out_FilmbackSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFilmbackPresetByName(Z_Param_PresetName,Z_Param_Out_FilmbackSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCineCameraSettings::execGetLensPresetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_GET_STRUCT_REF(FCameraLensSettings,Z_Param_Out_LensSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLensPresetByName(Z_Param_PresetName,Z_Param_Out_LensSettings);
		P_NATIVE_END;
	}
	void UCineCameraSettings::StaticRegisterNativesUCineCameraSettings()
	{
		UClass* Class = UCineCameraSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineCameraSettings", &UCineCameraSettings::execGetCineCameraSettings },
			{ "GetCropPresetByName", &UCineCameraSettings::execGetCropPresetByName },
			{ "GetCropPresetNames", &UCineCameraSettings::execGetCropPresetNames },
			{ "GetFilmbackPresetByName", &UCineCameraSettings::execGetFilmbackPresetByName },
			{ "GetFilmbackPresetNames", &UCineCameraSettings::execGetFilmbackPresetNames },
			{ "GetLensPresetByName", &UCineCameraSettings::execGetLensPresetByName },
			{ "GetLensPresetNames", &UCineCameraSettings::execGetLensPresetNames },
			{ "SetCropPresets", &UCineCameraSettings::execSetCropPresets },
			{ "SetDefaultCropPresetName", &UCineCameraSettings::execSetDefaultCropPresetName },
			{ "SetDefaultFilmbackPreset", &UCineCameraSettings::execSetDefaultFilmbackPreset },
			{ "SetDefaultLensFocalLength", &UCineCameraSettings::execSetDefaultLensFocalLength },
			{ "SetDefaultLensFStop", &UCineCameraSettings::execSetDefaultLensFStop },
			{ "SetDefaultLensPresetName", &UCineCameraSettings::execSetDefaultLensPresetName },
			{ "SetFilmbackPresets", &UCineCameraSettings::execSetFilmbackPresets },
			{ "SetLensPresets", &UCineCameraSettings::execSetLensPresets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics
	{
		struct CineCameraSettings_eventGetCineCameraSettings_Parms
		{
			UCineCameraSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetCineCameraSettings_Parms, ReturnValue), Z_Construct_UClass_UCineCameraSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetCineCameraSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::CineCameraSettings_eventGetCineCameraSettings_Parms), Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics
	{
		struct CineCameraSettings_eventGetCropPresetByName_Parms
		{
			FString PresetName;
			FPlateCropSettings CropSettings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetCropPresetByName_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_PresetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_CropSettings = { "CropSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetCropPresetByName_Parms, CropSettings), Z_Construct_UScriptStruct_FPlateCropSettings, METADATA_PARAMS(nullptr, 0) }; // 2230578511
	void Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CineCameraSettings_eventGetCropPresetByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CineCameraSettings_eventGetCropPresetByName_Parms), &Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_CropSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "// Gets the Crop settings associated with a given preset name\n// Returns true if a preset with the given name was found\n" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Gets the Crop settings associated with a given preset name\nReturns true if a preset with the given name was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetCropPresetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::CineCameraSettings_eventGetCropPresetByName_Parms), Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics
	{
		struct CineCameraSettings_eventGetCropPresetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetCropPresetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetCropPresetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::CineCameraSettings_eventGetCropPresetNames_Parms), Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics
	{
		struct CineCameraSettings_eventGetFilmbackPresetByName_Parms
		{
			FString PresetName;
			FCameraFilmbackSettings FilmbackSettings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetFilmbackPresetByName_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_PresetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetFilmbackPresetByName_Parms, FilmbackSettings), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(nullptr, 0) }; // 833749679
	void Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CineCameraSettings_eventGetFilmbackPresetByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CineCameraSettings_eventGetFilmbackPresetByName_Parms), &Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_FilmbackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "// Gets the Filmback settings associated with a given preset name\n// Returns true if a preset with the given name was found\n" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Gets the Filmback settings associated with a given preset name\nReturns true if a preset with the given name was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetFilmbackPresetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::CineCameraSettings_eventGetFilmbackPresetByName_Parms), Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics
	{
		struct CineCameraSettings_eventGetFilmbackPresetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetFilmbackPresetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetFilmbackPresetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::CineCameraSettings_eventGetFilmbackPresetNames_Parms), Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics
	{
		struct CineCameraSettings_eventGetLensPresetByName_Parms
		{
			FString PresetName;
			FCameraLensSettings LensSettings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetLensPresetByName_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_PresetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetLensPresetByName_Parms, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(nullptr, 0) }; // 3012950202
	void Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CineCameraSettings_eventGetLensPresetByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CineCameraSettings_eventGetLensPresetByName_Parms), &Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_LensSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "// Gets the Lens settings associated with a given preset name\n// Returns true if a preset with the given name was found\n" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ReturnDisplayName", "Success" },
		{ "ToolTip", "Gets the Lens settings associated with a given preset name\nReturns true if a preset with the given name was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetLensPresetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::CineCameraSettings_eventGetLensPresetByName_Parms), Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics
	{
		struct CineCameraSettings_eventGetLensPresetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventGetLensPresetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Functions used for the GetOptions metadata */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Functions used for the GetOptions metadata" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "GetLensPresetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::CineCameraSettings_eventGetLensPresetNames_Parms), Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics
	{
		struct CineCameraSettings_eventSetCropPresets_Parms
		{
			TArray<FNamedPlateCropPreset> InCropPresets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCropPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCropPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InCropPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets_Inner = { "InCropPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedPlateCropPreset, METADATA_PARAMS(nullptr, 0) }; // 482149645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets = { "InCropPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetCropPresets_Parms, InCropPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets_MetaData)) }; // 482149645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::NewProp_InCropPresets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetCropPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::CineCameraSettings_eventSetCropPresets_Parms), Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetCropPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetCropPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics
	{
		struct CineCameraSettings_eventSetDefaultCropPresetName_Parms
		{
			FString InDefaultCropPresetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultCropPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultCropPresetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::NewProp_InDefaultCropPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::NewProp_InDefaultCropPresetName = { "InDefaultCropPresetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetDefaultCropPresetName_Parms, InDefaultCropPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::NewProp_InDefaultCropPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::NewProp_InDefaultCropPresetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::NewProp_InDefaultCropPresetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetDefaultCropPresetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::CineCameraSettings_eventSetDefaultCropPresetName_Parms), Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics
	{
		struct CineCameraSettings_eventSetDefaultFilmbackPreset_Parms
		{
			FString InDefaultFilmbackPreset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultFilmbackPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultFilmbackPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::NewProp_InDefaultFilmbackPreset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::NewProp_InDefaultFilmbackPreset = { "InDefaultFilmbackPreset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetDefaultFilmbackPreset_Parms, InDefaultFilmbackPreset), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::NewProp_InDefaultFilmbackPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::NewProp_InDefaultFilmbackPreset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::NewProp_InDefaultFilmbackPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetDefaultFilmbackPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::CineCameraSettings_eventSetDefaultFilmbackPreset_Parms), Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics
	{
		struct CineCameraSettings_eventSetDefaultLensFocalLength_Parms
		{
			float InDefaultLensFocalLength;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultLensFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDefaultLensFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::NewProp_InDefaultLensFocalLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::NewProp_InDefaultLensFocalLength = { "InDefaultLensFocalLength", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetDefaultLensFocalLength_Parms, InDefaultLensFocalLength), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::NewProp_InDefaultLensFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::NewProp_InDefaultLensFocalLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::NewProp_InDefaultLensFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetDefaultLensFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::CineCameraSettings_eventSetDefaultLensFocalLength_Parms), Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics
	{
		struct CineCameraSettings_eventSetDefaultLensFStop_Parms
		{
			float InDefaultLensFStop;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultLensFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDefaultLensFStop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::NewProp_InDefaultLensFStop_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::NewProp_InDefaultLensFStop = { "InDefaultLensFStop", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetDefaultLensFStop_Parms, InDefaultLensFStop), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::NewProp_InDefaultLensFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::NewProp_InDefaultLensFStop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::NewProp_InDefaultLensFStop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetDefaultLensFStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::CineCameraSettings_eventSetDefaultLensFStop_Parms), Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics
	{
		struct CineCameraSettings_eventSetDefaultLensPresetName_Parms
		{
			FString InDefaultLensPresetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDefaultLensPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDefaultLensPresetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::NewProp_InDefaultLensPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::NewProp_InDefaultLensPresetName = { "InDefaultLensPresetName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetDefaultLensPresetName_Parms, InDefaultLensPresetName), METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::NewProp_InDefaultLensPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::NewProp_InDefaultLensPresetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::NewProp_InDefaultLensPresetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/* Internal Blueprint Setter functions that call SaveConfig after setting the variable to ensure settings persist */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Internal Blueprint Setter functions that call SaveConfig after setting the variable to ensure settings persist" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetDefaultLensPresetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::CineCameraSettings_eventSetDefaultLensPresetName_Parms), Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics
	{
		struct CineCameraSettings_eventSetFilmbackPresets_Parms
		{
			TArray<FNamedFilmbackPreset> InFilmbackPresets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFilmbackPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFilmbackPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InFilmbackPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets_Inner = { "InFilmbackPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) }; // 1422509083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets = { "InFilmbackPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetFilmbackPresets_Parms, InFilmbackPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets_MetaData)) }; // 1422509083
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::NewProp_InFilmbackPresets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetFilmbackPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::CineCameraSettings_eventSetFilmbackPresets_Parms), Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics
	{
		struct CineCameraSettings_eventSetLensPresets_Parms
		{
			TArray<FNamedLensPreset> InLensPresets;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLensPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLensPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InLensPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets_Inner = { "InLensPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) }; // 1510584725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets = { "InLensPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraSettings_eventSetLensPresets_Parms, InLensPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets_MetaData)) }; // 1510584725
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::NewProp_InLensPresets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraSettings, nullptr, "SetLensPresets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::CineCameraSettings_eventSetLensPresets_Parms), Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCineCameraSettings_SetLensPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraSettings_SetLensPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCameraSettings);
	UClass* Z_Construct_UClass_UCineCameraSettings_NoRegister()
	{
		return UCineCameraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCineCameraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultLensPresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFStop_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFStop;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LensPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPreset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilmbackPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCropPresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultCropPresetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CropPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CropPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCameraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCineCameraSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineCameraSettings_GetCineCameraSettings, "GetCineCameraSettings" }, // 2118765501
		{ &Z_Construct_UFunction_UCineCameraSettings_GetCropPresetByName, "GetCropPresetByName" }, // 4277634965
		{ &Z_Construct_UFunction_UCineCameraSettings_GetCropPresetNames, "GetCropPresetNames" }, // 1077595250
		{ &Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetByName, "GetFilmbackPresetByName" }, // 2935785484
		{ &Z_Construct_UFunction_UCineCameraSettings_GetFilmbackPresetNames, "GetFilmbackPresetNames" }, // 2171435294
		{ &Z_Construct_UFunction_UCineCameraSettings_GetLensPresetByName, "GetLensPresetByName" }, // 833839673
		{ &Z_Construct_UFunction_UCineCameraSettings_GetLensPresetNames, "GetLensPresetNames" }, // 3216106619
		{ &Z_Construct_UFunction_UCineCameraSettings_SetCropPresets, "SetCropPresets" }, // 686318986
		{ &Z_Construct_UFunction_UCineCameraSettings_SetDefaultCropPresetName, "SetDefaultCropPresetName" }, // 2313131469
		{ &Z_Construct_UFunction_UCineCameraSettings_SetDefaultFilmbackPreset, "SetDefaultFilmbackPreset" }, // 145537644
		{ &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFocalLength, "SetDefaultLensFocalLength" }, // 3496477458
		{ &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensFStop, "SetDefaultLensFStop" }, // 4134795132
		{ &Z_Construct_UFunction_UCineCameraSettings_SetDefaultLensPresetName, "SetDefaultLensPresetName" }, // 2605366561
		{ &Z_Construct_UFunction_UCineCameraSettings_SetFilmbackPresets, "SetFilmbackPresets" }, // 3043698358
		{ &Z_Construct_UFunction_UCineCameraSettings_SetLensPresets, "SetLensPresets" }, // 863535979
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Cinematic Camera" },
		{ "IncludePath", "CineCameraSettings.h" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensPresetName_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultLensPresetName" },
		{ "Category", "Lens" },
		{ "Comment", "/** Name of the default lens preset */" },
		{ "GetOptions", "GetLensPresetNames" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name of the default lens preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensPresetName = { "DefaultLensPresetName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, DefaultLensPresetName), METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensPresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFocalLength_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultLensFocalLength" },
		{ "Category", "Lens" },
		{ "Comment", "/** Default focal length (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Default focal length (will be constrained by default lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFocalLength = { "DefaultLensFocalLength", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, DefaultLensFocalLength), METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFStop_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultLensFStop" },
		{ "Category", "Lens" },
		{ "Comment", "/** Default aperture (will be constrained by default lens) */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Default aperture (will be constrained by default lens)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFStop = { "DefaultLensFStop", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, DefaultLensFStop), METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFStop_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets_Inner = { "LensPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(nullptr, 0) }; // 1510584725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets_MetaData[] = {
		{ "BlueprintSetter", "SetLensPresets" },
		{ "Category", "Lens" },
		{ "Comment", "/** List of available lens presets */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "List of available lens presets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets = { "LensPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, LensPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets_MetaData)) }; // 1510584725
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultFilmbackPreset_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultfilmbackPreset" },
		{ "Category", "Filmback" },
		{ "Comment", "/** Name of the default filmback preset */" },
		{ "GetOptions", "GetFilmbackPresetNames" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name of the default filmback preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultFilmbackPreset = { "DefaultFilmbackPreset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, DefaultFilmbackPreset), METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultFilmbackPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultFilmbackPreset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets_Inner = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(nullptr, 0) }; // 1422509083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets_MetaData[] = {
		{ "BlueprintSetter", "SetFilmbackPresets" },
		{ "Category", "Filmback" },
		{ "Comment", "/** List of available filmback presets */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "List of available filmback presets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, FilmbackPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets_MetaData)) }; // 1422509083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultCropPresetName_MetaData[] = {
		{ "BlueprintSetter", "SetDefaultCropPresetName" },
		{ "Category", "Crop" },
		{ "Comment", "/** Name of the default crop preset */" },
		{ "GetOptions", "GetCropPresetNames" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "ToolTip", "Name of the default crop preset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultCropPresetName = { "DefaultCropPresetName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, DefaultCropPresetName), METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultCropPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultCropPresetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets_Inner = { "CropPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedPlateCropPreset, METADATA_PARAMS(nullptr, 0) }; // 482149645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets_MetaData[] = {
		{ "BlueprintSetter", "SetCropPresets" },
		{ "Category", "Crop" },
		{ "Comment", "/** List of available crop presets */" },
		{ "ModuleRelativePath", "Public/CineCameraSettings.h" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "List of available crop presets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets = { "CropPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraSettings, CropPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets_MetaData)) }; // 482149645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensPresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultLensFStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_LensPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultFilmbackPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_FilmbackPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_DefaultCropPresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraSettings_Statics::NewProp_CropPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCameraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraSettings_Statics::ClassParams = {
		&UCineCameraSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCineCameraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCineCameraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineCameraSettings()
	{
		if (!Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton, Z_Construct_UClass_UCineCameraSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineCameraSettings.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UClass* StaticClass<UCineCameraSettings>()
	{
		return UCineCameraSettings::StaticClass();
	}
	UCineCameraSettings::UCineCameraSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraSettings);
	UCineCameraSettings::~UCineCameraSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::EnumInfo[] = {
		{ ECameraFocusMethod_StaticEnum, TEXT("ECameraFocusMethod"), &Z_Registration_Info_UEnum_ECameraFocusMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4223009113U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ScriptStructInfo[] = {
		{ FCameraFilmbackSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics::NewStructOps, TEXT("CameraFilmbackSettings"), &Z_Registration_Info_UScriptStruct_CameraFilmbackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFilmbackSettings), 833749679U) },
		{ FNamedFilmbackPreset::StaticStruct, Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics::NewStructOps, TEXT("NamedFilmbackPreset"), &Z_Registration_Info_UScriptStruct_NamedFilmbackPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedFilmbackPreset), 1422509083U) },
		{ FCameraLensSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraLensSettings_Statics::NewStructOps, TEXT("CameraLensSettings"), &Z_Registration_Info_UScriptStruct_CameraLensSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraLensSettings), 3012950202U) },
		{ FNamedLensPreset::StaticStruct, Z_Construct_UScriptStruct_FNamedLensPreset_Statics::NewStructOps, TEXT("NamedLensPreset"), &Z_Registration_Info_UScriptStruct_NamedLensPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedLensPreset), 1510584725U) },
		{ FPlateCropSettings::StaticStruct, Z_Construct_UScriptStruct_FPlateCropSettings_Statics::NewStructOps, TEXT("PlateCropSettings"), &Z_Registration_Info_UScriptStruct_PlateCropSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlateCropSettings), 2230578511U) },
		{ FNamedPlateCropPreset::StaticStruct, Z_Construct_UScriptStruct_FNamedPlateCropPreset_Statics::NewStructOps, TEXT("NamedPlateCropPreset"), &Z_Registration_Info_UScriptStruct_NamedPlateCropPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedPlateCropPreset), 482149645U) },
		{ FCameraTrackingFocusSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics::NewStructOps, TEXT("CameraTrackingFocusSettings"), &Z_Registration_Info_UScriptStruct_CameraTrackingFocusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraTrackingFocusSettings), 3475425736U) },
		{ FCameraFocusSettings::StaticStruct, Z_Construct_UScriptStruct_FCameraFocusSettings_Statics::NewStructOps, TEXT("CameraFocusSettings"), &Z_Registration_Info_UScriptStruct_CameraFocusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFocusSettings), 186601072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineCameraSettings, UCineCameraSettings::StaticClass, TEXT("UCineCameraSettings"), &Z_Registration_Info_UClass_UCineCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCameraSettings), 3746416224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_2495091265(TEXT("/Script/CinematicCamera"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
