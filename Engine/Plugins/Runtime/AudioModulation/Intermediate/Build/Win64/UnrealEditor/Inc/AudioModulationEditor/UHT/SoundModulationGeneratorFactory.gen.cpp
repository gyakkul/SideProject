// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/SoundModulationGeneratorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationGeneratorFactory() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator_NoRegister();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationGeneratorFactory();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationGeneratorFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioModulationEditor();
// End Cross Module References
	void USoundModulationGeneratorFactory::StaticRegisterNativesUSoundModulationGeneratorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationGeneratorFactory);
	UClass* Z_Construct_UClass_USoundModulationGeneratorFactory_NoRegister()
	{
		return USoundModulationGeneratorFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationGeneratorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundModulationGeneratorFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundModulationGeneratorFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/SoundModulationGeneratorFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationGeneratorFactory, GeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundModulationGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::NewProp_GeneratorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::NewProp_GeneratorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationGeneratorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::ClassParams = {
		&USoundModulationGeneratorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationGeneratorFactory()
	{
		if (!Z_Registration_Info_UClass_USoundModulationGeneratorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationGeneratorFactory.OuterSingleton, Z_Construct_UClass_USoundModulationGeneratorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationGeneratorFactory.OuterSingleton;
	}
	template<> AUDIOMODULATIONEDITOR_API UClass* StaticClass<USoundModulationGeneratorFactory>()
	{
		return USoundModulationGeneratorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationGeneratorFactory);
	USoundModulationGeneratorFactory::~USoundModulationGeneratorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationGeneratorFactory, USoundModulationGeneratorFactory::StaticClass, TEXT("USoundModulationGeneratorFactory"), &Z_Registration_Info_UClass_USoundModulationGeneratorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationGeneratorFactory), 1590310563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_1925475956(TEXT("/Script/AudioModulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationGeneratorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
