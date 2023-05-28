// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComposurePostMoveSettingsSection() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection();
	COMPOSURE_API UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UMovieSceneComposurePostMoveSettingsSection::StaticRegisterNativesUMovieSceneComposurePostMoveSettingsSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComposurePostMoveSettingsSection);
	UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_NoRegister()
	{
		return UMovieSceneComposurePostMoveSettingsSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A movie scene section for animating FComposurePostMoveSettings properties.\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ToolTip", "A movie scene section for animating FComposurePostMoveSettings properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Pivot_MetaData[] = {
		{ "Comment", "/** The curves for animating the pivot property. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ToolTip", "The curves for animating the pivot property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Pivot, UMovieSceneComposurePostMoveSettingsSection), nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposurePostMoveSettingsSection, Pivot), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Pivot_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** The curves for animating the translation property. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ToolTip", "The curves for animating the translation property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, UMovieSceneComposurePostMoveSettingsSection), nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposurePostMoveSettingsSection, Translation), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Translation_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_RotationAngle_MetaData[] = {
		{ "Comment", "/** The curve for animating the rotation angle property. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ToolTip", "The curve for animating the rotation angle property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_RotationAngle = { "RotationAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposurePostMoveSettingsSection, RotationAngle), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_RotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_RotationAngle_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** The curve for animating the scale property. */" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneComposurePostMoveSettingsSection.h" },
		{ "ToolTip", "The curve for animating the scale property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneComposurePostMoveSettingsSection, Scale), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Scale_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_RotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComposurePostMoveSettingsSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::ClassParams = {
		&UMovieSceneComposurePostMoveSettingsSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsSection.OuterSingleton, Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsSection.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMovieSceneComposurePostMoveSettingsSection>()
	{
		return UMovieSceneComposurePostMoveSettingsSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComposurePostMoveSettingsSection);
	UMovieSceneComposurePostMoveSettingsSection::~UMovieSceneComposurePostMoveSettingsSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComposurePostMoveSettingsSection, UMovieSceneComposurePostMoveSettingsSection::StaticClass, TEXT("UMovieSceneComposurePostMoveSettingsSection"), &Z_Registration_Info_UClass_UMovieSceneComposurePostMoveSettingsSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComposurePostMoveSettingsSection), 4131513975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_3003735581(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_MovieScene_MovieSceneComposurePostMoveSettingsSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
