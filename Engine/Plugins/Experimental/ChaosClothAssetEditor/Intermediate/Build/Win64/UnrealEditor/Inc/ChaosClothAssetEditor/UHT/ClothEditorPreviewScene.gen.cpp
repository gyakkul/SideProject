// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothEditorPreviewScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothEditorPreviewScene() {}
// Cross Module References
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothPreviewSceneDescription();
	CHAOSCLOTHASSETEDITOR_API UClass* Z_Construct_UClass_UChaosClothPreviewSceneDescription_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References
	void UChaosClothPreviewSceneDescription::StaticRegisterNativesUChaosClothPreviewSceneDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothPreviewSceneDescription);
	UClass* Z_Construct_UClass_UChaosClothPreviewSceneDescription_NoRegister()
	{
		return UChaosClothPreviewSceneDescription::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::Class_MetaDataParams[] = {
		{ "Comment", "///\n/// The UChaosClothPreviewSceneDescription is a description of the Preview scene contents, intended to be editable in an FAdvancedPreviewSettingsWidget\n/// \n" },
		{ "IncludePath", "ChaosClothAsset/ClothEditorPreviewScene.h" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorPreviewScene.h" },
		{ "ToolTip", "The UChaosClothPreviewSceneDescription is a description of the Preview scene contents, intended to be editable in an FAdvancedPreviewSettingsWidget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "// Skeletal Mesh source asset\n" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorPreviewScene.h" },
		{ "ToolTip", "Skeletal Mesh source asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshAsset = { "SkeletalMeshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothPreviewSceneDescription, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshTransform_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothEditorPreviewScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshTransform = { "SkeletalMeshTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChaosClothPreviewSceneDescription, SkeletalMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::NewProp_SkeletalMeshTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothPreviewSceneDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::ClassParams = {
		&UChaosClothPreviewSceneDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothPreviewSceneDescription()
	{
		if (!Z_Registration_Info_UClass_UChaosClothPreviewSceneDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothPreviewSceneDescription.OuterSingleton, Z_Construct_UClass_UChaosClothPreviewSceneDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothPreviewSceneDescription.OuterSingleton;
	}
	template<> CHAOSCLOTHASSETEDITOR_API UClass* StaticClass<UChaosClothPreviewSceneDescription>()
	{
		return UChaosClothPreviewSceneDescription::StaticClass();
	}
	UChaosClothPreviewSceneDescription::UChaosClothPreviewSceneDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothPreviewSceneDescription);
	UChaosClothPreviewSceneDescription::~UChaosClothPreviewSceneDescription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorPreviewScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorPreviewScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothPreviewSceneDescription, UChaosClothPreviewSceneDescription::StaticClass, TEXT("UChaosClothPreviewSceneDescription"), &Z_Registration_Info_UClass_UChaosClothPreviewSceneDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothPreviewSceneDescription), 1838265057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorPreviewScene_h_1786938612(TEXT("/Script/ChaosClothAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorPreviewScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothEditorPreviewScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
