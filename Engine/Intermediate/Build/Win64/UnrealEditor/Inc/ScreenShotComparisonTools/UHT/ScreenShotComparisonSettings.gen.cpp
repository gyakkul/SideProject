// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenShotComparisonSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenShotComparisonSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings();
	SCREENSHOTCOMPARISONTOOLS_API UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister();
	SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry();
	UPackage* Z_Construct_UPackage__Script_ScreenShotComparisonTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry;
class UScriptStruct* FScreenshotFallbackEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenshotFallbackEntry, (UObject*)Z_Construct_UPackage__Script_ScreenShotComparisonTools(), TEXT("ScreenshotFallbackEntry"));
	}
	return Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.OuterSingleton;
}
template<> SCREENSHOTCOMPARISONTOOLS_API UScriptStruct* StaticStruct<FScreenshotFallbackEntry>()
{
	return FScreenshotFallbackEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Child;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Holds settings for screenshot fallbacks\n*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "Holds settings for screenshot fallbacks" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenshotFallbackEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotFallbackEntry, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScreenshotFallbackEntry, Child), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewProp_Child,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
		nullptr,
		&NewStructOps,
		"ScreenshotFallbackEntry",
		sizeof(FScreenshotFallbackEntry),
		alignof(FScreenshotFallbackEntry),
		Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenshotFallbackEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton, Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry.InnerSingleton;
	}
	void UScreenShotComparisonSettings::StaticRegisterNativesUScreenShotComparisonSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenShotComparisonSettings);
	UClass* Z_Construct_UClass_UScreenShotComparisonSettings_NoRegister()
	{
		return UScreenShotComparisonSettings::StaticClass();
	}
	struct Z_Construct_UClass_UScreenShotComparisonSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData[];
#endif
		static void NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConfidentialPlatformPathsForSavedResults;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenshotFallbackPlatforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenshotFallbackPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenshotFallbackPlatforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenShotComparisonTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScreenShotComparisonSettings.h" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData[] = {
		{ "Comment", "/**\n\x09* if true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "if true, any checked-in test results for confidential platforms will be put under <ProjectDir>/Platforms/<Platform>/Test instead of <ProjectDir>/Test" },
	};
#endif
	void Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit(void* Obj)
	{
		((UScreenShotComparisonSettings*)Obj)->bUseConfidentialPlatformPathsForSavedResults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults = { "bUseConfidentialPlatformPathsForSavedResults", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScreenShotComparisonSettings), &Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScreenshotFallbackEntry, METADATA_PARAMS(nullptr, 0) }; // 4100059872
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData[] = {
		{ "Comment", "/**\n\x09* An array of entries that describe other platforms we can use for fallbacks when comparing screenshots\n\x09*/" },
		{ "ModuleRelativePath", "Public/ScreenShotComparisonSettings.h" },
		{ "ToolTip", "An array of entries that describe other platforms we can use for fallbacks when comparing screenshots" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms = { "ScreenshotFallbackPlatforms", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScreenShotComparisonSettings, ScreenshotFallbackPlatforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_MetaData)) }; // 4100059872
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_bUseConfidentialPlatformPathsForSavedResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScreenShotComparisonSettings_Statics::NewProp_ScreenshotFallbackPlatforms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenShotComparisonSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenShotComparisonSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams = {
		&UScreenShotComparisonSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenShotComparisonSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenShotComparisonSettings()
	{
		if (!Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton, Z_Construct_UClass_UScreenShotComparisonSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScreenShotComparisonSettings.OuterSingleton;
	}
	template<> SCREENSHOTCOMPARISONTOOLS_API UClass* StaticClass<UScreenShotComparisonSettings>()
	{
		return UScreenShotComparisonSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenShotComparisonSettings);
	UScreenShotComparisonSettings::~UScreenShotComparisonSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ScriptStructInfo[] = {
		{ FScreenshotFallbackEntry::StaticStruct, Z_Construct_UScriptStruct_FScreenshotFallbackEntry_Statics::NewStructOps, TEXT("ScreenshotFallbackEntry"), &Z_Registration_Info_UScriptStruct_ScreenshotFallbackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScreenshotFallbackEntry), 4100059872U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScreenShotComparisonSettings, UScreenShotComparisonSettings::StaticClass, TEXT("UScreenShotComparisonSettings"), &Z_Registration_Info_UClass_UScreenShotComparisonSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenShotComparisonSettings), 1537627198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_1307069323(TEXT("/Script/ScreenShotComparisonTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ScreenShotComparisonTools_Public_ScreenShotComparisonSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
