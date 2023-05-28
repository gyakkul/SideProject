// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneMaterialParameterCollectionTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterCollectionTrack() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneMaterialParameterCollectionTrack::StaticRegisterNativesUMovieSceneMaterialParameterCollectionTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialParameterCollectionTrack);
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_NoRegister()
	{
		return UMovieSceneMaterialParameterCollectionTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MPC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of material parameter collections in a movie scene.\n */" },
		{ "IncludePath", "Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles manipulation of material parameter collections in a movie scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The material parameter collection to manipulate */" },
		{ "DisplayName", "Material Parameter Collection" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialParameterCollectionTrack.h" },
		{ "ToolTip", "The material parameter collection to manipulate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC = { "MPC", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMaterialParameterCollectionTrack, MPC), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::NewProp_MPC,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMaterialParameterCollectionTrack, IMovieSceneEntityProvider), false },  // 1947645787
			{ Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneMaterialParameterCollectionTrack, IMovieSceneParameterSectionExtender), false },  // 4082455961
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterCollectionTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::ClassParams = {
		&UMovieSceneMaterialParameterCollectionTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterCollectionTrack>()
	{
		return UMovieSceneMaterialParameterCollectionTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterCollectionTrack);
	UMovieSceneMaterialParameterCollectionTrack::~UMovieSceneMaterialParameterCollectionTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialParameterCollectionTrack, UMovieSceneMaterialParameterCollectionTrack::StaticClass, TEXT("UMovieSceneMaterialParameterCollectionTrack"), &Z_Registration_Info_UClass_UMovieSceneMaterialParameterCollectionTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialParameterCollectionTrack), 1060392372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h_2084304180(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneMaterialParameterCollectionTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
