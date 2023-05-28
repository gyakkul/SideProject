// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionHLODsBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionHLODsBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionHLODsBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionHLODsBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionHLODsBuilder::StaticRegisterNativesUWorldPartitionHLODsBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODsBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionHLODsBuilder_NoRegister()
	{
		return UWorldPartitionHLODsBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionHLODsBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionHLODsBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODsBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::ClassParams = {
		&UWorldPartitionHLODsBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionHLODsBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionHLODsBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODsBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODsBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionHLODsBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionHLODsBuilder>()
	{
		return UWorldPartitionHLODsBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODsBuilder);
	UWorldPartitionHLODsBuilder::~UWorldPartitionHLODsBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionHLODsBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionHLODsBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODsBuilder, UWorldPartitionHLODsBuilder::StaticClass, TEXT("UWorldPartitionHLODsBuilder"), &Z_Registration_Info_UClass_UWorldPartitionHLODsBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODsBuilder), 1287676440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionHLODsBuilder_h_4182243639(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionHLODsBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionHLODsBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
