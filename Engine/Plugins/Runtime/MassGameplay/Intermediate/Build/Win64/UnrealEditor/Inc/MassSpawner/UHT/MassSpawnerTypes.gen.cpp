// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSpawnerTypes.h"
#include "MassEntityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpawnerTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnDataGenerator();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnedEntityType();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassTransformsSpawnData();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicationTemplateIDFragment();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTransformsSpawnData;
class UScriptStruct* FMassTransformsSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTransformsSpawnData, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassTransformsSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassTransformsSpawnData>()
{
	return FMassTransformsSpawnData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTransformsSpawnData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassTransformsSpawnData",
		sizeof(FMassTransformsSpawnData),
		alignof(FMassTransformsSpawnData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassTransformsSpawnData()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTransformsSpawnData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSpawnedEntityType;
class UScriptStruct* FMassSpawnedEntityType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSpawnedEntityType, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassSpawnedEntityType"));
	}
	return Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassSpawnedEntityType>()
{
	return FMassSpawnedEntityType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfig_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EntityConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proportion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Proportion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityConfigPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntityConfigPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Describes an entity type to spawn.\n */" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
		{ "ToolTip", "Describes an entity type to spawn." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSpawnedEntityType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfig_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "Comment", "/** Asset that describes the entity */" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
		{ "ToolTip", "Asset that describes the entity" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfig = { "EntityConfig", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnedEntityType, EntityConfig), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_Proportion_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Proportion of the count that should be this agent type, (the proportions will be normalized with other sibling agent types) */" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
		{ "ToolTip", "Proportion of the count that should be this agent type, (the proportions will be normalized with other sibling agent types)" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_Proportion = { "Proportion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnedEntityType, Proportion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_Proportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_Proportion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfigPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfigPtr = { "EntityConfigPtr", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnedEntityType, EntityConfigPtr), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfigPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfigPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_Proportion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewProp_EntityConfigPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassSpawnedEntityType",
		sizeof(FMassSpawnedEntityType),
		alignof(FMassSpawnedEntityType),
		Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnedEntityType()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.InnerSingleton, Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSpawnedEntityType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator;
class UScriptStruct* FMassSpawnDataGenerator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSpawnDataGenerator, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassSpawnDataGenerator"));
	}
	return Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassSpawnDataGenerator>()
{
	return FMassSpawnDataGenerator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GeneratorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratorInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proportion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Proportion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSpawnDataGenerator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorClass_MetaData[] = {
		{ "Comment", "/** The Generator to use to generate the spawn the points */" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
		{ "ToolTip", "The Generator to use to generate the spawn the points" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorClass = { "GeneratorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnDataGenerator, GeneratorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorInstance_MetaData[] = {
		{ "Category", "Mass|Generator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorInstance = { "GeneratorInstance", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnDataGenerator, GeneratorInstance), Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_Proportion_MetaData[] = {
		{ "Category", "Mass|Generator" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Proportion of the spawn points that should be generated by this generator, (the proportions will be normalized with other sibling generators) */" },
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
		{ "ToolTip", "Proportion of the spawn points that should be generated by this generator, (the proportions will be normalized with other sibling generators)" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_Proportion = { "Proportion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSpawnDataGenerator, Proportion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_Proportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_Proportion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_GeneratorInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewProp_Proportion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassSpawnDataGenerator",
		sizeof(FMassSpawnDataGenerator),
		alignof(FMassSpawnDataGenerator),
		Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnDataGenerator()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.InnerSingleton, Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator.InnerSingleton;
	}

static_assert(std::is_polymorphic<FReplicationTemplateIDFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FReplicationTemplateIDFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment;
class UScriptStruct* FReplicationTemplateIDFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("ReplicationTemplateIDFragment"));
	}
	return Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FReplicationTemplateIDFragment>()
{
	return FReplicationTemplateIDFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicationTemplateIDFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSpawnerTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReplicationTemplateIDFragment, ID), Z_Construct_UScriptStruct_FMassEntityTemplateID, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewProp_ID_MetaData)) }; // 1781446094
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"ReplicationTemplateIDFragment",
		sizeof(FReplicationTemplateIDFragment),
		alignof(FReplicationTemplateIDFragment),
		Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicationTemplateIDFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.InnerSingleton, Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassTransformsSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTransformsSpawnData_Statics::NewStructOps, TEXT("MassTransformsSpawnData"), &Z_Registration_Info_UScriptStruct_MassTransformsSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTransformsSpawnData), 1320280673U) },
		{ FMassSpawnedEntityType::StaticStruct, Z_Construct_UScriptStruct_FMassSpawnedEntityType_Statics::NewStructOps, TEXT("MassSpawnedEntityType"), &Z_Registration_Info_UScriptStruct_MassSpawnedEntityType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSpawnedEntityType), 2151562758U) },
		{ FMassSpawnDataGenerator::StaticStruct, Z_Construct_UScriptStruct_FMassSpawnDataGenerator_Statics::NewStructOps, TEXT("MassSpawnDataGenerator"), &Z_Registration_Info_UScriptStruct_MassSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSpawnDataGenerator), 3082907481U) },
		{ FReplicationTemplateIDFragment::StaticStruct, Z_Construct_UScriptStruct_FReplicationTemplateIDFragment_Statics::NewStructOps, TEXT("ReplicationTemplateIDFragment"), &Z_Registration_Info_UScriptStruct_ReplicationTemplateIDFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReplicationTemplateIDFragment), 3405560587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerTypes_h_1861582394(TEXT("/Script/MassSpawner"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawnerTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
