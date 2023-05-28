// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraParameterTrack() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UMovieSceneNiagaraTrack();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UMovieSceneNiagaraParameterTrack::StaticRegisterNativesUMovieSceneNiagaraParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneNiagaraParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_NoRegister()
	{
		return UMovieSceneNiagaraParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNiagaraTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for tracks that animate niagara parameters. */" },
		{ "IncludePath", "MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ToolTip", "A base class for tracks that animate niagara parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData[] = {
		{ "Comment", "/** The parameter for the parameter this track animates. */" },
		{ "ModuleRelativePath", "Public/MovieScene/Parameters/MovieSceneNiagaraParameterTrack.h" },
		{ "ToolTip", "The parameter for the parameter this track animates." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneNiagaraParameterTrack, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::NewProp_Parameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneNiagaraParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::ClassParams = {
		&UMovieSceneNiagaraParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::PropPointers),
		0,
		0x00A800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneNiagaraParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneNiagaraParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UMovieSceneNiagaraParameterTrack>()
	{
		return UMovieSceneNiagaraParameterTrack::StaticClass();
	}
	UMovieSceneNiagaraParameterTrack::UMovieSceneNiagaraParameterTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneNiagaraParameterTrack);
	UMovieSceneNiagaraParameterTrack::~UMovieSceneNiagaraParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneNiagaraParameterTrack, UMovieSceneNiagaraParameterTrack::StaticClass, TEXT("UMovieSceneNiagaraParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneNiagaraParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneNiagaraParameterTrack), 662147926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_2948339263(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_MovieScene_Parameters_MovieSceneNiagaraParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
