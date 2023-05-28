// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PcmCodec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePcmCodec() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioCodecEncoderSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPcmEncoderSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioPcmEncoderSettings_NoRegister();
	AUDIOEXTENSIONS_API UEnum* Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPcmBitDepthConversion;
	static UEnum* EPcmBitDepthConversion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPcmBitDepthConversion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPcmBitDepthConversion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion, (UObject*)Z_Construct_UPackage__Script_AudioExtensions(), TEXT("EPcmBitDepthConversion"));
		}
		return Z_Registration_Info_UEnum_EPcmBitDepthConversion.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UEnum* StaticEnum<EPcmBitDepthConversion>()
	{
		return EPcmBitDepthConversion_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enumerators[] = {
		{ "EPcmBitDepthConversion::SameAsSource", (int64)EPcmBitDepthConversion::SameAsSource },
		{ "EPcmBitDepthConversion::Int16", (int64)EPcmBitDepthConversion::Int16 },
		{ "EPcmBitDepthConversion::Float32", (int64)EPcmBitDepthConversion::Float32 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enum_MetaDataParams[] = {
		{ "Float32.Name", "EPcmBitDepthConversion::Float32" },
		{ "Int16.Name", "EPcmBitDepthConversion::Int16" },
		{ "ModuleRelativePath", "Private/PcmCodec.h" },
		{ "SameAsSource.Name", "EPcmBitDepthConversion::SameAsSource" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioExtensions,
		nullptr,
		"EPcmBitDepthConversion",
		"EPcmBitDepthConversion",
		Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion()
	{
		if (!Z_Registration_Info_UEnum_EPcmBitDepthConversion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPcmBitDepthConversion.InnerSingleton, Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPcmBitDepthConversion.InnerSingleton;
	}
	void UAudioPcmEncoderSettings::StaticRegisterNativesUAudioPcmEncoderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPcmEncoderSettings);
	UClass* Z_Construct_UClass_UAudioPcmEncoderSettings_NoRegister()
	{
		return UAudioPcmEncoderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioPcmEncoderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitDepthConversion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepthConversion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BitDepthConversion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioCodecEncoderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PcmCodec.h" },
		{ "ModuleRelativePath", "Private/PcmCodec.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion_MetaData[] = {
		{ "ModuleRelativePath", "Private/PcmCodec.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion = { "BitDepthConversion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioPcmEncoderSettings, BitDepthConversion), Z_Construct_UEnum_AudioExtensions_EPcmBitDepthConversion, METADATA_PARAMS(Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion_MetaData)) }; // 3246530996
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::NewProp_BitDepthConversion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioPcmEncoderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::ClassParams = {
		&UAudioPcmEncoderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioPcmEncoderSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioPcmEncoderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPcmEncoderSettings.OuterSingleton, Z_Construct_UClass_UAudioPcmEncoderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioPcmEncoderSettings.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioPcmEncoderSettings>()
	{
		return UAudioPcmEncoderSettings::StaticClass();
	}
	UAudioPcmEncoderSettings::UAudioPcmEncoderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPcmEncoderSettings);
	UAudioPcmEncoderSettings::~UAudioPcmEncoderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::EnumInfo[] = {
		{ EPcmBitDepthConversion_StaticEnum, TEXT("EPcmBitDepthConversion"), &Z_Registration_Info_UEnum_EPcmBitDepthConversion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3246530996U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPcmEncoderSettings, UAudioPcmEncoderSettings::StaticClass, TEXT("UAudioPcmEncoderSettings"), &Z_Registration_Info_UClass_UAudioPcmEncoderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPcmEncoderSettings), 96067999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_786179688(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Private_PcmCodec_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
