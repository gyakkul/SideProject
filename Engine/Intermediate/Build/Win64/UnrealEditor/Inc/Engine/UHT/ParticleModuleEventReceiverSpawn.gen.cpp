// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleEventReceiverSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleEventReceiverSpawn::StaticRegisterNativesUParticleModuleEventReceiverSpawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleEventReceiverSpawn);
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn_NoRegister()
	{
		return UParticleModuleEventReceiverSpawn::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseParticleTime_MetaData[];
#endif
		static void NewProp_bUseParticleTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseParticleTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePSysLocation_MetaData[];
#endif
		static void NewProp_bUsePSysLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePSysLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritVelocity_MetaData[];
#endif
		static void NewProp_bInheritVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InheritVelocityScale;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBanPhysicalMaterials_MetaData[];
#endif
		static void NewProp_bBanPhysicalMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBanPhysicalMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleEventReceiverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "EventReceiver Spawn" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** The number of particles to spawn. */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "The number of particles to spawn." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, SpawnCount), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09""For Death-based event receiving, if this is true, it indicates that the \n\x09 *\x09ParticleTime of the event should be used to look-up the SpawnCount.\n\x09 *\x09Otherwise (and in all other events received), use the emitter time of \n\x09 *\x09the event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "For Death-based event receiving, if this is true, it indicates that the\nParticleTime of the event should be used to look-up the SpawnCount.\nOtherwise (and in all other events received), use the emitter time of\nthe event." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bUseParticleTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime = { "bUseParticleTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/**\n\x09 *\x09If true, use the location of the particle system component for spawning.\n\x09 *\x09if false (default), use the location of the particle event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the location of the particle system component for spawning.\nif false (default), use the location of the particle event." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bUsePSysLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation = { "bUsePSysLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If true, use the velocity of the dying particle as the start velocity of \n\x09 *\x09the spawned particle.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If true, use the velocity of the dying particle as the start velocity of\nthe spawned particle." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bInheritVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity = { "bInheritVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09If bInheritVelocity is true, scale the velocity with this.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "If bInheritVelocity is true, scale the velocity with this." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, InheritVelocityScale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale_MetaData)) }; // 3056335262
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09*\x09""Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "Array of physical materials that can be used to allow or ban a specific set of materials when receiving collision events." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleEventReceiverSpawn, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09*\x09When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\n\x09*\x09When false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h" },
		{ "ToolTip", "When true, the PhysicalMaterials list is used to ban specified materials for collision events but allow all others.\nWhen false, the PhysicalMaterials list is used to allow only specified materials for collision events and ban all others." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit(void* Obj)
	{
		((UParticleModuleEventReceiverSpawn*)Obj)->bBanPhysicalMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials = { "bBanPhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleEventReceiverSpawn), &Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_SpawnCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUseParticleTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bUsePSysLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bInheritVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_InheritVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_PhysicalMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::NewProp_bBanPhysicalMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleEventReceiverSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams = {
		&UParticleModuleEventReceiverSpawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleEventReceiverSpawn()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton, Z_Construct_UClass_UParticleModuleEventReceiverSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleEventReceiverSpawn>()
	{
		return UParticleModuleEventReceiverSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleEventReceiverSpawn);
	UParticleModuleEventReceiverSpawn::~UParticleModuleEventReceiverSpawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleEventReceiverSpawn, UParticleModuleEventReceiverSpawn::StaticClass, TEXT("UParticleModuleEventReceiverSpawn"), &Z_Registration_Info_UClass_UParticleModuleEventReceiverSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleEventReceiverSpawn), 682849976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_1006977170(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Event_ParticleModuleEventReceiverSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
