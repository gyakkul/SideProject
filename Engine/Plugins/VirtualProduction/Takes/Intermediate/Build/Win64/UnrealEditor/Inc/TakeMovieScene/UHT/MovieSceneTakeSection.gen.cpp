// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTakeSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "Channels/MovieSceneStringChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTakeSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection();
	TAKEMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TakeMovieScene();
// End Cross Module References
	void UMovieSceneTakeSection::StaticRegisterNativesUMovieSceneTakeSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTakeSection);
	UClass* Z_Construct_UClass_UMovieSceneTakeSection_NoRegister()
	{
		return UMovieSceneTakeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTakeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoursCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoursCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinutesCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinutesCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondsCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FramesCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubFramesCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubFramesCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTakeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section in a Take track\n */" },
		{ "IncludePath", "MovieSceneTakeSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "A section in a Take track" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData[] = {
		{ "Comment", "/** Hours curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Hours curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve = { "HoursCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, HoursCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve_MetaData)) }; // 2921625975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData[] = {
		{ "Comment", "/** Minutes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Minutes curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve = { "MinutesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, MinutesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve_MetaData)) }; // 2921625975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData[] = {
		{ "Comment", "/** Seconds curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Seconds curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve = { "SecondsCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, SecondsCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve_MetaData)) }; // 2921625975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData[] = {
		{ "Comment", "/** Frames curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Frames curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve = { "FramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, FramesCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve_MetaData)) }; // 2921625975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData[] = {
		{ "Comment", "/** Subframes curve data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Subframes curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve = { "SubFramesCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, SubFramesCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData[] = {
		{ "Comment", "/** Slate data */" },
		{ "ModuleRelativePath", "Public/MovieSceneTakeSection.h" },
		{ "ToolTip", "Slate data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate = { "Slate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTakeSection, Slate), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate_MetaData)) }; // 2536368632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_HoursCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_MinutesCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SecondsCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_FramesCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_SubFramesCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTakeSection_Statics::NewProp_Slate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTakeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTakeSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams = {
		&UMovieSceneTakeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTakeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTakeSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton, Z_Construct_UClass_UMovieSceneTakeSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTakeSection.OuterSingleton;
	}
	template<> TAKEMOVIESCENE_API UClass* StaticClass<UMovieSceneTakeSection>()
	{
		return UMovieSceneTakeSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTakeSection);
	UMovieSceneTakeSection::~UMovieSceneTakeSection() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneTakeSection)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTakeSection, UMovieSceneTakeSection::StaticClass, TEXT("UMovieSceneTakeSection"), &Z_Registration_Info_UClass_UMovieSceneTakeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTakeSection), 1322117573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_3060668203(TEXT("/Script/TakeMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeMovieScene_Public_MovieSceneTakeSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
