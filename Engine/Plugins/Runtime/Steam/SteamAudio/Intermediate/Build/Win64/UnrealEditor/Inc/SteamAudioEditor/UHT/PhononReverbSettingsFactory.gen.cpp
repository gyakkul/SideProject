// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononReverbSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononReverbSettingsFactory() {}
// Cross Module References
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_UPhononReverbSettingsFactory();
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_UPhononReverbSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References
	void UPhononReverbSettingsFactory::StaticRegisterNativesUPhononReverbSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononReverbSettingsFactory);
	UClass* Z_Construct_UClass_UPhononReverbSettingsFactory_NoRegister()
	{
		return UPhononReverbSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPhononReverbSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhononReverbSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/PhononReverbSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononReverbSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::ClassParams = {
		&UPhononReverbSettingsFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononReverbSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UPhononReverbSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononReverbSettingsFactory.OuterSingleton, Z_Construct_UClass_UPhononReverbSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononReverbSettingsFactory.OuterSingleton;
	}
	template<> STEAMAUDIOEDITOR_API UClass* StaticClass<UPhononReverbSettingsFactory>()
	{
		return UPhononReverbSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononReverbSettingsFactory);
	UPhononReverbSettingsFactory::~UPhononReverbSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononReverbSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononReverbSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononReverbSettingsFactory, UPhononReverbSettingsFactory::StaticClass, TEXT("UPhononReverbSettingsFactory"), &Z_Registration_Info_UClass_UPhononReverbSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononReverbSettingsFactory), 53487909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononReverbSettingsFactory_h_703947397(TEXT("/Script/SteamAudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononReverbSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononReverbSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
