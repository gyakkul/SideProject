// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISequencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISequencer() {}
// Cross Module References
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoChangeMode;
	static UEnum* EAutoChangeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoChangeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoChangeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EAutoChangeMode, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("EAutoChangeMode"));
		}
		return Z_Registration_Info_UEnum_EAutoChangeMode.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EAutoChangeMode>()
	{
		return EAutoChangeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enumerators[] = {
		{ "EAutoChangeMode::AutoKey", (int64)EAutoChangeMode::AutoKey },
		{ "EAutoChangeMode::AutoTrack", (int64)EAutoChangeMode::AutoTrack },
		{ "EAutoChangeMode::All", (int64)EAutoChangeMode::All },
		{ "EAutoChangeMode::None", (int64)EAutoChangeMode::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Create a key and a track when a property changes. */" },
		{ "All.Name", "EAutoChangeMode::All" },
		{ "All.ToolTip", "Create a key and a track when a property changes." },
		{ "AutoKey.Comment", "/** Create a key when a property changes. */" },
		{ "AutoKey.Name", "EAutoChangeMode::AutoKey" },
		{ "AutoKey.ToolTip", "Create a key when a property changes." },
		{ "AutoTrack.Comment", "/** Create a track when a property changes. */" },
		{ "AutoTrack.Name", "EAutoChangeMode::AutoTrack" },
		{ "AutoTrack.ToolTip", "Create a track when a property changes." },
		{ "Comment", "/**\n * Defines auto change modes.\n */" },
		{ "ModuleRelativePath", "Public/ISequencer.h" },
		{ "None.Comment", "/** Do nothing */" },
		{ "None.Name", "EAutoChangeMode::None" },
		{ "None.ToolTip", "Do nothing" },
		{ "ToolTip", "Defines auto change modes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"EAutoChangeMode",
		"EAutoChangeMode",
		Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode()
	{
		if (!Z_Registration_Info_UEnum_EAutoChangeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoChangeMode.InnerSingleton, Z_Construct_UEnum_Sequencer_EAutoChangeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoChangeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllowEditsMode;
	static UEnum* EAllowEditsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAllowEditsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAllowEditsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EAllowEditsMode, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("EAllowEditsMode"));
		}
		return Z_Registration_Info_UEnum_EAllowEditsMode.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EAllowEditsMode>()
	{
		return EAllowEditsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enumerators[] = {
		{ "EAllowEditsMode::AllEdits", (int64)EAllowEditsMode::AllEdits },
		{ "EAllowEditsMode::AllowSequencerEditsOnly", (int64)EAllowEditsMode::AllowSequencerEditsOnly },
		{ "EAllowEditsMode::AllowLevelEditsOnly", (int64)EAllowEditsMode::AllowLevelEditsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enum_MetaDataParams[] = {
		{ "AllEdits.Comment", "/** Allow all edits. */" },
		{ "AllEdits.Name", "EAllowEditsMode::AllEdits" },
		{ "AllEdits.ToolTip", "Allow all edits." },
		{ "AllowLevelEditsOnly.Comment", "/** Allow edits to go to level only */" },
		{ "AllowLevelEditsOnly.Name", "EAllowEditsMode::AllowLevelEditsOnly" },
		{ "AllowLevelEditsOnly.ToolTip", "Allow edits to go to level only" },
		{ "AllowSequencerEditsOnly.Comment", "/** Allow edits to go to sequencer only. */" },
		{ "AllowSequencerEditsOnly.Name", "EAllowEditsMode::AllowSequencerEditsOnly" },
		{ "AllowSequencerEditsOnly.ToolTip", "Allow edits to go to sequencer only." },
		{ "Comment", "/**\n * Defines allow edits mode.\n */" },
		{ "ModuleRelativePath", "Public/ISequencer.h" },
		{ "ToolTip", "Defines allow edits mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"EAllowEditsMode",
		"EAllowEditsMode",
		Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode()
	{
		if (!Z_Registration_Info_UEnum_EAllowEditsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllowEditsMode.InnerSingleton, Z_Construct_UEnum_Sequencer_EAllowEditsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAllowEditsMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKeyGroupMode;
	static UEnum* EKeyGroupMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKeyGroupMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKeyGroupMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_EKeyGroupMode, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("EKeyGroupMode"));
		}
		return Z_Registration_Info_UEnum_EKeyGroupMode.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<EKeyGroupMode>()
	{
		return EKeyGroupMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enumerators[] = {
		{ "EKeyGroupMode::KeyChanged", (int64)EKeyGroupMode::KeyChanged },
		{ "EKeyGroupMode::KeyGroup", (int64)EKeyGroupMode::KeyGroup },
		{ "EKeyGroupMode::KeyAll", (int64)EKeyGroupMode::KeyAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Defines set key gruops mode.\n*/" },
		{ "KeyAll.Comment", "/** Key All (translation, rotation, scale) when one changes */" },
		{ "KeyAll.Name", "EKeyGroupMode::KeyAll" },
		{ "KeyAll.ToolTip", "Key All (translation, rotation, scale) when one changes" },
		{ "KeyChanged.Comment", "/** Key just changed channel */" },
		{ "KeyChanged.Name", "EKeyGroupMode::KeyChanged" },
		{ "KeyChanged.ToolTip", "Key just changed channel" },
		{ "KeyGroup.Comment", "/** Key just one, the parent translation, rotation or scale, when one changes */" },
		{ "KeyGroup.Name", "EKeyGroupMode::KeyGroup" },
		{ "KeyGroup.ToolTip", "Key just one, the parent translation, rotation or scale, when one changes" },
		{ "ModuleRelativePath", "Public/ISequencer.h" },
		{ "ToolTip", "Defines set key gruops mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"EKeyGroupMode",
		"EKeyGroupMode",
		Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode()
	{
		if (!Z_Registration_Info_UEnum_EKeyGroupMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKeyGroupMode.InnerSingleton, Z_Construct_UEnum_Sequencer_EKeyGroupMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKeyGroupMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h_Statics::EnumInfo[] = {
		{ EAutoChangeMode_StaticEnum, TEXT("EAutoChangeMode"), &Z_Registration_Info_UEnum_EAutoChangeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3299965310U) },
		{ EAllowEditsMode_StaticEnum, TEXT("EAllowEditsMode"), &Z_Registration_Info_UEnum_EAllowEditsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4036249572U) },
		{ EKeyGroupMode_StaticEnum, TEXT("EKeyGroupMode"), &Z_Registration_Info_UEnum_EKeyGroupMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 524750773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h_2686410403(TEXT("/Script/Sequencer"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_ISequencer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
