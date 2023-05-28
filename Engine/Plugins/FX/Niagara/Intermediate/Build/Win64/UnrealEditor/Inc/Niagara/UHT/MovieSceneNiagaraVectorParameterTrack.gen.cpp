// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraVectorParameterTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraVectorParameterTrack::StaticRegisterNativesUMovieSceneNiagaraVectorParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraVectorParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraVectorParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraParameterTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A track for animating float niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
		{ "ToolTip", "A track for animating float niagara parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraVectorParameterTrack.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraVectorParameterTrack, ChannelsUsed), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::NewProp_ChannelsUsed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneNiagaraVectorParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraVectorParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraVectorParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraVectorParameterTrack>()
	{
		return UMovieSceneNiagaraVectorParameterTrack::StaticClass();
	}
	UMovieSceneNiagaraVectorParameterTrack::UMovieSceneNiagaraVectorParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraVectorParameterTrack);
	UMovieSceneNiagaraVectorParameterTrack::~UMovieSceneNiagaraVectorParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraVectorParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraVectorParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraVectorParameterTrack, UMovieSceneNiagaraVectorParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraVectorParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraVectorParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraVectorParameterTrack), 2063622834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraVectorParameterTrack_h_264350739(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraVectorParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraVectorParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
