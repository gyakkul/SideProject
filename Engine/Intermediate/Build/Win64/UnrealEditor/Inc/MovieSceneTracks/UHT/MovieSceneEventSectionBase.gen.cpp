// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneEventSectionBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSectionBase() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEventSectionBase::StaticRegisterNativesUMovieSceneEventSectionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventSectionBase);
	UClass* Z_Construct_UClass_UMovieSceneEventSectionBase_NoRegister()
	{
		return UMovieSceneEventSectionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSectionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all event sections. Manages dirtying the section and track on recompilation of the director blueprint.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventSectionBase.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSectionBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for all event sections. Manages dirtying the section and track on recompilation of the director blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSectionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::ClassParams = {
		&UMovieSceneEventSectionBase::StaticClass,
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
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSectionBase()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventSectionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventSectionBase.OuterSingleton, Z_Construct_UClass_UMovieSceneEventSectionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventSectionBase.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSectionBase>()
	{
		return UMovieSceneEventSectionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSectionBase);
	UMovieSceneEventSectionBase::~UMovieSceneEventSectionBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventSectionBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventSectionBase, UMovieSceneEventSectionBase::StaticClass, TEXT("UMovieSceneEventSectionBase"), &Z_Registration_Info_UClass_UMovieSceneEventSectionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventSectionBase), 1324880480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_4179766619(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSectionBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
