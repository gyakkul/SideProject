// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononOcclusionSettingsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononOcclusionSettingsFactory() {}
// Cross Module References
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_UPhononOcclusionSettingsFactory();
	STEAMAUDIOEDITOR_API UClass* Z_Construct_UClass_UPhononOcclusionSettingsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SteamAudioEditor();
// End Cross Module References
	void UPhononOcclusionSettingsFactory::StaticRegisterNativesUPhononOcclusionSettingsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononOcclusionSettingsFactory);
	UClass* Z_Construct_UClass_UPhononOcclusionSettingsFactory_NoRegister()
	{
		return UPhononOcclusionSettingsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhononOcclusionSettingsFactory.h" },
		{ "ModuleRelativePath", "Private/PhononOcclusionSettingsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononOcclusionSettingsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::ClassParams = {
		&UPhononOcclusionSettingsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononOcclusionSettingsFactory()
	{
		if (!Z_Registration_Info_UClass_UPhononOcclusionSettingsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononOcclusionSettingsFactory.OuterSingleton, Z_Construct_UClass_UPhononOcclusionSettingsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononOcclusionSettingsFactory.OuterSingleton;
	}
	template<> STEAMAUDIOEDITOR_API UClass* StaticClass<UPhononOcclusionSettingsFactory>()
	{
		return UPhononOcclusionSettingsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononOcclusionSettingsFactory);
	UPhononOcclusionSettingsFactory::~UPhononOcclusionSettingsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononOcclusionSettingsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononOcclusionSettingsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononOcclusionSettingsFactory, UPhononOcclusionSettingsFactory::StaticClass, TEXT("UPhononOcclusionSettingsFactory"), &Z_Registration_Info_UClass_UPhononOcclusionSettingsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononOcclusionSettingsFactory), 1857798425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononOcclusionSettingsFactory_h_344301087(TEXT("/Script/SteamAudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononOcclusionSettingsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudioEditor_Private_PhononOcclusionSettingsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
