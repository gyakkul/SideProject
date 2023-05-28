// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DamageEvents.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageEvents() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantizeNormal();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageEvent;
class UScriptStruct* FDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_DamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDamageEvent>()
{
	return FDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageTypeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageTypeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Event used by AActor::TakeDamage and related functions */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Event used by AActor::TakeDamage and related functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass_MetaData[] = {
		{ "Comment", "/** Optional DamageType for this event.  If nullptr, UDamageType will be assumed. */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Optional DamageType for this event.  If nullptr, UDamageType will be assumed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass = { "DamageTypeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDamageEvent, DamageTypeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageEvent_Statics::NewProp_DamageTypeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DamageEvent",
		sizeof(FDamageEvent),
		alignof(FDamageEvent),
		Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPointDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FPointDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointDamageEvent;
class UScriptStruct* FPointDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PointDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_PointDamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPointDamageEvent>()
{
	return FPointDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Damage subclass that handles damage with a single impact location and source direction */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage subclass that handles damage with a single impact location and source direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointDamageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage_MetaData[] = {
		{ "Comment", "/** Actual damage done */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Actual damage done" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointDamageEvent, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection_MetaData[] = {
		{ "Comment", "/** Direction the shot came from. Should be normalized. */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Direction the shot came from. Should be normalized." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointDamageEvent, ShotDirection), Z_Construct_UScriptStruct_FVector_NetQuantizeNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection_MetaData)) }; // 903499713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo_MetaData[] = {
		{ "Comment", "/** Describes the trace/location that caused this damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Describes the trace/location that caused this damage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo = { "HitInfo", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointDamageEvent, HitInfo), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_ShotDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewProp_HitInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDamageEvent,
		&NewStructOps,
		"PointDamageEvent",
		sizeof(FPointDamageEvent),
		alignof(FPointDamageEvent),
		Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FPointDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointDamageEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialDamageParams;
class UScriptStruct* FRadialDamageParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RadialDamageParams"));
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRadialDamageParams>()
{
	return FRadialDamageParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialDamageParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters used to compute radial damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Parameters used to compute radial damage" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialDamageParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Max damage done */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Max damage done" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageParams, BaseDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Damage will not fall below this if within range */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage will not fall below this if within range" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage = { "MinimumDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageParams, MinimumDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Within InnerRadius, do max damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Within InnerRadius, do max damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageParams, InnerRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Outside OuterRadius, do no damage */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Outside OuterRadius, do no damage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageParams, OuterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff_MetaData[] = {
		{ "Category", "RadialDamageParams" },
		{ "Comment", "/** Describes amount of exponential damage falloff */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Describes amount of exponential damage falloff" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff = { "DamageFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageParams, DamageFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_MinimumDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewProp_DamageFalloff,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialDamageParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RadialDamageParams",
		sizeof(FRadialDamageParams),
		alignof(FRadialDamageParams),
		Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageParams()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton, Z_Construct_UScriptStruct_FRadialDamageParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialDamageParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRadialDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FRadialDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadialDamageEvent;
class UScriptStruct* FRadialDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RadialDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RadialDamageEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRadialDamageEvent>()
{
	return FRadialDamageEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadialDamageEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentHits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentHits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Damage subclass that handles damage with a source location and falloff radius */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Damage subclass that handles damage with a source location and falloff radius" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadialDamageEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params_MetaData[] = {
		{ "Comment", "/** Static parameters describing damage falloff math */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Static parameters describing damage falloff math" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageEvent, Params), Z_Construct_UScriptStruct_FRadialDamageParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params_MetaData)) }; // 2887229023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin_MetaData[] = {
		{ "Comment", "/** Location of origin point */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Location of origin point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageEvent, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_Inner = { "ComponentHits", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_MetaData[] = {
		{ "Comment", "/** Hit reslts of specific impacts */" },
		{ "ModuleRelativePath", "Classes/Engine/DamageEvents.h" },
		{ "ToolTip", "Hit reslts of specific impacts" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits = { "ComponentHits", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadialDamageEvent, ComponentHits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewProp_ComponentHits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FDamageEvent,
		&NewStructOps,
		"RadialDamageEvent",
		sizeof(FRadialDamageEvent),
		alignof(FRadialDamageEvent),
		Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadialDamageEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadialDamageEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics::ScriptStructInfo[] = {
		{ FDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FDamageEvent_Statics::NewStructOps, TEXT("DamageEvent"), &Z_Registration_Info_UScriptStruct_DamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageEvent), 369062743U) },
		{ FPointDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FPointDamageEvent_Statics::NewStructOps, TEXT("PointDamageEvent"), &Z_Registration_Info_UScriptStruct_PointDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointDamageEvent), 4197865239U) },
		{ FRadialDamageParams::StaticStruct, Z_Construct_UScriptStruct_FRadialDamageParams_Statics::NewStructOps, TEXT("RadialDamageParams"), &Z_Registration_Info_UScriptStruct_RadialDamageParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialDamageParams), 2887229023U) },
		{ FRadialDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FRadialDamageEvent_Statics::NewStructOps, TEXT("RadialDamageEvent"), &Z_Registration_Info_UScriptStruct_RadialDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadialDamageEvent), 131670759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_1054704199(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DamageEvents_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
