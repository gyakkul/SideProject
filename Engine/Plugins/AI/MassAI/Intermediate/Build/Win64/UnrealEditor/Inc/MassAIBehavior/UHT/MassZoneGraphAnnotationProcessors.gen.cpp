// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassZoneGraphAnnotationProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphAnnotationProcessors() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_NoRegister();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassZoneGraphAnnotationTagsInitializer::StaticRegisterNativesUMassZoneGraphAnnotationTagsInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphAnnotationTagsInitializer);
	UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_NoRegister()
	{
		return UMassZoneGraphAnnotationTagsInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor for initializing ZoneGraph annotation tags.\n */" },
		{ "IncludePath", "MassZoneGraphAnnotationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphAnnotationProcessors.h" },
		{ "ToolTip", "Processor for initializing ZoneGraph annotation tags." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphAnnotationTagsInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::ClassParams = {
		&UMassZoneGraphAnnotationTagsInitializer::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagsInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagsInitializer.OuterSingleton, Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagsInitializer.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassZoneGraphAnnotationTagsInitializer>()
	{
		return UMassZoneGraphAnnotationTagsInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphAnnotationTagsInitializer);
	UMassZoneGraphAnnotationTagsInitializer::~UMassZoneGraphAnnotationTagsInitializer() {}
	void UMassZoneGraphAnnotationTagUpdateProcessor::StaticRegisterNativesUMassZoneGraphAnnotationTagUpdateProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphAnnotationTagUpdateProcessor);
	UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_NoRegister()
	{
		return UMassZoneGraphAnnotationTagUpdateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassSignalProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor for update ZoneGraph annotation tags periodically and on lane changed signal.\n */" },
		{ "IncludePath", "MassZoneGraphAnnotationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphAnnotationProcessors.h" },
		{ "ToolTip", "Processor for update ZoneGraph annotation tags periodically and on lane changed signal." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphAnnotationTagUpdateProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::ClassParams = {
		&UMassZoneGraphAnnotationTagUpdateProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagUpdateProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagUpdateProcessor.OuterSingleton, Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagUpdateProcessor.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassZoneGraphAnnotationTagUpdateProcessor>()
	{
		return UMassZoneGraphAnnotationTagUpdateProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphAnnotationTagUpdateProcessor);
	UMassZoneGraphAnnotationTagUpdateProcessor::~UMassZoneGraphAnnotationTagUpdateProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassZoneGraphAnnotationTagsInitializer, UMassZoneGraphAnnotationTagsInitializer::StaticClass, TEXT("UMassZoneGraphAnnotationTagsInitializer"), &Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagsInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphAnnotationTagsInitializer), 2091797273U) },
		{ Z_Construct_UClass_UMassZoneGraphAnnotationTagUpdateProcessor, UMassZoneGraphAnnotationTagUpdateProcessor::StaticClass, TEXT("UMassZoneGraphAnnotationTagUpdateProcessor"), &Z_Registration_Info_UClass_UMassZoneGraphAnnotationTagUpdateProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphAnnotationTagUpdateProcessor), 3217717379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationProcessors_h_2652673626(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassZoneGraphAnnotationProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
