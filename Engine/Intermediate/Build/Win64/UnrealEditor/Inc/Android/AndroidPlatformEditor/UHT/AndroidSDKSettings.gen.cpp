// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidSDKSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidSDKSettings() {}
// Cross Module References
	ANDROIDPLATFORMEDITOR_API UClass* Z_Construct_UClass_UAndroidSDKSettings();
	ANDROIDPLATFORMEDITOR_API UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	UPackage* Z_Construct_UPackage__Script_AndroidPlatformEditor();
// End Cross Module References
	void UAndroidSDKSettings::StaticRegisterNativesUAndroidSDKSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidSDKSettings);
	UClass* Z_Construct_UClass_UAndroidSDKSettings_NoRegister()
	{
		return UAndroidSDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidSDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SDKPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SDKPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDKPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NDKPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JavaPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JavaPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SDKAPILevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SDKAPILevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NDKAPILevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NDKAPILevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidSDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidPlatformEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Android SDK setup.\n */" },
		{ "IncludePath", "AndroidSDKSettings.h" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Implements the settings for the Android SDK setup." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "Comment", "// Location on disk of the Android SDK (falls back to ANDROID_HOME environment variable if this is left blank)\n" },
		{ "DisplayName", "Location of Android SDK (the directory usually contains 'android-sdk-')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of the Android SDK (falls back to ANDROID_HOME environment variable if this is left blank)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath = { "SDKPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidSDKSettings, SDKPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "Comment", "// Location on disk of the Android NDK (falls back to NDKROOT environment variable if this is left blank)\n" },
		{ "DisplayName", "Location of Android NDK (the directory usually contains 'android-ndk-')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of the Android NDK (falls back to NDKROOT environment variable if this is left blank)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath = { "NDKPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidSDKSettings, NDKPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "Comment", "// Location on disk of Java (falls back to JAVA_HOME environment variable if this is left blank)\n" },
		{ "DisplayName", "Location of JAVA (the directory usually contains 'jdk')" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Location on disk of Java (falls back to JAVA_HOME environment variable if this is left blank)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath = { "JavaPath", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidSDKSettings, JavaPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "Comment", "// Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)\n" },
		{ "DisplayName", "SDK API Level (specific version, 'latest', or 'matchndk' - see tooltip)" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Which SDK to package and compile Java with (a specific version or (without quotes) 'latest' for latest version on disk, or 'matchndk' to match the NDK API Level)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel = { "SDKAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidSDKSettings, SDKAPILevel), METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData[] = {
		{ "Category", "SDKConfig" },
		{ "Comment", "// Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices.\n" },
		{ "DisplayName", "NDK API Level (specific version or 'latest' - see tooltip)" },
		{ "ModuleRelativePath", "Private/AndroidSDKSettings.h" },
		{ "ToolTip", "Which NDK to compile with (a specific version or (without quotes) 'latest' for latest version on disk). Note that choosing android-21 or later won't run on pre-5.0 devices." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel = { "NDKAPILevel", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidSDKSettings, NDKAPILevel), METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_JavaPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_SDKAPILevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidSDKSettings_Statics::NewProp_NDKAPILevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidSDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidSDKSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidSDKSettings_Statics::ClassParams = {
		&UAndroidSDKSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::PropPointers),
		0,
		0x081000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidSDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidSDKSettings()
	{
		if (!Z_Registration_Info_UClass_UAndroidSDKSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidSDKSettings.OuterSingleton, Z_Construct_UClass_UAndroidSDKSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidSDKSettings.OuterSingleton;
	}
	template<> ANDROIDPLATFORMEDITOR_API UClass* StaticClass<UAndroidSDKSettings>()
	{
		return UAndroidSDKSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidSDKSettings);
	UAndroidSDKSettings::~UAndroidSDKSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidSDKSettings, UAndroidSDKSettings::StaticClass, TEXT("UAndroidSDKSettings"), &Z_Registration_Info_UClass_UAndroidSDKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidSDKSettings), 2700819755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_2677577321(TEXT("/Script/AndroidPlatformEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Android_AndroidPlatformEditor_Private_AndroidSDKSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
