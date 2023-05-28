// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeneralEngineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralEngineSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings();
	ENGINESETTINGS_API UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineSettings();
// End Cross Module References
	void UGeneralEngineSettings::StaticRegisterNativesUGeneralEngineSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneralEngineSettings);
	UClass* Z_Construct_UClass_UGeneralEngineSettings_NoRegister()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGeneralEngineSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneralEngineSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneralEngineSettings.h" },
		{ "ModuleRelativePath", "Classes/GeneralEngineSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneralEngineSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralEngineSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneralEngineSettings_Statics::ClassParams = {
		&UGeneralEngineSettings::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralEngineSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneralEngineSettings()
	{
		if (!Z_Registration_Info_UClass_UGeneralEngineSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneralEngineSettings.OuterSingleton, Z_Construct_UClass_UGeneralEngineSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeneralEngineSettings.OuterSingleton;
	}
	template<> ENGINESETTINGS_API UClass* StaticClass<UGeneralEngineSettings>()
	{
		return UGeneralEngineSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralEngineSettings);
	UGeneralEngineSettings::~UGeneralEngineSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeneralEngineSettings, UGeneralEngineSettings::StaticClass, TEXT("UGeneralEngineSettings"), &Z_Registration_Info_UClass_UGeneralEngineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneralEngineSettings), 1488156313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_3185607897(TEXT("/Script/EngineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineSettings_Classes_GeneralEngineSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
