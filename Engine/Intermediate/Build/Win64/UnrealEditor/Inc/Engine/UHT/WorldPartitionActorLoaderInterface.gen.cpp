// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionActorLoaderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionActorLoaderInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionActorLoaderInterface::StaticRegisterNativesUWorldPartitionActorLoaderInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionActorLoaderInterface);
	UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister()
	{
		return UWorldPartitionActorLoaderInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionActorLoaderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionActorLoaderInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::ClassParams = {
		&UWorldPartitionActorLoaderInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton, Z_Construct_UClass_UWorldPartitionActorLoaderInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionActorLoaderInterface>()
	{
		return UWorldPartitionActorLoaderInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionActorLoaderInterface);
	UWorldPartitionActorLoaderInterface::~UWorldPartitionActorLoaderInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface, UWorldPartitionActorLoaderInterface::StaticClass, TEXT("UWorldPartitionActorLoaderInterface"), &Z_Registration_Info_UClass_UWorldPartitionActorLoaderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionActorLoaderInterface), 2588401415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_1858299027(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionActorLoaderInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
