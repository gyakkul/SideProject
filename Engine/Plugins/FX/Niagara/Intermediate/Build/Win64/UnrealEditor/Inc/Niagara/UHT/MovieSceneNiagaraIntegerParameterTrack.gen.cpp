// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraIntegerParameterTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraIntegerParameterTrack::StaticRegisterNativesUMovieSceneNiagaraIntegerParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraIntegerParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraIntegerParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating integer niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterTrack.h" },
		{ "ToolTip", "A track for animating integer niagara parameters." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraIntegerParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraIntegerParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraIntegerParameterTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraIntegerParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraIntegerParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraIntegerParameterTrack.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraIntegerParameterTrack>()
	{
		return UMovieSceneNiagaraIntegerParameterTrack::StaticClass();
	}
	UMovieSceneNiagaraIntegerParameterTrack::UMovieSceneNiagaraIntegerParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraIntegerParameterTrack);
	UMovieSceneNiagaraIntegerParameterTrack::~UMovieSceneNiagaraIntegerParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraIntegerParameterTrack, UMovieSceneNiagaraIntegerParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraIntegerParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraIntegerParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraIntegerParameterTrack), 205375509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterTrack_h_984655323(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
