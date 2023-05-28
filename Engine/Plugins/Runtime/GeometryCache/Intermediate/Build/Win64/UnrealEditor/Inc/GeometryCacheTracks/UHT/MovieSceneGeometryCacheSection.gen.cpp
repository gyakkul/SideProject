// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGeometryCacheSection.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection();
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister();
	GEOMETRYCACHETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams;
class UScriptStruct* FMovieSceneGeometryCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams, (UObject*)Z_Construct_UPackage__Script_GeometryCacheTracks(), TEXT("MovieSceneGeometryCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.OuterSingleton;
}
template<> GEOMETRYCACHETRACKS_API UScriptStruct* StaticStruct<FMovieSceneGeometryCacheParams>()
{
	return FMovieSceneGeometryCacheParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCacheAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLoopStartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstLoopStartFrameOffset;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGeometryCacheParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The animation this section plays */" },
		{ "DisplayName", "Geometry Cache" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset = { "GeometryCacheAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, GeometryCacheAsset), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneGeometryCacheParams*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneGeometryCacheParams), &Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, StartOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, EndOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGeometryCacheParams, GeometryCache_DEPRECATED), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCacheAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_EndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewProp_GeometryCache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneGeometryCacheParams",
		sizeof(FMovieSceneGeometryCacheParams),
		alignof(FMovieSceneGeometryCacheParams),
		Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams.InnerSingleton;
	}
	void UMovieSceneGeometryCacheSection::StaticRegisterNativesUMovieSceneGeometryCacheSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGeometryCacheSection);
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection_NoRegister()
	{
		return UMovieSceneGeometryCacheSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control geometry cache playback\n */" },
		{ "IncludePath", "MovieSceneGeometryCacheSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ToolTip", "Movie scene section that control geometry cache playback" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGeometryCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params_MetaData)) }; // 679223152
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCacheSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::ClassParams = {
		&UMovieSceneGeometryCacheSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGeometryCacheSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection.OuterSingleton;
	}
	template<> GEOMETRYCACHETRACKS_API UClass* StaticClass<UMovieSceneGeometryCacheSection>()
	{
		return UMovieSceneGeometryCacheSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCacheSection);
	UMovieSceneGeometryCacheSection::~UMovieSceneGeometryCacheSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneGeometryCacheSection)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneGeometryCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGeometryCacheParams_Statics::NewStructOps, TEXT("MovieSceneGeometryCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneGeometryCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGeometryCacheParams), 679223152U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGeometryCacheSection, UMovieSceneGeometryCacheSection::StaticClass, TEXT("UMovieSceneGeometryCacheSection"), &Z_Registration_Info_UClass_UMovieSceneGeometryCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGeometryCacheSection), 3782247452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_3523916458(TEXT("/Script/GeometryCacheTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
