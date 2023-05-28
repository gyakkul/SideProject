// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioImpulseResponseAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioImpulseResponseAsset() {}
// Cross Module References
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_UAudioImpulseResponseFactory();
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_UAudioImpulseResponseFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SynthesisEditor();
// End Cross Module References
	void UAudioImpulseResponseFactory::StaticRegisterNativesUAudioImpulseResponseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioImpulseResponseFactory);
	UClass* Z_Construct_UClass_UAudioImpulseResponseFactory_NoRegister()
	{
		return UAudioImpulseResponseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAudioImpulseResponseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SynthesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AudioImpulseResponseAsset.h" },
		{ "ModuleRelativePath", "Classes/AudioImpulseResponseAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioImpulseResponseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::ClassParams = {
		&UAudioImpulseResponseFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioImpulseResponseFactory()
	{
		if (!Z_Registration_Info_UClass_UAudioImpulseResponseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioImpulseResponseFactory.OuterSingleton, Z_Construct_UClass_UAudioImpulseResponseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioImpulseResponseFactory.OuterSingleton;
	}
	template<> SYNTHESISEDITOR_API UClass* StaticClass<UAudioImpulseResponseFactory>()
	{
		return UAudioImpulseResponseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioImpulseResponseFactory);
	UAudioImpulseResponseFactory::~UAudioImpulseResponseFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioImpulseResponseFactory, UAudioImpulseResponseFactory::StaticClass, TEXT("UAudioImpulseResponseFactory"), &Z_Registration_Info_UClass_UAudioImpulseResponseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioImpulseResponseFactory), 3703891268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_2988674886(TEXT("/Script/SynthesisEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_AudioImpulseResponseAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
