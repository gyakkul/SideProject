// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononReverb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USubmixEffectReverbPluginPreset();
	STEAMAUDIO_API UClass* Z_Construct_UClass_USubmixEffectReverbPluginPreset_NoRegister();
	STEAMAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings;
class UScriptStruct* FSubmixEffectReverbPluginSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("SubmixEffectReverbPluginSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.OuterSingleton;
}
template<> STEAMAUDIO_API UScriptStruct* StaticStruct<FSubmixEffectReverbPluginSettings>()
{
	return FSubmixEffectReverbPluginSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PhononReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectReverbPluginSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		&NewStructOps,
		"SubmixEffectReverbPluginSettings",
		sizeof(FSubmixEffectReverbPluginSettings),
		alignof(FSubmixEffectReverbPluginSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings.InnerSingleton;
	}
	void USubmixEffectReverbPluginPreset::StaticRegisterNativesUSubmixEffectReverbPluginPreset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectReverbPluginPreset);
	UClass* Z_Construct_UClass_USubmixEffectReverbPluginPreset_NoRegister()
	{
		return USubmixEffectReverbPluginPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhononReverb.h" },
		{ "ModuleRelativePath", "Private/PhononReverb.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Private/PhononReverb.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectReverbPluginPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::NewProp_Settings_MetaData)) }; // 3625869401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectReverbPluginPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::ClassParams = {
		&USubmixEffectReverbPluginPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectReverbPluginPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectReverbPluginPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectReverbPluginPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectReverbPluginPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectReverbPluginPreset.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<USubmixEffectReverbPluginPreset>()
	{
		return USubmixEffectReverbPluginPreset::StaticClass();
	}
	USubmixEffectReverbPluginPreset::USubmixEffectReverbPluginPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectReverbPluginPreset);
	USubmixEffectReverbPluginPreset::~USubmixEffectReverbPluginPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectReverbPluginSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectReverbPluginSettings_Statics::NewStructOps, TEXT("SubmixEffectReverbPluginSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectReverbPluginSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectReverbPluginSettings), 3625869401U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectReverbPluginPreset, USubmixEffectReverbPluginPreset::StaticClass, TEXT("USubmixEffectReverbPluginPreset"), &Z_Registration_Info_UClass_USubmixEffectReverbPluginPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectReverbPluginPreset), 3321379481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_1548463444(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
