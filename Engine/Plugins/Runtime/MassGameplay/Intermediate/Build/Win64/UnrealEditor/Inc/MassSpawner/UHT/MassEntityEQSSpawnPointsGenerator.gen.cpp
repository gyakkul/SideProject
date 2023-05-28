// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityEQSSpawnPointsGenerator.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityEQSSpawnPointsGenerator() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UMassEntityEQSSpawnPointsGenerator::StaticRegisterNativesUMassEntityEQSSpawnPointsGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntityEQSSpawnPointsGenerator);
	UClass* Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_NoRegister()
	{
		return UMassEntityEQSSpawnPointsGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the SpawnPoints Generator when we want to leverage the points given by an EQS Query\n */" },
		{ "DisplayName", "EQS SpawnPoints Generator" },
		{ "IncludePath", "MassEntityEQSSpawnPointsGenerator.h" },
		{ "ModuleRelativePath", "Public/MassEntityEQSSpawnPointsGenerator.h" },
		{ "ToolTip", "Describes the SpawnPoints Generator when we want to leverage the points given by an EQS Query" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::NewProp_EQSRequest_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Public/MassEntityEQSSpawnPointsGenerator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::NewProp_EQSRequest = { "EQSRequest", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntityEQSSpawnPointsGenerator, EQSRequest), Z_Construct_UScriptStruct_FEQSParametrizedQueryExecutionRequest, METADATA_PARAMS(Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::NewProp_EQSRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::NewProp_EQSRequest_MetaData)) }; // 104046496
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::NewProp_EQSRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntityEQSSpawnPointsGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::ClassParams = {
		&UMassEntityEQSSpawnPointsGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator()
	{
		if (!Z_Registration_Info_UClass_UMassEntityEQSSpawnPointsGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntityEQSSpawnPointsGenerator.OuterSingleton, Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntityEQSSpawnPointsGenerator.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassEntityEQSSpawnPointsGenerator>()
	{
		return UMassEntityEQSSpawnPointsGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntityEQSSpawnPointsGenerator);
	UMassEntityEQSSpawnPointsGenerator::~UMassEntityEQSSpawnPointsGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityEQSSpawnPointsGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityEQSSpawnPointsGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntityEQSSpawnPointsGenerator, UMassEntityEQSSpawnPointsGenerator::StaticClass, TEXT("UMassEntityEQSSpawnPointsGenerator"), &Z_Registration_Info_UClass_UMassEntityEQSSpawnPointsGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntityEQSSpawnPointsGenerator), 250154020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityEQSSpawnPointsGenerator_h_1855729372(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityEQSSpawnPointsGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityEQSSpawnPointsGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
