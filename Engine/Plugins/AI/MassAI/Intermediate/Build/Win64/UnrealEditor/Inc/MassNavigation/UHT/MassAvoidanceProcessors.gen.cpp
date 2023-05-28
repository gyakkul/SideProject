// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Avoidance/MassAvoidanceProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAvoidanceProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassMovingAvoidanceProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassMovingAvoidanceProcessor_NoRegister();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassStandingAvoidanceProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassStandingAvoidanceProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassMovingAvoidanceProcessor::StaticRegisterNativesUMassMovingAvoidanceProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassMovingAvoidanceProcessor);
	UClass* Z_Construct_UClass_UMassMovingAvoidanceProcessor_NoRegister()
	{
		return UMassMovingAvoidanceProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Experimental: move using cumulative forces to avoid close agents */" },
		{ "IncludePath", "Avoidance/MassAvoidanceProcessors.h" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceProcessors.h" },
		{ "ToolTip", "Experimental: move using cumulative forces to avoid close agents" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassMovingAvoidanceProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::ClassParams = {
		&UMassMovingAvoidanceProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassMovingAvoidanceProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassMovingAvoidanceProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassMovingAvoidanceProcessor.OuterSingleton, Z_Construct_UClass_UMassMovingAvoidanceProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassMovingAvoidanceProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassMovingAvoidanceProcessor>()
	{
		return UMassMovingAvoidanceProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassMovingAvoidanceProcessor);
	UMassMovingAvoidanceProcessor::~UMassMovingAvoidanceProcessor() {}
	void UMassStandingAvoidanceProcessor::StaticRegisterNativesUMassStandingAvoidanceProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStandingAvoidanceProcessor);
	UClass* Z_Construct_UClass_UMassStandingAvoidanceProcessor_NoRegister()
	{
		return UMassStandingAvoidanceProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Avoidance while standing. */" },
		{ "IncludePath", "Avoidance/MassAvoidanceProcessors.h" },
		{ "ModuleRelativePath", "Public/Avoidance/MassAvoidanceProcessors.h" },
		{ "ToolTip", "Avoidance while standing." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStandingAvoidanceProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::ClassParams = {
		&UMassStandingAvoidanceProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStandingAvoidanceProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassStandingAvoidanceProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStandingAvoidanceProcessor.OuterSingleton, Z_Construct_UClass_UMassStandingAvoidanceProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStandingAvoidanceProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassStandingAvoidanceProcessor>()
	{
		return UMassStandingAvoidanceProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStandingAvoidanceProcessor);
	UMassStandingAvoidanceProcessor::~UMassStandingAvoidanceProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassMovingAvoidanceProcessor, UMassMovingAvoidanceProcessor::StaticClass, TEXT("UMassMovingAvoidanceProcessor"), &Z_Registration_Info_UClass_UMassMovingAvoidanceProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassMovingAvoidanceProcessor), 1010852956U) },
		{ Z_Construct_UClass_UMassStandingAvoidanceProcessor, UMassStandingAvoidanceProcessor::StaticClass, TEXT("UMassStandingAvoidanceProcessor"), &Z_Registration_Info_UClass_UMassStandingAvoidanceProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStandingAvoidanceProcessor), 731757835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceProcessors_h_355060255(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Avoidance_MassAvoidanceProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
