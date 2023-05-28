// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SolverEventFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSolverEventFilters() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverRemovalFilterSettings();
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings;
class UScriptStruct* FSolverTrailingFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverTrailingFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverTrailingFilterSettings>()
{
	return FSolverTrailingFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverTrailingFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverTrailingFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSolverTrailingFilterSettings), &Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|TrailingData Generation" },
		{ "Comment", "/** */" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverTrailingFilterSettings, MinVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_FilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewProp_MinVolume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"SolverTrailingFilterSettings",
		sizeof(FSolverTrailingFilterSettings),
		alignof(FSolverTrailingFilterSettings),
		Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverTrailingFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings;
class UScriptStruct* FSolverCollisionFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverCollisionFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverCollisionFilterSettings>()
{
	return FSolverCollisionFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinImpulse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverCollisionFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverCollisionFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSolverCollisionFilterSettings), &Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData[] = {
		{ "Category", "ChaosPhysics|CollisionData Generation" },
		{ "Comment", "/** The minimum impulse threshold for the results. */" },
		{ "DisplayName", "Min Impulse Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum impulse threshold for the results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse = { "MinImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverCollisionFilterSettings, MinImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_FilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewProp_MinImpulse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"SolverCollisionFilterSettings",
		sizeof(FSolverCollisionFilterSettings),
		alignof(FSolverCollisionFilterSettings),
		Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverCollisionFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings;
class UScriptStruct* FSolverBreakingFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverBreakingFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverBreakingFilterSettings>()
{
	return FSolverBreakingFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverBreakingFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverBreakingFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSolverBreakingFilterSettings), &Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "DisplayName", "Min Speed Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The min velocity threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverBreakingFilterSettings, MinVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_FilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewProp_MinVolume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"SolverBreakingFilterSettings",
		sizeof(FSolverBreakingFilterSettings),
		alignof(FSolverBreakingFilterSettings),
		Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverBreakingFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings;
class UScriptStruct* FSolverRemovalFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("SolverRemovalFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FSolverRemovalFilterSettings>()
{
	return FSolverRemovalFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterEnabled_MetaData[];
#endif
		static void NewProp_FilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverRemovalFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** Filter is enabled. */" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "Filter is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_SetBit(void* Obj)
	{
		((FSolverRemovalFilterSettings*)Obj)->FilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled = { "FilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSolverRemovalFilterSettings), &Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "DisplayName", "Min Mass Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverRemovalFilterSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume_MetaData[] = {
		{ "Category", "ChaosPhysics|BreakingData Generation" },
		{ "DisplayName", "Min Volume Threshold" },
		{ "ModuleRelativePath", "Public/SolverEventFilters.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume = { "MinVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverRemovalFilterSettings, MinVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_FilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewProp_MinVolume,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"SolverRemovalFilterSettings",
		sizeof(FSolverRemovalFilterSettings),
		alignof(FSolverRemovalFilterSettings),
		Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverRemovalFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics::ScriptStructInfo[] = {
		{ FSolverTrailingFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverTrailingFilterSettings_Statics::NewStructOps, TEXT("SolverTrailingFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverTrailingFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverTrailingFilterSettings), 465871226U) },
		{ FSolverCollisionFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverCollisionFilterSettings_Statics::NewStructOps, TEXT("SolverCollisionFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverCollisionFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverCollisionFilterSettings), 4052414333U) },
		{ FSolverBreakingFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverBreakingFilterSettings_Statics::NewStructOps, TEXT("SolverBreakingFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverBreakingFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverBreakingFilterSettings), 3740680553U) },
		{ FSolverRemovalFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSolverRemovalFilterSettings_Statics::NewStructOps, TEXT("SolverRemovalFilterSettings"), &Z_Registration_Info_UScriptStruct_SolverRemovalFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverRemovalFilterSettings), 1448045728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_3713782197(TEXT("/Script/Chaos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_SolverEventFilters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
