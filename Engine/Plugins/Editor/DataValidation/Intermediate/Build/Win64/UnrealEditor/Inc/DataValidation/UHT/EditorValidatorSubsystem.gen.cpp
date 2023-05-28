// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorValidatorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidatorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EDataValidationResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationSettings();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationSettings_NoRegister();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase_NoRegister();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorSubsystem();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorSubsystem_NoRegister();
	DATAVALIDATION_API UEnum* Z_Construct_UEnum_DataValidation_EDataValidationUsecase();
	DATAVALIDATION_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAssetsResults();
	DATAVALIDATION_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAssetsSettings();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValidateAssetsResults;
class UScriptStruct* FValidateAssetsResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValidateAssetsResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValidateAssetsResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateAssetsResults, (UObject*)Z_Construct_UPackage__Script_DataValidation(), TEXT("ValidateAssetsResults"));
	}
	return Z_Registration_Info_UScriptStruct_ValidateAssetsResults.OuterSingleton;
}
template<> DATAVALIDATION_API UScriptStruct* StaticStruct<FValidateAssetsResults>()
{
	return FValidateAssetsResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FValidateAssetsResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumChecked_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumChecked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumValid_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInvalid_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSkipped_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSkipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWarnings_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumWarnings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUnableToValidate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumUnableToValidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateAssetsResults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumChecked_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of tested assets */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of tested assets" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumChecked = { "NumChecked", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumChecked), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumChecked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumChecked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumValid_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of assets without errors or warnings */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of assets without errors or warnings" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumValid = { "NumValid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumValid), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumInvalid_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of assets with errors */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of assets with errors" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumInvalid = { "NumInvalid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumInvalid), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumInvalid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumInvalid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumSkipped_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of assets skipped */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of assets skipped" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumSkipped = { "NumSkipped", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumSkipped), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumSkipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumSkipped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumWarnings_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of assets with warnings */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of assets with warnings" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumWarnings = { "NumWarnings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumWarnings), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumWarnings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumUnableToValidate_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** Amount of assets that could not be validated */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Amount of assets that could not be validated" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumUnableToValidate = { "NumUnableToValidate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsResults, NumUnableToValidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumUnableToValidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumUnableToValidate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumSkipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewProp_NumUnableToValidate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
		nullptr,
		&NewStructOps,
		"ValidateAssetsResults",
		sizeof(FValidateAssetsResults),
		alignof(FValidateAssetsResults),
		Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValidateAssetsResults()
	{
		if (!Z_Registration_Info_UScriptStruct_ValidateAssetsResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValidateAssetsResults.InnerSingleton, Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ValidateAssetsResults.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ValidateAssetsSettings;
class UScriptStruct* FValidateAssetsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateAssetsSettings, (UObject*)Z_Construct_UPackage__Script_DataValidation(), TEXT("ValidateAssetsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.OuterSingleton;
}
template<> DATAVALIDATION_API UScriptStruct* StaticStruct<FValidateAssetsSettings>()
{
	return FValidateAssetsSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipExcludedDirectories_MetaData[];
#endif
		static void NewProp_bSkipExcludedDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipExcludedDirectories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowIfNoFailures_MetaData[];
#endif
		static void NewProp_bShowIfNoFailures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowIfNoFailures;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidationUsecase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationUsecase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValidationUsecase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateAssetsSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** If true, will not validate files in excluded directories */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "If true, will not validate files in excluded directories" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories_SetBit(void* Obj)
	{
		((FValidateAssetsSettings*)Obj)->bSkipExcludedDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories = { "bSkipExcludedDirectories", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FValidateAssetsSettings), &Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** If true, will add notifications for files with no validation and display even if everything passes */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "If true, will add notifications for files with no validation and display even if everything passes" },
	};
#endif
	void Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures_SetBit(void* Obj)
	{
		((FValidateAssetsSettings*)Obj)->bShowIfNoFailures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures = { "bShowIfNoFailures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FValidateAssetsSettings), &Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** The usecase requiring datavalidation */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "The usecase requiring datavalidation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase = { "ValidationUsecase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FValidateAssetsSettings, ValidationUsecase), Z_Construct_UEnum_DataValidation_EDataValidationUsecase, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase_MetaData)) }; // 200140848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bSkipExcludedDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_bShowIfNoFailures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewProp_ValidationUsecase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
		nullptr,
		&NewStructOps,
		"ValidateAssetsSettings",
		sizeof(FValidateAssetsSettings),
		alignof(FValidateAssetsSettings),
		Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValidateAssetsSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.InnerSingleton, Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ValidateAssetsSettings.InnerSingleton;
	}
	void UDataValidationSettings::StaticRegisterNativesUDataValidationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataValidationSettings);
	UClass* Z_Construct_UClass_UDataValidationSettings_NoRegister()
	{
		return UDataValidationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDataValidationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateOnSave_MetaData[];
#endif
		static void NewProp_bValidateOnSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateOnSave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataValidationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataValidationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for Data Validation \n*/" },
		{ "IncludePath", "EditorValidatorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Implements the settings for Data Validation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave_MetaData[] = {
		{ "Category", "Validation Scenarios" },
		{ "Comment", "/** Whether or not to validate assets on save */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Whether or not to validate assets on save" },
	};
#endif
	void Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave_SetBit(void* Obj)
	{
		((UDataValidationSettings*)Obj)->bValidateOnSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave = { "bValidateOnSave", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataValidationSettings), &Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataValidationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataValidationSettings_Statics::NewProp_bValidateOnSave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataValidationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataValidationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataValidationSettings_Statics::ClassParams = {
		&UDataValidationSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataValidationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataValidationSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDataValidationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataValidationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataValidationSettings()
	{
		if (!Z_Registration_Info_UClass_UDataValidationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataValidationSettings.OuterSingleton, Z_Construct_UClass_UDataValidationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataValidationSettings.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UDataValidationSettings>()
	{
		return UDataValidationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataValidationSettings);
	UDataValidationSettings::~UDataValidationSettings() {}
	DEFINE_FUNCTION(UEditorValidatorSubsystem::execValidateAssets)
	{
		P_GET_TARRAY(FAssetData,Z_Param_AssetDataList);
		P_GET_UBOOL(Z_Param_bSkipExcludedDirectories);
		P_GET_UBOOL(Z_Param_bShowIfNoFailures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ValidateAssets(Z_Param_AssetDataList,Z_Param_bSkipExcludedDirectories,Z_Param_bShowIfNoFailures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorSubsystem::execValidateAssetsWithSettings)
	{
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataList);
		P_GET_STRUCT_REF(FValidateAssetsSettings,Z_Param_Out_InSettings);
		P_GET_STRUCT_REF(FValidateAssetsResults,Z_Param_Out_OutResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ValidateAssetsWithSettings(Z_Param_Out_AssetDataList,Z_Param_Out_InSettings,Z_Param_Out_OutResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorSubsystem::execIsAssetValid)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationErrors);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationWarnings);
		P_GET_ENUM(EDataValidationUsecase,Z_Param_InValidationUsecase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataValidationResult*)Z_Param__Result=P_THIS->IsAssetValid(Z_Param_Out_AssetData,Z_Param_Out_ValidationErrors,Z_Param_Out_ValidationWarnings,EDataValidationUsecase(Z_Param_InValidationUsecase));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorSubsystem::execIsObjectValid)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationErrors);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationWarnings);
		P_GET_ENUM(EDataValidationUsecase,Z_Param_InValidationUsecase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDataValidationResult*)Z_Param__Result=P_THIS->IsObjectValid(Z_Param_InObject,Z_Param_Out_ValidationErrors,Z_Param_Out_ValidationWarnings,EDataValidationUsecase(Z_Param_InValidationUsecase));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorValidatorSubsystem::execAddValidator)
	{
		P_GET_OBJECT(UEditorValidatorBase,Z_Param_InValidator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddValidator(Z_Param_InValidator);
		P_NATIVE_END;
	}
	void UEditorValidatorSubsystem::StaticRegisterNativesUEditorValidatorSubsystem()
	{
		UClass* Class = UEditorValidatorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddValidator", &UEditorValidatorSubsystem::execAddValidator },
			{ "IsAssetValid", &UEditorValidatorSubsystem::execIsAssetValid },
			{ "IsObjectValid", &UEditorValidatorSubsystem::execIsObjectValid },
			{ "ValidateAssets", &UEditorValidatorSubsystem::execValidateAssets },
			{ "ValidateAssetsWithSettings", &UEditorValidatorSubsystem::execValidateAssetsWithSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics
	{
		struct EditorValidatorSubsystem_eventAddValidator_Parms
		{
			UEditorValidatorBase* InValidator;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValidator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::NewProp_InValidator = { "InValidator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventAddValidator_Parms, InValidator), Z_Construct_UClass_UEditorValidatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::NewProp_InValidator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::Function_MetaDataParams[] = {
		{ "Category", "Validation" },
		{ "Comment", "/*\n\x09* Adds a validator to the list, making sure it is a unique instance\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "* Adds a validator to the list, making sure it is a unique instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorSubsystem, nullptr, "AddValidator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::EditorValidatorSubsystem_eventAddValidator_Parms), Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorValidatorSubsystem_eventIsAssetValid_Parms
		{
			FAssetData AssetData;
			TArray<FText> ValidationErrors;
			TArray<FText> ValidationWarnings;
			EDataValidationUsecase InValidationUsecase;
			EDataValidationResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationErrors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationErrors;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationWarnings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationWarnings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValidationUsecase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValidationUsecase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValidationUsecase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsAssetValid_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_AssetData_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationErrors_Inner = { "ValidationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationErrors = { "ValidationErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsAssetValid_Parms, ValidationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationWarnings_Inner = { "ValidationWarnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationWarnings = { "ValidationWarnings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsAssetValid_Parms, ValidationWarnings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase = { "InValidationUsecase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsAssetValid_Parms, InValidationUsecase), Z_Construct_UEnum_DataValidation_EDataValidationUsecase, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase_MetaData)) }; // 200140848
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsAssetValid_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EDataValidationResult, METADATA_PARAMS(nullptr, 0) }; // 2608798874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_AssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationWarnings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ValidationWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_InValidationUsecase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "Comment", "/**\n\x09 * @return Returns Valid if the object pointed to by AssetData contains valid data; returns Invalid if the object contains invalid data or does not exist; returns NotValidated if no validations was performed on the object\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "@return Returns Valid if the object pointed to by AssetData contains valid data; returns Invalid if the object contains invalid data or does not exist; returns NotValidated if no validations was performed on the object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorSubsystem, nullptr, "IsAssetValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::EditorValidatorSubsystem_eventIsAssetValid_Parms), Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics
	{
		struct EditorValidatorSubsystem_eventIsObjectValid_Parms
		{
			UObject* InObject;
			TArray<FText> ValidationErrors;
			TArray<FText> ValidationWarnings;
			EDataValidationUsecase InValidationUsecase;
			EDataValidationResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationErrors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationErrors;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationWarnings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationWarnings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InValidationUsecase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValidationUsecase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InValidationUsecase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsObjectValid_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationErrors_Inner = { "ValidationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationErrors = { "ValidationErrors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsObjectValid_Parms, ValidationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationWarnings_Inner = { "ValidationWarnings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationWarnings = { "ValidationWarnings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsObjectValid_Parms, ValidationWarnings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase = { "InValidationUsecase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsObjectValid_Parms, InValidationUsecase), Z_Construct_UEnum_DataValidation_EDataValidationUsecase, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase_MetaData)) }; // 200140848
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventIsObjectValid_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EDataValidationResult, METADATA_PARAMS(nullptr, 0) }; // 2608798874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationErrors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationErrors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationWarnings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ValidationWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_InValidationUsecase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "Comment", "/**\n\x09 * @return Returns Valid if the object contains valid data; returns Invalid if the object contains invalid data; returns NotValidated if no validations was performed on the object\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "@return Returns Valid if the object contains valid data; returns Invalid if the object contains invalid data; returns NotValidated if no validations was performed on the object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorSubsystem, nullptr, "IsObjectValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::EditorValidatorSubsystem_eventIsObjectValid_Parms), Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorValidatorSubsystem_eventValidateAssets_Parms
		{
			TArray<FAssetData> AssetDataList;
			bool bSkipExcludedDirectories;
			bool bShowIfNoFailures;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
		static void NewProp_bSkipExcludedDirectories_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipExcludedDirectories;
		static void NewProp_bShowIfNoFailures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowIfNoFailures;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssets_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bSkipExcludedDirectories_SetBit(void* Obj)
	{
		((EditorValidatorSubsystem_eventValidateAssets_Parms*)Obj)->bSkipExcludedDirectories = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bSkipExcludedDirectories = { "bSkipExcludedDirectories", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorValidatorSubsystem_eventValidateAssets_Parms), &Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bSkipExcludedDirectories_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bShowIfNoFailures_SetBit(void* Obj)
	{
		((EditorValidatorSubsystem_eventValidateAssets_Parms*)Obj)->bShowIfNoFailures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bShowIfNoFailures = { "bShowIfNoFailures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorValidatorSubsystem_eventValidateAssets_Parms), &Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bShowIfNoFailures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_AssetDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_AssetDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bSkipExcludedDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_bShowIfNoFailures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "CPP_Default_bShowIfNoFailures", "true" },
		{ "CPP_Default_bSkipExcludedDirectories", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ValidateAssetsWithSettings instead" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorSubsystem, nullptr, "ValidateAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::EditorValidatorSubsystem_eventValidateAssets_Parms), Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms
		{
			TArray<FAssetData> AssetDataList;
			FValidateAssetsSettings InSettings;
			FValidateAssetsResults OutResults;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetDataList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutResults;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList_Inner = { "AssetDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList = { "AssetDataList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms, AssetDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms, InSettings), Z_Construct_UScriptStruct_FValidateAssetsSettings, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_InSettings_MetaData)) }; // 3671278458
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_OutResults = { "OutResults", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms, OutResults), Z_Construct_UScriptStruct_FValidateAssetsResults, METADATA_PARAMS(nullptr, 0) }; // 4147756113
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_AssetDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_OutResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Asset Validation" },
		{ "Comment", "/**\n\x09 * Called to validate assets from either the UI or a commandlet\n\x09 * @param InSettings Structure passing context and settings for ValidateAssetsWithSettings\n\x09 * @param OutResults More detailed information about the results of the validate assets command\n\x09 * @returns Number of assets with validation failures or warnings\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Called to validate assets from either the UI or a commandlet\n@param InSettings Structure passing context and settings for ValidateAssetsWithSettings\n@param OutResults More detailed information about the results of the validate assets command\n@returns Number of assets with validation failures or warnings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorValidatorSubsystem, nullptr, "ValidateAssetsWithSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::EditorValidatorSubsystem_eventValidateAssetsWithSettings_Parms), Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidatorSubsystem);
	UClass* Z_Construct_UClass_UEditorValidatorSubsystem_NoRegister()
	{
		return UEditorValidatorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedDirectories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedDirectories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedDirectories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateOnSave_MetaData[];
#endif
		static void NewProp_bValidateOnSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateOnSave;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Validators_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Validators_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Validators_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Validators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidateAssetsWhileSavingForCook_MetaData[];
#endif
		static void NewProp_bValidateAssetsWhileSavingForCook_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateAssetsWhileSavingForCook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBlueprintValidators_MetaData[];
#endif
		static void NewProp_bAllowBlueprintValidators_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintValidators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidatorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorValidatorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorValidatorSubsystem_AddValidator, "AddValidator" }, // 3874347576
		{ &Z_Construct_UFunction_UEditorValidatorSubsystem_IsAssetValid, "IsAssetValid" }, // 4238544855
		{ &Z_Construct_UFunction_UEditorValidatorSubsystem_IsObjectValid, "IsObjectValid" }, // 817138526
		{ &Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssets, "ValidateAssets" }, // 700680553
		{ &Z_Construct_UFunction_UEditorValidatorSubsystem_ValidateAssetsWithSettings, "ValidateAssetsWithSettings" }, // 807084057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorValidatorSubsystem manages all the asset validation in the engine. \n * The first validation handled is UObject::IsDataValid and its overridden functions.\n * Those validations require custom classes and are most suited to project-specific\n * classes. The next validation set is of all registered UEditorValidationBases.\n * These validators have a function to determine if they can validate a given asset,\n * and if they are currently enabled. They are good candidates for validating engine\n * classes or very specific project logic.\n */" },
		{ "IncludePath", "EditorValidatorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "UEditorValidatorSubsystem manages all the asset validation in the engine.\nThe first validation handled is UObject::IsDataValid and its overridden functions.\nThose validations require custom classes and are most suited to project-specific\nclasses. The next validation set is of all registered UEditorValidationBases.\nThese validators have a function to determine if they can validate a given asset,\nand if they are currently enabled. They are good candidates for validating engine\nclasses or very specific project logic." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories_Inner = { "ExcludedDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories_MetaData[] = {
		{ "Comment", "/**\n\x09 * Directories to ignore for data validation. Useful for test assets\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Directories to ignore for data validation. Useful for test assets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories = { "ExcludedDirectories", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorValidatorSubsystem, ExcludedDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether it should validate assets on save inside the editor\n\x09 */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use bValidateOnSave on UDataValidationSettings instead." },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Whether it should validate assets on save inside the editor" },
	};
#endif
	void Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave_SetBit(void* Obj)
	{
		((UEditorValidatorSubsystem*)Obj)->bValidateOnSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave = { "bValidateOnSave", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorValidatorSubsystem), &Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_ValueProp = { "Validators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UEditorValidatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_Key_KeyProp = { "Validators_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators = { "Validators", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorValidatorSubsystem, Validators), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook_MetaData[] = {
		{ "Comment", "/** Specifies whether or not to validate assets on save when saving for a cook */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Specifies whether or not to validate assets on save when saving for a cook" },
	};
#endif
	void Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook_SetBit(void* Obj)
	{
		((UEditorValidatorSubsystem*)Obj)->bValidateAssetsWhileSavingForCook = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook = { "bValidateAssetsWhileSavingForCook", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorValidatorSubsystem), &Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators_MetaData[] = {
		{ "Comment", "/** Specifies whether or not to allow Blueprint validators */" },
		{ "ModuleRelativePath", "Public/EditorValidatorSubsystem.h" },
		{ "ToolTip", "Specifies whether or not to allow Blueprint validators" },
	};
#endif
	void Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators_SetBit(void* Obj)
	{
		((UEditorValidatorSubsystem*)Obj)->bAllowBlueprintValidators = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators = { "bAllowBlueprintValidators", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorValidatorSubsystem), &Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorValidatorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_ExcludedDirectories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateOnSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_Validators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bValidateAssetsWhileSavingForCook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorValidatorSubsystem_Statics::NewProp_bAllowBlueprintValidators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidatorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidatorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidatorSubsystem_Statics::ClassParams = {
		&UEditorValidatorSubsystem::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorValidatorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidatorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorValidatorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorValidatorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidatorSubsystem.OuterSingleton, Z_Construct_UClass_UEditorValidatorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidatorSubsystem.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UEditorValidatorSubsystem>()
	{
		return UEditorValidatorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidatorSubsystem);
	UEditorValidatorSubsystem::~UEditorValidatorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FValidateAssetsResults::StaticStruct, Z_Construct_UScriptStruct_FValidateAssetsResults_Statics::NewStructOps, TEXT("ValidateAssetsResults"), &Z_Registration_Info_UScriptStruct_ValidateAssetsResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValidateAssetsResults), 4147756113U) },
		{ FValidateAssetsSettings::StaticStruct, Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics::NewStructOps, TEXT("ValidateAssetsSettings"), &Z_Registration_Info_UScriptStruct_ValidateAssetsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FValidateAssetsSettings), 3671278458U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataValidationSettings, UDataValidationSettings::StaticClass, TEXT("UDataValidationSettings"), &Z_Registration_Info_UClass_UDataValidationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataValidationSettings), 1626700429U) },
		{ Z_Construct_UClass_UEditorValidatorSubsystem, UEditorValidatorSubsystem::StaticClass, TEXT("UEditorValidatorSubsystem"), &Z_Registration_Info_UClass_UEditorValidatorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidatorSubsystem), 717115837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_4154715034(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
