// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundSourceBusFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSourceBusFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceBusFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSourceBusFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSourceBusFactory::StaticRegisterNativesUSoundSourceBusFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSourceBusFactory);
	UClass* Z_Construct_UClass_USoundSourceBusFactory_NoRegister()
	{
		return USoundSourceBusFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundSourceBusFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSourceBusFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSourceBusFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundSourceBusFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundSourceBusFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSourceBusFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSourceBusFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSourceBusFactory_Statics::ClassParams = {
		&USoundSourceBusFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSourceBusFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSourceBusFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSourceBusFactory()
	{
		if (!Z_Registration_Info_UClass_USoundSourceBusFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSourceBusFactory.OuterSingleton, Z_Construct_UClass_USoundSourceBusFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSourceBusFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSourceBusFactory>()
	{
		return USoundSourceBusFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSourceBusFactory);
	USoundSourceBusFactory::~USoundSourceBusFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSourceBusFactory, USoundSourceBusFactory::StaticClass, TEXT("USoundSourceBusFactory"), &Z_Registration_Info_UClass_USoundSourceBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSourceBusFactory), 3946836869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_2234282237(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundSourceBusFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
