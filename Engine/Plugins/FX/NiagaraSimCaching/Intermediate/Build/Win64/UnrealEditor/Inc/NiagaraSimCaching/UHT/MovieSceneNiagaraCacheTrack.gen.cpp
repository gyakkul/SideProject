// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraCacheTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheTrack();
	NIAGARASIMCACHING_API UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraSimCaching();
// End Cross Module References
	void UMovieSceneNiagaraCacheTrack::StaticRegisterNativesUMovieSceneNiagaraCacheTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraCacheTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_NoRegister()
	{
		return UMovieSceneNiagaraCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRecording_MetaData[];
#endif
		static void NewProp_bIsRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRecording;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheRecordingEnabled_MetaData[];
#endif
		static void NewProp_bCacheRecordingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheRecordingEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCaching,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of NiagaraCache\n */" },
		{ "IncludePath", "Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h" },
		{ "ToolTip", "Handles animation of NiagaraCache" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_MetaData[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_SetBit(void* Obj)
	{
		((UMovieSceneNiagaraCacheTrack*)Obj)->bIsRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording = { "bIsRecording", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneNiagaraCacheTrack), &Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraCacheTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Niagara/Sequencer/MovieSceneNiagaraCacheTrack.h" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_SetBit(void* Obj)
	{
		((UMovieSceneNiagaraCacheTrack*)Obj)->bCacheRecordingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled = { "bCacheRecordingEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneNiagaraCacheTrack), &Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bIsRecording,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_AnimationSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::NewProp_bCacheRecordingEnabled,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraCacheTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
			{ Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraCacheTrack, IMovieSceneCachedTrack), false },  // 2241321401
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraCacheTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraCacheTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraCacheTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraCacheTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack.OuterSingleton;
	}
	template<> NIAGARASIMCACHING_API UClass* StaticClass<UMovieSceneNiagaraCacheTrack>()
	{
		return UMovieSceneNiagaraCacheTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraCacheTrack);
	UMovieSceneNiagaraCacheTrack::~UMovieSceneNiagaraCacheTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraCacheTrack, UMovieSceneNiagaraCacheTrack::StaticClass, TEXT("UMovieSceneNiagaraCacheTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraCacheTrack), 2324020965U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_4080553116(TEXT("/Script/NiagaraSimCaching"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCaching_Public_Niagara_Sequencer_MovieSceneNiagaraCacheTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
