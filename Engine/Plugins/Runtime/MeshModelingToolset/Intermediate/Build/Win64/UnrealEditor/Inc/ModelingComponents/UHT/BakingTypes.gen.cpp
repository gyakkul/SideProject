// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Baking/BakingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakingTypes() {}
// Cross Module References
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeTextureResolution;
	static UEnum* EBakeTextureResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeTextureResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EBakeTextureResolution"));
		}
		return Z_Registration_Info_UEnum_EBakeTextureResolution.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureResolution>()
	{
		return EBakeTextureResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enumerators[] = {
		{ "EBakeTextureResolution::Resolution16", (int64)EBakeTextureResolution::Resolution16 },
		{ "EBakeTextureResolution::Resolution32", (int64)EBakeTextureResolution::Resolution32 },
		{ "EBakeTextureResolution::Resolution64", (int64)EBakeTextureResolution::Resolution64 },
		{ "EBakeTextureResolution::Resolution128", (int64)EBakeTextureResolution::Resolution128 },
		{ "EBakeTextureResolution::Resolution256", (int64)EBakeTextureResolution::Resolution256 },
		{ "EBakeTextureResolution::Resolution512", (int64)EBakeTextureResolution::Resolution512 },
		{ "EBakeTextureResolution::Resolution1024", (int64)EBakeTextureResolution::Resolution1024 },
		{ "EBakeTextureResolution::Resolution2048", (int64)EBakeTextureResolution::Resolution2048 },
		{ "EBakeTextureResolution::Resolution4096", (int64)EBakeTextureResolution::Resolution4096 },
		{ "EBakeTextureResolution::Resolution8192", (int64)EBakeTextureResolution::Resolution8192 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Baking/BakingTypes.h" },
		{ "Resolution1024.DisplayName", "1024 x 1024" },
		{ "Resolution1024.Name", "EBakeTextureResolution::Resolution1024" },
		{ "Resolution128.DisplayName", "128 x 128" },
		{ "Resolution128.Name", "EBakeTextureResolution::Resolution128" },
		{ "Resolution16.DisplayName", "16 x 16" },
		{ "Resolution16.Name", "EBakeTextureResolution::Resolution16" },
		{ "Resolution2048.DisplayName", "2048 x 2048" },
		{ "Resolution2048.Name", "EBakeTextureResolution::Resolution2048" },
		{ "Resolution256.DisplayName", "256 x 256" },
		{ "Resolution256.Name", "EBakeTextureResolution::Resolution256" },
		{ "Resolution32.DisplayName", "32 x 32" },
		{ "Resolution32.Name", "EBakeTextureResolution::Resolution32" },
		{ "Resolution4096.DisplayName", "4096 x 4096" },
		{ "Resolution4096.Name", "EBakeTextureResolution::Resolution4096" },
		{ "Resolution512.DisplayName", "512 x 512" },
		{ "Resolution512.Name", "EBakeTextureResolution::Resolution512" },
		{ "Resolution64.DisplayName", "64 x 64" },
		{ "Resolution64.Name", "EBakeTextureResolution::Resolution64" },
		{ "Resolution8192.DisplayName", "8192 x 8192" },
		{ "Resolution8192.Name", "EBakeTextureResolution::Resolution8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EBakeTextureResolution",
		"EBakeTextureResolution",
		Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeTextureResolution.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeTextureResolution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeTextureBitDepth;
	static UEnum* EBakeTextureBitDepth_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureBitDepth.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeTextureBitDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EBakeTextureBitDepth"));
		}
		return Z_Registration_Info_UEnum_EBakeTextureBitDepth.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureBitDepth>()
	{
		return EBakeTextureBitDepth_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enumerators[] = {
		{ "EBakeTextureBitDepth::ChannelBits8", (int64)EBakeTextureBitDepth::ChannelBits8 },
		{ "EBakeTextureBitDepth::ChannelBits16", (int64)EBakeTextureBitDepth::ChannelBits16 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enum_MetaDataParams[] = {
		{ "ChannelBits16.DisplayName", "16 bits/channel" },
		{ "ChannelBits16.Name", "EBakeTextureBitDepth::ChannelBits16" },
		{ "ChannelBits8.DisplayName", "8 bits/channel" },
		{ "ChannelBits8.Name", "EBakeTextureBitDepth::ChannelBits8" },
		{ "ModuleRelativePath", "Public/Baking/BakingTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EBakeTextureBitDepth",
		"EBakeTextureBitDepth",
		Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureBitDepth.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeTextureBitDepth.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeTextureBitDepth.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel;
	static UEnum* EBakeTextureSamplesPerPixel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EBakeTextureSamplesPerPixel"));
		}
		return Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBakeTextureSamplesPerPixel>()
	{
		return EBakeTextureSamplesPerPixel_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enumerators[] = {
		{ "EBakeTextureSamplesPerPixel::Sample1", (int64)EBakeTextureSamplesPerPixel::Sample1 },
		{ "EBakeTextureSamplesPerPixel::Sample4", (int64)EBakeTextureSamplesPerPixel::Sample4 },
		{ "EBakeTextureSamplesPerPixel::Sample16", (int64)EBakeTextureSamplesPerPixel::Sample16 },
		{ "EBakeTextureSamplesPerPixel::Sample64", (int64)EBakeTextureSamplesPerPixel::Sample64 },
		{ "EBakeTextureSamplesPerPixel::Sample256", (int64)EBakeTextureSamplesPerPixel::Sample256 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Baking/BakingTypes.h" },
		{ "Sample1.DisplayName", "1" },
		{ "Sample1.Name", "EBakeTextureSamplesPerPixel::Sample1" },
		{ "Sample16.DisplayName", "16" },
		{ "Sample16.Name", "EBakeTextureSamplesPerPixel::Sample16" },
		{ "Sample256.DisplayName", "256" },
		{ "Sample256.Name", "EBakeTextureSamplesPerPixel::Sample256" },
		{ "Sample4.DisplayName", "4" },
		{ "Sample4.Name", "EBakeTextureSamplesPerPixel::Sample4" },
		{ "Sample64.DisplayName", "64" },
		{ "Sample64.Name", "EBakeTextureSamplesPerPixel::Sample64" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EBakeTextureSamplesPerPixel",
		"EBakeTextureSamplesPerPixel",
		Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel()
	{
		if (!Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h_Statics::EnumInfo[] = {
		{ EBakeTextureResolution_StaticEnum, TEXT("EBakeTextureResolution"), &Z_Registration_Info_UEnum_EBakeTextureResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2876122585U) },
		{ EBakeTextureBitDepth_StaticEnum, TEXT("EBakeTextureBitDepth"), &Z_Registration_Info_UEnum_EBakeTextureBitDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3847632462U) },
		{ EBakeTextureSamplesPerPixel_StaticEnum, TEXT("EBakeTextureSamplesPerPixel"), &Z_Registration_Info_UEnum_EBakeTextureSamplesPerPixel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 631028059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h_3401436952(TEXT("/Script/ModelingComponents"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Baking_BakingTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
