// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeveloperSettingsBackedByCVars() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References
	void UDeveloperSettingsBackedByCVars::StaticRegisterNativesUDeveloperSettingsBackedByCVars()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeveloperSettingsBackedByCVars);
	UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars_NoRegister()
	{
		return UDeveloperSettingsBackedByCVars::StaticClass();
	}
	struct Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of auto discovered settings object where some or all of the settings\n * are stored in console variables instead of config variables.\n */" },
		{ "IncludePath", "Engine/DeveloperSettingsBackedByCVars.h" },
		{ "ModuleRelativePath", "Public/Engine/DeveloperSettingsBackedByCVars.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of auto discovered settings object where some or all of the settings\nare stored in console variables instead of config variables." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeveloperSettingsBackedByCVars>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::ClassParams = {
		&UDeveloperSettingsBackedByCVars::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars()
	{
		if (!Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton, Z_Construct_UClass_UDeveloperSettingsBackedByCVars_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars.OuterSingleton;
	}
	template<> DEVELOPERSETTINGS_API UClass* StaticClass<UDeveloperSettingsBackedByCVars>()
	{
		return UDeveloperSettingsBackedByCVars::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeveloperSettingsBackedByCVars);
	UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeveloperSettingsBackedByCVars, UDeveloperSettingsBackedByCVars::StaticClass, TEXT("UDeveloperSettingsBackedByCVars"), &Z_Registration_Info_UClass_UDeveloperSettingsBackedByCVars, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeveloperSettingsBackedByCVars), 4195151637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_126244298(TEXT("/Script/DeveloperSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettingsBackedByCVars_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
