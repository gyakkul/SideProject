// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieScene/MovieSceneMediaTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMediaTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIACOMPOSITING_API UClass* Z_Construct_UClass_UMovieSceneMediaSection_NoRegister();
	MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams();
	MEDIACOMPOSITING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	UPackage* Z_Construct_UPackage__Script_MediaCompositing();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams;
class UScriptStruct* FMovieSceneMediaSectionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, (UObject*)Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionParams"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionParams>()
{
	return FMovieSceneMediaSectionParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaSourceProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSourceProxyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MediaSourceProxyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyTextureBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProxyTextureBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy = { "MediaSourceProxy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSourceProxy), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex = { "MediaSourceProxyIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaSourceProxyIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneMediaSectionParams*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneMediaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend = { "ProxyTextureBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionParams, ProxyTextureBlend), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaSourceProxyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_SectionEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewProp_ProxyTextureBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
		nullptr,
		&NewStructOps,
		"MovieSceneMediaSectionParams",
		sizeof(FMovieSceneMediaSectionParams),
		alignof(FMovieSceneMediaSectionParams),
		Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneMediaSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneMediaSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate;
class UScriptStruct* FMovieSceneMediaSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MediaCompositing(), TEXT("MovieSceneMediaSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.OuterSingleton;
}
template<> MEDIACOMPOSITING_API UScriptStruct* StaticStruct<FMovieSceneMediaSectionTemplate>()
{
	return FMovieSceneMediaSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneMediaSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params_MetaData)) }; // 129634627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieScene/MovieSceneMediaTemplate.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection = { "MediaSection", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneMediaSectionTemplate, MediaSection), Z_Construct_UClass_UMovieSceneMediaSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewProp_MediaSection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaCompositing,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneMediaSectionTemplate",
		sizeof(FMovieSceneMediaSectionTemplate),
		alignof(FMovieSceneMediaSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneMediaSectionParams::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionParams_Statics::NewStructOps, TEXT("MovieSceneMediaSectionParams"), &Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMediaSectionParams), 129634627U) },
		{ FMovieSceneMediaSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneMediaSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneMediaSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneMediaSectionTemplate), 377688335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_3672727260(TEXT("/Script/MediaCompositing"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaCompositing_Source_MediaCompositing_Private_MovieScene_MovieSceneMediaTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
