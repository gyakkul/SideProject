// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DNAAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDNAAsset();
	RIGLOGICMODULE_API UClass* Z_Construct_UClass_UDNAAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References
	void UDNAAsset::StaticRegisterNativesUDNAAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNAAsset);
	UClass* Z_Construct_UClass_UDNAAsset_NoRegister()
	{
		return UDNAAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDNAAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DnaFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DnaFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDNAAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An asset holding the data needed to generate/update/animate a RigLogic character\n  * It is imported from character's DNA file as a bit stream, and separated out it into runtime (behavior) and design-time chunks;\n  * Currently, the design-time part still loads the geometry, as it is needed for the skeletal mesh update; once SkeletalMeshDNAReader is\n  * fully implemented, it will be able to read the geometry directly from the SkeletalMesh and won't load it into this asset \n  **/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "DNAAsset.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
		{ "ToolTip", "An asset holding the data needed to generate/update/animate a RigLogic character\nIt is imported from character's DNA file as a bit stream, and separated out it into runtime (behavior) and design-time chunks;\nCurrently, the design-time part still loads the geometry, as it is needed for the skeletal mesh update; once SkeletalMeshDNAReader is\nfully implemented, it will be able to read the geometry directly from the SkeletalMesh and won't load it into this asset" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "ModuleRelativePath", "Public/DNAAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName = { "DnaFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAsset, DnaFileName), METADATA_PARAMS(Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDNAAsset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAsset_Statics::NewProp_DnaFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDNAAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNAAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNAAsset_Statics::ClassParams = {
		&UDNAAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDNAAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDNAAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDNAAsset()
	{
		if (!Z_Registration_Info_UClass_UDNAAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNAAsset.OuterSingleton, Z_Construct_UClass_UDNAAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDNAAsset.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UClass* StaticClass<UDNAAsset>()
	{
		return UDNAAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDNAAsset);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDNAAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDNAAsset, UDNAAsset::StaticClass, TEXT("UDNAAsset"), &Z_Registration_Info_UClass_UDNAAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNAAsset), 4092402873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_1853355353(TEXT("/Script/RigLogicModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNAAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
