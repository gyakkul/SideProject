// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidRuntimeSettings.h"
#include "AudioCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidRuntimeSettings() {}
// Cross Module References
	ANDROIDRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UAndroidRuntimeSettings();
	ANDROIDRUNTIMESETTINGS_API UClass* Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment();
	ANDROIDRUNTIMESETTINGS_API UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent();
	ANDROIDRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping();
	ANDROIDRUNTIMESETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	UPackage* Z_Construct_UPackage__Script_AndroidRuntimeSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidScreenOrientation;
	static UEnum* EAndroidScreenOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidScreenOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidScreenOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidScreenOrientation"));
		}
		return Z_Registration_Info_UEnum_EAndroidScreenOrientation.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidScreenOrientation::Type>()
	{
		return EAndroidScreenOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enumerators[] = {
		{ "EAndroidScreenOrientation::Portrait", (int64)EAndroidScreenOrientation::Portrait },
		{ "EAndroidScreenOrientation::ReversePortrait", (int64)EAndroidScreenOrientation::ReversePortrait },
		{ "EAndroidScreenOrientation::SensorPortrait", (int64)EAndroidScreenOrientation::SensorPortrait },
		{ "EAndroidScreenOrientation::Landscape", (int64)EAndroidScreenOrientation::Landscape },
		{ "EAndroidScreenOrientation::ReverseLandscape", (int64)EAndroidScreenOrientation::ReverseLandscape },
		{ "EAndroidScreenOrientation::SensorLandscape", (int64)EAndroidScreenOrientation::SensorLandscape },
		{ "EAndroidScreenOrientation::Sensor", (int64)EAndroidScreenOrientation::Sensor },
		{ "EAndroidScreenOrientation::FullSensor", (int64)EAndroidScreenOrientation::FullSensor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertOrientationIniValue()!\n" },
		{ "FullSensor.Comment", "/** Use any orientation (including ones the device wouldn't choose in Sensor mode), based on the device orientation sensor. */" },
		{ "FullSensor.Name", "EAndroidScreenOrientation::FullSensor" },
		{ "FullSensor.ToolTip", "Use any orientation (including ones the device wouldn't choose in Sensor mode), based on the device orientation sensor." },
		{ "Landscape.Comment", "/** Landscape orientation (the display is wider than it is tall). */" },
		{ "Landscape.Name", "EAndroidScreenOrientation::Landscape" },
		{ "Landscape.ToolTip", "Landscape orientation (the display is wider than it is tall)." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "Portrait.Comment", "/** Portrait orientation (the display is taller than it is wide). */" },
		{ "Portrait.Name", "EAndroidScreenOrientation::Portrait" },
		{ "Portrait.ToolTip", "Portrait orientation (the display is taller than it is wide)." },
		{ "ReverseLandscape.Comment", "/** Landscape orientation rotated 180 degrees. */" },
		{ "ReverseLandscape.Name", "EAndroidScreenOrientation::ReverseLandscape" },
		{ "ReverseLandscape.ToolTip", "Landscape orientation rotated 180 degrees." },
		{ "ReversePortrait.Comment", "/** Portrait orientation rotated 180 degrees. */" },
		{ "ReversePortrait.Name", "EAndroidScreenOrientation::ReversePortrait" },
		{ "ReversePortrait.ToolTip", "Portrait orientation rotated 180 degrees." },
		{ "Sensor.Comment", "/** Use any orientation the device normally supports, based on the device orientation sensor. */" },
		{ "Sensor.Name", "EAndroidScreenOrientation::Sensor" },
		{ "Sensor.ToolTip", "Use any orientation the device normally supports, based on the device orientation sensor." },
		{ "SensorLandscape.Comment", "/** Use either landscape or reverse landscape orientation, based on the device orientation sensor. */" },
		{ "SensorLandscape.Name", "EAndroidScreenOrientation::SensorLandscape" },
		{ "SensorLandscape.ToolTip", "Use either landscape or reverse landscape orientation, based on the device orientation sensor." },
		{ "SensorPortrait.Comment", "/** Use either portrait or reverse portrait orientation, where supported by the device, based on the device orientation sensor. */" },
		{ "SensorPortrait.Name", "EAndroidScreenOrientation::SensorPortrait" },
		{ "SensorPortrait.ToolTip", "Use either portrait or reverse portrait orientation, where supported by the device, based on the device orientation sensor." },
		{ "ToolTip", "IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertOrientationIniValue()!" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EAndroidScreenOrientation",
		"EAndroidScreenOrientation::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation()
	{
		if (!Z_Registration_Info_UEnum_EAndroidScreenOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidScreenOrientation.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidScreenOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidDepthBufferPreference;
	static UEnum* EAndroidDepthBufferPreference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidDepthBufferPreference"));
		}
		return Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidDepthBufferPreference::Type>()
	{
		return EAndroidDepthBufferPreference_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enumerators[] = {
		{ "EAndroidDepthBufferPreference::Default", (int64)EAndroidDepthBufferPreference::Default },
		{ "EAndroidDepthBufferPreference::Bits16", (int64)EAndroidDepthBufferPreference::Bits16 },
		{ "EAndroidDepthBufferPreference::Bits24", (int64)EAndroidDepthBufferPreference::Bits24 },
		{ "EAndroidDepthBufferPreference::Bits32", (int64)EAndroidDepthBufferPreference::Bits32 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enum_MetaDataParams[] = {
		{ "Bits16.DisplayName", "16-bit" },
		{ "Bits16.Name", "EAndroidDepthBufferPreference::Bits16" },
		{ "Bits24.DisplayName", "24-bit" },
		{ "Bits24.Name", "EAndroidDepthBufferPreference::Bits24" },
		{ "Bits32.DisplayName", "32-bit" },
		{ "Bits32.Name", "EAndroidDepthBufferPreference::Bits32" },
		{ "Comment", "/** Depth buffer precision preferences */// IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertDepthBufferIniValue()!\n" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EAndroidDepthBufferPreference::Default" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Depth buffer precision preferences // IF THIS CHANGES, MAKE SURE TO UPDATE UEDeployAndroid.cs, ConvertDepthBufferIniValue()!" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EAndroidDepthBufferPreference",
		"EAndroidDepthBufferPreference::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference()
	{
		if (!Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidDepthBufferPreference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidInstallLocation;
	static UEnum* EAndroidInstallLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidInstallLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidInstallLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidInstallLocation"));
		}
		return Z_Registration_Info_UEnum_EAndroidInstallLocation.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidInstallLocation::Type>()
	{
		return EAndroidInstallLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enumerators[] = {
		{ "EAndroidInstallLocation::InternalOnly", (int64)EAndroidInstallLocation::InternalOnly },
		{ "EAndroidInstallLocation::PreferExternal", (int64)EAndroidInstallLocation::PreferExternal },
		{ "EAndroidInstallLocation::Auto", (int64)EAndroidInstallLocation::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Internal storage is preferred over external, unless the interal storage is low on space */" },
		{ "Auto.Name", "EAndroidInstallLocation::Auto" },
		{ "Auto.ToolTip", "Internal storage is preferred over external, unless the interal storage is low on space" },
		{ "Comment", "/** The default install location for the application */" },
		{ "InternalOnly.Comment", "/** Install your app only on internal device storage */" },
		{ "InternalOnly.Name", "EAndroidInstallLocation::InternalOnly" },
		{ "InternalOnly.ToolTip", "Install your app only on internal device storage" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "PreferExternal.Comment", "/** Install your app on external storage when available */" },
		{ "PreferExternal.Name", "EAndroidInstallLocation::PreferExternal" },
		{ "PreferExternal.ToolTip", "Install your app on external storage when available" },
		{ "ToolTip", "The default install location for the application" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EAndroidInstallLocation",
		"EAndroidInstallLocation::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation()
	{
		if (!Z_Registration_Info_UEnum_EAndroidInstallLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidInstallLocation.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidInstallLocation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusMobileDevice;
	static UEnum* EOculusMobileDevice_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusMobileDevice.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusMobileDevice.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EOculusMobileDevice"));
		}
		return Z_Registration_Info_UEnum_EOculusMobileDevice.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EOculusMobileDevice::Type>()
	{
		return EOculusMobileDevice_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enumerators[] = {
		{ "EOculusMobileDevice::Quest", (int64)EOculusMobileDevice::Quest },
		{ "EOculusMobileDevice::Quest2", (int64)EOculusMobileDevice::Quest2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The target Oculus Mobile device for application packaging */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "Quest.Comment", "/** Package for Oculus Quest */" },
		{ "Quest.DisplayName", "Oculus Quest" },
		{ "Quest.Name", "EOculusMobileDevice::Quest" },
		{ "Quest.ToolTip", "Package for Oculus Quest" },
		{ "Quest2.Comment", "/** Package for Oculus Quest 2*/" },
		{ "Quest2.DisplayName", "Oculus Quest 2" },
		{ "Quest2.Name", "EOculusMobileDevice::Quest2" },
		{ "Quest2.ToolTip", "Package for Oculus Quest 2" },
		{ "ToolTip", "The target Oculus Mobile device for application packaging" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EOculusMobileDevice",
		"EOculusMobileDevice::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice()
	{
		if (!Z_Registration_Info_UEnum_EOculusMobileDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusMobileDevice.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusMobileDevice.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETagForChildDirectedTreatment;
	static UEnum* ETagForChildDirectedTreatment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("ETagForChildDirectedTreatment"));
		}
		return Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<ETagForChildDirectedTreatment::Type>()
	{
		return ETagForChildDirectedTreatment_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enumerators[] = {
		{ "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED", (int64)ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED },
		{ "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE", (int64)ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE },
		{ "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE", (int64)ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** AdMob TagForChildDirectedTreament  */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE.Name", "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_FALSE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE.Name", "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_TRUE" },
		{ "TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED.Name", "ETagForChildDirectedTreatment::TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED" },
		{ "ToolTip", "AdMob TagForChildDirectedTreament" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"ETagForChildDirectedTreatment",
		"ETagForChildDirectedTreatment::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment()
	{
		if (!Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETagForChildDirectedTreatment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent;
	static UEnum* ETagForUnderAgeOfConsent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("ETagForUnderAgeOfConsent"));
		}
		return Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<ETagForUnderAgeOfConsent::Type>()
	{
		return ETagForUnderAgeOfConsent_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enumerators[] = {
		{ "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED", (int64)ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED },
		{ "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE", (int64)ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE },
		{ "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE", (int64)ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** AdMob TagForChildDirectedTreament  */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE.Name", "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_FALSE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE.Name", "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_TRUE" },
		{ "TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED.Name", "ETagForUnderAgeOfConsent::TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED" },
		{ "ToolTip", "AdMob TagForChildDirectedTreament" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"ETagForUnderAgeOfConsent",
		"ETagForUnderAgeOfConsent::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent()
	{
		if (!Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaxAdContentRating;
	static UEnum* EMaxAdContentRating_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaxAdContentRating.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaxAdContentRating.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EMaxAdContentRating"));
		}
		return Z_Registration_Info_UEnum_EMaxAdContentRating.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EMaxAdContentRating::Type>()
	{
		return EMaxAdContentRating_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enumerators[] = {
		{ "EMaxAdContentRating::MAX_AD_CONTENT_RATING_G", (int64)EMaxAdContentRating::MAX_AD_CONTENT_RATING_G },
		{ "EMaxAdContentRating::MAX_AD_CONTENT_RATING_PG", (int64)EMaxAdContentRating::MAX_AD_CONTENT_RATING_PG },
		{ "EMaxAdContentRating::MAX_AD_CONTENT_RATING_T", (int64)EMaxAdContentRating::MAX_AD_CONTENT_RATING_T },
		{ "EMaxAdContentRating::MAX_AD_CONTENT_RATING_MA", (int64)EMaxAdContentRating::MAX_AD_CONTENT_RATING_MA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** AdMob MaxAdContentRating  */" },
		{ "MAX_AD_CONTENT_RATING_G.Name", "EMaxAdContentRating::MAX_AD_CONTENT_RATING_G" },
		{ "MAX_AD_CONTENT_RATING_MA.Name", "EMaxAdContentRating::MAX_AD_CONTENT_RATING_MA" },
		{ "MAX_AD_CONTENT_RATING_PG.Name", "EMaxAdContentRating::MAX_AD_CONTENT_RATING_PG" },
		{ "MAX_AD_CONTENT_RATING_T.Name", "EMaxAdContentRating::MAX_AD_CONTENT_RATING_T" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "AdMob MaxAdContentRating" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EMaxAdContentRating",
		"EMaxAdContentRating::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating()
	{
		if (!Z_Registration_Info_UEnum_EMaxAdContentRating.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaxAdContentRating.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaxAdContentRating.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping;
class UScriptStruct* FGooglePlayAchievementMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("GooglePlayAchievementMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.OuterSingleton;
}
template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FGooglePlayAchievementMapping>()
{
	return FGooglePlayAchievementMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AchievementID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the game-specific achievement name and corresponding ID from Google Play services.\n */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Holds the game-specific achievement name and corresponding ID from Google Play services." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGooglePlayAchievementMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "/** The game-specific achievement name (the one passed in to WriteAchievement calls). */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The game-specific achievement name (the one passed in to WriteAchievement calls)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGooglePlayAchievementMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "/** The ID of the corresponding achievement, generated by the Google Play developer console. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The ID of the corresponding achievement, generated by the Google Play developer console." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID = { "AchievementID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGooglePlayAchievementMapping, AchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewProp_AchievementID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		&NewStructOps,
		"GooglePlayAchievementMapping",
		sizeof(FGooglePlayAchievementMapping),
		alignof(FGooglePlayAchievementMapping),
		Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayAchievementMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.InnerSingleton, Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping;
class UScriptStruct* FGooglePlayLeaderboardMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("GooglePlayLeaderboardMapping"));
	}
	return Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.OuterSingleton;
}
template<> ANDROIDRUNTIMESETTINGS_API UScriptStruct* StaticStruct<FGooglePlayLeaderboardMapping>()
{
	return FGooglePlayLeaderboardMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds the game-specific leaderboard name and corresponding ID from Google Play services.\n */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Holds the game-specific leaderboard name and corresponding ID from Google Play services." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGooglePlayLeaderboardMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "/** The game-specific leaderboard name (the one passed in to WriteLeaderboards calls). */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The game-specific leaderboard name (the one passed in to WriteLeaderboards calls)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGooglePlayLeaderboardMapping, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "/** The ID of the corresponding leaderboard, generated by the Google Play developer console. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The ID of the corresponding leaderboard, generated by the Google Play developer console." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID = { "LeaderboardID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGooglePlayLeaderboardMapping, LeaderboardID), METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewProp_LeaderboardID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		&NewStructOps,
		"GooglePlayLeaderboardMapping",
		sizeof(FGooglePlayLeaderboardMapping),
		alignof(FGooglePlayLeaderboardMapping),
		Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.InnerSingleton, Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidAudio;
	static UEnum* EAndroidAudio_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidAudio.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidAudio.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidAudio"));
		}
		return Z_Registration_Info_UEnum_EAndroidAudio.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidAudio::Type>()
	{
		return EAndroidAudio_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enumerators[] = {
		{ "EAndroidAudio::Default", (int64)EAndroidAudio::Default },
		{ "EAndroidAudio::OGG", (int64)EAndroidAudio::OGG },
		{ "EAndroidAudio::ADPCM", (int64)EAndroidAudio::ADPCM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enum_MetaDataParams[] = {
		{ "ADPCM.DisplayName", "ADPCM" },
		{ "ADPCM.Name", "EAndroidAudio::ADPCM" },
		{ "ADPCM.ToolTip", "This option selects ADPCM lossless encoding." },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EAndroidAudio::Default" },
		{ "Default.ToolTip", "This option selects the default encoder." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "OGG.DisplayName", "Ogg Vorbis" },
		{ "OGG.Name", "EAndroidAudio::OGG" },
		{ "OGG.ToolTip", "Selects Ogg Vorbis encoding." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EAndroidAudio",
		"EAndroidAudio::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio()
	{
		if (!Z_Registration_Info_UEnum_EAndroidAudio.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidAudio.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidAudio.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAndroidGraphicsDebugger;
	static UEnum* EAndroidGraphicsDebugger_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger, (UObject*)Z_Construct_UPackage__Script_AndroidRuntimeSettings(), TEXT("EAndroidGraphicsDebugger"));
		}
		return Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UEnum* StaticEnum<EAndroidGraphicsDebugger::Type>()
	{
		return EAndroidGraphicsDebugger_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enumerators[] = {
		{ "EAndroidGraphicsDebugger::None", (int64)EAndroidGraphicsDebugger::None },
		{ "EAndroidGraphicsDebugger::Mali", (int64)EAndroidGraphicsDebugger::Mali },
		{ "EAndroidGraphicsDebugger::Adreno", (int64)EAndroidGraphicsDebugger::Adreno },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enum_MetaDataParams[] = {
		{ "Adreno.DisplayName", "Adreno Profiler" },
		{ "Adreno.Name", "EAndroidGraphicsDebugger::Adreno" },
		{ "Adreno.ToolTip", "Configure for Adreno Profiler." },
		{ "Mali.DisplayName", "Mali Graphics Debugger" },
		{ "Mali.Name", "EAndroidGraphicsDebugger::Mali" },
		{ "Mali.ToolTip", "Configure for Mali Graphics Debugger." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAndroidGraphicsDebugger::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
		nullptr,
		"EAndroidGraphicsDebugger",
		"EAndroidGraphicsDebugger::Type",
		Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger()
	{
		if (!Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.InnerSingleton, Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAndroidGraphicsDebugger.InnerSingleton;
	}
	void UAndroidRuntimeSettings::StaticRegisterNativesUAndroidRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidRuntimeSettings);
	UClass* Z_Construct_UClass_UAndroidRuntimeSettings_NoRegister()
	{
		return UAndroidRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreVersionOffsetArm64_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreVersionOffsetArm64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreVersionOffsetX8664_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StoreVersionOffsetX8664;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VersionDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSDKVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinSDKVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSDKVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetSDKVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstallLocation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InstallLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLint_MetaData[];
#endif
		static void NewProp_bEnableLint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPackageDataInsideApk_MetaData[];
#endif
		static void NewProp_bPackageDataInsideApk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPackageDataInsideApk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateAllPlatformsInstall_MetaData[];
#endif
		static void NewProp_bCreateAllPlatformsInstall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateAllPlatformsInstall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableVerifyOBBOnStartUp_MetaData[];
#endif
		static void NewProp_bDisableVerifyOBBOnStartUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableVerifyOBBOnStartUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceSmallOBBFiles_MetaData[];
#endif
		static void NewProp_bForceSmallOBBFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSmallOBBFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLargeOBBFiles_MetaData[];
#endif
		static void NewProp_bAllowLargeOBBFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLargeOBBFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPatchOBBFile_MetaData[];
#endif
		static void NewProp_bAllowPatchOBBFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPatchOBBFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOverflowOBBFiles_MetaData[];
#endif
		static void NewProp_bAllowOverflowOBBFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOverflowOBBFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalFilesDir_MetaData[];
#endif
		static void NewProp_bUseExternalFilesDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalFilesDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPublicLogFiles_MetaData[];
#endif
		static void NewProp_bPublicLogFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublicLogFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDisplayCutout_MetaData[];
#endif
		static void NewProp_bUseDisplayCutout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDisplayCutout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreNotificationsOnReboot_MetaData[];
#endif
		static void NewProp_bRestoreNotificationsOnReboot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreNotificationsOnReboot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFullScreen_MetaData[];
#endif
		static void NewProp_bFullScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNewKeyboard_MetaData[];
#endif
		static void NewProp_bEnableNewKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNewKeyboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthBufferPreference_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthBufferPreference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateTextureFormats_MetaData[];
#endif
		static void NewProp_bValidateTextureFormats_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateTextureFormats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceCompressNativeLibs_MetaData[];
#endif
		static void NewProp_bForceCompressNativeLibs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCompressNativeLibs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAdvancedBinaryCompression_MetaData[];
#endif
		static void NewProp_bEnableAdvancedBinaryCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAdvancedBinaryCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBundle_MetaData[];
#endif
		static void NewProp_bEnableBundle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUniversalAPK_MetaData[];
#endif
		static void NewProp_bEnableUniversalAPK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUniversalAPK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBundleABISplit_MetaData[];
#endif
		static void NewProp_bBundleABISplit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBundleABISplit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBundleLanguageSplit_MetaData[];
#endif
		static void NewProp_bBundleLanguageSplit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBundleLanguageSplit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBundleDensitySplit_MetaData[];
#endif
		static void NewProp_bBundleDensitySplit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBundleDensitySplit;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraManifestNodeTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraManifestNodeTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraManifestNodeTags;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraApplicationNodeTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraApplicationNodeTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraApplicationNodeTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraApplicationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraApplicationSettings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraActivityNodeTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraActivityNodeTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraActivityNodeTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraActivitySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraActivitySettings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraPermissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraPermissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraPermissions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAndroidVoiceEnabled_MetaData[];
#endif
		static void NewProp_bAndroidVoiceEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAndroidVoiceEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMulticastSupport_MetaData[];
#endif
		static void NewProp_bEnableMulticastSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMulticastSupport;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackageForOculusMobile_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageForOculusMobile_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PackageForOculusMobile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveOSIG_MetaData[];
#endif
		static void NewProp_bRemoveOSIG_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOSIG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyStore_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyAlias_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyAlias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyStorePassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyStorePassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPassword_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyPassword;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildForArm64_MetaData[];
#endif
		static void NewProp_bBuildForArm64_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildForArm64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildForX8664_MetaData[];
#endif
		static void NewProp_bBuildForX8664_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildForX8664;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildForES31_MetaData[];
#endif
		static void NewProp_bBuildForES31_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildForES31;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsVulkan_MetaData[];
#endif
		static void NewProp_bSupportsVulkan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsVulkan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsVulkanSM5_MetaData[];
#endif
		static void NewProp_bSupportsVulkanSM5_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsVulkanSM5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVulkanLayerDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugVulkanLayerDirectory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugVulkanDeviceLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVulkanDeviceLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugVulkanDeviceLayers;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugVulkanInstanceLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugVulkanInstanceLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugVulkanInstanceLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAndroidOpenGLSupportsBackbufferSampling_MetaData[];
#endif
		static void NewProp_bAndroidOpenGLSupportsBackbufferSampling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAndroidOpenGLSupportsBackbufferSampling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectVulkanByDefault_MetaData[];
#endif
		static void NewProp_bDetectVulkanByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectVulkanByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildWithHiddenSymbolVisibility_MetaData[];
#endif
		static void NewProp_bBuildWithHiddenSymbolVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildWithHiddenSymbolVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableStackProtector_MetaData[];
#endif
		static void NewProp_bDisableStackProtector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableStackProtector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableLibCppSharedDependencyValidation_MetaData[];
#endif
		static void NewProp_bDisableLibCppSharedDependencyValidation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableLibCppSharedDependencyValidation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveSymbols_MetaData[];
#endif
		static void NewProp_bSaveSymbols_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSymbols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripShaderReflection_MetaData[];
#endif
		static void NewProp_bStripShaderReflection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripShaderReflection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGooglePlaySupport_MetaData[];
#endif
		static void NewProp_bEnableGooglePlaySupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGooglePlaySupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGetAccounts_MetaData[];
#endif
		static void NewProp_bUseGetAccounts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGetAccounts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamesAppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GamesAppID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AchievementMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AchievementMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapshots_MetaData[];
#endif
		static void NewProp_bEnableSnapshots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapshots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAdMob_MetaData[];
#endif
		static void NewProp_bSupportAdMob_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAdMob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdMobAppID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdMobAppID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagForChildDirectedTreatment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TagForChildDirectedTreatment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagForUnderAgeOfConsent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TagForUnderAgeOfConsent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAdContentRating_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxAdContentRating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdMobAdUnitID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdMobAdUnitID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdMobAdUnitIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdMobAdUnitIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdMobAdUnitIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GooglePlayLicenseKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GooglePlayLicenseKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GCMClientSenderID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GCMClientSenderID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLaunchImage_MetaData[];
#endif
		static void NewProp_bShowLaunchImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLaunchImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIMU_MetaData[];
#endif
		static void NewProp_bAllowIMU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIMU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowControllers_MetaData[];
#endif
		static void NewProp_bAllowControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockAndroidKeysOnControllers_MetaData[];
#endif
		static void NewProp_bBlockAndroidKeysOnControllers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockAndroidKeysOnControllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControllersBlockDeviceFeedback_MetaData[];
#endif
		static void NewProp_bControllersBlockDeviceFeedback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControllersBlockDeviceFeedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidAudio_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AndroidAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCallbackBufferFrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioCallbackBufferFrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioNumBuffersToEnqueue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNumBuffersToEnqueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioMaxChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioMaxChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioNumSourceWorkers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AudioNumSourceWorkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationPlugin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpatializationPlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceDataOverridePlugin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceDataOverridePlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbPlugin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReverbPlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionPlugin_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OcclusionPlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressionOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheSizeKB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CacheSizeKB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChunkSizeOverrideKB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChunkSizeOverrideKB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResampleForDevice_MetaData[];
#endif
		static void NewProp_bResampleForDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResampleForDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueCookQualityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundCueCookQualityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HighSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MedSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MedSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQualityModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompressionQualityModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStreamingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoStreamingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidGraphicsDebugger_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AndroidGraphicsDebugger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaliGraphicsDebuggerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaliGraphicsDebuggerPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaliPerfCounters_MetaData[];
#endif
		static void NewProp_bEnableMaliPerfCounters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaliPerfCounters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ETC2_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ETC2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ETC2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_DXT_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_DXT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_DXT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultiTargetFormat_ASTC_MetaData[];
#endif
		static void NewProp_bMultiTargetFormat_ASTC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiTargetFormat_ASTC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ETC2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ETC2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_DXT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_DXT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureFormatPriority_ASTC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureFormatPriority_ASTC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SDKAPILevelOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SDKAPILevelOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDKAPILevelOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NDKAPILevelOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildToolsOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildToolsOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStreamLandscapeMeshLODs_MetaData[];
#endif
		static void NewProp_bStreamLandscapeMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamLandscapeMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDomStorage_MetaData[];
#endif
		static void NewProp_bEnableDomStorage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDomStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidRuntimeSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Android runtime platform.\n */" },
		{ "IncludePath", "AndroidRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Android runtime platform." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// The official name of the product (same as the name you use on the Play Store web site). Note: Must have at least 2 sections separated by a period and be unique!\n" },
		{ "DisplayName", "Android Package Name ('com.Company.Project', [PROJECT] is replaced with project name)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The official name of the product (same as the name you use on the Play Store web site). Note: Must have at least 2 sections separated by a period and be unique!" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, PackageName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "ClampMax", "2147483647" },
		{ "ClampMin", "1" },
		{ "Comment", "// The version number used to indicate newer versions in the Store\n" },
		{ "DisplayName", "Store Version (1-2147483647)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The version number used to indicate newer versions in the Store" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion = { "StoreVersion", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, StoreVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetArm64_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Offset to add to store version for APKs generated for arm64\n" },
		{ "DisplayName", "Store Version offset (arm64)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Offset to add to store version for APKs generated for arm64" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetArm64 = { "StoreVersionOffsetArm64", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, StoreVersionOffsetArm64), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetArm64_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetArm64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetX8664_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Offset to add to store version for APKs generated for x86_64\n" },
		{ "DisplayName", "Store Version offset (x86_64)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Offset to add to store version for APKs generated for x86_64" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetX8664 = { "StoreVersionOffsetX8664", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, StoreVersionOffsetX8664), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetX8664_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetX8664_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// The visual application name displayed for end users\n" },
		{ "DisplayName", "Application Display Name (app_name), project name if blank" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The visual application name displayed for end users" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName = { "ApplicationDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ApplicationDisplayName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// The visual version displayed for end users\n" },
		{ "DisplayName", "Version Display Name (usually x.y)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The visual version displayed for end users" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName = { "VersionDisplayName", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, VersionDisplayName), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// What OS version the app is allowed to be installed on (do not set this lower than 26)\n" },
		{ "DisplayName", "Minimum SDK Version (26=8.0.0, 27=8.1.0, 28=9, 29=10, 30=11, 31=12)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "What OS version the app is allowed to be installed on (do not set this lower than 26)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion = { "MinSDKVersion", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MinSDKVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// What OS version the app is expected to run on (do not set this lower than 26)\n" },
		{ "DisplayName", "Target SDK Version (26=8.0.0, 27=8.1.0, 28=9, 29=10, 30=11, 31=12)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "What OS version the app is expected to run on (do not set this lower than 26)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion = { "TargetSDKVersion", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TargetSDKVersion), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Preferred install location for the application\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Preferred install location for the application" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation = { "InstallLocation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, InstallLocation), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidInstallLocation, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation_MetaData)) }; // 3912548192
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Enable -Xlint:unchecked and -Xlint:depreciation for Java compiling (Gradle only)\n" },
		{ "DisplayName", "Enable Lint depreciation checks" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable -Xlint:unchecked and -Xlint:depreciation for Java compiling (Gradle only)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableLint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint = { "bEnableLint", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Should the data be placed into the .apk file instead of a separate .obb file. Amazon requires this to be enabled, but Google Play Store will not allow .apk files larger than 100MB, so only small games will work with this enabled.\n" },
		{ "DisplayName", "Package game data inside .apk?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should the data be placed into the .apk file instead of a separate .obb file. Amazon requires this to be enabled, but Google Play Store will not allow .apk files larger than 100MB, so only small games will work with this enabled." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bPackageDataInsideApk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk = { "bPackageDataInsideApk", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, both batch (.bat) files and shell script (.command) files will be generated, otherwise only done for the current system (default)\n" },
		{ "DisplayName", "Generate install files for all platforms" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, both batch (.bat) files and shell script (.command) files will be generated, otherwise only done for the current system (default)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bCreateAllPlatformsInstall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall = { "bCreateAllPlatformsInstall", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Disable the verification of an OBB file when it is downloaded or on first start when in a distribution build. \n" },
		{ "DisplayName", "Disable verify OBB on first start/update." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Disable the verification of an OBB file when it is downloaded or on first start when in a distribution build." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDisableVerifyOBBOnStartUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp = { "bDisableVerifyOBBOnStartUp", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, OBB is limited to 1 GiB.\n" },
		{ "DisplayName", "Force small OBB files." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, OBB is limited to 1 GiB." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bForceSmallOBBFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles = { "bForceSmallOBBFiles", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, OBB is not limited to 2 GiB allowed by Google Play Store (still limited to 4 GiB ZIP limit). \n" },
		{ "DisplayName", "Allow large OBB files." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, OBB is not limited to 2 GiB allowed by Google Play Store (still limited to 4 GiB ZIP limit)." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowLargeOBBFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles = { "bAllowLargeOBBFiles", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, a patch OBB is generated for files not fitting in the main OBB (requires using multiple PAK files so split up content by chunk id).\n" },
		{ "DisplayName", "Allow patch OBB file." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, a patch OBB is generated for files not fitting in the main OBB (requires using multiple PAK files so split up content by chunk id)." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowPatchOBBFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile = { "bAllowPatchOBBFile", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, up to two additional overflow OBB files are generated for files not fitting in the patch OBB (requires using multiple PAK files so split up content by chunk id).\n" },
		{ "DisplayName", "Allow overflow OBB files." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, up to two additional overflow OBB files are generated for files not fitting in the patch OBB (requires using multiple PAK files so split up content by chunk id)." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowOverflowOBBFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles = { "bAllowOverflowOBBFiles", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, UnrealGame files will be placed in ExternalFilesDir which is removed on uninstall.\n// You should also check this if you need to save you game progress without requesting runtime WRITE_EXTERNAL_STORAGE permission in android api 23+\n" },
		{ "DisplayName", "Use ExternalFilesDir for UnrealGame files?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, UnrealGame files will be placed in ExternalFilesDir which is removed on uninstall.\nYou should also check this if you need to save you game progress without requesting runtime WRITE_EXTERNAL_STORAGE permission in android api 23+" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseExternalFilesDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir = { "bUseExternalFilesDir", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// If checked, log files will always be placed in a publicly available directory (either /sdcard/Android or /sdcard/UnrealGame).\n// You may require WRITE_EXTERNAL_STORAGE permission if you do not use ExternalFilesDir checkbox in android api 23+\n" },
		{ "DisplayName", "Make log files always publicly accessible?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, log files will always be placed in a publicly available directory (either /sdcard/Android or /sdcard/UnrealGame).\nYou may require WRITE_EXTERNAL_STORAGE permission if you do not use ExternalFilesDir checkbox in android api 23+" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bPublicLogFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles = { "bPublicLogFiles", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// The permitted orientation of the application on the device\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The permitted orientation of the application on the device" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, Orientation), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidScreenOrientation, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation_MetaData)) }; // 621437099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Maximum supported aspect ratio (width / height). Android will automatically letterbox application on devices with bigger aspect ratio\n" },
		{ "DisplayName", "Maximum supported aspect ratio." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Maximum supported aspect ratio (width / height). Android will automatically letterbox application on devices with bigger aspect ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Enables use of the display cutout area on Android 9+\n" },
		{ "DisplayName", "Use display cutout region?" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enables use of the display cutout area on Android 9+" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseDisplayCutout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout = { "bUseDisplayCutout", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Should we restore scheduled local notifications on reboot? This will add a receiver for boot complete and a permission to the manifest.\n" },
		{ "DisplayName", "Restore scheduled notifications on reboot" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should we restore scheduled local notifications on reboot? This will add a receiver for boot complete and a permission to the manifest." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bRestoreNotificationsOnReboot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot = { "bRestoreNotificationsOnReboot", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Should the software navigation buttons be hidden or not\n" },
		{ "DisplayName", "Enable FullScreen Immersive on KitKat and above devices." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should the software navigation buttons be hidden or not" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bFullScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen = { "bFullScreen", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "DisplayName", "Enable improved virtual keyboard" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableNewKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard = { "bEnableNewKeyboard", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// The preferred depth buffer bitcount for Android\n" },
		{ "DisplayName", "Preferred Depth Buffer format" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The preferred depth buffer bitcount for Android" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference = { "DepthBufferPreference", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, DepthBufferPreference), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidDepthBufferPreference, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference_MetaData)) }; // 376986412
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Verifies the device supports at least one of the cooked texture formats at runtime\n" },
		{ "DisplayName", "Validate texture formats" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Verifies the device supports at least one of the cooked texture formats at runtime" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bValidateTextureFormats = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats = { "bValidateTextureFormats", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// When building for MinSDKVersion >= 23 gradle will leave native libs uncompressed in the apk. This flag might be helpful for builds that are not intended to be distributed via Google Play\n" },
		{ "DisplayName", "Force Gradle to compress native libs irregardless of MinSDKVersion setting" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "When building for MinSDKVersion >= 23 gradle will leave native libs uncompressed in the apk. This flag might be helpful for builds that are not intended to be distributed via Google Play" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bForceCompressNativeLibs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs = { "bForceCompressNativeLibs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression_MetaData[] = {
		{ "Category", "APK Packaging" },
		{ "Comment", "// Generates Android binary with RELR and APS2 relocation tables when building for MinSDKVersion >= 28 or just APS2 when building for MinSDKVersion >= 23\n" },
		{ "DisplayName", "Enable compression of relocation tables (and more). Depends on MinSDKVersion setting" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Generates Android binary with RELR and APS2 relocation tables when building for MinSDKVersion >= 28 or just APS2 when building for MinSDKVersion >= 23" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableAdvancedBinaryCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression = { "bEnableAdvancedBinaryCompression", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle_MetaData[] = {
		{ "Category", "App Bundles" },
		{ "Comment", "// Enables generating AAB bundle\n" },
		{ "DisplayName", "Generate bundle (AAB)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enables generating AAB bundle" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableBundle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle = { "bEnableBundle", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK_MetaData[] = {
		{ "Category", "App Bundles" },
		{ "Comment", "// Enables generating universal APK from bundle\n" },
		{ "DisplayName", "Generate universal APK from bundle" },
		{ "EditCondition", "bEnableBundle" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enables generating universal APK from bundle" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableUniversalAPK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK = { "bEnableUniversalAPK", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit_MetaData[] = {
		{ "Category", "App Bundles" },
		{ "Comment", "// Separate ABIs into their own APK in bundle\n" },
		{ "DisplayName", "Enable ABI split" },
		{ "EditCondition", "bEnableBundle" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Separate ABIs into their own APK in bundle" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBundleABISplit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit = { "bBundleABISplit", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit_MetaData[] = {
		{ "Category", "App Bundles" },
		{ "Comment", "// Separate resources by language into their own APK in bundle\n" },
		{ "DisplayName", "Enable language split" },
		{ "EditCondition", "bEnableBundle" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Separate resources by language into their own APK in bundle" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBundleLanguageSplit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit = { "bBundleLanguageSplit", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit_MetaData[] = {
		{ "Category", "App Bundles" },
		{ "Comment", "// Separate resources by density into their own APK in bundle\n" },
		{ "DisplayName", "Enable density split" },
		{ "EditCondition", "bEnableBundle" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Separate resources by density into their own APK in bundle" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBundleDensitySplit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit = { "bBundleDensitySplit", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_Inner = { "ExtraManifestNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Any extra tags for the <manifest> node\n" },
		{ "DisplayName", "Extra Tags for <manifest> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the <manifest> node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags = { "ExtraManifestNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraManifestNodeTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_Inner = { "ExtraApplicationNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Any extra tags for the <application> node\n" },
		{ "DisplayName", "Extra Tags for <application> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the <application> node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags = { "ExtraApplicationNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraApplicationNodeTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Any extra tags for the com.epicgames.unreal.GameActivity <activity> node\n// Any extra settings for the <application> section (an optional file <Project>/Build/Android/ManifestApplicationAdditions.txt will also be included)\n" },
		{ "DisplayName", "Extra Settings for <application> section (\\n to separate lines)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra tags for the com.epicgames.unreal.GameActivity <activity> node\nAny extra settings for the <application> section (an optional file <Project>/Build/Android/ManifestApplicationAdditions.txt will also be included)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings = { "ExtraApplicationSettings", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraApplicationSettings), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_Inner = { "ExtraActivityNodeTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "DisplayName", "Extra Tags for com.epicgames.unreal.GameActivity <activity> node" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags = { "ExtraActivityNodeTags", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraActivityNodeTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Any extra settings for the main <activity> section (an optional file <Project>/Build/Android/ManifestApplicationActivtyAdditions.txt will also be included)\n" },
		{ "DisplayName", "Extra Settings for <activity> section (\\n to separate lines)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra settings for the main <activity> section (an optional file <Project>/Build/Android/ManifestApplicationActivtyAdditions.txt will also be included)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings = { "ExtraActivitySettings", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraActivitySettings), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_Inner = { "ExtraPermissions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Any extra permissions your app needs (an optional file <Project>/Build/Android/ManifestRequirementsAdditions.txt will also be included,\n// or an optional file <Project>/Build/Android/ManifestRequirementsOverride.txt will replace the entire <!-- Requirements --> section)\n" },
		{ "DisplayName", "Extra Permissions (e.g. 'android.permission.INTERNET')" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Any extra permissions your app needs (an optional file <Project>/Build/Android/ManifestRequirementsAdditions.txt will also be included,\nor an optional file <Project>/Build/Android/ManifestRequirementsOverride.txt will replace the entire <!-- Requirements --> section)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions = { "ExtraPermissions", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ExtraPermissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Add required permission to support Voice chat\n" },
		{ "DisplayName", "Add permissions to support Voice chat (RECORD_AUDIO)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Add required permission to support Voice chat" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAndroidVoiceEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled = { "bAndroidVoiceEnabled", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Add required permission and support to allow multicast/broadcast Wi-Fi traffic through network interface\n" },
		{ "DisplayName", "Add support for multicast Wi-Fi traffic (CHANGE_WIFI_MULTICAST_STATE)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Add required permission and support to allow multicast/broadcast Wi-Fi traffic through network interface" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableMulticastSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport = { "bEnableMulticastSupport", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile_Inner = { "PackageForOculusMobile", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AndroidRuntimeSettings_EOculusMobileDevice, METADATA_PARAMS(nullptr, 0) }; // 2800321324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Package for an Oculus Mobile device\n" },
		{ "DisplayName", "Package for Oculus Mobile devices" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Package for an Oculus Mobile device" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile = { "PackageForOculusMobile", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, PackageForOculusMobile), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile_MetaData)) }; // 2800321324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData[] = {
		{ "Category", "Advanced APK Packaging" },
		{ "Comment", "// Removes Oculus Signature Files (osig) from APK if Quest/Go APK signed for distribution and enables entitlement checker\n" },
		{ "DisplayName", "Remove Oculus Signature Files from Distribution APK" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Removes Oculus Signature Files (osig) from APK if Quest/Go APK signed for distribution and enables entitlement checker" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bRemoveOSIG = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG = { "bRemoveOSIG", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "Comment", "// This is the file that keytool outputs, specified with the -keystore parameter (file should be in <Project>/Build/Android)\n" },
		{ "DisplayName", "Key Store (output of keytool, placed in <Project>/Build/Android)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the file that keytool outputs, specified with the -keystore parameter (file should be in <Project>/Build/Android)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore = { "KeyStore", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyStore), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "Comment", "// This is the name of the key that you specified with the -alias parameter to keytool\n" },
		{ "DisplayName", "Key Alias (-alias parameter to keytool)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the name of the key that you specified with the -alias parameter to keytool" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias = { "KeyAlias", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyAlias), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "Comment", "// This is the password that you specified FOR THE KEYSTORE NOT THE KEY, when running keytool (either with -storepass or by typing it in).\n" },
		{ "DisplayName", "Key Store Password (-storepass parameter to keytool)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the password that you specified FOR THE KEYSTORE NOT THE KEY, when running keytool (either with -storepass or by typing it in)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword = { "KeyStorePassword", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyStorePassword), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData[] = {
		{ "Category", "DistributionSigning" },
		{ "Comment", "// This is the password for the key that you may have specified with keytool, if it's different from the keystore password. Leave blank to use same as Keystore\n" },
		{ "DisplayName", "Key Password (leave blank to use Key Store Password)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This is the password for the key that you may have specified with keytool, if it's different from the keystore password. Leave blank to use same as Keystore" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword = { "KeyPassword", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, KeyPassword), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Enable Arm64 support?\n" },
		{ "DisplayName", "Support arm64 [aka arm64-v8a]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable Arm64 support?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForArm64 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64 = { "bBuildForArm64", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Enable x86-64 support? [CURRENTLY FOR FULL SOURCE GAMES ONLY]\n" },
		{ "DisplayName", "Support x86_64 [aka x64]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable x86-64 support? [CURRENTLY FOR FULL SOURCE GAMES ONLY]" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForX8664 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664 = { "bBuildForX8664", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Include shaders for devices supporting OpenGL ES 3.2 and above (default)\n" },
		{ "DisplayName", "Support OpenGL ES3.2" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include shaders for devices supporting OpenGL ES 3.2 and above (default)" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildForES31 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31 = { "bBuildForES31", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Support the Vulkan RHI and include Vulkan shaders\n" },
		{ "DisplayName", "Support Vulkan" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Support the Vulkan RHI and include Vulkan shaders" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSupportsVulkan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan = { "bSupportsVulkan", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Enable Vulkan SM5 rendering support\n" },
		{ "DisplayName", "Support Vulkan Desktop [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enable Vulkan SM5 rendering support" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSupportsVulkanSM5 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5 = { "bSupportsVulkanSM5", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanLayerDirectory_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "/** Directory for Debug Vulkan Layers to package */" },
		{ "DisplayName", "Debug Vulkan Layer Directory" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Directory for Debug Vulkan Layers to package" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanLayerDirectory = { "DebugVulkanLayerDirectory", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, DebugVulkanLayerDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanLayerDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanLayerDirectory_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers_Inner = { "DebugVulkanDeviceLayers", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "/** Debug Vulkan Device Layers to enable */" },
		{ "DisplayName", "Debug Vulkan Device Layers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Debug Vulkan Device Layers to enable" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers = { "DebugVulkanDeviceLayers", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, DebugVulkanDeviceLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers_Inner = { "DebugVulkanInstanceLayers", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "/** Debug Vulkan Instance Layers to enable */" },
		{ "DisplayName", "Debug Vulkan Instance Layers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Debug Vulkan Instance Layers to enable" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers = { "DebugVulkanInstanceLayers", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, DebugVulkanInstanceLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling_MetaData[] = {
		{ "Category", "Build" },
		{ "DisplayName", "Support Backbuffer Sampling on OpenGL" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Whether to render to an offscreen surface instead of render to backbuffer directly on android opengl platform. Enable it if you'd like to support UMG background blur on android opengl." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAndroidOpenGLSupportsBackbufferSampling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling = { "bAndroidOpenGLSupportsBackbufferSampling", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData[] = {
		{ "Category", "Build" },
		{ "Comment", "// Whether to detect Vulkan device support by default, if the project is packaged with Vulkan support. If unchecked, the -detectvulkan commandline will enable Vulkan detection.\n" },
		{ "DisplayName", "Detect Vulkan device support" },
		{ "EditCondition", "bSupportsVulkan" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Whether to detect Vulkan device support by default, if the project is packaged with Vulkan support. If unchecked, the -detectvulkan commandline will enable Vulkan detection." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDetectVulkanByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault = { "bDetectVulkanByDefault", nullptr, (EPropertyFlags)0x0010040000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "// Build the shipping config with hidden visibility by default. Results in smaller .so file but will also removes symbols used to display callstack dumps.\n" },
		{ "DisplayName", "Build with hidden symbol visibility in shipping config." },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Build the shipping config with hidden visibility by default. Results in smaller .so file but will also removes symbols used to display callstack dumps." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBuildWithHiddenSymbolVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility = { "bBuildWithHiddenSymbolVisibility", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "// Disables extra checks for buffer overflows, comes with perf improvement, but might make tracing stack corruptions in production harder. Note that _FORTIFY_SOURCE=2 is still enabled by the toolchain providing lightweight stack checks\n" },
		{ "DisplayName", "Disable extra checks for buffer overflows" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Disables extra checks for buffer overflows, comes with perf improvement, but might make tracing stack corruptions in production harder. Note that _FORTIFY_SOURCE=2 is still enabled by the toolchain providing lightweight stack checks" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDisableStackProtector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector = { "bDisableStackProtector", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "// Disable libc++_shared dependency validation in all .so files linked with libUnreal.so\n" },
		{ "DisplayName", "Disable libc++_shared dependency validation in all dependencies" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Disable libc++_shared dependency validation in all .so files linked with libUnreal.so" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bDisableLibCppSharedDependencyValidation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation = { "bDisableLibCppSharedDependencyValidation", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "Comment", "// Always save .so file with symbols allowing use of addr2line on raw callstack addresses.\n" },
		{ "DisplayName", "Always save a copy of the libUnreal.so with symbols. [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Always save .so file with symbols allowing use of addr2line on raw callstack addresses." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSaveSymbols = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols = { "bSaveSymbols", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection_MetaData[] = {
		{ "Category", "AdvancedBuild" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Strip shader reflection information" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If true, strip shader reflection information under Android" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bStripShaderReflection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection = { "bStripShaderReflection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Should Google Play support be enabled?\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Should Google Play support be enabled?" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableGooglePlaySupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport = { "bEnableGooglePlaySupport", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Enabling this adds GET_ACCOUNTS to manifest and user must give permission.  Required for reset achievements.\n" },
		{ "DisplayName", "Request Access Token On Connect" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this adds GET_ACCOUNTS to manifest and user must give permission.  Required for reset achievements." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bUseGetAccounts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts = { "bUseGetAccounts", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// The app id obtained from the Google Play Developer Console\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The app id obtained from the Google Play Developer Console" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID = { "GamesAppID", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, GamesAppID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_Inner = { "AchievementMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGooglePlayAchievementMapping, METADATA_PARAMS(nullptr, 0) }; // 4079956269
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Mapping of game achievement names to IDs generated by Google Play.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of game achievement names to IDs generated by Google Play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap = { "AchievementMap", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AchievementMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_MetaData)) }; // 4079956269
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping, METADATA_PARAMS(nullptr, 0) }; // 1916912249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Mapping of game leaderboard names to IDs generated by Google Play.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of game leaderboard names to IDs generated by Google Play." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, LeaderboardMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_MetaData)) }; // 1916912249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Enabling this requests snapshots support for saved games during Google Play login.\n" },
		{ "DisplayName", "Enable Snapshots on Google Play login [Experimental]" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this requests snapshots support for saved games during Google Play login." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableSnapshots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots = { "bEnableSnapshots", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Enabling this includes the AdMob SDK and will be detected by Google Play Console on upload of APK.  Disable if you do not need ads to remove this warning.\n" },
		{ "DisplayName", "Include AdMob support for ads" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enabling this includes the AdMob SDK and will be detected by Google Play Console on upload of APK.  Disable if you do not need ads to remove this warning." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bSupportAdMob = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob = { "bSupportAdMob", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAppID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "AdMob App ID" },
		{ "EditCondition", "bSupportAdMob" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "AdMob Application ID (see https://support.google.com/admob/answer/7356431)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAppID = { "AdMobAppID", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AdMobAppID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAppID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForChildDirectedTreatment_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "AdMob Tag For Child-Directed Treatment" },
		{ "EditCondition", "bSupportAdMob" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Admob TagForChildDirectedTreatment (see https://developers.google.com/admob/android/targeting)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForChildDirectedTreatment = { "TagForChildDirectedTreatment", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TagForChildDirectedTreatment), Z_Construct_UEnum_AndroidRuntimeSettings_ETagForChildDirectedTreatment, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForChildDirectedTreatment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForChildDirectedTreatment_MetaData)) }; // 4199714317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForUnderAgeOfConsent_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "AdMob Tag For Under Age Of Consent" },
		{ "EditCondition", "bSupportAdMob" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Admob TagForUnderAgeOfConsent (see https://developers.google.com/admob/android/targeting)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForUnderAgeOfConsent = { "TagForUnderAgeOfConsent", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TagForUnderAgeOfConsent), Z_Construct_UEnum_AndroidRuntimeSettings_ETagForUnderAgeOfConsent, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForUnderAgeOfConsent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForUnderAgeOfConsent_MetaData)) }; // 1343900864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAdContentRating_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "DisplayName", "AdMob Max ad content rating" },
		{ "EditCondition", "bSupportAdMob" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Admob MaxAdContentRating (see https://developers.google.com/admob/android/targeting)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAdContentRating = { "MaxAdContentRating", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxAdContentRating), Z_Construct_UEnum_AndroidRuntimeSettings_EMaxAdContentRating, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAdContentRating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAdContentRating_MetaData)) }; // 2912396661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// The unique identifier for the ad obtained from AdMob.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The unique identifier for the ad obtained from AdMob." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID = { "AdMobAdUnitID", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AdMobAdUnitID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_Inner = { "AdMobAdUnitIDs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// Identifiers for ads obtained from AdMob\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Identifiers for ads obtained from AdMob" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs = { "AdMobAdUnitIDs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AdMobAdUnitIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// The unique identifier for this application (needed for IAP)\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The unique identifier for this application (needed for IAP)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey = { "GooglePlayLicenseKey", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, GooglePlayLicenseKey), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData[] = {
		{ "Category", "GooglePlayServices" },
		{ "Comment", "// The sender id obtained from Firebase Console, leave blank to disable (associate this with your app in Google Player Developer Console).\n" },
		{ "DisplayName", "Google Cloud Messaging Sender ID" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The sender id obtained from Firebase Console, leave blank to disable (associate this with your app in Google Player Developer Console)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID = { "GCMClientSenderID", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, GCMClientSenderID), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData[] = {
		{ "Category", "LaunchImages" },
		{ "Comment", "/** Show the launch image as a startup slash screen */" },
		{ "DisplayName", "Show launch image" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Show the launch image as a startup slash screen" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bShowLaunchImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage = { "bShowLaunchImage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Allows accelerometer, magnetometer, and gyroscope event handling, disabling may improve performance. */" },
		{ "DisplayName", "Allow IMU Sampling" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Allows accelerometer, magnetometer, and gyroscope event handling, disabling may improve performance." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowIMU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU = { "bAllowIMU", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If checked, Bluetooth connected controllers will send input\n" },
		{ "DisplayName", "Allow Bluetooth controllers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, Bluetooth connected controllers will send input" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bAllowControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers = { "bAllowControllers", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// If checked, controllers will not send Android_Back and Android_Menu events that might cause unnecce\n" },
		{ "DisplayName", "Block Android system keys being sent from controllers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, controllers will not send Android_Back and Android_Menu events that might cause unnecce" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bBlockAndroidKeysOnControllers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers = { "bBlockAndroidKeysOnControllers", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Block force feedback on the device when controllers are attached.\n" },
		{ "DisplayName", "Block force feedback on the device when controllers are attached" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Block force feedback on the device when controllers are attached." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bControllersBlockDeviceFeedback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback = { "bControllersBlockDeviceFeedback", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Android encoding options. */" },
		{ "DisplayName", "Encoding Format" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Android encoding options." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio = { "AndroidAudio", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AndroidAudio), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidAudio, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio_MetaData)) }; // 4135209871
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sample rate to run the audio mixer with. */" },
		{ "DisplayName", "Audio Mixer Sample Rate" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Sample rate to run the audio mixer with." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "512" },
		{ "Comment", "/** The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost. */" },
		{ "DisplayName", "Callback Buffer Size" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize = { "AudioCallbackBufferFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioCallbackBufferFrameSize), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms. */" },
		{ "DisplayName", "Number of Buffers To Enqueue" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms." },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue = { "AudioNumBuffersToEnqueue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioNumBuffersToEnqueue), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max. */" },
		{ "DisplayName", "Max Channels" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels = { "AudioMaxChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioMaxChannels), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker. */" },
		{ "DisplayName", "Number of Source Workers" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers = { "AudioNumSourceWorkers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AudioNumSourceWorkers), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled spatialization plugins to use. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled source data override plugins to use. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled source data override plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SourceDataOverridePlugin = { "SourceDataOverridePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, SourceDataOverridePlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled reverb plugins to use. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled occlusion plugins to use. */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Various overrides for how this platform should handle compression and decompression */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Various overrides for how this platform should handle compression and decompression" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides = { "CompressionOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, CompressionOverrides), Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides_MetaData)) }; // 764648477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook. */" },
		{ "DisplayName", "Max Cache Size (KB)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CacheSizeKB = { "CacheSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, CacheSizeKB), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CacheSizeKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0) */" },
		{ "DisplayName", "Max Chunk Size Override (KB)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB = { "MaxChunkSizeOverrideKB", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxChunkSizeOverrideKB), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bResampleForDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice = { "bResampleForDevice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker). */" },
		{ "DisplayName", "Sound Cue Cook Quality" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex = { "SoundCueCookQualityIndex", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, SoundCueCookQualityIndex), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "Comment", "// Mapping of which sample rates are used for each sample rate quality for a specific platform.\n" },
		{ "DisplayName", "Max" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Mapping of which sample rates are used for each sample rate quality for a specific platform." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate = { "MaxSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MaxSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "High" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate = { "HighSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, HighSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Medium" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate = { "MedSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MedSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Low" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate = { "LowSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, LowSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Min" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate = { "MinSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MinSampleRate), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "// Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier = { "CompressionQualityModifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, CompressionQualityModifier), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData[] = {
		{ "Comment", "// When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold = { "AutoStreamingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AutoStreamingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData[] = {
		{ "Category", "GraphicsDebugger" },
		{ "Comment", "// Several Android graphics debuggers require configuration changes to be made to your application in order to operate. Choosing an option from this menu will configure your project to work with that graphics debugger. \n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Several Android graphics debuggers require configuration changes to be made to your application in order to operate. Choosing an option from this menu will configure your project to work with that graphics debugger." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger = { "AndroidGraphicsDebugger", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, AndroidGraphicsDebugger), Z_Construct_UEnum_AndroidRuntimeSettings_EAndroidGraphicsDebugger, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger_MetaData)) }; // 3621496865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData[] = {
		{ "Category", "GraphicsDebugger" },
		{ "Comment", "/** The path to your Mali Graphics Debugger installation (eg C:/Program Files/ARM/Mali Developer Tools/Mali Graphics Debugger v4.2.0) */" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "The path to your Mali Graphics Debugger installation (eg C:/Program Files/ARM/Mali Developer Tools/Mali Graphics Debugger v4.2.0)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath = { "MaliGraphicsDebuggerPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, MaliGraphicsDebuggerPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters_MetaData[] = {
		{ "Category", "GraphicsDebugger" },
		{ "Comment", "// If checked, this will disable the security.perf_harden flag on the Android device when launching or installing your app via the generated batch file.\n// Disabling security.perf_harden is necessary for HWCPipe to be able to report performance counters on Mali devices.\n" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "If checked, this will disable the security.perf_harden flag on the Android device when launching or installing your app via the generated batch file.\nDisabling security.perf_harden is necessary for HWCPipe to be able to report performance counters on Mali devices." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableMaliPerfCounters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters = { "bEnableMaliPerfCounters", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "Comment", "/** Include ETC2 textures when packaging with the Android (Multi) variant. */" },
		{ "DisplayName", "Include ETC2 textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ETC2 textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ETC2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2 = { "bMultiTargetFormat_ETC2", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "Comment", "/** Include DXT textures when packaging with the Android (Multi) variant. */" },
		{ "DisplayName", "Include DXT textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include DXT textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_DXT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT = { "bMultiTargetFormat_DXT", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData[] = {
		{ "Category", "MultiTextureFormats" },
		{ "Comment", "/** Include ASTC textures when packaging with the Android (Multi) variant. */" },
		{ "DisplayName", "Include ASTC textures" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Include ASTC textures when packaging with the Android (Multi) variant." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bMultiTargetFormat_ASTC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC = { "bMultiTargetFormat_ASTC", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "Comment", "/** Priority for the ETC2 texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.2. */" },
		{ "DisplayName", "ETC2 texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ETC2 texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2 = { "TextureFormatPriority_ETC2", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ETC2), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "Comment", "/** Priority for the DXT texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.6. */" },
		{ "DisplayName", "DXT texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the DXT texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.6." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT = { "TextureFormatPriority_DXT", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_DXT), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData[] = {
		{ "Category", "TextureFormatPriorities" },
		{ "Comment", "/** Priority for the ASTC texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.9. */" },
		{ "DisplayName", "ASTC texture format priority" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Priority for the ASTC texture format when launching on device or packaging using Android_Multi. The highest priority format supported by the device will be used. Default value is 0.9." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC = { "TextureFormatPriority_ASTC", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, TextureFormatPriority_ASTC), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData[] = {
		{ "Category", "Project SDK Override" },
		{ "Comment", "// Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)\n" },
		{ "DisplayName", "SDK API Level (specific version, 'latest', or 'matchndk' - see tooltip)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride = { "SDKAPILevelOverride", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, SDKAPILevelOverride), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData[] = {
		{ "Category", "Project SDK Override" },
		{ "Comment", "// Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices.\n" },
		{ "DisplayName", "NDK API Level (specific version or 'latest' - see tooltip)" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride = { "NDKAPILevelOverride", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, NDKAPILevelOverride), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_BuildToolsOverride_MetaData[] = {
		{ "Category", "Project SDK Override" },
		{ "Comment", "// Which build-tools to package with (a specific version or (without quotes) 'latest' for latest version on disk).\n" },
		{ "DisplayName", "Build-Tools Version (specific version or 'latest')" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Which build-tools to package with (a specific version or (without quotes) 'latest' for latest version on disk)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_BuildToolsOverride = { "BuildToolsOverride", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidRuntimeSettings, BuildToolsOverride), METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_BuildToolsOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_BuildToolsOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Whether to enable LOD streaming for landscape visual meshes. Only supported on feature level ES3.1 or above. */" },
		{ "DisplayName", "Stream landscape visual mesh LODs" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Whether to enable LOD streaming for landscape visual meshes. Only supported on feature level ES3.1 or above." },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bStreamLandscapeMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs = { "bStreamLandscapeMeshLODs", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Enables WebViews to use DOM storage API\n" },
		{ "DisplayName", "Enable DOM storage for WebViews" },
		{ "ModuleRelativePath", "Classes/AndroidRuntimeSettings.h" },
		{ "ToolTip", "Enables WebViews to use DOM storage API" },
	};
#endif
	void Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage_SetBit(void* Obj)
	{
		((UAndroidRuntimeSettings*)Obj)->bEnableDomStorage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage = { "bEnableDomStorage", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAndroidRuntimeSettings), &Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetArm64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_StoreVersionOffsetX8664,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ApplicationDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_VersionDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSDKVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TargetSDKVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_InstallLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableLint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPackageDataInsideApk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bCreateAllPlatformsInstall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableVerifyOBBOnStartUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceSmallOBBFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowLargeOBBFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowPatchOBBFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowOverflowOBBFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseExternalFilesDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bPublicLogFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseDisplayCutout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRestoreNotificationsOnReboot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bFullScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableNewKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DepthBufferPreference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bValidateTextureFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bForceCompressNativeLibs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableAdvancedBinaryCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableUniversalAPK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleABISplit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleLanguageSplit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBundleDensitySplit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraManifestNodeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationNodeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraApplicationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivityNodeTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraActivitySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ExtraPermissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidVoiceEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMulticastSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_PackageForOculusMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bRemoveOSIG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyAlias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyStorePassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_KeyPassword,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForArm64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForX8664,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildForES31,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportsVulkanSM5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanLayerDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanDeviceLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_DebugVulkanInstanceLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAndroidOpenGLSupportsBackbufferSampling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDetectVulkanByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBuildWithHiddenSymbolVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableStackProtector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bDisableLibCppSharedDependencyValidation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSaveSymbols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStripShaderReflection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableGooglePlaySupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bUseGetAccounts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GamesAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AchievementMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LeaderboardMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableSnapshots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bSupportAdMob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAppID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForChildDirectedTreatment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TagForUnderAgeOfConsent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxAdContentRating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AdMobAdUnitIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GooglePlayLicenseKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_GCMClientSenderID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bShowLaunchImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowIMU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bAllowControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bBlockAndroidKeysOnControllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bControllersBlockDeviceFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioCallbackBufferFrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumBuffersToEnqueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioMaxChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AudioNumSourceWorkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SpatializationPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SourceDataOverridePlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_ReverbPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_OcclusionPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CacheSizeKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxChunkSizeOverrideKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bResampleForDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SoundCueCookQualityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaxSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_HighSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MedSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_LowSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MinSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_CompressionQualityModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AutoStreamingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_AndroidGraphicsDebugger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_MaliGraphicsDebuggerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableMaliPerfCounters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ETC2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_DXT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bMultiTargetFormat_ASTC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ETC2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_DXT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_TextureFormatPriority_ASTC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_SDKAPILevelOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_NDKAPILevelOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_BuildToolsOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bStreamLandscapeMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidRuntimeSettings_Statics::NewProp_bEnableDomStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidRuntimeSettings_Statics::ClassParams = {
		&UAndroidRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UAndroidRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidRuntimeSettings.OuterSingleton, Z_Construct_UClass_UAndroidRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidRuntimeSettings.OuterSingleton;
	}
	template<> ANDROIDRUNTIMESETTINGS_API UClass* StaticClass<UAndroidRuntimeSettings>()
	{
		return UAndroidRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidRuntimeSettings);
	UAndroidRuntimeSettings::~UAndroidRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::EnumInfo[] = {
		{ EAndroidScreenOrientation_StaticEnum, TEXT("EAndroidScreenOrientation"), &Z_Registration_Info_UEnum_EAndroidScreenOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 621437099U) },
		{ EAndroidDepthBufferPreference_StaticEnum, TEXT("EAndroidDepthBufferPreference"), &Z_Registration_Info_UEnum_EAndroidDepthBufferPreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 376986412U) },
		{ EAndroidInstallLocation_StaticEnum, TEXT("EAndroidInstallLocation"), &Z_Registration_Info_UEnum_EAndroidInstallLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3912548192U) },
		{ EOculusMobileDevice_StaticEnum, TEXT("EOculusMobileDevice"), &Z_Registration_Info_UEnum_EOculusMobileDevice, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2800321324U) },
		{ ETagForChildDirectedTreatment_StaticEnum, TEXT("ETagForChildDirectedTreatment"), &Z_Registration_Info_UEnum_ETagForChildDirectedTreatment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4199714317U) },
		{ ETagForUnderAgeOfConsent_StaticEnum, TEXT("ETagForUnderAgeOfConsent"), &Z_Registration_Info_UEnum_ETagForUnderAgeOfConsent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1343900864U) },
		{ EMaxAdContentRating_StaticEnum, TEXT("EMaxAdContentRating"), &Z_Registration_Info_UEnum_EMaxAdContentRating, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2912396661U) },
		{ EAndroidAudio_StaticEnum, TEXT("EAndroidAudio"), &Z_Registration_Info_UEnum_EAndroidAudio, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4135209871U) },
		{ EAndroidGraphicsDebugger_StaticEnum, TEXT("EAndroidGraphicsDebugger"), &Z_Registration_Info_UEnum_EAndroidGraphicsDebugger, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3621496865U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ScriptStructInfo[] = {
		{ FGooglePlayAchievementMapping::StaticStruct, Z_Construct_UScriptStruct_FGooglePlayAchievementMapping_Statics::NewStructOps, TEXT("GooglePlayAchievementMapping"), &Z_Registration_Info_UScriptStruct_GooglePlayAchievementMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGooglePlayAchievementMapping), 4079956269U) },
		{ FGooglePlayLeaderboardMapping::StaticStruct, Z_Construct_UScriptStruct_FGooglePlayLeaderboardMapping_Statics::NewStructOps, TEXT("GooglePlayLeaderboardMapping"), &Z_Registration_Info_UScriptStruct_GooglePlayLeaderboardMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGooglePlayLeaderboardMapping), 1916912249U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidRuntimeSettings, UAndroidRuntimeSettings::StaticClass, TEXT("UAndroidRuntimeSettings"), &Z_Registration_Info_UClass_UAndroidRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidRuntimeSettings), 35972136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_2001109940(TEXT("/Script/AndroidRuntimeSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Android_AndroidRuntimeSettings_Classes_AndroidRuntimeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
