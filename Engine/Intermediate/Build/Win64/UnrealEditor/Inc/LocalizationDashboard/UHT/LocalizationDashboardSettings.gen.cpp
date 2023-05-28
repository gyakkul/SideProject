// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LocalizationDashboardSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizationDashboardSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOCALIZATIONDASHBOARD_API UClass* Z_Construct_UClass_ULocalizationDashboardSettings();
	LOCALIZATIONDASHBOARD_API UClass* Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LocalizationDashboard();
// End Cross Module References
	void ULocalizationDashboardSettings::StaticRegisterNativesULocalizationDashboardSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizationDashboardSettings);
	UClass* Z_Construct_UClass_ULocalizationDashboardSettings_NoRegister()
	{
		return ULocalizationDashboardSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizationDashboardSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizationDashboardSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocalizationDashboard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Currently just a dummy class used for detail customizations */" },
		{ "IncludePath", "LocalizationDashboardSettings.h" },
		{ "ModuleRelativePath", "Private/LocalizationDashboardSettings.h" },
		{ "ToolTip", "Currently just a dummy class used for detail customizations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizationDashboardSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizationDashboardSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizationDashboardSettings_Statics::ClassParams = {
		&ULocalizationDashboardSettings::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizationDashboardSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizationDashboardSettings()
	{
		if (!Z_Registration_Info_UClass_ULocalizationDashboardSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizationDashboardSettings.OuterSingleton, Z_Construct_UClass_ULocalizationDashboardSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalizationDashboardSettings.OuterSingleton;
	}
	template<> LOCALIZATIONDASHBOARD_API UClass* StaticClass<ULocalizationDashboardSettings>()
	{
		return ULocalizationDashboardSettings::StaticClass();
	}
	ULocalizationDashboardSettings::ULocalizationDashboardSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizationDashboardSettings);
	ULocalizationDashboardSettings::~ULocalizationDashboardSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizationDashboardSettings, ULocalizationDashboardSettings::StaticClass, TEXT("ULocalizationDashboardSettings"), &Z_Registration_Info_UClass_ULocalizationDashboardSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizationDashboardSettings), 295186115U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_3477881534(TEXT("/Script/LocalizationDashboard"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LocalizationDashboard_Private_LocalizationDashboardSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
