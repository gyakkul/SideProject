// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CleaningOps/RemeshMeshOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshMeshOp() {}
// Cross Module References
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshType();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemeshType;
	static UEnum* ERemeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERemeshType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERemeshType"));
		}
		return Z_Registration_Info_UEnum_ERemeshType.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERemeshType>()
	{
		return ERemeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enumerators[] = {
		{ "ERemeshType::Standard", (int64)ERemeshType::Standard },
		{ "ERemeshType::FullPass", (int64)ERemeshType::FullPass },
		{ "ERemeshType::NormalFlow", (int64)ERemeshType::NormalFlow },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Remeshing modes */" },
		{ "FullPass.Comment", "/** Multiple full passes over the entire mesh */" },
		{ "FullPass.DisplayName", "Full Pass" },
		{ "FullPass.Name", "ERemeshType::FullPass" },
		{ "FullPass.ToolTip", "Multiple full passes over the entire mesh" },
		{ "ModuleRelativePath", "Public/CleaningOps/RemeshMeshOp.h" },
		{ "NormalFlow.Comment", "/** One pass over the entire mesh, then remesh only changed edges. Use Normal flow to align triangles with input.*/" },
		{ "NormalFlow.DisplayName", "Normal Flow" },
		{ "NormalFlow.Name", "ERemeshType::NormalFlow" },
		{ "NormalFlow.ToolTip", "One pass over the entire mesh, then remesh only changed edges. Use Normal flow to align triangles with input." },
		{ "Standard.Comment", "/** One pass over the entire mesh, then remesh only changed edges */" },
		{ "Standard.DisplayName", "Standard" },
		{ "Standard.Name", "ERemeshType::Standard" },
		{ "Standard.ToolTip", "One pass over the entire mesh, then remesh only changed edges" },
		{ "ToolTip", "Remeshing modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"ERemeshType",
		"ERemeshType",
		Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshType()
	{
		if (!Z_Registration_Info_UEnum_ERemeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemeshType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERemeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemeshType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemeshSmoothingType;
	static UEnum* ERemeshSmoothingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemeshSmoothingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemeshSmoothingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ERemeshSmoothingType"));
		}
		return Z_Registration_Info_UEnum_ERemeshSmoothingType.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<ERemeshSmoothingType>()
	{
		return ERemeshSmoothingType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enumerators[] = {
		{ "ERemeshSmoothingType::Uniform", (int64)ERemeshSmoothingType::Uniform },
		{ "ERemeshSmoothingType::Cotangent", (int64)ERemeshSmoothingType::Cotangent },
		{ "ERemeshSmoothingType::MeanValue", (int64)ERemeshSmoothingType::MeanValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Smoothing modes */" },
		{ "Cotangent.Comment", "/** Cotangent Smoothing */" },
		{ "Cotangent.DisplayName", "Shape Preserving" },
		{ "Cotangent.Name", "ERemeshSmoothingType::Cotangent" },
		{ "Cotangent.ToolTip", "Cotangent Smoothing" },
		{ "MeanValue.Comment", "/** Mean Value Smoothing */" },
		{ "MeanValue.DisplayName", "Mixed" },
		{ "MeanValue.Name", "ERemeshSmoothingType::MeanValue" },
		{ "MeanValue.ToolTip", "Mean Value Smoothing" },
		{ "ModuleRelativePath", "Public/CleaningOps/RemeshMeshOp.h" },
		{ "ToolTip", "Smoothing modes" },
		{ "Uniform.Comment", "/** Uniform Smoothing */" },
		{ "Uniform.DisplayName", "Uniform" },
		{ "Uniform.Name", "ERemeshSmoothingType::Uniform" },
		{ "Uniform.ToolTip", "Uniform Smoothing" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"ERemeshSmoothingType",
		"ERemeshSmoothingType",
		Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType()
	{
		if (!Z_Registration_Info_UEnum_ERemeshSmoothingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemeshSmoothingType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemeshSmoothingType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h_Statics::EnumInfo[] = {
		{ ERemeshType_StaticEnum, TEXT("ERemeshType"), &Z_Registration_Info_UEnum_ERemeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3337077985U) },
		{ ERemeshSmoothingType_StaticEnum, TEXT("ERemeshSmoothingType"), &Z_Registration_Info_UEnum_ERemeshSmoothingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2861688910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h_3539522935(TEXT("/Script/ModelingOperators"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_RemeshMeshOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
