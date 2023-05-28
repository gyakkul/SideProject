// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneSkeletalAnimationTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSkeletalAnimationTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams;
class UScriptStruct* FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimRootMotionTrackParams>()
{
	return FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**Struct to hold the cached root motion positions based upon how we calculated them.\n* Also provides way to get the root motion at a particular time.\n*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Struct to hold the cached root motion positions based upon how we calculated them.\nAlso provides way to get the root motion at a particular time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimRootMotionTrackParams>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneSkeletalAnimRootMotionTrackParams",
		sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams),
		alignof(FMovieSceneSkeletalAnimRootMotionTrackParams),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams.InnerSingleton;
	}
	void UMovieSceneSkeletalAnimationTrack::StaticRegisterNativesUMovieSceneSkeletalAnimationTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSkeletalAnimationTrack);
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_NoRegister()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacySectionIndexBlend_MetaData[];
#endif
		static void NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacySectionIndexBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMotionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendFirstChildOfRoot_MetaData[];
#endif
		static void NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendFirstChildOfRoot;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRootMotionTrail_MetaData[];
#endif
		static void NewProp_bShowRootMotionTrail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRootMotionTrail;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors\n */" },
		{ "IncludePath", "Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bUseLegacySectionIndexBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend = { "bUseLegacySectionIndexBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams = { "RootMotionParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSkeletalAnimationTrack, RootMotionParams), Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams_MetaData)) }; // 63368516
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to blend and adjust the first child node with animation instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion*/" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to blend and adjust the first child node with animation instead of the root, this should be true for blending when the root is static, false if the animations have proper root motion" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bBlendFirstChildOfRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot = { "bBlendFirstChildOfRoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData[] = {
		{ "Category", "Root Motions" },
		{ "Comment", "/** Whether to show the position of the root for this sections */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSkeletalAnimationTrack.h" },
		{ "ToolTip", "Whether to show the position of the root for this sections" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit(void* Obj)
	{
		((UMovieSceneSkeletalAnimationTrack*)Obj)->bShowRootMotionTrail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail = { "bShowRootMotionTrail", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneSkeletalAnimationTrack), &Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_AnimationSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bUseLegacySectionIndexBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_RootMotionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bBlendFirstChildOfRoot,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::NewProp_bShowRootMotionTrail,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSkeletalAnimationTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams = {
		&UMovieSceneSkeletalAnimationTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSkeletalAnimationTrack>()
	{
		return UMovieSceneSkeletalAnimationTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSkeletalAnimationTrack);
	UMovieSceneSkeletalAnimationTrack::~UMovieSceneSkeletalAnimationTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSkeletalAnimRootMotionTrackParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimRootMotionTrackParams_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimRootMotionTrackParams"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimRootMotionTrackParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimRootMotionTrackParams), 63368516U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSkeletalAnimationTrack, UMovieSceneSkeletalAnimationTrack::StaticClass, TEXT("UMovieSceneSkeletalAnimationTrack"), &Z_Registration_Info_UClass_UMovieSceneSkeletalAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSkeletalAnimationTrack), 1993836398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_1891822691(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSkeletalAnimationTrack_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
