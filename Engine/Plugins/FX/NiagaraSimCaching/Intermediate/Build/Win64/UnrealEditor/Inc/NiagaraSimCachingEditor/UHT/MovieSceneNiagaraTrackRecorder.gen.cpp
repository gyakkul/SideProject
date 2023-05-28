// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneNiagaraTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraTrackRecorder() {}
// Cross Module References
	NIAGARASIMCACHINGEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder();
	NIAGARASIMCACHINGEDITOR_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_NiagaraSimCachingEditor();
// End Cross Module References
	void UMovieSceneNiagaraTrackRecorder::StaticRegisterNativesUMovieSceneNiagaraTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_NoRegister()
	{
		return UMovieSceneNiagaraTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraSimCachingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sequencer/MovieSceneNiagaraTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneNiagaraTrackRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::ClassParams = {
		&UMovieSceneNiagaraTrackRecorder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraTrackRecorder.OuterSingleton;
	}
	template<> NIAGARASIMCACHINGEDITOR_API UClass* StaticClass<UMovieSceneNiagaraTrackRecorder>()
	{
		return UMovieSceneNiagaraTrackRecorder::StaticClass();
	}
	UMovieSceneNiagaraTrackRecorder::UMovieSceneNiagaraTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraTrackRecorder);
	UMovieSceneNiagaraTrackRecorder::~UMovieSceneNiagaraTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCachingEditor_Public_Sequencer_MovieSceneNiagaraTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCachingEditor_Public_Sequencer_MovieSceneNiagaraTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraTrackRecorder, UMovieSceneNiagaraTrackRecorder::StaticClass, TEXT("UMovieSceneNiagaraTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneNiagaraTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraTrackRecorder), 1555601437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCachingEditor_Public_Sequencer_MovieSceneNiagaraTrackRecorder_h_2151016666(TEXT("/Script/NiagaraSimCachingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCachingEditor_Public_Sequencer_MovieSceneNiagaraTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_NiagaraSimCaching_Source_NiagaraSimCachingEditor_Public_Sequencer_MovieSceneNiagaraTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
