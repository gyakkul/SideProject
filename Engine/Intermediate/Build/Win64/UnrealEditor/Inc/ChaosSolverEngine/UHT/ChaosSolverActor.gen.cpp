// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/ChaosSolverActor.h"
#include "ChaosSolverConfiguration.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "SolverEventFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosSolverActor() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FChaosSolverConfiguration();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister();
	CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosSolverEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterConnectionTypeEnum;
	static UEnum* EClusterConnectionTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("EClusterConnectionTypeEnum"));
		}
		return Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UEnum* StaticEnum<EClusterConnectionTypeEnum>()
	{
		return EClusterConnectionTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enumerators[] = {
		{ "EClusterConnectionTypeEnum::Chaos_PointImplicit", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicit },
		{ "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay", (int64)EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay },
		{ "EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation", (int64)EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation },
		{ "EClusterConnectionTypeEnum::Chaos_None", (int64)EClusterConnectionTypeEnum::Chaos_None },
		{ "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max", (int64)EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "Chaos_BoundsOverlapFilteredDelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_BoundsOverlapFilteredDelaunayTriangulation" },
		{ "Chaos_DelaunayTriangulation.Hidden", "" },
		{ "Chaos_DelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_DelaunayTriangulation" },
		{ "Chaos_EClsuterCreationParameters_Max.Comment", "//\n" },
		{ "Chaos_EClsuterCreationParameters_Max.Hidden", "" },
		{ "Chaos_EClsuterCreationParameters_Max.Name", "EClusterConnectionTypeEnum::Chaos_EClsuterCreationParameters_Max" },
		{ "Chaos_MinimalSpanningSubsetDelaunayTriangulation.Name", "EClusterConnectionTypeEnum::Chaos_MinimalSpanningSubsetDelaunayTriangulation" },
		{ "Chaos_None.Hidden", "" },
		{ "Chaos_None.Name", "EClusterConnectionTypeEnum::Chaos_None" },
		{ "Chaos_PointImplicit.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicit" },
		{ "Chaos_PointImplicitAugmentedWithMinimalDelaunay.Name", "EClusterConnectionTypeEnum::Chaos_PointImplicitAugmentedWithMinimalDelaunay" },
		{ "Comment", "/** Legacy enum for old deprecated configuration properties. To be removed when those properties are */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Legacy enum for old deprecated configuration properties. To be removed when those properties are" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		"EClusterConnectionTypeEnum",
		"EClusterConnectionTypeEnum",
		Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton, Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterConnectionTypeEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl;
class UScriptStruct* FChaosDebugSubstepControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosDebugSubstepControl, (UObject*)Z_Construct_UPackage__Script_ChaosSolverEngine(), TEXT("ChaosDebugSubstepControl"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.OuterSingleton;
}
template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<FChaosDebugSubstepControl>()
{
	return FChaosDebugSubstepControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPause_MetaData[];
#endif
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubstep_MetaData[];
#endif
		static void NewProp_bSubstep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubstep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStep_MetaData[];
#endif
		static void NewProp_bStep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosDebugSubstepControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Pause the solver at the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Pause the solver at the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Substep the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Substep the solver to the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bSubstep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep = { "bSubstep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Step the solver to the next synchronization point.\n\x09*/" },
		{ "EditCondition", "bPause" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Step the solver to the next synchronization point." },
	};
#endif
	void Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit(void* Obj)
	{
		((FChaosDebugSubstepControl*)Obj)->bStep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep = { "bStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FChaosDebugSubstepControl), &Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bSubstep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewProp_bStep,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
		nullptr,
		&NewStructOps,
		"ChaosDebugSubstepControl",
		sizeof(FChaosDebugSubstepControl),
		alignof(FChaosDebugSubstepControl),
		Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosDebugSubstepControl()
	{
		if (!Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton, Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl.InnerSingleton;
	}
	DEFINE_FUNCTION(AChaosSolverActor::execSetSolverActive)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSolverActive(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AChaosSolverActor::execSetAsCurrentWorldSolver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsCurrentWorldSolver();
		P_NATIVE_END;
	}
	void AChaosSolverActor::StaticRegisterNativesAChaosSolverActor()
	{
		UClass* Class = AChaosSolverActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAsCurrentWorldSolver", &AChaosSolverActor::execSetAsCurrentWorldSolver },
			{ "SetSolverActive", &AChaosSolverActor::execSetSolverActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver. */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Makes this solver the current world solver. Dynamically spawned objects will have their physics state created in this solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetAsCurrentWorldSolver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics
	{
		struct ChaosSolverActor_eventSetSolverActive_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ChaosSolverActor_eventSetSolverActive_Parms*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosSolverActor_eventSetSolverActive_Parms), &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Controls whether the solver is able to simulate particles it controls */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Controls whether the solver is able to simulate particles it controls" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChaosSolverActor, nullptr, "SetSolverActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::ChaosSolverActor_eventSetSolverActive_Parms), Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChaosSolverActor_SetSolverActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AChaosSolverActor_SetSolverActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChaosSolverActor);
	UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister()
	{
		return AChaosSolverActor::StaticClass();
	}
	struct Z_Construct_UClass_AChaosSolverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStepMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStepMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushOutIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushOutPairIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PushOutPairIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClusterConnectionFactor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterUnionConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterUnionConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterUnionConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateCollisionData_MetaData[];
#endif
		static void NewProp_DoGenerateCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateBreakingData_MetaData[];
#endif
		static void NewProp_DoGenerateBreakingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateBreakingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateTrailingData_MetaData[];
#endif
		static void NewProp_DoGenerateTrailingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateTrailingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingFilterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingFilterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasFloor_MetaData[];
#endif
		static void NewProp_bHasFloor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosDebugSubstepControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChaosDebugSubstepControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEventDispatcherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameplayEventDispatcherComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChaosSolverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosSolverEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChaosSolverActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChaosSolverActor_SetAsCurrentWorldSolver, "SetAsCurrentWorldSolver" }, // 444830794
		{ &Z_Construct_UFunction_AChaosSolverActor_SetSolverActive, "SetSolverActive" }, // 1823058819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chaos/ChaosSolverActor.h" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, Properties), Z_Construct_UScriptStruct_FChaosSolverConfiguration, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties_MetaData)) }; // 3636049695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData[] = {
		{ "Comment", "/** Deprecated solver properties (moved to FChaosSolverConfiguration)*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Deprecated solver properties (moved to FChaosSolverConfiguration)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier = { "TimeStepMultiplier", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, TimeStepMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations = { "CollisionIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, CollisionIterations_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations = { "PushOutIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, PushOutIterations_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations = { "PushOutPairIterations", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, PushOutPairIterations_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor = { "ClusterConnectionFactor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, ClusterConnectionFactor_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType = { "ClusterUnionConnectionType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, ClusterUnionConnectionType_DEPRECATED), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_MetaData)) }; // 4036541358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateCollisionData_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData = { "DoGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings = { "CollisionFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, CollisionFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings_MetaData)) }; // 4052414333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateBreakingData_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData = { "DoGenerateBreakingData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings = { "BreakingFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, BreakingFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings_MetaData)) }; // 3740680553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->DoGenerateTrailingData_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData = { "DoGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings = { "TrailingFilterSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, TrailingFilterSettings_DEPRECATED), Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings_MetaData)) }; // 465871226
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, MassScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** End deprecated properties */" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "End deprecated properties" },
	};
#endif
	void Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit(void* Obj)
	{
		((AChaosSolverActor*)Obj)->bHasFloor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor = { "bHasFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AChaosSolverActor), &Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, FloorHeight), METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData[] = {
		{ "Category", "ChaosPhysics|Debug" },
		{ "Comment", "/*\n\x09* Control to pause/step/substep the solver to the next synchronization point.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Control to pause/step/substep the solver to the next synchronization point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl = { "ChaosDebugSubstepControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, ChaosDebugSubstepControl), Z_Construct_UScriptStruct_FChaosDebugSubstepControl, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl_MetaData)) }; // 1328242338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Display icon in the editor\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "* Display icon in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData[] = {
		{ "Comment", "/** Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/ChaosSolverActor.h" },
		{ "ToolTip", "Component responsible for harvesting and triggering physics-related gameplay events (hits, breaks, etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent = { "GameplayEventDispatcherComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AChaosSolverActor, GameplayEventDispatcherComponent), Z_Construct_UClass_UChaosGameplayEventDispatcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TimeStepMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_PushOutPairIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterConnectionFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ClusterUnionConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_CollisionFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateBreakingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_BreakingFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_DoGenerateTrailingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_TrailingFilterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_MassScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_bHasFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_FloorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_ChaosDebugSubstepControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChaosSolverActor_Statics::NewProp_GameplayEventDispatcherComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChaosSolverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChaosSolverActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams = {
		&AChaosSolverActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChaosSolverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChaosSolverActor()
	{
		if (!Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton, Z_Construct_UClass_AChaosSolverActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChaosSolverActor.OuterSingleton;
	}
	template<> CHAOSSOLVERENGINE_API UClass* StaticClass<AChaosSolverActor>()
	{
		return AChaosSolverActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChaosSolverActor);
	AChaosSolverActor::~AChaosSolverActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosSolverActor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::EnumInfo[] = {
		{ EClusterConnectionTypeEnum_StaticEnum, TEXT("EClusterConnectionTypeEnum"), &Z_Registration_Info_UEnum_EClusterConnectionTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4036541358U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ScriptStructInfo[] = {
		{ FChaosDebugSubstepControl::StaticStruct, Z_Construct_UScriptStruct_FChaosDebugSubstepControl_Statics::NewStructOps, TEXT("ChaosDebugSubstepControl"), &Z_Registration_Info_UScriptStruct_ChaosDebugSubstepControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosDebugSubstepControl), 1328242338U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChaosSolverActor, AChaosSolverActor::StaticClass, TEXT("AChaosSolverActor"), &Z_Registration_Info_UClass_AChaosSolverActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChaosSolverActor), 4293132259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_3530856063(TEXT("/Script/ChaosSolverEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosSolverActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
