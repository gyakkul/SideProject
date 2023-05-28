// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParameterizationOps/CalculateTangentsOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCalculateTangentsOp() {}
// Cross Module References
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType();
	UPackage* Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshTangentsType;
	static UEnum* EMeshTangentsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshTangentsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshTangentsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType, (UObject*)Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly(), TEXT("EMeshTangentsType"));
		}
		return Z_Registration_Info_UEnum_EMeshTangentsType.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<EMeshTangentsType>()
	{
		return EMeshTangentsType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enumerators[] = {
		{ "EMeshTangentsType::MikkTSpace", (int64)EMeshTangentsType::MikkTSpace },
		{ "EMeshTangentsType::FastMikkTSpace", (int64)EMeshTangentsType::FastMikkTSpace },
		{ "EMeshTangentsType::PerTriangle", (int64)EMeshTangentsType::PerTriangle },
		{ "EMeshTangentsType::CopyExisting", (int64)EMeshTangentsType::CopyExisting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enum_MetaDataParams[] = {
		{ "CopyExisting.Comment", "/** Use existing source mesh tangents */" },
		{ "CopyExisting.Name", "EMeshTangentsType::CopyExisting" },
		{ "CopyExisting.ToolTip", "Use existing source mesh tangents" },
		{ "FastMikkTSpace.Comment", "/** MikkTSpace-like blended per-triangle tangents, with the blending being based on existing mesh, normals, and UV topology */" },
		{ "FastMikkTSpace.Name", "EMeshTangentsType::FastMikkTSpace" },
		{ "FastMikkTSpace.ToolTip", "MikkTSpace-like blended per-triangle tangents, with the blending being based on existing mesh, normals, and UV topology" },
		{ "MikkTSpace.Comment", "/** Standard MikkTSpace tangent calculation */" },
		{ "MikkTSpace.Name", "EMeshTangentsType::MikkTSpace" },
		{ "MikkTSpace.ToolTip", "Standard MikkTSpace tangent calculation" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/CalculateTangentsOp.h" },
		{ "PerTriangle.Comment", "/** Project per-triangle tangents onto normals */" },
		{ "PerTriangle.Name", "EMeshTangentsType::PerTriangle" },
		{ "PerTriangle.ToolTip", "Project per-triangle tangents onto normals" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
		nullptr,
		"EMeshTangentsType",
		"EMeshTangentsType",
		Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType()
	{
		if (!Z_Registration_Info_UEnum_EMeshTangentsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshTangentsType.InnerSingleton, Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshTangentsType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h_Statics::EnumInfo[] = {
		{ EMeshTangentsType_StaticEnum, TEXT("EMeshTangentsType"), &Z_Registration_Info_UEnum_EMeshTangentsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 166892232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h_1341140273(TEXT("/Script/ModelingOperatorsEditorOnly"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_ParameterizationOps_CalculateTangentsOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
