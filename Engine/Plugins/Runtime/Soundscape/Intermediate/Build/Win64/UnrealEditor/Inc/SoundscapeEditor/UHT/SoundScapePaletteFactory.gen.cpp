// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SoundScapePaletteFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundScapePaletteFactory() {}
// Cross Module References
	SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapePaletteFactory();
	SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapePaletteFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SoundscapeEditor();
// End Cross Module References
	void USoundscapePaletteFactory::StaticRegisterNativesUSoundscapePaletteFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapePaletteFactory);
	UClass* Z_Construct_UClass_USoundscapePaletteFactory_NoRegister()
	{
		return USoundscapePaletteFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapePaletteFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapePaletteFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundscapeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapePaletteFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundScapePaletteFactory.h" },
		{ "ModuleRelativePath", "Private/SoundScapePaletteFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapePaletteFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapePaletteFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapePaletteFactory_Statics::ClassParams = {
		&USoundscapePaletteFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundscapePaletteFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapePaletteFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapePaletteFactory()
	{
		if (!Z_Registration_Info_UClass_USoundscapePaletteFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapePaletteFactory.OuterSingleton, Z_Construct_UClass_USoundscapePaletteFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapePaletteFactory.OuterSingleton;
	}
	template<> SOUNDSCAPEEDITOR_API UClass* StaticClass<USoundscapePaletteFactory>()
	{
		return USoundscapePaletteFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapePaletteFactory);
	USoundscapePaletteFactory::~USoundscapePaletteFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapePaletteFactory, USoundscapePaletteFactory::StaticClass, TEXT("USoundscapePaletteFactory"), &Z_Registration_Info_UClass_USoundscapePaletteFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapePaletteFactory), 3224385188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_2427081590(TEXT("/Script/SoundscapeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundScapePaletteFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
