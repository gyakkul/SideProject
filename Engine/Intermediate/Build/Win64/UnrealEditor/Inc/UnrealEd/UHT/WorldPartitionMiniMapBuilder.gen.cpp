// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionMiniMapBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMapBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionMiniMapBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionMiniMapBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionMiniMapBuilder::StaticRegisterNativesUWorldPartitionMiniMapBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionMiniMapBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionMiniMapBuilder_NoRegister()
	{
		return UWorldPartitionMiniMapBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionMiniMapBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMapBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionMiniMapBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::ClassParams = {
		&UWorldPartitionMiniMapBuilder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionMiniMapBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionMiniMapBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionMiniMapBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionMiniMapBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionMiniMapBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionMiniMapBuilder>()
	{
		return UWorldPartitionMiniMapBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionMiniMapBuilder);
	UWorldPartitionMiniMapBuilder::~UWorldPartitionMiniMapBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionMiniMapBuilder, UWorldPartitionMiniMapBuilder::StaticClass, TEXT("UWorldPartitionMiniMapBuilder"), &Z_Registration_Info_UClass_UWorldPartitionMiniMapBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionMiniMapBuilder), 2530501609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_4249138197(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionMiniMapBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
