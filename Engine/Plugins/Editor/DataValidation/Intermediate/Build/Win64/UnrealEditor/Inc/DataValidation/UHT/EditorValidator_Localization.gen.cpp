// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorValidator_Localization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorValidator_Localization() {}
// Cross Module References
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidator_Localization();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidator_Localization_NoRegister();
	DATAVALIDATION_API UClass* Z_Construct_UClass_UEditorValidatorBase();
	UPackage* Z_Construct_UPackage__Script_DataValidation();
// End Cross Module References
	void UEditorValidator_Localization::StaticRegisterNativesUEditorValidator_Localization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorValidator_Localization);
	UClass* Z_Construct_UClass_UEditorValidator_Localization_NoRegister()
	{
		return UEditorValidator_Localization::StaticClass();
	}
	struct Z_Construct_UClass_UEditorValidator_Localization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorValidator_Localization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorValidatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DataValidation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorValidator_Localization_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Validates that localized assets (within the L10N folder) conform to a corresponding source asset of the correct type.\n* Localized assets that fail this validation will never be loaded as localized variants at runtime.\n*/" },
		{ "IncludePath", "EditorValidator_Localization.h" },
		{ "ModuleRelativePath", "Public/EditorValidator_Localization.h" },
		{ "ToolTip", "* Validates that localized assets (within the L10N folder) conform to a corresponding source asset of the correct type.\n* Localized assets that fail this validation will never be loaded as localized variants at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorValidator_Localization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorValidator_Localization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorValidator_Localization_Statics::ClassParams = {
		&UEditorValidator_Localization::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorValidator_Localization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorValidator_Localization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorValidator_Localization()
	{
		if (!Z_Registration_Info_UClass_UEditorValidator_Localization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorValidator_Localization.OuterSingleton, Z_Construct_UClass_UEditorValidator_Localization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorValidator_Localization.OuterSingleton;
	}
	template<> DATAVALIDATION_API UClass* StaticClass<UEditorValidator_Localization>()
	{
		return UEditorValidator_Localization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorValidator_Localization);
	UEditorValidator_Localization::~UEditorValidator_Localization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Localization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Localization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorValidator_Localization, UEditorValidator_Localization::StaticClass, TEXT("UEditorValidator_Localization"), &Z_Registration_Info_UClass_UEditorValidator_Localization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorValidator_Localization), 1840868192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Localization_h_2302574869(TEXT("/Script/DataValidation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Localization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidator_Localization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
