// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISequencerSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISequencerSection() {}
// Cross Module References
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequencerSectionResizeMode;
	static UEnum* ESequencerSectionResizeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequencerSectionResizeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequencerSectionResizeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerSectionResizeMode"));
		}
		return Z_Registration_Info_UEnum_ESequencerSectionResizeMode.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSectionResizeMode>()
	{
		return ESequencerSectionResizeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enumerators[] = {
		{ "SSRM_LeadingEdge", (int64)SSRM_LeadingEdge },
		{ "SSRM_TrailingEdge", (int64)SSRM_TrailingEdge },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumerates which edge is being resized */" },
		{ "ModuleRelativePath", "Public/ISequencerSection.h" },
		{ "SSRM_LeadingEdge.Name", "SSRM_LeadingEdge" },
		{ "SSRM_TrailingEdge.Name", "SSRM_TrailingEdge" },
		{ "ToolTip", "Enumerates which edge is being resized" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"ESequencerSectionResizeMode",
		"ESequencerSectionResizeMode",
		Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode()
	{
		if (!Z_Registration_Info_UEnum_ESequencerSectionResizeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequencerSectionResizeMode.InnerSingleton, Z_Construct_UEnum_Sequencer_ESequencerSectionResizeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequencerSectionResizeMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h_Statics::EnumInfo[] = {
		{ ESequencerSectionResizeMode_StaticEnum, TEXT("ESequencerSectionResizeMode"), &Z_Registration_Info_UEnum_ESequencerSectionResizeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2415338727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h_131447(TEXT("/Script/Sequencer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencerSection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
