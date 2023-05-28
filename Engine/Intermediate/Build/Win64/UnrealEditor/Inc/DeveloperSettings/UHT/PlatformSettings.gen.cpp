// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/PlatformSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings_NoRegister();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings();
	UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerPlatformSettings;
class UScriptStruct* FPerPlatformSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerPlatformSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerPlatformSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerPlatformSettings, (UObject*)Z_Construct_UPackage__Script_DeveloperSettings(), TEXT("PerPlatformSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PerPlatformSettings.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UScriptStruct* StaticStruct<FPerPlatformSettings>()
{
	return FPerPlatformSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerPlatformSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engine/PlatformSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerPlatformSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_Inner_MetaData[] = {
		{ "Category", "Layout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Layout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0044008000002049, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerPlatformSettings, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
		nullptr,
		&NewStructOps,
		"PerPlatformSettings",
		sizeof(FPerPlatformSettings),
		alignof(FPerPlatformSettings),
		Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PerPlatformSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerPlatformSettings.InnerSingleton, Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerPlatformSettings.InnerSingleton;
	}
	void UPlatformSettings::StaticRegisterNativesUPlatformSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformSettings);
	UClass* Z_Construct_UClass_UPlatformSettings_NoRegister()
	{
		return UPlatformSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The base class of any per platform settings.  The pattern for using these is as follows.\n * \n * Step 1) Subclass UPlatformSettings, UMyPerPlatformSettings : public UPlatformSettings.\n * \n * Step 2) For your system should already have a UDeveloperSettings that you created so that\n *         users can customize other properties for your system in the project.  On that class\n *         you need to create a property of type FPerPlatformSettings, e.g. \n *         UPROPERTY(EditAnywhere, Category=Platform)\n *         FPerPlatformSettings PlatformOptions\n * \n * Step 3) In your UDeveloperSettings subclasses construct, there should be a line like this,\n *         PlatformOptions.Settings.Initialize(UMyPerPlatformSettings::StaticClass());\n *         This will actually ensure that you initialize the settings exposed in the editor to whatever\n *         the current platform configuration is for them.\n * \n * Step 4) Nothing else needed.  In your system code, you will just call \n *         UMyPerPlatformSettings* MySettings = UPlatformSettingsManager::Get().GetSettingsForPlatform<UMyPerPlatformSettings>()\n *         that will get you the current settings for the active platform, or the simulated platform in the editor.\n */" },
		{ "IncludePath", "Engine/PlatformSettings.h" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The base class of any per platform settings.  The pattern for using these is as follows.\n\nStep 1) Subclass UPlatformSettings, UMyPerPlatformSettings : public UPlatformSettings.\n\nStep 2) For your system should already have a UDeveloperSettings that you created so that\n        users can customize other properties for your system in the project.  On that class\n        you need to create a property of type FPerPlatformSettings, e.g.\n        UPROPERTY(EditAnywhere, Category=Platform)\n        FPerPlatformSettings PlatformOptions\n\nStep 3) In your UDeveloperSettings subclasses construct, there should be a line like this,\n        PlatformOptions.Settings.Initialize(UMyPerPlatformSettings::StaticClass());\n        This will actually ensure that you initialize the settings exposed in the editor to whatever\n        the current platform configuration is for them.\n\nStep 4) Nothing else needed.  In your system code, you will just call\n        UMyPerPlatformSettings* MySettings = UPlatformSettingsManager::Get().GetSettingsForPlatform<UMyPerPlatformSettings>()\n        that will get you the current settings for the active platform, or the simulated platform in the editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformSettings_Statics::ClassParams = {
		&UPlatformSettings::StaticClass,
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
		0x001004A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformSettings()
	{
		if (!Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton, Z_Construct_UClass_UPlatformSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformSettings.OuterSingleton;
	}
	template<> DEVELOPERSETTINGS_API UClass* StaticClass<UPlatformSettings>()
	{
		return UPlatformSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformSettings);
	UPlatformSettings::~UPlatformSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ScriptStructInfo[] = {
		{ FPerPlatformSettings::StaticStruct, Z_Construct_UScriptStruct_FPerPlatformSettings_Statics::NewStructOps, TEXT("PerPlatformSettings"), &Z_Registration_Info_UScriptStruct_PerPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerPlatformSettings), 145519765U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformSettings, UPlatformSettings::StaticClass, TEXT("UPlatformSettings"), &Z_Registration_Info_UClass_UPlatformSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformSettings), 791109848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_1679370338(TEXT("/Script/DeveloperSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
