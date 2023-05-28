// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionRuntimeVirtualTextureBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeVirtualTextureBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionRuntimeVirtualTextureBuilder::StaticRegisterNativesUWorldPartitionRuntimeVirtualTextureBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeVirtualTextureBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_NoRegister()
	{
		return UWorldPartitionRuntimeVirtualTextureBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionRuntimeVirtualTextureBuilder\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeVirtualTextureBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeVirtualTextureBuilder.h" },
		{ "ToolTip", "Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionRuntimeVirtualTextureBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeVirtualTextureBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::ClassParams = {
		&UWorldPartitionRuntimeVirtualTextureBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeVirtualTextureBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeVirtualTextureBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeVirtualTextureBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionRuntimeVirtualTextureBuilder>()
	{
		return UWorldPartitionRuntimeVirtualTextureBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeVirtualTextureBuilder);
	UWorldPartitionRuntimeVirtualTextureBuilder::~UWorldPartitionRuntimeVirtualTextureBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRuntimeVirtualTextureBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRuntimeVirtualTextureBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeVirtualTextureBuilder, UWorldPartitionRuntimeVirtualTextureBuilder::StaticClass, TEXT("UWorldPartitionRuntimeVirtualTextureBuilder"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeVirtualTextureBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeVirtualTextureBuilder), 4173667103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRuntimeVirtualTextureBuilder_h_1286380198(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRuntimeVirtualTextureBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionRuntimeVirtualTextureBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
