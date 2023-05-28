// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/WorldPartitionBuilderCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionBuilderCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilderCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UWorldPartitionBuilderCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldPartitionBuilderCommandlet::StaticRegisterNativesUWorldPartitionBuilderCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionBuilderCommandlet);
	UClass* Z_Construct_UClass_UWorldPartitionBuilderCommandlet_NoRegister()
	{
		return UWorldPartitionBuilderCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/WorldPartitionBuilderCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/WorldPartitionBuilderCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionBuilderCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::ClassParams = {
		&UWorldPartitionBuilderCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionBuilderCommandlet()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionBuilderCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionBuilderCommandlet.OuterSingleton, Z_Construct_UClass_UWorldPartitionBuilderCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionBuilderCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldPartitionBuilderCommandlet>()
	{
		return UWorldPartitionBuilderCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionBuilderCommandlet);
	UWorldPartitionBuilderCommandlet::~UWorldPartitionBuilderCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionBuilderCommandlet, UWorldPartitionBuilderCommandlet::StaticClass, TEXT("UWorldPartitionBuilderCommandlet"), &Z_Registration_Info_UClass_UWorldPartitionBuilderCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionBuilderCommandlet), 3055490742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_602017165(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_WorldPartitionBuilderCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
