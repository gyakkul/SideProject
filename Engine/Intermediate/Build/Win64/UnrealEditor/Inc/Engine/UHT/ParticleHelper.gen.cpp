// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ParticleHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleHelper() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleDetailMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleDetailMode;
	static UEnum* EParticleDetailMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleDetailMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleDetailMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleDetailMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleDetailMode"));
		}
		return Z_Registration_Info_UEnum_EParticleDetailMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleDetailMode>()
	{
		return EParticleDetailMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleDetailMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enumerators[] = {
		{ "PDM_Low", (int64)PDM_Low },
		{ "PDM_Medium", (int64)PDM_Medium },
		{ "PDM_High", (int64)PDM_High },
		{ "PDM_MAX", (int64)PDM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Detail mode for scene component rendering. */" },
		{ "ModuleRelativePath", "Public/ParticleHelper.h" },
		{ "PDM_High.DisplayName", "High" },
		{ "PDM_High.Name", "PDM_High" },
		{ "PDM_Low.DisplayName", "Low" },
		{ "PDM_Low.Name", "PDM_Low" },
		{ "PDM_MAX.Hidden", "" },
		{ "PDM_MAX.Name", "PDM_MAX" },
		{ "PDM_Medium.DisplayName", "Medium" },
		{ "PDM_Medium.Name", "PDM_Medium" },
		{ "ToolTip", "Detail mode for scene component rendering." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleDetailMode",
		"EParticleDetailMode",
		Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleDetailMode()
	{
		if (!Z_Registration_Info_UEnum_EParticleDetailMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleDetailMode.InnerSingleton, Z_Construct_UEnum_Engine_EParticleDetailMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleDetailMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSignificanceLevel;
	static UEnum* EParticleSignificanceLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSignificanceLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSignificanceLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSignificanceLevel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSignificanceLevel"));
		}
		return Z_Registration_Info_UEnum_EParticleSignificanceLevel.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSignificanceLevel>()
	{
		return EParticleSignificanceLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enumerators[] = {
		{ "EParticleSignificanceLevel::Low", (int64)EParticleSignificanceLevel::Low },
		{ "EParticleSignificanceLevel::Medium", (int64)EParticleSignificanceLevel::Medium },
		{ "EParticleSignificanceLevel::High", (int64)EParticleSignificanceLevel::High },
		{ "EParticleSignificanceLevel::Critical", (int64)EParticleSignificanceLevel::Critical },
		{ "EParticleSignificanceLevel::Num", (int64)EParticleSignificanceLevel::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** A level of significance for a particle system. Used by game code to enable/disable emitters progressively as they move away from the camera or are occluded/off screen. */" },
		{ "Critical.Comment", "/** Critical emitter. Never culled. */" },
		{ "Critical.Name", "EParticleSignificanceLevel::Critical" },
		{ "Critical.ToolTip", "Critical emitter. Never culled." },
		{ "High.Comment", "/** High significance emitter. Culled last. */" },
		{ "High.Name", "EParticleSignificanceLevel::High" },
		{ "High.ToolTip", "High significance emitter. Culled last." },
		{ "Low.Comment", "/** Low significance emitter. Culled first. */" },
		{ "Low.Name", "EParticleSignificanceLevel::Low" },
		{ "Low.ToolTip", "Low significance emitter. Culled first." },
		{ "Medium.Comment", "/** Medium significance emitter. */" },
		{ "Medium.Name", "EParticleSignificanceLevel::Medium" },
		{ "Medium.ToolTip", "Medium significance emitter." },
		{ "ModuleRelativePath", "Public/ParticleHelper.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EParticleSignificanceLevel::Num" },
		{ "ToolTip", "A level of significance for a particle system. Used by game code to enable/disable emitters progressively as they move away from the camera or are occluded/off screen." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSignificanceLevel",
		"EParticleSignificanceLevel",
		Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSignificanceLevel()
	{
		if (!Z_Registration_Info_UEnum_EParticleSignificanceLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSignificanceLevel.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSignificanceLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSignificanceLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction;
	static UEnum* EParticleSystemInsignificanceReaction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSystemInsignificanceReaction"));
		}
		return Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleSystemInsignificanceReaction>()
	{
		return EParticleSystemInsignificanceReaction_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enumerators[] = {
		{ "EParticleSystemInsignificanceReaction::Auto", (int64)EParticleSystemInsignificanceReaction::Auto },
		{ "EParticleSystemInsignificanceReaction::Complete", (int64)EParticleSystemInsignificanceReaction::Complete },
		{ "EParticleSystemInsignificanceReaction::DisableTick", (int64)EParticleSystemInsignificanceReaction::DisableTick },
		{ "EParticleSystemInsignificanceReaction::DisableTickAndKill", (int64)EParticleSystemInsignificanceReaction::DisableTickAndKill },
		{ "EParticleSystemInsignificanceReaction::Num", (int64)EParticleSystemInsignificanceReaction::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Looping systems will DisableTick. Non-looping systems will Complete.*/" },
		{ "Auto.Name", "EParticleSystemInsignificanceReaction::Auto" },
		{ "Auto.ToolTip", "Looping systems will DisableTick. Non-looping systems will Complete." },
		{ "Comment", "/** Determines what a particle system will do when all of it's emitters become insignificant. */" },
		{ "Complete.Comment", "/** The system will be considered complete and will auto destroy if desired etc.*/" },
		{ "Complete.Name", "EParticleSystemInsignificanceReaction::Complete" },
		{ "Complete.ToolTip", "The system will be considered complete and will auto destroy if desired etc." },
		{ "DisableTick.Comment", "/** The system will simply stop ticking. Tick will be re-enabled when any emitters become significant again. This is useful for persistent fx such as environmental fx.  */" },
		{ "DisableTick.Name", "EParticleSystemInsignificanceReaction::DisableTick" },
		{ "DisableTick.ToolTip", "The system will simply stop ticking. Tick will be re-enabled when any emitters become significant again. This is useful for persistent fx such as environmental fx." },
		{ "DisableTickAndKill.Comment", "/** As DisableTick but will also kill all particles. */" },
		{ "DisableTickAndKill.Hidden", "" },
		{ "DisableTickAndKill.Name", "EParticleSystemInsignificanceReaction::DisableTickAndKill" },
		{ "DisableTickAndKill.ToolTip", "As DisableTick but will also kill all particles." },
		{ "ModuleRelativePath", "Public/ParticleHelper.h" },
		{ "Num.Comment", "//Hidden for now until I make it useful i.e. Killing particles saves memory.\n" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EParticleSystemInsignificanceReaction::Num" },
		{ "Num.ToolTip", "Hidden for now until I make it useful i.e. Killing particles saves memory." },
		{ "ToolTip", "Determines what a particle system will do when all of it's emitters become insignificant." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleSystemInsignificanceReaction",
		"EParticleSystemInsignificanceReaction",
		Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction()
	{
		if (!Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.InnerSingleton, Z_Construct_UEnum_Engine_EParticleSystemInsignificanceReaction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h_Statics::EnumInfo[] = {
		{ EParticleDetailMode_StaticEnum, TEXT("EParticleDetailMode"), &Z_Registration_Info_UEnum_EParticleDetailMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1917598470U) },
		{ EParticleSignificanceLevel_StaticEnum, TEXT("EParticleSignificanceLevel"), &Z_Registration_Info_UEnum_EParticleSignificanceLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 292229255U) },
		{ EParticleSystemInsignificanceReaction_StaticEnum, TEXT("EParticleSystemInsignificanceReaction"), &Z_Registration_Info_UEnum_EParticleSystemInsignificanceReaction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3000398132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h_4090138299(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ParticleHelper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
