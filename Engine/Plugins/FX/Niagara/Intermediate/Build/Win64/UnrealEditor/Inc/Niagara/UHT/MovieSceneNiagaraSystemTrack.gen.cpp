// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/MovieSceneNiagaraSystemTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraSystemTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrack();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraSystemTrack::StaticRegisterNativesUMovieSceneNiagaraSystemTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraSystemTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_NoRegister()
	{
		return UMovieSceneNiagaraSystemTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieScene/MovieSceneNiagaraSystemTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneNiagaraSystemTrack.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraSystemTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraSystemTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraSystemTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraSystemTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraSystemTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraSystemTrack>()
	{
		return UMovieSceneNiagaraSystemTrack::StaticClass();
	}
	UMovieSceneNiagaraSystemTrack::UMovieSceneNiagaraSystemTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraSystemTrack);
	UMovieSceneNiagaraSystemTrack::~UMovieSceneNiagaraSystemTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraSystemTrack, UMovieSceneNiagaraSystemTrack::StaticClass, TEXT("UMovieSceneNiagaraSystemTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraSystemTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraSystemTrack), 2871331653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_2205282713(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_MovieSceneNiagaraSystemTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
