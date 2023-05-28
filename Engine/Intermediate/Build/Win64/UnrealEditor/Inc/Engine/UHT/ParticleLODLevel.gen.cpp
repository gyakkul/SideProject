// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleLODLevel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel();
	ENGINE_API UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrbit_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleLODLevel::StaticRegisterNativesUParticleLODLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleLODLevel);
	UClass* Z_Construct_UClass_UParticleLODLevel_NoRegister()
	{
		return UParticleLODLevel::StaticClass();
	}
	struct Z_Construct_UClass_UParticleLODLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RequiredModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeDataModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TypeDataModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventGenerator;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawningModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawningModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawningModules;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnModules;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UpdateModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdateModules;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OrbitModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OrbitModules;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EventReceiverModules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceiverModules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventReceiverModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConvertedModules_MetaData[];
#endif
		static void NewProp_ConvertedModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConvertedModules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakActiveParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PeakActiveParticles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleLODLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Particles/ParticleLODLevel.h" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData[] = {
		{ "Comment", "/** The index value of the LOD level\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The index value of the LOD level" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, Level), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** True if the LOD level is enabled, meaning it should be updated and rendered.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "True if the LOD level is enabled, meaning it should be updated and rendered." },
	};
#endif
	void Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UParticleLODLevel*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleLODLevel), &Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData[] = {
		{ "Comment", "/** The required module for this LOD level\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The required module for this LOD level" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule = { "RequiredModule", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, RequiredModule), Z_Construct_UClass_UParticleModuleRequired_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData[] = {
		{ "Comment", "/** An array of particle modules that contain the adjusted data for the LOD level\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData[] = {
		{ "Comment", "/** An array of particle modules that contain the adjusted data for the LOD level\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "An array of particle modules that contain the adjusted data for the LOD level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData[] = {
		{ "Comment", "// Module<SINGULAR> used for emitter type \"extension\".\n" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "Module<SINGULAR> used for emitter type \"extension\"." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule = { "TypeDataModule", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, TypeDataModule), Z_Construct_UClass_UParticleModuleTypeDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData[] = {
		{ "Comment", "/** The SpawnRate/Burst module - required by all emitters. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The SpawnRate/Burst module - required by all emitters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule = { "SpawnModule", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawnModule), Z_Construct_UClass_UParticleModuleSpawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData[] = {
		{ "Comment", "/** The optional EventGenerator module. */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "The optional EventGenerator module." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator = { "EventGenerator", nullptr, (EPropertyFlags)0x0014000000000008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, EventGenerator), Z_Construct_UClass_UParticleModuleEventGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_Inner = { "SpawningModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModuleSpawnBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData[] = {
		{ "Comment", "/** SpawningModules - These are called to determine how many particles to spawn.\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "SpawningModules - These are called to determine how many particles to spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules = { "SpawningModules", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawningModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_Inner = { "SpawnModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData[] = {
		{ "Comment", "/** SpawnModules - These are called when particles are spawned.\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "SpawnModules - These are called when particles are spawned." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules = { "SpawnModules", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, SpawnModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_Inner = { "UpdateModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData[] = {
		{ "Comment", "/** UpdateModules - These are called when particles are updated.\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "UpdateModules - These are called when particles are updated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules = { "UpdateModules", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, UpdateModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_Inner = { "OrbitModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModuleOrbit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData[] = {
		{ "Comment", "/** OrbitModules \n\x09 *\x09These are used to do offsets of the sprite from the particle location.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "OrbitModules\n    These are used to do offsets of the sprite from the particle location." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules = { "OrbitModules", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, OrbitModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_Inner = { "EventReceiverModules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleModuleEventReceiverBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData[] = {
		{ "Comment", "/** Event receiver modules only! */" },
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
		{ "ToolTip", "Event receiver modules only!" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules = { "EventReceiverModules", nullptr, (EPropertyFlags)0x0014000000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, EventReceiverModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
	void Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_SetBit(void* Obj)
	{
		((UParticleLODLevel*)Obj)->ConvertedModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules = { "ConvertedModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleLODLevel), &Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/ParticleLODLevel.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles = { "PeakActiveParticles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleLODLevel, PeakActiveParticles), METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_RequiredModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_Modules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_TypeDataModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawningModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_SpawnModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_UpdateModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_OrbitModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_EventReceiverModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_ConvertedModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleLODLevel_Statics::NewProp_PeakActiveParticles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleLODLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleLODLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleLODLevel_Statics::ClassParams = {
		&UParticleLODLevel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::PropPointers),
		0,
		0x008830A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleLODLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleLODLevel()
	{
		if (!Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton, Z_Construct_UClass_UParticleLODLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleLODLevel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleLODLevel>()
	{
		return UParticleLODLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleLODLevel);
	UParticleLODLevel::~UParticleLODLevel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleLODLevel, UParticleLODLevel::StaticClass, TEXT("UParticleLODLevel"), &Z_Registration_Info_UClass_UParticleLODLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleLODLevel), 889750121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_3850710938(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_ParticleLODLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
