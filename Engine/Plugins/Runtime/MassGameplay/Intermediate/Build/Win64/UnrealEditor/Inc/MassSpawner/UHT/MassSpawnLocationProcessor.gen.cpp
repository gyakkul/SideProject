// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSpawnLocationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpawnLocationProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnLocationProcessor();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnLocationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UMassSpawnLocationProcessor::StaticRegisterNativesUMassSpawnLocationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSpawnLocationProcessor);
	UClass* Z_Construct_UClass_UMassSpawnLocationProcessor_NoRegister()
	{
		return UMassSpawnLocationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSpawnLocationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassSpawnLocationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassSpawnLocationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSpawnLocationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::ClassParams = {
		&UMassSpawnLocationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSpawnLocationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSpawnLocationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSpawnLocationProcessor.OuterSingleton, Z_Construct_UClass_UMassSpawnLocationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSpawnLocationProcessor.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassSpawnLocationProcessor>()
	{
		return UMassSpawnLocationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSpawnLocationProcessor);
	UMassSpawnLocationProcessor::~UMassSpawnLocationProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSpawnLocationProcessor, UMassSpawnLocationProcessor::StaticClass, TEXT("UMassSpawnLocationProcessor"), &Z_Registration_Info_UClass_UMassSpawnLocationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSpawnLocationProcessor), 3738756283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_453520408(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnLocationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
