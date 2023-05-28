// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueTemplateSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueTemplateSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplateSettings();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplateSettings_NoRegister();
	SOUNDCUETEMPLATES_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings();
	UPackage* Z_Construct_UPackage__Script_SoundCueTemplates();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings;
class UScriptStruct* FSoundCueTemplateQualitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings, (UObject*)Z_Construct_UPackage__Script_SoundCueTemplates(), TEXT("SoundCueTemplateQualitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.OuterSingleton;
}
template<> SOUNDCUETEMPLATES_API UScriptStruct* StaticStruct<FSoundCueTemplateQualitySettings>()
{
	return FSoundCueTemplateQualitySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxConcatenatedVariations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxConcatenatedVariations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRandomizedVariations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRandomizedVariations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMixVariations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMixVariations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueTemplateQualitySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueTemplateQualitySettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxConcatenatedVariations_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMin", "1" },
		{ "Comment", "// The max number of variations to include for the given quality in a SoundCueContainer set to 'Concatenate'.\n" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
		{ "ToolTip", "The max number of variations to include for the given quality in a SoundCueContainer set to 'Concatenate'." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxConcatenatedVariations = { "MaxConcatenatedVariations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueTemplateQualitySettings, MaxConcatenatedVariations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxConcatenatedVariations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxConcatenatedVariations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxRandomizedVariations_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMin", "1" },
		{ "Comment", "// The max number of variations to include for the given quality in a SoundCueContainer set to 'Randomized'.\n" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
		{ "ToolTip", "The max number of variations to include for the given quality in a SoundCueContainer set to 'Randomized'." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxRandomizedVariations = { "MaxRandomizedVariations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueTemplateQualitySettings, MaxRandomizedVariations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxRandomizedVariations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxRandomizedVariations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxMixVariations_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMin", "1" },
		{ "Comment", "// The max number of variations to include for the given quality in a SoundCueContainer set to 'Mix'.\n" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
		{ "ToolTip", "The max number of variations to include for the given quality in a SoundCueContainer set to 'Mix'." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxMixVariations = { "MaxMixVariations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueTemplateQualitySettings, MaxMixVariations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxMixVariations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxMixVariations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxConcatenatedVariations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxRandomizedVariations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewProp_MaxMixVariations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
		nullptr,
		&NewStructOps,
		"SoundCueTemplateQualitySettings",
		sizeof(FSoundCueTemplateQualitySettings),
		alignof(FSoundCueTemplateQualitySettings),
		Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings.InnerSingleton;
	}
	void USoundCueTemplateSettings::StaticRegisterNativesUSoundCueTemplateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueTemplateSettings);
	UClass* Z_Construct_UClass_USoundCueTemplateSettings_NoRegister()
	{
		return USoundCueTemplateSettings::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueTemplateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueTemplateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Sound Cue Templates" },
		{ "IncludePath", "SoundCueTemplateSettings.h" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings, METADATA_PARAMS(nullptr, 0) }; // 1556496741
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueTemplateSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels_MetaData)) }; // 1556496741
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueTemplateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateSettings_Statics::NewProp_QualityLevels,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueTemplateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueTemplateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueTemplateSettings_Statics::ClassParams = {
		&USoundCueTemplateSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_USoundCueTemplateSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueTemplateSettings()
	{
		if (!Z_Registration_Info_UClass_USoundCueTemplateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueTemplateSettings.OuterSingleton, Z_Construct_UClass_USoundCueTemplateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueTemplateSettings.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATES_API UClass* StaticClass<USoundCueTemplateSettings>()
	{
		return USoundCueTemplateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueTemplateSettings);
	USoundCueTemplateSettings::~USoundCueTemplateSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ScriptStructInfo[] = {
		{ FSoundCueTemplateQualitySettings::StaticStruct, Z_Construct_UScriptStruct_FSoundCueTemplateQualitySettings_Statics::NewStructOps, TEXT("SoundCueTemplateQualitySettings"), &Z_Registration_Info_UScriptStruct_SoundCueTemplateQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueTemplateQualitySettings), 1556496741U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueTemplateSettings, USoundCueTemplateSettings::StaticClass, TEXT("USoundCueTemplateSettings"), &Z_Registration_Info_UClass_USoundCueTemplateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueTemplateSettings), 502425635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_399358367(TEXT("/Script/SoundCueTemplates"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplateSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
