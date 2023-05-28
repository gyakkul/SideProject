// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxSceneImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxTextureImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USceneImportFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFbxSceneImportFactory::StaticRegisterNativesUFbxSceneImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxSceneImportFactory);
	UClass* Z_Construct_UClass_UFbxSceneImportFactory_NoRegister()
	{
		return UFbxSceneImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptionsStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneImportOptionsStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneImportOptionsSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneImportOptionsSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequenceImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReimportData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneImportFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData[] = {
		{ "Category", "Editor Scripting | Fbx Scene Import" },
		{ "Comment", "/** Import options UI detail when importing fbx scene */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions = { "SceneImportOptions", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptions), Z_Construct_UClass_UFbxSceneImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData[] = {
		{ "Category", "Editor Scripting | Fbx Scene Import" },
		{ "Comment", "/** Import options UI detail when importing fbx scene static mesh*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene static mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh = { "SceneImportOptionsStaticMesh", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptionsStaticMesh), Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData[] = {
		{ "Category", "Editor Scripting | Fbx Scene Import" },
		{ "Comment", "/** Import options UI detail when importing fbx scene skeletal mesh*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import options UI detail when importing fbx scene skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh = { "SceneImportOptionsSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, SceneImportOptionsSkeletalMesh), Z_Construct_UClass_UFbxSceneImportOptionsSkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData[] = {
		{ "Comment", "/** Import data used when importing static meshes */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing static meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData = { "StaticMeshImportData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, StaticMeshImportData), Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData[] = {
		{ "Comment", "/** Import data used when importing skeletal meshes */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing skeletal meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData = { "SkeletalMeshImportData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, SkeletalMeshImportData), Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData[] = {
		{ "Comment", "/** Import data used when importing animations */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing animations" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData = { "AnimSequenceImportData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, AnimSequenceImportData), Z_Construct_UClass_UFbxAnimSequenceImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData[] = {
		{ "Comment", "/** Import data used when importing textures */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Import data used when importing textures" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData = { "TextureImportData", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, TextureImportData), Z_Construct_UClass_UFbxTextureImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData[] = {
		{ "Comment", "/** Pointer on the fbx scene import data, we fill this object to be able to do re import of the scene */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportFactory.h" },
		{ "ToolTip", "Pointer on the fbx scene import data, we fill this object to be able to do re import of the scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData = { "ReimportData", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportFactory, ReimportData), Z_Construct_UClass_UFbxSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SceneImportOptionsSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_StaticMeshImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_SkeletalMeshImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_AnimSequenceImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_TextureImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportFactory_Statics::NewProp_ReimportData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportFactory_Statics::ClassParams = {
		&UFbxSceneImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportFactory()
	{
		if (!Z_Registration_Info_UClass_UFbxSceneImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxSceneImportFactory.OuterSingleton, Z_Construct_UClass_UFbxSceneImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxSceneImportFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportFactory>()
	{
		return UFbxSceneImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportFactory);
	UFbxSceneImportFactory::~UFbxSceneImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxSceneImportFactory, UFbxSceneImportFactory::StaticClass, TEXT("UFbxSceneImportFactory"), &Z_Registration_Info_UClass_UFbxSceneImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxSceneImportFactory), 86865311U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_2228688765(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
