// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusAmbisonicsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAmbisonicsSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSoundfieldSettings();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioSoundfieldSettings_NoRegister();
	OCULUSAUDIO_API UEnum* Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode();
	OCULUSAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode;
	static UEnum* EOculusAudioAmbisonicsMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode, (UObject*)Z_Construct_UPackage__Script_OculusAudio(), TEXT("EOculusAudioAmbisonicsMode"));
		}
		return Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UEnum* StaticEnum<EOculusAudioAmbisonicsMode>()
	{
		return EOculusAudioAmbisonicsMode_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enumerators[] = {
		{ "EOculusAudioAmbisonicsMode::SphericalHarmonics", (int64)EOculusAudioAmbisonicsMode::SphericalHarmonics },
		{ "EOculusAudioAmbisonicsMode::VirtualSpeakers", (int64)EOculusAudioAmbisonicsMode::VirtualSpeakers },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusAmbisonicsSettings.h" },
		{ "SphericalHarmonics.Comment", "// High quality ambisonic spatialization method\n" },
		{ "SphericalHarmonics.Name", "EOculusAudioAmbisonicsMode::SphericalHarmonics" },
		{ "SphericalHarmonics.ToolTip", "High quality ambisonic spatialization method" },
		{ "VirtualSpeakers.Comment", "// Alternative ambisonic spatialization method\n" },
		{ "VirtualSpeakers.Name", "EOculusAudioAmbisonicsMode::VirtualSpeakers" },
		{ "VirtualSpeakers.ToolTip", "Alternative ambisonic spatialization method" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusAudio,
		nullptr,
		"EOculusAudioAmbisonicsMode",
		"EOculusAudioAmbisonicsMode",
		Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode()
	{
		if (!Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.InnerSingleton, Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings;
class UScriptStruct* FSubmixEffectOculusAmbisonicSpatializerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings, (UObject*)Z_Construct_UPackage__Script_OculusAudio(), TEXT("SubmixEffectOculusAmbisonicSpatializerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.OuterSingleton;
}
template<> OCULUSAUDIO_API UScriptStruct* StaticStruct<FSubmixEffectOculusAmbisonicSpatializerSettings>()
{
	return FSubmixEffectOculusAmbisonicSpatializerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AmbisonicMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbisonicMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AmbisonicMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusAmbisonicsSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectOculusAmbisonicSpatializerSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "// Ambisonic spatialization mode\n" },
		{ "ModuleRelativePath", "Public/OculusAmbisonicsSettings.h" },
		{ "ToolTip", "Ambisonic spatialization mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode = { "AmbisonicMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectOculusAmbisonicSpatializerSettings, AmbisonicMode), Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode_MetaData)) }; // 601058464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewProp_AmbisonicMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
		nullptr,
		&NewStructOps,
		"SubmixEffectOculusAmbisonicSpatializerSettings",
		sizeof(FSubmixEffectOculusAmbisonicSpatializerSettings),
		alignof(FSubmixEffectOculusAmbisonicSpatializerSettings),
		Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings.InnerSingleton;
	}
	void UOculusAudioSoundfieldSettings::StaticRegisterNativesUOculusAudioSoundfieldSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioSoundfieldSettings);
	UClass* Z_Construct_UClass_UOculusAudioSoundfieldSettings_NoRegister()
	{
		return UOculusAudioSoundfieldSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpatializationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatializationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpatializationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusAmbisonicsSettings.h" },
		{ "ModuleRelativePath", "Public/OculusAmbisonicsSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode_MetaData[] = {
		{ "Category", "Ambisonics" },
		{ "ModuleRelativePath", "Public/OculusAmbisonicsSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode = { "SpatializationMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusAudioSoundfieldSettings, SpatializationMode), Z_Construct_UEnum_OculusAudio_EOculusAudioAmbisonicsMode, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode_MetaData)) }; // 601058464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::NewProp_SpatializationMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioSoundfieldSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::ClassParams = {
		&UOculusAudioSoundfieldSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioSoundfieldSettings()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioSoundfieldSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioSoundfieldSettings.OuterSingleton, Z_Construct_UClass_UOculusAudioSoundfieldSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioSoundfieldSettings.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioSoundfieldSettings>()
	{
		return UOculusAudioSoundfieldSettings::StaticClass();
	}
	UOculusAudioSoundfieldSettings::UOculusAudioSoundfieldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioSoundfieldSettings);
	UOculusAudioSoundfieldSettings::~UOculusAudioSoundfieldSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::EnumInfo[] = {
		{ EOculusAudioAmbisonicsMode_StaticEnum, TEXT("EOculusAudioAmbisonicsMode"), &Z_Registration_Info_UEnum_EOculusAudioAmbisonicsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 601058464U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectOculusAmbisonicSpatializerSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectOculusAmbisonicSpatializerSettings_Statics::NewStructOps, TEXT("SubmixEffectOculusAmbisonicSpatializerSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectOculusAmbisonicSpatializerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectOculusAmbisonicSpatializerSettings), 3394355359U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioSoundfieldSettings, UOculusAudioSoundfieldSettings::StaticClass, TEXT("UOculusAudioSoundfieldSettings"), &Z_Registration_Info_UClass_UOculusAudioSoundfieldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioSoundfieldSettings), 825482093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_1642006585(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Public_OculusAmbisonicsSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
