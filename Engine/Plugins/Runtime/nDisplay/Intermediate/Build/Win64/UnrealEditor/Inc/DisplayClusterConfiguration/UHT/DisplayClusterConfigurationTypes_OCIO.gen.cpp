// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_OCIO.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_OCIO() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration;
class UScriptStruct* FDisplayClusterConfigurationOCIOConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationOCIOConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationOCIOConfiguration>()
{
	return FDisplayClusterConfigurationOCIOConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OCIOConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * OCIO configuration structure.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "* OCIO configuration structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationOCIOConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "OCIO" },
		{ "Comment", "/**  Enable the application of an OpenColorIO configuration to all viewports. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "Enable the application of an OpenColorIO configuration to all viewports." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationOCIOConfiguration*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationOCIOConfiguration), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_OCIOConfiguration_MetaData[] = {
		{ "Comment", "/** \"This property has been deprecated. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the ColorConfiguration property instead" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "\"This property has been deprecated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_OCIOConfiguration = { "OCIOConfiguration", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationOCIOConfiguration, OCIOConfiguration_DEPRECATED), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_OCIOConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_OCIOConfiguration_MetaData)) }; // 2343336179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_ColorConfiguration_MetaData[] = {
		{ "Category", "OCIO" },
		{ "Comment", "/** Conversion to apply when this display is enabled */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "Conversion to apply when this display is enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_ColorConfiguration = { "ColorConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationOCIOConfiguration, ColorConfiguration), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_ColorConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_ColorConfiguration_MetaData)) }; // 349333024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_OCIOConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewProp_ColorConfiguration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationOCIOConfiguration",
		sizeof(FDisplayClusterConfigurationOCIOConfiguration),
		alignof(FDisplayClusterConfigurationOCIOConfiguration),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile;
class UScriptStruct* FDisplayClusterConfigurationOCIOProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationOCIOProfile"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationOCIOProfile>()
{
	return FDisplayClusterConfigurationOCIOProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OCIOConfiguration;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplyOCIOToObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyOCIOToObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ApplyOCIOToObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConfiguration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * OCIO profile structure. Can be configured for viewports or cluster nodes.\n * To enable viewport configuration when using as a UPROPERTY set meta = (ConfigurationMode = \"Viewports\")\n * To enable cluster node configuration when using as a UPROPERTY set meta = (ConfigurationMode = \"ClusterNodes\")\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "* OCIO profile structure. Can be configured for viewports or cluster nodes.\n* To enable viewport configuration when using as a UPROPERTY set meta = (ConfigurationMode = \"Viewports\")\n* To enable cluster node configuration when using as a UPROPERTY set meta = (ConfigurationMode = \"ClusterNodes\")" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationOCIOProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "OCIO" },
		{ "Comment", "/** Enable the application of an OpenColorIO configuration for the viewport(s) specified. */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "Enable the application of an OpenColorIO configuration for the viewport(s) specified." },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationOCIOProfile*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationOCIOProfile), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_OCIOConfiguration_MetaData[] = {
		{ "Comment", "/** \"This property has been deprecated. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the ColorConfiguration property instead" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "\"This property has been deprecated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_OCIOConfiguration = { "OCIOConfiguration", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationOCIOProfile, OCIOConfiguration_DEPRECATED), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_OCIOConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_OCIOConfiguration_MetaData)) }; // 2343336179
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects_Inner = { "ApplyOCIOToObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects_MetaData[] = {
		{ "Category", "OCIO" },
		{ "Comment", "/** Specify the viewports to apply this OpenColorIO configuration. */" },
		{ "EditCondition", "bIsEnabled" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "Specify the viewports to apply this OpenColorIO configuration." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects = { "ApplyOCIOToObjects", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationOCIOProfile, ApplyOCIOToObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ColorConfiguration_MetaData[] = {
		{ "Category", "OCIO" },
		{ "Comment", "/** Conversion to apply when this display is enabled */" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OCIO.h" },
		{ "ToolTip", "Conversion to apply when this display is enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ColorConfiguration = { "ColorConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationOCIOProfile, ColorConfiguration), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ColorConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ColorConfiguration_MetaData)) }; // 349333024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_OCIOConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ApplyOCIOToObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewProp_ColorConfiguration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationOCIOProfile",
		sizeof(FDisplayClusterConfigurationOCIOProfile),
		alignof(FDisplayClusterConfigurationOCIOProfile),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OCIO_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OCIO_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationOCIOConfiguration::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOConfiguration_Statics::NewStructOps, TEXT("DisplayClusterConfigurationOCIOConfiguration"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationOCIOConfiguration), 1454023577U) },
		{ FDisplayClusterConfigurationOCIOProfile::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationOCIOProfile_Statics::NewStructOps, TEXT("DisplayClusterConfigurationOCIOProfile"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationOCIOProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationOCIOProfile), 1440814812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OCIO_h_2906831070(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OCIO_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OCIO_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
