// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTracks_init() {}
	MOVIESCENETRACKS_API UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature();
	MOVIESCENETRACKS_API UFunction* Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MovieSceneTracks;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MovieSceneTracks()
	{
		if (!Z_Registration_Info_UPackage__Script_MovieSceneTracks.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionFailure__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MovieSceneTracks_MovieSceneActorPredictionResult__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MovieSceneTracks",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1C14B9A3,
				0xF7F74A74,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MovieSceneTracks.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MovieSceneTracks.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MovieSceneTracks(Z_Construct_UPackage__Script_MovieSceneTracks, TEXT("/Script/MovieSceneTracks"), Z_Registration_Info_UPackage__Script_MovieSceneTracks, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C14B9A3, 0xF7F74A74));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
