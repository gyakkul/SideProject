// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundAttenuationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAttenuationFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundAttenuationFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundAttenuationFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundAttenuationFactory::StaticRegisterNativesUSoundAttenuationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundAttenuationFactory);
	UClass* Z_Construct_UClass_USoundAttenuationFactory_NoRegister()
	{
		return USoundAttenuationFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundAttenuationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundAttenuationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundAttenuationFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundAttenuationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundAttenuationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundAttenuationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundAttenuationFactory_Statics::ClassParams = {
		&USoundAttenuationFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundAttenuationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundAttenuationFactory()
	{
		if (!Z_Registration_Info_UClass_USoundAttenuationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundAttenuationFactory.OuterSingleton, Z_Construct_UClass_USoundAttenuationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundAttenuationFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundAttenuationFactory>()
	{
		return USoundAttenuationFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAttenuationFactory);
	USoundAttenuationFactory::~USoundAttenuationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundAttenuationFactory, USoundAttenuationFactory::StaticClass, TEXT("USoundAttenuationFactory"), &Z_Registration_Info_UClass_USoundAttenuationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundAttenuationFactory), 207261065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_507691117(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundAttenuationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
