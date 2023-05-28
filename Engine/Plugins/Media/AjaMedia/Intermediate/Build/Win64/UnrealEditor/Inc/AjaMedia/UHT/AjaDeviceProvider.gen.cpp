// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjaDeviceProvider.h"
#include "MediaIOCoreDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaDeviceProvider() {}
// Cross Module References
	AJAMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration();
	AJAMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIOConfiguration();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaIODevice();
	UPackage* Z_Construct_UPackage__Script_AjaMedia();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration;
class UScriptStruct* FAjaMediaTimecodeConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("AjaMediaTimecodeConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.OuterSingleton;
}
template<> AJAMEDIA_API UScriptStruct* StaticStruct<FAjaMediaTimecodeConfiguration>()
{
	return FAjaMediaTimecodeConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaConfiguration;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimecodeFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimecodeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimecodeFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of an AJA timecode from Video\n */" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "Configuration of an AJA timecode from Video" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAjaMediaTimecodeConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** Read the timecode from a video signal. */" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "Read the timecode from a video signal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_MediaConfiguration = { "MediaConfiguration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAjaMediaTimecodeConfiguration, MediaConfiguration), Z_Construct_UScriptStruct_FMediaIOConfiguration, METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_MediaConfiguration_MetaData)) }; // 4044872615
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** Timecode format to read from a video signal. */" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "Timecode format to read from a video signal." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat = { "TimecodeFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAjaMediaTimecodeConfiguration, TimecodeFormat), Z_Construct_UEnum_MediaIOCore_EMediaIOTimecodeFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat_MetaData)) }; // 1430363538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_MediaConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewProp_TimecodeFormat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		&NewStructOps,
		"AjaMediaTimecodeConfiguration",
		sizeof(FAjaMediaTimecodeConfiguration),
		alignof(FAjaMediaTimecodeConfiguration),
		Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference;
class UScriptStruct* FAjaMediaTimecodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference, (UObject*)Z_Construct_UPackage__Script_AjaMedia(), TEXT("AjaMediaTimecodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.OuterSingleton;
}
template<> AJAMEDIA_API UScriptStruct* StaticStruct<FAjaMediaTimecodeReference>()
{
	return FAjaMediaTimecodeReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Device;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LtcIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LtcIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LtcFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LtcFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration of an AJA timecode.\n */" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "Configuration of an AJA timecode." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAjaMediaTimecodeReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_Device_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** The frame rate of the LTC from the reference pin.*/" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "The frame rate of the LTC from the reference pin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAjaMediaTimecodeReference, Device), Z_Construct_UScriptStruct_FMediaIODevice, METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_Device_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_Device_MetaData)) }; // 2214718791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcIndex_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** The LTC index to read from the reference pin. */" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "The LTC index to read from the reference pin." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcIndex = { "LtcIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAjaMediaTimecodeReference, LtcIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcFrameRate_MetaData[] = {
		{ "Category", "AJA" },
		{ "Comment", "/** The frame rate of the LTC from the reference pin.*/" },
		{ "ModuleRelativePath", "Public/AjaDeviceProvider.h" },
		{ "ToolTip", "The frame rate of the LTC from the reference pin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcFrameRate = { "LtcFrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAjaMediaTimecodeReference, LtcFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcFrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_Device,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewProp_LtcFrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMedia,
		nullptr,
		&NewStructOps,
		"AjaMediaTimecodeReference",
		sizeof(FAjaMediaTimecodeReference),
		alignof(FAjaMediaTimecodeReference),
		Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAjaMediaTimecodeReference()
	{
		if (!Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.InnerSingleton, Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaDeviceProvider_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaDeviceProvider_h_Statics::ScriptStructInfo[] = {
		{ FAjaMediaTimecodeConfiguration::StaticStruct, Z_Construct_UScriptStruct_FAjaMediaTimecodeConfiguration_Statics::NewStructOps, TEXT("AjaMediaTimecodeConfiguration"), &Z_Registration_Info_UScriptStruct_AjaMediaTimecodeConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAjaMediaTimecodeConfiguration), 2981249845U) },
		{ FAjaMediaTimecodeReference::StaticStruct, Z_Construct_UScriptStruct_FAjaMediaTimecodeReference_Statics::NewStructOps, TEXT("AjaMediaTimecodeReference"), &Z_Registration_Info_UScriptStruct_AjaMediaTimecodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAjaMediaTimecodeReference), 2231270216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaDeviceProvider_h_3877974039(TEXT("/Script/AjaMedia"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaDeviceProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMedia_Public_AjaDeviceProvider_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
