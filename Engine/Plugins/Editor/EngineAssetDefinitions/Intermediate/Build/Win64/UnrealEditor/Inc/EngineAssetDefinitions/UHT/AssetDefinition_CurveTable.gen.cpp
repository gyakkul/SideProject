// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Table/AssetDefinition_CurveTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_CurveTable() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CurveTable();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CurveTable_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_CurveTable::StaticRegisterNativesUAssetDefinition_CurveTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_CurveTable);
	UClass* Z_Construct_UClass_UAssetDefinition_CurveTable_NoRegister()
	{
		return UAssetDefinition_CurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_CurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Table/AssetDefinition_CurveTable.h" },
		{ "ModuleRelativePath", "Private/Table/AssetDefinition_CurveTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_CurveTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::ClassParams = {
		&UAssetDefinition_CurveTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_CurveTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_CurveTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_CurveTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_CurveTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_CurveTable.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_CurveTable>()
	{
		return UAssetDefinition_CurveTable::StaticClass();
	}
	UAssetDefinition_CurveTable::UAssetDefinition_CurveTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_CurveTable);
	UAssetDefinition_CurveTable::~UAssetDefinition_CurveTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CurveTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CurveTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_CurveTable, UAssetDefinition_CurveTable::StaticClass, TEXT("UAssetDefinition_CurveTable"), &Z_Registration_Info_UClass_UAssetDefinition_CurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_CurveTable), 2433731526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CurveTable_h_932349672(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_Table_AssetDefinition_CurveTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
