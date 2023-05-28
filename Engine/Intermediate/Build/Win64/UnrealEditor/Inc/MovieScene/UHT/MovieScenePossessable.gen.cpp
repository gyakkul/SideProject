// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScenePossessable.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePossessable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePossessable;
class UScriptStruct* FMovieScenePossessable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePossessable, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePossessable"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePossessable.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePossessable>()
{
	return FMovieScenePossessable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePossessable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossessedObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_PossessedObjectClass;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableObjectBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnableObjectBindingID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object\n */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "MovieScenePossessable is a \"typed slot\" used to allow the MovieScene to control an already-existing object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePossessable>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Unique identifier of the possessable object. */// @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//\x09\x09\x09\x09\x09Sometimes we'll need to generate fresh Guids.\n" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Unique identifier of the possessable object. // @todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk).\n//                                     Sometimes we'll need to generate fresh Guids." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name label for this slot */// @todo sequencer: Should be editor-only probably\n" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Name label for this slot // @todo sequencer: Should be editor-only probably" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData[] = {
		{ "Comment", "/** Type of the object we'll be possessing */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Type of the object we'll be possessing" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass = { "PossessedObjectClass", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, PossessedObjectClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData[] = {
		{ "Comment", "/** GUID relating to this possessable's parent, if applicable. */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "GUID relating to this possessable's parent, if applicable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid = { "ParentGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, ParentGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID_MetaData[] = {
		{ "Comment", "/** Optional object binding ID if this possessable possesses a spawnable */" },
		{ "ModuleRelativePath", "Public/MovieScenePossessable.h" },
		{ "ToolTip", "Optional object binding ID if this possessable possesses a spawnable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID = { "SpawnableObjectBindingID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePossessable, SpawnableObjectBindingID), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_PossessedObjectClass,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_ParentGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewProp_SpawnableObjectBindingID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePossessable",
		sizeof(FMovieScenePossessable),
		alignof(FMovieScenePossessable),
		Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePossessable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePossessable::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePossessable_Statics::NewStructOps, TEXT("MovieScenePossessable"), &Z_Registration_Info_UScriptStruct_MovieScenePossessable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePossessable), 517388266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_1533850360(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieScenePossessable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
