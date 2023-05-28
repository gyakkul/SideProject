// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioCodec.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioCodec() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioCodecEncoderSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioCodecEncoderSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void UAudioCodecEncoderSettings::StaticRegisterNativesUAudioCodecEncoderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioCodecEncoderSettings);
	UClass* Z_Construct_UClass_UAudioCodecEncoderSettings_NoRegister()
	{
		return UAudioCodecEncoderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioCodecEncoderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IAudioCodec.h" },
		{ "ModuleRelativePath", "Public/IAudioCodec.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/IAudioCodec.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioCodecEncoderSettings, Version), METADATA_PARAMS(Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioCodecEncoderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::ClassParams = {
		&UAudioCodecEncoderSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioCodecEncoderSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioCodecEncoderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioCodecEncoderSettings.OuterSingleton, Z_Construct_UClass_UAudioCodecEncoderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioCodecEncoderSettings.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioCodecEncoderSettings>()
	{
		return UAudioCodecEncoderSettings::StaticClass();
	}
	UAudioCodecEncoderSettings::UAudioCodecEncoderSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioCodecEncoderSettings);
	UAudioCodecEncoderSettings::~UAudioCodecEncoderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioCodecEncoderSettings, UAudioCodecEncoderSettings::StaticClass, TEXT("UAudioCodecEncoderSettings"), &Z_Registration_Info_UClass_UAudioCodecEncoderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioCodecEncoderSettings), 1970762009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_1070058090(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioCodec_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
