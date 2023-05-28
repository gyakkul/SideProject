// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSpawnPerUnit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSpawnPerUnit::StaticRegisterNativesUParticleModuleSpawnPerUnit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSpawnPerUnit);
	UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister()
	{
		return UParticleModuleSpawnPerUnit::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitScalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnitScalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPerUnit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnPerUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFrameDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSpawnRateWhenMoving_MetaData[];
#endif
		static void NewProp_bIgnoreSpawnRateWhenMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSpawnRateWhenMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongX_MetaData[];
#endif
		static void NewProp_bIgnoreMovementAlongX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongY_MetaData[];
#endif
		static void NewProp_bIgnoreMovementAlongY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMovementAlongZ_MetaData[];
#endif
		static void NewProp_bIgnoreMovementAlongZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMovementAlongZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSpawnBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Spawn PerUnit" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09The scalar to apply to the distance traveled.\n\x09 *\x09The value from SpawnPerUnit is divided by this value to give the actual\n\x09 *\x09number of particles per unit. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The scalar to apply to the distance traveled.\nThe value from SpawnPerUnit is divided by this value to give the actual\nnumber of particles per unit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar = { "UnitScalar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, UnitScalar), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag.\n\x09 *\x09Ie, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The tolerance for moving vs. not moving w.r.t. the bIgnoreSpawnRateWhenMoving flag.\nIe, if (DistanceMoved < (UnitScalar x MovementTolerance)) then consider it not moving." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance = { "MovementTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MovementTolerance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** \n\x09 *\x09The amount to spawn per meter distribution.\n\x09 *\x09The value is retrieved using the EmitterTime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The amount to spawn per meter distribution.\nThe value is retrieved using the EmitterTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit = { "SpawnPerUnit", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, SpawnPerUnit), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09The maximum valid movement for a single frame.\n\x09 *\x09If 0.0, then the check is not performed.\n\x09 *\x09""Currently, if the distance moved between frames is greater than this\n\x09 *\x09then NO particles will be spawned.\n\x09 *\x09This is primiarily intended to cover cases where the PSystem is\n\x09 *\x09""attached to teleporting objects.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "The maximum valid movement for a single frame.\nIf 0.0, then the check is not performed.\nCurrently, if the distance moved between frames is greater than this\nthen NO particles will be spawned.\nThis is primiarily intended to cover cases where the PSystem is\nattached to teleporting objects." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance = { "MaxFrameDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSpawnPerUnit, MaxFrameDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/**\n\x09 *\x09If true, process the default spawn rate when not moving...\n\x09 *\x09When not moving, skip the default spawn rate.\n\x09 *\x09If false, return the bProcessSpawnRate setting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, process the default spawn rate when not moving...\nWhen not moving, skip the default spawn rate.\nIf false, return the bProcessSpawnRate setting." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_SetBit(void* Obj)
	{
		((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreSpawnRateWhenMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving = { "bIgnoreSpawnRateWhenMoving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the X-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the X-component of the movement" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_SetBit(void* Obj)
	{
		((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX = { "bIgnoreMovementAlongX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the Y-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the Y-component of the movement" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_SetBit(void* Obj)
	{
		((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY = { "bIgnoreMovementAlongY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "/** If true, ignore the Z-component of the movement */" },
		{ "ModuleRelativePath", "Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h" },
		{ "ToolTip", "If true, ignore the Z-component of the movement" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_SetBit(void* Obj)
	{
		((UParticleModuleSpawnPerUnit*)Obj)->bIgnoreMovementAlongZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ = { "bIgnoreMovementAlongZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSpawnPerUnit), &Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_UnitScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MovementTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_SpawnPerUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_MaxFrameDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreSpawnRateWhenMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::NewProp_bIgnoreMovementAlongZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSpawnPerUnit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::ClassParams = {
		&UParticleModuleSpawnPerUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSpawnPerUnit()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton, Z_Construct_UClass_UParticleModuleSpawnPerUnit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSpawnPerUnit>()
	{
		return UParticleModuleSpawnPerUnit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSpawnPerUnit);
	UParticleModuleSpawnPerUnit::~UParticleModuleSpawnPerUnit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSpawnPerUnit, UParticleModuleSpawnPerUnit::StaticClass, TEXT("UParticleModuleSpawnPerUnit"), &Z_Registration_Info_UClass_UParticleModuleSpawnPerUnit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSpawnPerUnit), 2752190759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_2006983144(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Spawn_ParticleModuleSpawnPerUnit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
