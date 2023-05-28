// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieSceneMarginSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMarginSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneMarginSection::StaticRegisterNativesUMovieSceneMarginSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMarginSection);
	UClass* Z_Construct_UClass_UMovieSceneMarginSection_NoRegister()
	{
		return UMovieSceneMarginSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMarginSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TopCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BottomCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMarginSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A section in a Margin track\n */" },
		{ "IncludePath", "Animation/MovieSceneMarginSection.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "A section in a Margin track" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData[] = {
		{ "Comment", "/** Red curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Red curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve = { "TopCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, TopCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData[] = {
		{ "Comment", "/** Green curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Green curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve = { "LeftCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, LeftCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData[] = {
		{ "Comment", "/** Blue curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Blue curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve = { "RightCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, RightCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData[] = {
		{ "Comment", "/** Alpha curve data */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneMarginSection.h" },
		{ "ToolTip", "Alpha curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve = { "BottomCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMarginSection, BottomCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_TopCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_LeftCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_RightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMarginSection_Statics::NewProp_BottomCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMarginSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMarginSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMarginSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams = {
		&UMovieSceneMarginSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMarginSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMarginSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton, Z_Construct_UClass_UMovieSceneMarginSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMarginSection.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieSceneMarginSection>()
	{
		return UMovieSceneMarginSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMarginSection);
	UMovieSceneMarginSection::~UMovieSceneMarginSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMarginSection, UMovieSceneMarginSection::StaticClass, TEXT("UMovieSceneMarginSection"), &Z_Registration_Info_UClass_UMovieSceneMarginSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMarginSection), 637965099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_3909101778(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneMarginSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
