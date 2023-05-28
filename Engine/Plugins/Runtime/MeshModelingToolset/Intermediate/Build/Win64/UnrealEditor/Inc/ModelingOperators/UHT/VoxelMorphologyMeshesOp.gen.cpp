// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositionOps/VoxelMorphologyMeshesOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMorphologyMeshesOp() {}
// Cross Module References
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EMorphologyOperation();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMorphologyOperation;
	static UEnum* EMorphologyOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMorphologyOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMorphologyOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EMorphologyOperation, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EMorphologyOperation"));
		}
		return Z_Registration_Info_UEnum_EMorphologyOperation.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EMorphologyOperation>()
	{
		return EMorphologyOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enumerators[] = {
		{ "EMorphologyOperation::Dilate", (int64)EMorphologyOperation::Dilate },
		{ "EMorphologyOperation::Contract", (int64)EMorphologyOperation::Contract },
		{ "EMorphologyOperation::Close", (int64)EMorphologyOperation::Close },
		{ "EMorphologyOperation::Open", (int64)EMorphologyOperation::Open },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enum_MetaDataParams[] = {
		{ "Close.Comment", "/** Dilate and then contract, to delete small negative features (sharp inner corners, small holes) */" },
		{ "Close.Name", "EMorphologyOperation::Close" },
		{ "Close.ToolTip", "Dilate and then contract, to delete small negative features (sharp inner corners, small holes)" },
		{ "Comment", "/** Morphology operation types */" },
		{ "Contract.Comment", "/** Shrink the shapes inward */" },
		{ "Contract.Name", "EMorphologyOperation::Contract" },
		{ "Contract.ToolTip", "Shrink the shapes inward" },
		{ "Dilate.Comment", "/** Expand the shapes outward */" },
		{ "Dilate.Name", "EMorphologyOperation::Dilate" },
		{ "Dilate.ToolTip", "Expand the shapes outward" },
		{ "ModuleRelativePath", "Public/CompositionOps/VoxelMorphologyMeshesOp.h" },
		{ "Open.Comment", "/** Contract and then dilate, to delete small positive features (sharp outer corners, small isolated pieces) */" },
		{ "Open.Name", "EMorphologyOperation::Open" },
		{ "Open.ToolTip", "Contract and then dilate, to delete small positive features (sharp outer corners, small isolated pieces)" },
		{ "ToolTip", "Morphology operation types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EMorphologyOperation",
		"EMorphologyOperation",
		Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EMorphologyOperation()
	{
		if (!Z_Registration_Info_UEnum_EMorphologyOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMorphologyOperation.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EMorphologyOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMorphologyOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h_Statics::EnumInfo[] = {
		{ EMorphologyOperation_StaticEnum, TEXT("EMorphologyOperation"), &Z_Registration_Info_UEnum_EMorphologyOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3031386585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h_985992573(TEXT("/Script/ModelingOperators"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_VoxelMorphologyMeshesOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
