// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntitySpawnDataGeneratorBase.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntitySpawnDataGeneratorBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult;
class UScriptStruct* FMassEntitySpawnDataGeneratorResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntitySpawnDataGeneratorResult"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntitySpawnDataGeneratorResult>()
{
	return FMassEntitySpawnDataGeneratorResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDataProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnDataProcessor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_PostSpawnProcessors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostSpawnProcessors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostSpawnProcessors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfigIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntityConfigIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumEntities_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumEntities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The result of the spawn point generator.\n */" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "The result of the spawn point generator." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntitySpawnDataGeneratorResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnData_MetaData[] = {
		{ "Comment", "// Spawn data that is passed to the InitSpawnDataProcessor. E.g. the data could contain array of locations, one for each entity.\n" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Spawn data that is passed to the InitSpawnDataProcessor. E.g. the data could contain array of locations, one for each entity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntitySpawnDataGeneratorResult, SpawnData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnData_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnDataProcessor_MetaData[] = {
		{ "Comment", "// Processor that understands how to apply SpawnData to the spawned entities. \n" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Processor that understands how to apply SpawnData to the spawned entities." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnDataProcessor = { "SpawnDataProcessor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntitySpawnDataGeneratorResult, SpawnDataProcessor), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnDataProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnDataProcessor_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors_Inner = { "PostSpawnProcessors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors_MetaData[] = {
		{ "Comment", "// Processors that are run for all entities after they entities for a MassSpawner are initialized.\n" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Processors that are run for all entities after they entities for a MassSpawner are initialized." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors = { "PostSpawnProcessors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntitySpawnDataGeneratorResult, PostSpawnProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_EntityConfigIndex_MetaData[] = {
		{ "Comment", "// Index in the EntityTypes array passed to Generate().\n" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Index in the EntityTypes array passed to Generate()." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_EntityConfigIndex = { "EntityConfigIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntitySpawnDataGeneratorResult, EntityConfigIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_EntityConfigIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_EntityConfigIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_NumEntities_MetaData[] = {
		{ "Comment", "// Number of entities to spawn.\n" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Number of entities to spawn." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_NumEntities = { "NumEntities", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntitySpawnDataGeneratorResult, NumEntities), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_NumEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_NumEntities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_SpawnDataProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_PostSpawnProcessors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_EntityConfigIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewProp_NumEntities,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntitySpawnDataGeneratorResult",
		sizeof(FMassEntitySpawnDataGeneratorResult),
		alignof(FMassEntitySpawnDataGeneratorResult),
		Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.InnerSingleton, Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult.InnerSingleton;
	}
	void UMassEntitySpawnDataGeneratorBase::StaticRegisterNativesUMassEntitySpawnDataGeneratorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntitySpawnDataGeneratorBase);
	UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister()
	{
		return UMassEntitySpawnDataGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for Mass Entity Spawn Points Generator.\n * A Mass Spawn Points Generator can be of several type (EQS, ZoneGraph, Volume, Area, etc.)\n * The concept is to override the GenerateSpawnPoints() method and requesting a certain number of Spawn Point Locations to the method.\n */" },
		{ "IncludePath", "MassEntitySpawnDataGeneratorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassEntitySpawnDataGeneratorBase.h" },
		{ "ToolTip", "Base class for Mass Entity Spawn Points Generator.\nA Mass Spawn Points Generator can be of several type (EQS, ZoneGraph, Volume, Area, etc.)\nThe concept is to override the GenerateSpawnPoints() method and requesting a certain number of Spawn Point Locations to the method." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntitySpawnDataGeneratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::ClassParams = {
		&UMassEntitySpawnDataGeneratorBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase()
	{
		if (!Z_Registration_Info_UClass_UMassEntitySpawnDataGeneratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntitySpawnDataGeneratorBase.OuterSingleton, Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntitySpawnDataGeneratorBase.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassEntitySpawnDataGeneratorBase>()
	{
		return UMassEntitySpawnDataGeneratorBase::StaticClass();
	}
	UMassEntitySpawnDataGeneratorBase::UMassEntitySpawnDataGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntitySpawnDataGeneratorBase);
	UMassEntitySpawnDataGeneratorBase::~UMassEntitySpawnDataGeneratorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ScriptStructInfo[] = {
		{ FMassEntitySpawnDataGeneratorResult::StaticStruct, Z_Construct_UScriptStruct_FMassEntitySpawnDataGeneratorResult_Statics::NewStructOps, TEXT("MassEntitySpawnDataGeneratorResult"), &Z_Registration_Info_UScriptStruct_MassEntitySpawnDataGeneratorResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntitySpawnDataGeneratorResult), 487366700U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase, UMassEntitySpawnDataGeneratorBase::StaticClass, TEXT("UMassEntitySpawnDataGeneratorBase"), &Z_Registration_Info_UClass_UMassEntitySpawnDataGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntitySpawnDataGeneratorBase), 3132756611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_3117164521(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntitySpawnDataGeneratorBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
