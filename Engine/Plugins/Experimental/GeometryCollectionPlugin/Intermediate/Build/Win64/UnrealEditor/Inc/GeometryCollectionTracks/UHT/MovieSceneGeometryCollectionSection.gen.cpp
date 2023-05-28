// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGeometryCollectionSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection();
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister();
	GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams;
class UScriptStruct* FMovieSceneGeometryCollectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionTracks(), TEXT("MovieSceneGeometryCollectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONTRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCollectionParams>()
{
	return FMovieSceneGeometryCollectionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCollectionCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCollectionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData[] = {
		{ "AllowedClasses", "/Script/GeometryCollectionEngine.GeometryCollectionCache" },
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache = { "GeometryCollectionCache", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, GeometryCollectionCache), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "GeometryCollection" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCollectionParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_GeometryCollectionCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewProp_PlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneGeometryCollectionParams",
		sizeof(FMovieSceneGeometryCollectionParams),
		alignof(FMovieSceneGeometryCollectionParams),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams.InnerSingleton;
	}
	void UMovieSceneGeometryCollectionSection::StaticRegisterNativesUMovieSceneGeometryCollectionSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGeometryCollectionSection);
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection_NoRegister()
	{
		return UMovieSceneGeometryCollectionSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control geometry cache playback\n */" },
		{ "IncludePath", "MovieSceneGeometryCollectionSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ToolTip", "Movie scene section that control geometry cache playback" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGeometryCollectionSection, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params_MetaData)) }; // 3574923511
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCollectionSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams = {
		&UMovieSceneGeometryCollectionSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGeometryCollectionSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<UMovieSceneGeometryCollectionSection>()
	{
		return UMovieSceneGeometryCollectionSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCollectionSection);
	UMovieSceneGeometryCollectionSection::~UMovieSceneGeometryCollectionSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneGeometryCollectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCollectionParams_Statics::NewStructOps, TEXT("MovieSceneGeometryCollectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCollectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCollectionParams), 3574923511U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGeometryCollectionSection, UMovieSceneGeometryCollectionSection::StaticClass, TEXT("UMovieSceneGeometryCollectionSection"), &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGeometryCollectionSection), 3271084081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_3581506686(TEXT("/Script/GeometryCollectionTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
