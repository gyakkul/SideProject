// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ReimportSoundFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportSoundFactory() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundFactory();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UReimportSoundFactory_NoRegister();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundFactory();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UReimportSoundFactory::StaticRegisterNativesUReimportSoundFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportSoundFactory);
	UClass* Z_Construct_UClass_UReimportSoundFactory_NoRegister()
	{
		return UReimportSoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportSoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportSoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ReimportSoundFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/ReimportSoundFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportSoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSoundFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportSoundFactory_Statics::ClassParams = {
		&UReimportSoundFactory::StaticClass,
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
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportSoundFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportSoundFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportSoundFactory.OuterSingleton, Z_Construct_UClass_UReimportSoundFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportSoundFactory.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UReimportSoundFactory>()
	{
		return UReimportSoundFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSoundFactory);
	UReimportSoundFactory::~UReimportSoundFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportSoundFactory, UReimportSoundFactory::StaticClass, TEXT("UReimportSoundFactory"), &Z_Registration_Info_UClass_UReimportSoundFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportSoundFactory), 1351869706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_3484281977(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_Factories_ReimportSoundFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
