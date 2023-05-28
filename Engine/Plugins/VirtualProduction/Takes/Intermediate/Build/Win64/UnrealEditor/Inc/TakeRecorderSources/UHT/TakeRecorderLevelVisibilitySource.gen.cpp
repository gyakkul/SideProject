// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderLevelVisibilitySource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderLevelVisibilitySource() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderLevelVisibilitySourceSettings::StaticRegisterNativesUTakeRecorderLevelVisibilitySourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderLevelVisibilitySourceSettings);
	UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_NoRegister()
	{
		return UTakeRecorderLevelVisibilitySourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelVisibilityTrackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LevelVisibilityTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A recording source that records level visibilitiy */" },
		{ "DisplayName", "Level Visibility Recorder Defaults" },
		{ "IncludePath", "TakeRecorderLevelVisibilitySource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderLevelVisibilitySource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A recording source that records level visibilitiy" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::NewProp_LevelVisibilityTrackName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Name of the recorded level visibility track name */" },
		{ "ModuleRelativePath", "Private/TakeRecorderLevelVisibilitySource.h" },
		{ "ToolTip", "Name of the recorded level visibility track name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::NewProp_LevelVisibilityTrackName = { "LevelVisibilityTrackName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderLevelVisibilitySourceSettings, LevelVisibilityTrackName), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::NewProp_LevelVisibilityTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::NewProp_LevelVisibilityTrackName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::NewProp_LevelVisibilityTrackName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderLevelVisibilitySourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::ClassParams = {
		&UTakeRecorderLevelVisibilitySourceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::PropPointers),
		0,
		0x000000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySourceSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySourceSettings.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderLevelVisibilitySourceSettings>()
	{
		return UTakeRecorderLevelVisibilitySourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderLevelVisibilitySourceSettings);
	UTakeRecorderLevelVisibilitySourceSettings::~UTakeRecorderLevelVisibilitySourceSettings() {}
	void UTakeRecorderLevelVisibilitySource::StaticRegisterNativesUTakeRecorderLevelVisibilitySource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderLevelVisibilitySource);
	UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_NoRegister()
	{
		return UTakeRecorderLevelVisibilitySource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Other" },
		{ "Comment", "/** A recording source that records level visibility state */" },
		{ "IncludePath", "TakeRecorderLevelVisibilitySource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderLevelVisibilitySource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Level Visibility" },
		{ "ToolTip", "A recording source that records level visibility state" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderLevelVisibilitySource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::ClassParams = {
		&UTakeRecorderLevelVisibilitySource::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderLevelVisibilitySource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySource.OuterSingleton, Z_Construct_UClass_UTakeRecorderLevelVisibilitySource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderLevelVisibilitySource>()
	{
		return UTakeRecorderLevelVisibilitySource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderLevelVisibilitySource);
	UTakeRecorderLevelVisibilitySource::~UTakeRecorderLevelVisibilitySource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelVisibilitySource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelVisibilitySource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderLevelVisibilitySourceSettings, UTakeRecorderLevelVisibilitySourceSettings::StaticClass, TEXT("UTakeRecorderLevelVisibilitySourceSettings"), &Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderLevelVisibilitySourceSettings), 224437136U) },
		{ Z_Construct_UClass_UTakeRecorderLevelVisibilitySource, UTakeRecorderLevelVisibilitySource::StaticClass, TEXT("UTakeRecorderLevelVisibilitySource"), &Z_Registration_Info_UClass_UTakeRecorderLevelVisibilitySource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderLevelVisibilitySource), 2135003244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelVisibilitySource_h_1846864923(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelVisibilitySource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderLevelVisibilitySource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
