// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGroomCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomCache_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams;
class UScriptStruct* FMovieSceneGroomCacheParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("MovieSceneGroomCacheParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FMovieSceneGroomCacheParams>()
{
	return FMovieSceneGroomCacheParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomCache;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGroomCacheParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The animation this section plays */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The animation this section plays" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache = { "GroomCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheParams, GroomCache), Z_Construct_UClass_UGroomCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset for the first loop of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset for the first loop of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset = { "FirstLoopStartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheParams, FirstLoopStartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset into the beginning of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset into the beginning of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The offset into the end of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The offset into the end of the animation clip" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheParams, EndFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "Comment", "/** The playback rate of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "The playback rate of the animation clip" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheParams, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Reverse the playback of the animation clip */" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "Reverse the playback of the animation clip" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FMovieSceneGroomCacheParams*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMovieSceneGroomCacheParams), &Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_GroomCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_FirstLoopStartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewProp_bReverse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"MovieSceneGroomCacheParams",
		sizeof(FMovieSceneGroomCacheParams),
		alignof(FMovieSceneGroomCacheParams),
		Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams.InnerSingleton;
	}
	void UMovieSceneGroomCacheSection::StaticRegisterNativesUMovieSceneGroomCacheSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGroomCacheSection);
	UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection_NoRegister()
	{
		return UMovieSceneGroomCacheSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that control GroomCache playback\n */" },
		{ "IncludePath", "MovieSceneGroomCacheSection.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ToolTip", "Movie scene section that control GroomCache playback" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGroomCacheSection, Params), Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params_MetaData)) }; // 3558361757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGroomCacheSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::ClassParams = {
		&UMovieSceneGroomCacheSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGroomCacheSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton, Z_Construct_UClass_UMovieSceneGroomCacheSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGroomCacheSection.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UMovieSceneGroomCacheSection>()
	{
		return UMovieSceneGroomCacheSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGroomCacheSection);
	UMovieSceneGroomCacheSection::~UMovieSceneGroomCacheSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneGroomCacheParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams_Statics::NewStructOps, TEXT("MovieSceneGroomCacheParams"), &Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGroomCacheParams), 3558361757U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGroomCacheSection, UMovieSceneGroomCacheSection::StaticClass, TEXT("UMovieSceneGroomCacheSection"), &Z_Registration_Info_UClass_UMovieSceneGroomCacheSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGroomCacheSection), 4119240416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_2706351876(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
