// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/HapticFeedbackEffectSoundWaveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffectSoundWaveFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UHapticFeedbackEffectSoundWaveFactory::StaticRegisterNativesUHapticFeedbackEffectSoundWaveFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffectSoundWaveFactory);
	UClass* Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_NoRegister()
	{
		return UHapticFeedbackEffectSoundWaveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/HapticFeedbackEffectSoundWaveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/HapticFeedbackEffectSoundWaveFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffectSoundWaveFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::ClassParams = {
		&UHapticFeedbackEffectSoundWaveFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory()
	{
		if (!Z_Registration_Info_UClass_UHapticFeedbackEffectSoundWaveFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffectSoundWaveFactory.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHapticFeedbackEffectSoundWaveFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UHapticFeedbackEffectSoundWaveFactory>()
	{
		return UHapticFeedbackEffectSoundWaveFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffectSoundWaveFactory);
	UHapticFeedbackEffectSoundWaveFactory::~UHapticFeedbackEffectSoundWaveFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectSoundWaveFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectSoundWaveFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffectSoundWaveFactory, UHapticFeedbackEffectSoundWaveFactory::StaticClass, TEXT("UHapticFeedbackEffectSoundWaveFactory"), &Z_Registration_Info_UClass_UHapticFeedbackEffectSoundWaveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffectSoundWaveFactory), 2644526902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectSoundWaveFactory_h_3051693090(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectSoundWaveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_HapticFeedbackEffectSoundWaveFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
