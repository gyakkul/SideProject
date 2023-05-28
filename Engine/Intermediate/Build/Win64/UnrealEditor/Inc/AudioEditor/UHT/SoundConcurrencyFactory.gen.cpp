// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundConcurrencyFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundConcurrencyFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundConcurrencyFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundConcurrencyFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundConcurrencyFactory::StaticRegisterNativesUSoundConcurrencyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundConcurrencyFactory);
	UClass* Z_Construct_UClass_USoundConcurrencyFactory_NoRegister()
	{
		return USoundConcurrencyFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundConcurrencyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundConcurrencyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundConcurrencyFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundConcurrencyFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundConcurrencyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundConcurrencyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundConcurrencyFactory_Statics::ClassParams = {
		&USoundConcurrencyFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundConcurrencyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundConcurrencyFactory()
	{
		if (!Z_Registration_Info_UClass_USoundConcurrencyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundConcurrencyFactory.OuterSingleton, Z_Construct_UClass_USoundConcurrencyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundConcurrencyFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundConcurrencyFactory>()
	{
		return USoundConcurrencyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundConcurrencyFactory);
	USoundConcurrencyFactory::~USoundConcurrencyFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundConcurrencyFactory, USoundConcurrencyFactory::StaticClass, TEXT("USoundConcurrencyFactory"), &Z_Registration_Info_UClass_USoundConcurrencyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundConcurrencyFactory), 2783983965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_3568075163(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundConcurrencyFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
