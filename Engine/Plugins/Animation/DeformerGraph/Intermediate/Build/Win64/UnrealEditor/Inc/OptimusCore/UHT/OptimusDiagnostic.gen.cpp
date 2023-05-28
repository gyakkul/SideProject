// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusDiagnostic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDiagnostic() {}
// Cross Module References
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOptimusDiagnosticLevel;
	static UEnum* EOptimusDiagnosticLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("EOptimusDiagnosticLevel"));
		}
		return Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UEnum* StaticEnum<EOptimusDiagnosticLevel>()
	{
		return EOptimusDiagnosticLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enumerators[] = {
		{ "EOptimusDiagnosticLevel::None", (int64)EOptimusDiagnosticLevel::None },
		{ "EOptimusDiagnosticLevel::Info", (int64)EOptimusDiagnosticLevel::Info },
		{ "EOptimusDiagnosticLevel::Warning", (int64)EOptimusDiagnosticLevel::Warning },
		{ "EOptimusDiagnosticLevel::Error", (int64)EOptimusDiagnosticLevel::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enum_MetaDataParams[] = {
		{ "Error.Name", "EOptimusDiagnosticLevel::Error" },
		{ "Info.Name", "EOptimusDiagnosticLevel::Info" },
		{ "ModuleRelativePath", "Public/OptimusDiagnostic.h" },
		{ "None.Name", "EOptimusDiagnosticLevel::None" },
		{ "Warning.Name", "EOptimusDiagnosticLevel::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		"EOptimusDiagnosticLevel",
		"EOptimusDiagnosticLevel",
		Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel()
	{
		if (!Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.InnerSingleton, Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOptimusDiagnosticLevel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h_Statics::EnumInfo[] = {
		{ EOptimusDiagnosticLevel_StaticEnum, TEXT("EOptimusDiagnosticLevel"), &Z_Registration_Info_UEnum_EOptimusDiagnosticLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 205652717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h_1149374832(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDiagnostic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
