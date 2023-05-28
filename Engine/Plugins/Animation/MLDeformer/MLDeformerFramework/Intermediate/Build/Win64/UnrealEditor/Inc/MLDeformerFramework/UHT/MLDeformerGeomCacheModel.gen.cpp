// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerGeomCacheModel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerGeomCacheModel() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerGeomCacheModel::StaticRegisterNativesUMLDeformerGeomCacheModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerGeomCacheModel);
	UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel_NoRegister()
	{
		return UMLDeformerGeomCacheModel::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GeometryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerModel,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ML Deformer model that has a geometry cache as target mesh.\n * Use this in combination with UMLDeformerGeomCacheVizSettings, FMLDeformerGeomCacheEditorModel, FMLDeformerGeomCacheVizSettingsDetails and FMLDeformerGeomCacheModelDetails.\n */" },
		{ "IncludePath", "MLDeformerGeomCacheModel.h" },
		{ "ModuleRelativePath", "Public/MLDeformerGeomCacheModel.h" },
		{ "ToolTip", "A ML Deformer model that has a geometry cache as target mesh.\nUse this in combination with UMLDeformerGeomCacheVizSettings, FMLDeformerGeomCacheEditorModel, FMLDeformerGeomCacheVizSettingsDetails and FMLDeformerGeomCacheModelDetails." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "Category", "Target Mesh" },
		{ "Comment", "/** The geometry cache that represents the target deformations. */" },
		{ "ModuleRelativePath", "Public/MLDeformerGeomCacheModel.h" },
		{ "ToolTip", "The geometry cache that represents the target deformations." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerGeomCacheModel, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::NewProp_GeometryCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::NewProp_GeometryCache,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerGeomCacheModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::ClassParams = {
		&UMLDeformerGeomCacheModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerGeomCacheModel()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerGeomCacheModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerGeomCacheModel.OuterSingleton, Z_Construct_UClass_UMLDeformerGeomCacheModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerGeomCacheModel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerGeomCacheModel>()
	{
		return UMLDeformerGeomCacheModel::StaticClass();
	}
	UMLDeformerGeomCacheModel::UMLDeformerGeomCacheModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerGeomCacheModel);
	UMLDeformerGeomCacheModel::~UMLDeformerGeomCacheModel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerGeomCacheModel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerGeomCacheModel, UMLDeformerGeomCacheModel::StaticClass, TEXT("UMLDeformerGeomCacheModel"), &Z_Registration_Info_UClass_UMLDeformerGeomCacheModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerGeomCacheModel), 597646796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheModel_h_515365873(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
