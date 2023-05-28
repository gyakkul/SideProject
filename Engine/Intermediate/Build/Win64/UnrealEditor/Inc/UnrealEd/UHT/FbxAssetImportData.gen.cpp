// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxAssetImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFbxAssetImportData::StaticRegisterNativesUFbxAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxAssetImportData);
	UClass* Z_Construct_UClass_UFbxAssetImportData_NoRegister()
	{
		return UFbxAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertScene_MetaData[];
#endif
		static void NewProp_bConvertScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSceneUnit_MetaData[];
#endif
		static void NewProp_bConvertSceneUnit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSceneUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsScene_MetaData[];
#endif
		static void NewProp_bImportAsScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FbxSceneImportDataReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FbxSceneImportDataReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for import data and options used when importing any asset from FBX\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxAssetImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from FBX" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation = { "ImportTranslation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAssetImportData, ImportTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation = { "ImportRotation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAssetImportData, ImportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "Category", "Transform" },
		{ "ImportCategory", "Transform" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAssetImportData, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE coordinate system" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bConvertScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene = { "bConvertScene", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "editcondition", "bConvertScene" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bForceFrontXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ImportCategory", "Miscellaneous" },
		{ "ImportType", "StaticMesh|SkeletalMesh|Animation" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Convert the scene from FBX unit to UE unit (centimeter)." },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bConvertSceneUnit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit = { "bConvertSceneUnit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData[] = {
		{ "Comment", "/* Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true" },
	};
#endif
	void Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_SetBit(void* Obj)
	{
		((UFbxAssetImportData*)Obj)->bImportAsScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene = { "bImportAsScene", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxAssetImportData), &Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData[] = {
		{ "Comment", "/* Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxAssetImportData.h" },
		{ "ToolTip", "Use by the reimport factory to answer CanReimport, if true only factory for scene reimport will return true" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference = { "FbxSceneImportDataReference", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxAssetImportData, FbxSceneImportDataReference), Z_Construct_UClass_UFbxSceneImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_ImportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bForceFrontXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bConvertSceneUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_bImportAsScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxAssetImportData_Statics::NewProp_FbxSceneImportDataReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxAssetImportData_Statics::ClassParams = {
		&UFbxAssetImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::PropPointers),
		0,
		0x001010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxAssetImportData.OuterSingleton, Z_Construct_UClass_UFbxAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxAssetImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxAssetImportData>()
	{
		return UFbxAssetImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxAssetImportData);
	UFbxAssetImportData::~UFbxAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxAssetImportData, UFbxAssetImportData::StaticClass, TEXT("UFbxAssetImportData"), &Z_Registration_Info_UClass_UFbxAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxAssetImportData), 1054238686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_1159145190(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
