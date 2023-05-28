// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/LandscapeConfigHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeConfigHelper() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeResizeMode();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeResizeMode;
	static UEnum* ELandscapeResizeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeResizeMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeResizeMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeResizeMode.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeResizeMode>()
	{
		return ELandscapeResizeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enumerators[] = {
		{ "ELandscapeResizeMode::Resample", (int64)ELandscapeResizeMode::Resample },
		{ "ELandscapeResizeMode::Clip", (int64)ELandscapeResizeMode::Clip },
		{ "ELandscapeResizeMode::Expand", (int64)ELandscapeResizeMode::Expand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enum_MetaDataParams[] = {
		{ "Clip.Name", "ELandscapeResizeMode::Clip" },
		{ "Expand.Name", "ELandscapeResizeMode::Expand" },
		{ "ModuleRelativePath", "Public/LandscapeConfigHelper.h" },
		{ "Resample.Name", "ELandscapeResizeMode::Resample" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeResizeMode",
		"ELandscapeResizeMode",
		Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeResizeMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeResizeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeResizeMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h_Statics::EnumInfo[] = {
		{ ELandscapeResizeMode_StaticEnum, TEXT("ELandscapeResizeMode"), &Z_Registration_Info_UEnum_ELandscapeResizeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4161787253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h_4146636634(TEXT("/Script/Landscape"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeConfigHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
