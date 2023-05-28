// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneCompletionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCompletionMode() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneCompletionMode;
	static UEnum* EMovieSceneCompletionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneCompletionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneCompletionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneCompletionMode"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneCompletionMode.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneCompletionMode>()
	{
		return EMovieSceneCompletionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enumerators[] = {
		{ "EMovieSceneCompletionMode::KeepState", (int64)EMovieSceneCompletionMode::KeepState },
		{ "EMovieSceneCompletionMode::RestoreState", (int64)EMovieSceneCompletionMode::RestoreState },
		{ "EMovieSceneCompletionMode::ProjectDefault", (int64)EMovieSceneCompletionMode::ProjectDefault },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumeration specifying how to handle state when this section is no longer evaluated */" },
		{ "KeepState.Name", "EMovieSceneCompletionMode::KeepState" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneCompletionMode.h" },
		{ "ProjectDefault.Name", "EMovieSceneCompletionMode::ProjectDefault" },
		{ "RestoreState.Name", "EMovieSceneCompletionMode::RestoreState" },
		{ "ToolTip", "Enumeration specifying how to handle state when this section is no longer evaluated" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneCompletionMode",
		"EMovieSceneCompletionMode",
		Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneCompletionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneCompletionMode.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneCompletionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneCompletionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h_Statics::EnumInfo[] = {
		{ EMovieSceneCompletionMode_StaticEnum, TEXT("EMovieSceneCompletionMode"), &Z_Registration_Info_UEnum_EMovieSceneCompletionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 189609525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h_3947067361(TEXT("/Script/MovieScene"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
