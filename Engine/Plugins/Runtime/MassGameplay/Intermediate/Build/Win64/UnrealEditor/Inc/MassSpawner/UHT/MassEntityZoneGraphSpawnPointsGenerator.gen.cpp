// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityZoneGraphSpawnPointsGenerator.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityZoneGraphSpawnPointsGenerator() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// End Cross Module References
	void UMassEntityZoneGraphSpawnPointsGenerator::StaticRegisterNativesUMassEntityZoneGraphSpawnPointsGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntityZoneGraphSpawnPointsGenerator);
	UClass* Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_NoRegister()
	{
		return UMassEntityZoneGraphSpawnPointsGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes the SpawnPoints Generator when we want to spawn directly on Zone Graph\n */" },
		{ "DisplayName", "ZoneGraph SpawnPoints Generator" },
		{ "IncludePath", "MassEntityZoneGraphSpawnPointsGenerator.h" },
		{ "ModuleRelativePath", "Public/MassEntityZoneGraphSpawnPointsGenerator.h" },
		{ "ToolTip", "Describes the SpawnPoints Generator when we want to spawn directly on Zone Graph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_TagFilter_MetaData[] = {
		{ "Category", "ZoneGraph Generator Config" },
		{ "Comment", "/** Tags to filter which lane to use to generate points on */" },
		{ "ModuleRelativePath", "Public/MassEntityZoneGraphSpawnPointsGenerator.h" },
		{ "ToolTip", "Tags to filter which lane to use to generate points on" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_TagFilter = { "TagFilter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntityZoneGraphSpawnPointsGenerator, TagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_TagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_TagFilter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MinGap_MetaData[] = {
		{ "Category", "ZoneGraph Generator Config" },
		{ "Comment", "/** Minimum gap for spawning entities on a given lanes */" },
		{ "ModuleRelativePath", "Public/MassEntityZoneGraphSpawnPointsGenerator.h" },
		{ "ToolTip", "Minimum gap for spawning entities on a given lanes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MinGap = { "MinGap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntityZoneGraphSpawnPointsGenerator, MinGap), METADATA_PARAMS(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MinGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MinGap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MaxGap_MetaData[] = {
		{ "Category", "ZoneGraph Generator Config" },
		{ "Comment", "/** Minimum gap for spawning entities on a given lanes */" },
		{ "ModuleRelativePath", "Public/MassEntityZoneGraphSpawnPointsGenerator.h" },
		{ "ToolTip", "Minimum gap for spawning entities on a given lanes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MaxGap = { "MaxGap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassEntityZoneGraphSpawnPointsGenerator, MaxGap), METADATA_PARAMS(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MaxGap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MaxGap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_TagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MinGap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::NewProp_MaxGap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntityZoneGraphSpawnPointsGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::ClassParams = {
		&UMassEntityZoneGraphSpawnPointsGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator()
	{
		if (!Z_Registration_Info_UClass_UMassEntityZoneGraphSpawnPointsGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntityZoneGraphSpawnPointsGenerator.OuterSingleton, Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntityZoneGraphSpawnPointsGenerator.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassEntityZoneGraphSpawnPointsGenerator>()
	{
		return UMassEntityZoneGraphSpawnPointsGenerator::StaticClass();
	}
	UMassEntityZoneGraphSpawnPointsGenerator::UMassEntityZoneGraphSpawnPointsGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntityZoneGraphSpawnPointsGenerator);
	UMassEntityZoneGraphSpawnPointsGenerator::~UMassEntityZoneGraphSpawnPointsGenerator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntityZoneGraphSpawnPointsGenerator, UMassEntityZoneGraphSpawnPointsGenerator::StaticClass, TEXT("UMassEntityZoneGraphSpawnPointsGenerator"), &Z_Registration_Info_UClass_UMassEntityZoneGraphSpawnPointsGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntityZoneGraphSpawnPointsGenerator), 1307304489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_1203642624(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityZoneGraphSpawnPointsGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
