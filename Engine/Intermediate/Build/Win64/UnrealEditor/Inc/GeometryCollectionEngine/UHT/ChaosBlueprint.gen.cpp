// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosBlueprint.h"
#include "ChaosBreakingEventFilter.h"
#include "ChaosCollisionEventFilter.h"
#include "ChaosRemovalEventFilter.h"
#include "ChaosTrailingEventFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBlueprint() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms
		{
			TArray<FChaosCollisionEventData> CollisionEvents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(nullptr, 0) }; // 3875229756
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_MetaData)) }; // 3875229756
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::NewProp_CollisionEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for collisions. Collision listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosCollisionEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosCollisionEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCollisionEvents, TArray<FChaosCollisionEventData> const& CollisionEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms
	{
		TArray<FChaosCollisionEventData> CollisionEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosCollisionEvents_Parms Parms;
	Parms.CollisionEvents=CollisionEvents;
	OnChaosCollisionEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms
		{
			TArray<FChaosBreakingEventData> BreakingEvents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(nullptr, 0) }; // 3951236017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_MetaData)) }; // 3951236017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::NewProp_BreakingEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for breaks. Breaking listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosBreakingEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosBreakingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakingEvents, TArray<FChaosBreakingEventData> const& BreakingEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms
	{
		TArray<FChaosBreakingEventData> BreakingEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosBreakingEvents_Parms Parms;
	Parms.BreakingEvents=BreakingEvents;
	OnChaosBreakingEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms
		{
			TArray<FChaosTrailingEventData> TrailingEvents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(nullptr, 0) }; // 4089737838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_MetaData)) }; // 4089737838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::NewProp_TrailingEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available for breaks. Trailing listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosTrailingEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosTrailingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosTrailingEvents, TArray<FChaosTrailingEventData> const& TrailingEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms
	{
		TArray<FChaosTrailingEventData> TrailingEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosTrailingEvents_Parms Parms;
	Parms.TrailingEvents=TrailingEvents;
	OnChaosTrailingEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics
	{
		struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms
		{
			TArray<FChaosRemovalEventData> RemovalEvents;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovalEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_Inner = { "RemovalEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosRemovalEventData, METADATA_PARAMS(nullptr, 0) }; // 2059567885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents = { "RemovalEvents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms, RemovalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_MetaData)) }; // 2059567885
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::NewProp_RemovalEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n* Called when new destruction events are available for removals. Removal listening must be enabled to get callbacks on this delegate.\n*/" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new destruction events are available for removals. Removal listening must be enabled to get callbacks on this delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine, nullptr, "OnChaosRemovalEvents__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnChaosRemovalEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvents, TArray<FChaosRemovalEventData> const& RemovalEvents)
{
	struct _Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms
	{
		TArray<FChaosRemovalEventData> RemovalEvents;
	};
	_Script_GeometryCollectionEngine_eventOnChaosRemovalEvents_Parms Parms;
	Parms.RemovalEvents=RemovalEvents;
	OnChaosRemovalEvents.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortRemovalEvents)
	{
		P_GET_TARRAY_REF(FChaosRemovalEventData,Z_Param_Out_RemovalEvents);
		P_GET_ENUM(EChaosRemovalSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortRemovalEvents(Z_Param_Out_RemovalEvents,EChaosRemovalSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortTrailingEvents)
	{
		P_GET_TARRAY_REF(FChaosTrailingEventData,Z_Param_Out_TrailingEvents);
		P_GET_ENUM(EChaosTrailingSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortTrailingEvents(Z_Param_Out_TrailingEvents,EChaosTrailingSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortBreakingEvents)
	{
		P_GET_TARRAY_REF(FChaosBreakingEventData,Z_Param_Out_BreakingEvents);
		P_GET_ENUM(EChaosBreakingSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortBreakingEvents(Z_Param_Out_BreakingEvents,EChaosBreakingSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSortCollisionEvents)
	{
		P_GET_TARRAY_REF(FChaosCollisionEventData,Z_Param_Out_CollisionEvents);
		P_GET_ENUM(EChaosCollisionSortMethod,Z_Param_SortMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortCollisionEvents(Z_Param_Out_CollisionEvents,EChaosCollisionSortMethod(Z_Param_SortMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execIsEventListening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEventListening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetRemovalEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemovalEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrailingEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBreakingEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventEnabled)
	{
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionEventEnabled(Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetRemovalEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosRemovalEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemovalEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetTrailingEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosTrailingEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrailingEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetBreakingEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosBreakingEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBreakingEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execSetCollisionEventRequestSettings)
	{
		P_GET_STRUCT_REF(FChaosCollisionEventRequestSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionEventRequestSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execRemoveGeometryCollectionActor)
	{
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGeometryCollectionActor(Z_Param_GeometryCollectionActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execAddGeometryCollectionActor)
	{
		P_GET_OBJECT(AGeometryCollectionActor,Z_Param_GeometryCollectionActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGeometryCollectionActor(Z_Param_GeometryCollectionActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execRemoveChaosSolverActor)
	{
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChaosSolverActor(Z_Param_ChaosSolverActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosDestructionListener::execAddChaosSolverActor)
	{
		P_GET_OBJECT(AChaosSolverActor,Z_Param_ChaosSolverActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChaosSolverActor(Z_Param_ChaosSolverActor);
		P_NATIVE_END;
	}
	void UChaosDestructionListener::StaticRegisterNativesUChaosDestructionListener()
	{
		UClass* Class = UChaosDestructionListener::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChaosSolverActor", &UChaosDestructionListener::execAddChaosSolverActor },
			{ "AddGeometryCollectionActor", &UChaosDestructionListener::execAddGeometryCollectionActor },
			{ "IsEventListening", &UChaosDestructionListener::execIsEventListening },
			{ "RemoveChaosSolverActor", &UChaosDestructionListener::execRemoveChaosSolverActor },
			{ "RemoveGeometryCollectionActor", &UChaosDestructionListener::execRemoveGeometryCollectionActor },
			{ "SetBreakingEventEnabled", &UChaosDestructionListener::execSetBreakingEventEnabled },
			{ "SetBreakingEventRequestSettings", &UChaosDestructionListener::execSetBreakingEventRequestSettings },
			{ "SetCollisionEventEnabled", &UChaosDestructionListener::execSetCollisionEventEnabled },
			{ "SetCollisionEventRequestSettings", &UChaosDestructionListener::execSetCollisionEventRequestSettings },
			{ "SetRemovalEventEnabled", &UChaosDestructionListener::execSetRemovalEventEnabled },
			{ "SetRemovalEventRequestSettings", &UChaosDestructionListener::execSetRemovalEventRequestSettings },
			{ "SetTrailingEventEnabled", &UChaosDestructionListener::execSetTrailingEventEnabled },
			{ "SetTrailingEventRequestSettings", &UChaosDestructionListener::execSetTrailingEventRequestSettings },
			{ "SortBreakingEvents", &UChaosDestructionListener::execSortBreakingEvents },
			{ "SortCollisionEvents", &UChaosDestructionListener::execSortCollisionEvents },
			{ "SortRemovalEvents", &UChaosDestructionListener::execSortRemovalEvents },
			{ "SortTrailingEvents", &UChaosDestructionListener::execSortTrailingEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics
	{
		struct ChaosDestructionListener_eventAddChaosSolverActor_Parms
		{
			AChaosSolverActor* ChaosSolverActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventAddChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::NewProp_ChaosSolverActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddChaosSolverActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::ChaosDestructionListener_eventAddChaosSolverActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics
	{
		struct ChaosDestructionListener_eventAddGeometryCollectionActor_Parms
		{
			AGeometryCollectionActor* GeometryCollectionActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventAddGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically adds a chaos solver to the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically adds a chaos solver to the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "AddGeometryCollectionActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::ChaosDestructionListener_eventAddGeometryCollectionActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics
	{
		struct ChaosDestructionListener_eventIsEventListening_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventIsEventListening_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosDestructionListener_eventIsEventListening_Parms), &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Returns if the destruction listener is listening to any events\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Returns if the destruction listener is listening to any events" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "IsEventListening", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::ChaosDestructionListener_eventIsEventListening_Parms), Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_IsEventListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_IsEventListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics
	{
		struct ChaosDestructionListener_eventRemoveChaosSolverActor_Parms
		{
			AChaosSolverActor* ChaosSolverActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChaosSolverActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor = { "ChaosSolverActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveChaosSolverActor_Parms, ChaosSolverActor), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::NewProp_ChaosSolverActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveChaosSolverActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::ChaosDestructionListener_eventRemoveChaosSolverActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics
	{
		struct ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms
		{
			AGeometryCollectionActor* GeometryCollectionActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollectionActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::NewProp_GeometryCollectionActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Dynamically removes a chaos solver from the listener\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Dynamically removes a chaos solver from the listener" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "RemoveGeometryCollectionActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::ChaosDestructionListener_eventRemoveGeometryCollectionActor_Parms), Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetBreakingEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetBreakingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables breaking event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables breaking event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::ChaosDestructionListener_eventSetBreakingEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms
		{
			FChaosBreakingEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings_MetaData)) }; // 517881730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets breaking event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets breaking event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetBreakingEventRequestSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::ChaosDestructionListener_eventSetBreakingEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetCollisionEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetCollisionEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables collision event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables collision event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::ChaosDestructionListener_eventSetCollisionEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms
		{
			FChaosCollisionEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings_MetaData)) }; // 4030984931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets collision event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets collision event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetCollisionEventRequestSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::ChaosDestructionListener_eventSetCollisionEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetRemovalEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetRemovalEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosDestructionListener_eventSetRemovalEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables removal event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables removal event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetRemovalEventEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::ChaosDestructionListener_eventSetRemovalEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms
		{
			FChaosRemovalEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings_MetaData)) }; // 3772828862
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets removal event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets removal event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetRemovalEventRequestSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::ChaosDestructionListener_eventSetRemovalEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics
	{
		struct ChaosDestructionListener_eventSetTrailingEventEnabled_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ChaosDestructionListener_eventSetTrailingEventEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Enables or disables trailing event listening\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Enables or disables trailing event listening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::ChaosDestructionListener_eventSetTrailingEventEnabled_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics
	{
		struct ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms
		{
			FChaosTrailingEventRequestSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms, InSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings_MetaData)) }; // 1279528263
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sets trailing event request settings dynamically\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sets trailing event request settings dynamically" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SetTrailingEventRequestSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::ChaosDestructionListener_eventSetTrailingEventRequestSettings_Parms), Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics
	{
		struct ChaosDestructionListener_eventSortBreakingEvents_Parms
		{
			TArray<FChaosBreakingEventData> BreakingEvents;
			EChaosBreakingSortMethod SortMethod;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEvents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BreakingEvents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner = { "BreakingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosBreakingEventData, METADATA_PARAMS(nullptr, 0) }; // 3951236017
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents = { "BreakingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, BreakingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3951236017
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortBreakingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(nullptr, 0) }; // 3489048511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_BreakingEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::NewProp_SortMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts breaking events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts breaking events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortBreakingEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::ChaosDestructionListener_eventSortBreakingEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics
	{
		struct ChaosDestructionListener_eventSortCollisionEvents_Parms
		{
			TArray<FChaosCollisionEventData> CollisionEvents;
			EChaosCollisionSortMethod SortMethod;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEvents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionEvents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner = { "CollisionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosCollisionEventData, METADATA_PARAMS(nullptr, 0) }; // 3875229756
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents = { "CollisionEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, CollisionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3875229756
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortCollisionEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, METADATA_PARAMS(nullptr, 0) }; // 3126634927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_CollisionEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::NewProp_SortMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts collision events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts collision events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortCollisionEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::ChaosDestructionListener_eventSortCollisionEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics
	{
		struct ChaosDestructionListener_eventSortRemovalEvents_Parms
		{
			TArray<FChaosRemovalEventData> RemovalEvents;
			EChaosRemovalSortMethod SortMethod;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEvents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RemovalEvents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents_Inner = { "RemovalEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosRemovalEventData, METADATA_PARAMS(nullptr, 0) }; // 2059567885
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents = { "RemovalEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortRemovalEvents_Parms, RemovalEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2059567885
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortRemovalEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosRemovalSortMethod, METADATA_PARAMS(nullptr, 0) }; // 2139137213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_RemovalEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::NewProp_SortMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts removal events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts removal events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortRemovalEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::ChaosDestructionListener_eventSortRemovalEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics
	{
		struct ChaosDestructionListener_eventSortTrailingEvents_Parms
		{
			TArray<FChaosTrailingEventData> TrailingEvents;
			EChaosTrailingSortMethod SortMethod;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEvents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailingEvents;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner = { "TrailingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChaosTrailingEventData, METADATA_PARAMS(nullptr, 0) }; // 4089737838
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents = { "TrailingEvents", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, TrailingEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4089737838
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosDestructionListener_eventSortTrailingEvents_Parms, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, METADATA_PARAMS(nullptr, 0) }; // 2571979225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_TrailingEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::NewProp_SortMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Destruction Listener" },
		{ "Comment", "// Sorts trailing events according to the given sort method\x09\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Sorts trailing events according to the given sort method" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosDestructionListener, nullptr, "SortTrailingEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::ChaosDestructionListener_eventSortTrailingEvents_Parms), Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosDestructionListener);
	UClass* Z_Construct_UClass_UChaosDestructionListener_NoRegister()
	{
		return UChaosDestructionListener::StaticClass();
	}
	struct Z_Construct_UClass_UChaosDestructionListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCollisionEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCollisionEventListeningEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBreakingEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBreakingEventListeningEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTrailingEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTrailingEventListeningEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRemovalEventListeningEnabled_MetaData[];
#endif
		static void NewProp_bIsRemovalEventListeningEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRemovalEventListeningEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEventRequestSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionEventRequestSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakingEventRequestSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BreakingEventRequestSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailingEventRequestSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailingEventRequestSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemovalEventRequestSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemovalEventRequestSettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChaosSolverActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosSolverActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ChaosSolverActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionActors_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActors_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_GeometryCollectionActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCollisionEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCollisionEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBreakingEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBreakingEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTrailingEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTrailingEvents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemovalEvents_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemovalEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosDestructionListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosDestructionListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddChaosSolverActor, "AddChaosSolverActor" }, // 4135126047
		{ &Z_Construct_UFunction_UChaosDestructionListener_AddGeometryCollectionActor, "AddGeometryCollectionActor" }, // 1632921706
		{ &Z_Construct_UFunction_UChaosDestructionListener_IsEventListening, "IsEventListening" }, // 985365967
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveChaosSolverActor, "RemoveChaosSolverActor" }, // 4088500821
		{ &Z_Construct_UFunction_UChaosDestructionListener_RemoveGeometryCollectionActor, "RemoveGeometryCollectionActor" }, // 308146236
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventEnabled, "SetBreakingEventEnabled" }, // 2450973567
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetBreakingEventRequestSettings, "SetBreakingEventRequestSettings" }, // 2624426431
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventEnabled, "SetCollisionEventEnabled" }, // 3077954874
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetCollisionEventRequestSettings, "SetCollisionEventRequestSettings" }, // 1274121840
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventEnabled, "SetRemovalEventEnabled" }, // 814522267
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetRemovalEventRequestSettings, "SetRemovalEventRequestSettings" }, // 3301179258
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventEnabled, "SetTrailingEventEnabled" }, // 1850452619
		{ &Z_Construct_UFunction_UChaosDestructionListener_SetTrailingEventRequestSettings, "SetTrailingEventRequestSettings" }, // 1599208869
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortBreakingEvents, "SortBreakingEvents" }, // 3175815205
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortCollisionEvents, "SortCollisionEvents" }, // 977162686
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortRemovalEvents, "SortRemovalEvents" }, // 4275970295
		{ &Z_Construct_UFunction_UChaosDestructionListener_SortTrailingEvents, "SortTrailingEvents" }, // 1946340774
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Chaos" },
		{ "Comment", "/** Object allowing for retrieving Chaos Destruction data. */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "ChaosBlueprint.h" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Object allowing for retrieving Chaos Destruction data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsCollisionEventListeningEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled = { "bIsCollisionEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// Whether or not collision event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not collision event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsBreakingEventListeningEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled = { "bIsBreakingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// Whether or not trailing event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not trailing event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsTrailingEventListeningEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled = { "bIsTrailingEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_MetaData[] = {
		{ "Category", "Removal Events" },
		{ "Comment", "// Whether or not removal event listening is enabled\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Whether or not removal event listening is enabled" },
	};
#endif
	void Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_SetBit(void* Obj)
	{
		((UChaosDestructionListener*)Obj)->bIsRemovalEventListeningEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled = { "bIsRemovalEventListeningEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UChaosDestructionListener), &Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData[] = {
		{ "Category", "Collision Events" },
		{ "Comment", "// The settings to use for collision event listening\n" },
		{ "EditCondition", "bIsCollisionEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for collision event listening" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings = { "CollisionEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, CollisionEventRequestSettings), Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings_MetaData)) }; // 4030984931
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData[] = {
		{ "Category", "Breaking Events" },
		{ "Comment", "// The settings to use for breaking event listening\n" },
		{ "EditCondition", "bIsBreakingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for breaking event listening" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings = { "BreakingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, BreakingEventRequestSettings), Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings_MetaData)) }; // 517881730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData[] = {
		{ "Category", "Trailing Events" },
		{ "Comment", "// The settings to use for trailing event listening\n" },
		{ "EditCondition", "bIsTrailingEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for trailing event listening" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings = { "TrailingEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, TrailingEventRequestSettings), Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings_MetaData)) }; // 1279528263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings_MetaData[] = {
		{ "Category", "Removal Events" },
		{ "Comment", "// The settings to use for removal event listening\n" },
		{ "EditCondition", "bIsRemovalEventListeningEnabled" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "The settings to use for removal event listening" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings = { "RemovalEventRequestSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, RemovalEventRequestSettings), Z_Construct_UScriptStruct_FChaosRemovalEventRequestSettings, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings_MetaData)) }; // 3772828862
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData[] = {
		{ "Category", "Solvers" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors = { "ChaosSolverActors", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, ChaosSolverActors), METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData[] = {
		{ "Category", "GeometryCollections" },
		{ "Comment", "// Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver.\n" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Which chaos solver actors we're using. If empty, this listener will fallback to the \"world\" solver." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors = { "GeometryCollectionActors", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, GeometryCollectionActors), METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData[] = {
		{ "Comment", "/** Called when new collision events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new collision events are available." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents = { "OnCollisionEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, OnCollisionEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents_MetaData)) }; // 2258560363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData[] = {
		{ "Comment", "/** Called when new breaking events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new breaking events are available." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents = { "OnBreakingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, OnBreakingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents_MetaData)) }; // 3416338499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData[] = {
		{ "Comment", "/** Called when new trailing events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents = { "OnTrailingEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, OnTrailingEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents_MetaData)) }; // 2928752899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents_MetaData[] = {
		{ "Comment", "/** Called when new trailing events are available. */" },
		{ "ModuleRelativePath", "Public/ChaosBlueprint.h" },
		{ "ToolTip", "Called when new trailing events are available." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents = { "OnRemovalEvents", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosDestructionListener, OnRemovalEvents), Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosRemovalEvents__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents_MetaData)) }; // 2574735627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsCollisionEventListeningEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsBreakingEventListeningEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsTrailingEventListeningEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_bIsRemovalEventListeningEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_CollisionEventRequestSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_BreakingEventRequestSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_TrailingEventRequestSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_RemovalEventRequestSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_ChaosSolverActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_GeometryCollectionActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnCollisionEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnBreakingEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnTrailingEvents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosDestructionListener_Statics::NewProp_OnRemovalEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosDestructionListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosDestructionListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams = {
		&UChaosDestructionListener::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosDestructionListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosDestructionListener()
	{
		if (!Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton, Z_Construct_UClass_UChaosDestructionListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosDestructionListener.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UChaosDestructionListener>()
	{
		return UChaosDestructionListener::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosDestructionListener);
	UChaosDestructionListener::~UChaosDestructionListener() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosDestructionListener, UChaosDestructionListener::StaticClass, TEXT("UChaosDestructionListener"), &Z_Registration_Info_UClass_UChaosDestructionListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosDestructionListener), 2265476799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_425613818(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
