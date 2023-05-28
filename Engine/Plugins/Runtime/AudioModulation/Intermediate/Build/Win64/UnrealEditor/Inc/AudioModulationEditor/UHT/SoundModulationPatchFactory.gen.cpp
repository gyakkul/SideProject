// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/SoundModulationPatchFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationPatchFactory() {}
// Cross Module References
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationPatchFactory();
	AUDIOMODULATIONEDITOR_API UClass* Z_Construct_UClass_USoundModulationPatchFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioModulationEditor();
// End Cross Module References
	void USoundModulationPatchFactory::StaticRegisterNativesUSoundModulationPatchFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationPatchFactory);
	UClass* Z_Construct_UClass_USoundModulationPatchFactory_NoRegister()
	{
		return USoundModulationPatchFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationPatchFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationPatchFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationPatchFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundModulationPatchFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/SoundModulationPatchFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationPatchFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationPatchFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationPatchFactory_Statics::ClassParams = {
		&USoundModulationPatchFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationPatchFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationPatchFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationPatchFactory()
	{
		if (!Z_Registration_Info_UClass_USoundModulationPatchFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationPatchFactory.OuterSingleton, Z_Construct_UClass_USoundModulationPatchFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationPatchFactory.OuterSingleton;
	}
	template<> AUDIOMODULATIONEDITOR_API UClass* StaticClass<USoundModulationPatchFactory>()
	{
		return USoundModulationPatchFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationPatchFactory);
	USoundModulationPatchFactory::~USoundModulationPatchFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationPatchFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationPatchFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationPatchFactory, USoundModulationPatchFactory::StaticClass, TEXT("USoundModulationPatchFactory"), &Z_Registration_Info_UClass_USoundModulationPatchFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationPatchFactory), 2596243311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationPatchFactory_h_2772269500(TEXT("/Script/AudioModulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationPatchFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulationEditor_Private_Factories_SoundModulationPatchFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
