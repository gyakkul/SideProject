// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayStaticsTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption;
	static UEnum* ESuggestProjVelocityTraceOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESuggestProjVelocityTraceOption"));
		}
		return Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESuggestProjVelocityTraceOption::Type>()
	{
		return ESuggestProjVelocityTraceOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enumerators[] = {
		{ "ESuggestProjVelocityTraceOption::DoNotTrace", (int64)ESuggestProjVelocityTraceOption::DoNotTrace },
		{ "ESuggestProjVelocityTraceOption::TraceFullPath", (int64)ESuggestProjVelocityTraceOption::TraceFullPath },
		{ "ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending", (int64)ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Trace option to SuggestProjectileVelocity functions.\n" },
		{ "DoNotTrace.Name", "ESuggestProjVelocityTraceOption::DoNotTrace" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "OnlyTraceWhileAscending.Name", "ESuggestProjVelocityTraceOption::OnlyTraceWhileAscending" },
		{ "ToolTip", "Trace option to SuggestProjectileVelocity functions." },
		{ "TraceFullPath.Name", "ESuggestProjVelocityTraceOption::TraceFullPath" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESuggestProjVelocityTraceOption",
		"ESuggestProjVelocityTraceOption::Type",
		Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption()
	{
		if (!Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton, Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathParams;
class UScriptStruct* FPredictProjectilePathParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathParams"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathParams>()
{
	return FPredictProjectilePathParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaunchVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceWithCollision_MetaData[];
#endif
		static void NewProp_bTraceWithCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceWithCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceWithChannel_MetaData[];
#endif
		static void NewProp_bTraceWithChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceWithChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGravityZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDebugTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input parameters to PredictProjectilePath functions.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Input parameters to PredictProjectilePath functions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Location of the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Location of the start of the trace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Initial launch velocity at the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Initial launch velocity at the start of the trace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, LaunchVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Whether to trace along the path looking for blocking collision and stopping at the first hit.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Whether to trace along the path looking for blocking collision and stopping at the first hit." },
	};
#endif
	void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_SetBit(void* Obj)
	{
		((FPredictProjectilePathParams*)Obj)->bTraceWithCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision = { "bTraceWithCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Projectile radius, used when tracing for collision. If <= 0, a line trace is used instead.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Projectile radius, used when tracing for collision. If <= 0, a line trace is used instead." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ProjectileRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Maximum simulation time for the virtual projectile.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Maximum simulation time for the virtual projectile." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime = { "MaxSimTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, MaxSimTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Whether or not to use TraceChannel, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Whether or not to use TraceChannel, if tracing with collision." },
	};
#endif
	void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_SetBit(void* Obj)
	{
		((FPredictProjectilePathParams*)Obj)->bTraceWithChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel = { "bTraceWithChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Trace channel to use, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Trace channel to use, if tracing with collision." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Object type to use, if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Object type to use, if tracing with collision." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Actors to ignore when tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Actors to ignore when tracing with collision." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Determines size of each sub-step in the simulation (chopping up MaxSimTime). Recommended between 10 to 30 depending on desired quality versus performance.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Determines size of each sub-step in the simulation (chopping up MaxSimTime). Recommended between 10 to 30 depending on desired quality versus performance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency = { "SimFrequency", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, SimFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Optional override of Gravity (if 0, uses WorldGravityZ).\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Optional override of Gravity (if 0, uses WorldGravityZ)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ = { "OverrideGravityZ", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, OverrideGravityZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Debug drawing duration option.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Debug drawing duration option." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType_MetaData)) }; // 2158289653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Duration of debug lines (only relevant for DrawDebugType::Duration)\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Duration of debug lines (only relevant for DrawDebugType::Duration)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime = { "DrawDebugTime", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathParams, DrawDebugTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "PredictProjectilePathParams" },
		{ "Comment", "// Trace against complex collision (triangles rather than simple primitives) if tracing with collision.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Trace against complex collision (triangles rather than simple primitives) if tracing with collision." },
	};
#endif
	void Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FPredictProjectilePathParams*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPredictProjectilePathParams), &Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_LaunchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ProjectileRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_MaxSimTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceWithChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_SimFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_OverrideGravityZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_DrawDebugTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewProp_bTraceComplex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PredictProjectilePathParams",
		sizeof(FPredictProjectilePathParams),
		alignof(FPredictProjectilePathParams),
		Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PredictProjectilePathParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData;
class UScriptStruct* FPredictProjectilePathPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathPointData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathPointData"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathPointData>()
{
	return FPredictProjectilePathPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data about a single point in a projectile path trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Data about a single point in a projectile path trace." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Location of this point\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Location of this point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Velocity at this point\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Velocity at this point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "PredictProjectilePathPointData" },
		{ "Comment", "// Elapsed time at this point from the start of the trace.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Elapsed time at this point from the start of the trace." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathPointData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PredictProjectilePathPointData",
		sizeof(FPredictProjectilePathPointData),
		alignof(FPredictProjectilePathPointData),
		Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictProjectilePathResult;
class UScriptStruct* FPredictProjectilePathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictProjectilePathResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PredictProjectilePathResult"));
	}
	return Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPredictProjectilePathResult>()
{
	return FPredictProjectilePathResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTraceDestination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastTraceDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Container for the result of a projectile path trace (using PredictProjectilePath).\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Container for the result of a projectile path trace (using PredictProjectilePath)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictProjectilePathResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_Inner = { "PathData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(nullptr, 0) }; // 3714021580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Info for each point on the path.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Info for each point on the path." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData = { "PathData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, PathData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_MetaData)) }; // 3714021580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Info on the last point we tried to trace to, which may have been beyond the final hit.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Info on the last point we tried to trace to, which may have been beyond the final hit." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination = { "LastTraceDestination", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, LastTraceDestination), Z_Construct_UScriptStruct_FPredictProjectilePathPointData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination_MetaData)) }; // 3714021580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult_MetaData[] = {
		{ "Category", "PredictProjectilePathResult" },
		{ "Comment", "// Hit along the trace, if tracing with collision was enabled.\n" },
		{ "ModuleRelativePath", "Classes/Kismet/GameplayStaticsTypes.h" },
		{ "ToolTip", "Hit along the trace, if tracing with collision was enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPredictProjectilePathResult, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_PathData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_LastTraceDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewProp_HitResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PredictProjectilePathResult",
		sizeof(FPredictProjectilePathResult),
		alignof(FPredictProjectilePathResult),
		Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult()
	{
		if (!Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton, Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PredictProjectilePathResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::EnumInfo[] = {
		{ ESuggestProjVelocityTraceOption_StaticEnum, TEXT("ESuggestProjVelocityTraceOption"), &Z_Registration_Info_UEnum_ESuggestProjVelocityTraceOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2293334501U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::ScriptStructInfo[] = {
		{ FPredictProjectilePathParams::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathParams_Statics::NewStructOps, TEXT("PredictProjectilePathParams"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathParams), 3860231298U) },
		{ FPredictProjectilePathPointData::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathPointData_Statics::NewStructOps, TEXT("PredictProjectilePathPointData"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathPointData), 3714021580U) },
		{ FPredictProjectilePathResult::StaticStruct, Z_Construct_UScriptStruct_FPredictProjectilePathResult_Statics::NewStructOps, TEXT("PredictProjectilePathResult"), &Z_Registration_Info_UScriptStruct_PredictProjectilePathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictProjectilePathResult), 995417648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_672827958(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_GameplayStaticsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
