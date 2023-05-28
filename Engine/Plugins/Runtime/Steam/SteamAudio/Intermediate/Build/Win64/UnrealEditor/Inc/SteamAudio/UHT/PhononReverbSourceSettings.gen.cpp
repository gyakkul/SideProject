// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhononReverbSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononReverbSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UReverbPluginSourceSettingsBase();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononReverbSourceSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononReverbSourceSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSimulationType();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononReverbSourceSettings::StaticRegisterNativesUPhononReverbSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononReverbSourceSettings);
	UClass* Z_Construct_UClass_UPhononReverbSourceSettings_NoRegister()
	{
		return UPhononReverbSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhononReverbSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceReverbSimulationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceReverbSimulationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceReverbSimulationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceReverbContribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceReverbContribution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononReverbSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReverbPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononReverbSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhononReverbSourceSettings.h" },
		{ "ModuleRelativePath", "Public/PhononReverbSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "Comment", "// How to simulate source-centric reverb.\n" },
		{ "DisplayName", "Source-Centric Reverb Simulation" },
		{ "ModuleRelativePath", "Public/PhononReverbSourceSettings.h" },
		{ "ToolTip", "How to simulate source-centric reverb." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType = { "SourceReverbSimulationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononReverbSourceSettings, SourceReverbSimulationType), Z_Construct_UEnum_SteamAudio_EIplSimulationType, METADATA_PARAMS(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType_MetaData)) }; // 1665621229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbContribution_MetaData[] = {
		{ "Category", "ReverbSettings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale factor to make the indirect contribution louder or softer.\n" },
		{ "DisplayName", "Source-Centric Reverb Contribution" },
		{ "ModuleRelativePath", "Public/PhononReverbSourceSettings.h" },
		{ "ToolTip", "Scale factor to make the indirect contribution louder or softer." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbContribution = { "SourceReverbContribution", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononReverbSourceSettings, SourceReverbContribution), METADATA_PARAMS(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbContribution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononReverbSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbSimulationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononReverbSourceSettings_Statics::NewProp_SourceReverbContribution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononReverbSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononReverbSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononReverbSourceSettings_Statics::ClassParams = {
		&UPhononReverbSourceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononReverbSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononReverbSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononReverbSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UPhononReverbSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononReverbSourceSettings.OuterSingleton, Z_Construct_UClass_UPhononReverbSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononReverbSourceSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononReverbSourceSettings>()
	{
		return UPhononReverbSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononReverbSourceSettings);
	UPhononReverbSourceSettings::~UPhononReverbSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononReverbSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononReverbSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononReverbSourceSettings, UPhononReverbSourceSettings::StaticClass, TEXT("UPhononReverbSourceSettings"), &Z_Registration_Info_UClass_UPhononReverbSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononReverbSourceSettings), 2609886275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononReverbSourceSettings_h_1860784366(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononReverbSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononReverbSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
