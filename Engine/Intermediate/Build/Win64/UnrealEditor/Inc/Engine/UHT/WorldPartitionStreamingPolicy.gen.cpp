// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingPolicy.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionStreamingPolicy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionStreamingPolicy::StaticRegisterNativesUWorldPartitionStreamingPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionStreamingPolicy);
	UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy_NoRegister()
	{
		return UWorldPartitionStreamingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionStreamingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionStreamingPolicy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionStreamingPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::ClassParams = {
		&UWorldPartitionStreamingPolicy::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton, Z_Construct_UClass_UWorldPartitionStreamingPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionStreamingPolicy>()
	{
		return UWorldPartitionStreamingPolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionStreamingPolicy);
	UWorldPartitionStreamingPolicy::~UWorldPartitionStreamingPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionStreamingPolicy, UWorldPartitionStreamingPolicy::StaticClass, TEXT("UWorldPartitionStreamingPolicy"), &Z_Registration_Info_UClass_UWorldPartitionStreamingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionStreamingPolicy), 4172303870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_3675151988(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionStreamingPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
