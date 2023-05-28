// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldPartition/WorldPartitionEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionEditor();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionEditorSettings();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionEditorSettings_NoRegister();
// End Cross Module References
	void UWorldPartitionEditorSettings::StaticRegisterNativesUWorldPartitionEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorSettings);
	UClass* Z_Construct_UClass_UWorldPartitionEditorSettings_NoRegister()
	{
		return UWorldPartitionEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandletClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CommandletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedFoliageGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstancedFoliageGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "World Partition" },
		{ "IncludePath", "WorldPartition/WorldPartitionEditorSettings.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_CommandletClass_MetaData[] = {
		{ "Category", "MapConversion" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSettings.h" },
		{ "ToolTip", "Commandlet class to use for World Parition conversion" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_CommandletClass = { "CommandletClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionEditorSettings, CommandletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_CommandletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_CommandletClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData[] = {
		{ "Category", "Foliage" },
		{ "ClampMin", "3200" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSettings.h" },
		{ "ToolTip", "Editor grid size used for instance foliage actors in World Partition worlds" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_InstancedFoliageGridSize = { "InstancedFoliageGridSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionEditorSettings, InstancedFoliageGridSize), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_InstancedFoliageGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold_MetaData[] = {
		{ "Category", "MiniMap" },
		{ "ClampMin", "100" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorSettings.h" },
		{ "ToolTip", "Threshold from which minimap generates a warning if its WorldUnitsPerPixel is above this value" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold = { "MinimapLowQualityWorldUnitsPerPixelThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionEditorSettings, MinimapLowQualityWorldUnitsPerPixelThreshold), METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_CommandletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_InstancedFoliageGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::NewProp_MinimapLowQualityWorldUnitsPerPixelThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::ClassParams = {
		&UWorldPartitionEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorSettings.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionEditorSettings.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UWorldPartitionEditorSettings>()
	{
		return UWorldPartitionEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorSettings);
	UWorldPartitionEditorSettings::~UWorldPartitionEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorSettings, UWorldPartitionEditorSettings::StaticClass, TEXT("UWorldPartitionEditorSettings"), &Z_Registration_Info_UClass_UWorldPartitionEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorSettings), 1043395702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_3302095384(TEXT("/Script/WorldPartitionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
