// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/SoundControlBusMixFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundControlBusMixFactory() {}
// Cross Module References
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusMixFactory();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusMixFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioModulationEditor();
// End Cross Module References
	void USoundControlBusMixFactory::StaticRegisterNativesUSoundControlBusMixFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundControlBusMixFactory);
	UClass* Z_Construct_UClass_USoundControlBusMixFactory_NoRegister()
	{
		return USoundControlBusMixFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundControlBusMixFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundControlBusMixFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBusMixFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundControlBusMixFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundControlBusMixFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundControlBusMixFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundControlBusMixFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundControlBusMixFactory_Statics::ClassParams = {
		&USoundControlBusMixFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundControlBusMixFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusMixFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundControlBusMixFactory()
	{
		if (!Z_Registration_Info_UClass_USoundControlBusMixFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundControlBusMixFactory.OuterSingleton, Z_Construct_UClass_USoundControlBusMixFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundControlBusMixFactory.OuterSingleton;
	}
	template<> AUDIOMODULATIONEDITOR_API UClass* StaticClass<USoundControlBusMixFactory>()
	{
		return USoundControlBusMixFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundControlBusMixFactory);
	USoundControlBusMixFactory::~USoundControlBusMixFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundControlBusMixFactory, USoundControlBusMixFactory::StaticClass, TEXT("USoundControlBusMixFactory"), &Z_Registration_Info_UClass_USoundControlBusMixFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundControlBusMixFactory), 2876943136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_90219954(TEXT("/Script/AudioModulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusMixFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
