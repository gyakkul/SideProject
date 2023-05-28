// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldPartition/WorldPartitionConvertOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionConvertOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionEditor();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionConvertOptions();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionConvertOptions_NoRegister();
// End Cross Module References
	void UWorldPartitionConvertOptions::StaticRegisterNativesUWorldPartitionConvertOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionConvertOptions);
	UClass* Z_Construct_UClass_UWorldPartitionConvertOptions_NoRegister()
	{
		return UWorldPartitionConvertOptions::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionConvertOptions_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInPlace_MetaData[];
#endif
		static void NewProp_bInPlace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteSourceLevels_MetaData[];
#endif
		static void NewProp_bDeleteSourceLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteSourceLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateIni_MetaData[];
#endif
		static void NewProp_bGenerateIni_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateIni;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReportOnly_MetaData[];
#endif
		static void NewProp_bReportOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReportOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerbose_MetaData[];
#endif
		static void NewProp_bVerbose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerbose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipStableGUIDValidation_MetaData[];
#endif
		static void NewProp_bSkipStableGUIDValidation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipStableGUIDValidation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyMergeSubLevels_MetaData[];
#endif
		static void NewProp_bOnlyMergeSubLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyMergeSubLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveFoliageTypeToContentFolder_MetaData[];
#endif
		static void NewProp_bSaveFoliageTypeToContentFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveFoliageTypeToContentFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionConvertOptions.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_CommandletClass_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_CommandletClass = { "CommandletClass", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionConvertOptions, CommandletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionConvertCommandlet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_CommandletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_CommandletClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
		{ "ToolTip", "Wether the conversion should create a new map with a _WP suffix or overwrite the source map" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bInPlace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace = { "bInPlace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bDeleteSourceLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels = { "bDeleteSourceLevels", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bGenerateIni = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni = { "bGenerateIni", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bReportOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly = { "bReportOnly", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bVerbose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose = { "bVerbose", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bSkipStableGUIDValidation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation = { "bSkipStableGUIDValidation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bOnlyMergeSubLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels = { "bOnlyMergeSubLevels", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder_MetaData[] = {
		{ "Category", "Convert" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionConvertOptions.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder_SetBit(void* Obj)
	{
		((UWorldPartitionConvertOptions*)Obj)->bSaveFoliageTypeToContentFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder = { "bSaveFoliageTypeToContentFolder", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionConvertOptions), &Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_CommandletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bInPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bDeleteSourceLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bGenerateIni,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bReportOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bVerbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSkipStableGUIDValidation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bOnlyMergeSubLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::NewProp_bSaveFoliageTypeToContentFolder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionConvertOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::ClassParams = {
		&UWorldPartitionConvertOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionConvertOptions()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionConvertOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionConvertOptions.OuterSingleton, Z_Construct_UClass_UWorldPartitionConvertOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionConvertOptions.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UWorldPartitionConvertOptions>()
	{
		return UWorldPartitionConvertOptions::StaticClass();
	}
	UWorldPartitionConvertOptions::UWorldPartitionConvertOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionConvertOptions);
	UWorldPartitionConvertOptions::~UWorldPartitionConvertOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionConvertOptions, UWorldPartitionConvertOptions::StaticClass, TEXT("UWorldPartitionConvertOptions"), &Z_Registration_Info_UClass_UWorldPartitionConvertOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionConvertOptions), 12100917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_2500968833(TEXT("/Script/WorldPartitionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionConvertOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
