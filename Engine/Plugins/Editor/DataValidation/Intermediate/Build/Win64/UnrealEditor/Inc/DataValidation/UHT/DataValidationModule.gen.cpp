// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataValidationModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataValidationModule() {}
// Cross Module References
	DATAVALIDATION_API UEnum* Z_Construct_UEnum_DataValidation_EDataValidationUsecase();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataValidationUsecase;
	static UEnum* EDataValidationUsecase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataValidation_EDataValidationUsecase, (UObject*)Z_Construct_UPackage__Script_DataValidation(), TEXT("EDataValidationUsecase"));
		}
		return Z_Registration_Info_UEnum_EDataValidationUsecase.OuterSingleton;
	}
	template<> DATAVALIDATION_API UEnum* StaticEnum<EDataValidationUsecase>()
	{
		return EDataValidationUsecase_StaticEnum();
	}
	struct Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enumerators[] = {
		{ "EDataValidationUsecase::None", (int64)EDataValidationUsecase::None },
		{ "EDataValidationUsecase::Manual", (int64)EDataValidationUsecase::Manual },
		{ "EDataValidationUsecase::Commandlet", (int64)EDataValidationUsecase::Commandlet },
		{ "EDataValidationUsecase::Save", (int64)EDataValidationUsecase::Save },
		{ "EDataValidationUsecase::PreSubmit", (int64)EDataValidationUsecase::PreSubmit },
		{ "EDataValidationUsecase::Script", (int64)EDataValidationUsecase::Script },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Commandlet.Comment", "/** A commandlet invoked the validation */" },
		{ "Commandlet.Name", "EDataValidationUsecase::Commandlet" },
		{ "Commandlet.ToolTip", "A commandlet invoked the validation" },
		{ "Manual.Comment", "/** Triggered on user's demand */" },
		{ "Manual.Name", "EDataValidationUsecase::Manual" },
		{ "Manual.ToolTip", "Triggered on user's demand" },
		{ "ModuleRelativePath", "Public/DataValidationModule.h" },
		{ "None.Comment", "/** No usecase specified */" },
		{ "None.Name", "EDataValidationUsecase::None" },
		{ "None.ToolTip", "No usecase specified" },
		{ "PreSubmit.Comment", "/** Submit dialog triggered the validation */" },
		{ "PreSubmit.Name", "EDataValidationUsecase::PreSubmit" },
		{ "PreSubmit.ToolTip", "Submit dialog triggered the validation" },
		{ "Save.Comment", "/** Saving a package triggered the validation */" },
		{ "Save.Name", "EDataValidationUsecase::Save" },
		{ "Save.ToolTip", "Saving a package triggered the validation" },
		{ "Script.Comment", "/** Triggered by blueprint or c++ */" },
		{ "Script.Name", "EDataValidationUsecase::Script" },
		{ "Script.ToolTip", "Triggered by blueprint or c++" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataValidation,
		nullptr,
		"EDataValidationUsecase",
		"EDataValidationUsecase",
		Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataValidation_EDataValidationUsecase()
	{
		if (!Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton, Z_Construct_UEnum_DataValidation_EDataValidationUsecase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataValidationUsecase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h_Statics::EnumInfo[] = {
		{ EDataValidationUsecase_StaticEnum, TEXT("EDataValidationUsecase"), &Z_Registration_Info_UEnum_EDataValidationUsecase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 200140848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h_4034998070(TEXT("/Script/DataValidation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationModule_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
