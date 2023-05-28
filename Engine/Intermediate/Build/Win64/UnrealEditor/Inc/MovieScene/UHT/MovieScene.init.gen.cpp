// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene_init() {}
	MOVIESCENE_API UFunction* Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MovieScene;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MovieScene()
	{
		if (!Z_Registration_Info_UPackage__Script_MovieScene.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MovieScene_OnMovieSceneSequencePlayerEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MovieScene",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0162FEC9,
				0x224E45A0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MovieScene.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MovieScene.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MovieScene(Z_Construct_UPackage__Script_MovieScene, TEXT("/Script/MovieScene"), Z_Registration_Info_UPackage__Script_MovieScene, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0162FEC9, 0x224E45A0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
