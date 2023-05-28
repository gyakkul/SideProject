// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionMiniMapVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionMiniMapVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMapVolume();
	ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionMiniMapVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AWorldPartitionMiniMapVolume::StaticRegisterNativesAWorldPartitionMiniMapVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldPartitionMiniMapVolume);
	UClass* Z_Construct_UClass_AWorldPartitionMiniMapVolume_NoRegister()
	{
		return AWorldPartitionMiniMapVolume::StaticClass();
	}
	struct Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "WorldPartition/WorldPartitionMiniMapVolume.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionMiniMapVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldPartitionMiniMapVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::ClassParams = {
		&AWorldPartitionMiniMapVolume::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldPartitionMiniMapVolume()
	{
		if (!Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton, Z_Construct_UClass_AWorldPartitionMiniMapVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AWorldPartitionMiniMapVolume>()
	{
		return AWorldPartitionMiniMapVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldPartitionMiniMapVolume);
	AWorldPartitionMiniMapVolume::~AWorldPartitionMiniMapVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldPartitionMiniMapVolume, AWorldPartitionMiniMapVolume::StaticClass, TEXT("AWorldPartitionMiniMapVolume"), &Z_Registration_Info_UClass_AWorldPartitionMiniMapVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldPartitionMiniMapVolume), 1648331647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_3566963158(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionMiniMapVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
