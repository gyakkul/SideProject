// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxSceneImportOptionsStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportOptionsStaticMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption;
	static UEnum* EFbxSceneVertexColorImportOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxSceneVertexColorImportOption"));
		}
		return Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxSceneVertexColorImportOption>()
	{
		return EFbxSceneVertexColorImportOption_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enumerators[] = {
		{ "EFbxSceneVertexColorImportOption::Replace", (int64)EFbxSceneVertexColorImportOption::Replace },
		{ "EFbxSceneVertexColorImportOption::Ignore", (int64)EFbxSceneVertexColorImportOption::Ignore },
		{ "EFbxSceneVertexColorImportOption::Override", (int64)EFbxSceneVertexColorImportOption::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.Comment", "/** Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors. */" },
		{ "Ignore.Name", "EFbxSceneVertexColorImportOption::Ignore" },
		{ "Ignore.ToolTip", "Ignore vertex colors from the FBX file, and keep the existing mesh vertex colors." },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "Override.Comment", "/** Override all vertex colors with the specified color. */" },
		{ "Override.Name", "EFbxSceneVertexColorImportOption::Override" },
		{ "Override.ToolTip", "Override all vertex colors with the specified color." },
		{ "Replace.Comment", "/** Import the static mesh using the vertex colors from the FBX file. */" },
		{ "Replace.Name", "EFbxSceneVertexColorImportOption::Replace" },
		{ "Replace.ToolTip", "Import the static mesh using the vertex colors from the FBX file." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFbxSceneVertexColorImportOption",
		"EFbxSceneVertexColorImportOption",
		Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption()
	{
		if (!Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod;
	static UEnum* EFBXSceneNormalImportMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneNormalImportMethod"));
		}
		return Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneNormalImportMethod>()
	{
		return EFBXSceneNormalImportMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enumerators[] = {
		{ "EFBXSceneNormalImportMethod::FBXSceneNIM_ComputeNormals", (int64)EFBXSceneNormalImportMethod::FBXSceneNIM_ComputeNormals },
		{ "EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormals", (int64)EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormals },
		{ "EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormalsAndTangents", (int64)EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormalsAndTangents },
		{ "EFBXSceneNormalImportMethod::FBXSceneNIM_MAX", (int64)EFBXSceneNormalImportMethod::FBXSceneNIM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FBXSceneNIM_ComputeNormals.DisplayName", "Compute Normals" },
		{ "FBXSceneNIM_ComputeNormals.Name", "EFBXSceneNormalImportMethod::FBXSceneNIM_ComputeNormals" },
		{ "FBXSceneNIM_ImportNormals.DisplayName", "Import Normals" },
		{ "FBXSceneNIM_ImportNormals.Name", "EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormals" },
		{ "FBXSceneNIM_ImportNormalsAndTangents.DisplayName", "Import Normals and Tangents" },
		{ "FBXSceneNIM_ImportNormalsAndTangents.Name", "EFBXSceneNormalImportMethod::FBXSceneNIM_ImportNormalsAndTangents" },
		{ "FBXSceneNIM_MAX.Name", "EFBXSceneNormalImportMethod::FBXSceneNIM_MAX" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXSceneNormalImportMethod",
		"EFBXSceneNormalImportMethod",
		Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod;
	static UEnum* EFBXSceneNormalGenerationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFBXSceneNormalGenerationMethod"));
		}
		return Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFBXSceneNormalGenerationMethod>()
	{
		return EFBXSceneNormalGenerationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enumerators[] = {
		{ "EFBXSceneNormalGenerationMethod::BuiltIn", (int64)EFBXSceneNormalGenerationMethod::BuiltIn },
		{ "EFBXSceneNormalGenerationMethod::MikkTSpace", (int64)EFBXSceneNormalGenerationMethod::MikkTSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BuiltIn.Comment", "/** Use the legacy built in method to generate normals (faster in some cases) */" },
		{ "BuiltIn.Name", "EFBXSceneNormalGenerationMethod::BuiltIn" },
		{ "BuiltIn.ToolTip", "Use the legacy built in method to generate normals (faster in some cases)" },
		{ "MikkTSpace.Comment", "/** Use MikkTSpace to generate normals and tangents */" },
		{ "MikkTSpace.Name", "EFBXSceneNormalGenerationMethod::MikkTSpace" },
		{ "MikkTSpace.ToolTip", "Use MikkTSpace to generate normals and tangents" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFBXSceneNormalGenerationMethod",
		"EFBXSceneNormalGenerationMethod",
		Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod()
	{
		if (!Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod.InnerSingleton;
	}
	void UFbxSceneImportOptionsStaticMesh::StaticRegisterNativesUFbxSceneImportOptionsStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxSceneImportOptionsStaticMesh);
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_NoRegister()
	{
		return UFbxSceneImportOptionsStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateCollision_MetaData[];
#endif
		static void NewProp_bAutoGenerateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateCollision;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorImportOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorImportOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VertexColorImportOption;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[];
#endif
		static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalImportMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalImportMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalImportMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalGenerationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalGenerationMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData[] = {
		{ "Comment", "/** For static meshes, enabling this option will combine all meshes in the FBX into a single monolithic mesh in Unreal */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "For static meshes, enabling this option will combine all meshes in the FBX into a single monolithic mesh in Unreal" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup = { "StaticMeshLODGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, StaticMeshLODGroup), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** If checked, collision will automatically be generated (ignored if custom collision is imported or used). */" },
		{ "DisplayName", "Generate Missing Collision" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "If checked, collision will automatically be generated (ignored if custom collision is imported or used)." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bAutoGenerateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision = { "bAutoGenerateCollision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Specify how vertex colors should be imported */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, VertexColorImportOption), Z_Construct_UEnum_UnrealEd_EFbxSceneVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_MetaData)) }; // 1373883974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Disabling this option will keep degenerate triangles found.  In general you should leave this option on. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Disabling this option will keep degenerate triangles found.  In general you should leave this option on." },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "If checked, one convex hull per UCX_ prefixed collision mesh will be generated instead of decomposing into multiple hulls" },
	};
#endif
	void Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UFbxSceneImportOptionsStaticMesh*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFbxSceneImportOptionsStaticMesh), &Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically. */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Enabling this option will read the tangents(tangent,binormal,normal) from FBX file instead of generating them automatically." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod = { "NormalImportMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, NormalImportMethod), Z_Construct_UEnum_UnrealEd_EFBXSceneNormalImportMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_MetaData)) }; // 229902942
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData[] = {
		{ "Category", "StaticMesh" },
		{ "Comment", "/** Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportOptionsStaticMesh.h" },
		{ "ToolTip", "Use the MikkTSpace tangent space generator for generating normals and tangents on the mesh" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod = { "NormalGenerationMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportOptionsStaticMesh, NormalGenerationMethod), Z_Construct_UEnum_UnrealEd_EFBXSceneNormalGenerationMethod, METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_MetaData)) }; // 705785811
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_StaticMeshLODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bAutoGenerateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexColorImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_VertexOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bRemoveDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_bOneConvexHullPerUCX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalImportMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::NewProp_NormalGenerationMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportOptionsStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::ClassParams = {
		&UFbxSceneImportOptionsStaticMesh::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UFbxSceneImportOptionsStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxSceneImportOptionsStaticMesh.OuterSingleton, Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxSceneImportOptionsStaticMesh.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportOptionsStaticMesh>()
	{
		return UFbxSceneImportOptionsStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportOptionsStaticMesh);
	UFbxSceneImportOptionsStaticMesh::~UFbxSceneImportOptionsStaticMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::EnumInfo[] = {
		{ EFbxSceneVertexColorImportOption_StaticEnum, TEXT("EFbxSceneVertexColorImportOption"), &Z_Registration_Info_UEnum_EFbxSceneVertexColorImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1373883974U) },
		{ EFBXSceneNormalImportMethod_StaticEnum, TEXT("EFBXSceneNormalImportMethod"), &Z_Registration_Info_UEnum_EFBXSceneNormalImportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 229902942U) },
		{ EFBXSceneNormalGenerationMethod_StaticEnum, TEXT("EFBXSceneNormalGenerationMethod"), &Z_Registration_Info_UEnum_EFBXSceneNormalGenerationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 705785811U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxSceneImportOptionsStaticMesh, UFbxSceneImportOptionsStaticMesh::StaticClass, TEXT("UFbxSceneImportOptionsStaticMesh"), &Z_Registration_Info_UClass_UFbxSceneImportOptionsStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxSceneImportOptionsStaticMesh), 497183698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_2100676263(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportOptionsStaticMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
