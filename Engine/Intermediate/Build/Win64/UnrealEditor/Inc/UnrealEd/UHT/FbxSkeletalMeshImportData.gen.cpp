// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxSkeletalMeshImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSkeletalMeshImportData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportContentType();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXImportContentType;
	static UEnum* EFBXImportContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXImportContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXImportContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXImportContentType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXImportContentType"));
		}
		return Z_Registration_Info_UEnum_EFBXImportContentType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXImportContentType>()
	{
		return EFBXImportContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enumerators[] = {
		{ "FBXICT_All", (int64)FBXICT_All },
		{ "FBXICT_Geometry", (int64)FBXICT_Geometry },
		{ "FBXICT_SkinningWeights", (int64)FBXICT_SkinningWeights },
		{ "FBXICT_MAX", (int64)FBXICT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FBXICT_All.DisplayName", "Geometry and Skinning Weights." },
		{ "FBXICT_All.Name", "FBXICT_All" },
		{ "FBXICT_All.ToolTip", "Import all fbx content: geometry, skinning and weights." },
		{ "FBXICT_Geometry.DisplayName", "Geometry Only" },
		{ "FBXICT_Geometry.Name", "FBXICT_Geometry" },
		{ "FBXICT_Geometry.ToolTip", "Import the skeletal mesh geometry only (will create a default skeleton, or map the geometry to the existing one). Morph and LOD can be imported with it." },
		{ "FBXICT_MAX.Name", "FBXICT_MAX" },
		{ "FBXICT_SkinningWeights.DisplayName", "Skinning Weights Only" },
		{ "FBXICT_SkinningWeights.Name", "FBXICT_SkinningWeights" },
		{ "FBXICT_SkinningWeights.ToolTip", "Import the skeletal mesh skinning and weights only (no geometry will be imported). Morph and LOD will not be imported with this settings." },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXImportContentType",
		"EFBXImportContentType",
		Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXImportContentType()
	{
		if (!Z_Registration_Info_UEnum_EFBXImportContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXImportContentType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXImportContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXImportContentType.InnerSingleton;
	}
	void UFbxSkeletalMeshImportData::StaticRegisterNativesUFbxSkeletalMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxSkeletalMeshImportData);
	UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData_NoRegister()
	{
		return UFbxSkeletalMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportContentType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImportContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastImportContentType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastImportContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexOverrideColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexOverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[];
#endif
		static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseT0AsRefPose_MetaData[];
#endif
		static void NewProp_bUseT0AsRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseT0AsRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveSmoothingGroups_MetaData[];
#endif
		static void NewProp_bPreserveSmoothingGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveSmoothingGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTargets_MetaData[];
#endif
		static void NewProp_bImportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdTangentNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdTangentNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdUV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphThresholdPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphThresholdPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxMeshImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Import data and options used when importing a static mesh from fbx\n * Notes:\n * - Meta data ImportType i.e.       meta = (ImportType = \"SkeletalMesh|GeoOnly\")\n *     - SkeletalMesh : the property will be shown when importing skeletalmesh\n *     - GeoOnly: The property will be hide if we import skinning only\n *     - RigOnly: The property will be hide if we import geo only\n *     - RigAndGeo: The property will be show only if we import both skinning and geometry, it will be hiden otherwise\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSkeletalMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "Import data and options used when importing a static mesh from fbx\nNotes:\n- Meta data ImportType i.e.       meta = (ImportType = \"SkeletalMesh|GeoOnly\")\n    - SkeletalMesh : the property will be shown when importing skeletalmesh\n    - GeoOnly: The property will be hide if we import skinning only\n    - RigOnly: The property will be hide if we import geo only\n    - RigAndGeo: The property will be show only if we import both skinning and geometry, it will be hiden otherwise" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Filter the content we want to import from the incoming FBX skeletal mesh.*/" },
		{ "DisplayName", "Import Content Type" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Filter the content we want to import from the incoming FBX skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType = { "ImportContentType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ImportContentType), Z_Construct_UEnum_UnrealEd_EFBXImportContentType, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType_MetaData)) }; // 1609172167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData[] = {
		{ "Comment", "/** The value of the content type during the last import. This cannot be edited and is set only on successful import or re-import*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "The value of the content type during the last import. This cannot be edited and is set only on successful import or re-import" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType = { "LastImportContentType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, LastImportContentType), Z_Construct_UEnum_UnrealEd_EFBXImportContentType, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType_MetaData)) }; // 1609172167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify how vertex colors should be imported */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption_MetaData)) }; // 4258397644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|RigOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If enabled, update the Skeleton (of the mesh being imported)'s reference pose." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bUpdateSkeletonReferencePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Enable this option to use frame 0 as reference pose */" },
		{ "DisplayName", "Use T0 As Ref Pose" },
		{ "ImportType", "SkeletalMesh|RigAndGeo" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "Enable this option to use frame 0 as reference pose" },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bUseT0AsRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If checked, triangles with non-matching smoothing groups will be physically split. */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If checked, triangles with non-matching smoothing groups will be physically split." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bPreserveSmoothingGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups = { "bPreserveSmoothingGroups", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. */" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "ToolTip", "If enabled, creates Unreal morph objects for the imported meshes" },
	};
#endif
	void Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
	{
		((UFbxSkeletalMeshImportData*)Obj)->bImportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSkeletalMeshImportData), &Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold to compare vertex position equality. */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare vertex position equality." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition = { "ThresholdPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold to compare normal, tangent or bi-normal equality. */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare normal, tangent or bi-normal equality." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal = { "ThresholdTangentNormal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdTangentNormal), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold to compare UV equality. */" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare UV equality." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV = { "ThresholdUV", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, ThresholdUV), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_MorphThresholdPosition_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold to compare vertex position equality when computing morph target deltas. */" },
		{ "editcondition", "bImportMorphTargets" },
		{ "ImportType", "SkeletalMesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSkeletalMeshImportData.h" },
		{ "NoSpinbox", "true" },
		{ "SubCategory", "Thresholds" },
		{ "ToolTip", "Threshold to compare vertex position equality when computing morph target deltas." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_MorphThresholdPosition = { "MorphThresholdPosition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSkeletalMeshImportData, MorphThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_MorphThresholdPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_MorphThresholdPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ImportContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_LastImportContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexColorImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_VertexOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUpdateSkeletonReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bUseT0AsRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bPreserveSmoothingGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_bImportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdTangentNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_ThresholdUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::NewProp_MorphThresholdPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSkeletalMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::ClassParams = {
		&UFbxSkeletalMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::PropPointers),
		0,
		0x400810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSkeletalMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxSkeletalMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxSkeletalMeshImportData.OuterSingleton, Z_Construct_UClass_UFbxSkeletalMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxSkeletalMeshImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxSkeletalMeshImportData>()
	{
		return UFbxSkeletalMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSkeletalMeshImportData);
	UFbxSkeletalMeshImportData::~UFbxSkeletalMeshImportData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSkeletalMeshImportData)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::EnumInfo[] = {
		{ EFBXImportContentType_StaticEnum, TEXT("EFBXImportContentType"), &Z_Registration_Info_UEnum_EFBXImportContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1609172167U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxSkeletalMeshImportData, UFbxSkeletalMeshImportData::StaticClass, TEXT("UFbxSkeletalMeshImportData"), &Z_Registration_Info_UClass_UFbxSkeletalMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxSkeletalMeshImportData), 774165838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_3190393589(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSkeletalMeshImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
