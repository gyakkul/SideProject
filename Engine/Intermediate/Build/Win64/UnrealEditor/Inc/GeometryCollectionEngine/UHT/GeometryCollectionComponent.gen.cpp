// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Chaos/ChaosGameplayEventDispatcher.h"
#include "Chaos/ChaosNotifyHandlerInterface.h"
#include "GeometryCollection/GeometryCollectionDamagePropagationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionComponent() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EObjectStateTypeEnum();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister();
	CHAOSSOLVERENGINE_API UEnum* Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum();
	CHAOSSOLVERENGINE_API UFunction* Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakEvent();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCrumblingEvent();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo();
	CHAOSSOLVERENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_AFieldSystemActor_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldNodeBase_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemMetaData_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionCache_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepData();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms
		{
			FChaosBreakEvent BreakEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent = { "BreakEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms, BreakEvent), Z_Construct_UScriptStruct_FChaosBreakEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent_MetaData)) }; // 3620519694
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::NewProp_BreakEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosBreakEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms
	{
		FChaosBreakEvent BreakEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosBreakEvent_Parms Parms;
	Parms.BreakEvent=BreakEvent;
	OnChaosBreakEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms
		{
			FChaosRemovalEvent RemovalEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent = { "RemovalEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms, RemovalEvent), Z_Construct_UScriptStruct_FChaosRemovalEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent_MetaData)) }; // 2687757331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::NewProp_RemovalEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosRemovalEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosRemovalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvent, FChaosRemovalEvent const& RemovalEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms
	{
		FChaosRemovalEvent RemovalEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosRemovalEvent_Parms Parms;
	Parms.RemovalEvent=RemovalEvent;
	OnChaosRemovalEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms
		{
			FChaosCrumblingEvent CrumbleEvent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrumbleEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrumbleEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent = { "CrumbleEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms, CrumbleEvent), Z_Construct_UScriptStruct_FChaosCrumblingEvent, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent_MetaData)) }; // 3952144716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::NewProp_CrumbleEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosCrumblingEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosCrumblingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCrumblingEvent, FChaosCrumblingEvent const& CrumbleEvent)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms
	{
		FChaosCrumblingEvent CrumbleEvent;
	};
	_Script_GeometryCollectionEngine_eventOnChaosCrumblingEvent_Parms Parms;
	Parms.CrumbleEvent=CrumbleEvent;
	OnChaosCrumblingEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters;
class UScriptStruct* FGeomComponentCacheParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeomComponentCacheParameters, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeomComponentCacheParameters"));
	}
	return Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeomComponentCacheParameters>()
{
	return FGeomComponentCacheParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CacheMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CacheMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseCacheBeginTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReverseCacheBeginTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveCollisionData_MetaData[];
#endif
		static void NewProp_SaveCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateCollisionData_MetaData[];
#endif
		static void NewProp_DoGenerateCollisionData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionDataSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoCollisionDataSpatialHash_MetaData[];
#endif
		static void NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoCollisionDataSpatialHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionDataSpatialHashRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionDataSpatialHashRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionPerCell_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCollisionPerCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveBreakingData_MetaData[];
#endif
		static void NewProp_SaveBreakingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBreakingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateBreakingData_MetaData[];
#endif
		static void NewProp_DoGenerateBreakingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateBreakingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BreakingDataSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoBreakingDataSpatialHash_MetaData[];
#endif
		static void NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoBreakingDataSpatialHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingDataSpatialHashRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakingDataSpatialHashRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBreakingPerCell_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBreakingPerCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveTrailingData_MetaData[];
#endif
		static void NewProp_SaveTrailingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveTrailingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoGenerateTrailingData_MetaData[];
#endif
		static void NewProp_DoGenerateTrailingData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoGenerateTrailingData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingDataSizeMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrailingDataSizeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingMinSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailingMinSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingMinVolumeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailingMinVolumeThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeomComponentCacheParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Cache mode, whether disabled, playing or recording\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode = { "CacheMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, CacheMode), Z_Construct_UEnum_Chaos_EGeometryCollectionCacheType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_MetaData)) }; // 3906838325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// The cache to target when recording or playing\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The cache to target when recording or playing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache = { "TargetCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, TargetCache), Z_Construct_UClass_UGeometryCollectionCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Cache mode, whether disabled, playing or recording\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Cache mode, whether disabled, playing or recording" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime = { "ReverseCacheBeginTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, ReverseCacheBeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer collisions during recording\n" },
		{ "DisplayName", "Record Collision Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer collisions during recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->SaveCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData = { "SaveCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate collisions during playback\n" },
		{ "DisplayName", "Generate Collision Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate collisions during playback" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoGenerateCollisionData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData = { "DoGenerateCollisionData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the collision buffer\n" },
		{ "DisplayName", "Collision Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the collision buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax = { "CollisionDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, CollisionDataSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash collision data\n" },
		{ "DisplayName", "Spatial Hash Collision Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash collision data" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoCollisionDataSpatialHash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash = { "DoCollisionDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash radius for collision data\n" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash radius for collision data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius = { "CollisionDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, CollisionDataSpatialHashRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum number of collisions per cell\n" },
		{ "DisplayName", "Maximum Number of Collisions Per Cell" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum number of collisions per cell" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell = { "MaxCollisionPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, MaxCollisionPerCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer breakings during recording\n" },
		{ "DisplayName", "Record Breaking Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer breakings during recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->SaveBreakingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData = { "SaveBreakingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate breakings during playback\n" },
		{ "DisplayName", "Generate Breaking Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate breakings during playback" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoGenerateBreakingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData = { "DoGenerateBreakingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the breaking buffer\n" },
		{ "DisplayName", "Breaking Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the breaking buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax = { "BreakingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, BreakingDataSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash breaking data\n" },
		{ "DisplayName", "Spatial Hash Breaking Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash breaking data" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoBreakingDataSpatialHash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash = { "DoBreakingDataSpatialHash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Spatial hash radius for breaking data\n" },
		{ "DisplayName", "Spatial Hash Radius" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Spatial hash radius for breaking data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius = { "BreakingDataSpatialHashRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, BreakingDataSpatialHashRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum number of breaking per cell\n" },
		{ "DisplayName", "Maximum Number of Breakings Per Cell" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum number of breaking per cell" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell = { "MaxBreakingPerCell", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, MaxBreakingPerCell), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to buffer trailings during recording\n" },
		{ "DisplayName", "Record Trailing Data" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to buffer trailings during recording" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->SaveTrailingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData = { "SaveTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Whether to generate trailings during playback\n" },
		{ "DisplayName", "Generate Trailing Data during Playback" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether to generate trailings during playback" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_SetBit(void* Obj)
	{
		((FGeomComponentCacheParameters*)Obj)->DoGenerateTrailingData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData = { "DoGenerateTrailingData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeomComponentCacheParameters), &Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Maximum size of the trailing buffer\n" },
		{ "DisplayName", "Trailing Data Size Maximum" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum size of the trailing buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax = { "TrailingDataSizeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingDataSizeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Minimum speed to record trailing\n" },
		{ "DisplayName", "Trailing Minimum Speed Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum speed to record trailing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold = { "TrailingMinSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "// Minimum volume to record trailing\n" },
		{ "DisplayName", "Trailing Minimum Volume Threshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Minimum volume to record trailing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold = { "TrailingMinVolumeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeomComponentCacheParameters, TrailingMinVolumeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CacheMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TargetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_ReverseCacheBeginTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoCollisionDataSpatialHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_CollisionDataSpatialHashRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxCollisionPerCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveBreakingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateBreakingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoBreakingDataSpatialHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_BreakingDataSpatialHashRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_MaxBreakingPerCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_SaveTrailingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_DoGenerateTrailingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingDataSizeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewProp_TrailingMinVolumeThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeomComponentCacheParameters",
		sizeof(FGeomComponentCacheParameters),
		alignof(FGeomComponentCacheParameters),
		Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeomComponentCacheParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton, Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionRepData;
class UScriptStruct* FGeometryCollectionRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionRepData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionRepData>()
{
	return FGeometryCollectionRepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicated data for a geometry collection when bEnableReplication is true for\n * that component. See UGeomtryCollectionComponent::UpdateRepData\n */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Replicated data for a geometry collection when bEnableReplication is true for\nthat component. See UGeomtryCollectionComponent::UpdateRepData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionRepData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionRepData",
		sizeof(FGeometryCollectionRepData),
		alignof(FGeometryCollectionRepData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionRepData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionRepData.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics
	{
		struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms
		{
			UGeometryCollectionComponent* FracturedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FracturedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FracturedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent = { "FracturedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms, FracturedComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::NewProp_FracturedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Blueprint event\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Blueprint event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGeometryCollectionComponent::FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent)
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsStateChange_Parms Parms;
	Parms.FracturedComponent=FracturedComponent;
	NotifyGeometryCollectionPhysicsStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics
	{
		struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms
		{
			UGeometryCollectionComponent* FracturedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FracturedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FracturedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent = { "FracturedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms, FracturedComponent), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::NewProp_FracturedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UGeometryCollectionComponent::FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent)
{
	struct GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms
	{
		UGeometryCollectionComponent* FracturedComponent;
	};
	GeometryCollectionComponent_eventNotifyGeometryCollectionPhysicsLoadingStateChange_Parms Parms;
	Parms.FracturedComponent=FracturedComponent;
	NotifyGeometryCollectionPhysicsLoadingStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyCrumblings)
	{
		P_GET_UBOOL(Z_Param_bNewNotifyCrumblings);
		P_GET_UBOOL(Z_Param_bNewCrumblingEventIncludesChildren);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotifyCrumblings(Z_Param_bNewNotifyCrumblings,Z_Param_bNewCrumblingEventIncludesChildren);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyRemovals)
	{
		P_GET_UBOOL(Z_Param_bNewNotifyRemovals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotifyRemovals(Z_Param_bNewNotifyRemovals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetNotifyBreaks)
	{
		P_GET_UBOOL(Z_Param_bNewNotifyBreaks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNotifyBreaks(Z_Param_bNewNotifyBreaks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyPhysicsField)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_GET_ENUM(EGeometryCollectionPhysicsTypeEnum,Z_Param_Target);
		P_GET_OBJECT(UFieldSystemMetaData,Z_Param_MetaData);
		P_GET_OBJECT(UFieldNodeBase,Z_Param_Field);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPhysicsField(Z_Param_Enabled,EGeometryCollectionPhysicsTypeEnum(Z_Param_Target),Z_Param_MetaData,Z_Param_Field);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyKinematicField)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyKinematicField(Z_Param_Radius,Z_Param_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetEnableDamageFromCollision)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableDamageFromCollision(Z_Param_bValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execGetDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDebugInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetRestCollection)
	{
		P_GET_OBJECT(UGeometryCollection,Z_Param_RestCollectionIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRestCollection(Z_Param_RestCollectionIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execGetMassAndExtents)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutMass);
		P_GET_STRUCT_REF(FBox,Z_Param_Out_OutExtents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMassAndExtents(Z_Param_ItemIndex,Z_Param_Out_OutMass,Z_Param_Out_OutExtents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execGetRootIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRootIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execGetInitialLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInitialLevel(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyAngularVelocity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAngularVelocity(Z_Param_ItemIndex,Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyLinearVelocity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyLinearVelocity(Z_Param_ItemIndex,Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyBreakingAngularVelocity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyBreakingAngularVelocity(Z_Param_ItemIndex,Z_Param_Out_AngularVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyBreakingLinearVelocity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyBreakingLinearVelocity(Z_Param_ItemIndex,Z_Param_Out_LinearVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execRemoveAllAnchors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllAnchors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByTransformedBox)
	{
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_UBOOL(Z_Param_bAnchored);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchoredByTransformedBox(Z_Param_Box,Z_Param_Transform,Z_Param_bAnchored,Z_Param_MaxLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByBox)
	{
		P_GET_STRUCT(FBox,Z_Param_WorldSpaceBox);
		P_GET_UBOOL(Z_Param_bAnchored);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchoredByBox(Z_Param_WorldSpaceBox,Z_Param_bAnchored,Z_Param_MaxLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execSetAnchoredByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bAnchored);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchoredByIndex(Z_Param_Index,Z_Param_bAnchored);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execCrumbleActiveClusters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrumbleActiveClusters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execCrumbleCluster)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CrumbleCluster(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyInternalStrain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_PropagationDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PropagationFactor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInternalStrain(Z_Param_ItemIndex,Z_Param_Out_Location,Z_Param_Radius,Z_Param_PropagationDepth,Z_Param_PropagationFactor,Z_Param_Strain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execApplyExternalStrain)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_PropagationDepth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PropagationFactor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyExternalStrain(Z_Param_ItemIndex,Z_Param_Out_Location,Z_Param_Radius,Z_Param_PropagationDepth,Z_Param_PropagationFactor,Z_Param_Strain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCollectionComponent::execGetLocalBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBox*)Z_Param__Result=P_THIS->GetLocalBounds();
		P_NATIVE_END;
	}
	struct GeometryCollectionComponent_eventReceivePhysicsCollision_Parms
	{
		FChaosPhysicsCollisionInfo CollisionInfo;
	};
	static FName NAME_UGeometryCollectionComponent_ReceivePhysicsCollision = FName(TEXT("ReceivePhysicsCollision"));
	void UGeometryCollectionComponent::ReceivePhysicsCollision(FChaosPhysicsCollisionInfo const& CollisionInfo)
	{
		GeometryCollectionComponent_eventReceivePhysicsCollision_Parms Parms;
		Parms.CollisionInfo=CollisionInfo;
		ProcessEvent(FindFunctionChecked(NAME_UGeometryCollectionComponent_ReceivePhysicsCollision),&Parms);
	}
	void UGeometryCollectionComponent::StaticRegisterNativesUGeometryCollectionComponent()
	{
		UClass* Class = UGeometryCollectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAngularVelocity", &UGeometryCollectionComponent::execApplyAngularVelocity },
			{ "ApplyBreakingAngularVelocity", &UGeometryCollectionComponent::execApplyBreakingAngularVelocity },
			{ "ApplyBreakingLinearVelocity", &UGeometryCollectionComponent::execApplyBreakingLinearVelocity },
			{ "ApplyExternalStrain", &UGeometryCollectionComponent::execApplyExternalStrain },
			{ "ApplyInternalStrain", &UGeometryCollectionComponent::execApplyInternalStrain },
			{ "ApplyKinematicField", &UGeometryCollectionComponent::execApplyKinematicField },
			{ "ApplyLinearVelocity", &UGeometryCollectionComponent::execApplyLinearVelocity },
			{ "ApplyPhysicsField", &UGeometryCollectionComponent::execApplyPhysicsField },
			{ "CrumbleActiveClusters", &UGeometryCollectionComponent::execCrumbleActiveClusters },
			{ "CrumbleCluster", &UGeometryCollectionComponent::execCrumbleCluster },
			{ "GetDebugInfo", &UGeometryCollectionComponent::execGetDebugInfo },
			{ "GetInitialLevel", &UGeometryCollectionComponent::execGetInitialLevel },
			{ "GetLocalBounds", &UGeometryCollectionComponent::execGetLocalBounds },
			{ "GetMassAndExtents", &UGeometryCollectionComponent::execGetMassAndExtents },
			{ "GetRootIndex", &UGeometryCollectionComponent::execGetRootIndex },
			{ "RemoveAllAnchors", &UGeometryCollectionComponent::execRemoveAllAnchors },
			{ "SetAnchoredByBox", &UGeometryCollectionComponent::execSetAnchoredByBox },
			{ "SetAnchoredByIndex", &UGeometryCollectionComponent::execSetAnchoredByIndex },
			{ "SetAnchoredByTransformedBox", &UGeometryCollectionComponent::execSetAnchoredByTransformedBox },
			{ "SetEnableDamageFromCollision", &UGeometryCollectionComponent::execSetEnableDamageFromCollision },
			{ "SetNotifyBreaks", &UGeometryCollectionComponent::execSetNotifyBreaks },
			{ "SetNotifyCrumblings", &UGeometryCollectionComponent::execSetNotifyCrumblings },
			{ "SetNotifyRemovals", &UGeometryCollectionComponent::execSetNotifyRemovals },
			{ "SetRestCollection", &UGeometryCollectionComponent::execSetRestCollection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics
	{
		struct GeometryCollectionComponent_eventApplyAngularVelocity_Parms
		{
			int32 ItemIndex;
			FVector AngularVelocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyAngularVelocity_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::NewProp_AngularVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply angular velocity on specific piece \n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n\x09* @param AngularVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply angular velocity on specific piece\n@param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n@param AngularVelocity linear velocity to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyAngularVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::GeometryCollectionComponent_eventApplyAngularVelocity_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics
	{
		struct GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms
		{
			int32 ItemIndex;
			FVector AngularVelocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::NewProp_AngularVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on breaking pieces for a specific cluster\n\x09 * If ItemIndex does not represent a cluster this will do nothing  \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n\x09 * @param AngularVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on breaking pieces for a specific cluster\nIf ItemIndex does not represent a cluster this will do nothing\n@param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n@param AngularVelocity linear velocity to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyBreakingAngularVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingAngularVelocity_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics
	{
		struct GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms
		{
			int32 ItemIndex;
			FVector LinearVelocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::NewProp_LinearVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on breaking pieces for a specific cluster\n\x09 * If ItemIndex does not represent a cluster this will do nothing  \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n\x09 * @param LinearVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on breaking pieces for a specific cluster\nIf ItemIndex does not represent a cluster this will do nothing\n@param ItemIndex item index ( from HitResult) of the cluster owning the breaking pieces to apply velocity on\n@param LinearVelocity linear velocity to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyBreakingLinearVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::GeometryCollectionComponent_eventApplyBreakingLinearVelocity_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics
	{
		struct GeometryCollectionComponent_eventApplyExternalStrain_Parms
		{
			int32 ItemIndex;
			FVector Location;
			float Radius;
			int32 PropagationDepth;
			float PropagationFactor;
			float Strain;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropagationDepth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropagationFactor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationDepth = { "PropagationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, PropagationDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationFactor = { "PropagationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, PropagationFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyExternalStrain_Parms, Strain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_PropagationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::NewProp_Strain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply an external strain to specific piece of the geometry collection\n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply strain on\n\x09 * @param Location world location of where to apply the strain\n\x09 * @param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n\x09 * @param PropagationDepth How many level of connection to follow to propagate the strain through\n\x09 * @param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n\x09 * @param Strain strain / damage to apply \n\x09 */" },
		{ "CPP_Default_PropagationDepth", "0" },
		{ "CPP_Default_PropagationFactor", "1.000000" },
		{ "CPP_Default_Radius", "0.000000" },
		{ "CPP_Default_Strain", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply an external strain to specific piece of the geometry collection\n@param ItemIndex item index ( from HitResult) of the piece to apply strain on\n@param Location world location of where to apply the strain\n@param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n@param PropagationDepth How many level of connection to follow to propagate the strain through\n@param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n@param Strain strain / damage to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyExternalStrain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::GeometryCollectionComponent_eventApplyExternalStrain_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics
	{
		struct GeometryCollectionComponent_eventApplyInternalStrain_Parms
		{
			int32 ItemIndex;
			FVector Location;
			float Radius;
			int32 PropagationDepth;
			float PropagationFactor;
			float Strain;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropagationDepth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropagationFactor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Strain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationDepth = { "PropagationDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, PropagationDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationFactor = { "PropagationFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, PropagationFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyInternalStrain_Parms, Strain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_PropagationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::NewProp_Strain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply an internal strain to specific piece of the geometry collection\n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply strain on\n\x09 * @param Location world location of where to apply the strain\n\x09 * @param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n\x09 * @param PropagationDepth How many level of connection to follow to propagate the strain through\n\x09 * @param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n\x09 * @param Strain strain / damage to apply \n\x09 */" },
		{ "CPP_Default_PropagationDepth", "0" },
		{ "CPP_Default_PropagationFactor", "1.000000" },
		{ "CPP_Default_Radius", "0.000000" },
		{ "CPP_Default_Strain", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply an internal strain to specific piece of the geometry collection\n@param ItemIndex item index ( from HitResult) of the piece to apply strain on\n@param Location world location of where to apply the strain\n@param Radius radius from the location point to apply the strain to ( using the center of mass of the pieces )\n@param PropagationDepth How many level of connection to follow to propagate the strain through\n@param PropagationFactor when using propagation, the factor to multiply the strain from one level to the other, allowing falloff effect\n@param Strain strain / damage to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyInternalStrain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::GeometryCollectionComponent_eventApplyInternalStrain_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics
	{
		struct GeometryCollectionComponent_eventApplyKinematicField_Parms
		{
			float Radius;
			FVector Position;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Field Radius" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyKinematicField_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position_MetaData[] = {
		{ "DisplayName", "Center Position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyKinematicField_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  SetDynamicState\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a kinematic to dynamic state change for the geo collection particles within the field.\n\x09*\n\x09*\x09 @param Radius Radial influence from the position\n\x09*    @param Position The location of the command\n\x09*\n\x09*/" },
		{ "DisplayName", "Set Dynamic State" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "SetDynamicState\n  This function will dispatch a command to the physics thread to apply\n  a kinematic to dynamic state change for the geo collection particles within the field.\n\n      @param Radius Radial influence from the position\n  @param Position The location of the command" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyKinematicField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::GeometryCollectionComponent_eventApplyKinematicField_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics
	{
		struct GeometryCollectionComponent_eventApplyLinearVelocity_Parms
		{
			int32 ItemIndex;
			FVector LinearVelocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyLinearVelocity_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyLinearVelocity_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::NewProp_LinearVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Apply linear velocity on specific piece \n\x09 * @param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n\x09* @param LinearVelocity linear velocity to apply\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Apply linear velocity on specific piece\n@param ItemIndex item index ( from HitResult) of the piece to apply velocity on\n@param LinearVelocity linear velocity to apply" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyLinearVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::GeometryCollectionComponent_eventApplyLinearVelocity_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics
	{
		struct GeometryCollectionComponent_eventApplyPhysicsField_Parms
		{
			bool Enabled;
			EGeometryCollectionPhysicsTypeEnum Target;
			UFieldSystemMetaData* MetaData;
			UFieldNodeBase* Field;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Target_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Field;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_MetaData[] = {
		{ "DisplayName", "Enable Field" },
	};
#endif
	void Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventApplyPhysicsField_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventApplyPhysicsField_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_MetaData[] = {
		{ "DisplayName", "Physics Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, Target), Z_Construct_UEnum_Chaos_EGeometryCollectionPhysicsTypeEnum, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_MetaData)) }; // 3526196198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData[] = {
		{ "DisplayName", "Meta Data" },
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, MetaData), Z_Construct_UClass_UFieldSystemMetaData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData[] = {
		{ "DisplayName", "Field Node" },
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventApplyPhysicsField_Parms, Field), Z_Construct_UClass_UFieldNodeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::NewProp_Field,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Field" },
		{ "Comment", "/**\n\x09*  AddPhysicsField\n\x09*    This function will dispatch a command to the physics thread to apply\n\x09*    a generic evaluation of a user defined transient field network. See documentation,\n\x09*    for examples of how to recreate variations of the above generic\n\x09*    fields using field networks\n\x09*\n\x09*\x09 @param Enabled Is this force enabled for evaluation.\n\x09*    @param Target Type of field supported by the solver.\n\x09*    @param MetaData Meta data used to assist in evaluation\n\x09*    @param Field Base evaluation node for the field network.\n\x09*\n\x09*/" },
		{ "DisplayName", "Add Physics Field" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "AddPhysicsField\n  This function will dispatch a command to the physics thread to apply\n  a generic evaluation of a user defined transient field network. See documentation,\n  for examples of how to recreate variations of the above generic\n  fields using field networks\n\n      @param Enabled Is this force enabled for evaluation.\n  @param Target Type of field supported by the solver.\n  @param MetaData Meta data used to assist in evaluation\n  @param Field Base evaluation node for the field network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ApplyPhysicsField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::GeometryCollectionComponent_eventApplyPhysicsField_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Crumbe active clusters for this entire geometry collection\n\x09* this will apply to internal and regular clusters\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Crumbe active clusters for this entire geometry collection\nthis will apply to internal and regular clusters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "CrumbleActiveClusters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics
	{
		struct GeometryCollectionComponent_eventCrumbleCluster_Parms
		{
			int32 ItemIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventCrumbleCluster_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Crumbe a cluster into all its pieces\n\x09 * @param ItemIndex item index ( from HitResult) of the cluster to crumble\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Crumbe a cluster into all its pieces\n@param ItemIndex item index ( from HitResult) of the cluster to crumble" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "CrumbleCluster", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::GeometryCollectionComponent_eventCrumbleCluster_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics
	{
		struct GeometryCollectionComponent_eventGetDebugInfo_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetDebugInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** RestCollection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "RestCollection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetDebugInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::GeometryCollectionComponent_eventGetDebugInfo_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics
	{
		struct GeometryCollectionComponent_eventGetInitialLevel_Parms
		{
			int32 ItemIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetInitialLevel_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetInitialLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09 * Get the initial level of a specific piece\n\x09 * Initial level means the level as it is in the unbroken state \n\x09 * @param ItemIndex item index ( from HitResult) of the cluster to get level from\n\x09 * @param Level of the piece ( 0 for root level and positive for the rest ) \n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the initial level of a specific piece\nInitial level means the level as it is in the unbroken state\n@param ItemIndex item index ( from HitResult) of the cluster to get level from\n@param Level of the piece ( 0 for root level and positive for the rest )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetInitialLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::GeometryCollectionComponent_eventGetInitialLevel_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics
	{
		struct GeometryCollectionComponent_eventGetLocalBounds_Parms
		{
			FBox ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetLocalBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Get local bounds of the geometry collection\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get local bounds of the geometry collection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetLocalBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::GeometryCollectionComponent_eventGetLocalBounds_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics
	{
		struct GeometryCollectionComponent_eventGetMassAndExtents_Parms
		{
			int32 ItemIndex;
			float OutMass;
			FBox OutExtents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutMass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutExtents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, ItemIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutMass = { "OutMass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, OutMass), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutExtents = { "OutExtents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetMassAndExtents_Parms, OutExtents), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_ItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::NewProp_OutExtents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Get mass and extent of a specific piece\n\x09* @param ItemIndex item index ( from HitResult) of the cluster to get level from\n\x09* @param Level of the piece ( 0 for root level and positive for the rest )\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get mass and extent of a specific piece\n@param ItemIndex item index ( from HitResult) of the cluster to get level from\n@param Level of the piece ( 0 for root level and positive for the rest )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetMassAndExtents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::GeometryCollectionComponent_eventGetMassAndExtents_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics
	{
		struct GeometryCollectionComponent_eventGetRootIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventGetRootIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Get the root item index of the hierarchy */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Get the root item index of the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "GetRootIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::GeometryCollectionComponent_eventGetRootIndex_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventReceivePhysicsCollision_Parms, CollisionInfo), Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo_MetaData)) }; // 1218852645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Physics Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "ReceivePhysicsCollision", nullptr, nullptr, sizeof(GeometryCollectionComponent_eventReceivePhysicsCollision_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* this will remove anchors on all the pieces ( including the static and kinematic initial states ones ) of the geometry colection\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "this will remove anchors on all the pieces ( including the static and kinematic initial states ones ) of the geometry colection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "RemoveAllAnchors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics
	{
		struct GeometryCollectionComponent_eventSetAnchoredByBox_Parms
		{
			FBox WorldSpaceBox;
			bool bAnchored;
			int32 MaxLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceBox;
		static void NewProp_bAnchored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_WorldSpaceBox = { "WorldSpaceBox", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByBox_Parms, WorldSpaceBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetAnchoredByBox_Parms*)Obj)->bAnchored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByBox_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByBox_Parms, MaxLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_WorldSpaceBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_bAnchored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::NewProp_MaxLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set all pieces within a world space bounding box to be anchored or not \n\x09*/" },
		{ "CPP_Default_MaxLevel", "-1" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set all pieces within a world space bounding box to be anchored or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::GeometryCollectionComponent_eventSetAnchoredByBox_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics
	{
		struct GeometryCollectionComponent_eventSetAnchoredByIndex_Parms
		{
			int32 Index;
			bool bAnchored;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bAnchored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetAnchoredByIndex_Parms*)Obj)->bAnchored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByIndex_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::NewProp_bAnchored,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set a piece or cluster to be anchored or not \n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set a piece or cluster to be anchored or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::GeometryCollectionComponent_eventSetAnchoredByIndex_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics
	{
		struct GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms
		{
			FBox Box;
			FTransform Transform;
			bool bAnchored;
			int32 MaxLevel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_bAnchored_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnchored;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms*)Obj)->bAnchored = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored = { "bAnchored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_MaxLevel = { "MaxLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms, MaxLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_bAnchored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::NewProp_MaxLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/**\n\x09* Set all pieces within a world transformed bounding box to be anchored or not\n\x09*/" },
		{ "CPP_Default_MaxLevel", "-1" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Set all pieces within a world transformed bounding box to be anchored or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetAnchoredByTransformedBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::GeometryCollectionComponent_eventSetAnchoredByTransformedBox_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics
	{
		struct GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetEnableDamageFromCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::GeometryCollectionComponent_eventSetEnableDamageFromCollision_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics
	{
		struct GeometryCollectionComponent_eventSetNotifyBreaks_Parms
		{
			bool bNewNotifyBreaks;
		};
		static void NewProp_bNewNotifyBreaks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyBreaks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetNotifyBreaks_Parms*)Obj)->bNewNotifyBreaks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks = { "bNewNotifyBreaks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyBreaks_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::NewProp_bNewNotifyBreaks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future break notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future break notifications." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyBreaks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::GeometryCollectionComponent_eventSetNotifyBreaks_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics
	{
		struct GeometryCollectionComponent_eventSetNotifyCrumblings_Parms
		{
			bool bNewNotifyCrumblings;
			bool bNewCrumblingEventIncludesChildren;
		};
		static void NewProp_bNewNotifyCrumblings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyCrumblings;
		static void NewProp_bNewCrumblingEventIncludesChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewCrumblingEventIncludesChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetNotifyCrumblings_Parms*)Obj)->bNewNotifyCrumblings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings = { "bNewNotifyCrumblings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetNotifyCrumblings_Parms*)Obj)->bNewCrumblingEventIncludesChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren = { "bNewCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewNotifyCrumblings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::NewProp_bNewCrumblingEventIncludesChildren,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future break notifications. */" },
		{ "CPP_Default_bNewCrumblingEventIncludesChildren", "false" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future break notifications." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyCrumblings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::GeometryCollectionComponent_eventSetNotifyCrumblings_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics
	{
		struct GeometryCollectionComponent_eventSetNotifyRemovals_Parms
		{
			bool bNewNotifyRemovals;
		};
		static void NewProp_bNewNotifyRemovals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewNotifyRemovals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals_SetBit(void* Obj)
	{
		((GeometryCollectionComponent_eventSetNotifyRemovals_Parms*)Obj)->bNewNotifyRemovals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals = { "bNewNotifyRemovals", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCollectionComponent_eventSetNotifyRemovals_Parms), &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::NewProp_bNewNotifyRemovals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Changes whether or not this component will get future removal notifications. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Changes whether or not this component will get future removal notifications." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetNotifyRemovals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::GeometryCollectionComponent_eventSetNotifyRemovals_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics
	{
		struct GeometryCollectionComponent_eventSetRestCollection_Parms
		{
			const UGeometryCollection* RestCollectionIn;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestCollectionIn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RestCollectionIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn = { "RestCollectionIn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCollectionComponent_eventSetRestCollection_Parms, RestCollectionIn), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::NewProp_RestCollectionIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** RestCollection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "RestCollection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCollectionComponent, nullptr, "SetRestCollection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::GeometryCollectionComponent_eventSetRestCollection_Parms), Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionComponent);
	UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister()
	{
		return UGeometryCollectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChaosSolverActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RestCollection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitializationFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitializationFields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simulating_MetaData[];
#endif
		static void NewProp_Simulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Simulating;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMotionBlur_MetaData[];
#endif
		static void NewProp_bForceMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableClustering_MetaData[];
#endif
		static void NewProp_EnableClustering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableClustering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterGroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClusterGroupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClusterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClusterLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreshold_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSizeSpecificDamageThreshold_MetaData[];
#endif
		static void NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSizeSpecificDamageThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagePropagationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamagePropagationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDamageFromCollision_MetaData[];
#endif
		static void NewProp_bEnableDamageFromCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDamageFromCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemovalOnSleep_MetaData[];
#endif
		static void NewProp_bAllowRemovalOnSleep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemovalOnSleep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemovalOnBreak_MetaData[];
#endif
		static void NewProp_bAllowRemovalOnBreak_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemovalOnBreak;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClusterConnectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClusterConnectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClusterConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSampleFraction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionSampleFraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearEtherDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearEtherDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularEtherDrag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularEtherDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialVelocityType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocityType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialVelocityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RestTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyGeometryCollectionPhysicsStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosBreakEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosBreakEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosRemovalEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosRemovalEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosCrumblingEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosCrumblingEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredCacheTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredCacheTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachePlayback_MetaData[];
#endif
		static void NewProp_CachePlayback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CachePlayback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChaosPhysicsCollision_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChaosPhysicsCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyBreaks_MetaData[];
#endif
		static void NewProp_bNotifyBreaks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyBreaks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyCollisions_MetaData[];
#endif
		static void NewProp_bNotifyCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyTrailing_MetaData[];
#endif
		static void NewProp_bNotifyTrailing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyTrailing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyRemovals_MetaData[];
#endif
		static void NewProp_bNotifyRemovals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyRemovals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotifyCrumblings_MetaData[];
#endif
		static void NewProp_bNotifyCrumblings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotifyCrumblings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrumblingEventIncludesChildren_MetaData[];
#endif
		static void NewProp_bCrumblingEventIncludesChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrumblingEventIncludesChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreVelocities_MetaData[];
#endif
		static void NewProp_bStoreVelocities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreVelocities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoneColors_MetaData[];
#endif
		static void NewProp_bShowBoneColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoneColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRootProxyForNavigation_MetaData[];
#endif
		static void NewProp_bUseRootProxyForNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRootProxyForNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateNavigationInTick_MetaData[];
#endif
		static void NewProp_bUpdateNavigationInTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateNavigationInTick;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRunTimeDataCollection_MetaData[];
#endif
		static void NewProp_bEnableRunTimeDataCollection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRunTimeDataCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunTimeDataCollectionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RunTimeDataCollectionGuid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMPool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ISMPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableReplication_MetaData[];
#endif
		static void NewProp_bEnableReplication_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableReplication;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbandonAfterLevel_MetaData[];
#endif
		static void NewProp_bEnableAbandonAfterLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbandonAfterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationAbandonClusterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationAbandonClusterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationAbandonAfterLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicationAbandonAfterLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepData;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedBones;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HighlightedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HighlightedBones;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DummyBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DummyBodySetup;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorActor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmbeddedGeometryComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmbeddedGeometryComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmbeddedGeometryComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryCollectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyAngularVelocity, "ApplyAngularVelocity" }, // 1751584023
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingAngularVelocity, "ApplyBreakingAngularVelocity" }, // 3344410808
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyBreakingLinearVelocity, "ApplyBreakingLinearVelocity" }, // 3971470969
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyExternalStrain, "ApplyExternalStrain" }, // 2364964505
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyInternalStrain, "ApplyInternalStrain" }, // 3170107373
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyKinematicField, "ApplyKinematicField" }, // 1796974810
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyLinearVelocity, "ApplyLinearVelocity" }, // 2785729837
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ApplyPhysicsField, "ApplyPhysicsField" }, // 2621570687
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleActiveClusters, "CrumbleActiveClusters" }, // 3902547384
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_CrumbleCluster, "CrumbleCluster" }, // 1302417437
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetDebugInfo, "GetDebugInfo" }, // 3146001884
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetInitialLevel, "GetInitialLevel" }, // 3862807950
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetLocalBounds, "GetLocalBounds" }, // 3819162265
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetMassAndExtents, "GetMassAndExtents" }, // 2837608237
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_GetRootIndex, "GetRootIndex" }, // 724597808
		{ &Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature, "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature" }, // 2906711134
		{ &Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature, "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature" }, // 1053105461
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_ReceivePhysicsCollision, "ReceivePhysicsCollision" }, // 2089210353
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_RemoveAllAnchors, "RemoveAllAnchors" }, // 4061031214
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByBox, "SetAnchoredByBox" }, // 3206844659
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByIndex, "SetAnchoredByIndex" }, // 174200208
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetAnchoredByTransformedBox, "SetAnchoredByTransformedBox" }, // 1721640475
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetEnableDamageFromCollision, "SetEnableDamageFromCollision" }, // 3382533397
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyBreaks, "SetNotifyBreaks" }, // 2664000097
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyCrumblings, "SetNotifyCrumblings" }, // 1612412575
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetNotifyRemovals, "SetNotifyRemovals" }, // 758925365
		{ &Z_Construct_UFunction_UGeometryCollectionComponent_SetRestCollection, "SetRestCollection" }, // 3395844277
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09GeometryCollectionComponent\n*/" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "GeometryCollectionComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "Comment", "/** Chaos RBD Solver override. Will use the world's default solver actor if null. */" },
		{ "DisplayName", "Chaos Solver" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Chaos RBD Solver override. Will use the world's default solver actor if null." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection = { "RestCollection", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, RestCollection), Z_Construct_UClass_UGeometryCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_Inner = { "InitializationFields", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AFieldSystemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_MetaData[] = {
		{ "Category", "ChaosPhysics" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields = { "InitializationFields", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, InitializationFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GeometryCollection now abides the bSimulatePhysics flag from the base class." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->Simulating_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating = { "Simulating", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "ObjectType defines how to initialize the rigid objects state, Kinematic, Sleeping, Dynamic." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ObjectType), Z_Construct_UEnum_Chaos_EObjectStateTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_MetaData)) }; // 3137136666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If ForceMotionBlur is on, motion blur will always be active, even if the GeometryCollection is at rest. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If ForceMotionBlur is on, motion blur will always be active, even if the GeometryCollection is at rest." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bForceMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur = { "bForceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->EnableClustering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering = { "EnableClustering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex = { "ClusterGroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ClusterGroupIndex), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData[] = {
		{ "Category", "ChaosPhysics|Clustering" },
		{ "Comment", "/** Maximum level for cluster breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Maximum level for cluster breaks." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel = { "MaxClusterLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, MaxClusterLevel), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner = { "DamageThreshold", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Damage" },
		{ "EditCondition", "!bUseSizeSpecificDamageThreshold" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold = { "DamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, DamageThreshold), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData[] = {
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Damage threshold for clusters at different levels. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Damage threshold for clusters at different levels." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bUseSizeSpecificDamageThreshold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold = { "bUseSizeSpecificDamageThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData_MetaData[] = {
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Data about how damage propagation shoudl behave. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Data about how damage propagation shoudl behave." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData = { "DamagePropagationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, DamagePropagationData), Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData_MetaData)) }; // 3866457733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_MetaData[] = {
		{ "Category", "ChaosPhysics|Damage" },
		{ "Comment", "/** Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Whether or not collisions against this geometry collection will apply strain which could cause the geometry collection to fracture." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bEnableDamageFromCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision = { "bEnableDamageFromCollision", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_MetaData[] = {
		{ "Category", "ChaosPhysics|Removal" },
		{ "Comment", "/** Allow removal on sleep for the instance if the rest collection has it enabled */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Allow removal on sleep for the instance if the rest collection has it enabled" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bAllowRemovalOnSleep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep = { "bAllowRemovalOnSleep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_MetaData[] = {
		{ "Category", "ChaosPhysics|Removal" },
		{ "Comment", "/** Allow removal on break for the instance if the rest collection has it enabled */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Allow removal on break for the instance if the rest collection has it enabled" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bAllowRemovalOnBreak = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak = { "bAllowRemovalOnBreak", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_MetaData[] = {
		{ "Comment", "/** */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Connection types are defined on the asset now." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType = { "ClusterConnectionType", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ClusterConnectionType_DEPRECATED), Z_Construct_UEnum_ChaosSolverEngine_EClusterConnectionTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_MetaData)) }; // 4036541358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionGroup), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction_MetaData[] = {
		{ "Category", "ChaosPhysics|Collisions" },
		{ "Comment", "/** Fraction of collision sample particles to keep */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Fraction of collision sample particles to keep" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction = { "CollisionSampleFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, CollisionSampleFraction), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag_MetaData[] = {
		{ "Comment", "/** Uniform linear ether drag. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PhysicalMaterial instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform linear ether drag." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag = { "LinearEtherDrag", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, LinearEtherDrag_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag_MetaData[] = {
		{ "Comment", "/** Uniform angular ether drag. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use PhysicalMaterial instead." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Uniform angular ether drag." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag = { "AngularEtherDrag", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, AngularEtherDrag_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Comment", "/** Physical Properties */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Physical material now derived from render materials, for instance overrides use PhysicalMaterialOverride." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Physical Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, PhysicalMaterial_DEPRECATED), Z_Construct_UClass_UChaosPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType = { "InitialVelocityType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, InitialVelocityType), Z_Construct_UEnum_Chaos_EInitialVelocityTypeEnum, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_MetaData)) }; // 478557433
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity = { "InitialLinearVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, InitialLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData[] = {
		{ "Category", "ChaosPhysics|Initial Velocity" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity = { "InitialAngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, InitialAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Physical material now derived from render materials, for instance overrides use Colliisons PhysicalMaterialOverride." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride = { "PhysicalMaterialOverride", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, PhysicalMaterialOverride_DEPRECATED), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters = { "CacheParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, CacheParameters), Z_Construct_UScriptStruct_FGeomComponentCacheParameters, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters_MetaData)) }; // 3469777469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_Inner = { "RestTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_MetaData[] = {
		{ "Comment", "/** Optional transforms to initialize scene proxy if difference from the RestCollection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Optional transforms to initialize scene proxy if difference from the RestCollection." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms = { "RestTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, RestTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData[] = {
		{ "Category", "Game|Damage" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange = { "NotifyGeometryCollectionPhysicsStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsStateChange), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange_MetaData)) }; // 1053105461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData[] = {
		{ "Category", "Game|Loading" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange = { "NotifyGeometryCollectionPhysicsLoadingStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsLoadingStateChange), Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange_MetaData)) }; // 2906711134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent = { "OnChaosBreakEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosBreakEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent_MetaData)) }; // 2683973813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent = { "OnChaosRemovalEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosRemovalEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent_MetaData)) }; // 3638008259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent = { "OnChaosCrumblingEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosCrumblingEvent), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCrumblingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent_MetaData)) }; // 2365921291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime = { "DesiredCacheTime", nullptr, (EPropertyFlags)0x0010000200022005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, DesiredCacheTime), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_MetaData[] = {
		{ "Category", "Chaos" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->CachePlayback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback = { "CachePlayback", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision = { "OnChaosPhysicsCollision", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, OnChaosPhysicsCollision), Z_Construct_UDelegateFunction_ChaosSolverEngine_OnChaosPhysicsCollision__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision_MetaData)) }; // 130578981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate breaking events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate breaking events that other systems may subscribe to." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bNotifyBreaks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks = { "bNotifyBreaks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate collision events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate collision events that other systems may subscribe to." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bNotifyCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions = { "bNotifyCollisions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate trailing events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate trailing events that other systems may subscribe to." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bNotifyTrailing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing = { "bNotifyTrailing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate removal events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate removal events that other systems may subscribe to." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bNotifyRemovals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals = { "bNotifyRemovals", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If true, this component will generate crumbling events that other systems may subscribe to. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will generate crumbling events that other systems may subscribe to." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bNotifyCrumblings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings = { "bNotifyCrumblings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_MetaData[] = {
		{ "Category", "ChaosPhysics|Events" },
		{ "Comment", "/** If this and bNotifyCrumblings are true, the crumbling events will contain released children indices. */" },
		{ "EditCondition", "bNotifyCrumblings" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If this and bNotifyCrumblings are true, the crumbling events will contain released children indices." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bCrumblingEventIncludesChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren = { "bCrumblingEventIncludesChildren", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** If true, this component will save linear and angular velocities on its DynamicCollection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If true, this component will save linear and angular velocities on its DynamicCollection." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bStoreVelocities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities = { "bStoreVelocities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "Comment", "/** Display Bone Colors instead of assigned materials */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Display Bone Colors instead of assigned materials" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bShowBoneColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors = { "bShowBoneColors", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bUseRootProxyForNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation = { "bUseRootProxyForNavigation", nullptr, (EPropertyFlags)0x00200c0000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bUpdateNavigationInTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick = { "bUpdateNavigationInTick", nullptr, (EPropertyFlags)0x00200c0000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bEnableRunTimeDataCollection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection = { "bEnableRunTimeDataCollection", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid_MetaData[] = {
		{ "Category", "ChaosPhysics|General" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid = { "RunTimeDataCollectionGuid", nullptr, (EPropertyFlags)0x0020080800000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, RunTimeDataCollectionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool_MetaData[] = {
		{ "Category", "ChaosPhysics|Rendering" },
		{ "Comment", "/** ISM pool to use to render the geometry collection - only works for unfractured geometry collections  */" },
		{ "DisplayName", "ISM Pool" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "ISM pool to use to render the geometry collection - only works for unfractured geometry collections" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool = { "ISMPool", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ISMPool), Z_Construct_UClass_AGeometryCollectionISMPoolActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/* Per-instance override to enable/disable replication for the geometry collection */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Per-instance override to enable/disable replication for the geometry collection" },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bEnableReplication = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication = { "bEnableReplication", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/** \n\x09 * Enables use of ReplicationAbandonAfterLevel to stop providing network updates to\n\x09 * clients when the updated particle is of a level higher then specified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Enables use of ReplicationAbandonAfterLevel to stop providing network updates to\nclients when the updated particle is of a level higher then specified." },
	};
#endif
	void Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_SetBit(void* Obj)
	{
		((UGeometryCollectionComponent*)Obj)->bEnableAbandonAfterLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel = { "bEnableAbandonAfterLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCollectionComponent), &Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel_MetaData[] = {
		{ "Comment", "/**\n\x09 * If replicating - the cluster level to stop sending corrections for geometry collection chunks.\n\x09 * recommended for smaller leaf levels when the size of the objects means they are no longer\n\x09 * gameplay relevant to cut down on required bandwidth to update a collection.\n\x09 * @see bEnableAbandonAfterLevel\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GeometryCollection now uses ReplicationAbandonAfterLevel instead of ReplicationAbandonClusterLevel." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If replicating - the cluster level to stop sending corrections for geometry collection chunks.\nrecommended for smaller leaf levels when the size of the objects means they are no longer\ngameplay relevant to cut down on required bandwidth to update a collection.\n@see bEnableAbandonAfterLevel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel = { "ReplicationAbandonClusterLevel", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationAbandonClusterLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel_MetaData[] = {
		{ "Category", "Network" },
		{ "Comment", "/**\n\x09* If replicating - the cluster level after which replication will not happen \n\x09* @see bEnableAbandonAfterLevel\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "If replicating - the cluster level after which replication will not happen\n@see bEnableAbandonAfterLevel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel = { "ReplicationAbandonAfterLevel", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, ReplicationAbandonAfterLevel), METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData = { "RepData", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, RepData), Z_Construct_UScriptStruct_FGeometryCollectionRepData, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData_MetaData)) }; // 2748153915
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_Inner = { "SelectedBones", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones = { "SelectedBones", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, SelectedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_Inner = { "HighlightedBones", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones = { "HighlightedBones", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, HighlightedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup_MetaData[] = {
		{ "Comment", "// Temporary storage for body setup in order to initialise a dummy body instance\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Temporary storage for body setup in order to initialise a dummy body instance" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup = { "DummyBodySetup", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, DummyBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData[] = {
		{ "Comment", "// Tracked editor actor that owns the original component so we can write back recorded caches\n// from PIE.\n" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "Tracked editor actor that owns the original component so we can write back recorded caches\nfrom PIE." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor = { "EditorActor", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, EditorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_Inner = { "EmbeddedGeometryComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_MetaData[] = {
		{ "Comment", "/** The information of all the embedded instanced static meshes */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionComponent.h" },
		{ "ToolTip", "The information of all the embedded instanced static meshes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents = { "EmbeddedGeometryComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCollectionComponent, EmbeddedGeometryComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ChaosSolverActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitializationFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_Simulating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bForceMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EnableClustering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterGroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_MaxClusterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseSizeSpecificDamageThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DamagePropagationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableDamageFromCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnSleep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bAllowRemovalOnBreak,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ClusterConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CollisionSampleFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_LinearEtherDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_AngularEtherDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialVelocityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_InitialAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_PhysicalMaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CacheParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RestTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_NotifyGeometryCollectionPhysicsLoadingStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosBreakEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosRemovalEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosCrumblingEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DesiredCacheTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_CachePlayback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_OnChaosPhysicsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyBreaks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyTrailing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyRemovals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bNotifyCrumblings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bCrumblingEventIncludesChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bStoreVelocities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bShowBoneColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUseRootProxyForNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bUpdateNavigationInTick,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableRunTimeDataCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RunTimeDataCollectionGuid,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ISMPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableReplication,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_bEnableAbandonAfterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonClusterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_ReplicationAbandonAfterLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_RepData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_SelectedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_HighlightedBones,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_DummyBodySetup,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EditorActor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCollectionComponent_Statics::NewProp_EmbeddedGeometryComponents,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChaosNotifyHandlerInterface_NoRegister, (int32)VTABLE_OFFSET(UGeometryCollectionComponent, IChaosNotifyHandlerInterface), false },  // 3174670757
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams = {
		&UGeometryCollectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionComponent.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionComponent>()
	{
		return UGeometryCollectionComponent::StaticClass();
	}

	void UGeometryCollectionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RepData(TEXT("RepData"));

		const bool bIsValid = true
			&& Name_RepData == ClassReps[(int32)ENetFields_Private::RepData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGeometryCollectionComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionComponent);
	UGeometryCollectionComponent::~UGeometryCollectionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ScriptStructInfo[] = {
		{ FGeomComponentCacheParameters::StaticStruct, Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics::NewStructOps, TEXT("GeomComponentCacheParameters"), &Z_Registration_Info_UScriptStruct_GeomComponentCacheParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeomComponentCacheParameters), 3469777469U) },
		{ FGeometryCollectionRepData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics::NewStructOps, TEXT("GeometryCollectionRepData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionRepData), 2748153915U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionComponent, UGeometryCollectionComponent::StaticClass, TEXT("UGeometryCollectionComponent"), &Z_Registration_Info_UClass_UGeometryCollectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionComponent), 3123291288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1456149219(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
