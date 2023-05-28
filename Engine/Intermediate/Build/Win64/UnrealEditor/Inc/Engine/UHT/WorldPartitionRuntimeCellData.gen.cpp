// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeCellData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionRuntimeCellData::StaticRegisterNativesUWorldPartitionRuntimeCellData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeCellData);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData_NoRegister()
	{
		return UWorldPartitionRuntimeCellData::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Caches information on streaming source that will be used later on to sort cell. */" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeCellData.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
		{ "ToolTip", "Caches information on streaming source that will be used later on to sort cell." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeCellData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds = { "ContentBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionRuntimeCellData, ContentBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::NewProp_ContentBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeCellData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::ClassParams = {
		&UWorldPartitionRuntimeCellData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellData()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeCellData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeCellData>()
	{
		return UWorldPartitionRuntimeCellData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeCellData);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionRuntimeCellData, UWorldPartitionRuntimeCellData::StaticClass, TEXT("UWorldPartitionRuntimeCellData"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeCellData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeCellData), 3514077221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_202329256(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeCellData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
