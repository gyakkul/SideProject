// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericAssetsPipelineSharedSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipelineSharedSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType();
	INTERCHANGEPIPELINES_API UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeForceMeshType;
	static UEnum* EInterchangeForceMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeForceMeshType"));
		}
		return Z_Registration_Info_UEnum_EInterchangeForceMeshType.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeForceMeshType>()
	{
		return EInterchangeForceMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enumerators[] = {
		{ "EInterchangeForceMeshType::IFMT_None", (int64)EInterchangeForceMeshType::IFMT_None },
		{ "EInterchangeForceMeshType::IFMT_StaticMesh", (int64)EInterchangeForceMeshType::IFMT_StaticMesh },
		{ "EInterchangeForceMeshType::IFMT_SkeletalMesh", (int64)EInterchangeForceMeshType::IFMT_SkeletalMesh },
		{ "EInterchangeForceMeshType::IFMT_MAX", (int64)EInterchangeForceMeshType::IFMT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Force mesh type, if user want to import all meshes as one type*/" },
		{ "IFMT_MAX.Name", "EInterchangeForceMeshType::IFMT_MAX" },
		{ "IFMT_None.Comment", "/** Will import from the source type, no conversion */" },
		{ "IFMT_None.DisplayName", "None" },
		{ "IFMT_None.Name", "EInterchangeForceMeshType::IFMT_None" },
		{ "IFMT_None.ToolTip", "Will import from the source type, no conversion" },
		{ "IFMT_SkeletalMesh.Comment", "/** Will import any mesh to skeletal mesh. */" },
		{ "IFMT_SkeletalMesh.DisplayName", "Skeletal Mesh" },
		{ "IFMT_SkeletalMesh.Name", "EInterchangeForceMeshType::IFMT_SkeletalMesh" },
		{ "IFMT_SkeletalMesh.ToolTip", "Will import any mesh to skeletal mesh." },
		{ "IFMT_StaticMesh.Comment", "/** Will import any mesh to static mesh. */" },
		{ "IFMT_StaticMesh.DisplayName", "Static Mesh" },
		{ "IFMT_StaticMesh.Name", "EInterchangeForceMeshType::IFMT_StaticMesh" },
		{ "IFMT_StaticMesh.ToolTip", "Will import any mesh to static mesh." },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Force mesh type, if user want to import all meshes as one type" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeForceMeshType",
		"EInterchangeForceMeshType",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeForceMeshType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption;
	static UEnum* EInterchangeVertexColorImportOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("EInterchangeVertexColorImportOption"));
		}
		return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UEnum* StaticEnum<EInterchangeVertexColorImportOption>()
	{
		return EInterchangeVertexColorImportOption_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enumerators[] = {
		{ "EInterchangeVertexColorImportOption::IVCIO_Replace", (int64)EInterchangeVertexColorImportOption::IVCIO_Replace },
		{ "EInterchangeVertexColorImportOption::IVCIO_Ignore", (int64)EInterchangeVertexColorImportOption::IVCIO_Ignore },
		{ "EInterchangeVertexColorImportOption::IVCIO_Override", (int64)EInterchangeVertexColorImportOption::IVCIO_Override },
		{ "EInterchangeVertexColorImportOption::IVCIO_MAX", (int64)EInterchangeVertexColorImportOption::IVCIO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IVCIO_Ignore.Comment", "/** Ignore vertex colors from the translated source. In case of a re-import keep the existing mesh vertex colors. */" },
		{ "IVCIO_Ignore.DisplayName", "Ignore" },
		{ "IVCIO_Ignore.Name", "EInterchangeVertexColorImportOption::IVCIO_Ignore" },
		{ "IVCIO_Ignore.ToolTip", "Ignore vertex colors from the translated source. In case of a re-import keep the existing mesh vertex colors." },
		{ "IVCIO_MAX.Name", "EInterchangeVertexColorImportOption::IVCIO_MAX" },
		{ "IVCIO_Override.Comment", "/** Override all vertex colors with the specified color. */" },
		{ "IVCIO_Override.DisplayName", "Override" },
		{ "IVCIO_Override.Name", "EInterchangeVertexColorImportOption::IVCIO_Override" },
		{ "IVCIO_Override.ToolTip", "Override all vertex colors with the specified color." },
		{ "IVCIO_Replace.Comment", "/** Import the mesh using the vertex colors from the translated source. */" },
		{ "IVCIO_Replace.DisplayName", "Replace" },
		{ "IVCIO_Replace.Name", "EInterchangeVertexColorImportOption::IVCIO_Replace" },
		{ "IVCIO_Replace.ToolTip", "Import the mesh using the vertex colors from the translated source." },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		"EInterchangeVertexColorImportOption",
		"EInterchangeVertexColorImportOption",
		Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton, Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption.InnerSingleton;
	}
	void UInterchangeGenericCommonMeshesProperties::StaticRegisterNativesUInterchangeGenericCommonMeshesProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericCommonMeshesProperties);
	UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister()
	{
		return UInterchangeGenericCommonMeshesProperties::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceAllMeshAsType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceAllMeshAsType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceAllMeshAsType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportLods_MetaData[];
#endif
		static void NewProp_bImportLods_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLods;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeMeshes_MetaData[];
#endif
		static void NewProp_bBakeMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeMeshes;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangents_MetaData[];
#endif
		static void NewProp_bRecomputeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMikkTSpace_MetaData[];
#endif
		static void NewProp_bUseMikkTSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMikkTSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComputeWeightedNormals_MetaData[];
#endif
		static void NewProp_bComputeWeightedNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeWeightedNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData[];
#endif
		static void NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBackwardsCompatibleF16TruncUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerates_MetaData[];
#endif
		static void NewProp_bRemoveDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** Allow to convert mesh to a particular type */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Allow to convert mesh to a particular type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType = { "ForceAllMeshAsType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, ForceAllMeshAsType), Z_Construct_UEnum_InterchangePipelines_EInterchangeForceMeshType, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_MetaData)) }; // 1716312721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enable, meshes LODs will be imported. Note that it required the advanced bBakeMesh property to be enabled. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enable, meshes LODs will be imported. Note that it required the advanced bBakeMesh property to be enabled." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bImportLods = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods = { "bImportLods", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If enable, meshes will be baked with the scene instance hierarchy transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If enable, meshes will be baked with the scene instance hierarchy transform." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bBakeMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes = { "bBakeMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** Specify how vertex colors should be imported */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Specify how vertex colors should be imported" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption = { "VertexColorImportOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, VertexColorImportOption), Z_Construct_UEnum_InterchangePipelines_EInterchangeVertexColorImportOption, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_MetaData)) }; // 3466849692
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** Specify override color in the case that VertexColorImportOption is set to Override */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Specify override color in the case that VertexColorImportOption is set to Override" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor = { "VertexOverrideColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericCommonMeshesProperties, VertexOverrideColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, normals in the imported mesh are ignored and recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, normals in the imported mesh are ignored and recomputed." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, tangents in the imported mesh are ignored and recomputed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, tangents in the imported mesh are ignored and recomputed." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bRecomputeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents = { "bRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, recompute tangents will use mikkt space. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, recompute tangents will use mikkt space." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseMikkTSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace = { "bUseMikkTSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, we will use the surface area and the corner angle of the triangle as a ratio when computing the normals." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bComputeWeightedNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals = { "bComputeWeightedNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, Tangents will be stored at 16 bit vs 8 bit precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, Tangents will be stored at 16 bit vs 8 bit precision." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseHighPrecisionTangentBasis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, UVs will be stored at full floating point precision. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, UVs will be stored at full floating point precision." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseFullPrecisionUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, UVs will use backwards-compatible F16 conversion with truncation for legacy meshes. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, UVs will use backwards-compatible F16 conversion with truncation for legacy meshes." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bUseBackwardsCompatibleF16TruncUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs = { "bUseBackwardsCompatibleF16TruncUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "/** If true, degenerate triangles will be removed. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If true, degenerate triangles will be removed." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonMeshesProperties*)Obj)->bRemoveDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates = { "bRemoveDegenerates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonMeshesProperties), &Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_ForceAllMeshAsType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bImportLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bBakeMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexColorImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_VertexOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRecomputeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseMikkTSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bComputeWeightedNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseFullPrecisionUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bUseBackwardsCompatibleF16TruncUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::NewProp_bRemoveDegenerates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericCommonMeshesProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::ClassParams = {
		&UInterchangeGenericCommonMeshesProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::PropPointers),
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton, Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericCommonMeshesProperties>()
	{
		return UInterchangeGenericCommonMeshesProperties::StaticClass();
	}
	UInterchangeGenericCommonMeshesProperties::UInterchangeGenericCommonMeshesProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericCommonMeshesProperties);
	UInterchangeGenericCommonMeshesProperties::~UInterchangeGenericCommonMeshesProperties() {}
	void UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticRegisterNativesUInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties);
	UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister()
	{
		return UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportOnlyAnimations_MetaData[];
#endif
		static void NewProp_bImportOnlyAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportOnlyAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMeshesInBoneHierarchy_MetaData[];
#endif
		static void NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMeshesInBoneHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseT0AsRefPose_MetaData[];
#endif
		static void NewProp_bUseT0AsRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseT0AsRefPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Enable this option to only import animation, a valid skeleton must be set to import only the animations. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Enable this option to only import animation, a valid skeleton must be set to import only the animations." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bImportOnlyAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations = { "bImportOnlyAnimations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Skeleton to use for imported asset. When importing a skeletal mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a skeletal mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "If checked, meshes nested in bone hierarchies will be imported instead of being converted to bones." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bImportMeshesInBoneHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy = { "bImportMeshesInBoneHierarchy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "/** Enable this option to use frame 0 as reference pose */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipelineSharedSettings.h" },
		{ "ToolTip", "Enable this option to use frame 0 as reference pose" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_SetBit(void* Obj)
	{
		((UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*)Obj)->bUseT0AsRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose = { "bUseT0AsRefPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), &Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportOnlyAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bImportMeshesInBoneHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::NewProp_bUseT0AsRefPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::ClassParams = {
		&UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::PropPointers),
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton, Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties>()
	{
		return UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass();
	}
	UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties);
	UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::~UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::EnumInfo[] = {
		{ EInterchangeForceMeshType_StaticEnum, TEXT("EInterchangeForceMeshType"), &Z_Registration_Info_UEnum_EInterchangeForceMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1716312721U) },
		{ EInterchangeVertexColorImportOption_StaticEnum, TEXT("EInterchangeVertexColorImportOption"), &Z_Registration_Info_UEnum_EInterchangeVertexColorImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3466849692U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties, UInterchangeGenericCommonMeshesProperties::StaticClass, TEXT("UInterchangeGenericCommonMeshesProperties"), &Z_Registration_Info_UClass_UInterchangeGenericCommonMeshesProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericCommonMeshesProperties), 2240058983U) },
		{ Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties::StaticClass, TEXT("UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties"), &Z_Registration_Info_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties), 2118205078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_1094856336(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipelineSharedSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
