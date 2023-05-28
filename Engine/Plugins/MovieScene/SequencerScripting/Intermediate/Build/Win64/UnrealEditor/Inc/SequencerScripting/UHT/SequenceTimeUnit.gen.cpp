// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceTimeUnit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceTimeUnit() {}
// Cross Module References
	SEQUENCERSCRIPTING_API UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequenceTimeUnit;
	static UEnum* ESequenceTimeUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit, (UObject*)Z_Construct_UPackage__Script_SequencerScripting(), TEXT("ESequenceTimeUnit"));
		}
		return Z_Registration_Info_UEnum_ESequenceTimeUnit.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UEnum* StaticEnum<ESequenceTimeUnit>()
	{
		return ESequenceTimeUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enumerators[] = {
		{ "ESequenceTimeUnit::DisplayRate", (int64)ESequenceTimeUnit::DisplayRate },
		{ "ESequenceTimeUnit::TickResolution", (int64)ESequenceTimeUnit::TickResolution },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Specifies which frame of reference you want to set/get time values in. This allows users to work\n* in reference space without having to manually convert back and forth all of the time.\n*/" },
		{ "DisplayRate.Comment", "/** Display Rate matches the values shown in the UI such as 30fps giving you 30 frames per second. Supports sub-frame values (precision limited to Tick Resolution) */" },
		{ "DisplayRate.Name", "ESequenceTimeUnit::DisplayRate" },
		{ "DisplayRate.ToolTip", "Display Rate matches the values shown in the UI such as 30fps giving you 30 frames per second. Supports sub-frame values (precision limited to Tick Resolution)" },
		{ "ModuleRelativePath", "Public/SequenceTimeUnit.h" },
		{ "TickResolution.Comment", "/** Tick Resolution is the internal resolution that data is actually stored in, such as 24000 giving you 24,000 frames per second. This is the smallest interval that data can be stored on. */" },
		{ "TickResolution.Name", "ESequenceTimeUnit::TickResolution" },
		{ "TickResolution.ToolTip", "Tick Resolution is the internal resolution that data is actually stored in, such as 24000 giving you 24,000 frames per second. This is the smallest interval that data can be stored on." },
		{ "ToolTip", "Specifies which frame of reference you want to set/get time values in. This allows users to work\nin reference space without having to manually convert back and forth all of the time." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SequencerScripting,
		nullptr,
		"ESequenceTimeUnit",
		"ESequenceTimeUnit",
		Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit()
	{
		if (!Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton, Z_Construct_UEnum_SequencerScripting_ESequenceTimeUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequenceTimeUnit.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics::EnumInfo[] = {
		{ ESequenceTimeUnit_StaticEnum, TEXT("ESequenceTimeUnit"), &Z_Registration_Info_UEnum_ESequenceTimeUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 430593730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_315982018(TEXT("/Script/SequencerScripting"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Public_SequenceTimeUnit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
