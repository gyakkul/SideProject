// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/DeveloperSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References
	void UDeveloperSettings::StaticRegisterNativesUDeveloperSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeveloperSettings);
	UClass* Z_Construct_UClass_UDeveloperSettings_NoRegister()
	{
		return UDeveloperSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDeveloperSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeveloperSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of any auto discovered settings object.\n */" },
		{ "IncludePath", "Engine/DeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Engine/DeveloperSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of any auto discovered settings object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeveloperSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams = {
		&UDeveloperSettings::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeveloperSettings()
	{
		if (!Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton, Z_Construct_UClass_UDeveloperSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeveloperSettings.OuterSingleton;
	}
	template<> DEVELOPERSETTINGS_API UClass* StaticClass<UDeveloperSettings>()
	{
		return UDeveloperSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperSettings);
	UDeveloperSettings::~UDeveloperSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeveloperSettings, UDeveloperSettings::StaticClass, TEXT("UDeveloperSettings"), &Z_Registration_Info_UClass_UDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeveloperSettings), 4098746575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_3493356905(TEXT("/Script/DeveloperSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
