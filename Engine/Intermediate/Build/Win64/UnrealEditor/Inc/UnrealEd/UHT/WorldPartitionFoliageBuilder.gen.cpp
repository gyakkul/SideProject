// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionFoliageBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionFoliageBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionFoliageBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionFoliageBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionFoliageBuilder::StaticRegisterNativesUWorldPartitionFoliageBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionFoliageBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionFoliageBuilder_NoRegister()
	{
		return UWorldPartitionFoliageBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionFoliageBuilder -NewGridSize=Value\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionFoliageBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionFoliageBuilder.h" },
		{ "ToolTip", "Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionFoliageBuilder -NewGridSize=Value" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionFoliageBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::ClassParams = {
		&UWorldPartitionFoliageBuilder::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionFoliageBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionFoliageBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionFoliageBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionFoliageBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionFoliageBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionFoliageBuilder>()
	{
		return UWorldPartitionFoliageBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionFoliageBuilder);
	UWorldPartitionFoliageBuilder::~UWorldPartitionFoliageBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionFoliageBuilder, UWorldPartitionFoliageBuilder::StaticClass, TEXT("UWorldPartitionFoliageBuilder"), &Z_Registration_Info_UClass_UWorldPartitionFoliageBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionFoliageBuilder), 849396676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_2113447911(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionFoliageBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
