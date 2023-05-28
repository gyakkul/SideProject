// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SoundscapeColorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscapeColorFactory() {}
// Cross Module References
	SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapeColorFactory();
	SOUNDSCAPEEDITOR_API UClass* Z_Construct_UClass_USoundscapeColorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SoundscapeEditor();
// End Cross Module References
	void USoundscapeColorFactory::StaticRegisterNativesUSoundscapeColorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColorFactory);
	UClass* Z_Construct_UClass_USoundscapeColorFactory_NoRegister()
	{
		return USoundscapeColorFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundscapeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundscapeColorFactory.h" },
		{ "ModuleRelativePath", "Private/SoundscapeColorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColorFactory_Statics::ClassParams = {
		&USoundscapeColorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundscapeColorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapeColorFactory()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColorFactory.OuterSingleton, Z_Construct_UClass_USoundscapeColorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColorFactory.OuterSingleton;
	}
	template<> SOUNDSCAPEEDITOR_API UClass* StaticClass<USoundscapeColorFactory>()
	{
		return USoundscapeColorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColorFactory);
	USoundscapeColorFactory::~USoundscapeColorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeColorFactory, USoundscapeColorFactory::StaticClass, TEXT("USoundscapeColorFactory"), &Z_Registration_Info_UClass_USoundscapeColorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColorFactory), 48132102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_3242726700(TEXT("/Script/SoundscapeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScapeEditor_Private_SoundscapeColorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
