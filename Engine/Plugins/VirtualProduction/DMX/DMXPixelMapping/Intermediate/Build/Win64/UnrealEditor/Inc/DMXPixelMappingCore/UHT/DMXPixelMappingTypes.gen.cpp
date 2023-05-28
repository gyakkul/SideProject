// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXPixelMappingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingTypes() {}
// Cross Module References
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat();
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode();
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingRendererType;
	static UEnum* EDMXPixelMappingRendererType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingCore(), TEXT("EDMXPixelMappingRendererType"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXPixelMappingRendererType>()
	{
		return EDMXPixelMappingRendererType_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enumerators[] = {
		{ "EDMXPixelMappingRendererType::Texture", (int64)EDMXPixelMappingRendererType::Texture },
		{ "EDMXPixelMappingRendererType::Material", (int64)EDMXPixelMappingRendererType::Material },
		{ "EDMXPixelMappingRendererType::UMG", (int64)EDMXPixelMappingRendererType::UMG },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Material.Name", "EDMXPixelMappingRendererType::Material" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingTypes.h" },
		{ "Texture.Name", "EDMXPixelMappingRendererType::Texture" },
		{ "UMG.Name", "EDMXPixelMappingRendererType::UMG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingCore,
		nullptr,
		"EDMXPixelMappingRendererType",
		"EDMXPixelMappingRendererType",
		Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingCore_EDMXPixelMappingRendererType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingRendererType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXCellFormat;
	static UEnum* EDMXCellFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXCellFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXCellFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingCore(), TEXT("EDMXCellFormat"));
		}
		return Z_Registration_Info_UEnum_EDMXCellFormat.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXCellFormat>()
	{
		return EDMXCellFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enumerators[] = {
		{ "EDMXCellFormat::PF_R", (int64)EDMXCellFormat::PF_R },
		{ "EDMXCellFormat::PF_G", (int64)EDMXCellFormat::PF_G },
		{ "EDMXCellFormat::PF_B", (int64)EDMXCellFormat::PF_B },
		{ "EDMXCellFormat::PF_RG", (int64)EDMXCellFormat::PF_RG },
		{ "EDMXCellFormat::PF_RB", (int64)EDMXCellFormat::PF_RB },
		{ "EDMXCellFormat::PF_GB", (int64)EDMXCellFormat::PF_GB },
		{ "EDMXCellFormat::PF_GR", (int64)EDMXCellFormat::PF_GR },
		{ "EDMXCellFormat::PF_BR", (int64)EDMXCellFormat::PF_BR },
		{ "EDMXCellFormat::PF_BG", (int64)EDMXCellFormat::PF_BG },
		{ "EDMXCellFormat::PF_RGB", (int64)EDMXCellFormat::PF_RGB },
		{ "EDMXCellFormat::PF_BRG", (int64)EDMXCellFormat::PF_BRG },
		{ "EDMXCellFormat::PF_GRB", (int64)EDMXCellFormat::PF_GRB },
		{ "EDMXCellFormat::PF_GBR", (int64)EDMXCellFormat::PF_GBR },
		{ "EDMXCellFormat::PF_RGBA", (int64)EDMXCellFormat::PF_RGBA },
		{ "EDMXCellFormat::PF_GBRA", (int64)EDMXCellFormat::PF_GBRA },
		{ "EDMXCellFormat::PF_BRGA", (int64)EDMXCellFormat::PF_BRGA },
		{ "EDMXCellFormat::PF_GRBA", (int64)EDMXCellFormat::PF_GRBA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingTypes.h" },
		{ "PF_B.DisplayName", "B" },
		{ "PF_B.Name", "EDMXCellFormat::PF_B" },
		{ "PF_BG.DisplayName", "BG" },
		{ "PF_BG.Name", "EDMXCellFormat::PF_BG" },
		{ "PF_BR.DisplayName", "BR" },
		{ "PF_BR.Name", "EDMXCellFormat::PF_BR" },
		{ "PF_BRG.DisplayName", "BRG" },
		{ "PF_BRG.Name", "EDMXCellFormat::PF_BRG" },
		{ "PF_BRGA.DisplayName", "BRGA" },
		{ "PF_BRGA.Name", "EDMXCellFormat::PF_BRGA" },
		{ "PF_G.DisplayName", "G" },
		{ "PF_G.Name", "EDMXCellFormat::PF_G" },
		{ "PF_GB.DisplayName", "GB" },
		{ "PF_GB.Name", "EDMXCellFormat::PF_GB" },
		{ "PF_GBR.DisplayName", "GBR" },
		{ "PF_GBR.Name", "EDMXCellFormat::PF_GBR" },
		{ "PF_GBRA.DisplayName", "GBRA" },
		{ "PF_GBRA.Name", "EDMXCellFormat::PF_GBRA" },
		{ "PF_GR.DisplayName", "GR" },
		{ "PF_GR.Name", "EDMXCellFormat::PF_GR" },
		{ "PF_GRB.DisplayName", "GRB" },
		{ "PF_GRB.Name", "EDMXCellFormat::PF_GRB" },
		{ "PF_GRBA.DisplayName", "GRBA" },
		{ "PF_GRBA.Name", "EDMXCellFormat::PF_GRBA" },
		{ "PF_R.DisplayName", "R" },
		{ "PF_R.Name", "EDMXCellFormat::PF_R" },
		{ "PF_RB.DisplayName", "RB" },
		{ "PF_RB.Name", "EDMXCellFormat::PF_RB" },
		{ "PF_RG.DisplayName", "RG" },
		{ "PF_RG.Name", "EDMXCellFormat::PF_RG" },
		{ "PF_RGB.DisplayName", "RGB" },
		{ "PF_RGB.Name", "EDMXCellFormat::PF_RGB" },
		{ "PF_RGBA.DisplayName", "RGBA" },
		{ "PF_RGBA.Name", "EDMXCellFormat::PF_RGBA" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingCore,
		nullptr,
		"EDMXCellFormat",
		"EDMXCellFormat",
		Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat()
	{
		if (!Z_Registration_Info_UEnum_EDMXCellFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXCellFormat.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingCore_EDMXCellFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXCellFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXColorMode;
	static UEnum* EDMXColorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXColorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXColorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingCore(), TEXT("EDMXColorMode"));
		}
		return Z_Registration_Info_UEnum_EDMXColorMode.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGCORE_API UEnum* StaticEnum<EDMXColorMode>()
	{
		return EDMXColorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enumerators[] = {
		{ "EDMXColorMode::CM_RGB", (int64)EDMXColorMode::CM_RGB },
		{ "EDMXColorMode::CM_Monochrome", (int64)EDMXColorMode::CM_Monochrome },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CM_Monochrome.DisplayName", "Monochrome" },
		{ "CM_Monochrome.Name", "EDMXColorMode::CM_Monochrome" },
		{ "CM_RGB.DisplayName", "RGB" },
		{ "CM_RGB.Name", "EDMXColorMode::CM_RGB" },
		{ "ModuleRelativePath", "Public/DMXPixelMappingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingCore,
		nullptr,
		"EDMXColorMode",
		"EDMXColorMode",
		Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode()
	{
		if (!Z_Registration_Info_UEnum_EDMXColorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXColorMode.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXColorMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h_Statics::EnumInfo[] = {
		{ EDMXPixelMappingRendererType_StaticEnum, TEXT("EDMXPixelMappingRendererType"), &Z_Registration_Info_UEnum_EDMXPixelMappingRendererType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3216515521U) },
		{ EDMXCellFormat_StaticEnum, TEXT("EDMXCellFormat"), &Z_Registration_Info_UEnum_EDMXCellFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2503594190U) },
		{ EDMXColorMode_StaticEnum, TEXT("EDMXColorMode"), &Z_Registration_Info_UEnum_EDMXColorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1955628948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h_1665520690(TEXT("/Script/DMXPixelMappingCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingCore_Public_DMXPixelMappingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
