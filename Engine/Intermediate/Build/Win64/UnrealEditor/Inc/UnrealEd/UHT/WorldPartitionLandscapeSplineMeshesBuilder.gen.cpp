// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/WorldPartition/WorldPartitionLandscapeSplineMeshesBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionLandscapeSplineMeshesBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionLandscapeSplineMeshesBuilder::StaticRegisterNativesUWorldPartitionLandscapeSplineMeshesBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionLandscapeSplineMeshesBuilder);
	UClass* Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_NoRegister()
	{
		return UWorldPartitionLandscapeSplineMeshesBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionLandscapeSplineMeshesBuilder (<Optional> -NewGridSize=Value)\n" },
		{ "IncludePath", "WorldPartition/WorldPartitionLandscapeSplineMeshesBuilder.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLandscapeSplineMeshesBuilder.h" },
		{ "ToolTip", "Example Command Line: ProjectName MapName -run=WorldPartitionBuilderCommandlet -SCCProvider=Perforce -Builder=WorldPartitionLandscapeSplineMeshesBuilder (<Optional> -NewGridSize=Value)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionLandscapeSplineMeshesBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::ClassParams = {
		&UWorldPartitionLandscapeSplineMeshesBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionLandscapeSplineMeshesBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionLandscapeSplineMeshesBuilder.OuterSingleton, Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionLandscapeSplineMeshesBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionLandscapeSplineMeshesBuilder>()
	{
		return UWorldPartitionLandscapeSplineMeshesBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionLandscapeSplineMeshesBuilder);
	UWorldPartitionLandscapeSplineMeshesBuilder::~UWorldPartitionLandscapeSplineMeshesBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeSplineMeshesBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeSplineMeshesBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionLandscapeSplineMeshesBuilder, UWorldPartitionLandscapeSplineMeshesBuilder::StaticClass, TEXT("UWorldPartitionLandscapeSplineMeshesBuilder"), &Z_Registration_Info_UClass_UWorldPartitionLandscapeSplineMeshesBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionLandscapeSplineMeshesBuilder), 3003948582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeSplineMeshesBuilder_h_1492169546(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeSplineMeshesBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_WorldPartition_WorldPartitionLandscapeSplineMeshesBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
