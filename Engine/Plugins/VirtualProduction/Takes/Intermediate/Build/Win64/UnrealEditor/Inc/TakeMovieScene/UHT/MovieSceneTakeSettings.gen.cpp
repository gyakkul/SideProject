// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTakeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
// End Cross Module References
	void UMovieSceneTakeSettings::StaticRegisterNativesUMovieSceneTakeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTakeSettings);
	UClass* Z_Construct_UClass_UMovieSceneTakeSettings_NoRegister()
	{
		return UMovieSceneTakeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTakeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoursName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HoursName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MinutesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SecondsName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubFramesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubFramesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Universal take recorder settings that apply to a whole take\n */" },
		{ "IncludePath", "MovieSceneTakeSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Universal take recorder settings that apply to a whole take" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Hours Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Hours Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName = { "HoursName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, HoursName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Minutes Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Minutes Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName = { "MinutesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, MinutesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Seconds Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Seconds Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName = { "SecondsName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, SecondsName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Frames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Frames Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName = { "FramesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, FramesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** SubFrames Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "SubFrames Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName = { "SubFramesName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, SubFramesName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** Slate Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSettings.h" },
		{ "ToolTip", "Slate Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName = { "SlateName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSettings, SlateName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_HoursName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_MinutesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SecondsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_FramesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SubFramesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSettings_Statics::NewProp_SlateName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTakeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams = {
		&UMovieSceneTakeSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTakeSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneTakeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTakeSettings.OuterSingleton;
	}
	template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSettings>()
	{
		return UMovieSceneTakeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSettings);
	UMovieSceneTakeSettings::~UMovieSceneTakeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTakeSettings, UMovieSceneTakeSettings::StaticClass, TEXT("UMovieSceneTakeSettings"), &Z_Registration_Info_UClass_UMovieSceneTakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTakeSettings), 2984702153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_2396623167(TEXT("/Script/TakeMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
