// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieScenePrimitiveMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePrimitiveMaterialTrack::StaticRegisterNativesUMovieScenePrimitiveMaterialTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialTrack);
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_NoRegister()
	{
		return UMovieScenePrimitiveMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieScenePrimitiveMaterialTrack.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScenePrimitiveMaterialTrack, MaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::NewProp_MaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams = {
		&UMovieScenePrimitiveMaterialTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialTrack>()
	{
		return UMovieScenePrimitiveMaterialTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialTrack);
	UMovieScenePrimitiveMaterialTrack::~UMovieScenePrimitiveMaterialTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialTrack, UMovieScenePrimitiveMaterialTrack::StaticClass, TEXT("UMovieScenePrimitiveMaterialTrack"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialTrack), 657636121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_1862141071(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScenePrimitiveMaterialTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
