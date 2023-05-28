// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneIntegerSection.h"
#include "Channels/MovieSceneIntegerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneIntegerSection::StaticRegisterNativesUMovieSceneIntegerSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneIntegerSection);
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection_NoRegister()
	{
		return UMovieSceneIntegerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneIntegerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single integer section.\n */" },
		{ "IncludePath", "Sections/MovieSceneIntegerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "A single integer section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneIntegerSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve = { "IntegerCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneIntegerSection, IntegerCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve_MetaData)) }; // 2921625975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneIntegerSection_Statics::NewProp_IntegerCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneIntegerSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneIntegerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneIntegerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams = {
		&UMovieSceneIntegerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneIntegerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneIntegerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneIntegerSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneIntegerSection>()
	{
		return UMovieSceneIntegerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneIntegerSection);
	UMovieSceneIntegerSection::~UMovieSceneIntegerSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneIntegerSection, UMovieSceneIntegerSection::StaticClass, TEXT("UMovieSceneIntegerSection"), &Z_Registration_Info_UClass_UMovieSceneIntegerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneIntegerSection), 3785598091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_1255426424(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneIntegerSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
