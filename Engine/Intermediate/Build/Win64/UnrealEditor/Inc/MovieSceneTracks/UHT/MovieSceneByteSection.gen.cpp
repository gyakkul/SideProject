// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneByteSection.h"
#include "Channels/MovieSceneByteChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneByteSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneByteSection::StaticRegisterNativesUMovieSceneByteSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneByteSection);
	UClass* Z_Construct_UClass_UMovieSceneByteSection_NoRegister()
	{
		return UMovieSceneByteSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneByteSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneByteSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single byte section.\n */" },
		{ "IncludePath", "Sections/MovieSceneByteSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
		{ "ToolTip", "A single byte section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneByteSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve = { "ByteCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneByteSection, ByteCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve_MetaData)) }; // 3302488198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneByteSection_Statics::NewProp_ByteCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneByteSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneByteSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneByteSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneByteSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneByteSection_Statics::ClassParams = {
		&UMovieSceneByteSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneByteSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneByteSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneByteSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneByteSection.OuterSingleton, Z_Construct_UClass_UMovieSceneByteSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneByteSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneByteSection>()
	{
		return UMovieSceneByteSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneByteSection);
	UMovieSceneByteSection::~UMovieSceneByteSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneByteSection, UMovieSceneByteSection::StaticClass, TEXT("UMovieSceneByteSection"), &Z_Registration_Info_UClass_UMovieSceneByteSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneByteSection), 3679718835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_1243442593(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneByteSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
