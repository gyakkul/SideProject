// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassSpawner.h"
#include "MassSpawnerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_AMassSpawner();
	MASSSPAWNER_API UClass* Z_Construct_UClass_AMassSpawner_NoRegister();
	MASSSPAWNER_API UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature();
	MASSSPAWNER_API UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnDataGenerator();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassSpawnedEntityType();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MassSpawner, nullptr, "MassSpawnerOnSpawningFinishedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMassSpawnerOnSpawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnSpawningFinishedEvent)
{
	MassSpawnerOnSpawningFinishedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MassSpawner, nullptr, "MassSpawnerOnDespawningFinishedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMassSpawnerOnDespawningFinishedEvent_DelegateWrapper(const FMulticastScriptDelegate& MassSpawnerOnDespawningFinishedEvent)
{
	MassSpawnerOnDespawningFinishedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(AMassSpawner::execGetSpawningCountScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpawningCountScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execGetCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execScaleSpawningCount)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScaleSpawningCount(Z_Param_Scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execUnloadConfig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadConfig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execClearTemplates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTemplates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execDoDespawning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoDespawning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execDoSpawning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoSpawning();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AMassSpawner::execDEBUG_Clear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DEBUG_Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMassSpawner::execDEBUG_Spawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DEBUG_Spawn();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void AMassSpawner::StaticRegisterNativesAMassSpawner()
	{
		UClass* Class = AMassSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearTemplates", &AMassSpawner::execClearTemplates },
#if WITH_EDITOR
			{ "DEBUG_Clear", &AMassSpawner::execDEBUG_Clear },
			{ "DEBUG_Spawn", &AMassSpawner::execDEBUG_Spawn },
#endif // WITH_EDITOR
			{ "DoDespawning", &AMassSpawner::execDoDespawning },
			{ "DoSpawning", &AMassSpawner::execDoSpawning },
			{ "GetCount", &AMassSpawner::execGetCount },
			{ "GetSpawningCountScale", &AMassSpawner::execGetSpawningCountScale },
			{ "ScaleSpawningCount", &AMassSpawner::execScaleSpawningCount },
			{ "UnloadConfig", &AMassSpawner::execUnloadConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "ClearTemplates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_ClearTemplates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_ClearTemplates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "Comment", "/** Remove all the entities */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Remove all the entities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "DEBUG_Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_DEBUG_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_DEBUG_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "DEBUG_Spawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/**\n\x09 * Despawn all mass agent that was spawned by this spawner\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Despawn all mass agent that was spawned by this spawner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "DoDespawning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_DoDespawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_DoDespawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/**\n\x09 * Starts the spawning of all the agent types of this spawner\n\x09 */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Starts the spawning of all the agent types of this spawner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "DoSpawning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_DoSpawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_DoSpawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassSpawner_GetCount_Statics
	{
		struct MassSpawner_eventGetCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMassSpawner_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassSpawner_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassSpawner_GetCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassSpawner_GetCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_GetCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "GetCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMassSpawner_GetCount_Statics::MassSpawner_eventGetCount_Parms), Z_Construct_UFunction_AMassSpawner_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_GetCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_GetCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_GetCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_GetCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_GetCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics
	{
		struct MassSpawner_eventGetSpawningCountScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassSpawner_eventGetSpawningCountScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "GetSpawningCountScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::MassSpawner_eventGetSpawningCountScale_Parms), Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics
	{
		struct MassSpawner_eventScaleSpawningCount_Parms
		{
			float Scale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassSpawner_eventScaleSpawningCount_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "Comment", "/**\n\x09 * Scales the spawning counts\n\x09 * @param Scale is the number to multiply the all counts of each agent types \n\x09 */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Scales the spawning counts\n@param Scale is the number to multiply the all counts of each agent types" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "ScaleSpawningCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::MassSpawner_eventScaleSpawningCount_Parms), Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMassSpawner, nullptr, "UnloadConfig", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMassSpawner_UnloadConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassSpawner_UnloadConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassSpawner);
	UClass* Z_Construct_UClass_AMassSpawner_NoRegister()
	{
		return AMassSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AMassSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawningFinishedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawningFinishedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDespawningFinishedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDespawningFinishedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EntityTypes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnDataGenerators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDataGenerators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnDataGenerators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnOnBeginPlay_MetaData[];
#endif
		static void NewProp_bAutoSpawnOnBeginPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnOnBeginPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSchematics_MetaData[];
#endif
		static void NewProp_bOverrideSchematics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSchematics;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostSpawnProcessors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostSpawnProcessors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostSpawnProcessors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawningCountScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawningCountScale;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMassSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassSpawner_ClearTemplates, "ClearTemplates" }, // 303000382
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AMassSpawner_DEBUG_Clear, "DEBUG_Clear" }, // 1045725794
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AMassSpawner_DEBUG_Spawn, "DEBUG_Spawn" }, // 1879975279
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AMassSpawner_DoDespawning, "DoDespawning" }, // 3590813721
		{ &Z_Construct_UFunction_AMassSpawner_DoSpawning, "DoSpawning" }, // 2092812874
		{ &Z_Construct_UFunction_AMassSpawner_GetCount, "GetCount" }, // 1794648852
		{ &Z_Construct_UFunction_AMassSpawner_GetSpawningCountScale, "GetSpawningCountScale" }, // 1688100868
		{ &Z_Construct_UFunction_AMassSpawner_ScaleSpawningCount, "ScaleSpawningCount" }, // 3154930569
		{ &Z_Construct_UFunction_AMassSpawner_UnloadConfig, "UnloadConfig" }, // 1817085823
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A spawner you can put on a map and configure it to spawn different things */" },
		{ "HideCategories", "Object Actor Input Rendering LOD Cooking Collision HLOD Partition" },
		{ "IncludePath", "MassSpawner.h" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "A spawner you can put on a map and configure it to spawn different things" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnSpawningFinishedEvent_MetaData[] = {
		{ "Comment", "/** Called once DoSpawning completes and all entities have been spawned. */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Called once DoSpawning completes and all entities have been spawned." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnSpawningFinishedEvent = { "OnSpawningFinishedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, OnSpawningFinishedEvent), Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnSpawningFinishedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnSpawningFinishedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnSpawningFinishedEvent_MetaData)) }; // 1340600556
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnDespawningFinishedEvent_MetaData[] = {
		{ "Comment", "/** Called once DoDespawning completes and all mass agents spawned by this spawner have been despawned. */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Called once DoDespawning completes and all mass agents spawned by this spawner have been despawned." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnDespawningFinishedEvent = { "OnDespawningFinishedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, OnDespawningFinishedEvent), Z_Construct_UDelegateFunction_MassSpawner_MassSpawnerOnDespawningFinishedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnDespawningFinishedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnDespawningFinishedEvent_MetaData)) }; // 3596992401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, Count), METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes_Inner = { "EntityTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassSpawnedEntityType, METADATA_PARAMS(nullptr, 0) }; // 2151562758
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "Comment", "/** Array of entity types to spawn. These define which entities to spawn. */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Array of entity types to spawn. These define which entities to spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes = { "EntityTypes", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, EntityTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes_MetaData)) }; // 2151562758
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators_Inner = { "SpawnDataGenerators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassSpawnDataGenerator, METADATA_PARAMS(nullptr, 0) }; // 3082907481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "Comment", "/** Array of entity spawn generators. These define where to spawn entities. */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Array of entity spawn generators. These define where to spawn entities." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators = { "SpawnDataGenerators", nullptr, (EPropertyFlags)0x0020088000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, SpawnDataGenerators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators_MetaData)) }; // 3082907481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay_SetBit(void* Obj)
	{
		((AMassSpawner*)Obj)->bAutoSpawnOnBeginPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay = { "bAutoSpawnOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AMassSpawner), &Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics_MetaData[] = {
		{ "Category", "Mass|Simulation" },
		{ "Comment", "/** By default TickSchematics will be appended to the simulation's schematics. If this property is set to true the\n\x09 *  TickSchematics will override the original simulation schematics */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "By default TickSchematics will be appended to the simulation's schematics. If this property is set to true the\nTickSchematics will override the original simulation schematics" },
	};
#endif
	void Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics_SetBit(void* Obj)
	{
		((AMassSpawner*)Obj)->bOverrideSchematics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics = { "bOverrideSchematics", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AMassSpawner), &Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors_Inner = { "PostSpawnProcessors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMassProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors = { "PostSpawnProcessors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, PostSpawnProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawningCountScale_MetaData[] = {
		{ "Category", "Mass|Spawn" },
		{ "Comment", "/** Scale of the spawning count */" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
		{ "ToolTip", "Scale of the spawning count" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawningCountScale = { "SpawningCountScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, SpawningCountScale), METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawningCountScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawningCountScale_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassSpawner, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnSpawningFinishedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_OnDespawningFinishedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_EntityTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawnDataGenerators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_bAutoSpawnOnBeginPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_bOverrideSchematics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_PostSpawnProcessors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpawningCountScale,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassSpawner_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassSpawner_Statics::ClassParams = {
		&AMassSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMassSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMassSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassSpawner()
	{
		if (!Z_Registration_Info_UClass_AMassSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassSpawner.OuterSingleton, Z_Construct_UClass_AMassSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassSpawner.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<AMassSpawner>()
	{
		return AMassSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassSpawner);
	AMassSpawner::~AMassSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassSpawner, AMassSpawner::StaticClass, TEXT("AMassSpawner"), &Z_Registration_Info_UClass_AMassSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassSpawner), 513332130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_3508592742(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
