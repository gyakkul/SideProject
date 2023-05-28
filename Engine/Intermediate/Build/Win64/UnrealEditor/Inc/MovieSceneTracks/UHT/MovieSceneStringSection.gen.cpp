// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneStringSection.h"
#include "Channels/MovieSceneStringChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneStringSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneStringSection::StaticRegisterNativesUMovieSceneStringSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneStringSection);
	UClass* Z_Construct_UClass_UMovieSceneStringSection_NoRegister()
	{
		return UMovieSceneStringSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneStringSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneStringSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneStringSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single string section\n */" },
		{ "IncludePath", "Sections/MovieSceneStringSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
		{ "ToolTip", "A single string section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve_MetaData[] = {
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneStringSection.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneStringSection, StringCurve), Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve_MetaData)) }; // 2536368632
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneStringSection_Statics::NewProp_StringCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneStringSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneStringSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneStringSection_Statics::ClassParams = {
		&UMovieSceneStringSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneStringSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneStringSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneStringSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton, Z_Construct_UClass_UMovieSceneStringSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneStringSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneStringSection>()
	{
		return UMovieSceneStringSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneStringSection);
	UMovieSceneStringSection::~UMovieSceneStringSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneStringSection, UMovieSceneStringSection::StaticClass, TEXT("UMovieSceneStringSection"), &Z_Registration_Info_UClass_UMovieSceneStringSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneStringSection), 3168716269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_1571163899(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneStringSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
