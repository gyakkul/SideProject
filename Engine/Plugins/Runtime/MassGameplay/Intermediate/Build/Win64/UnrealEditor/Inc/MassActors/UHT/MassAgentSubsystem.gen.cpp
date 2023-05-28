// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassAgentSubsystem.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassCommon/Public/MassCommonTypes.h"
#include "MassEntityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAgentSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSubsystem();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSubsystem_NoRegister();
	MASSACTORS_API UScriptStruct* Z_Construct_UScriptStruct_FMassAgentInitializationQueue();
	MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FMassNetworkID();
	MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicationSubsystem_NoRegister();
	MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSubsystem_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue;
class UScriptStruct* FMassAgentInitializationQueue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassAgentInitializationQueue, (UObject*)Z_Construct_UPackage__Script_MassActors(), TEXT("MassAgentInitializationQueue"));
	}
	return Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.OuterSingleton;
}
template<> MASSACTORS_API UScriptStruct* StaticStruct<FMassAgentInitializationQueue>()
{
	return FMassAgentInitializationQueue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AgentComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AgentComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AgentComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// UE::MassActor\n" },
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
		{ "ToolTip", "UE::MassActor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassAgentInitializationQueue>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents_Inner = { "AgentComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassAgentComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents = { "AgentComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassAgentInitializationQueue, AgentComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewProp_AgentComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
		nullptr,
		&NewStructOps,
		"MassAgentInitializationQueue",
		sizeof(FMassAgentInitializationQueue),
		alignof(FMassAgentInitializationQueue),
		Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassAgentInitializationQueue()
	{
		if (!Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.InnerSingleton, Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue.InnerSingleton;
	}
	void UMassAgentSubsystem::StaticRegisterNativesUMassAgentSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAgentSubsystem);
	UClass* Z_Construct_UClass_UMassAgentSubsystem_NoRegister()
	{
		return UMassAgentSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassAgentSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnerSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnerSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulationSystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAgentEntities_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingAgentEntities_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingAgentEntities_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PendingAgentEntities;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingPuppets_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingPuppets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingPuppets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PendingPuppets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicationSubsystem;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicatedAgentComponents_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedAgentComponents_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedAgentComponents_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReplicatedAgentComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAgentSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem managing communication between Actors and Mass\n */" },
		{ "IncludePath", "MassAgentSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
		{ "ToolTip", "A subsystem managing communication between Actors and Mass" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SpawnerSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SpawnerSystem = { "SpawnerSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, SpawnerSystem), Z_Construct_UClass_UMassSpawnerSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SpawnerSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SpawnerSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SimulationSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SimulationSystem = { "SimulationSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, SimulationSystem), Z_Construct_UClass_UMassSimulationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SimulationSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SimulationSystem_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_ValueProp = { "PendingAgentEntities", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassAgentInitializationQueue, METADATA_PARAMS(nullptr, 0) }; // 608307502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_Key_KeyProp = { "PendingAgentEntities_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassEntityTemplateID, METADATA_PARAMS(nullptr, 0) }; // 1781446094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities = { "PendingAgentEntities", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, PendingAgentEntities), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_MetaData)) }; // 1781446094 608307502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_ValueProp = { "PendingPuppets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassAgentInitializationQueue, METADATA_PARAMS(nullptr, 0) }; // 608307502
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_Key_KeyProp = { "PendingPuppets_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassEntityTemplateID, METADATA_PARAMS(nullptr, 0) }; // 1781446094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets = { "PendingPuppets", nullptr, (EPropertyFlags)0x0020088000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, PendingPuppets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_MetaData)) }; // 1781446094 608307502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicationSubsystem = { "ReplicationSubsystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, ReplicationSubsystem), Z_Construct_UClass_UMassReplicationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicationSubsystem_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_ValueProp = { "ReplicatedAgentComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMassAgentComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_Key_KeyProp = { "ReplicatedAgentComponents_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassNetworkID, METADATA_PARAMS(nullptr, 0) }; // 4144379630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassAgentSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents = { "ReplicatedAgentComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAgentSubsystem, ReplicatedAgentComponents), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_MetaData)) }; // 4144379630
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassAgentSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SpawnerSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_SimulationSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingAgentEntities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_PendingPuppets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicationSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAgentSubsystem_Statics::NewProp_ReplicatedAgentComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAgentSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAgentSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAgentSubsystem_Statics::ClassParams = {
		&UMassAgentSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassAgentSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAgentSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAgentSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAgentSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassAgentSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAgentSubsystem.OuterSingleton, Z_Construct_UClass_UMassAgentSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAgentSubsystem.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassAgentSubsystem>()
	{
		return UMassAgentSubsystem::StaticClass();
	}
	UMassAgentSubsystem::UMassAgentSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAgentSubsystem);
	UMassAgentSubsystem::~UMassAgentSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassAgentInitializationQueue::StaticStruct, Z_Construct_UScriptStruct_FMassAgentInitializationQueue_Statics::NewStructOps, TEXT("MassAgentInitializationQueue"), &Z_Registration_Info_UScriptStruct_MassAgentInitializationQueue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassAgentInitializationQueue), 608307502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassAgentSubsystem, UMassAgentSubsystem::StaticClass, TEXT("UMassAgentSubsystem"), &Z_Registration_Info_UClass_UMassAgentSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAgentSubsystem), 2001276750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_3925330035(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassAgentSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
