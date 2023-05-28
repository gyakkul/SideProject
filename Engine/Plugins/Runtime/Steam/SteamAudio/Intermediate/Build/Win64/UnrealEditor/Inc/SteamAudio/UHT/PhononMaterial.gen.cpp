// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononMaterial() {}
// Cross Module References
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EPhononMaterial();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhononMaterial;
	static UEnum* EPhononMaterial_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhononMaterial.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhononMaterial.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EPhononMaterial, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EPhononMaterial"));
		}
		return Z_Registration_Info_UEnum_EPhononMaterial.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EPhononMaterial>()
	{
		return EPhononMaterial_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enumerators[] = {
		{ "EPhononMaterial::GENERIC", (int64)EPhononMaterial::GENERIC },
		{ "EPhononMaterial::BRICK", (int64)EPhononMaterial::BRICK },
		{ "EPhononMaterial::CONCRETE", (int64)EPhononMaterial::CONCRETE },
		{ "EPhononMaterial::CERAMIC", (int64)EPhononMaterial::CERAMIC },
		{ "EPhononMaterial::GRAVEL", (int64)EPhononMaterial::GRAVEL },
		{ "EPhononMaterial::CARPET", (int64)EPhononMaterial::CARPET },
		{ "EPhononMaterial::GLASS", (int64)EPhononMaterial::GLASS },
		{ "EPhononMaterial::PLASTER", (int64)EPhononMaterial::PLASTER },
		{ "EPhononMaterial::WOOD", (int64)EPhononMaterial::WOOD },
		{ "EPhononMaterial::METAL", (int64)EPhononMaterial::METAL },
		{ "EPhononMaterial::ROCK", (int64)EPhononMaterial::ROCK },
		{ "EPhononMaterial::CUSTOM", (int64)EPhononMaterial::CUSTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enum_MetaDataParams[] = {
		{ "BRICK.DisplayName", "Brick" },
		{ "BRICK.Name", "EPhononMaterial::BRICK" },
		{ "CARPET.DisplayName", "Carpet" },
		{ "CARPET.Name", "EPhononMaterial::CARPET" },
		{ "CERAMIC.DisplayName", "Ceramic" },
		{ "CERAMIC.Name", "EPhononMaterial::CERAMIC" },
		{ "CONCRETE.DisplayName", "Concrete" },
		{ "CONCRETE.Name", "EPhononMaterial::CONCRETE" },
		{ "CUSTOM.DisplayName", "Custom" },
		{ "CUSTOM.Name", "EPhononMaterial::CUSTOM" },
		{ "GENERIC.DisplayName", "Generic" },
		{ "GENERIC.Name", "EPhononMaterial::GENERIC" },
		{ "GLASS.DisplayName", "Glass" },
		{ "GLASS.Name", "EPhononMaterial::GLASS" },
		{ "GRAVEL.DisplayName", "Gravel" },
		{ "GRAVEL.Name", "EPhononMaterial::GRAVEL" },
		{ "METAL.DisplayName", "Metal" },
		{ "METAL.Name", "EPhononMaterial::METAL" },
		{ "ModuleRelativePath", "Private/PhononMaterial.h" },
		{ "PLASTER.DisplayName", "Plaster" },
		{ "PLASTER.Name", "EPhononMaterial::PLASTER" },
		{ "ROCK.DisplayName", "Rock" },
		{ "ROCK.Name", "EPhononMaterial::ROCK" },
		{ "WOOD.DisplayName", "Wood" },
		{ "WOOD.Name", "EPhononMaterial::WOOD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EPhononMaterial",
		"EPhononMaterial",
		Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EPhononMaterial()
	{
		if (!Z_Registration_Info_UEnum_EPhononMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhononMaterial.InnerSingleton, Z_Construct_UEnum_SteamAudio_EPhononMaterial_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhononMaterial.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h_Statics::EnumInfo[] = {
		{ EPhononMaterial_StaticEnum, TEXT("EPhononMaterial"), &Z_Registration_Info_UEnum_EPhononMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1889328730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h_3866993108(TEXT("/Script/SteamAudio"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononMaterial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
