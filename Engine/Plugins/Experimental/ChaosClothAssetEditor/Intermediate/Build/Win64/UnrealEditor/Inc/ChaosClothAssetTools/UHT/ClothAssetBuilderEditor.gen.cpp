// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ChaosClothAsset/ClothAssetBuilderEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothAssetBuilderEditor() {}
// Cross Module References
	CHAOSCLOTHASSETENGINE_API UClass* Z_Construct_UClass_UClothAssetBuilder();
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UClothAssetBuilderEditor();
	CHAOSCLOTHASSETTOOLS_API UClass* Z_Construct_UClass_UClothAssetBuilderEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetTools();
// End Cross Module References
	void UClothAssetBuilderEditor::StaticRegisterNativesUClothAssetBuilderEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothAssetBuilderEditor);
	UClass* Z_Construct_UClass_UClothAssetBuilderEditor_NoRegister()
	{
		return UClothAssetBuilderEditor::StaticClass();
	}
	struct Z_Construct_UClass_UClothAssetBuilderEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothAssetBuilderEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothAssetBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothAssetBuilderEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implement a clothing asset builder.\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothAssetBuilderEditor.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothAssetBuilderEditor.h" },
		{ "ToolTip", "Implement a clothing asset builder." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothAssetBuilderEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothAssetBuilderEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothAssetBuilderEditor_Statics::ClassParams = {
		&UClothAssetBuilderEditor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothAssetBuilderEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothAssetBuilderEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothAssetBuilderEditor()
	{
		if (!Z_Registration_Info_UClass_UClothAssetBuilderEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothAssetBuilderEditor.OuterSingleton, Z_Construct_UClass_UClothAssetBuilderEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothAssetBuilderEditor.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETTOOLS_API UClass* StaticClass<UClothAssetBuilderEditor>()
	{
		return UClothAssetBuilderEditor::StaticClass();
	}
	UClothAssetBuilderEditor::UClothAssetBuilderEditor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothAssetBuilderEditor);
	UClothAssetBuilderEditor::~UClothAssetBuilderEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetBuilderEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetBuilderEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothAssetBuilderEditor, UClothAssetBuilderEditor::StaticClass, TEXT("UClothAssetBuilderEditor"), &Z_Registration_Info_UClass_UClothAssetBuilderEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothAssetBuilderEditor), 1453721615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetBuilderEditor_h_391891285(TEXT("/Script/ChaosClothAssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetBuilderEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetTools_Private_ChaosClothAsset_ClothAssetBuilderEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
