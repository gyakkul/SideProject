// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionCell::StaticRegisterNativesUWorldPartitionCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionCell);
	UClass* Z_Construct_UClass_UWorldPartitionCell_NoRegister()
	{
		return UWorldPartitionCell::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionCell_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWorldPartitionCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionCell_Statics::ClassParams = {
		&UWorldPartitionCell::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionCell()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton, Z_Construct_UClass_UWorldPartitionCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionCell.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionCell>()
	{
		return UWorldPartitionCell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionCell);
	UWorldPartitionCell::~UWorldPartitionCell() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionCell, UWorldPartitionCell::StaticClass, TEXT("UWorldPartitionCell"), &Z_Registration_Info_UClass_UWorldPartitionCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionCell), 4184896200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_564540725(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
