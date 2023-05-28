// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/TextureEncodingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureEncodingSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingProjectSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeEffort();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeed();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureUniversalTiling();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEncodeEffort;
	static UEnum* ETextureEncodeEffort_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeEffort, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureEncodeEffort"));
		}
		return Z_Registration_Info_UEnum_ETextureEncodeEffort.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeEffort>()
	{
		return ETextureEncodeEffort_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enumerators[] = {
		{ "ETextureEncodeEffort::Default", (int64)ETextureEncodeEffort::Default },
		{ "ETextureEncodeEffort::Low", (int64)ETextureEncodeEffort::Low },
		{ "ETextureEncodeEffort::Normal", (int64)ETextureEncodeEffort::Normal },
		{ "ETextureEncodeEffort::High", (int64)ETextureEncodeEffort::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// For encoders that support it (i.e. Oodle), this controls how much time to\n// spend on finding better encoding.\n// (These need to match the Oodle OodleTex_EncodeEffortLevel values if you are \n// using Oodle.)\n" },
		{ "Default.Name", "ETextureEncodeEffort::Default" },
		{ "Default.ToolTip", "Let the encoder decide what's best." },
		{ "High.Name", "ETextureEncodeEffort::High" },
		{ "High.ToolTip", "More time, better quality - good for nightlies / unattended cooks." },
		{ "Low.Name", "ETextureEncodeEffort::Low" },
		{ "Low.ToolTip", "Faster encoding, lower quality. Probably don't ship textures encoded at this effort level" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "Normal.Name", "ETextureEncodeEffort::Normal" },
		{ "Normal.ToolTip", "Reasonable compromise" },
		{ "ToolTip", "For encoders that support it (i.e. Oodle), this controls how much time to\nspend on finding better encoding.\n(These need to match the Oodle OodleTex_EncodeEffortLevel values if you are\nusing Oodle.)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureEncodeEffort",
		"ETextureEncodeEffort",
		Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureEncodeEffort()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton, Z_Construct_UEnum_Engine_ETextureEncodeEffort_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEncodeEffort.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureUniversalTiling;
	static UEnum* ETextureUniversalTiling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureUniversalTiling, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureUniversalTiling"));
		}
		return Z_Registration_Info_UEnum_ETextureUniversalTiling.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureUniversalTiling>()
	{
		return ETextureUniversalTiling_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enumerators[] = {
		{ "ETextureUniversalTiling::Disabled", (int64)ETextureUniversalTiling::Disabled },
		{ "ETextureUniversalTiling::Enabled_256KB", (int64)ETextureUniversalTiling::Enabled_256KB },
		{ "ETextureUniversalTiling::Enabled_64KB", (int64)ETextureUniversalTiling::Enabled_64KB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// enum values must match exactly with OodleTex_RDO_UniversalTiling\n" },
		{ "Disabled.Name", "ETextureUniversalTiling::Disabled" },
		{ "Enabled_256KB.Name", "ETextureUniversalTiling::Enabled_256KB" },
		{ "Enabled_64KB.Name", "ETextureUniversalTiling::Enabled_64KB" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "enum values must match exactly with OodleTex_RDO_UniversalTiling" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureUniversalTiling",
		"ETextureUniversalTiling",
		Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureUniversalTiling()
	{
		if (!Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton, Z_Construct_UEnum_Engine_ETextureUniversalTiling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureUniversalTiling.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride;
	static UEnum* ETextureEncodeSpeedOverride_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureEncodeSpeedOverride"));
		}
		return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureEncodeSpeedOverride>()
	{
		return ETextureEncodeSpeedOverride_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enumerators[] = {
		{ "ETextureEncodeSpeedOverride::Disabled", (int64)ETextureEncodeSpeedOverride::Disabled },
		{ "ETextureEncodeSpeedOverride::Final", (int64)ETextureEncodeSpeedOverride::Final },
		{ "ETextureEncodeSpeedOverride::FinalIfAvailable", (int64)ETextureEncodeSpeedOverride::FinalIfAvailable },
		{ "ETextureEncodeSpeedOverride::Fast", (int64)ETextureEncodeSpeedOverride::Fast },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Enum that allows for not overriding what the existing setting is - all the\n// other values have the same meaning as ETextureEncodeSpeed\n" },
		{ "Disabled.Name", "ETextureEncodeSpeedOverride::Disabled" },
		{ "Fast.Name", "ETextureEncodeSpeedOverride::Fast" },
		{ "Final.Comment", "// don't override.\n" },
		{ "Final.Name", "ETextureEncodeSpeedOverride::Final" },
		{ "Final.ToolTip", "don't override." },
		{ "FinalIfAvailable.Name", "ETextureEncodeSpeedOverride::FinalIfAvailable" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Enum that allows for not overriding what the existing setting is - all the\nother values have the same meaning as ETextureEncodeSpeed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureEncodeSpeedOverride",
		"ETextureEncodeSpeedOverride",
		Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride()
	{
		if (!Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton, Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride.InnerSingleton;
	}
	void UTextureEncodingProjectSettings::StaticRegisterNativesUTextureEncodingProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureEncodingProjectSettings);
	UClass* Z_Construct_UClass_UTextureEncodingProjectSettings_NoRegister()
	{
		return UTextureEncodingProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureEncodingProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinalUsesRDO_MetaData[];
#endif
		static void NewProp_bFinalUsesRDO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalUsesRDO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalRDOLambda_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_FinalRDOLambda;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalEffortLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalEffortLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalEffortLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinalUniversalTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalUniversalTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinalUniversalTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFastUsesRDO_MetaData[];
#endif
		static void NewProp_bFastUsesRDO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFastUsesRDO;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastRDOLambda_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_FastRDOLambda;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FastEffortLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastEffortLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FastEffortLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FastUniversalTiling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastUniversalTiling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FastUniversalTiling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CookUsesSpeed_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookUsesSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CookUsesSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorUsesSpeed_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorUsesSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorUsesSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// \n// Encoding can either use the \"Final\" or \"Fast\" speeds, for supported encoders (e.g. Oodle)\n// These settings have no effect on encoders that don't support encode speed\n//\n" },
		{ "DisplayName", "Texture Encoding" },
		{ "IncludePath", "TextureEncodingSettings.h" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Encoding can either use the \"Final\" or \"Fast\" speeds, for supported encoders (e.g. Oodle)\nThese settings have no effect on encoders that don't support encode speed" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// If true, Final encode speed enables rate-distortion optimization on supported encoders to\n// decrease *on disc* size of textures in compressed package files.\n// This rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\n// textures is used to control it. Specific LossyCompressionAmount values correspond to\n// to RDO lambdas of:\n// \n//\x09None - Disable RDO for this texture.\n//\x09Lowest - 1 (Least distortion)\n//\x09Low - 10\n//\x09Medium - 20\n//\x09High - 30\n//\x09Highest - 40\n// \n// If set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\n// used. If that is also Default, then the RDOLambda in these settings is used.\n//\n// Note that any distortion introduced is on top of, and likely less than, any introduced by the format itself.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "If true, Final encode speed enables rate-distortion optimization on supported encoders to\ndecrease *on disc* size of textures in compressed package files.\nThis rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\ntextures is used to control it. Specific LossyCompressionAmount values correspond to\nto RDO lambdas of:\n\n      None - Disable RDO for this texture.\n      Lowest - 1 (Least distortion)\n      Low - 10\n      Medium - 20\n      High - 30\n      Highest - 40\n\nIf set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\nused. If that is also Default, then the RDOLambda in these settings is used.\n\nNote that any distortion introduced is on top of, and likely less than, any introduced by the format itself." },
	};
#endif
	void Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_SetBit(void* Obj)
	{
		((UTextureEncodingProjectSettings*)Obj)->bFinalUsesRDO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO = { "bFinalUsesRDO", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureEncodingProjectSettings), &Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\n// Otherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n// \n// Low values (1) represent highest quality (least distortion) results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Final RDO Lambda" },
		{ "EditCondition", "bFinalUsesRDO" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\nOtherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n\nLow values (1) represent highest quality (least distortion) results." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda = { "FinalRDOLambda", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalRDOLambda), METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how much time to take trying for better encoding results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Specifies how much time to take trying for better encoding results." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel = { "FinalEffortLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalEffortLevel), Z_Construct_UEnum_Engine_ETextureEncodeEffort, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_MetaData)) }; // 3222400976
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\n// enabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\n// sizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\n// sizes of textures for platforms with opaque tiling (i.e. desktop).\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\nenabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\nsizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\nsizes of textures for platforms with opaque tiling (i.e. desktop)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling = { "FinalUniversalTiling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FinalUniversalTiling), Z_Construct_UEnum_Engine_ETextureUniversalTiling, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_MetaData)) }; // 2733228606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// If true, Final encode speed enables rate-distortion optimization on supported encoders to\n// decrease *on disc* size of textures in compressed package files.\n// This rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\n// textures is used to control it. Specific LossyCompressionAmount values correspond to\n// to RDO lambdas of:\n// \n//\x09None - Disable RDO for this texture.\n//\x09Lowest - 1 (Least distortion)\n//\x09Low - 10\n//\x09Medium - 20\n//\x09High - 30\n//\x09Highest - 40\n// \n// If set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\n// used. If that is also Default, then the RDOLambda in these settings is used.\n//\n// Note that any distortion introduced is on top of, and likely less than, any introduced by the format itself.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "If true, Final encode speed enables rate-distortion optimization on supported encoders to\ndecrease *on disc* size of textures in compressed package files.\nThis rate-distortion tradeoff is controlled via \"Lambda\". The \"LossyCompressionAmount\" parameter on\ntextures is used to control it. Specific LossyCompressionAmount values correspond to\nto RDO lambdas of:\n\n      None - Disable RDO for this texture.\n      Lowest - 1 (Least distortion)\n      Low - 10\n      Medium - 20\n      High - 30\n      Highest - 40\n\nIf set to Default, then the LossyCompressionAmount in the LODGroup for the texture is\nused. If that is also Default, then the RDOLambda in these settings is used.\n\nNote that any distortion introduced is on top of, and likely less than, any introduced by the format itself." },
	};
#endif
	void Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_SetBit(void* Obj)
	{
		((UTextureEncodingProjectSettings*)Obj)->bFastUsesRDO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO = { "bFastUsesRDO", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureEncodingProjectSettings), &Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "// Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\n// Otherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n// \n// Low values (1) represent highest quality (least distortion) results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Fast RDO Lambda" },
		{ "EditCondition", "bFastUsesRDO" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Ignored if UsesRDO is false. This value is used if a given texture is using \"Default\" LossyCompressionAmount.\nOtherwise, the value of LossyCompressionAmount is translated in to a fixed lambda (see UsesRDO tooltip).\n\nLow values (1) represent highest quality (least distortion) results." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda = { "FastRDOLambda", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastRDOLambda), METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how much time to take trying for better encode results.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Specifies how much time to take trying for better encode results." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel = { "FastEffortLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastEffortLevel), Z_Construct_UEnum_Engine_ETextureEncodeEffort, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_MetaData)) }; // 3222400976
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_MetaData[] = {
		{ "Category", "EncodeSpeedSettings" },
		{ "Comment", "// Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\n// enabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\n// sizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\n// sizes of textures for platforms with opaque tiling (i.e. desktop).\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Specifies how to assume textures are laid out on disc. This only applies to Oodle with RDO\nenabled. 256 KB is a good middle ground. Enabling this will decrease the on-disc\nsizes of textures for platforms with exposed texture tiling (i.e. consoles), but will slightly increase\nsizes of textures for platforms with opaque tiling (i.e. desktop)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling = { "FastUniversalTiling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, FastUniversalTiling), Z_Construct_UEnum_Engine_ETextureUniversalTiling, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_MetaData)) }; // 2733228606
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Which encode speed non interactive editor sessions will use (i.e. commandlets)\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Which encode speed non interactive editor sessions will use (i.e. commandlets)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed = { "CookUsesSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, CookUsesSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeed, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_MetaData)) }; // 4229381481
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Which encode speed everything else uses.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Which encode speed everything else uses." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed = { "EditorUsesSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingProjectSettings, EditorUsesSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeed, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_MetaData)) }; // 4229381481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFinalUsesRDO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalRDOLambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalEffortLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FinalUniversalTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_bFastUsesRDO,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastRDOLambda,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastEffortLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_FastUniversalTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_CookUsesSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::NewProp_EditorUsesSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEncodingProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::ClassParams = {
		&UTextureEncodingProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureEncodingProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton, Z_Construct_UClass_UTextureEncodingProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureEncodingProjectSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureEncodingProjectSettings>()
	{
		return UTextureEncodingProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEncodingProjectSettings);
	UTextureEncodingProjectSettings::~UTextureEncodingProjectSettings() {}
	void UTextureEncodingUserSettings::StaticRegisterNativesUTextureEncodingUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureEncodingUserSettings);
	UClass* Z_Construct_UClass_UTextureEncodingUserSettings_NoRegister()
	{
		return UTextureEncodingUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureEncodingUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceEncodeSpeed_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceEncodeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceEncodeSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureEncodingUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingUserSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Texture Encoding" },
		{ "IncludePath", "TextureEncodingSettings.h" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_MetaData[] = {
		{ "Category", "EncodeSpeeds" },
		{ "Comment", "// Local machine/project setting to force an encode speed, if desired.\n// See the Engine \"Texture Encoding\" section for details.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/TextureEncodingSettings.h" },
		{ "ToolTip", "Local machine/project setting to force an encode speed, if desired.\nSee the Engine \"Texture Encoding\" section for details." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed = { "ForceEncodeSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureEncodingUserSettings, ForceEncodeSpeed), Z_Construct_UEnum_Engine_ETextureEncodeSpeedOverride, METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_MetaData)) }; // 3682661123
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureEncodingUserSettings_Statics::NewProp_ForceEncodeSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureEncodingUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureEncodingUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureEncodingUserSettings_Statics::ClassParams = {
		&UTextureEncodingUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureEncodingUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureEncodingUserSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton, Z_Construct_UClass_UTextureEncodingUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureEncodingUserSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureEncodingUserSettings>()
	{
		return UTextureEncodingUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureEncodingUserSettings);
	UTextureEncodingUserSettings::~UTextureEncodingUserSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::EnumInfo[] = {
		{ ETextureEncodeEffort_StaticEnum, TEXT("ETextureEncodeEffort"), &Z_Registration_Info_UEnum_ETextureEncodeEffort, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3222400976U) },
		{ ETextureUniversalTiling_StaticEnum, TEXT("ETextureUniversalTiling"), &Z_Registration_Info_UEnum_ETextureUniversalTiling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2733228606U) },
		{ ETextureEncodeSpeedOverride_StaticEnum, TEXT("ETextureEncodeSpeedOverride"), &Z_Registration_Info_UEnum_ETextureEncodeSpeedOverride, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3682661123U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureEncodingProjectSettings, UTextureEncodingProjectSettings::StaticClass, TEXT("UTextureEncodingProjectSettings"), &Z_Registration_Info_UClass_UTextureEncodingProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureEncodingProjectSettings), 2738832913U) },
		{ Z_Construct_UClass_UTextureEncodingUserSettings, UTextureEncodingUserSettings::StaticClass, TEXT("UTextureEncodingUserSettings"), &Z_Registration_Info_UClass_UTextureEncodingUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureEncodingUserSettings), 3400122063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_826794023(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_TextureEncodingSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
