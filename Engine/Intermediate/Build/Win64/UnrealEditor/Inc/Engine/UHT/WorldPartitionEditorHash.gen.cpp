// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionEditorHash.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorHash() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionEditorHash::StaticRegisterNativesUWorldPartitionEditorHash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorHash);
	UClass* Z_Construct_UClass_UWorldPartitionEditorHash_NoRegister()
	{
		return UWorldPartitionEditorHash::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionEditorHash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionEditorHash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorHash_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorHash.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionEditorHash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorHash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorHash_Statics::ClassParams = {
		&UWorldPartitionEditorHash::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorHash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorHash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionEditorHash()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorHash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionEditorHash.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorHash>()
	{
		return UWorldPartitionEditorHash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorHash);
	UWorldPartitionEditorHash::~UWorldPartitionEditorHash() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorHash, UWorldPartitionEditorHash::StaticClass, TEXT("UWorldPartitionEditorHash"), &Z_Registration_Info_UClass_UWorldPartitionEditorHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorHash), 2036779389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_1661198231(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorHash_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
