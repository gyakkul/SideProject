// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DirtyFilesChangelistValidator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirtyFilesChangelistValidator() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDirtyFilesChangelistValidator();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDirtyFilesChangelistValidator_NoRegister();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	void UDirtyFilesChangelistValidator::StaticRegisterNativesUDirtyFilesChangelistValidator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirtyFilesChangelistValidator);
	UClass* Z_Construct_UClass_UDirtyFilesChangelistValidator_NoRegister()
	{
		return UDirtyFilesChangelistValidator::StaticClass();
	}
	struct Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Validates there is no unsaved files in the changelist about to be submitted.\n*/" },
		{ "IncludePath", "DirtyFilesChangelistValidator.h" },
		{ "ModuleRelativePath", "Public/DirtyFilesChangelistValidator.h" },
		{ "ToolTip", "Validates there is no unsaved files in the changelist about to be submitted." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirtyFilesChangelistValidator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::ClassParams = {
		&UDirtyFilesChangelistValidator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirtyFilesChangelistValidator()
	{
		if (!Z_Registration_Info_UClass_UDirtyFilesChangelistValidator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirtyFilesChangelistValidator.OuterSingleton, Z_Construct_UClass_UDirtyFilesChangelistValidator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirtyFilesChangelistValidator.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UDirtyFilesChangelistValidator>()
	{
		return UDirtyFilesChangelistValidator::StaticClass();
	}
	UDirtyFilesChangelistValidator::UDirtyFilesChangelistValidator() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirtyFilesChangelistValidator);
	UDirtyFilesChangelistValidator::~UDirtyFilesChangelistValidator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirtyFilesChangelistValidator, UDirtyFilesChangelistValidator::StaticClass, TEXT("UDirtyFilesChangelistValidator"), &Z_Registration_Info_UClass_UDirtyFilesChangelistValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirtyFilesChangelistValidator), 1394850782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_4128968296(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DirtyFilesChangelistValidator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
