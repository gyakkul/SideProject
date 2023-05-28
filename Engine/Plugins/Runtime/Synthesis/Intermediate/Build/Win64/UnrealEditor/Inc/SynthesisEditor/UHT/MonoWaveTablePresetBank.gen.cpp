// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonoWaveTablePresetBank.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonoWaveTablePresetBank() {}
// Cross Module References
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_UMonoWaveTableSynthPresetFactory();
	SYNTHESISEDITOR_API UClass* Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SynthesisEditor();
// End Cross Module References
	void UMonoWaveTableSynthPresetFactory::StaticRegisterNativesUMonoWaveTableSynthPresetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonoWaveTableSynthPresetFactory);
	UClass* Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_NoRegister()
	{
		return UMonoWaveTableSynthPresetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SynthesisEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MonoWaveTablePresetBank.h" },
		{ "ModuleRelativePath", "Classes/MonoWaveTablePresetBank.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonoWaveTableSynthPresetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::ClassParams = {
		&UMonoWaveTableSynthPresetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonoWaveTableSynthPresetFactory()
	{
		if (!Z_Registration_Info_UClass_UMonoWaveTableSynthPresetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonoWaveTableSynthPresetFactory.OuterSingleton, Z_Construct_UClass_UMonoWaveTableSynthPresetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMonoWaveTableSynthPresetFactory.OuterSingleton;
	}
	template<> SYNTHESISEDITOR_API UClass* StaticClass<UMonoWaveTableSynthPresetFactory>()
	{
		return UMonoWaveTableSynthPresetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonoWaveTableSynthPresetFactory);
	UMonoWaveTableSynthPresetFactory::~UMonoWaveTableSynthPresetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_MonoWaveTablePresetBank_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_MonoWaveTablePresetBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMonoWaveTableSynthPresetFactory, UMonoWaveTableSynthPresetFactory::StaticClass, TEXT("UMonoWaveTableSynthPresetFactory"), &Z_Registration_Info_UClass_UMonoWaveTableSynthPresetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonoWaveTableSynthPresetFactory), 838779211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_MonoWaveTablePresetBank_h_3704695186(TEXT("/Script/SynthesisEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_MonoWaveTablePresetBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_SynthesisEditor_Classes_MonoWaveTablePresetBank_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
