// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxStaticMeshImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxStaticMeshImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFbxStaticMeshImportData::StaticRegisterNativesUFbxStaticMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxStaticMeshImportData);
	UClass* Z_Construct_UClass_UFbxStaticMeshImportData_NoRegister()
	{
		return UFbxStaticMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxStaticMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshLODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StaticMeshLODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildNanite_MetaData[];
#endif
		static void NewProp_bBuildNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[];
#endif
		static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateCollision_MetaData[];
#endif
		static void NewProp_bAutoGenerateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombineMeshes_MetaData[];
#endif
		static void NewProp_bCombineMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxStaticMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Options" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxStaticMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The LODGroup to associate with this mesh when it is imported */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ToolTip", "The LODGroup to associate with this mesh when it is imported" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup = { "StaticMeshLODGroup", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxStaticMeshImportData, StaticMeshLODGroup), METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify how vertex colors should be imported */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxStaticMeshImportData, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData)) }; // 4258397644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxStaticMeshImportData, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Disabling this option will keep degenerate triangles found.  In general you should leave this option on. */" },
		{ "EditCondition", "!bBuildNanite" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "Disabling this option will keep degenerate triangles found.  In general you should leave this option on." },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
		{ "ToolTip", "If enabled, allows to render objects with Nanite" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bBuildNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite = { "bBuildNanite", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ReimportRestrict", "true" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If checked, collision will automatically be generated (ignored if custom collision is imported or used). */" },
		{ "DisplayName", "Generate Missing Collision" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If checked, collision will automatically be generated (ignored if custom collision is imported or used)." },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bAutoGenerateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision = { "bAutoGenerateCollision", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ToolTip", "If enabled, combines all meshes into a single mesh" },
	};
#endif
	void Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_SetBit(void* Obj)
	{
		((UFbxStaticMeshImportData*)Obj)->bCombineMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes = { "bCombineMeshes", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxStaticMeshImportData), &Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxStaticMeshImportData.h" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxStaticMeshImportData, DistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_DistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_DistanceFieldResolutionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_StaticMeshLODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexColorImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_VertexOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bRemoveDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bBuildNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bOneConvexHullPerUCX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bAutoGenerateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_bCombineMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxStaticMeshImportData_Statics::NewProp_DistanceFieldResolutionScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxStaticMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxStaticMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxStaticMeshImportData_Statics::ClassParams = {
		&UFbxStaticMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::PropPointers),
		0,
		0x400810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxStaticMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxStaticMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxStaticMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxStaticMeshImportData.OuterSingleton, Z_Construct_UClass_UFbxStaticMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxStaticMeshImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxStaticMeshImportData>()
	{
		return UFbxStaticMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxStaticMeshImportData);
	UFbxStaticMeshImportData::~UFbxStaticMeshImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxStaticMeshImportData, UFbxStaticMeshImportData::StaticClass, TEXT("UFbxStaticMeshImportData"), &Z_Registration_Info_UClass_UFbxStaticMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxStaticMeshImportData), 1861897575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_3312603999(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxStaticMeshImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
