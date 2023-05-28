// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/SoundModulationParameterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationParameterFactory() {}
// Cross Module References
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationParameterFactory();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationParameterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioModulationEditor();
// End Cross Module References
	void USoundModulationParameterFactory::StaticRegisterNativesUSoundModulationParameterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationParameterFactory);
	UClass* Z_Construct_UClass_USoundModulationParameterFactory_NoRegister()
	{
		return USoundModulationParameterFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationParameterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationParameterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationParameterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundModulationParameterFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundModulationParameterFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationParameterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationParameterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationParameterFactory_Statics::ClassParams = {
		&USoundModulationParameterFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationParameterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationParameterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationParameterFactory()
	{
		if (!Z_Registration_Info_UClass_USoundModulationParameterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationParameterFactory.OuterSingleton, Z_Construct_UClass_USoundModulationParameterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationParameterFactory.OuterSingleton;
	}
	template<> AUDIOMODULATIONEDITOR_API UClass* StaticClass<USoundModulationParameterFactory>()
	{
		return USoundModulationParameterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationParameterFactory);
	USoundModulationParameterFactory::~USoundModulationParameterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationParameterFactory, USoundModulationParameterFactory::StaticClass, TEXT("USoundModulationParameterFactory"), &Z_Registration_Info_UClass_USoundModulationParameterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationParameterFactory), 864122356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_1497483223(TEXT("/Script/AudioModulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationParameterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
