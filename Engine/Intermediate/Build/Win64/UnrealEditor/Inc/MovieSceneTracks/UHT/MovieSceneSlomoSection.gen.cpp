// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneSlomoSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneSlomoSection::StaticRegisterNativesUMovieSceneSlomoSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSlomoSection);
	UClass* Z_Construct_UClass_UMovieSceneSlomoSection_NoRegister()
	{
		return UMovieSceneSlomoSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSlomoSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSlomoSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSlomoSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section.\n */" },
		{ "IncludePath", "Sections/MovieSceneSlomoSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSlomoSection.h" },
		{ "ToolTip", "A single floating point section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSlomoSection_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneSlomoSection.h" },
		{ "ToolTip", "Float data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSlomoSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSlomoSection, FloatCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSlomoSection_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoSection_Statics::NewProp_FloatCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSlomoSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSlomoSection_Statics::NewProp_FloatCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSlomoSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSlomoSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSlomoSection_Statics::ClassParams = {
		&UMovieSceneSlomoSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSlomoSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSlomoSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSlomoSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSlomoSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSlomoSection.OuterSingleton, Z_Construct_UClass_UMovieSceneSlomoSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSlomoSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSlomoSection>()
	{
		return UMovieSceneSlomoSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSlomoSection);
	UMovieSceneSlomoSection::~UMovieSceneSlomoSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSlomoSection, UMovieSceneSlomoSection::StaticClass, TEXT("UMovieSceneSlomoSection"), &Z_Registration_Info_UClass_UMovieSceneSlomoSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSlomoSection), 2827915552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_89225719(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneSlomoSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
