// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LegacyScreenPercentageDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyScreenPercentageDriver() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenPercentageMode;
	static UEnum* EScreenPercentageMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EScreenPercentageMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EScreenPercentageMode"));
		}
		return Z_Registration_Info_UEnum_EScreenPercentageMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EScreenPercentageMode>()
	{
		return EScreenPercentageMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enumerators[] = {
		{ "EScreenPercentageMode::Manual", (int64)EScreenPercentageMode::Manual },
		{ "EScreenPercentageMode::BasedOnDisplayResolution", (int64)EScreenPercentageMode::BasedOnDisplayResolution },
		{ "EScreenPercentageMode::BasedOnDPIScale", (int64)EScreenPercentageMode::BasedOnDPIScale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enum_MetaDataParams[] = {
		{ "BasedOnDisplayResolution.Comment", "// Automatic control the screen percentage based on the display resolution, r.ScreenPercentage.Auto.*\n" },
		{ "BasedOnDisplayResolution.DisplayName", "Based on display resolution" },
		{ "BasedOnDisplayResolution.Name", "EScreenPercentageMode::BasedOnDisplayResolution" },
		{ "BasedOnDisplayResolution.ToolTip", "Automatic control the screen percentage based on the display resolution, r.ScreenPercentage.Auto.*" },
		{ "BasedOnDPIScale.Comment", "// Based on DPI scale.\n" },
		{ "BasedOnDPIScale.DisplayName", "Based on operating system's DPI scale" },
		{ "BasedOnDPIScale.Name", "EScreenPercentageMode::BasedOnDPIScale" },
		{ "BasedOnDPIScale.ToolTip", "Based on DPI scale." },
		{ "Comment", "// Mode for the computation of the screen percentage (r.ScreenPercentage.Mode).\n" },
		{ "Manual.Comment", "// Directly controls the screen percentage with the r.ScreenPercentage cvar\n" },
		{ "Manual.DisplayName", "Manual" },
		{ "Manual.Name", "EScreenPercentageMode::Manual" },
		{ "Manual.ToolTip", "Directly controls the screen percentage with the r.ScreenPercentage cvar" },
		{ "ModuleRelativePath", "Public/LegacyScreenPercentageDriver.h" },
		{ "ToolTip", "Mode for the computation of the screen percentage (r.ScreenPercentage.Mode)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EScreenPercentageMode",
		"EScreenPercentageMode",
		Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode()
	{
		if (!Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton, Z_Construct_UEnum_Engine_EScreenPercentageMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScreenPercentageMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics::EnumInfo[] = {
		{ EScreenPercentageMode_StaticEnum, TEXT("EScreenPercentageMode"), &Z_Registration_Info_UEnum_EScreenPercentageMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1588791644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_2984283596(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LegacyScreenPercentageDriver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
