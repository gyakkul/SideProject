// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Table/AssetDefinition_MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_MirrorDataTable() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataTable();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MirrorDataTable();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_MirrorDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_MirrorDataTable::StaticRegisterNativesUAssetDefinition_MirrorDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_MirrorDataTable);
	UClass* Z_Construct_UClass_UAssetDefinition_MirrorDataTable_NoRegister()
	{
		return UAssetDefinition_MirrorDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_DataTable,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table/AssetDefinition_MirrorDataTable.h" },
		{ "ModuleRelativePath", "Private/Table/AssetDefinition_MirrorDataTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_MirrorDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::ClassParams = {
		&UAssetDefinition_MirrorDataTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_MirrorDataTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_MirrorDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_MirrorDataTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_MirrorDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_MirrorDataTable.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_MirrorDataTable>()
	{
		return UAssetDefinition_MirrorDataTable::StaticClass();
	}
	UAssetDefinition_MirrorDataTable::UAssetDefinition_MirrorDataTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_MirrorDataTable);
	UAssetDefinition_MirrorDataTable::~UAssetDefinition_MirrorDataTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_MirrorDataTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_MirrorDataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_MirrorDataTable, UAssetDefinition_MirrorDataTable::StaticClass, TEXT("UAssetDefinition_MirrorDataTable"), &Z_Registration_Info_UClass_UAssetDefinition_MirrorDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_MirrorDataTable), 1040338257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_MirrorDataTable_h_1459133035(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_MirrorDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_MirrorDataTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
