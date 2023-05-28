// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavigationSystem.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavAgentSelector.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemBase();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationQueryResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_FNavigationSystemRunMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAgentSelector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavDataConfig();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UCrowdManagerBase_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemModuleConfig();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
	NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics
	{
		struct _Script_NavigationSystem_eventOnNavDataGenericEvent_Parms
		{
			ANavigationData* NavData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::NewProp_NavData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to let interested parties know that Nav Data has been registered */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Delegate to let interested parties know that Nav Data has been registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem, nullptr, "OnNavDataGenericEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNavDataGenericEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenericEvent, ANavigationData* NavData)
{
	struct _Script_NavigationSystem_eventOnNavDataGenericEvent_Parms
	{
		ANavigationData* NavData;
	};
	_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms Parms;
	Parms.NavData=NavData;
	OnNavDataGenericEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UNavigationSystemV1::execK2_GetRandomPointInNavigableRadius)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execOnNavigationBoundsUpdated)
	{
		P_GET_OBJECT(ANavMeshBoundsVolume,Z_Param_NavVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigationBoundsUpdated(Z_Param_NavVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execK2_ReplaceAreaInOctreeData)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(UClass,Z_Param_OldArea);
		P_GET_OBJECT(UClass,Z_Param_NewArea);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_ReplaceAreaInOctreeData(Z_Param_Object,Z_Param_OldArea,Z_Param_NewArea);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execSetGeometryGatheringMode)
	{
		P_GET_ENUM(ENavDataGatheringModeConfig,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGeometryGatheringMode(ENavDataGatheringModeConfig(Z_Param_NewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execUnregisterNavigationInvoker)
	{
		P_GET_OBJECT(AActor,Z_Param_Invoker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterNavigationInvoker(Z_Param_Invoker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execRegisterNavigationInvoker)
	{
		P_GET_OBJECT(AActor,Z_Param_Invoker);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileGenerationRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileRemovalRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterNavigationInvoker(Z_Param_Invoker,Z_Param_TileGenerationRadius,Z_Param_TileRemovalRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execResetMaxSimultaneousTileGenerationJobsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMaxSimultaneousTileGenerationJobsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execSetMaxSimultaneousTileGenerationJobsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxNumberOfJobs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxSimultaneousTileGenerationJobsCount(Z_Param_MaxNumberOfJobs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execNavigationRaycast)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RayEnd);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HitLocation);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_GET_OBJECT(AController,Z_Param_Querier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::NavigationRaycast(Z_Param_WorldContextObject,Z_Param_Out_RayStart,Z_Param_Out_RayEnd,Z_Param_Out_HitLocation,Z_Param_FilterClass,Z_Param_Querier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execFindPathToActorSynchronously)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart);
		P_GET_OBJECT(AActor,Z_Param_GoalActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TetherDistance);
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToActorSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_GoalActor,Z_Param_TetherDistance,Z_Param_PathfindingContext,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execFindPathToLocationSynchronously)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd);
		P_GET_OBJECT(AActor,Z_Param_PathfindingContext);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNavigationPath**)Z_Param__Result=UNavigationSystemV1::FindPathToLocationSynchronously(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_PathfindingContext,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execIsNavigationBeingBuiltOrLocked)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execIsNavigationBeingBuilt)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::IsNavigationBeingBuilt(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execGetPathLength)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_PathLength);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathLength(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathLength,Z_Param_NavData,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execGetPathCost)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PathEnd);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_PathCost);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ENavigationQueryResult::Type>*)Z_Param__Result=UNavigationSystemV1::GetPathCost(Z_Param_WorldContextObject,Z_Param_Out_PathStart,Z_Param_Out_PathEnd,Z_Param_Out_PathCost,Z_Param_NavData,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execK2_GetRandomLocationInNavigableRadius)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execK2_GetRandomReachablePointInRadius)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RandomLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_GetRandomReachablePointInRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Out_RandomLocation,Z_Param_Radius,Z_Param_NavData,Z_Param_FilterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execK2_ProjectPointToNavigation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ProjectedLocation);
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_GET_OBJECT(UClass,Z_Param_FilterClass);
		P_GET_STRUCT(FVector,Z_Param_QueryExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNavigationSystemV1::K2_ProjectPointToNavigation(Z_Param_WorldContextObject,Z_Param_Out_Point,Z_Param_Out_ProjectedLocation,Z_Param_NavData,Z_Param_FilterClass,Z_Param_QueryExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationSystemV1::execGetNavigationSystem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNavigationSystemV1**)Z_Param__Result=UNavigationSystemV1::GetNavigationSystem(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UNavigationSystemV1::StaticRegisterNativesUNavigationSystemV1()
	{
		UClass* Class = UNavigationSystemV1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindPathToActorSynchronously", &UNavigationSystemV1::execFindPathToActorSynchronously },
			{ "FindPathToLocationSynchronously", &UNavigationSystemV1::execFindPathToLocationSynchronously },
			{ "GetNavigationSystem", &UNavigationSystemV1::execGetNavigationSystem },
			{ "GetPathCost", &UNavigationSystemV1::execGetPathCost },
			{ "GetPathLength", &UNavigationSystemV1::execGetPathLength },
			{ "IsNavigationBeingBuilt", &UNavigationSystemV1::execIsNavigationBeingBuilt },
			{ "IsNavigationBeingBuiltOrLocked", &UNavigationSystemV1::execIsNavigationBeingBuiltOrLocked },
			{ "K2_GetRandomLocationInNavigableRadius", &UNavigationSystemV1::execK2_GetRandomLocationInNavigableRadius },
			{ "K2_GetRandomPointInNavigableRadius", &UNavigationSystemV1::execK2_GetRandomPointInNavigableRadius },
			{ "K2_GetRandomReachablePointInRadius", &UNavigationSystemV1::execK2_GetRandomReachablePointInRadius },
			{ "K2_ProjectPointToNavigation", &UNavigationSystemV1::execK2_ProjectPointToNavigation },
			{ "K2_ReplaceAreaInOctreeData", &UNavigationSystemV1::execK2_ReplaceAreaInOctreeData },
			{ "NavigationRaycast", &UNavigationSystemV1::execNavigationRaycast },
			{ "OnNavigationBoundsUpdated", &UNavigationSystemV1::execOnNavigationBoundsUpdated },
			{ "RegisterNavigationInvoker", &UNavigationSystemV1::execRegisterNavigationInvoker },
			{ "ResetMaxSimultaneousTileGenerationJobsCount", &UNavigationSystemV1::execResetMaxSimultaneousTileGenerationJobsCount },
			{ "SetGeometryGatheringMode", &UNavigationSystemV1::execSetGeometryGatheringMode },
			{ "SetMaxSimultaneousTileGenerationJobsCount", &UNavigationSystemV1::execSetMaxSimultaneousTileGenerationJobsCount },
			{ "UnregisterNavigationInvoker", &UNavigationSystemV1::execUnregisterNavigationInvoker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics
	{
		struct NavigationSystemV1_eventFindPathToActorSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			AActor* GoalActor;
			float TetherDistance;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherDistance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_TetherDistance = { "TetherDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, TetherDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathfindingContext = { "PathfindingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToActorSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_GoalActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_TetherDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_PathfindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Finds path instantly, in a FindPath Synchronously. Main advantage over FindPathToLocationSynchronously is that \n\x09 *\x09the resulting path will automatically get updated if goal actor moves more than TetherDistance away from last path node\n\x09 *\x09@param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_PathfindingContext", "None" },
		{ "CPP_Default_TetherDistance", "50.000000" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Finds path instantly, in a FindPath Synchronously. Main advantage over FindPathToLocationSynchronously is that\n    the resulting path will automatically get updated if goal actor moves more than TetherDistance away from last path node\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "FindPathToActorSynchronously", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::NavigationSystemV1_eventFindPathToActorSynchronously_Parms), Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics
	{
		struct NavigationSystemV1_eventFindPathToLocationSynchronously_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			AActor* PathfindingContext;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			UNavigationPath* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingContext;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathfindingContext = { "PathfindingContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, PathfindingContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventFindPathToLocationSynchronously_Parms, ReturnValue), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_PathfindingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Finds path instantly, in a FindPath Synchronously. \n\x09 *\x09@param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_PathfindingContext", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Finds path instantly, in a FindPath Synchronously.\n    @param PathfindingContext could be one of following: NavigationData (like Navmesh actor), Pawn or Controller. This parameter determines parameters of specific pathfinding query" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "FindPathToLocationSynchronously", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::NavigationSystemV1_eventFindPathToLocationSynchronously_Parms), Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics
	{
		struct NavigationSystemV1_eventGetNavigationSystem_Parms
		{
			UObject* WorldContextObject;
			UNavigationSystemV1* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetNavigationSystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetNavigationSystem_Parms, ReturnValue), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "//----------------------------------------------------------------------//\n// Blueprint functions\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Blueprint functions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "GetNavigationSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::NavigationSystemV1_eventGetNavigationSystem_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics
	{
		struct NavigationSystemV1_eventGetPathCost_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			double PathCost;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PathCost;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathCost = { "PathCost", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, PathCost), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathCost_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) }; // 2048118916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_PathCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Potentially expensive. Use with caution. Consider using UPathFollowingComponent::GetRemainingPathCost instead */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Potentially expensive. Use with caution. Consider using UPathFollowingComponent::GetRemainingPathCost instead" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "GetPathCost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::NavigationSystemV1_eventGetPathCost_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetPathCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics
	{
		struct NavigationSystemV1_eventGetPathLength_Parms
		{
			UObject* WorldContextObject;
			FVector PathStart;
			FVector PathEnd;
			double PathLength;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			TEnumAsByte<ENavigationQueryResult::Type> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathEnd;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PathLength;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart = { "PathStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd = { "PathEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, PathLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventGetPathLength_Parms, ReturnValue), Z_Construct_UEnum_Engine_ENavigationQueryResult, METADATA_PARAMS(nullptr, 0) }; // 2048118916
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_PathLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Potentially expensive. Use with caution */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Potentially expensive. Use with caution" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "GetPathLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::NavigationSystemV1_eventGetPathLength_Parms), Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_GetPathLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_GetPathLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics
	{
		struct NavigationSystemV1_eventIsNavigationBeingBuilt_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventIsNavigationBeingBuilt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventIsNavigationBeingBuilt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventIsNavigationBeingBuilt_Parms), &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "IsNavigationBeingBuilt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::NavigationSystemV1_eventIsNavigationBeingBuilt_Parms), Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics
	{
		struct NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms), &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "IsNavigationBeingBuiltOrLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::NavigationSystemV1_eventIsNavigationBeingBuiltOrLocked_Parms), Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics
	{
		struct NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_RandomLocation = { "RandomLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_RandomLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Generates a random location in navigable space within given radius of Origin.\n\x09 *\x09@return Return Value represents if the call was successful */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DisplayName", "GetRandomLocationInNavigableRadius" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "GetRandomLocationInNavigableRadius" },
		{ "ToolTip", "Generates a random location in navigable space within given radius of Origin.\n    @return Return Value represents if the call was successful" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "K2_GetRandomLocationInNavigableRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::NavigationSystemV1_eventK2_GetRandomLocationInNavigableRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics
	{
		struct NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_RandomLocation = { "RandomLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_RandomLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetRandomPointInNavigableRadius is deprecated. Use GetRandomLocationInNavigableRadius instead" },
		{ "DisplayName", "GetRandomPointInNavigableRadius" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "GetRandomPointInNavigableRadius" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "K2_GetRandomPointInNavigableRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::NavigationSystemV1_eventK2_GetRandomPointInNavigableRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics
	{
		struct NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FVector RandomLocation;
			float Radius;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RandomLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_RandomLocation = { "RandomLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, RandomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_RandomLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Generates a random location reachable from given Origin location.\n\x09 *\x09@return Return Value represents if the call was successful */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_NavData", "None" },
		{ "DisplayName", "GetRandomReachablePointInRadius" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "GetRandomReachablePointInRadius" },
		{ "ToolTip", "Generates a random location reachable from given Origin location.\n    @return Return Value represents if the call was successful" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "K2_GetRandomReachablePointInRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::NavigationSystemV1_eventK2_GetRandomReachablePointInRadius_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics
	{
		struct NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms
		{
			UObject* WorldContextObject;
			FVector Point;
			FVector ProjectedLocation;
			ANavigationData* NavData;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			FVector QueryExtent;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectedLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryExtent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ProjectedLocation = { "ProjectedLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, ProjectedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent = { "QueryExtent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms, QueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent_MetaData)) };
	void Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ProjectedLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_NavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_QueryExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Project a point onto the NavigationData */" },
		{ "CPP_Default_QueryExtent", "" },
		{ "DisplayName", "ProjectPointToNavigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ScriptName", "ProjectPointToNavigation" },
		{ "ToolTip", "Project a point onto the NavigationData" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "K2_ProjectPointToNavigation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::NavigationSystemV1_eventK2_ProjectPointToNavigation_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics
	{
		struct NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms
		{
			const UObject* Object;
			TSubclassOf<UNavArea>  OldArea;
			TSubclassOf<UNavArea>  NewArea;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OldArea;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewArea;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_OldArea = { "OldArea", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms, OldArea), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_NewArea = { "NewArea", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms, NewArea), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms), &Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_OldArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_NewArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "DisplayName", "ReplaceAreaInOctreeData" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "K2_ReplaceAreaInOctreeData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::NavigationSystemV1_eventK2_ReplaceAreaInOctreeData_Parms), Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics
	{
		struct NavigationSystemV1_eventNavigationRaycast_Parms
		{
			UObject* WorldContextObject;
			FVector RayStart;
			FVector RayEnd;
			FVector HitLocation;
			TSubclassOf<UNavigationQueryFilter>  FilterClass;
			AController* Querier;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayStart_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RayEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Querier;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart = { "RayStart", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, RayStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd = { "RayEnd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, RayEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_Querier = { "Querier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventNavigationRaycast_Parms, Querier), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavigationSystemV1_eventNavigationRaycast_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavigationSystemV1_eventNavigationRaycast_Parms), &Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_RayEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_HitLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_FilterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_Querier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Performs navigation raycast on NavigationData appropriate for given Querier.\n\x09 *\x09@param Querier if not passed default navigation data will be used\n\x09 *\x09@param HitLocation if line was obstructed this will be set to hit location. Otherwise it contains SegmentEnd\n\x09 *\x09@return true if line from RayStart to RayEnd was obstructed. Also, true when no navigation data present */" },
		{ "CPP_Default_FilterClass", "None" },
		{ "CPP_Default_Querier", "None" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Performs navigation raycast on NavigationData appropriate for given Querier.\n    @param Querier if not passed default navigation data will be used\n    @param HitLocation if line was obstructed this will be set to hit location. Otherwise it contains SegmentEnd\n    @return true if line from RayStart to RayEnd was obstructed. Also, true when no navigation data present" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "NavigationRaycast", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::NavigationSystemV1_eventNavigationRaycast_Parms), Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics
	{
		struct NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms
		{
			ANavMeshBoundsVolume* NavVolume;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::NewProp_NavVolume = { "NavVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms, NavVolume), Z_Construct_UClass_ANavMeshBoundsVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::NewProp_NavVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "// @todo document\n" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "OnNavigationBoundsUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::NavigationSystemV1_eventOnNavigationBoundsUpdated_Parms), Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics
	{
		struct NavigationSystemV1_eventRegisterNavigationInvoker_Parms
		{
			AActor* Invoker;
			float TileGenerationRadius;
			float TileRemovalRadius;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Invoker;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileGenerationRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileRemovalRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_Invoker = { "Invoker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileGenerationRadius = { "TileGenerationRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, TileGenerationRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileRemovalRadius = { "TileRemovalRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventRegisterNavigationInvoker_Parms, TileRemovalRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_Invoker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileGenerationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NewProp_TileRemovalRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Registers given actor as a \"navigation enforcer\" which means navigation system will\n\x09 *\x09make sure navigation is being generated in specified radius around it.\n\x09 *\x09@note: you need NavigationSystem's GenerateNavigationOnlyAroundNavigationInvokers to be set to true\n\x09 *\x09\x09to take advantage of this feature\n\x09 */" },
		{ "CPP_Default_TileGenerationRadius", "3000.000000" },
		{ "CPP_Default_TileRemovalRadius", "5000.000000" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Registers given actor as a \"navigation enforcer\" which means navigation system will\n    make sure navigation is being generated in specified radius around it.\n    @note: you need NavigationSystem's GenerateNavigationOnlyAroundNavigationInvokers to be set to true\n            to take advantage of this feature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "RegisterNavigationInvoker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::NavigationSystemV1_eventRegisterNavigationInvoker_Parms), Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Brings limit of simultaneous navmesh tile generation jobs back to Project Setting's default value */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Brings limit of simultaneous navmesh tile generation jobs back to Project Setting's default value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "ResetMaxSimultaneousTileGenerationJobsCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics
	{
		struct NavigationSystemV1_eventSetGeometryGatheringMode_Parms
		{
			ENavDataGatheringModeConfig NewMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSetGeometryGatheringMode_Parms, NewMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(nullptr, 0) }; // 278082669
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation|Generation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "SetGeometryGatheringMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::NavigationSystemV1_eventSetGeometryGatheringMode_Parms), Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics
	{
		struct NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms
		{
			int32 MaxNumberOfJobs;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfJobs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::NewProp_MaxNumberOfJobs = { "MaxNumberOfJobs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms, MaxNumberOfJobs), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::NewProp_MaxNumberOfJobs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** will limit the number of simultaneously running navmesh tile generation jobs to specified number.\n\x09 *\x09@param MaxNumberOfJobs gets trimmed to be at least 1. You cannot use this function to pause navmesh generation */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "will limit the number of simultaneously running navmesh tile generation jobs to specified number.\n    @param MaxNumberOfJobs gets trimmed to be at least 1. You cannot use this function to pause navmesh generation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "SetMaxSimultaneousTileGenerationJobsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::NavigationSystemV1_eventSetMaxSimultaneousTileGenerationJobsCount_Parms), Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics
	{
		struct NavigationSystemV1_eventUnregisterNavigationInvoker_Parms
		{
			AActor* Invoker;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Invoker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::NewProp_Invoker = { "Invoker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavigationSystemV1_eventUnregisterNavigationInvoker_Parms, Invoker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::NewProp_Invoker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Removes given actor from the list of active navigation enforcers.\n\x09 *\x09@see RegisterNavigationInvoker for more details */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Removes given actor from the list of active navigation enforcers.\n    @see RegisterNavigationInvoker for more details" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationSystemV1, nullptr, "UnregisterNavigationInvoker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::NavigationSystemV1_eventUnregisterNavigationInvoker_Parms), Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSystemV1);
	UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister()
	{
		return UNavigationSystemV1::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemV1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainNavData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbstractNavData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AbstractNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAgentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultAgentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrowdManagerClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CrowdManagerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCreateNavigationData_MetaData[];
#endif
		static void NewProp_bAutoCreateNavigationData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCreateNavigationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[];
#endif
		static void NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnNavDataInNavBoundsLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowClientSideNavigation_MetaData[];
#endif
		static void NewProp_bAllowClientSideNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowClientSideNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDiscardSubLevelNavData_MetaData[];
#endif
		static void NewProp_bShouldDiscardSubLevelNavData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDiscardSubLevelNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickWhilePaused_MetaData[];
#endif
		static void NewProp_bTickWhilePaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWhilePaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRebuilding_MetaData[];
#endif
		static void NewProp_bSupportRebuilding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRebuilding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialBuildingLocked_MetaData[];
#endif
		static void NewProp_bInitialBuildingLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialBuildingLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData[];
#endif
		static void NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipAgentHeightCheckWhenPickingNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryExportTriangleCountWarningThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeometryExportTriangleCountWarningThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData[];
#endif
		static void NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateNavigationOnlyAroundNavigationInvokers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTilesUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveTilesUpdateInterval;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataGatheringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataGatheringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataGatheringMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtyAreaWarningSizeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirtyAreaWarningSizeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GatheringNavModifiersWarningLimitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GatheringNavModifiersWarningLimitTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportedAgents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAgentsMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportedAgentsMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildBounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavDataSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavDataSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NavDataSet;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavDataRegistrationQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavDataRegistrationQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NavDataRegistrationQueue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNavDataRegisteredEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavDataRegisteredEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNavigationGenerationFinishedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavigationGenerationFinishedDelegate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemV1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationSystemV1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationSystemV1_FindPathToActorSynchronously, "FindPathToActorSynchronously" }, // 1541536064
		{ &Z_Construct_UFunction_UNavigationSystemV1_FindPathToLocationSynchronously, "FindPathToLocationSynchronously" }, // 3599474429
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetNavigationSystem, "GetNavigationSystem" }, // 3743565318
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetPathCost, "GetPathCost" }, // 3118589696
		{ &Z_Construct_UFunction_UNavigationSystemV1_GetPathLength, "GetPathLength" }, // 3596655613
		{ &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuilt, "IsNavigationBeingBuilt" }, // 4117522568
		{ &Z_Construct_UFunction_UNavigationSystemV1_IsNavigationBeingBuiltOrLocked, "IsNavigationBeingBuiltOrLocked" }, // 382549974
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius, "K2_GetRandomLocationInNavigableRadius" }, // 1868025183
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomPointInNavigableRadius, "K2_GetRandomPointInNavigableRadius" }, // 911812956
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_GetRandomReachablePointInRadius, "K2_GetRandomReachablePointInRadius" }, // 3872832639
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_ProjectPointToNavigation, "K2_ProjectPointToNavigation" }, // 3487737237
		{ &Z_Construct_UFunction_UNavigationSystemV1_K2_ReplaceAreaInOctreeData, "K2_ReplaceAreaInOctreeData" }, // 3325588136
		{ &Z_Construct_UFunction_UNavigationSystemV1_NavigationRaycast, "NavigationRaycast" }, // 1571907239
		{ &Z_Construct_UFunction_UNavigationSystemV1_OnNavigationBoundsUpdated, "OnNavigationBoundsUpdated" }, // 1457550622
		{ &Z_Construct_UFunction_UNavigationSystemV1_RegisterNavigationInvoker, "RegisterNavigationInvoker" }, // 1408404833
		{ &Z_Construct_UFunction_UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount, "ResetMaxSimultaneousTileGenerationJobsCount" }, // 1573212041
		{ &Z_Construct_UFunction_UNavigationSystemV1_SetGeometryGatheringMode, "SetGeometryGatheringMode" }, // 2695174250
		{ &Z_Construct_UFunction_UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount, "SetMaxSimultaneousTileGenerationJobsCount" }, // 354044059
		{ &Z_Construct_UFunction_UNavigationSystemV1_UnregisterNavigationInvoker, "UnregisterNavigationInvoker" }, // 1818129531
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationSystem.h" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData = { "MainNavData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, MainNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData[] = {
		{ "Comment", "/** special navigation data for managing direct paths, not part of NavDataSet! */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "special navigation data for managing direct paths, not part of NavDataSet!" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData = { "AbstractNavData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, AbstractNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DefaultAgentName_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If not None indicates which of navigation datas and supported agents are\n\x09 * going to be used as the default ones. If navigation agent of this type does\n\x09 * not exist or is not enabled then the first available nav data will be used\n\x09 * as the default one */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If not None indicates which of navigation datas and supported agents are\ngoing to be used as the default ones. If navigation agent of this type does\nnot exist or is not enabled then the first available nav data will be used\nas the default one" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DefaultAgentName = { "DefaultAgentName", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, DefaultAgentName), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DefaultAgentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DefaultAgentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass = { "CrowdManagerClass", nullptr, (EPropertyFlags)0x0024080000004015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, CrowdManagerClass), Z_Construct_UClass_UCrowdManagerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** Should navigation system spawn default Navigation Data when there's none and there are navigation bounds present? */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Should navigation system spawn default Navigation Data when there's none and there are navigation bounds present?" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bAutoCreateNavigationData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData = { "bAutoCreateNavigationData", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** If true will try to spawn the navigation data instance in the sublevel with navigation bounds, if false it will spawn in the persistent level */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If true will try to spawn the navigation data instance in the sublevel with navigation bounds, if false it will spawn in the persistent level" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSpawnNavDataInNavBoundsLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel = { "bSpawnNavDataInNavBoundsLevel", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** If false, will not create nav collision when connecting as a client */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If false, will not create nav collision when connecting as a client" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bAllowClientSideNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation = { "bAllowClientSideNavigation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** If true, games should ignore navigation data inside loaded sublevels */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If true, games should ignore navigation data inside loaded sublevels" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bShouldDiscardSubLevelNavData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData = { "bShouldDiscardSubLevelNavData", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** If true, will update navigation even when the game is paused */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If true, will update navigation even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bTickWhilePaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused = { "bTickWhilePaused", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData[] = {
		{ "Comment", "/** gets set to true if gathering navigation data (like in navoctree) is required due to the need of navigation generation \n\x09 *\x09Is always true in Editor Mode. In other modes it depends on bRebuildAtRuntime of every required NavigationData class' CDO\n\x09 */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "gets set to true if gathering navigation data (like in navoctree) is required due to the need of navigation generation\n    Is always true in Editor Mode. In other modes it depends on bRebuildAtRuntime of every required NavigationData class' CDO" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSupportRebuilding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding = { "bSupportRebuilding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** if set to true will result navigation system not rebuild navigation until \n\x09 *\x09""a call to ReleaseInitialBuildingLock() is called. Does not influence \n\x09 *\x09""editor-time generation (i.e. does influence PIE and Game).\n\x09 *\x09""Defaults to false.*/" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "if set to true will result navigation system not rebuild navigation until\n    a call to ReleaseInitialBuildingLock() is called. Does not influence\n    editor-time generation (i.e. does influence PIE and Game).\n    Defaults to false." },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bInitialBuildingLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked = { "bInitialBuildingLocked", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** false by default, if set to true will result in not caring about nav agent height \n\x09 *\x09when trying to match navigation data to passed in nav agent */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "false by default, if set to true will result in not caring about nav agent height\n    when trying to match navigation data to passed in nav agent" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bSkipAgentHeightCheckWhenPickingNavData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData = { "bSkipAgentHeightCheckWhenPickingNavData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GeometryExportTriangleCountWarningThreshold_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** Warnings are logged if exporting the navigation collision for an object exceed this triangle count.\n\x09 * Use -1 to disable. */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Warnings are logged if exporting the navigation collision for an object exceed this triangle count.\nUse -1 to disable." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GeometryExportTriangleCountWarningThreshold = { "GeometryExportTriangleCountWarningThreshold", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, GeometryExportTriangleCountWarningThreshold), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GeometryExportTriangleCountWarningThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GeometryExportTriangleCountWarningThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData[] = {
		{ "Category", "Navigation Enforcing" },
		{ "Comment", "/** If set to true navigation will be generated only around registered \"navigation enforcers\"\n\x09*\x09This has a range of consequences (including how navigation octree operates) so it needs to\n\x09*\x09""be a conscious decision.\n\x09*\x09Once enabled results in whole world being navigable.\n\x09*\x09@see RegisterNavigationInvoker\n\x09*/" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "If set to true navigation will be generated only around registered \"navigation enforcers\"\n     This has a range of consequences (including how navigation octree operates) so it needs to\n     be a conscious decision.\n     Once enabled results in whole world being navigable.\n     @see RegisterNavigationInvoker" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit(void* Obj)
	{
		((UNavigationSystemV1*)Obj)->bGenerateNavigationOnlyAroundNavigationInvokers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers = { "bGenerateNavigationOnlyAroundNavigationInvokers", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemV1), &Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData[] = {
		{ "Category", "Navigation Enforcing" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Minimal time, in seconds, between active tiles set update */" },
		{ "EditCondition", "bGenerateNavigationOnlyAroundNavigationInvokers" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Minimal time, in seconds, between active tiles set update" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval = { "ActiveTilesUpdateInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, ActiveTilesUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "Comment", "/** Sets how navigation data should be gathered when building collision information */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Sets how navigation data should be gathered when building collision information" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode = { "DataGatheringMode", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, DataGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringModeConfig, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_MetaData)) }; // 278082669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreaWarningSizeThreshold_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** -1 by default, if set to a positive value dirty areas with any dimensions in 2d over the threshold created at runtime will be logged */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "-1 by default, if set to a positive value dirty areas with any dimensions in 2d over the threshold created at runtime will be logged" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreaWarningSizeThreshold = { "DirtyAreaWarningSizeThreshold", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, DirtyAreaWarningSizeThreshold), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreaWarningSizeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreaWarningSizeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GatheringNavModifiersWarningLimitTime_MetaData[] = {
		{ "Category", "NavigationSystem" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/** -1.0f by default, if set to a positive value, all calls to GetNavigationData will be timed and compared to it. \n\x09*\x09Over the limit calls will be logged as warnings. \n\x09*\x09In seconds. Non-shipping build only.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "-1.0f by default, if set to a positive value, all calls to GetNavigationData will be timed and compared to it.\n     Over the limit calls will be logged as warnings.\n     In seconds. Non-shipping build only." },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GatheringNavModifiersWarningLimitTime = { "GatheringNavModifiersWarningLimitTime", nullptr, (EPropertyFlags)0x00200c0000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, GatheringNavModifiersWarningLimitTime), METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GatheringNavModifiersWarningLimitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GatheringNavModifiersWarningLimitTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_Inner = { "SupportedAgents", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavDataConfig, METADATA_PARAMS(nullptr, 0) }; // 3162828895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData[] = {
		{ "Category", "Agents" },
		{ "Comment", "/** List of agents types supported by this navigation system */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "List of agents types supported by this navigation system" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents = { "SupportedAgents", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, SupportedAgents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_MetaData)) }; // 3162828895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgentsMask_MetaData[] = {
		{ "Category", "Agents" },
		{ "Comment", "/** NavigationSystem's properties in Project Settings define all possible supported agents,\n\x09 *\x09""but a specific navigation system can choose to support only a subset of agents. Set via \n\x09 *\x09NavigationSystemConfig */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "NavigationSystem's properties in Project Settings define all possible supported agents,\n    but a specific navigation system can choose to support only a subset of agents. Set via\n    NavigationSystemConfig" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgentsMask = { "SupportedAgentsMask", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, SupportedAgentsMask), Z_Construct_UScriptStruct_FNavAgentSelector, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgentsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgentsMask_MetaData)) }; // 1383248333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_BuildBounds_MetaData[] = {
		{ "Comment", "/** Bounds of tiles to be built */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Bounds of tiles to be built" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_BuildBounds = { "BuildBounds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, BuildBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_BuildBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_BuildBounds_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_Inner = { "NavDataSet", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet = { "NavDataSet", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, NavDataSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_Inner = { "NavDataRegistrationQueue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue = { "NavDataRegistrationQueue", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, NavDataRegistrationQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData[] = {
		{ "Comment", "/*BlueprintAssignable, */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "BlueprintAssignable," },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent = { "OnNavDataRegisteredEvent", nullptr, (EPropertyFlags)0x0010000000082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OnNavDataRegisteredEvent), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent_MetaData)) }; // 509860348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData[] = {
		{ "displayname", "OnNavigationGenerationFinished" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate = { "OnNavigationGenerationFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OnNavigationGenerationFinishedDelegate), Z_Construct_UDelegateFunction_NavigationSystem_OnNavDataGenericEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate_MetaData)) }; // 509860348
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode = { "OperationMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavigationSystemV1, OperationMode), Z_Construct_UEnum_Engine_FNavigationSystemRunMode, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_MetaData)) }; // 3607599205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_MainNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_AbstractNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DefaultAgentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_CrowdManagerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAutoCreateNavigationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSpawnNavDataInNavBoundsLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bAllowClientSideNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bShouldDiscardSubLevelNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bTickWhilePaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSupportRebuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bInitialBuildingLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bSkipAgentHeightCheckWhenPickingNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GeometryExportTriangleCountWarningThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_bGenerateNavigationOnlyAroundNavigationInvokers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_ActiveTilesUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DataGatheringMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_DirtyAreaWarningSizeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_GatheringNavModifiersWarningLimitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_SupportedAgentsMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_BuildBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_NavDataRegistrationQueue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavDataRegisteredEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OnNavigationGenerationFinishedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemV1_Statics::NewProp_OperationMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemV1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemV1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemV1_Statics::ClassParams = {
		&UNavigationSystemV1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::PropPointers),
		0,
		0x009000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemV1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemV1()
	{
		if (!Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton, Z_Construct_UClass_UNavigationSystemV1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationSystemV1.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationSystemV1>()
	{
		return UNavigationSystemV1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemV1);
	void UNavigationSystemModuleConfig::StaticRegisterNativesUNavigationSystemModuleConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationSystemModuleConfig);
	UClass* Z_Construct_UClass_UNavigationSystemModuleConfig_NoRegister()
	{
		return UNavigationSystemModuleConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrictlyStatic_MetaData[];
#endif
		static void NewProp_bStrictlyStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrictlyStatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateOnClient_MetaData[];
#endif
		static void NewProp_bCreateOnClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateOnClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSpawnMissingNavData_MetaData[];
#endif
		static void NewProp_bAutoSpawnMissingNavData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSpawnMissingNavData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[];
#endif
		static void NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnNavDataInNavBoundsLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavigationSystemConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------//\n// UNavigationSystemModuleConfig \n//----------------------------------------------------------------------//\n" },
		{ "IncludePath", "NavigationSystem.h" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UNavigationSystemModuleConfig" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Whether at game runtime we expect any kind of dynamic navigation generation */" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
		{ "ToolTip", "Whether at game runtime we expect any kind of dynamic navigation generation" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bStrictlyStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic = { "bStrictlyStatic", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bCreateOnClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient = { "bCreateOnClient", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bAutoSpawnMissingNavData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData = { "bAutoSpawnMissingNavData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationSystem.h" },
	};
#endif
	void Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit(void* Obj)
	{
		((UNavigationSystemModuleConfig*)Obj)->bSpawnNavDataInNavBoundsLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel = { "bSpawnNavDataInNavBoundsLevel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavigationSystemModuleConfig), &Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bStrictlyStatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bCreateOnClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bAutoSpawnMissingNavData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::NewProp_bSpawnNavDataInNavBoundsLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationSystemModuleConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::ClassParams = {
		&UNavigationSystemModuleConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::PropPointers),
		0,
		0x001030A2u,
		METADATA_PARAMS(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationSystemModuleConfig()
	{
		if (!Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton, Z_Construct_UClass_UNavigationSystemModuleConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavigationSystemModuleConfig.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationSystemModuleConfig>()
	{
		return UNavigationSystemModuleConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationSystemModuleConfig);
	UNavigationSystemModuleConfig::~UNavigationSystemModuleConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationSystemV1, UNavigationSystemV1::StaticClass, TEXT("UNavigationSystemV1"), &Z_Registration_Info_UClass_UNavigationSystemV1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSystemV1), 101206751U) },
		{ Z_Construct_UClass_UNavigationSystemModuleConfig, UNavigationSystemModuleConfig::StaticClass, TEXT("UNavigationSystemModuleConfig"), &Z_Registration_Info_UClass_UNavigationSystemModuleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationSystemModuleConfig), 1033417139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_3456919489(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
