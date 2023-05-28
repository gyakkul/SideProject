// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_StringTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_StringTable() {}
// Cross Module References
	STRINGTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_StringTable();
	STRINGTABLEEDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_StringTable_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_StringTableEditor();
// End Cross Module References
	void UAssetDefinition_StringTable::StaticRegisterNativesUAssetDefinition_StringTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_StringTable);
	UClass* Z_Construct_UClass_UAssetDefinition_StringTable_NoRegister()
	{
		return UAssetDefinition_StringTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_StringTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_StringTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_StringTableEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_StringTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_StringTable.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_StringTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_StringTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_StringTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_StringTable_Statics::ClassParams = {
		&UAssetDefinition_StringTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_StringTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_StringTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_StringTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_StringTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_StringTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_StringTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_StringTable.OuterSingleton;
	}
	template<> STRINGTABLEEDITOR_API UClass* StaticClass<UAssetDefinition_StringTable>()
	{
		return UAssetDefinition_StringTable::StaticClass();
	}
	UAssetDefinition_StringTable::UAssetDefinition_StringTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_StringTable);
	UAssetDefinition_StringTable::~UAssetDefinition_StringTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_StringTable, UAssetDefinition_StringTable::StaticClass, TEXT("UAssetDefinition_StringTable"), &Z_Registration_Info_UClass_UAssetDefinition_StringTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_StringTable), 1126308983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_3065846323(TEXT("/Script/StringTableEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StringTableEditor_Private_AssetDefinition_StringTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
