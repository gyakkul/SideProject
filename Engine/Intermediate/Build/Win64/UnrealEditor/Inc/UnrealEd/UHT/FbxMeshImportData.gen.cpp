// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxMeshImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxMeshImportData() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFbxAssetImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxMeshImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FImportMeshLodSectionsData();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXNormalImportMethod;
	static UEnum* EFBXNormalImportMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXNormalImportMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXNormalImportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXNormalImportMethod"));
		}
		return Z_Registration_Info_UEnum_EFBXNormalImportMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXNormalImportMethod>()
	{
		return EFBXNormalImportMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enumerators[] = {
		{ "FBXNIM_ComputeNormals", (int64)FBXNIM_ComputeNormals },
		{ "FBXNIM_ImportNormals", (int64)FBXNIM_ImportNormals },
		{ "FBXNIM_ImportNormalsAndTangents", (int64)FBXNIM_ImportNormalsAndTangents },
		{ "FBXNIM_MAX", (int64)FBXNIM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FBXNIM_ComputeNormals.DisplayName", "Compute Normals" },
		{ "FBXNIM_ComputeNormals.Name", "FBXNIM_ComputeNormals" },
		{ "FBXNIM_ImportNormals.DisplayName", "Import Normals" },
		{ "FBXNIM_ImportNormals.Name", "FBXNIM_ImportNormals" },
		{ "FBXNIM_ImportNormalsAndTangents.DisplayName", "Import Normals and Tangents" },
		{ "FBXNIM_ImportNormalsAndTangents.Name", "FBXNIM_ImportNormalsAndTangents" },
		{ "FBXNIM_MAX.Name", "FBXNIM_MAX" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXNormalImportMethod",
		"EFBXNormalImportMethod",
		Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod()
	{
		if (!Z_Registration_Info_UEnum_EFBXNormalImportMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXNormalImportMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXNormalImportMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXNormalGenerationMethod;
	static UEnum* EFBXNormalGenerationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXNormalGenerationMethod"));
		}
		return Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXNormalGenerationMethod::Type>()
	{
		return EFBXNormalGenerationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enumerators[] = {
		{ "EFBXNormalGenerationMethod::BuiltIn", (int64)EFBXNormalGenerationMethod::BuiltIn },
		{ "EFBXNormalGenerationMethod::MikkTSpace", (int64)EFBXNormalGenerationMethod::MikkTSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BuiltIn.Comment", "/** Use the legacy built in method to generate normals (faster in some cases) */" },
		{ "BuiltIn.Name", "EFBXNormalGenerationMethod::BuiltIn" },
		{ "BuiltIn.ToolTip", "Use the legacy built in method to generate normals (faster in some cases)" },
		{ "MikkTSpace.Comment", "/** Use MikkTSpace to generate normals and tangents */" },
		{ "MikkTSpace.Name", "EFBXNormalGenerationMethod::MikkTSpace" },
		{ "MikkTSpace.ToolTip", "Use MikkTSpace to generate normals and tangents" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXNormalGenerationMethod",
		"EFBXNormalGenerationMethod::Type",
		Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod()
	{
		if (!Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXNormalGenerationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexColorImportOption;
	static UEnum* EVertexColorImportOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorImportOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVertexColorImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EVertexColorImportOption, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EVertexColorImportOption"));
		}
		return Z_Registration_Info_UEnum_EVertexColorImportOption.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EVertexColorImportOption::Type>()
	{
		return EVertexColorImportOption_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enumerators[] = {
		{ "EVertexColorImportOption::Replace", (int64)EVertexColorImportOption::Replace },
		{ "EVertexColorImportOption::Ignore", (int64)EVertexColorImportOption::Ignore },
		{ "EVertexColorImportOption::Override", (int64)EVertexColorImportOption::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.Comment", "/** Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors. */" },
		{ "Ignore.Name", "EVertexColorImportOption::Ignore" },
		{ "Ignore.ToolTip", "Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors." },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "Override.Comment", "/** Override all vertex colors with the specified color. */" },
		{ "Override.Name", "EVertexColorImportOption::Override" },
		{ "Override.ToolTip", "Override all vertex colors with the specified color." },
		{ "Replace.Comment", "/** Import the static mesh using the vertex colors from the FBX file. */" },
		{ "Replace.Name", "EVertexColorImportOption::Replace" },
		{ "Replace.ToolTip", "Import the static mesh using the vertex colors from the FBX file." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EVertexColorImportOption",
		"EVertexColorImportOption::Type",
		Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EVertexColorImportOption()
	{
		if (!Z_Registration_Info_UEnum_EVertexColorImportOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexColorImportOption.InnerSingleton, Z_Construct_UEnum_UnrealEd_EVertexColorImportOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVertexColorImportOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData;
class UScriptStruct* FImportMeshLodSectionsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportMeshLodSectionsData, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ImportMeshLodSectionsData"));
	}
	return Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FImportMeshLodSectionsData>()
{
	return FImportMeshLodSectionsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionOriginalMaterialName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionOriginalMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionOriginalMaterialName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Action to add nodes to the graph based on selected objects*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportMeshLodSectionsData>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_Inner = { "SectionOriginalMaterialName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData[] = {
		{ "Comment", "/*Every original imported fbx material name for every section*/" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Every original imported fbx material name for every section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName = { "SectionOriginalMaterialName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportMeshLodSectionsData, SectionOriginalMaterialName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewProp_SectionOriginalMaterialName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ImportMeshLodSectionsData",
		sizeof(FImportMeshLodSectionsData),
		alignof(FImportMeshLodSectionsData),
		Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportMeshLodSectionsData()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.InnerSingleton, Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData.InnerSingleton;
	}
	void UFbxMeshImportData::StaticRegisterNativesUFbxMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxMeshImportData);
	UClass* Z_Construct_UClass_UFbxMeshImportData_NoRegister()
	{
		return UFbxMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransformVertexToAbsolute_MetaData[];
#endif
		static void NewProp_bTransformVertexToAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformVertexToAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakePivotInVertex_MetaData[];
#endif
		static void NewProp_bBakePivotInVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakePivotInVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshLODs_MetaData[];
#endif
		static void NewProp_bImportMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalImportMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalImportMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalGenerationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[];
#endif
		static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReorderMaterialToFbxOrder_MetaData[];
#endif
		static void NewProp_bReorderMaterialToFbxOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReorderMaterialToFbxOrder;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ImportMaterialOriginalNameData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportMaterialOriginalNameData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportMaterialOriginalNameData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportMeshLodData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportMeshLodData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportMeshLodData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFbxAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Import data and options used when importing any mesh from FBX\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxMeshImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Import data and options used when importing any mesh from FBX" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices. */" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "If this option is true the node absolute transform (transform, offset and pivot) will be apply to the mesh vertices." },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bTransformVertexToAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute = { "bTransformVertexToAbsolute", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** - Experimental - If this option is true the inverse node rotation pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. Note: \"TransformVertexToAbsolute\" must be false.*/" },
		{ "EditCondition", "!bTransformVertexToAbsolute" },
		{ "ImportType", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "- Experimental - If this option is true the inverse node rotation pivot will be apply to the mesh vertices. The pivot from the DCC will then be the origin of the mesh. Note: \"TransformVertexToAbsolute\" must be false." },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bBakePivotInVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex = { "bBakePivotInVertex", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If enabled, creates LOD models for Unreal meshes from LODs in the import file; If not enabled, only the base mesh from the LOD group is imported" },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bImportMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs = { "bImportMeshLODs", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically. */" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod = { "NormalImportMethod", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxMeshImportData, NormalImportMethod), Z_Construct_UEnum_UnrealEd_EFBXNormalImportMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod_MetaData)) }; // 2929434762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh */" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod = { "NormalGenerationMethod", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxMeshImportData, NormalGenerationMethod), Z_Construct_UEnum_UnrealEd_EFBXNormalGenerationMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod_MetaData)) }; // 2658146254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Enabling this option will use weighted normals algorithm (area and angle) when computing normals or tangents */" },
		{ "ImportType", "Mesh|GeoOnly" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "Enabling this option will use weighted normals algorithm (area and angle) when computing normals or tangents" },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bComputeWeightedNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/* If checked, The material list will be reorder to the same order has the FBX file. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "OBJRestrict", "true" },
		{ "ToolTip", "If checked, The material list will be reorder to the same order has the FBX file." },
	};
#endif
	void Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder_SetBit(void* Obj)
	{
		((UFbxMeshImportData*)Obj)->bReorderMaterialToFbxOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder = { "bReorderMaterialToFbxOrder", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFbxMeshImportData), &Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_Inner = { "ImportMaterialOriginalNameData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n//Original import section/material data\n" },
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
		{ "ToolTip", "Original import section/material data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData = { "ImportMaterialOriginalNameData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxMeshImportData, ImportMaterialOriginalNameData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_Inner = { "ImportMeshLodData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImportMeshLodSectionsData, METADATA_PARAMS(nullptr, 0) }; // 3506392308
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxMeshImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData = { "ImportMeshLodData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxMeshImportData, ImportMeshLodData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_MetaData)) }; // 3506392308
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bTransformVertexToAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bBakePivotInVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bImportMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalImportMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_NormalGenerationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bComputeWeightedNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_bReorderMaterialToFbxOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMaterialOriginalNameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxMeshImportData_Statics::NewProp_ImportMeshLodData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxMeshImportData_Statics::ClassParams = {
		&UFbxMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::PropPointers),
		0,
		0x400010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxMeshImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxMeshImportData.OuterSingleton, Z_Construct_UClass_UFbxMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxMeshImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxMeshImportData>()
	{
		return UFbxMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxMeshImportData);
	UFbxMeshImportData::~UFbxMeshImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::EnumInfo[] = {
		{ EFBXNormalImportMethod_StaticEnum, TEXT("EFBXNormalImportMethod"), &Z_Registration_Info_UEnum_EFBXNormalImportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2929434762U) },
		{ EFBXNormalGenerationMethod_StaticEnum, TEXT("EFBXNormalGenerationMethod"), &Z_Registration_Info_UEnum_EFBXNormalGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2658146254U) },
		{ EVertexColorImportOption_StaticEnum, TEXT("EVertexColorImportOption"), &Z_Registration_Info_UEnum_EVertexColorImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4258397644U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ScriptStructInfo[] = {
		{ FImportMeshLodSectionsData::StaticStruct, Z_Construct_UScriptStruct_FImportMeshLodSectionsData_Statics::NewStructOps, TEXT("ImportMeshLodSectionsData"), &Z_Registration_Info_UScriptStruct_ImportMeshLodSectionsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportMeshLodSectionsData), 3506392308U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxMeshImportData, UFbxMeshImportData::StaticClass, TEXT("UFbxMeshImportData"), &Z_Registration_Info_UClass_UFbxMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxMeshImportData), 3503832970U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_1507778635(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxMeshImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
