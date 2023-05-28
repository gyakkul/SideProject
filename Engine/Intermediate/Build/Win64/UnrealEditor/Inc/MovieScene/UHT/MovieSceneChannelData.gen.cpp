// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChannelData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyHandleLookupTable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneKeyHandleMap>() == std::is_polymorphic<FKeyHandleLookupTable>(), "USTRUCT FMovieSceneKeyHandleMap cannot be polymorphic unless super FKeyHandleLookupTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap;
class UScriptStruct* FMovieSceneKeyHandleMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneKeyHandleMap"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneKeyHandleMap>()
{
	return FMovieSceneKeyHandleMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A map of key handles that is copyable, but does not copy data on copy */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneChannelData.h" },
		{ "ToolTip", "A map of key handles that is copyable, but does not copy data on copy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneKeyHandleMap>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FKeyHandleLookupTable,
		&NewStructOps,
		"MovieSceneKeyHandleMap",
		sizeof(FMovieSceneKeyHandleMap),
		alignof(FMovieSceneKeyHandleMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneKeyHandleMap::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap_Statics::NewStructOps, TEXT("MovieSceneKeyHandleMap"), &Z_Registration_Info_UScriptStruct_MovieSceneKeyHandleMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneKeyHandleMap), 2999086866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_2282114626(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneChannelData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
