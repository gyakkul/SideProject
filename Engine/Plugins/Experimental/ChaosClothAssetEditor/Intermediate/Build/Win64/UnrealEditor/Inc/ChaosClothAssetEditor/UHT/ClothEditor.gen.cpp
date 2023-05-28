// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditor() {}
// Cross Module References
	BASECHARACTERFXEDITOR_API UClass* Z_Construct_UClass_UBaseCharacterFXEditor();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditor();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothAssetEditor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UChaosClothAssetEditor::StaticRegisterNativesUChaosClothAssetEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothAssetEditor);
	UClass* Z_Construct_UClass_UChaosClothAssetEditor_NoRegister()
	{
		return UChaosClothAssetEditor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothAssetEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothAssetEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCharacterFXEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothAssetEditor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The actual asset editor class doesn't have that much in it, intentionally. \n * \n * Our current asset editor guidelines ask us to place as little business logic as possible\n * into the class, instead putting as much of the non-UI code into the subsystem as possible,\n * and the UI code into the toolkit (which this class owns).\n *\n * However, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\n * ends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\n * the asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\n * on the left.\n */" },
		{ "IncludePath", "ChaosClothAsset/ClothEditor.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditor.h" },
		{ "ToolTip", "The actual asset editor class doesn't have that much in it, intentionally.\n\nOur current asset editor guidelines ask us to place as little business logic as possible\ninto the class, instead putting as much of the non-UI code into the subsystem as possible,\nand the UI code into the toolkit (which this class owns).\n\nHowever, since we're using a mode and the Interactive Tools Framework, a lot of our business logic\nends up inside the mode and the tools, not the subsystem. The front-facing code is mostly in\nthe asset editor toolkit, though the mode toolkit has most of the things that deal with the toolbar\non the left." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothAssetEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothAssetEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothAssetEditor_Statics::ClassParams = {
		&UChaosClothAssetEditor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothAssetEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothAssetEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothAssetEditor()
	{
		if (!Z_Registration_Info_UClass_UChaosClothAssetEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothAssetEditor.OuterSingleton, Z_Construct_UClass_UChaosClothAssetEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothAssetEditor.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UChaosClothAssetEditor>()
	{
		return UChaosClothAssetEditor::StaticClass();
	}
	UChaosClothAssetEditor::UChaosClothAssetEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothAssetEditor);
	UChaosClothAssetEditor::~UChaosClothAssetEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothAssetEditor, UChaosClothAssetEditor::StaticClass, TEXT("UChaosClothAssetEditor"), &Z_Registration_Info_UClass_UChaosClothAssetEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothAssetEditor), 2053277161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_482403628(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
