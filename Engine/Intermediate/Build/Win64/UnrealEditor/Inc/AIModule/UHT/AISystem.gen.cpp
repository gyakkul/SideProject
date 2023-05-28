// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/AISystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISystem() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIHotSpotManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem();
	AIMODULE_API UClass* Z_Construct_UClass_UAISystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryManager_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UAISystemBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	DEFINE_FUNCTION(UAISystem::execAILoggingVerbose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AILoggingVerbose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISystem::execAIIgnorePlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AIIgnorePlayers();
		P_NATIVE_END;
	}
	void UAISystem::StaticRegisterNativesUAISystem()
	{
		UClass* Class = UAISystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIIgnorePlayers", &UAISystem::execAIIgnorePlayers },
			{ "AILoggingVerbose", &UAISystem::execAILoggingVerbose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------//\n// cheats\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "cheats" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AIIgnorePlayers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISystem_AIIgnorePlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISystem_AIIgnorePlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISystem, nullptr, "AILoggingVerbose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISystem_AILoggingVerbose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISystem_AILoggingVerbose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISystem);
	UClass* Z_Construct_UClass_UAISystem_NoRegister()
	{
		return UAISystem::StaticClass();
	}
	struct Z_Construct_UClass_UAISystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerceptionSystemClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotSpotManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HotSpotManagerClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvQueryManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnvQueryManagerClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfollowingRegularPathPointAcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PathfollowingNavLinkAcceptanceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinishMoveOnGoalOverlap_MetaData[];
#endif
		static void NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishMoveOnGoalOverlap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAcceptPartialPaths_MetaData[];
#endif
		static void NewProp_bAcceptPartialPaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAcceptPartialPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafing_MetaData[];
#endif
		static void NewProp_bAllowStrafing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowControllersAsEQSQuerier_MetaData[];
#endif
		static void NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowControllersAsEQSQuerier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebuggerPlugin_MetaData[];
#endif
		static void NewProp_bEnableDebuggerPlugin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebuggerPlugin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForgetStaleActors_MetaData[];
#endif
		static void NewProp_bForgetStaleActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForgetStaleActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddBlackboardSelfKey_MetaData[];
#endif
		static void NewProp_bAddBlackboardSelfKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddBlackboardSelfKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearBBEntryOnBTEQSFail_MetaData[];
#endif
		static void NewProp_bClearBBEntryOnBTEQSFail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBBEntryOnBTEQSFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData[];
#endif
		static void NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSightCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSightCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorTreeManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvironmentQueryManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnvironmentQueryManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerceptionSystem;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllProxyObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllProxyObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllProxyObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotSpotManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HotSpotManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavLocalGrids_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavLocalGrids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISystemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISystem_AIIgnorePlayers, "AIIgnorePlayers" }, // 985553409
		{ &Z_Construct_UFunction_UAISystem_AILoggingVerbose, "AILoggingVerbose" }, // 712059757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISystem.h" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the perception system, can be game-specific */" },
		{ "DisplayName", "Perception System Class" },
		{ "MetaClass", "/Script/AIModule.AIPerceptionSystem" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the perception system, can be game-specific" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName = { "PerceptionSystemClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, PerceptionSystemClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the hot spot manager, can be game-specific */" },
		{ "DisplayName", "AIHotSpotManager Class" },
		{ "MetaClass", "/Script/AIModule.AIHotSpotManager" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the hot spot manager, can be game-specific" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName = { "HotSpotManagerClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, HotSpotManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** Class that will be used to spawn the env query manager, can be game-specific */" },
		{ "DisplayName", "EnvQueryManager Class" },
		{ "MetaClass", "/Script/AIModule.EnvQueryManager" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Class that will be used to spawn the env query manager, can be game-specific" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName = { "EnvQueryManagerClassName", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, EnvQueryManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Default AI movement's acceptance radius used to determine whether \n \x09 * AI reached path's end */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Default AI movement's acceptance radius used to determine whether\nAI reached path's end" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, AcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Value used for pathfollowing's internal code to determine whether AI reached path's point. \n\x09 *\x09@note this value is not used for path's last point. @see AcceptanceRadius*/" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Value used for pathfollowing's internal code to determine whether AI reached path's point.\n    @note this value is not used for path's last point. @see AcceptanceRadius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius = { "PathfollowingRegularPathPointAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, PathfollowingRegularPathPointAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n\x09 *\x09""but gets applied only when next point on a path represents a begining of navigation link */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Similarly to PathfollowingRegularPathPointAcceptanceRadius used by pathfollowing's internals\n    but gets applied only when next point on a path represents a begining of navigation link" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius = { "PathfollowingNavLinkAcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, PathfollowingNavLinkAcceptanceRadius), METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** If true, overlapping the goal will be counted by default as finishing a move */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If true, overlapping the goal will be counted by default as finishing a move" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bFinishMoveOnGoalOverlap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap = { "bFinishMoveOnGoalOverlap", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets default value for rather move tasks accept partial paths or not */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Sets default value for rather move tasks accept partial paths or not" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAcceptPartialPaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths = { "bAcceptPartialPaths", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** Sets default value for rather move tasks allow strafing or not */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Sets default value for rather move tasks allow strafing or not" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAllowStrafing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing = { "bAllowStrafing", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData[] = {
		{ "Category", "EQS" },
		{ "Comment", "/** if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will \n\x09 *\x09in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n\x09 *\x09pawn-less controller */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if enable will make EQS not complaint about using Controllers as queriers. Default behavior (false) will\n    in places automatically convert controllers to pawns, and complain if code user bypasses the conversion or uses\n    pawn-less controller" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAllowControllersAsEQSQuerier = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier = { "bAllowControllersAsEQSQuerier", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** if set, GameplayDebuggerPlugin will be loaded on module's startup */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "if set, GameplayDebuggerPlugin will be loaded on module's startup" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bEnableDebuggerPlugin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin = { "bEnableDebuggerPlugin", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_MetaData[] = {
		{ "Category", "AISystem" },
		{ "Comment", "/** If set, actors will be forgotten by the perception system when their stimulus has expired.\n\x09 *\x09If not set, the perception system will remember the actor even if they are no longer perceived and their\n\x09 *\x09stimuli has exceeded its max age */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If set, actors will be forgotten by the perception system when their stimulus has expired.\n    If not set, the perception system will remember the actor even if they are no longer perceived and their\n    stimuli has exceeded its max age" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bForgetStaleActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors = { "bForgetStaleActors", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "Comment", "/** If set to true will result in automatically adding the SelfActor key to new Blackboard assets. It will \n\x09 *\x09""also result in making sure all the BB assets loaded do have the SelfKey entry, via PostLoad */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If set to true will result in automatically adding the SelfActor key to new Blackboard assets. It will\n    also result in making sure all the BB assets loaded do have the SelfKey entry, via PostLoad" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bAddBlackboardSelfKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey = { "bAddBlackboardSelfKey", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bClearBBEntryOnBTEQSFail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail = { "bClearBBEntryOnBTEQSFail", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData[] = {
		{ "Category", "Behavior Tree" },
		{ "Comment", "/** If enabled, blackboard based decorators will set key to 'Invalid' on creation or when selected key no longer exists (instead of using the first key of the blackboard). */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "If enabled, blackboard based decorators will set key to 'Invalid' on creation or when selected key no longer exists (instead of using the first key of the blackboard)." },
	};
#endif
	void Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit(void* Obj)
	{
		((UAISystem*)Obj)->bBlackboardKeyDecoratorAllowsNoneAsValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue = { "bBlackboardKeyDecoratorAllowsNoneAsValue", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAISystem), &Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData[] = {
		{ "Category", "PerceptionSystem" },
		{ "Comment", "/** Which collision channel to use for sight checks by default */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Which collision channel to use for sight checks by default" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel = { "DefaultSightCollisionChannel", nullptr, (EPropertyFlags)0x0010000000054001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, DefaultSightCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData[] = {
		{ "Comment", "/** Behavior tree manager used by game */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Behavior tree manager used by game" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager = { "BehaviorTreeManager", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, BehaviorTreeManager), Z_Construct_UClass_UBehaviorTreeManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData[] = {
		{ "Comment", "/** Environment query manager used by game */" },
		{ "ModuleRelativePath", "Classes/AISystem.h" },
		{ "ToolTip", "Environment query manager used by game" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager = { "EnvironmentQueryManager", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, EnvironmentQueryManager), Z_Construct_UClass_UEnvQueryManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem = { "PerceptionSystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, PerceptionSystem), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAIAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects = { "AllProxyObjects", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, AllProxyObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager = { "HotSpotManager", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, HotSpotManager), Z_Construct_UClass_UAIHotSpotManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AISystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids = { "NavLocalGrids", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISystem, NavLocalGrids), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystemClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManagerClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_EnvQueryManagerClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingRegularPathPointAcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PathfollowingNavLinkAcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bFinishMoveOnGoalOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAcceptPartialPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowStrafing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAllowControllersAsEQSQuerier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bEnableDebuggerPlugin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bForgetStaleActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bAddBlackboardSelfKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bClearBBEntryOnBTEQSFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_bBlackboardKeyDecoratorAllowsNoneAsValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_DefaultSightCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_BehaviorTreeManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_EnvironmentQueryManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_PerceptionSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_AllProxyObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_HotSpotManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISystem_Statics::NewProp_NavLocalGrids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISystem_Statics::ClassParams = {
		&UAISystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISystem()
	{
		if (!Z_Registration_Info_UClass_UAISystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISystem.OuterSingleton, Z_Construct_UClass_UAISystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISystem.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISystem>()
	{
		return UAISystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISystem);
	UAISystem::~UAISystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISystem, UAISystem::StaticClass, TEXT("UAISystem"), &Z_Registration_Info_UClass_UAISystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISystem), 304481600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_1285513988(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AISystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
