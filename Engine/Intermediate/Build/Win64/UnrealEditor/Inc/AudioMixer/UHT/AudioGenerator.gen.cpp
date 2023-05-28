// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/AudioGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioGenerator() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator();
	AUDIOMIXER_API UClass* Z_Construct_UClass_UAudioGenerator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	void UAudioGenerator::StaticRegisterNativesUAudioGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGenerator);
	UClass* Z_Construct_UClass_UAudioGenerator_NoRegister()
	{
		return UAudioGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Generators/AudioGenerator.h" },
		{ "ModuleRelativePath", "Classes/Generators/AudioGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGenerator_Statics::ClassParams = {
		&UAudioGenerator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGenerator()
	{
		if (!Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton, Z_Construct_UClass_UAudioGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGenerator.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<UAudioGenerator>()
	{
		return UAudioGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGenerator);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGenerator, UAudioGenerator::StaticClass, TEXT("UAudioGenerator"), &Z_Registration_Info_UClass_UAudioGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGenerator), 2097300284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_2219579262(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_Generators_AudioGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
