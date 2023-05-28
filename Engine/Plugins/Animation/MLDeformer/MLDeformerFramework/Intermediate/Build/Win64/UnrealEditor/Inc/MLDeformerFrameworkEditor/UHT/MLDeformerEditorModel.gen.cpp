// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerEditorModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerEditorModel() {}
// Cross Module References
	MLDEFORMERFRAMEWORKEDITOR_API UEnum* Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFrameworkEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrainingResult;
	static UEnum* ETrainingResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrainingResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrainingResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult, (UObject*)Z_Construct_UPackage__Script_MLDeformerFrameworkEditor(), TEXT("ETrainingResult"));
		}
		return Z_Registration_Info_UEnum_ETrainingResult.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORKEDITOR_API UEnum* StaticEnum<ETrainingResult>()
	{
		return ETrainingResult_StaticEnum();
	}
	struct Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enumerators[] = {
		{ "ETrainingResult::Success", (int64)ETrainingResult::Success },
		{ "ETrainingResult::Aborted", (int64)ETrainingResult::Aborted },
		{ "ETrainingResult::AbortedCantUse", (int64)ETrainingResult::AbortedCantUse },
		{ "ETrainingResult::FailOnData", (int64)ETrainingResult::FailOnData },
		{ "ETrainingResult::FailPythonError", (int64)ETrainingResult::FailPythonError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "/** The user has aborted the training process. */" },
		{ "Aborted.Name", "ETrainingResult::Aborted" },
		{ "Aborted.ToolTip", "The user has aborted the training process." },
		{ "AbortedCantUse.Comment", "/** The user has aborted the training process and we can't use the resulting network. */" },
		{ "AbortedCantUse.Name", "ETrainingResult::AbortedCantUse" },
		{ "AbortedCantUse.ToolTip", "The user has aborted the training process and we can't use the resulting network." },
		{ "Comment", "/** Training process return codes. */" },
		{ "FailOnData.Comment", "/** The input or output data to the network has issues, which means we cannot train. */" },
		{ "FailOnData.Name", "ETrainingResult::FailOnData" },
		{ "FailOnData.ToolTip", "The input or output data to the network has issues, which means we cannot train." },
		{ "FailPythonError.Comment", "/** The python script has some error (see output log). Or it's missing some required model training class. */" },
		{ "FailPythonError.Name", "ETrainingResult::FailPythonError" },
		{ "FailPythonError.ToolTip", "The python script has some error (see output log). Or it's missing some required model training class." },
		{ "ModuleRelativePath", "Public/MLDeformerEditorModel.h" },
		{ "Success.Comment", "/** The training successfully finished. */" },
		{ "Success.Name", "ETrainingResult::Success" },
		{ "Success.ToolTip", "The training successfully finished." },
		{ "ToolTip", "Training process return codes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLDeformerFrameworkEditor,
		nullptr,
		"ETrainingResult",
		"ETrainingResult",
		Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult()
	{
		if (!Z_Registration_Info_UEnum_ETrainingResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrainingResult.InnerSingleton, Z_Construct_UEnum_MLDeformerFrameworkEditor_ETrainingResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrainingResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h_Statics::EnumInfo[] = {
		{ ETrainingResult_StaticEnum, TEXT("ETrainingResult"), &Z_Registration_Info_UEnum_ETrainingResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 260302193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h_4224091362(TEXT("/Script/MLDeformerFrameworkEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFrameworkEditor_Public_MLDeformerEditorModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
