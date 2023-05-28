// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/PlatformsMenuSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformsMenuSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UPlatformsMenuSettings();
	DEVELOPERTOOLSETTINGS_API UClass* Z_Construct_UClass_UPlatformsMenuSettings_NoRegister();
	DEVELOPERTOOLSETTINGS_API UEnum* Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations();
	UPackage* Z_Construct_UPackage__Script_DeveloperToolSettings();
// End Cross Module References
	void UPlatformsMenuSettings::StaticRegisterNativesUPlatformsMenuSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformsMenuSettings);
	UClass* Z_Construct_UClass_UPlatformsMenuSettings_NoRegister()
	{
		return UPlatformsMenuSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformsMenuSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StagingDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StagingDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchOnTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LaunchOnTarget;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerPlatformBuildConfig_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerPlatformBuildConfig_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatformBuildConfig_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatformBuildConfig_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatformBuildConfig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatformTargetFlavorName_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatformTargetFlavorName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatformTargetFlavorName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatformTargetFlavorName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerPlatformBuildTarget_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerPlatformBuildTarget_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerPlatformBuildTarget_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerPlatformBuildTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformsMenuSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperToolSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/PlatformsMenuSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_StagingDirectory_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** The directory to which the packaged project will be copied. */" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
		{ "ToolTip", "The directory to which the packaged project will be copied." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_StagingDirectory = { "StagingDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformsMenuSettings, StagingDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_StagingDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_StagingDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_LaunchOnTarget_MetaData[] = {
		{ "Comment", "/** Name of the target to use for LaunchOn (only Game/Client targets) */" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
		{ "ToolTip", "Name of the target to use for LaunchOn (only Game/Client targets)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_LaunchOnTarget = { "LaunchOnTarget", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformsMenuSettings, LaunchOnTarget), METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_LaunchOnTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_LaunchOnTarget_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_ValueProp = { "PerPlatformBuildConfig", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_DeveloperToolSettings_EProjectPackagingBuildConfigurations, METADATA_PARAMS(nullptr, 0) }; // 223703122
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_Key_KeyProp = { "PerPlatformBuildConfig_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_MetaData[] = {
		{ "Comment", "/** Per platform build configuration */" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
		{ "ToolTip", "Per platform build configuration" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig = { "PerPlatformBuildConfig", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformsMenuSettings, PerPlatformBuildConfig), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_MetaData)) }; // 223703122
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_ValueProp = { "PerPlatformTargetFlavorName", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_Key_KeyProp = { "PerPlatformTargetFlavorName_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_MetaData[] = {
		{ "Comment", "/** Per platform flavor cooking target */" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
		{ "ToolTip", "Per platform flavor cooking target" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName = { "PerPlatformTargetFlavorName", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformsMenuSettings, PerPlatformTargetFlavorName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_ValueProp = { "PerPlatformBuildTarget", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_Key_KeyProp = { "PerPlatformBuildTarget_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_MetaData[] = {
		{ "Category", "Project" },
		{ "Comment", "/** Per platform build target */" },
		{ "ModuleRelativePath", "Classes/Settings/PlatformsMenuSettings.h" },
		{ "ToolTip", "Per platform build target" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget = { "PerPlatformBuildTarget", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformsMenuSettings, PerPlatformBuildTarget), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformsMenuSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_StagingDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_LaunchOnTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformTargetFlavorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformsMenuSettings_Statics::NewProp_PerPlatformBuildTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformsMenuSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformsMenuSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformsMenuSettings_Statics::ClassParams = {
		&UPlatformsMenuSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformsMenuSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformsMenuSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformsMenuSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformsMenuSettings()
	{
		if (!Z_Registration_Info_UClass_UPlatformsMenuSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformsMenuSettings.OuterSingleton, Z_Construct_UClass_UPlatformsMenuSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformsMenuSettings.OuterSingleton;
	}
	template<> DEVELOPERTOOLSETTINGS_API UClass* StaticClass<UPlatformsMenuSettings>()
	{
		return UPlatformsMenuSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformsMenuSettings);
	UPlatformsMenuSettings::~UPlatformsMenuSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformsMenuSettings, UPlatformsMenuSettings::StaticClass, TEXT("UPlatformsMenuSettings"), &Z_Registration_Info_UClass_UPlatformsMenuSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformsMenuSettings), 2519022368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_1315960107(TEXT("/Script/DeveloperToolSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_DeveloperToolSettings_Classes_Settings_PlatformsMenuSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
