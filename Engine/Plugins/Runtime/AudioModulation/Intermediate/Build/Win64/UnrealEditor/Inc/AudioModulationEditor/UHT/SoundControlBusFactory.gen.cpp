// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/SoundControlBusFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundControlBusFactory() {}
// Cross Module References
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusFactory();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundControlBusFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioModulationEditor();
// End Cross Module References
	void USoundControlBusFactory::StaticRegisterNativesUSoundControlBusFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundControlBusFactory);
	UClass* Z_Construct_UClass_USoundControlBusFactory_NoRegister()
	{
		return USoundControlBusFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundControlBusFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundControlBusFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBusFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundControlBusFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundControlBusFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundControlBusFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundControlBusFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundControlBusFactory_Statics::ClassParams = {
		&USoundControlBusFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundControlBusFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBusFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundControlBusFactory()
	{
		if (!Z_Registration_Info_UClass_USoundControlBusFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundControlBusFactory.OuterSingleton, Z_Construct_UClass_USoundControlBusFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundControlBusFactory.OuterSingleton;
	}
	template<> AUDIOMODULATIONEDITOR_API UClass* StaticClass<USoundControlBusFactory>()
	{
		return USoundControlBusFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundControlBusFactory);
	USoundControlBusFactory::~USoundControlBusFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundControlBusFactory, USoundControlBusFactory::StaticClass, TEXT("USoundControlBusFactory"), &Z_Registration_Info_UClass_USoundControlBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundControlBusFactory), 1408954144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_3268298380(TEXT("/Script/AudioModulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundControlBusFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
