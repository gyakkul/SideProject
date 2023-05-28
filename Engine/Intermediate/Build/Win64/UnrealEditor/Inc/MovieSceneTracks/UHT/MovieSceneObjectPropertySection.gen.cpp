// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneObjectPropertySection.h"
#include "Channels/MovieSceneObjectPathChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertySection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneObjectPropertySection::StaticRegisterNativesUMovieSceneObjectPropertySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneObjectPropertySection);
	UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection_NoRegister()
	{
		return UMovieSceneObjectPropertySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneObjectPropertySection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneObjectPropertySection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneObjectPropertySection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel = { "ObjectChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneObjectPropertySection, ObjectChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel_MetaData)) }; // 3165347126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::NewProp_ObjectChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneObjectPropertySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::ClassParams = {
		&UMovieSceneObjectPropertySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneObjectPropertySection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton, Z_Construct_UClass_UMovieSceneObjectPropertySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneObjectPropertySection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneObjectPropertySection>()
	{
		return UMovieSceneObjectPropertySection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneObjectPropertySection);
	UMovieSceneObjectPropertySection::~UMovieSceneObjectPropertySection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneObjectPropertySection, UMovieSceneObjectPropertySection::StaticClass, TEXT("UMovieSceneObjectPropertySection"), &Z_Registration_Info_UClass_UMovieSceneObjectPropertySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneObjectPropertySection), 3276123000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_2507763878(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneObjectPropertySection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
