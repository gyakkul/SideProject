// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Table/AssetDefinition_CompositeDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_CompositeDataTable() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CompositeDataTable();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CompositeDataTable_NoRegister();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataTable();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_CompositeDataTable::StaticRegisterNativesUAssetDefinition_CompositeDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_CompositeDataTable);
	UClass* Z_Construct_UClass_UAssetDefinition_CompositeDataTable_NoRegister()
	{
		return UAssetDefinition_CompositeDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_DataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table/AssetDefinition_CompositeDataTable.h" },
		{ "ModuleRelativePath", "Private/Table/AssetDefinition_CompositeDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_CompositeDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::ClassParams = {
		&UAssetDefinition_CompositeDataTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_CompositeDataTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_CompositeDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_CompositeDataTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_CompositeDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_CompositeDataTable.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_CompositeDataTable>()
	{
		return UAssetDefinition_CompositeDataTable::StaticClass();
	}
	UAssetDefinition_CompositeDataTable::UAssetDefinition_CompositeDataTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_CompositeDataTable);
	UAssetDefinition_CompositeDataTable::~UAssetDefinition_CompositeDataTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CompositeDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CompositeDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_CompositeDataTable, UAssetDefinition_CompositeDataTable::StaticClass, TEXT("UAssetDefinition_CompositeDataTable"), &Z_Registration_Info_UClass_UAssetDefinition_CompositeDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_CompositeDataTable), 1011228537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CompositeDataTable_h_3955164399(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CompositeDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CompositeDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
