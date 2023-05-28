// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WorldPartitionChangelistValidator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionChangelistValidator() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UWorldPartitionChangelistValidator();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UWorldPartitionChangelistValidator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	void UWorldPartitionChangelistValidator::StaticRegisterNativesUWorldPartitionChangelistValidator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionChangelistValidator);
	UClass* Z_Construct_UClass_UWorldPartitionChangelistValidator_NoRegister()
	{
		return UWorldPartitionChangelistValidator::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartitionChangelistValidator.h" },
		{ "ModuleRelativePath", "Private/WorldPartitionChangelistValidator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionChangelistValidator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::ClassParams = {
		&UWorldPartitionChangelistValidator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionChangelistValidator()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionChangelistValidator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionChangelistValidator.OuterSingleton, Z_Construct_UClass_UWorldPartitionChangelistValidator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionChangelistValidator.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UWorldPartitionChangelistValidator>()
	{
		return UWorldPartitionChangelistValidator::StaticClass();
	}
	UWorldPartitionChangelistValidator::UWorldPartitionChangelistValidator() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionChangelistValidator);
	UWorldPartitionChangelistValidator::~UWorldPartitionChangelistValidator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_WorldPartitionChangelistValidator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_WorldPartitionChangelistValidator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionChangelistValidator, UWorldPartitionChangelistValidator::StaticClass, TEXT("UWorldPartitionChangelistValidator"), &Z_Registration_Info_UClass_UWorldPartitionChangelistValidator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionChangelistValidator), 664712856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_WorldPartitionChangelistValidator_h_2452141416(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_WorldPartitionChangelistValidator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Private_WorldPartitionChangelistValidator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
