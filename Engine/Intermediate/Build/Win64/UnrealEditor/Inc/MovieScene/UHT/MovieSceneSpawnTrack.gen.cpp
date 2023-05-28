// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneSpawnTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSpawnTrack() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneSpawnTrack::StaticRegisterNativesUMovieSceneSpawnTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSpawnTrack);
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister()
	{
		return UMovieSceneSpawnTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSpawnTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles when a spawnable should be spawned and destroyed\n */" },
		{ "IncludePath", "Tracks/MovieSceneSpawnTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Handles when a spawnable should be spawned and destroyed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** All the sections in this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ToolTip", "All the sections in this track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSpawnTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Comment", "/** The guid relating to the object we are to spawn and destroy */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSpawnTrack.h" },
		{ "ToolTip", "The guid relating to the object we are to spawn and destroy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSpawnTrack, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::NewProp_ObjectGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSpawnTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::ClassParams = {
		&UMovieSceneSpawnTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSpawnTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSpawnTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSpawnTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSpawnTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSpawnTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSpawnTrack>()
	{
		return UMovieSceneSpawnTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSpawnTrack);
	UMovieSceneSpawnTrack::~UMovieSceneSpawnTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSpawnTrack, UMovieSceneSpawnTrack::StaticClass, TEXT("UMovieSceneSpawnTrack"), &Z_Registration_Info_UClass_UMovieSceneSpawnTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSpawnTrack), 1167751548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_3937047758(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneSpawnTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
