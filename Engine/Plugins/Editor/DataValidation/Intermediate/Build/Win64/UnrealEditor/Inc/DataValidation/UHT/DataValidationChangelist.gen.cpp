// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataValidationChangelist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataValidationChangelist() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationChangelist();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UDataValidationChangelist_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	void UDataValidationChangelist::StaticRegisterNativesUDataValidationChangelist()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataValidationChangelist);
	UClass* Z_Construct_UClass_UDataValidationChangelist_NoRegister()
	{
		return UDataValidationChangelist::StaticClass();
	}
	struct Z_Construct_UClass_UDataValidationChangelist_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataValidationChangelist_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataValidationChangelist_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Changelist abstraction to allow changelist-level data validation\n */" },
		{ "IncludePath", "DataValidationChangelist.h" },
		{ "ModuleRelativePath", "Public/DataValidationChangelist.h" },
		{ "ToolTip", "Changelist abstraction to allow changelist-level data validation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataValidationChangelist_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataValidationChangelist>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataValidationChangelist_Statics::ClassParams = {
		&UDataValidationChangelist::StaticClass,
		"Editor",
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
		METADATA_PARAMS(Z_Construct_UClass_UDataValidationChangelist_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataValidationChangelist_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataValidationChangelist()
	{
		if (!Z_Registration_Info_UClass_UDataValidationChangelist.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataValidationChangelist.OuterSingleton, Z_Construct_UClass_UDataValidationChangelist_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataValidationChangelist.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UDataValidationChangelist>()
	{
		return UDataValidationChangelist::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataValidationChangelist);
	UDataValidationChangelist::~UDataValidationChangelist() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataValidationChangelist, UDataValidationChangelist::StaticClass, TEXT("UDataValidationChangelist"), &Z_Registration_Info_UClass_UDataValidationChangelist, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataValidationChangelist), 3895273309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_1957742625(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_DataValidationChangelist_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
