// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ResonanceAudioReverbPluginPresetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResonanceAudioReverbPluginPresetFactory() {}
// Cross Module References
	RESONANCEAUDIOEDITOR_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory();
	RESONANCEAUDIOEDITOR_API UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ResonanceAudioEditor();
// End Cross Module References
	void UResonanceAudioReverbPluginPresetFactory::StaticRegisterNativesUResonanceAudioReverbPluginPresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResonanceAudioReverbPluginPresetFactory);
	UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_NoRegister()
	{
		return UResonanceAudioReverbPluginPresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ResonanceAudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ResonanceAudioReverbPluginPresetFactory.h" },
		{ "ModuleRelativePath", "Private/ResonanceAudioReverbPluginPresetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResonanceAudioReverbPluginPresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::ClassParams = {
		&UResonanceAudioReverbPluginPresetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory()
	{
		if (!Z_Registration_Info_UClass_UResonanceAudioReverbPluginPresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResonanceAudioReverbPluginPresetFactory.OuterSingleton, Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResonanceAudioReverbPluginPresetFactory.OuterSingleton;
	}
	template<> RESONANCEAUDIOEDITOR_API UClass* StaticClass<UResonanceAudioReverbPluginPresetFactory>()
	{
		return UResonanceAudioReverbPluginPresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResonanceAudioReverbPluginPresetFactory);
	UResonanceAudioReverbPluginPresetFactory::~UResonanceAudioReverbPluginPresetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResonanceAudioReverbPluginPresetFactory, UResonanceAudioReverbPluginPresetFactory::StaticClass, TEXT("UResonanceAudioReverbPluginPresetFactory"), &Z_Registration_Info_UClass_UResonanceAudioReverbPluginPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResonanceAudioReverbPluginPresetFactory), 3357954061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_1548511245(TEXT("/Script/ResonanceAudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ResonanceAudio_Source_ResonanceAudioEditor_Private_ResonanceAudioReverbPluginPresetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
