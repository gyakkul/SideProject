// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Source/Public/OodleNetworkHandlerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOodleNetworkHandlerComponent() {}
// Cross Module References
	OODLENETWORKHANDLERCOMPONENT_API UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode();
	UPackage* Z_Construct_UPackage__Script_OodleNetworkHandlerComponent();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOodleNetworkEnableMode;
	static UEnum* EOodleNetworkEnableMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode, (UObject*)Z_Construct_UPackage__Script_OodleNetworkHandlerComponent(), TEXT("EOodleNetworkEnableMode"));
		}
		return Z_Registration_Info_UEnum_EOodleNetworkEnableMode.OuterSingleton;
	}
	template<> OODLENETWORKHANDLERCOMPONENT_API UEnum* StaticEnum<EOodleNetworkEnableMode>()
	{
		return EOodleNetworkEnableMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enumerators[] = {
		{ "EOodleNetworkEnableMode::AlwaysEnabled", (int64)EOodleNetworkEnableMode::AlwaysEnabled },
		{ "EOodleNetworkEnableMode::WhenCompressedPacketReceived", (int64)EOodleNetworkEnableMode::WhenCompressedPacketReceived },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysEnabled.Name", "EOodleNetworkEnableMode::AlwaysEnabled" },
		{ "Comment", "/**\n * Specifies when compression is enabled. Used to make compression optional, for some platforms/clients\n */" },
		{ "ModuleRelativePath", "Public/OodleNetworkHandlerComponent.h" },
		{ "ToolTip", "Specifies when compression is enabled. Used to make compression optional, for some platforms/clients" },
		{ "WhenCompressedPacketReceived.Comment", "// Oodle compression is always enabled - forces compression to be enabled remotely\n" },
		{ "WhenCompressedPacketReceived.Name", "EOodleNetworkEnableMode::WhenCompressedPacketReceived" },
		{ "WhenCompressedPacketReceived.ToolTip", "Oodle compression is always enabled - forces compression to be enabled remotely" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OodleNetworkHandlerComponent,
		nullptr,
		"EOodleNetworkEnableMode",
		"EOodleNetworkEnableMode",
		Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode()
	{
		if (!Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton, Z_Construct_UEnum_OodleNetworkHandlerComponent_EOodleNetworkEnableMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOodleNetworkEnableMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h_Statics::EnumInfo[] = {
		{ EOodleNetworkEnableMode_StaticEnum, TEXT("EOodleNetworkEnableMode"), &Z_Registration_Info_UEnum_EOodleNetworkEnableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 984501386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h_1109783812(TEXT("/Script/OodleNetworkHandlerComponent"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compression_OodleNetwork_Source_Public_OodleNetworkHandlerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
