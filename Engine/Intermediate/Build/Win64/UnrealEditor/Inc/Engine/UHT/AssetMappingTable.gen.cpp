// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AssetMappingTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetMappingTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable();
	ENGINE_API UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetMapping;
class UScriptStruct* FAssetMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AssetMapping"));
	}
	return Z_Registration_Info_UScriptStruct_AssetMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAssetMapping>()
{
	return FAssetMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAssetMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This defines one asset mapping */" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "This defines one asset mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "Comment", "/** source asset **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetMapping, SourceAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "FAssetMapping" },
		{ "Comment", "/** source asset **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "source asset *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAssetMapping, TargetAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetMapping_Statics::NewProp_TargetAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AssetMapping",
		sizeof(FAssetMapping),
		alignof(FAssetMapping),
		Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton, Z_Construct_UScriptStruct_FAssetMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AssetMapping.InnerSingleton;
	}
	void UAssetMappingTable::StaticRegisterNativesUAssetMappingTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetMappingTable);
	UClass* Z_Construct_UClass_UAssetMappingTable_NoRegister()
	{
		return UAssetMappingTable::StaticClass();
	}
	struct Z_Construct_UClass_UAssetMappingTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MappedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MappedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetMappingTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UAssetMappingTable : that has AssetMappingTableging data \n *\x09\x09- used for retargeting\n *\x09\x09- support to share different animations\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AssetMappingTable.h" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "UAssetMappingTable : that has AssetMappingTableging data\n        - used for retargeting\n        - support to share different animations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner = { "MappedAssets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetMapping, METADATA_PARAMS(nullptr, 0) }; // 3629817481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData[] = {
		{ "Category", "AssetMappingTable" },
		{ "Comment", "/** Mappin of asset between source and target **/" },
		{ "ModuleRelativePath", "Classes/Animation/AssetMappingTable.h" },
		{ "ToolTip", "Mappin of asset between source and target *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets = { "MappedAssets", nullptr, (EPropertyFlags)0x0040000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetMappingTable, MappedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_MetaData)) }; // 3629817481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetMappingTable_Statics::NewProp_MappedAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetMappingTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetMappingTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams = {
		&UAssetMappingTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetMappingTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetMappingTable()
	{
		if (!Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton, Z_Construct_UClass_UAssetMappingTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetMappingTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAssetMappingTable>()
	{
		return UAssetMappingTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetMappingTable);
	UAssetMappingTable::~UAssetMappingTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ScriptStructInfo[] = {
		{ FAssetMapping::StaticStruct, Z_Construct_UScriptStruct_FAssetMapping_Statics::NewStructOps, TEXT("AssetMapping"), &Z_Registration_Info_UScriptStruct_AssetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetMapping), 3629817481U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetMappingTable, UAssetMappingTable::StaticClass, TEXT("UAssetMappingTable"), &Z_Registration_Info_UClass_UAssetMappingTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetMappingTable), 120704560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_3607590442(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AssetMappingTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
