// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionComponentCacheAdapter() {}
// Cross Module References
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FBreakingEvent();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCacheEventBase();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionEvent();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FEnableStateEvent();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FTrailingEvent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

static_assert(std::is_polymorphic<FEnableStateEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FEnableStateEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnableStateEvent;
class UScriptStruct* FEnableStateEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("EnableStateEvent"));
	}
	return Z_Registration_Info_UScriptStruct_EnableStateEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FEnableStateEvent>()
{
	return FEnableStateEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnableStateEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnableStateEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnableStateEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnableStateEvent, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FEnableStateEvent*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEnableStateEvent), &Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewProp_bEnable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnableStateEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FCacheEventBase,
		&NewStructOps,
		"EnableStateEvent",
		sizeof(FEnableStateEvent),
		alignof(FEnableStateEvent),
		Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnableStateEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnableStateEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton, Z_Construct_UScriptStruct_FEnableStateEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnableStateEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBreakingEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FBreakingEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BreakingEvent;
class UScriptStruct* FBreakingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBreakingEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("BreakingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_BreakingEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FBreakingEvent>()
{
	return FBreakingEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBreakingEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBreakingEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin = { "BoundingBoxMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, BoundingBoxMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax = { "BoundingBoxMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBreakingEvent, BoundingBoxMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewProp_BoundingBoxMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBreakingEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FCacheEventBase,
		&NewStructOps,
		"BreakingEvent",
		sizeof(FBreakingEvent),
		alignof(FBreakingEvent),
		Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBreakingEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBreakingEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBreakingEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton, Z_Construct_UScriptStruct_FBreakingEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BreakingEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCollisionEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FCollisionEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CollisionEvent;
class UScriptStruct* FCollisionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("CollisionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CollisionEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FCollisionEvent>()
{
	return FCollisionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCollisionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaVelocity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaVelocity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaVelocity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaVelocity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PenetrationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PenetrationDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCollisionEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1 = { "Velocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Velocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2 = { "Velocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Velocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1 = { "DeltaVelocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, DeltaVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2 = { "DeltaVelocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, DeltaVelocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1 = { "AngularVelocity1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, AngularVelocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2 = { "AngularVelocity2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, AngularVelocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1 = { "Mass1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Mass1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2 = { "Mass2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, Mass2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth = { "PenetrationDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCollisionEvent, PenetrationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AccumulatedImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Velocity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_DeltaVelocity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_AngularVelocity2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_Mass2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewProp_PenetrationDepth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCollisionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FCacheEventBase,
		&NewStructOps,
		"CollisionEvent",
		sizeof(FCollisionEvent),
		alignof(FCollisionEvent),
		Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCollisionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCollisionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCollisionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton, Z_Construct_UScriptStruct_FCollisionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CollisionEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTrailingEvent>() == std::is_polymorphic<FCacheEventBase>(), "USTRUCT FTrailingEvent cannot be polymorphic unless super FCacheEventBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrailingEvent;
class UScriptStruct* FTrailingEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrailingEvent, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("TrailingEvent"));
	}
	return Z_Registration_Info_UScriptStruct_TrailingEvent.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FTrailingEvent>()
{
	return FTrailingEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrailingEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrailingEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin = { "BoundingBoxMin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, BoundingBoxMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Chaos/Adapters/GeometryCollectionComponentCacheAdapter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax = { "BoundingBoxMax", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrailingEvent, BoundingBoxMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewProp_BoundingBoxMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrailingEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FCacheEventBase,
		&NewStructOps,
		"TrailingEvent",
		sizeof(FTrailingEvent),
		alignof(FTrailingEvent),
		Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrailingEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrailingEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrailingEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton, Z_Construct_UScriptStruct_FTrailingEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrailingEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics::ScriptStructInfo[] = {
		{ FEnableStateEvent::StaticStruct, Z_Construct_UScriptStruct_FEnableStateEvent_Statics::NewStructOps, TEXT("EnableStateEvent"), &Z_Registration_Info_UScriptStruct_EnableStateEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnableStateEvent), 3968125983U) },
		{ FBreakingEvent::StaticStruct, Z_Construct_UScriptStruct_FBreakingEvent_Statics::NewStructOps, TEXT("BreakingEvent"), &Z_Registration_Info_UScriptStruct_BreakingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBreakingEvent), 3182792165U) },
		{ FCollisionEvent::StaticStruct, Z_Construct_UScriptStruct_FCollisionEvent_Statics::NewStructOps, TEXT("CollisionEvent"), &Z_Registration_Info_UScriptStruct_CollisionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCollisionEvent), 3012848977U) },
		{ FTrailingEvent::StaticStruct, Z_Construct_UScriptStruct_FTrailingEvent_Statics::NewStructOps, TEXT("TrailingEvent"), &Z_Registration_Info_UScriptStruct_TrailingEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrailingEvent), 3530580915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_1615390571(TEXT("/Script/ChaosCaching"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Adapters_GeometryCollectionComponentCacheAdapter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
