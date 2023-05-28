// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h"
#include "LiveLinkPresetTypes.h"
#include "MovieScene/MovieSceneLiveLinkStructProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSectionTemplate() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneLiveLinkSectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneLiveLinkSectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate;
class UScriptStruct* FMovieSceneLiveLinkSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate, (UObject*)Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("MovieSceneLiveLinkSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneLiveLinkSectionTemplate>()
{
	return FMovieSceneLiveLinkSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectPreset;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChannelMask_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMask;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSectionsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSectionsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubSectionsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A movie scene evaluation template for post move settings live link sections. */" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
		{ "ToolTip", "A movie scene evaluation template for post move settings live link sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneLiveLinkSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset = { "SubjectPreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, SubjectPreset), Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset_MetaData)) }; // 855667327
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_Inner = { "ChannelMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, ChannelMask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_Inner = { "SubSectionsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSubSectionData, METADATA_PARAMS(nullptr, 0) }; // 30763294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneLiveLinkSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData = { "SubSectionsData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneLiveLinkSectionTemplate, SubSectionsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_MetaData)) }; // 30763294
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubjectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_ChannelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewProp_SubSectionsData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneLiveLinkSectionTemplate",
		sizeof(FMovieSceneLiveLinkSectionTemplate),
		alignof(FMovieSceneLiveLinkSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneLiveLinkSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneLiveLinkSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneLiveLinkSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneLiveLinkSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneLiveLinkSectionTemplate), 458081020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h_284635697(TEXT("/Script/LiveLinkMovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Private_MovieScene_MovieSceneLiveLinkSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
