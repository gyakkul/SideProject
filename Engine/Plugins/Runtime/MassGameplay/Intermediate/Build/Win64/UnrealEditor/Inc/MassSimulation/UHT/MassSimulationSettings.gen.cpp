// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSimulation/Public/MassSimulationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSimulationSettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSettings();
	MASSSIMULATION_API UClass* Z_Construct_UClass_UMassSimulationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSimulation();
// End Cross Module References
	void UMassSimulationSettings::StaticRegisterNativesUMassSimulationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSimulationSettings);
	UClass* Z_Construct_UClass_UMassSimulationSettings_NoRegister()
	{
		return UMassSimulationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassSimulationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredActorSpawningTimeSlicePerTick_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DesiredActorSpawningTimeSlicePerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredActorDestructionTimeSlicePerTick_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DesiredActorDestructionTimeSlicePerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredEntityCompactionTimeSlicePerTick_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DesiredEntityCompactionTimeSlicePerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredActorFailedSpawningRetryTimeInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredActorFailedSpawningRetryTimeInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredActorFailedSpawningRetryMoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredActorFailedSpawningRetryMoveDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSimulationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSimulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for MassSimulation\n */" },
		{ "DisplayName", "Mass Simulation" },
		{ "IncludePath", "MassSimulationSettings.h" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "Implements the settings for MassSimulation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorSpawningTimeSlicePerTick_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The desired budget in seconds allowed to do actor spawning per frame */" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "The desired budget in seconds allowed to do actor spawning per frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorSpawningTimeSlicePerTick = { "DesiredActorSpawningTimeSlicePerTick", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSettings, DesiredActorSpawningTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorSpawningTimeSlicePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorSpawningTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorDestructionTimeSlicePerTick_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The desired budget in seconds allowed to do actor destruction per frame */" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "The desired budget in seconds allowed to do actor destruction per frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorDestructionTimeSlicePerTick = { "DesiredActorDestructionTimeSlicePerTick", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSettings, DesiredActorDestructionTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorDestructionTimeSlicePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorDestructionTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredEntityCompactionTimeSlicePerTick_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The desired budget in seconds allowed to do entity compaction per frame */" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "The desired budget in seconds allowed to do entity compaction per frame" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredEntityCompactionTimeSlicePerTick = { "DesiredEntityCompactionTimeSlicePerTick", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSettings, DesiredEntityCompactionTimeSlicePerTick), METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredEntityCompactionTimeSlicePerTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredEntityCompactionTimeSlicePerTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryTimeInterval_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The time to wait before retrying to spawn an actor that previously failed, default 10 seconds */" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "The time to wait before retrying to spawn an actor that previously failed, default 10 seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryTimeInterval = { "DesiredActorFailedSpawningRetryTimeInterval", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSettings, DesiredActorFailedSpawningRetryTimeInterval), METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryTimeInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryTimeInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryMoveDistance_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The distance a failed spawned actor needs to move before we retry, default 10 meters */" },
		{ "ModuleRelativePath", "Public/MassSimulationSettings.h" },
		{ "ToolTip", "The distance a failed spawned actor needs to move before we retry, default 10 meters" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryMoveDistance = { "DesiredActorFailedSpawningRetryMoveDistance", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSimulationSettings, DesiredActorFailedSpawningRetryMoveDistance), METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryMoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryMoveDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSimulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorSpawningTimeSlicePerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorDestructionTimeSlicePerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredEntityCompactionTimeSlicePerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryTimeInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSimulationSettings_Statics::NewProp_DesiredActorFailedSpawningRetryMoveDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSimulationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSimulationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSimulationSettings_Statics::ClassParams = {
		&UMassSimulationSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSimulationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSimulationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSimulationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSimulationSettings()
	{
		if (!Z_Registration_Info_UClass_UMassSimulationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSimulationSettings.OuterSingleton, Z_Construct_UClass_UMassSimulationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSimulationSettings.OuterSingleton;
	}
	template<> MASSSIMULATION_API UClass* StaticClass<UMassSimulationSettings>()
	{
		return UMassSimulationSettings::StaticClass();
	}
	UMassSimulationSettings::UMassSimulationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSimulationSettings);
	UMassSimulationSettings::~UMassSimulationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSimulationSettings, UMassSimulationSettings::StaticClass, TEXT("UMassSimulationSettings"), &Z_Registration_Info_UClass_UMassSimulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSimulationSettings), 1308762660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSettings_h_3396181200(TEXT("/Script/MassSimulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
