// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters;
class UScriptStruct* FMovieScenePreAnimatedMaterialParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScenePreAnimatedMaterialParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScenePreAnimatedMaterialParameters>()
{
	return FMovieScenePreAnimatedMaterialParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousParameterContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousParameterContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePreAnimatedMaterialParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial = { "PreviousMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePreAnimatedMaterialParameters, PreviousMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousParameterContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousParameterContainer = { "PreviousParameterContainer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePreAnimatedMaterialParameters, PreviousParameterContainer), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousParameterContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousParameterContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewProp_PreviousParameterContainer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieScenePreAnimatedMaterialParameters",
		sizeof(FMovieScenePreAnimatedMaterialParameters),
		alignof(FMovieScenePreAnimatedMaterialParameters),
		Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePreAnimatedMaterialParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePreAnimatedMaterialParameters_Statics::NewStructOps, TEXT("MovieScenePreAnimatedMaterialParameters"), &Z_Registration_Info_UScriptStruct_MovieScenePreAnimatedMaterialParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePreAnimatedMaterialParameters), 119140915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_3108383786(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
