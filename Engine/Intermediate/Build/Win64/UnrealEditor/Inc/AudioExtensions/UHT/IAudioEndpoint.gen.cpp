// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAudioEndpoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioEndpoint() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void UAudioEndpointSettingsBase::StaticRegisterNativesUAudioEndpointSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioEndpointSettingsBase);
	UClass* Z_Construct_UClass_UAudioEndpointSettingsBase_NoRegister()
	{
		return UAudioEndpointSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAudioEndpointSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioEndpointSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams = {
		&UAudioEndpointSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioEndpointSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton, Z_Construct_UClass_UAudioEndpointSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioEndpointSettingsBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UAudioEndpointSettingsBase>()
	{
		return UAudioEndpointSettingsBase::StaticClass();
	}
	UAudioEndpointSettingsBase::UAudioEndpointSettingsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioEndpointSettingsBase);
	UAudioEndpointSettingsBase::~UAudioEndpointSettingsBase() {}
	void UDummyEndpointSettings::StaticRegisterNativesUDummyEndpointSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDummyEndpointSettings);
	UClass* Z_Construct_UClass_UDummyEndpointSettings_NoRegister()
	{
		return UDummyEndpointSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDummyEndpointSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyEndpointSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioEndpointSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IAudioEndpoint.h" },
		{ "ModuleRelativePath", "Public/IAudioEndpoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyEndpointSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyEndpointSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams = {
		&UDummyEndpointSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDummyEndpointSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDummyEndpointSettings()
	{
		if (!Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton, Z_Construct_UClass_UDummyEndpointSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDummyEndpointSettings.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UDummyEndpointSettings>()
	{
		return UDummyEndpointSettings::StaticClass();
	}
	UDummyEndpointSettings::UDummyEndpointSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyEndpointSettings);
	UDummyEndpointSettings::~UDummyEndpointSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioEndpointSettingsBase, UAudioEndpointSettingsBase::StaticClass, TEXT("UAudioEndpointSettingsBase"), &Z_Registration_Info_UClass_UAudioEndpointSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioEndpointSettingsBase), 1047028102U) },
		{ Z_Construct_UClass_UDummyEndpointSettings, UDummyEndpointSettings::StaticClass, TEXT("UDummyEndpointSettings"), &Z_Registration_Info_UClass_UDummyEndpointSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDummyEndpointSettings), 522639990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_640138443(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioEndpoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
