// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerGeomCacheVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerGeomCacheVizSettings() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerVizSettings();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerGeomCacheVizSettings::StaticRegisterNativesUMLDeformerGeomCacheVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerGeomCacheVizSettings);
	UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_NoRegister()
	{
		return UMLDeformerGeomCacheVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTruth_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GroundTruth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerVizSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings for a model that has a geometry cache.\n * This can be used in combination with a UMLDeformerGeomCacheModel.\n */" },
		{ "IncludePath", "MLDeformerGeomCacheVizSettings.h" },
		{ "ModuleRelativePath", "Public/MLDeformerGeomCacheVizSettings.h" },
		{ "ToolTip", "The vizualization settings for a model that has a geometry cache.\nThis can be used in combination with a UMLDeformerGeomCacheModel." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::NewProp_GroundTruth_MetaData[] = {
		{ "Category", "Test Assets" },
		{ "Comment", "/** The geometry cache that represents the ground truth of the test anim sequence. */" },
		{ "ModuleRelativePath", "Public/MLDeformerGeomCacheVizSettings.h" },
		{ "ToolTip", "The geometry cache that represents the ground truth of the test anim sequence." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::NewProp_GroundTruth = { "GroundTruth", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerGeomCacheVizSettings, GroundTruth), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::NewProp_GroundTruth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::NewProp_GroundTruth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::NewProp_GroundTruth,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerGeomCacheVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::ClassParams = {
		&UMLDeformerGeomCacheVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerGeomCacheVizSettings()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerGeomCacheVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerGeomCacheVizSettings.OuterSingleton, Z_Construct_UClass_UMLDeformerGeomCacheVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerGeomCacheVizSettings.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerGeomCacheVizSettings>()
	{
		return UMLDeformerGeomCacheVizSettings::StaticClass();
	}
	UMLDeformerGeomCacheVizSettings::UMLDeformerGeomCacheVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerGeomCacheVizSettings);
	UMLDeformerGeomCacheVizSettings::~UMLDeformerGeomCacheVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheVizSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerGeomCacheVizSettings, UMLDeformerGeomCacheVizSettings::StaticClass, TEXT("UMLDeformerGeomCacheVizSettings"), &Z_Registration_Info_UClass_UMLDeformerGeomCacheVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerGeomCacheVizSettings), 3710773757U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheVizSettings_h_3838008969(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGeomCacheVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
