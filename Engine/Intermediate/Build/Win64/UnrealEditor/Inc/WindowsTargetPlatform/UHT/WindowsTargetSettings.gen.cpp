// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsTargetSettings.h"
#include "AudioCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsTargetSettings() {}
// Cross Module References
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WindowsTargetPlatform();
	WINDOWSTARGETPLATFORM_API UClass* Z_Construct_UClass_UWindowsTargetSettings();
	WINDOWSTARGETPLATFORM_API UClass* Z_Construct_UClass_UWindowsTargetSettings_NoRegister();
	WINDOWSTARGETPLATFORM_API UEnum* Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion();
	WINDOWSTARGETPLATFORM_API UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompilerVersion;
	static UEnum* ECompilerVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompilerVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompilerVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion, (UObject*)Z_Construct_UPackage__Script_WindowsTargetPlatform(), TEXT("ECompilerVersion"));
		}
		return Z_Registration_Info_UEnum_ECompilerVersion.OuterSingleton;
	}
	template<> WINDOWSTARGETPLATFORM_API UEnum* StaticEnum<ECompilerVersion>()
	{
		return ECompilerVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enumerators[] = {
		{ "ECompilerVersion::Default", (int64)ECompilerVersion::Default },
		{ "ECompilerVersion::VisualStudio2015", (int64)ECompilerVersion::VisualStudio2015 },
		{ "ECompilerVersion::VisualStudio2017", (int64)ECompilerVersion::VisualStudio2017 },
		{ "ECompilerVersion::VisualStudio2019", (int64)ECompilerVersion::VisualStudio2019 },
		{ "ECompilerVersion::VisualStudio2022", (int64)ECompilerVersion::VisualStudio2022 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "ECompilerVersion::Default" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "VisualStudio2015.DisplayName", "Visual Studio 2015 (deprecated)" },
		{ "VisualStudio2015.Name", "ECompilerVersion::VisualStudio2015" },
		{ "VisualStudio2017.DisplayName", "Visual Studio 2017 (deprecated)" },
		{ "VisualStudio2017.Name", "ECompilerVersion::VisualStudio2017" },
		{ "VisualStudio2019.DisplayName", "Visual Studio 2019" },
		{ "VisualStudio2019.Name", "ECompilerVersion::VisualStudio2019" },
		{ "VisualStudio2022.DisplayName", "Visual Studio 2022" },
		{ "VisualStudio2022.Name", "ECompilerVersion::VisualStudio2022" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WindowsTargetPlatform,
		nullptr,
		"ECompilerVersion",
		"ECompilerVersion",
		Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion()
	{
		if (!Z_Registration_Info_UEnum_ECompilerVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompilerVersion.InnerSingleton, Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompilerVersion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultGraphicsRHI;
	static UEnum* EDefaultGraphicsRHI_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefaultGraphicsRHI.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefaultGraphicsRHI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI, (UObject*)Z_Construct_UPackage__Script_WindowsTargetPlatform(), TEXT("EDefaultGraphicsRHI"));
		}
		return Z_Registration_Info_UEnum_EDefaultGraphicsRHI.OuterSingleton;
	}
	template<> WINDOWSTARGETPLATFORM_API UEnum* StaticEnum<EDefaultGraphicsRHI>()
	{
		return EDefaultGraphicsRHI_StaticEnum();
	}
	struct Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enumerators[] = {
		{ "EDefaultGraphicsRHI::DefaultGraphicsRHI_Default", (int64)EDefaultGraphicsRHI::DefaultGraphicsRHI_Default },
		{ "EDefaultGraphicsRHI::DefaultGraphicsRHI_DX11", (int64)EDefaultGraphicsRHI::DefaultGraphicsRHI_DX11 },
		{ "EDefaultGraphicsRHI::DefaultGraphicsRHI_DX12", (int64)EDefaultGraphicsRHI::DefaultGraphicsRHI_DX12 },
		{ "EDefaultGraphicsRHI::DefaultGraphicsRHI_Vulkan", (int64)EDefaultGraphicsRHI::DefaultGraphicsRHI_Vulkan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enum_MetaDataParams[] = {
		{ "DefaultGraphicsRHI_Default.DisplayName", "Default" },
		{ "DefaultGraphicsRHI_Default.Name", "EDefaultGraphicsRHI::DefaultGraphicsRHI_Default" },
		{ "DefaultGraphicsRHI_DX11.DisplayName", "DirectX 11" },
		{ "DefaultGraphicsRHI_DX11.Name", "EDefaultGraphicsRHI::DefaultGraphicsRHI_DX11" },
		{ "DefaultGraphicsRHI_DX12.DisplayName", "DirectX 12" },
		{ "DefaultGraphicsRHI_DX12.Name", "EDefaultGraphicsRHI::DefaultGraphicsRHI_DX12" },
		{ "DefaultGraphicsRHI_Vulkan.DisplayName", "Vulkan" },
		{ "DefaultGraphicsRHI_Vulkan.Name", "EDefaultGraphicsRHI::DefaultGraphicsRHI_Vulkan" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WindowsTargetPlatform,
		nullptr,
		"EDefaultGraphicsRHI",
		"EDefaultGraphicsRHI",
		Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI()
	{
		if (!Z_Registration_Info_UEnum_EDefaultGraphicsRHI.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultGraphicsRHI.InnerSingleton, Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefaultGraphicsRHI.InnerSingleton;
	}
	void UWindowsTargetSettings::StaticRegisterNativesUWindowsTargetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsTargetSettings);
	UClass* Z_Construct_UClass_UWindowsTargetSettings_NoRegister()
	{
		return UWindowsTargetSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWindowsTargetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGraphicsRHI_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGraphicsRHI_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGraphicsRHI;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetedRHIs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetedRHIs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetedRHIs;
		static const UECodeGen_Private::FStrPropertyParams NewProp_D3D12TargetedShaderFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D3D12TargetedShaderFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_D3D12TargetedShaderFormats;
		static const UECodeGen_Private::FStrPropertyParams NewProp_D3D11TargetedShaderFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D3D11TargetedShaderFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_D3D11TargetedShaderFormats;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VulkanTargetedShaderFormats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulkanTargetedShaderFormats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VulkanTargetedShaderFormats;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Compiler_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compiler_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Compiler;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueCookQualityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundCueCookQualityIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowsTargetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WindowsTargetPlatform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Windows target platform. The first instance of this class is initialized in\n * WindowsTargetPlatform, really early during the startup sequence before the CDO has been constructed, so its config \n * settings are read manually from there.\n */" },
		{ "IncludePath", "WindowsTargetSettings.h" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Implements the settings for the Windows target platform. The first instance of this class is initialized in\nWindowsTargetPlatform, really early during the startup sequence before the CDO has been constructed, so its config\nsettings are read manually from there." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI_MetaData[] = {
		{ "Category", "Targeted RHIs" },
		{ "Comment", "/** Select which RHI to use. Make sure its also selected as a Targeted RHI. Requires Editor restart. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Default RHI" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Select which RHI to use. Make sure its also selected as a Targeted RHI. Requires Editor restart." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI = { "DefaultGraphicsRHI", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, DefaultGraphicsRHI), Z_Construct_UEnum_WindowsTargetPlatform_EDefaultGraphicsRHI, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI_MetaData)) }; // 3307538115
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs_Inner = { "TargetedRHIs", nullptr, (EPropertyFlags)0x0000000020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use one of the RHI specific lists." },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs = { "TargetedRHIs", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, TargetedRHIs_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats_Inner = { "D3D12TargetedShaderFormats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats = { "D3D12TargetedShaderFormats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, D3D12TargetedShaderFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats_Inner = { "D3D11TargetedShaderFormats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats = { "D3D11TargetedShaderFormats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, D3D11TargetedShaderFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats_Inner = { "VulkanTargetedShaderFormats", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats = { "VulkanTargetedShaderFormats", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, VulkanTargetedShaderFormats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler_MetaData[] = {
		{ "Category", "Toolchain" },
		{ "Comment", "/** The compiler version to use for this project. May be different to the chosen IDE. */" },
		{ "DisplayName", "Compiler Version" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "The compiler version to use for this project. May be different to the chosen IDE." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler = { "Compiler", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, Compiler), Z_Construct_UEnum_WindowsTargetPlatform_ECompilerVersion, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler_MetaData)) }; // 904414759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sample rate to run the audio mixer with. */" },
		{ "DisplayName", "Audio Mixer Sample Rate" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Sample rate to run the audio mixer with." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AudioSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "64" },
		{ "Comment", "/** The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost. */" },
		{ "DisplayName", "Callback Buffer Size" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "The amount of audio to compute each callback block. Lower values decrease latency but may increase CPU cost." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioCallbackBufferFrameSize = { "AudioCallbackBufferFrameSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AudioCallbackBufferFrameSize), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioCallbackBufferFrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms. */" },
		{ "DisplayName", "Number of Buffers To Enqueue" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "The number of buffers to keep enqueued. More buffers increases latency, but can compensate for variable compute availability in audio callbacks on some platforms." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumBuffersToEnqueue = { "AudioNumBuffersToEnqueue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AudioNumBuffersToEnqueue), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumBuffersToEnqueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioMaxChannels_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max. */" },
		{ "DisplayName", "Max Channels" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "The max number of channels (voices) to limit for this platform. The max channels used will be the minimum of this value and the global audio quality settings. A value of 0 will not apply a platform channel count max." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioMaxChannels = { "AudioMaxChannels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AudioMaxChannels), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioMaxChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioMaxChannels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker. */" },
		{ "DisplayName", "Number of Source Workers" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "The number of workers to use to compute source audio. Will only use up to the max number of sources. Will evenly divide sources to each source worker." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumSourceWorkers = { "AudioNumSourceWorkers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AudioNumSourceWorkers), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumSourceWorkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SpatializationPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled spatialization plugins to use. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled spatialization plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SpatializationPlugin = { "SpatializationPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, SpatializationPlugin), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SpatializationPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SpatializationPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled source data override plugins to use. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled source data override plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SourceDataOverridePlugin = { "SourceDataOverridePlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, SourceDataOverridePlugin), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SourceDataOverridePlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_ReverbPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled reverb plugins to use. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled reverb plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_ReverbPlugin = { "ReverbPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, ReverbPlugin), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_ReverbPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_ReverbPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_OcclusionPlugin_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Which of the currently enabled occlusion plugins to use. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Which of the currently enabled occlusion plugins to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_OcclusionPlugin = { "OcclusionPlugin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, OcclusionPlugin), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_OcclusionPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_OcclusionPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionOverrides_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Various overrides for how this platform should handle compression and decompression */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Various overrides for how this platform should handle compression and decompression" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionOverrides = { "CompressionOverrides", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, CompressionOverrides), Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionOverrides_MetaData)) }; // 764648477
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CacheSizeKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook. */" },
		{ "DisplayName", "Max Cache Size (KB)" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "This determines the max amount of memory that should be used for the cache at any given time. If set low (<= 8 MB), it lowers the size of individual chunks of audio during cook." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CacheSizeKB = { "CacheSizeKB", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, CacheSizeKB), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CacheSizeKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CacheSizeKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData[] = {
		{ "Category", "Audio|CookOverrides|Stream Caching" },
		{ "Comment", "/** This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0) */" },
		{ "DisplayName", "Max Chunk Size Override (KB)" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "This overrides the default max chunk size used when chunking audio for stream caching (ignored if < 0)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxChunkSizeOverrideKB = { "MaxChunkSizeOverrideKB", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, MaxChunkSizeOverrideKB), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxChunkSizeOverrideKB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	void Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice_SetBit(void* Obj)
	{
		((UWindowsTargetSettings*)Obj)->bResampleForDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice = { "bResampleForDevice", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWindowsTargetSettings), &Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "Comment", "/** Mapping of which sample rates are used for each sample rate quality for a specific platform. */" },
		{ "DisplayName", "Max" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Mapping of which sample rates are used for each sample rate quality for a specific platform." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxSampleRate = { "MaxSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, MaxSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_HighSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "High" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_HighSampleRate = { "HighSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, HighSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_HighSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_HighSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MedSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Medium" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MedSampleRate = { "MedSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, MedSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MedSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MedSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_LowSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Low" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_LowSampleRate = { "LowSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, LowSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_LowSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_LowSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MinSampleRate_MetaData[] = {
		{ "Category", "Audio|CookOverrides|ResamplingQuality" },
		{ "DisplayName", "Min" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MinSampleRate = { "MinSampleRate", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, MinSampleRate), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MinSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MinSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionQualityModifier_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Scales all compression qualities when cooking to this platform. For example, 0.5 will halve all compression qualities, and 1.0 will leave them unchanged." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionQualityModifier = { "CompressionQualityModifier", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, CompressionQualityModifier), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionQualityModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionQualityModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AutoStreamingThreshold_MetaData[] = {
		{ "Comment", "/** When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk. */" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "When set to anything beyond 0, this will ensure any SoundWaves longer than this value, in seconds, to stream directly off of the disk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AutoStreamingThreshold = { "AutoStreamingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, AutoStreamingThreshold), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AutoStreamingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AutoStreamingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData[] = {
		{ "Category", "Audio|CookOverrides" },
		{ "Comment", "/** Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker). */" },
		{ "DisplayName", "Sound Cue Cook Quality" },
		{ "ModuleRelativePath", "Classes/WindowsTargetSettings.h" },
		{ "ToolTip", "Quality Level to COOK SoundCues at (if set, all other levels will be stripped by the cooker)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SoundCueCookQualityIndex = { "SoundCueCookQualityIndex", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWindowsTargetSettings, SoundCueCookQualityIndex), METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SoundCueCookQualityIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWindowsTargetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_DefaultGraphicsRHI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_TargetedRHIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D12TargetedShaderFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_D3D11TargetedShaderFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_VulkanTargetedShaderFormats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_Compiler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioCallbackBufferFrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumBuffersToEnqueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioMaxChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AudioNumSourceWorkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SpatializationPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SourceDataOverridePlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_ReverbPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_OcclusionPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CacheSizeKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxChunkSizeOverrideKB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_bResampleForDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MaxSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_HighSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MedSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_LowSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_MinSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_CompressionQualityModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_AutoStreamingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWindowsTargetSettings_Statics::NewProp_SoundCueCookQualityIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowsTargetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsTargetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsTargetSettings_Statics::ClassParams = {
		&UWindowsTargetSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWindowsTargetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowsTargetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsTargetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowsTargetSettings()
	{
		if (!Z_Registration_Info_UClass_UWindowsTargetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsTargetSettings.OuterSingleton, Z_Construct_UClass_UWindowsTargetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWindowsTargetSettings.OuterSingleton;
	}
	template<> WINDOWSTARGETPLATFORM_API UClass* StaticClass<UWindowsTargetSettings>()
	{
		return UWindowsTargetSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsTargetSettings);
	UWindowsTargetSettings::~UWindowsTargetSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::EnumInfo[] = {
		{ ECompilerVersion_StaticEnum, TEXT("ECompilerVersion"), &Z_Registration_Info_UEnum_ECompilerVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 904414759U) },
		{ EDefaultGraphicsRHI_StaticEnum, TEXT("EDefaultGraphicsRHI"), &Z_Registration_Info_UEnum_EDefaultGraphicsRHI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3307538115U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsTargetSettings, UWindowsTargetSettings::StaticClass, TEXT("UWindowsTargetSettings"), &Z_Registration_Info_UClass_UWindowsTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsTargetSettings), 3965795754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_1254218725(TEXT("/Script/WindowsTargetPlatform"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Windows_WindowsTargetPlatform_Classes_WindowsTargetSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
