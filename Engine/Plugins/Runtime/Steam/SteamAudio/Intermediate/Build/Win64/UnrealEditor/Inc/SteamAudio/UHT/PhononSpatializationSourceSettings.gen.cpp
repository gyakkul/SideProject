// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhononSpatializationSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononSpatializationSourceSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USpatializationPluginSourceSettingsBase();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononSpatializationSourceSettings();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononSpatializationSourceSettings_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononSpatializationSourceSettings::StaticRegisterNativesUPhononSpatializationSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononSpatializationSourceSettings);
	UClass* Z_Construct_UClass_UPhononSpatializationSourceSettings_NoRegister()
	{
		return UPhononSpatializationSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatializationMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HrtfInterpolationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HrtfInterpolationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HrtfInterpolationMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatializationPluginSourceSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhononSpatializationSourceSettings.h" },
		{ "ModuleRelativePath", "Public/PhononSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "ModuleRelativePath", "Public/PhononSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod = { "SpatializationMethod", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononSpatializationSourceSettings, SpatializationMethod), Z_Construct_UEnum_SteamAudio_EIplSpatializationMethod, METADATA_PARAMS(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_MetaData)) }; // 3979568022
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod_MetaData[] = {
		{ "Category", "SpatializationSettings" },
		{ "DisplayName", "HRTF Interpolation Method" },
		{ "ModuleRelativePath", "Public/PhononSpatializationSourceSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod = { "HrtfInterpolationMethod", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononSpatializationSourceSettings, HrtfInterpolationMethod), Z_Construct_UEnum_SteamAudio_EIplHrtfInterpolationMethod, METADATA_PARAMS(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod_MetaData)) }; // 4062162158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_SpatializationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::NewProp_HrtfInterpolationMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononSpatializationSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::ClassParams = {
		&UPhononSpatializationSourceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononSpatializationSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UPhononSpatializationSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononSpatializationSourceSettings.OuterSingleton, Z_Construct_UClass_UPhononSpatializationSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononSpatializationSourceSettings.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononSpatializationSourceSettings>()
	{
		return UPhononSpatializationSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononSpatializationSourceSettings);
	UPhononSpatializationSourceSettings::~UPhononSpatializationSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononSpatializationSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononSpatializationSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononSpatializationSourceSettings, UPhononSpatializationSourceSettings::StaticClass, TEXT("UPhononSpatializationSourceSettings"), &Z_Registration_Info_UClass_UPhononSpatializationSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononSpatializationSourceSettings), 2411079554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononSpatializationSourceSettings_h_798549273(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononSpatializationSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Public_PhononSpatializationSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
