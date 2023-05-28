// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneFadeSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneFadeSection::StaticRegisterNativesUMovieSceneFadeSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFadeSection);
	UClass* Z_Construct_UClass_UMovieSceneFadeSection_NoRegister()
	{
		return UMovieSceneFadeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFadeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FadeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFadeAudio_MetaData[];
#endif
		static void NewProp_bFadeAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFadeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section.\n */" },
		{ "IncludePath", "Sections/MovieSceneFadeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "A single floating point section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Float data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFadeSection, FloatCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData[] = {
		{ "Category", "Fade" },
		{ "Comment", "/** Fade color. */" },
		{ "InlineColorPicker", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Fade color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFadeSection, FadeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData[] = {
		{ "Category", "Fade" },
		{ "Comment", "/** Fade audio. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFadeSection.h" },
		{ "ToolTip", "Fade audio." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
	{
		((UMovieSceneFadeSection*)Obj)->bFadeAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneFadeSection), &Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_FadeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFadeSection_Statics::NewProp_bFadeAudio,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneFadeSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFadeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFadeSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFadeSection_Statics::ClassParams = {
		&UMovieSceneFadeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFadeSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFadeSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFadeSection.OuterSingleton, Z_Construct_UClass_UMovieSceneFadeSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFadeSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFadeSection>()
	{
		return UMovieSceneFadeSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFadeSection);
	UMovieSceneFadeSection::~UMovieSceneFadeSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFadeSection, UMovieSceneFadeSection::StaticClass, TEXT("UMovieSceneFadeSection"), &Z_Registration_Info_UClass_UMovieSceneFadeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFadeSection), 790778937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_4022236591(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFadeSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
