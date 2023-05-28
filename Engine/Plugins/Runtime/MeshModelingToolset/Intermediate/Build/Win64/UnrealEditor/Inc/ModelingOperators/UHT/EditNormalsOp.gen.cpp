// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleaningOps/EditNormalsOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditNormalsOp() {}
// Cross Module References
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENormalCalculationMethod;
	static UEnum* ENormalCalculationMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENormalCalculationMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENormalCalculationMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ENormalCalculationMethod"));
		}
		return Z_Registration_Info_UEnum_ENormalCalculationMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<ENormalCalculationMethod>()
	{
		return ENormalCalculationMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enumerators[] = {
		{ "ENormalCalculationMethod::AreaWeighted", (int64)ENormalCalculationMethod::AreaWeighted },
		{ "ENormalCalculationMethod::AngleWeighted", (int64)ENormalCalculationMethod::AngleWeighted },
		{ "ENormalCalculationMethod::AreaAngleWeighting", (int64)ENormalCalculationMethod::AreaAngleWeighting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enum_MetaDataParams[] = {
		{ "AngleWeighted.Comment", "/** Use the angle of a triangle at a vertex to weight how much that triangle's normal contributes to that vertex's normal */" },
		{ "AngleWeighted.Name", "ENormalCalculationMethod::AngleWeighted" },
		{ "AngleWeighted.ToolTip", "Use the angle of a triangle at a vertex to weight how much that triangle's normal contributes to that vertex's normal" },
		{ "AreaAngleWeighting.Comment", "/** Multiply area and angle weights together for a combined weight controlling how much a triangle's normal contributes to its vertices' normals */" },
		{ "AreaAngleWeighting.Name", "ENormalCalculationMethod::AreaAngleWeighting" },
		{ "AreaAngleWeighting.ToolTip", "Multiply area and angle weights together for a combined weight controlling how much a triangle's normal contributes to its vertices' normals" },
		{ "AreaWeighted.Comment", "/** Use triangle area to weight how much a triangle's normal contributes its vertices' normals */" },
		{ "AreaWeighted.Name", "ENormalCalculationMethod::AreaWeighted" },
		{ "AreaWeighted.ToolTip", "Use triangle area to weight how much a triangle's normal contributes its vertices' normals" },
		{ "ModuleRelativePath", "Public/CleaningOps/EditNormalsOp.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"ENormalCalculationMethod",
		"ENormalCalculationMethod",
		Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod()
	{
		if (!Z_Registration_Info_UEnum_ENormalCalculationMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENormalCalculationMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENormalCalculationMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplitNormalMethod;
	static UEnum* ESplitNormalMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplitNormalMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplitNormalMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ESplitNormalMethod"));
		}
		return Z_Registration_Info_UEnum_ESplitNormalMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<ESplitNormalMethod>()
	{
		return ESplitNormalMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enumerators[] = {
		{ "ESplitNormalMethod::UseExistingTopology", (int64)ESplitNormalMethod::UseExistingTopology },
		{ "ESplitNormalMethod::FaceNormalThreshold", (int64)ESplitNormalMethod::FaceNormalThreshold },
		{ "ESplitNormalMethod::FaceGroupID", (int64)ESplitNormalMethod::FaceGroupID },
		{ "ESplitNormalMethod::PerTriangle", (int64)ESplitNormalMethod::PerTriangle },
		{ "ESplitNormalMethod::PerVertex", (int64)ESplitNormalMethod::PerVertex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enum_MetaDataParams[] = {
		{ "FaceGroupID.Comment", "/** Recompute split-normals by grouping faces around each vertex that share a face/polygroup */" },
		{ "FaceGroupID.Name", "ESplitNormalMethod::FaceGroupID" },
		{ "FaceGroupID.ToolTip", "Recompute split-normals by grouping faces around each vertex that share a face/polygroup" },
		{ "FaceNormalThreshold.Comment", "/** Recompute split-normals by grouping faces around each vertex based on an angle threshold */" },
		{ "FaceNormalThreshold.Name", "ESplitNormalMethod::FaceNormalThreshold" },
		{ "FaceNormalThreshold.ToolTip", "Recompute split-normals by grouping faces around each vertex based on an angle threshold" },
		{ "ModuleRelativePath", "Public/CleaningOps/EditNormalsOp.h" },
		{ "PerTriangle.Comment", "/** Set each triangle-vertex to have the face normal of that triangle's plane */" },
		{ "PerTriangle.Name", "ESplitNormalMethod::PerTriangle" },
		{ "PerTriangle.ToolTip", "Set each triangle-vertex to have the face normal of that triangle's plane" },
		{ "PerVertex.Comment", "/** Set each vertex to have a fully shared normal, i.e. no split normals  */" },
		{ "PerVertex.Name", "ESplitNormalMethod::PerVertex" },
		{ "PerVertex.ToolTip", "Set each vertex to have a fully shared normal, i.e. no split normals" },
		{ "UseExistingTopology.Comment", "/** Keep the existing split-normals structure on the mesh */" },
		{ "UseExistingTopology.Name", "ESplitNormalMethod::UseExistingTopology" },
		{ "UseExistingTopology.ToolTip", "Keep the existing split-normals structure on the mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"ESplitNormalMethod",
		"ESplitNormalMethod",
		Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod()
	{
		if (!Z_Registration_Info_UEnum_ESplitNormalMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplitNormalMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplitNormalMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h_Statics::EnumInfo[] = {
		{ ENormalCalculationMethod_StaticEnum, TEXT("ENormalCalculationMethod"), &Z_Registration_Info_UEnum_ENormalCalculationMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1825879533U) },
		{ ESplitNormalMethod_StaticEnum, TEXT("ESplitNormalMethod"), &Z_Registration_Info_UEnum_ESplitNormalMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 969121903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h_933020743(TEXT("/Script/ModelingOperators"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_EditNormalsOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
