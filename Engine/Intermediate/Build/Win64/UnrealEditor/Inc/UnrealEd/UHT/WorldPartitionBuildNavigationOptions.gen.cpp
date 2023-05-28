// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionBuildNavigationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionBuildNavigationOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuildNavigationOptions();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionBuildNavigationOptions::StaticRegisterNativesUWorldPartitionBuildNavigationOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionBuildNavigationOptions);
	UClass* Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_NoRegister()
	{
		return UWorldPartitionBuildNavigationOptions::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVerbose_MetaData[];
#endif
		static void NewProp_bVerbose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerbose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCleanPackages_MetaData[];
#endif
		static void NewProp_bCleanPackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanPackages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionBuildNavigationOptions.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBuildNavigationOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose_MetaData[] = {
		{ "Category", "Build Navigation" },
		{ "Comment", "/** Use verbose logging. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBuildNavigationOptions.h" },
		{ "ToolTip", "Use verbose logging." },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose_SetBit(void* Obj)
	{
		((UWorldPartitionBuildNavigationOptions*)Obj)->bVerbose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose = { "bVerbose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionBuildNavigationOptions), &Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages_MetaData[] = {
		{ "Category", "Build Navigation" },
		{ "Comment", "/** When enabled, delete all NavigationDataChunkActors instead of generating them. */" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionBuildNavigationOptions.h" },
		{ "ToolTip", "When enabled, delete all NavigationDataChunkActors instead of generating them." },
	};
#endif
	void Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages_SetBit(void* Obj)
	{
		((UWorldPartitionBuildNavigationOptions*)Obj)->bCleanPackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages = { "bCleanPackages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldPartitionBuildNavigationOptions), &Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bVerbose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::NewProp_bCleanPackages,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionBuildNavigationOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::ClassParams = {
		&UWorldPartitionBuildNavigationOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionBuildNavigationOptions()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionBuildNavigationOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionBuildNavigationOptions.OuterSingleton, Z_Construct_UClass_UWorldPartitionBuildNavigationOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionBuildNavigationOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionBuildNavigationOptions>()
	{
		return UWorldPartitionBuildNavigationOptions::StaticClass();
	}
	UWorldPartitionBuildNavigationOptions::UWorldPartitionBuildNavigationOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionBuildNavigationOptions);
	UWorldPartitionBuildNavigationOptions::~UWorldPartitionBuildNavigationOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuildNavigationOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuildNavigationOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionBuildNavigationOptions, UWorldPartitionBuildNavigationOptions::StaticClass, TEXT("UWorldPartitionBuildNavigationOptions"), &Z_Registration_Info_UClass_UWorldPartitionBuildNavigationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionBuildNavigationOptions), 1558323178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuildNavigationOptions_h_3105632016(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuildNavigationOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionBuildNavigationOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
