// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraBoolParameterTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraBoolParameterTrack::StaticRegisterNativesUMovieSceneNiagaraBoolParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraBoolParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraBoolParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating boolean niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraBoolParameterTrack.h" },
		{ "ToolTip", "A track for animating boolean niagara parameters." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraBoolParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraBoolParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraBoolParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraBoolParameterTrack>()
	{
		return UMovieSceneNiagaraBoolParameterTrack::StaticClass();
	}
	UMovieSceneNiagaraBoolParameterTrack::UMovieSceneNiagaraBoolParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraBoolParameterTrack);
	UMovieSceneNiagaraBoolParameterTrack::~UMovieSceneNiagaraBoolParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraBoolParameterTrack, UMovieSceneNiagaraBoolParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraBoolParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraBoolParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraBoolParameterTrack), 3711110112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_2731102336(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraBoolParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
