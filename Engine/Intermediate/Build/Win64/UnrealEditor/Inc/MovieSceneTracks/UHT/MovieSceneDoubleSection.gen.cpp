// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneDoubleSection.h"
#include "Channels/MovieSceneDoubleChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDoubleSection::StaticRegisterNativesUMovieSceneDoubleSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleSection);
	UClass* Z_Construct_UClass_UMovieSceneDoubleSection_NoRegister()
	{
		return UMovieSceneDoubleSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoubleSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoubleSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A double precision floating point section\n */" },
		{ "IncludePath", "Sections/MovieSceneDoubleSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDoubleSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A double precision floating point section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve_MetaData[] = {
		{ "Comment", "/** Double data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneDoubleSection.h" },
		{ "ToolTip", "Double data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve = { "DoubleCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDoubleSection, DoubleCurve), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve_MetaData)) }; // 3270845618
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoubleSection_Statics::NewProp_DoubleCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDoubleSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoubleSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleSection_Statics::ClassParams = {
		&UMovieSceneDoubleSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoubleSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoubleSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleSection>()
	{
		return UMovieSceneDoubleSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleSection);
	UMovieSceneDoubleSection::~UMovieSceneDoubleSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoubleSection, UMovieSceneDoubleSection::StaticClass, TEXT("UMovieSceneDoubleSection"), &Z_Registration_Info_UClass_UMovieSceneDoubleSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleSection), 2516779803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_596725692(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneDoubleSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
