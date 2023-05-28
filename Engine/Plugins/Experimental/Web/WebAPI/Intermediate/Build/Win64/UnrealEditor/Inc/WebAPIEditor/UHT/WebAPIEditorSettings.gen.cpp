// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSettings();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIEditorSettings_NoRegister();
// End Cross Module References
	void UWebAPIEditorSettings::StaticRegisterNativesUWebAPIEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIEditorSettings);
	UClass* Z_Construct_UClass_UWebAPIEditorSettings_NoRegister()
	{
		return UWebAPIEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodeGeneratorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CodeGeneratorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** */" },
		{ "DisplayName", "WebAPI" },
		{ "IncludePath", "WebAPIEditorSettings.h" },
		{ "ModuleRelativePath", "Public/WebAPIEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIEditorSettings_Statics::NewProp_CodeGeneratorClass_MetaData[] = {
		{ "Category", "Generator" },
		{ "ModuleRelativePath", "Public/WebAPIEditorSettings.h" },
		{ "MustImplement", "/Script/WebAPIEditor.WebAPICodeGeneratorInterface" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UWebAPIEditorSettings_Statics::NewProp_CodeGeneratorClass = { "CodeGeneratorClass", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIEditorSettings, CodeGeneratorClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIEditorSettings_Statics::NewProp_CodeGeneratorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEditorSettings_Statics::NewProp_CodeGeneratorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIEditorSettings_Statics::NewProp_CodeGeneratorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIEditorSettings_Statics::ClassParams = {
		&UWebAPIEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEditorSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UWebAPIEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIEditorSettings.OuterSingleton, Z_Construct_UClass_UWebAPIEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIEditorSettings.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIEditorSettings>()
	{
		return UWebAPIEditorSettings::StaticClass();
	}
	UWebAPIEditorSettings::UWebAPIEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIEditorSettings);
	UWebAPIEditorSettings::~UWebAPIEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIEditorSettings, UWebAPIEditorSettings::StaticClass, TEXT("UWebAPIEditorSettings"), &Z_Registration_Info_UClass_UWebAPIEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIEditorSettings), 1137519333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_196452287(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_WebAPIEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
