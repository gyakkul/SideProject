// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MLDeformerAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerAssetFactory() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerFactory();
	MLDEFORMERFRAMEWORKEDITOR_API UClass* Z_Construct_UClass_UMLDeformerFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFrameworkEditor();
// End Cross Module References
	void UMLDeformerFactory::StaticRegisterNativesUMLDeformerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerFactory);
	UClass* Z_Construct_UClass_UMLDeformerFactory_NoRegister()
	{
		return UMLDeformerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFrameworkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The factory for the ML Deformer asset type.\n * This basically integrates the new asset type into the editor, so you can right click and create a new ML Deformer asset.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MLDeformerAssetFactory.h" },
		{ "ModuleRelativePath", "Private/MLDeformerAssetFactory.h" },
		{ "ToolTip", "The factory for the ML Deformer asset type.\nThis basically integrates the new asset type into the editor, so you can right click and create a new ML Deformer asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerFactory_Statics::ClassParams = {
		&UMLDeformerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerFactory()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerFactory.OuterSingleton, Z_Construct_UClass_UMLDeformerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerFactory.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORKEDITOR_API UClass* StaticClass<UMLDeformerFactory>()
	{
		return UMLDeformerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerFactory);
	UMLDeformerFactory::~UMLDeformerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerFactory, UMLDeformerFactory::StaticClass, TEXT("UMLDeformerFactory"), &Z_Registration_Info_UClass_UMLDeformerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerFactory), 2165200702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetFactory_h_3026049002(TEXT("/Script/MLDeformerFrameworkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Private_MLDeformerAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
