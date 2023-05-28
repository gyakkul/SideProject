// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CuttingOps/EmbedPolygonsOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmbedPolygonsOp() {}
// Cross Module References
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod();
	UPackage* Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod;
	static UEnum* EEmbeddedPolygonOpMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly(), TEXT("EEmbeddedPolygonOpMethod"));
		}
		return Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.OuterSingleton;
	}
	template<> MODELINGOPERATORSEDITORONLY_API UEnum* StaticEnum<EEmbeddedPolygonOpMethod>()
	{
		return EEmbeddedPolygonOpMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enumerators[] = {
		{ "EEmbeddedPolygonOpMethod::TrimOutside", (int64)EEmbeddedPolygonOpMethod::TrimOutside },
		{ "EEmbeddedPolygonOpMethod::TrimInside", (int64)EEmbeddedPolygonOpMethod::TrimInside },
		{ "EEmbeddedPolygonOpMethod::InsertPolygon", (int64)EEmbeddedPolygonOpMethod::InsertPolygon },
		{ "EEmbeddedPolygonOpMethod::CutThrough", (int64)EEmbeddedPolygonOpMethod::CutThrough },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enum_MetaDataParams[] = {
		{ "CutThrough.Name", "EEmbeddedPolygonOpMethod::CutThrough" },
		{ "InsertPolygon.Name", "EEmbeddedPolygonOpMethod::InsertPolygon" },
		{ "ModuleRelativePath", "Public/CuttingOps/EmbedPolygonsOp.h" },
		{ "TrimInside.Name", "EEmbeddedPolygonOpMethod::TrimInside" },
		{ "TrimOutside.Name", "EEmbeddedPolygonOpMethod::TrimOutside" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperatorsEditorOnly,
		nullptr,
		"EEmbeddedPolygonOpMethod",
		"EEmbeddedPolygonOpMethod",
		Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod()
	{
		if (!Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperatorsEditorOnly_EEmbeddedPolygonOpMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h_Statics::EnumInfo[] = {
		{ EEmbeddedPolygonOpMethod_StaticEnum, TEXT("EEmbeddedPolygonOpMethod"), &Z_Registration_Info_UEnum_EEmbeddedPolygonOpMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3837643446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h_3458110773(TEXT("/Script/ModelingOperatorsEditorOnly"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperatorsEditorOnly_Public_CuttingOps_EmbedPolygonsOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
