// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/SoundClassFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClassFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundClassFactory::StaticRegisterNativesUSoundClassFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundClassFactory);
	UClass* Z_Construct_UClass_USoundClassFactory_NoRegister()
	{
		return USoundClassFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundClassFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClassFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SoundClassFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SoundClassFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClassFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClassFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundClassFactory_Statics::ClassParams = {
		&USoundClassFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundClassFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClassFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClassFactory()
	{
		if (!Z_Registration_Info_UClass_USoundClassFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundClassFactory.OuterSingleton, Z_Construct_UClass_USoundClassFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundClassFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundClassFactory>()
	{
		return USoundClassFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClassFactory);
	USoundClassFactory::~USoundClassFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundClassFactory, USoundClassFactory::StaticClass, TEXT("USoundClassFactory"), &Z_Registration_Info_UClass_USoundClassFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundClassFactory), 3197792887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_2342995656(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_SoundClassFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
