// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomAssetPhysics.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomAssetPhysics() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairBendConstraint();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairCollisionConstraint();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairExternalForces();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairMaterialConstraints();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationConstraints();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationForces();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSetup();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSolver();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairSolverSettings();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairStrandsParameters();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairStretchConstraint();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomNiagaraSolvers;
	static UEnum* EGroomNiagaraSolvers_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomNiagaraSolvers"));
		}
		return Z_Registration_Info_UEnum_EGroomNiagaraSolvers.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomNiagaraSolvers>()
	{
		return EGroomNiagaraSolvers_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enumerators[] = {
		{ "EGroomNiagaraSolvers::None", (int64)EGroomNiagaraSolvers::None },
		{ "EGroomNiagaraSolvers::CosseratRods", (int64)EGroomNiagaraSolvers::CosseratRods },
		{ "EGroomNiagaraSolvers::AngularSprings", (int64)EGroomNiagaraSolvers::AngularSprings },
		{ "EGroomNiagaraSolvers::CustomSolver", (int64)EGroomNiagaraSolvers::CustomSolver },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enum_MetaDataParams[] = {
		{ "AngularSprings.DisplayName", "Groom Springs" },
		{ "AngularSprings.Name", "EGroomNiagaraSolvers::AngularSprings" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of niagara solvers */" },
		{ "CosseratRods.DisplayName", "Groom Rods" },
		{ "CosseratRods.Name", "EGroomNiagaraSolvers::CosseratRods" },
		{ "CustomSolver.DisplayName", "Custom Solver" },
		{ "CustomSolver.Name", "EGroomNiagaraSolvers::CustomSolver" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomNiagaraSolvers::None" },
		{ "ToolTip", "List of niagara solvers" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomNiagaraSolvers",
		"EGroomNiagaraSolvers",
		Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers()
	{
		if (!Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomNiagaraSolvers.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomStrandsSize;
	static UEnum* EGroomStrandsSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomStrandsSize"));
		}
		return Z_Registration_Info_UEnum_EGroomStrandsSize.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomStrandsSize>()
	{
		return EGroomStrandsSize_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enumerators[] = {
		{ "EGroomStrandsSize::None", (int64)EGroomStrandsSize::None },
		{ "EGroomStrandsSize::Size2", (int64)EGroomStrandsSize::Size2 },
		{ "EGroomStrandsSize::Size4", (int64)EGroomStrandsSize::Size4 },
		{ "EGroomStrandsSize::Size8", (int64)EGroomStrandsSize::Size8 },
		{ "EGroomStrandsSize::Size16", (int64)EGroomStrandsSize::Size16 },
		{ "EGroomStrandsSize::Size32", (int64)EGroomStrandsSize::Size32 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Size of each strands*/" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomStrandsSize::None" },
		{ "Size16.DisplayName", "16" },
		{ "Size16.Name", "EGroomStrandsSize::Size16" },
		{ "Size2.DisplayName", "2" },
		{ "Size2.Name", "EGroomStrandsSize::Size2" },
		{ "Size32.DisplayName", "32" },
		{ "Size32.Name", "EGroomStrandsSize::Size32" },
		{ "Size4.DisplayName", "4" },
		{ "Size4.Name", "EGroomStrandsSize::Size4" },
		{ "Size8.DisplayName", "8" },
		{ "Size8.Name", "EGroomStrandsSize::Size8" },
		{ "ToolTip", "Size of each strands" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomStrandsSize",
		"EGroomStrandsSize",
		Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize()
	{
		if (!Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomStrandsSize.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomInterpolationType;
	static UEnum* EGroomInterpolationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomInterpolationType"));
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomInterpolationType>()
	{
		return EGroomInterpolationType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enumerators[] = {
		{ "EGroomInterpolationType::None", (int64)EGroomInterpolationType::None },
		{ "EGroomInterpolationType::RigidTransform", (int64)EGroomInterpolationType::RigidTransform },
		{ "EGroomInterpolationType::OffsetTransform", (int64)EGroomInterpolationType::OffsetTransform },
		{ "EGroomInterpolationType::SmoothTransform", (int64)EGroomInterpolationType::SmoothTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** List of interpolation type */" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EGroomInterpolationType::None" },
		{ "OffsetTransform.DisplayName", "Offset Transform" },
		{ "OffsetTransform.Name", "EGroomInterpolationType::OffsetTransform" },
		{ "RigidTransform.DisplayName", "Rigid Transform" },
		{ "RigidTransform.Name", "EGroomInterpolationType::RigidTransform" },
		{ "SmoothTransform.DisplayName", "Smooth Transform" },
		{ "SmoothTransform.Name", "EGroomInterpolationType::SmoothTransform" },
		{ "ToolTip", "List of interpolation type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomInterpolationType",
		"EGroomInterpolationType",
		Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType()
	{
		if (!Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomInterpolationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomInterpolationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSolverSettings;
class UScriptStruct* FHairSolverSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSolverSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSolverSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairSolverSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSolverSettings>()
{
	return FHairSolverSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSolverSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableSimulation_MetaData[];
#endif
		static void NewProp_EnableSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSimulation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NiagaraSolver_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSolver_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NiagaraSolver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CustomSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityPreloading_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityPreloading;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IterationCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSolverSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the simulation on that group" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_SetBit(void* Obj)
	{
		((FHairSolverSettings*)Obj)->EnableSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation = { "EnableSimulation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSolverSettings), &Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Niagara solver to be used for simulation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver = { "NiagaraSolver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSolverSettings, NiagaraSolver), Z_Construct_UEnum_HairStrandsCore_EGroomNiagaraSolvers, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_MetaData)) }; // 2833140150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "EditCondition", "NiagaraSolver == EGroomNiagaraSolvers::CustomSolver" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Custom niagara system to be used if custom solver is picked" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem = { "CustomSystem", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSolverSettings, CustomSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "EditCondition", "NiagaraSolver == EGroomNiagaraSolvers::AngularSprings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Optimisation of the rest state configuration to compensate from the gravity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading = { "GravityPreloading", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSolverSettings, GravityPreloading), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of sub steps to be done per frame. The actual solver calls are done at 24 fps" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps = { "SubSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSolverSettings, SubSteps), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of iterations to solve the constraints with the xpbd solver" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount = { "IterationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSolverSettings, IterationCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_EnableSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_NiagaraSolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_CustomSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_GravityPreloading,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_SubSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewProp_IterationCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSolverSettings",
		sizeof(FHairSolverSettings),
		alignof(FHairSolverSettings),
		Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSolverSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairSolverSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSolverSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairExternalForces;
class UScriptStruct* FHairExternalForces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairExternalForces, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairExternalForces"));
	}
	return Z_Registration_Info_UScriptStruct_HairExternalForces.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairExternalForces>()
{
	return FHairExternalForces::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairExternalForces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AirVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairExternalForces_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairExternalForces>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Acceleration vector in cm/s2 to be used for the gravity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector = { "GravityVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairExternalForces, GravityVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Coefficient between 0 and 1 to be used for the air drag" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag = { "AirDrag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairExternalForces, AirDrag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Velocity of the surrounding air in cm/s" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity = { "AirVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairExternalForces, AirVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_GravityVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewProp_AirVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairExternalForces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairExternalForces",
		sizeof(FHairExternalForces),
		alignof(FHairExternalForces),
		Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairExternalForces_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairExternalForces_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairExternalForces()
	{
		if (!Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton, Z_Construct_UScriptStruct_FHairExternalForces_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairExternalForces.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairBendConstraint;
class UScriptStruct* FHairBendConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairBendConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairBendConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairBendConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairBendConstraint>()
{
	return FHairBendConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairBendConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolveBend_MetaData[];
#endif
		static void NewProp_SolveBend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveBend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectBend_MetaData[];
#endif
		static void NewProp_ProjectBend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectBend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairBendConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the bend constraint during the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_SetBit(void* Obj)
	{
		((FHairBendConstraint*)Obj)->SolveBend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend = { "SolveBend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairBendConstraint), &Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the bend constraint after the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_SetBit(void* Obj)
	{
		((FHairBendConstraint*)Obj)->ProjectBend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend = { "ProjectBend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairBendConstraint), &Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the bend constraint between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping = { "BendDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairBendConstraint, BendDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the bend constraint in GPa" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness = { "BendStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairBendConstraint, BendStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "DisplayName", "Stiffness Scale" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the bend stiffness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Bend Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale = { "BendScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairBendConstraint, BendScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_SolveBend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_ProjectBend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewProp_BendScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairBendConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairBendConstraint",
		sizeof(FHairBendConstraint),
		alignof(FHairBendConstraint),
		Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairBendConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairBendConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairBendConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairBendConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairStretchConstraint;
class UScriptStruct* FHairStretchConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairStretchConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairStretchConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairStretchConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairStretchConstraint>()
{
	return FHairStretchConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairStretchConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolveStretch_MetaData[];
#endif
		static void NewProp_SolveStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectStretch_MetaData[];
#endif
		static void NewProp_ProjectStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StretchScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairStretchConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the stretch constraint during the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_SetBit(void* Obj)
	{
		((FHairStretchConstraint*)Obj)->SolveStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch = { "SolveStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairStretchConstraint), &Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the stretch constraint after the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_SetBit(void* Obj)
	{
		((FHairStretchConstraint*)Obj)->ProjectStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch = { "ProjectStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairStretchConstraint), &Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the stretch constraint between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping = { "StretchDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStretchConstraint, StretchDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the stretch constraint in GPa" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness = { "StretchStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStretchConstraint, StretchStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "DisplayName", "Stiffness Scale" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the stretch stiffness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Stretch Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale = { "StretchScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStretchConstraint, StretchScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_SolveStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_ProjectStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewProp_StretchScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairStretchConstraint",
		sizeof(FHairStretchConstraint),
		alignof(FHairStretchConstraint),
		Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairStretchConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairStretchConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairCollisionConstraint;
class UScriptStruct* FHairCollisionConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairCollisionConstraint, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairCollisionConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_HairCollisionConstraint.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairCollisionConstraint>()
{
	return FHairCollisionConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolveCollision_MetaData[];
#endif
		static void NewProp_SolveCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SolveCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectCollision_MetaData[];
#endif
		static void NewProp_ProjectCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ProjectCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KineticFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KineticFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsViscosity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsViscosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDimension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadiusScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairCollisionConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the solve of the collision constraint during the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_SetBit(void* Obj)
	{
		((FHairCollisionConstraint*)Obj)->SolveCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision = { "SolveCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairCollisionConstraint), &Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable ther projection of the collision constraint after the xpbd loop" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_SetBit(void* Obj)
	{
		((FHairCollisionConstraint*)Obj)->ProjectCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision = { "ProjectCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairCollisionConstraint), &Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction_MetaData[] = {
		{ "Category", "Collision Constraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Static friction used for collision against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, StaticFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Kinetic friction used for collision against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction = { "KineticFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, KineticFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Viscosity parameter between 0 and 1 that will be used for self collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity = { "StrandsViscosity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, StrandsViscosity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Dimension of the grid used to compute the viscosity force" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension = { "GridDimension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, GridDimension), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Radius that will be used for the collision detection against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, CollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the collision radius will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Collision Radius" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale = { "RadiusScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairCollisionConstraint, RadiusScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_SolveCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_ProjectCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StaticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_KineticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_StrandsViscosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_GridDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_CollisionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewProp_RadiusScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairCollisionConstraint",
		sizeof(FHairCollisionConstraint),
		alignof(FHairCollisionConstraint),
		Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairCollisionConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton, Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairCollisionConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairMaterialConstraints;
class UScriptStruct* FHairMaterialConstraints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairMaterialConstraints, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairMaterialConstraints"));
	}
	return Z_Registration_Info_UScriptStruct_HairMaterialConstraints.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairMaterialConstraints>()
{
	return FHairMaterialConstraints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StretchConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairMaterialConstraints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Bend constraint settings to be applied to the hair strands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint = { "BendConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairMaterialConstraints, BendConstraint), Z_Construct_UScriptStruct_FHairBendConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint_MetaData)) }; // 2505943187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stretch constraint settings to be applied to the hair strands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint = { "StretchConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairMaterialConstraints, StretchConstraint), Z_Construct_UScriptStruct_FHairStretchConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint_MetaData)) }; // 2571793672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint_MetaData[] = {
		{ "Category", "MaterialConstraints" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Collision constraint settings to be applied to the hair strands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint = { "CollisionConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairMaterialConstraints, CollisionConstraint), Z_Construct_UScriptStruct_FHairCollisionConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint_MetaData)) }; // 1513802957
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_BendConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_StretchConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewProp_CollisionConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairMaterialConstraints",
		sizeof(FHairMaterialConstraints),
		alignof(FHairMaterialConstraints),
		Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairMaterialConstraints()
	{
		if (!Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton, Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairMaterialConstraints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairStrandsParameters;
class UScriptStruct* FHairStrandsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairStrandsParameters, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairStrandsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_HairStrandsParameters.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairStrandsParameters>()
{
	return FHairStrandsParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairStrandsParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_StrandsSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StrandsSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThicknessScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairStrandsParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Number of particles per guide that will be used for simulation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize = { "StrandsSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStrandsParameters, StrandsSize), Z_Construct_UEnum_HairStrandsCore_EGroomStrandsSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_MetaData)) }; // 1949391657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Density of the strands in g/cm3" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity = { "StrandsDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStrandsParameters, StrandsDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Smoothing between 0 and 1 of the incoming guides curves for better stability" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing = { "StrandsSmoothing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStrandsParameters, StrandsSmoothing), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands thickness in cm that will be used for mass and inertia computation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness = { "StrandsThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStrandsParameters, StrandsThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale_MetaData[] = {
		{ "Category", "StrandsParameters" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "TimeLineLength", "1.0" },
		{ "ToolTip", "This curve determines how much the strands thickness will be scaled along each strand. \n The X axis range is [0,1], 0 mapping the root and 1 the tip" },
		{ "ViewMaxInput", "1.0" },
		{ "ViewMaxOutput", "1.0" },
		{ "ViewMinInput", "0.0" },
		{ "ViewMinOutput", "0.0" },
		{ "XAxisName", "Strand Coordinate (0,1)" },
		{ "YAxisName", "Strands Thickness" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale = { "ThicknessScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairStrandsParameters, ThicknessScale), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_StrandsThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewProp_ThicknessScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairStrandsParameters",
		sizeof(FHairStrandsParameters),
		alignof(FHairStrandsParameters),
		Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairStrandsParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton, Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairStrandsParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairGroupsPhysics;
class UScriptStruct* FHairGroupsPhysics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairGroupsPhysics, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairGroupsPhysics"));
	}
	return Z_Registration_Info_UScriptStruct_HairGroupsPhysics.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairGroupsPhysics>()
{
	return FHairGroupsPhysics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForces_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StrandsParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairGroupsPhysics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsPhysics, SolverSettings), Z_Construct_UScriptStruct_FHairSolverSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings_MetaData)) }; // 772890857
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "External Forces for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsPhysics, ExternalForces), Z_Construct_UScriptStruct_FHairExternalForces, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces_MetaData)) }; // 274523775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Material Constraints for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints = { "MaterialConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsPhysics, MaterialConstraints), Z_Construct_UScriptStruct_FHairMaterialConstraints, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints_MetaData)) }; // 1392488137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands Parameters for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters = { "StrandsParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairGroupsPhysics, StrandsParameters), Z_Construct_UScriptStruct_FHairStrandsParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters_MetaData)) }; // 1037214513
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_SolverSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_ExternalForces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_MaterialConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewProp_StrandsParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairGroupsPhysics",
		sizeof(FHairGroupsPhysics),
		alignof(FHairGroupsPhysics),
		Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsPhysics()
	{
		if (!Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton, Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairGroupsPhysics.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSolver;
class UScriptStruct* FHairSimulationSolver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSolver, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSolver"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSolver.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSolver>()
{
	return FHairSimulationSolver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSimulationSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSimulation_MetaData[];
#endif
		static void NewProp_bEnableSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSimulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSolver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Enable the simulation of the groom groups/LODs if both this boolean and the one in the groom asset are true" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_SetBit(void* Obj)
	{
		((FHairSimulationSolver*)Obj)->bEnableSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation = { "bEnableSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSimulationSolver), &Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewProp_bEnableSimulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSimulationSolver",
		sizeof(FHairSimulationSolver),
		alignof(FHairSimulationSolver),
		Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSolver()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSimulationSolver.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationForces;
class UScriptStruct* FHairSimulationForces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationForces, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationForces"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationForces.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationForces>()
{
	return FHairSimulationForces::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSimulationForces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AirVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationForces_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationForces>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Acceleration vector in cm/s2 to be used for the gravity" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector = { "GravityVector", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationForces, GravityVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Coefficient between 0 and 1 to be used for the air drag" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag = { "AirDrag", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationForces, AirDrag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity_MetaData[] = {
		{ "Category", "ExternalForces" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Velocity of the surrounding air in cm/s" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity = { "AirVelocity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationForces, AirVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_GravityVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewProp_AirVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationForces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSimulationForces",
		sizeof(FHairSimulationForces),
		alignof(FHairSimulationForces),
		Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationForces_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationForces()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationForces_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSimulationForces.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationConstraints;
class UScriptStruct* FHairSimulationConstraints::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationConstraints, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationConstraints"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationConstraints.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationConstraints>()
{
	return FHairSimulationConstraints::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KineticFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KineticFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrandsViscosity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrandsViscosity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationConstraints>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the bend constraint between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping = { "BendDamping", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, BendDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness_MetaData[] = {
		{ "Category", "BendConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the bend constraint in GPa" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness = { "BendStiffness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, BendStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Damping for the stretch constraint between 0 and 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping = { "StretchDamping", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, StretchDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness_MetaData[] = {
		{ "Category", "StretchConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Stiffness for the stretch constraint in GPa" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness = { "StretchStiffness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, StretchStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction_MetaData[] = {
		{ "Category", "Collision Constraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Static friction used for collision against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, StaticFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Kinetic friction used for collision against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction = { "KineticFriction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, KineticFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Viscosity parameter between 0 and 1 that will be used for self collision" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity = { "StrandsViscosity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, StrandsViscosity), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "CollisionConstraint" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Radius that will be used for the collision detection against the physics asset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationConstraints, CollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_BendStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StretchStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StaticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_KineticFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_StrandsViscosity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewProp_CollisionRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSimulationConstraints",
		sizeof(FHairSimulationConstraints),
		alignof(FHairSimulationConstraints),
		Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationConstraints()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSimulationConstraints.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSetup;
class UScriptStruct* FHairSimulationSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSetup, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSetup"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSetup.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSetup>()
{
	return FHairSimulationSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSimulationSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetSimulation_MetaData[];
#endif
		static void NewProp_bResetSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugSimulation_MetaData[];
#endif
		static void NewProp_bDebugSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSimulation_MetaData[];
#endif
		static void NewProp_bLocalSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to control if we want to reset trhe simulation at some point in time" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_SetBit(void* Obj)
	{
		((FHairSimulationSetup*)Obj)->bResetSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation = { "bResetSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to make the simulation strands visible" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_SetBit(void* Obj)
	{
		((FHairSimulationSetup*)Obj)->bDebugSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation = { "bDebugSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Strands simulation is done in local space" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_SetBit(void* Obj)
	{
		((FHairSimulationSetup*)Obj)->bLocalSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation = { "bLocalSimulation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSimulationSetup), &Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "The amount of linear velocities sent to the local groom space from the reference bone" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSetup, LinearVelocityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "The amount of angular velocities sent to the local groom space from the reference bone" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSetup, AngularVelocityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "EditCondition", "bLocalSimulation" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Bone used for the simulation local space" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone = { "LocalBone", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSetup, LocalBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance_MetaData[] = {
		{ "Category", "SimulationSetup" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Teleport distance threshold to reset the simulation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSetup, TeleportDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bResetSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bDebugSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_bLocalSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LinearVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_AngularVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_LocalBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewProp_TeleportDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSimulationSetup",
		sizeof(FHairSimulationSetup),
		alignof(FHairSimulationSetup),
		Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSimulationSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HairSimulationSettings;
class UScriptStruct* FHairSimulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHairSimulationSettings, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("HairSimulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HairSimulationSettings.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FHairSimulationSettings>()
{
	return FHairSimulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHairSimulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSettings_MetaData[];
#endif
		static void NewProp_bOverrideSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationSetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolverSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForces_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHairSimulationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Boolean to control if we are going to override the groom asset physics settings" },
	};
#endif
	void Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_SetBit(void* Obj)
	{
		((FHairSimulationSettings*)Obj)->bOverrideSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings = { "bOverrideSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHairSimulationSettings), &Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup = { "SimulationSetup", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSettings, SimulationSetup), Z_Construct_UScriptStruct_FHairSimulationSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup_MetaData)) }; // 3268330076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Solver Settings for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings = { "SolverSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSettings, SolverSettings), Z_Construct_UScriptStruct_FHairSimulationSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings_MetaData)) }; // 2162038393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "External Forces for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSettings, ExternalForces), Z_Construct_UScriptStruct_FHairSimulationForces, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces_MetaData)) }; // 2841841410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints_MetaData[] = {
		{ "Category", "GroupsPhysics" },
		{ "EditCondition", "bOverrideSettings" },
		{ "ModuleRelativePath", "Public/GroomAssetPhysics.h" },
		{ "ToolTip", "Material Constraints for the hair physics" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints = { "MaterialConstraints", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHairSimulationSettings, MaterialConstraints), Z_Construct_UScriptStruct_FHairSimulationConstraints, METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints_MetaData)) }; // 2916696095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_bOverrideSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SimulationSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_SolverSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_ExternalForces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewProp_MaterialConstraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"HairSimulationSettings",
		sizeof(FHairSimulationSettings),
		alignof(FHairSimulationSettings),
		Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHairSimulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HairSimulationSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::EnumInfo[] = {
		{ EGroomNiagaraSolvers_StaticEnum, TEXT("EGroomNiagaraSolvers"), &Z_Registration_Info_UEnum_EGroomNiagaraSolvers, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2833140150U) },
		{ EGroomStrandsSize_StaticEnum, TEXT("EGroomStrandsSize"), &Z_Registration_Info_UEnum_EGroomStrandsSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1949391657U) },
		{ EGroomInterpolationType_StaticEnum, TEXT("EGroomInterpolationType"), &Z_Registration_Info_UEnum_EGroomInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2916579086U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::ScriptStructInfo[] = {
		{ FHairSolverSettings::StaticStruct, Z_Construct_UScriptStruct_FHairSolverSettings_Statics::NewStructOps, TEXT("HairSolverSettings"), &Z_Registration_Info_UScriptStruct_HairSolverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSolverSettings), 772890857U) },
		{ FHairExternalForces::StaticStruct, Z_Construct_UScriptStruct_FHairExternalForces_Statics::NewStructOps, TEXT("HairExternalForces"), &Z_Registration_Info_UScriptStruct_HairExternalForces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairExternalForces), 274523775U) },
		{ FHairBendConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairBendConstraint_Statics::NewStructOps, TEXT("HairBendConstraint"), &Z_Registration_Info_UScriptStruct_HairBendConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairBendConstraint), 2505943187U) },
		{ FHairStretchConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairStretchConstraint_Statics::NewStructOps, TEXT("HairStretchConstraint"), &Z_Registration_Info_UScriptStruct_HairStretchConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairStretchConstraint), 2571793672U) },
		{ FHairCollisionConstraint::StaticStruct, Z_Construct_UScriptStruct_FHairCollisionConstraint_Statics::NewStructOps, TEXT("HairCollisionConstraint"), &Z_Registration_Info_UScriptStruct_HairCollisionConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairCollisionConstraint), 1513802957U) },
		{ FHairMaterialConstraints::StaticStruct, Z_Construct_UScriptStruct_FHairMaterialConstraints_Statics::NewStructOps, TEXT("HairMaterialConstraints"), &Z_Registration_Info_UScriptStruct_HairMaterialConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairMaterialConstraints), 1392488137U) },
		{ FHairStrandsParameters::StaticStruct, Z_Construct_UScriptStruct_FHairStrandsParameters_Statics::NewStructOps, TEXT("HairStrandsParameters"), &Z_Registration_Info_UScriptStruct_HairStrandsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairStrandsParameters), 1037214513U) },
		{ FHairGroupsPhysics::StaticStruct, Z_Construct_UScriptStruct_FHairGroupsPhysics_Statics::NewStructOps, TEXT("HairGroupsPhysics"), &Z_Registration_Info_UScriptStruct_HairGroupsPhysics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairGroupsPhysics), 1095911762U) },
		{ FHairSimulationSolver::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSolver_Statics::NewStructOps, TEXT("HairSimulationSolver"), &Z_Registration_Info_UScriptStruct_HairSimulationSolver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSolver), 2162038393U) },
		{ FHairSimulationForces::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationForces_Statics::NewStructOps, TEXT("HairSimulationForces"), &Z_Registration_Info_UScriptStruct_HairSimulationForces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationForces), 2841841410U) },
		{ FHairSimulationConstraints::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationConstraints_Statics::NewStructOps, TEXT("HairSimulationConstraints"), &Z_Registration_Info_UScriptStruct_HairSimulationConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationConstraints), 2916696095U) },
		{ FHairSimulationSetup::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSetup_Statics::NewStructOps, TEXT("HairSimulationSetup"), &Z_Registration_Info_UScriptStruct_HairSimulationSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSetup), 3268330076U) },
		{ FHairSimulationSettings::StaticStruct, Z_Construct_UScriptStruct_FHairSimulationSettings_Statics::NewStructOps, TEXT("HairSimulationSettings"), &Z_Registration_Info_UScriptStruct_HairSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHairSimulationSettings), 2328935285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_650466957(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomAssetPhysics_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
