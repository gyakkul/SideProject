// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/AudioBusFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioBusFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioBusFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioBusFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAudioBusFactory::StaticRegisterNativesUAudioBusFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioBusFactory);
	UClass* Z_Construct_UClass_UAudioBusFactory_NoRegister()
	{
		return UAudioBusFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAudioBusFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioBusFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioBusFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AudioBusFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AudioBusFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioBusFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioBusFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioBusFactory_Statics::ClassParams = {
		&UAudioBusFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioBusFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioBusFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioBusFactory()
	{
		if (!Z_Registration_Info_UClass_UAudioBusFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioBusFactory.OuterSingleton, Z_Construct_UClass_UAudioBusFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioBusFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAudioBusFactory>()
	{
		return UAudioBusFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioBusFactory);
	UAudioBusFactory::~UAudioBusFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioBusFactory, UAudioBusFactory::StaticClass, TEXT("UAudioBusFactory"), &Z_Registration_Info_UClass_UAudioBusFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioBusFactory), 3062307306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_1732252470(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_AudioBusFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
