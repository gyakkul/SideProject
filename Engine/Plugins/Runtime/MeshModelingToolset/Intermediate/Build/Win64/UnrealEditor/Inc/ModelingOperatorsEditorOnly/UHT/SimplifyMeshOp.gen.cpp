// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleaningOps/SimplifyMeshOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplifyMeshOp() {}
// Cross Module References
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType();
	UPackage* Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimplifyTargetType;
	static UEnum* ESimplifyTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimplifyTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimplifyTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType, (UObject*)Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly(), TEXT("ESimplifyTargetType"));
		}
		return Z_Registration_Info_UEnum_ESimplifyTargetType.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<ESimplifyTargetType>()
	{
		return ESimplifyTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enumerators[] = {
		{ "ESimplifyTargetType::Percentage", (int64)ESimplifyTargetType::Percentage },
		{ "ESimplifyTargetType::TriangleCount", (int64)ESimplifyTargetType::TriangleCount },
		{ "ESimplifyTargetType::VertexCount", (int64)ESimplifyTargetType::VertexCount },
		{ "ESimplifyTargetType::EdgeLength", (int64)ESimplifyTargetType::EdgeLength },
		{ "ESimplifyTargetType::MinimalPlanar", (int64)ESimplifyTargetType::MinimalPlanar },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enum_MetaDataParams[] = {
		{ "EdgeLength.Comment", "/** Target edge length */" },
		{ "EdgeLength.DisplayName", "Edge Length" },
		{ "EdgeLength.Name", "ESimplifyTargetType::EdgeLength" },
		{ "EdgeLength.ToolTip", "Target edge length" },
		{ "MinimalPlanar.Comment", "/** Apply all allowable edge collapses that do not change the shape */" },
		{ "MinimalPlanar.Hidden", "" },
		{ "MinimalPlanar.Name", "ESimplifyTargetType::MinimalPlanar" },
		{ "MinimalPlanar.ToolTip", "Apply all allowable edge collapses that do not change the shape" },
		{ "ModuleRelativePath", "Public/CleaningOps/SimplifyMeshOp.h" },
		{ "Percentage.Comment", "/** Percentage of input triangles */" },
		{ "Percentage.DisplayName", "Percentage" },
		{ "Percentage.Name", "ESimplifyTargetType::Percentage" },
		{ "Percentage.ToolTip", "Percentage of input triangles" },
		{ "TriangleCount.Comment", "/** Target triangle count */" },
		{ "TriangleCount.DisplayName", "Triangle Count" },
		{ "TriangleCount.Name", "ESimplifyTargetType::TriangleCount" },
		{ "TriangleCount.ToolTip", "Target triangle count" },
		{ "VertexCount.Comment", "/** Target vertex count */" },
		{ "VertexCount.DisplayName", "Vertex Count" },
		{ "VertexCount.Name", "ESimplifyTargetType::VertexCount" },
		{ "VertexCount.ToolTip", "Target vertex count" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
		nullptr,
		"ESimplifyTargetType",
		"ESimplifyTargetType",
		Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType()
	{
		if (!Z_Registration_Info_UEnum_ESimplifyTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimplifyTargetType.InnerSingleton, Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimplifyTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimplifyType;
	static UEnum* ESimplifyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimplifyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimplifyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType, (UObject*)Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly(), TEXT("ESimplifyType"));
		}
		return Z_Registration_Info_UEnum_ESimplifyType.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<ESimplifyType>()
	{
		return ESimplifyType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enumerators[] = {
		{ "ESimplifyType::QEM", (int64)ESimplifyType::QEM },
		{ "ESimplifyType::Attribute", (int64)ESimplifyType::Attribute },
		{ "ESimplifyType::UEStandard", (int64)ESimplifyType::UEStandard },
		{ "ESimplifyType::MinimalExistingVertex", (int64)ESimplifyType::MinimalExistingVertex },
		{ "ESimplifyType::MinimalPlanar", (int64)ESimplifyType::MinimalPlanar },
		{ "ESimplifyType::MinimalPolygroup", (int64)ESimplifyType::MinimalPolygroup },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Comment", "/** Potentially higher quality. Takes the normal into account. */" },
		{ "Attribute.DisplayName", "Normal Aware" },
		{ "Attribute.Name", "ESimplifyType::Attribute" },
		{ "Attribute.ToolTip", "Potentially higher quality. Takes the normal into account." },
		{ "MinimalExistingVertex.Comment", "/** Edge collapse to existing vertices only.  Quality may suffer.*/" },
		{ "MinimalExistingVertex.DisplayName", "Existing Positions" },
		{ "MinimalExistingVertex.Name", "ESimplifyType::MinimalExistingVertex" },
		{ "MinimalExistingVertex.ToolTip", "Edge collapse to existing vertices only.  Quality may suffer." },
		{ "MinimalPlanar.Comment", "/** Collapse any spurious edges but do not change the 3D shape. */" },
		{ "MinimalPlanar.DisplayName", "Minimal Shape-Preserving" },
		{ "MinimalPlanar.Name", "ESimplifyType::MinimalPlanar" },
		{ "MinimalPlanar.ToolTip", "Collapse any spurious edges but do not change the 3D shape." },
		{ "MinimalPolygroup.Comment", "/** Only preserve polygroup boundaries; ignore all other shape features */" },
		{ "MinimalPolygroup.DisplayName", "Minimal Polygroup-Preserving" },
		{ "MinimalPolygroup.Name", "ESimplifyType::MinimalPolygroup" },
		{ "MinimalPolygroup.ToolTip", "Only preserve polygroup boundaries; ignore all other shape features" },
		{ "ModuleRelativePath", "Public/CleaningOps/SimplifyMeshOp.h" },
		{ "QEM.Comment", "/** Fastest. Standard quadric error metric.*/" },
		{ "QEM.DisplayName", "QEM" },
		{ "QEM.Name", "ESimplifyType::QEM" },
		{ "QEM.ToolTip", "Fastest. Standard quadric error metric." },
		{ "UEStandard.Comment", "/** Highest quality reduction. */" },
		{ "UEStandard.DisplayName", "UE Standard" },
		{ "UEStandard.Name", "ESimplifyType::UEStandard" },
		{ "UEStandard.ToolTip", "Highest quality reduction." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
		nullptr,
		"ESimplifyType",
		"ESimplifyType",
		Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType()
	{
		if (!Z_Registration_Info_UEnum_ESimplifyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimplifyType.InnerSingleton, Z_Construct_UEnum_ModelingOperatorsEditorOnly_ESimplifyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimplifyType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h_Statics::EnumInfo[] = {
		{ ESimplifyTargetType_StaticEnum, TEXT("ESimplifyTargetType"), &Z_Registration_Info_UEnum_ESimplifyTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 303187214U) },
		{ ESimplifyType_StaticEnum, TEXT("ESimplifyType"), &Z_Registration_Info_UEnum_ESimplifyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3173694660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h_3623544262(TEXT("/Script/ModelingOperatorsEditorOnly"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CleaningOps_SimplifyMeshOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
