// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DocumentationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentationSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DOCUMENTATION_API UClass* Z_Construct_UClass_UDocumentationSettings();
	DOCUMENTATION_API UClass* Z_Construct_UClass_UDocumentationSettings_NoRegister();
	DOCUMENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FDocumentationBaseUrl();
	UPackage* Z_Construct_UPackage__Script_Documentation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DocumentationBaseUrl;
class UScriptStruct* FDocumentationBaseUrl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDocumentationBaseUrl, (UObject*)Z_Construct_UPackage__Script_Documentation(), TEXT("DocumentationBaseUrl"));
	}
	return Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.OuterSingleton;
}
template<> DOCUMENTATION_API UScriptStruct* StaticStruct<FDocumentationBaseUrl>()
{
	return FDocumentationBaseUrl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DocumentationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDocumentationBaseUrl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/DocumentationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDocumentationBaseUrl, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Url_MetaData[] = {
		{ "ModuleRelativePath", "Public/DocumentationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDocumentationBaseUrl, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewProp_Url,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Documentation,
		nullptr,
		&NewStructOps,
		"DocumentationBaseUrl",
		sizeof(FDocumentationBaseUrl),
		alignof(FDocumentationBaseUrl),
		Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDocumentationBaseUrl()
	{
		if (!Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.InnerSingleton, Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DocumentationBaseUrl.InnerSingleton;
	}
	void UDocumentationSettings::StaticRegisterNativesUDocumentationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDocumentationSettings);
	UClass* Z_Construct_UClass_UDocumentationSettings_NoRegister()
	{
		return UDocumentationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDocumentationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DocumentationBaseUrls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocumentationBaseUrls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DocumentationBaseUrls;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDocumentationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Documentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDocumentationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DocumentationSettings.h" },
		{ "ModuleRelativePath", "Public/DocumentationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls_Inner = { "DocumentationBaseUrls", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDocumentationBaseUrl, METADATA_PARAMS(nullptr, 0) }; // 1630256371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls_MetaData[] = {
		{ "Comment", "// Array of base URLs for documentation links that are loaded on startup\n" },
		{ "ModuleRelativePath", "Public/DocumentationSettings.h" },
		{ "ToolTip", "Array of base URLs for documentation links that are loaded on startup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls = { "DocumentationBaseUrls", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDocumentationSettings, DocumentationBaseUrls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls_MetaData)) }; // 1630256371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDocumentationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDocumentationSettings_Statics::NewProp_DocumentationBaseUrls,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDocumentationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDocumentationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDocumentationSettings_Statics::ClassParams = {
		&UDocumentationSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDocumentationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDocumentationSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDocumentationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDocumentationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDocumentationSettings()
	{
		if (!Z_Registration_Info_UClass_UDocumentationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDocumentationSettings.OuterSingleton, Z_Construct_UClass_UDocumentationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDocumentationSettings.OuterSingleton;
	}
	template<> DOCUMENTATION_API UClass* StaticClass<UDocumentationSettings>()
	{
		return UDocumentationSettings::StaticClass();
	}
	UDocumentationSettings::UDocumentationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDocumentationSettings);
	UDocumentationSettings::~UDocumentationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ScriptStructInfo[] = {
		{ FDocumentationBaseUrl::StaticStruct, Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics::NewStructOps, TEXT("DocumentationBaseUrl"), &Z_Registration_Info_UScriptStruct_DocumentationBaseUrl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDocumentationBaseUrl), 1630256371U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDocumentationSettings, UDocumentationSettings::StaticClass, TEXT("UDocumentationSettings"), &Z_Registration_Info_UClass_UDocumentationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDocumentationSettings), 2040787884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_1628805179(TEXT("/Script/Documentation"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
