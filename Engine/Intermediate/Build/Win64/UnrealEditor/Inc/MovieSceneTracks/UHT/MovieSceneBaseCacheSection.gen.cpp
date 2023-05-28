// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneBaseCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseCacheSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams;
class UScriptStruct* FMovieSceneBaseCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBaseCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBaseCacheParams>()
{
	return FMovieSceneBaseCacheParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for the cache parameters that will be used in all the cache sections\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Base class for the cache parameters that will be used in all the cache sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBaseCacheParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneBaseCacheParams*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneBaseCacheParams), &Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewProp_bReverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneBaseCacheParams",
		sizeof(FMovieSceneBaseCacheParams),
		alignof(FMovieSceneBaseCacheParams),
		Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams.InnerSingleton;
	}
	void UMovieSceneBaseCacheSection::StaticRegisterNativesUMovieSceneBaseCacheSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBaseCacheSection);
	UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection_NoRegister()
	{
		return UMovieSceneBaseCacheSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control base cache playback\n */" },
		{ "IncludePath", "Sections/MovieSceneBaseCacheSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneBaseCacheSection.h" },
		{ "ToolTip", "Movie scene section that control base cache playback" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBaseCacheSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::ClassParams = {
		&UMovieSceneBaseCacheSection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBaseCacheSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneBaseCacheSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBaseCacheSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBaseCacheSection>()
	{
		return UMovieSceneBaseCacheSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBaseCacheSection);
	UMovieSceneBaseCacheSection::~UMovieSceneBaseCacheSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneBaseCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBaseCacheParams_Statics::NewStructOps, TEXT("MovieSceneBaseCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBaseCacheParams), 3706018900U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBaseCacheSection, UMovieSceneBaseCacheSection::StaticClass, TEXT("UMovieSceneBaseCacheSection"), &Z_Registration_Info_UClass_UMovieSceneBaseCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBaseCacheSection), 987439996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_3201702225(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneBaseCacheSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
