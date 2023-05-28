// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Steering/MassSteeringFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSteeringFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovingSteeringParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassStandingSteeringFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassStandingSteeringParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassSteeringFragment();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSteeringFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassSteeringFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSteeringFragment;
class UScriptStruct* FMassSteeringFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSteeringFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSteeringFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSteeringFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassSteeringFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSteeringFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassSteeringFragment>()
{
	return FMassSteeringFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSteeringFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Steering fragment. */" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Steering fragment." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSteeringFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassSteeringFragment",
		sizeof(FMassSteeringFragment),
		alignof(FMassSteeringFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSteeringFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSteeringFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSteeringFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSteeringFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassStandingSteeringFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassStandingSteeringFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment;
class UScriptStruct* FMassStandingSteeringFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStandingSteeringFragment, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassStandingSteeringFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassStandingSteeringFragment>()
{
	return FMassStandingSteeringFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Standing steering. */" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Standing steering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStandingSteeringFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassStandingSteeringFragment",
		sizeof(FMassStandingSteeringFragment),
		alignof(FMassStandingSteeringFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStandingSteeringFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassMovingSteeringParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassMovingSteeringParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters;
class UScriptStruct* FMassMovingSteeringParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovingSteeringParameters, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassMovingSteeringParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassMovingSteeringParameters>()
{
	return FMassMovingSteeringParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Steering related movement parameters. */" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Steering related movement parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovingSteeringParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_ReactionTime_MetaData[] = {
		{ "Category", "Moving" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Steering reaction time in seconds. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Steering reaction time in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_ReactionTime = { "ReactionTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingSteeringParameters, ReactionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_ReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_ReactionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_LookAheadTime_MetaData[] = {
		{ "Category", "Moving" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much we look ahead when steering. Affects how steeply we steer towards the goal and when to start to slow down at the end of the path. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "How much we look ahead when steering. Affects how steeply we steer towards the goal and when to start to slow down at the end of the path." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_LookAheadTime = { "LookAheadTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovingSteeringParameters, LookAheadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_LookAheadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_LookAheadTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_ReactionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewProp_LookAheadTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassMovingSteeringParameters",
		sizeof(FMassMovingSteeringParameters),
		alignof(FMassMovingSteeringParameters),
		Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovingSteeringParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassStandingSteeringParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassStandingSteeringParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters;
class UScriptStruct* FMassStandingSteeringParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStandingSteeringParameters, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassStandingSteeringParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassStandingSteeringParameters>()
{
	return FMassStandingSteeringParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReactionTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReactionTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMoveThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMoveThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMoveThresholdVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMoveThresholdVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpeedHysteresisScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSpeedHysteresisScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSelectionCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSelectionCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSelectionCooldownVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetSelectionCooldownVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZoneRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZoneRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStandingSteeringParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_ReactionTime_MetaData[] = {
		{ "Category", "Standing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Steering reaction time in seconds. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Steering reaction time in seconds." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_ReactionTime = { "ReactionTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, ReactionTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_ReactionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_ReactionTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThreshold_MetaData[] = {
		{ "Category", "Standing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** How much the target should deviate from the ghost location before update */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "How much the target should deviate from the ghost location before update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThreshold = { "TargetMoveThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, TargetMoveThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThresholdVariance_MetaData[] = {
		{ "Category", "Standing" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThresholdVariance = { "TargetMoveThresholdVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, TargetMoveThresholdVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThresholdVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThresholdVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_LowSpeedThreshold_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** If the velocity is below this threshold, it is clamped to 0. This allows to prevent jittery movement when trying to be stationary. */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "If the velocity is below this threshold, it is clamped to 0. This allows to prevent jittery movement when trying to be stationary." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_LowSpeedThreshold = { "LowSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, LowSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_LowSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_LowSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSpeedHysteresisScale_MetaData[] = {
		{ "Category", "Standing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** How much the max speed can drop before we stop tracking it. */" },
		{ "ForceUnits", "x" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "How much the max speed can drop before we stop tracking it." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSpeedHysteresisScale = { "TargetSpeedHysteresisScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, TargetSpeedHysteresisScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSpeedHysteresisScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSpeedHysteresisScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldown_MetaData[] = {
		{ "Category", "Standing" },
		{ "ClampMin", "0.05" },
		{ "Comment", "/** Time between updates, varied randomly. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
		{ "ToolTip", "Time between updates, varied randomly." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldown = { "TargetSelectionCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, TargetSelectionCooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldownVariance_MetaData[] = {
		{ "Category", "Standing" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldownVariance = { "TargetSelectionCooldownVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, TargetSelectionCooldownVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldownVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldownVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_DeadZoneRadius_MetaData[] = {
		{ "Category", "Standing" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/Steering/MassSteeringFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_DeadZoneRadius = { "DeadZoneRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStandingSteeringParameters, DeadZoneRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_DeadZoneRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_DeadZoneRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_ReactionTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetMoveThresholdVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_LowSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSpeedHysteresisScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_TargetSelectionCooldownVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewProp_DeadZoneRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassStandingSteeringParameters",
		sizeof(FMassStandingSteeringParameters),
		alignof(FMassStandingSteeringParameters),
		Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStandingSteeringParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassSteeringFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSteeringFragment_Statics::NewStructOps, TEXT("MassSteeringFragment"), &Z_Registration_Info_UScriptStruct_MassSteeringFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSteeringFragment), 1712826404U) },
		{ FMassStandingSteeringFragment::StaticStruct, Z_Construct_UScriptStruct_FMassStandingSteeringFragment_Statics::NewStructOps, TEXT("MassStandingSteeringFragment"), &Z_Registration_Info_UScriptStruct_MassStandingSteeringFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStandingSteeringFragment), 390361958U) },
		{ FMassMovingSteeringParameters::StaticStruct, Z_Construct_UScriptStruct_FMassMovingSteeringParameters_Statics::NewStructOps, TEXT("MassMovingSteeringParameters"), &Z_Registration_Info_UScriptStruct_MassMovingSteeringParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovingSteeringParameters), 3580735477U) },
		{ FMassStandingSteeringParameters::StaticStruct, Z_Construct_UScriptStruct_FMassStandingSteeringParameters_Statics::NewStructOps, TEXT("MassStandingSteeringParameters"), &Z_Registration_Info_UScriptStruct_MassStandingSteeringParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStandingSteeringParameters), 2807615447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringFragments_h_1278317007(TEXT("/Script/MassNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_Steering_MassSteeringFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
