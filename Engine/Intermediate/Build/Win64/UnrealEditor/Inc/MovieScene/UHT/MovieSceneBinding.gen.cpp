// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBinding;
class UScriptStruct* FMovieSceneBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBinding, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBinding.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBinding>()
{
	return FMovieSceneBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BindingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortingOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortingOrder;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A set of tracks bound to runtime objects\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "A set of tracks bound to runtime objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Comment", "/** Object binding guid for runtime objects */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Object binding guid for runtime objects" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBinding, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData[] = {
		{ "Comment", "/** Display name */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "Display name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName = { "BindingName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBinding, BindingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "/** All tracks in this binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "All tracks in this binding" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBinding, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData[] = {
		{ "Comment", "/** The desired sorting order for this binding in Sequencer */" },
		{ "ModuleRelativePath", "Public/MovieSceneBinding.h" },
		{ "ToolTip", "The desired sorting order for this binding in Sequencer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder = { "SortingOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBinding, SortingOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_ObjectGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_BindingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_Tracks,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewProp_SortingOrder,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneBinding",
		sizeof(FMovieSceneBinding),
		alignof(FMovieSceneBinding),
		Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneBinding::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBinding_Statics::NewStructOps, TEXT("MovieSceneBinding"), &Z_Registration_Info_UScriptStruct_MovieSceneBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBinding), 1180083504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_947236372(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
