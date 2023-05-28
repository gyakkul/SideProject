// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_ChooserTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ChooserTable() {}
// Cross Module References
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ChooserTable();
	CHOOSEREDITOR_API UClass* Z_Construct_UClass_UAssetDefinition_ChooserTable_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_ChooserEditor();
// End Cross Module References
	void UAssetDefinition_ChooserTable::StaticRegisterNativesUAssetDefinition_ChooserTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ChooserTable);
	UClass* Z_Construct_UClass_UAssetDefinition_ChooserTable_NoRegister()
	{
		return UAssetDefinition_ChooserTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_ChooserEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ChooserTable.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ChooserTable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ChooserTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::ClassParams = {
		&UAssetDefinition_ChooserTable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ChooserTable()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ChooserTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ChooserTable.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ChooserTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ChooserTable.OuterSingleton;
	}
	template<> CHOOSEREDITOR_API UClass* StaticClass<UAssetDefinition_ChooserTable>()
	{
		return UAssetDefinition_ChooserTable::StaticClass();
	}
	UAssetDefinition_ChooserTable::UAssetDefinition_ChooserTable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ChooserTable);
	UAssetDefinition_ChooserTable::~UAssetDefinition_ChooserTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_AssetDefinition_ChooserTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_AssetDefinition_ChooserTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ChooserTable, UAssetDefinition_ChooserTable::StaticClass, TEXT("UAssetDefinition_ChooserTable"), &Z_Registration_Info_UClass_UAssetDefinition_ChooserTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ChooserTable), 791642377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_AssetDefinition_ChooserTable_h_561635873(TEXT("/Script/ChooserEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_AssetDefinition_ChooserTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_ChooserEditor_Private_AssetDefinition_ChooserTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
