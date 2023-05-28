// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_Enums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_Enums() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode();
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource;
	static UEnum* EDisplayClusterConfigurationDataSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationDataSource"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationDataSource>()
	{
		return EDisplayClusterConfigurationDataSource_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationDataSource::Text", (int64)EDisplayClusterConfigurationDataSource::Text },
		{ "EDisplayClusterConfigurationDataSource::Json", (int64)EDisplayClusterConfigurationDataSource::Json },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enum_MetaDataParams[] = {
		{ "Json.DisplayName", "JSON file" },
		{ "Json.Name", "EDisplayClusterConfigurationDataSource::Json" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Text.DisplayName", "Text file" },
		{ "Text.Name", "EDisplayClusterConfigurationDataSource::Text" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationDataSource",
		"EDisplayClusterConfigurationDataSource",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationDataSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy;
	static UEnum* EDisplayClusterConfigurationFailoverPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationFailoverPolicy"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationFailoverPolicy>()
	{
		return EDisplayClusterConfigurationFailoverPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationFailoverPolicy::Disabled", (int64)EDisplayClusterConfigurationFailoverPolicy::Disabled },
		{ "EDisplayClusterConfigurationFailoverPolicy::DropSecondaryNodesOnly", (int64)EDisplayClusterConfigurationFailoverPolicy::DropSecondaryNodesOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "// No failover operations performed. The whole cluster gets terminated in case of any error\n" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EDisplayClusterConfigurationFailoverPolicy::Disabled" },
		{ "Disabled.ToolTip", "No failover operations performed. The whole cluster gets terminated in case of any error" },
		{ "DropSecondaryNodesOnly.Comment", "// This policy allows to drop any secondary node out of cluster in case it's failed,\n// and let the others continue working. However, the whole cluster will be terminated if primary node fails.\n" },
		{ "DropSecondaryNodesOnly.DisplayName", "Drop S-node on fail" },
		{ "DropSecondaryNodesOnly.Name", "EDisplayClusterConfigurationFailoverPolicy::DropSecondaryNodesOnly" },
		{ "DropSecondaryNodesOnly.ToolTip", "This policy allows to drop any secondary node out of cluster in case it's failed,\nand let the others continue working. However, the whole cluster will be terminated if primary node fails." },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationFailoverPolicy",
		"EDisplayClusterConfigurationFailoverPolicy",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset;
	static UEnum* EDisplayClusterConfigurationEyeStereoOffset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationEyeStereoOffset"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationEyeStereoOffset>()
	{
		return EDisplayClusterConfigurationEyeStereoOffset_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationEyeStereoOffset::None", (int64)EDisplayClusterConfigurationEyeStereoOffset::None },
		{ "EDisplayClusterConfigurationEyeStereoOffset::Left", (int64)EDisplayClusterConfigurationEyeStereoOffset::Left },
		{ "EDisplayClusterConfigurationEyeStereoOffset::Right", (int64)EDisplayClusterConfigurationEyeStereoOffset::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enum_MetaDataParams[] = {
		{ "Left.DisplayName", "Left eye of a stereo pair" },
		{ "Left.Name", "EDisplayClusterConfigurationEyeStereoOffset::Left" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "None.DisplayName", "No offset" },
		{ "None.Name", "EDisplayClusterConfigurationEyeStereoOffset::None" },
		{ "Right.DisplayName", "Right eye of a stereo pair" },
		{ "Right.Name", "EDisplayClusterConfigurationEyeStereoOffset::Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationEyeStereoOffset",
		"EDisplayClusterConfigurationEyeStereoOffset",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationEyeStereoOffset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur;
	static UEnum* EDisplayClusterConfiguration_PostRenderBlur_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfiguration_PostRenderBlur"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfiguration_PostRenderBlur>()
	{
		return EDisplayClusterConfiguration_PostRenderBlur_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enumerators[] = {
		{ "EDisplayClusterConfiguration_PostRenderBlur::None", (int64)EDisplayClusterConfiguration_PostRenderBlur::None },
		{ "EDisplayClusterConfiguration_PostRenderBlur::Gaussian", (int64)EDisplayClusterConfiguration_PostRenderBlur::Gaussian },
		{ "EDisplayClusterConfiguration_PostRenderBlur::Dilate", (int64)EDisplayClusterConfiguration_PostRenderBlur::Dilate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enum_MetaDataParams[] = {
		{ "Dilate.Comment", "// Blur viewport using Dilate method\n" },
		{ "Dilate.DisplayName", "Dilate" },
		{ "Dilate.Name", "EDisplayClusterConfiguration_PostRenderBlur::Dilate" },
		{ "Dilate.ToolTip", "Blur viewport using Dilate method" },
		{ "Gaussian.Comment", "// Blur viewport using Gaussian method\n" },
		{ "Gaussian.DisplayName", "Gaussian" },
		{ "Gaussian.Name", "EDisplayClusterConfiguration_PostRenderBlur::Gaussian" },
		{ "Gaussian.ToolTip", "Blur viewport using Gaussian method" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "None.Comment", "// Not use blur postprocess\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDisplayClusterConfiguration_PostRenderBlur::None" },
		{ "None.ToolTip", "Not use blur postprocess" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfiguration_PostRenderBlur",
		"EDisplayClusterConfiguration_PostRenderBlur",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfiguration_PostRenderBlur_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource;
	static UEnum* EDisplayClusterConfigurationICVFX_ChromakeySource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationICVFX_ChromakeySource"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_ChromakeySource>()
	{
		return EDisplayClusterConfigurationICVFX_ChromakeySource_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationICVFX_ChromakeySource::None", (int64)EDisplayClusterConfigurationICVFX_ChromakeySource::None },
		{ "EDisplayClusterConfigurationICVFX_ChromakeySource::FrameColor", (int64)EDisplayClusterConfigurationICVFX_ChromakeySource::FrameColor },
		{ "EDisplayClusterConfigurationICVFX_ChromakeySource::ChromakeyRenderTexture", (int64)EDisplayClusterConfigurationICVFX_ChromakeySource::ChromakeyRenderTexture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enum_MetaDataParams[] = {
		{ "ChromakeyRenderTexture.Comment", "// Capture to texture RTT from scene layers\n" },
		{ "ChromakeyRenderTexture.DisplayName", "Chromakey Render Texture" },
		{ "ChromakeyRenderTexture.Name", "EDisplayClusterConfigurationICVFX_ChromakeySource::ChromakeyRenderTexture" },
		{ "ChromakeyRenderTexture.ToolTip", "Capture to texture RTT from scene layers" },
		{ "FrameColor.Comment", "// Fill whole camera frame with chromakey color\n" },
		{ "FrameColor.DisplayName", "Chromakey Color" },
		{ "FrameColor.Name", "EDisplayClusterConfigurationICVFX_ChromakeySource::FrameColor" },
		{ "FrameColor.ToolTip", "Fill whole camera frame with chromakey color" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "None.Comment", "// Disable chromakey rendering\n" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDisplayClusterConfigurationICVFX_ChromakeySource::None" },
		{ "None.ToolTip", "Disable chromakey rendering" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationICVFX_ChromakeySource",
		"EDisplayClusterConfigurationICVFX_ChromakeySource",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_ChromakeySource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode;
	static UEnum* EDisplayClusterConfigurationICVFX_LightcardRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationICVFX_LightcardRenderMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_LightcardRenderMode>()
	{
		return EDisplayClusterConfigurationICVFX_LightcardRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationICVFX_LightcardRenderMode::Over", (int64)EDisplayClusterConfigurationICVFX_LightcardRenderMode::Over },
		{ "EDisplayClusterConfigurationICVFX_LightcardRenderMode::Under", (int64)EDisplayClusterConfigurationICVFX_LightcardRenderMode::Under },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Over.Comment", "/** Render Light Cards over the inner frustum.  Light Cards can be directly visible in camera. */" },
		{ "Over.DisplayName", "Lightcard Over Frustum" },
		{ "Over.Name", "EDisplayClusterConfigurationICVFX_LightcardRenderMode::Over" },
		{ "Over.ToolTip", "Render Light Cards over the inner frustum.  Light Cards can be directly visible in camera." },
		{ "Under.Comment", "/** Render Light Cards under the inner frustum. Light Cards will not be directly visible in camera. */" },
		{ "Under.DisplayName", "Lightcard Under Frustum" },
		{ "Under.Name", "EDisplayClusterConfigurationICVFX_LightcardRenderMode::Under" },
		{ "Under.ToolTip", "Render Light Cards under the inner frustum. Light Cards will not be directly visible in camera." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationICVFX_LightcardRenderMode",
		"EDisplayClusterConfigurationICVFX_LightcardRenderMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_LightcardRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode;
	static UEnum* EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode>()
	{
		return EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Default", (int64)EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Default },
		{ "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Disabled", (int64)EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Disabled },
		{ "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Over", (int64)EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Over },
		{ "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Under", (int64)EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Under },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "// Use global lightcard mode from StageSettings for this viewport\n" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Default" },
		{ "Default.ToolTip", "Use global lightcard mode from StageSettings for this viewport" },
		{ "Disabled.Comment", "// Disable lightcard rendering for this viewport\n" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Disabled" },
		{ "Disabled.ToolTip", "Disable lightcard rendering for this viewport" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Over.Comment", "// Render incamera frame over lightcard for this viewport\n" },
		{ "Over.DisplayName", "Lightcard Over Frustum" },
		{ "Over.Name", "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Over" },
		{ "Over.ToolTip", "Render incamera frame over lightcard for this viewport" },
		{ "Under.Comment", "// Over lightcard over incamera frame  for this viewport\n" },
		{ "Under.DisplayName", "Lightcard Under Frustum" },
		{ "Under.Name", "EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode::Under" },
		{ "Under.ToolTip", "Over lightcard over incamera frame  for this viewport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode",
		"EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode;
	static UEnum* EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode>()
	{
		return EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Default", (int64)EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Default },
		{ "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Disabled", (int64)EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Disabled },
		{ "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakey", (int64)EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakey },
		{ "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakeyMarkers", (int64)EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakeyMarkers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "// Use default rendering rules\n" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Default" },
		{ "Default.ToolTip", "Use default rendering rules" },
		{ "DisableChromakey.Comment", "// Disable chromakey render for this viewport\n" },
		{ "DisableChromakey.DisplayName", "Disabled Chromakey" },
		{ "DisableChromakey.Name", "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakey" },
		{ "DisableChromakey.ToolTip", "Disable chromakey render for this viewport" },
		{ "DisableChromakeyMarkers.Comment", "// Disable chromakey markers render for this viewport\n" },
		{ "DisableChromakeyMarkers.DisplayName", "Disabled Markers" },
		{ "DisableChromakeyMarkers.Name", "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::DisableChromakeyMarkers" },
		{ "DisableChromakeyMarkers.ToolTip", "Disable chromakey markers render for this viewport" },
		{ "Disabled.Comment", "// Disable camera frame render for this viewport\n" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode::Disabled" },
		{ "Disabled.ToolTip", "Disable camera frame render for this viewport" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode",
		"EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode;
	static UEnum* EDisplayClusterConfigurationViewport_StereoMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationViewport_StereoMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewport_StereoMode>()
	{
		return EDisplayClusterConfigurationViewport_StereoMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationViewport_StereoMode::Default", (int64)EDisplayClusterConfigurationViewport_StereoMode::Default },
		{ "EDisplayClusterConfigurationViewport_StereoMode::ForceMono", (int64)EDisplayClusterConfigurationViewport_StereoMode::ForceMono },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "// Render incamera frame over lightcard\n" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EDisplayClusterConfigurationViewport_StereoMode::Default" },
		{ "Default.ToolTip", "Render incamera frame over lightcard" },
		{ "ForceMono.Comment", "// Force monoscopic render mode for this viewport (performance)\n" },
		{ "ForceMono.DisplayName", "Force Mono" },
		{ "ForceMono.Name", "EDisplayClusterConfigurationViewport_StereoMode::ForceMono" },
		{ "ForceMono.ToolTip", "Force monoscopic render mode for this viewport (performance)" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationViewport_StereoMode",
		"EDisplayClusterConfigurationViewport_StereoMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewport_StereoMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode;
	static UEnum* EDisplayClusterConfigurationRenderFamilyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationRenderFamilyMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderFamilyMode>()
	{
		return EDisplayClusterConfigurationRenderFamilyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationRenderFamilyMode::None", (int64)EDisplayClusterConfigurationRenderFamilyMode::None },
		{ "EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroups", (int64)EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroups },
		{ "EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroupsAndStereo", (int64)EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroupsAndStereo },
		{ "EDisplayClusterConfigurationRenderFamilyMode::MergeAnyPossible", (int64)EDisplayClusterConfigurationRenderFamilyMode::MergeAnyPossible },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enum_MetaDataParams[] = {
		{ "AllowMergeForGroups.Comment", "// Merge views by ViewFamilyGroupNum\n" },
		{ "AllowMergeForGroups.DisplayName", "Groups" },
		{ "AllowMergeForGroups.Name", "EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroups" },
		{ "AllowMergeForGroups.ToolTip", "Merge views by ViewFamilyGroupNum" },
		{ "AllowMergeForGroupsAndStereo.Comment", "// Merge views by ViewFamilyGroupNum and stereo\n" },
		{ "AllowMergeForGroupsAndStereo.DisplayName", "GroupsAndStereo" },
		{ "AllowMergeForGroupsAndStereo.Name", "EDisplayClusterConfigurationRenderFamilyMode::AllowMergeForGroupsAndStereo" },
		{ "AllowMergeForGroupsAndStereo.ToolTip", "Merge views by ViewFamilyGroupNum and stereo" },
		{ "MergeAnyPossible.Comment", "// Use rules to merge views to minimal num of families (separate by: buffer_ratio, viewExtension, max RTT size)\n" },
		{ "MergeAnyPossible.DisplayName", "AnyPossible" },
		{ "MergeAnyPossible.Name", "EDisplayClusterConfigurationRenderFamilyMode::MergeAnyPossible" },
		{ "MergeAnyPossible.ToolTip", "Use rules to merge views to minimal num of families (separate by: buffer_ratio, viewExtension, max RTT size)" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "None.Comment", "// Render all viewports to unique RenderTargets\n" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "EDisplayClusterConfigurationRenderFamilyMode::None" },
		{ "None.ToolTip", "Render all viewports to unique RenderTargets" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationRenderFamilyMode",
		"EDisplayClusterConfigurationRenderFamilyMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderFamilyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode;
	static UEnum* EDisplayClusterConfigurationCameraMotionBlurMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationCameraMotionBlurMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationCameraMotionBlurMode>()
	{
		return EDisplayClusterConfigurationCameraMotionBlurMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationCameraMotionBlurMode::Off", (int64)EDisplayClusterConfigurationCameraMotionBlurMode::Off },
		{ "EDisplayClusterConfigurationCameraMotionBlurMode::On", (int64)EDisplayClusterConfigurationCameraMotionBlurMode::On },
		{ "EDisplayClusterConfigurationCameraMotionBlurMode::Override", (int64)EDisplayClusterConfigurationCameraMotionBlurMode::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Off.Comment", "/** Subtract blur due to all global motion of the ICVFX camera, but preserve blur from object motion. */" },
		{ "Off.DisplayName", "All Camera Blur Off" },
		{ "Off.Name", "EDisplayClusterConfigurationCameraMotionBlurMode::Off" },
		{ "Off.ToolTip", "Subtract blur due to all global motion of the ICVFX camera, but preserve blur from object motion." },
		{ "On.Comment", "/** Allow blur from camera motion. This option should not normally be used for shooting, but may be useful for diagnostic purposes. */" },
		{ "On.DisplayName", "ICVFX Camera Blur On" },
		{ "On.Name", "EDisplayClusterConfigurationCameraMotionBlurMode::On" },
		{ "On.ToolTip", "Allow blur from camera motion. This option should not normally be used for shooting, but may be useful for diagnostic purposes." },
		{ "Override.Comment", "/** Subtract blur due to motion of the ICVFX camera relative to the nDisplay root, but preserve blur from both object motion and movement of the nDisplay root, which can be animated to represent vehicular motion through an environment. */" },
		{ "Override.DisplayName", "ICVFX Camera Blur Off" },
		{ "Override.Name", "EDisplayClusterConfigurationCameraMotionBlurMode::Override" },
		{ "Override.ToolTip", "Subtract blur due to motion of the ICVFX camera relative to the nDisplay root, but preserve blur from both object motion and movement of the nDisplay root, which can be animated to represent vehicular motion through an environment." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationCameraMotionBlurMode",
		"EDisplayClusterConfigurationCameraMotionBlurMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationCameraMotionBlurMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode;
	static UEnum* EDisplayClusterConfigurationViewportOverscanMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationViewportOverscanMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportOverscanMode>()
	{
		return EDisplayClusterConfigurationViewportOverscanMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationViewportOverscanMode::Pixels", (int64)EDisplayClusterConfigurationViewportOverscanMode::Pixels },
		{ "EDisplayClusterConfigurationViewportOverscanMode::Percent", (int64)EDisplayClusterConfigurationViewportOverscanMode::Percent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Percent.DisplayName", "Percent" },
		{ "Percent.Name", "EDisplayClusterConfigurationViewportOverscanMode::Percent" },
		{ "Pixels.DisplayName", "Pixels" },
		{ "Pixels.Name", "EDisplayClusterConfigurationViewportOverscanMode::Pixels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationViewportOverscanMode",
		"EDisplayClusterConfigurationViewportOverscanMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportOverscanMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode;
	static UEnum* EDisplayClusterConfigurationRenderMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationRenderMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationRenderMode>()
	{
		return EDisplayClusterConfigurationRenderMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationRenderMode::Mono", (int64)EDisplayClusterConfigurationRenderMode::Mono },
		{ "EDisplayClusterConfigurationRenderMode::SideBySide", (int64)EDisplayClusterConfigurationRenderMode::SideBySide },
		{ "EDisplayClusterConfigurationRenderMode::TopBottom", (int64)EDisplayClusterConfigurationRenderMode::TopBottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Mono.DisplayName", "Mono" },
		{ "Mono.Name", "EDisplayClusterConfigurationRenderMode::Mono" },
		{ "SideBySide.DisplayName", "Stereo: Side By Side" },
		{ "SideBySide.Name", "EDisplayClusterConfigurationRenderMode::SideBySide" },
		{ "TopBottom.DisplayName", "Stereo: Top Bottom" },
		{ "TopBottom.Name", "EDisplayClusterConfigurationRenderMode::TopBottom" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationRenderMode",
		"EDisplayClusterConfigurationRenderMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationRenderMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode;
	static UEnum* EDisplayClusterConfigurationViewportCustomFrustumMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationViewportCustomFrustumMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportCustomFrustumMode>()
	{
		return EDisplayClusterConfigurationViewportCustomFrustumMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationViewportCustomFrustumMode::Percent", (int64)EDisplayClusterConfigurationViewportCustomFrustumMode::Percent },
		{ "EDisplayClusterConfigurationViewportCustomFrustumMode::Pixels", (int64)EDisplayClusterConfigurationViewportCustomFrustumMode::Pixels },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "Percent.DisplayName", "Percentage" },
		{ "Percent.Name", "EDisplayClusterConfigurationViewportCustomFrustumMode::Percent" },
		{ "Pixels.DisplayName", "Pixels" },
		{ "Pixels.Name", "EDisplayClusterConfigurationViewportCustomFrustumMode::Pixels" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationViewportCustomFrustumMode",
		"EDisplayClusterConfigurationViewportCustomFrustumMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportCustomFrustumMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode;
	static UEnum* EDisplayClusterConfigurationViewportLightcardOCIOMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationViewportLightcardOCIOMode"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationViewportLightcardOCIOMode>()
	{
		return EDisplayClusterConfigurationViewportLightcardOCIOMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationViewportLightcardOCIOMode::nDisplay", (int64)EDisplayClusterConfigurationViewportLightcardOCIOMode::nDisplay },
		{ "EDisplayClusterConfigurationViewportLightcardOCIOMode::Custom", (int64)EDisplayClusterConfigurationViewportLightcardOCIOMode::Custom },
		{ "EDisplayClusterConfigurationViewportLightcardOCIOMode::None", (int64)EDisplayClusterConfigurationViewportLightcardOCIOMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Comment", "/** Use Custom Light Cards OCIO. */" },
		{ "Custom.DisplayName", "Use Custom Light Cards OCIO" },
		{ "Custom.Name", "EDisplayClusterConfigurationViewportLightcardOCIOMode::Custom" },
		{ "Custom.ToolTip", "Use Custom Light Cards OCIO." },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_Enums.h" },
		{ "nDisplay.Comment", "/** Use nDisplay Viewport OCIO. */" },
		{ "nDisplay.DisplayName", "Use nDisplay Viewport OCIO" },
		{ "nDisplay.Name", "EDisplayClusterConfigurationViewportLightcardOCIOMode::nDisplay" },
		{ "nDisplay.ToolTip", "Use nDisplay Viewport OCIO." },
		{ "None.Comment", "/** None. */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDisplayClusterConfigurationViewportLightcardOCIOMode::None" },
		{ "None.ToolTip", "None." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationViewportLightcardOCIOMode",
		"EDisplayClusterConfigurationViewportLightcardOCIOMode",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationViewportLightcardOCIOMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h_Statics::EnumInfo[] = {
		{ EDisplayClusterConfigurationDataSource_StaticEnum, TEXT("EDisplayClusterConfigurationDataSource"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1247219292U) },
		{ EDisplayClusterConfigurationFailoverPolicy_StaticEnum, TEXT("EDisplayClusterConfigurationFailoverPolicy"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationFailoverPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 698447889U) },
		{ EDisplayClusterConfigurationEyeStereoOffset_StaticEnum, TEXT("EDisplayClusterConfigurationEyeStereoOffset"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationEyeStereoOffset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 559579016U) },
		{ EDisplayClusterConfiguration_PostRenderBlur_StaticEnum, TEXT("EDisplayClusterConfiguration_PostRenderBlur"), &Z_Registration_Info_UEnum_EDisplayClusterConfiguration_PostRenderBlur, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2427162365U) },
		{ EDisplayClusterConfigurationICVFX_ChromakeySource_StaticEnum, TEXT("EDisplayClusterConfigurationICVFX_ChromakeySource"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_ChromakeySource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 863546255U) },
		{ EDisplayClusterConfigurationICVFX_LightcardRenderMode_StaticEnum, TEXT("EDisplayClusterConfigurationICVFX_LightcardRenderMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_LightcardRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3633096039U) },
		{ EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode_StaticEnum, TEXT("EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideLightcardRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3924757711U) },
		{ EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode_StaticEnum, TEXT("EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationICVFX_OverrideCameraRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3491160545U) },
		{ EDisplayClusterConfigurationViewport_StereoMode_StaticEnum, TEXT("EDisplayClusterConfigurationViewport_StereoMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewport_StereoMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2328558816U) },
		{ EDisplayClusterConfigurationRenderFamilyMode_StaticEnum, TEXT("EDisplayClusterConfigurationRenderFamilyMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderFamilyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1432233356U) },
		{ EDisplayClusterConfigurationCameraMotionBlurMode_StaticEnum, TEXT("EDisplayClusterConfigurationCameraMotionBlurMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationCameraMotionBlurMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3611008657U) },
		{ EDisplayClusterConfigurationViewportOverscanMode_StaticEnum, TEXT("EDisplayClusterConfigurationViewportOverscanMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportOverscanMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2734492961U) },
		{ EDisplayClusterConfigurationRenderMode_StaticEnum, TEXT("EDisplayClusterConfigurationRenderMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationRenderMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3950211998U) },
		{ EDisplayClusterConfigurationViewportCustomFrustumMode_StaticEnum, TEXT("EDisplayClusterConfigurationViewportCustomFrustumMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportCustomFrustumMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2110741017U) },
		{ EDisplayClusterConfigurationViewportLightcardOCIOMode_StaticEnum, TEXT("EDisplayClusterConfigurationViewportLightcardOCIOMode"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationViewportLightcardOCIOMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2059384197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h_1800245220(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_Enums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
