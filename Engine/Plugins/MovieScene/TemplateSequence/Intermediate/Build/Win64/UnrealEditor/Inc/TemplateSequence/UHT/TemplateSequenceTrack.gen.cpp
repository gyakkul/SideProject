// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/TemplateSequenceTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	void UTemplateSequenceTrack::StaticRegisterNativesUTemplateSequenceTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceTrack);
	UClass* Z_Construct_UClass_UTemplateSequenceTrack_NoRegister()
	{
		return UTemplateSequenceTrack::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/TemplateSequenceTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/TemplateSequenceTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams = {
		&UTemplateSequenceTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceTrack()
	{
		if (!Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton, Z_Construct_UClass_UTemplateSequenceTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateSequenceTrack.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequenceTrack>()
	{
		return UTemplateSequenceTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceTrack);
	UTemplateSequenceTrack::~UTemplateSequenceTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceTrack, UTemplateSequenceTrack::StaticClass, TEXT("UTemplateSequenceTrack"), &Z_Registration_Info_UClass_UTemplateSequenceTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceTrack), 2612772126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_1614753623(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_Tracks_TemplateSequenceTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
