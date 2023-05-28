// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/LevelSnapshotsSettings.h"
#include "Settings/HashSettings.h"
#include "Settings/SkippedClassList.h"
#include "Settings/SnapshotCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsSettings();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshotsSettings_NoRegister();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FHashSettings();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSkippedClassList();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotCompressionSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	void ULevelSnapshotsSettings::StaticRegisterNativesULevelSnapshotsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsSettings);
	UClass* Z_Construct_UClass_ULevelSnapshotsSettings_NoRegister()
	{
		return ULevelSnapshotsSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkippedClasses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkippedClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatComparisonPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatComparisonPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleComparisonPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleComparisonPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HashSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HashSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/LevelSnapshotsSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_SkippedClasses_MetaData[] = {
		{ "Category", "Level Snapshots|Behavior" },
		{ "Comment", "/* Specifies classes and properties that should never be captured nor restored. */" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
		{ "ToolTip", "Specifies classes and properties that should never be captured nor restored." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_SkippedClasses = { "SkippedClasses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsSettings, SkippedClasses), Z_Construct_UScriptStruct_FSkippedClassList, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_SkippedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_SkippedClasses_MetaData)) }; // 3593044842
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_FloatComparisonPrecision_MetaData[] = {
		{ "Category", "Level Snapshots|Behavior" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.00000001" },
		{ "Comment", "/** Used when comparing float properties. Floats that have changes beyond this point do not show up as changed. */// Max value is SMALL_NUMBER = 1e-8\n" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
		{ "ToolTip", "Used when comparing float properties. Floats that have changes beyond this point do not show up as changed. // Max value is SMALL_NUMBER = 1e-8" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_FloatComparisonPrecision = { "FloatComparisonPrecision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsSettings, FloatComparisonPrecision), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_FloatComparisonPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_FloatComparisonPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_DoubleComparisonPrecision_MetaData[] = {
		{ "Category", "Level Snapshots|Behavior" },
		{ "ClampMax", "0.1" },
		{ "ClampMin", "0.00000001" },
		{ "Comment", "/** Used when comparing double properties. Doubles that have changes beyond this point do not show up as changed. */// Max value is SMALL_NUMBER = 1e-8\n" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
		{ "ToolTip", "Used when comparing double properties. Doubles that have changes beyond this point do not show up as changed. // Max value is SMALL_NUMBER = 1e-8" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_DoubleComparisonPrecision = { "DoubleComparisonPrecision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsSettings, DoubleComparisonPrecision), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_DoubleComparisonPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_DoubleComparisonPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_HashSettings_MetaData[] = {
		{ "Category", "Level Snapshots|Performance" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Performance trade-off. Used when filtering a snapshot.\n\x09 * \n\x09 * For filtering, we need to load every actor into memory. Loading actors takes a long time.\n\x09 * Instead when a snapshot is taken, we compute its hash. When filtering, we can recompute the hash using the actor\n\x09 * in the editor world. If they match, we can skip loading the saved actor data.\n\x09 *\n\x09 * For most actors, it takes about 600 micro seconds to compute a hash. However, there are outliers which can take\n\x09 * more. For such actors, it can be faster to just load the saved actor data into memory.\n\x09 *\n\x09 * Actors for which hashing took more than this configured variable, we skip hashing altogether and immediately load\n\x09 * the actor data. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
		{ "ToolTip", "Performance trade-off. Used when filtering a snapshot.\n\nFor filtering, we need to load every actor into memory. Loading actors takes a long time.\nInstead when a snapshot is taken, we compute its hash. When filtering, we can recompute the hash using the actor\nin the editor world. If they match, we can skip loading the saved actor data.\n\nFor most actors, it takes about 600 micro seconds to compute a hash. However, there are outliers which can take\nmore. For such actors, it can be faster to just load the saved actor data into memory.\n\nActors for which hashing took more than this configured variable, we skip hashing altogether and immediately load\nthe actor data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_HashSettings = { "HashSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsSettings, HashSettings), Z_Construct_UScriptStruct_FHashSettings, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_HashSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_HashSettings_MetaData)) }; // 409608737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Level Snapshots|Compression" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Specifies the compression settings to use when a snapshot is saved.\n\x09 *\n\x09 * These settings affect the time:\n\x09 * - taken to save a snapshot\n\x09 * - taken to load a snapshot\n\x09 *\n\x09 * You can safely change these settings even if you're already saved snapshots with different settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Settings/LevelSnapshotsSettings.h" },
		{ "ToolTip", "Specifies the compression settings to use when a snapshot is saved.\n\nThese settings affect the time:\n- taken to save a snapshot\n- taken to load a snapshot\n\nYou can safely change these settings even if you're already saved snapshots with different settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsSettings, CompressionSettings), Z_Construct_UScriptStruct_FSnapshotCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_CompressionSettings_MetaData)) }; // 2439424729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_SkippedClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_FloatComparisonPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_DoubleComparisonPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_HashSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsSettings_Statics::NewProp_CompressionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsSettings_Statics::ClassParams = {
		&ULevelSnapshotsSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsSettings.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsSettings.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshotsSettings>()
	{
		return ULevelSnapshotsSettings::StaticClass();
	}
	ULevelSnapshotsSettings::ULevelSnapshotsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsSettings);
	ULevelSnapshotsSettings::~ULevelSnapshotsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsSettings, ULevelSnapshotsSettings::StaticClass, TEXT("ULevelSnapshotsSettings"), &Z_Registration_Info_UClass_ULevelSnapshotsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsSettings), 1361309973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_1944023317(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_LevelSnapshotsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
