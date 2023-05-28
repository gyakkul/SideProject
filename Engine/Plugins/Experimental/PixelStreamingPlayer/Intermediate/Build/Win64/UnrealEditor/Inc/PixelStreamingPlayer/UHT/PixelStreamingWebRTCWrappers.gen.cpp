// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingWebRTCWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingWebRTCWrappers() {}
// Cross Module References
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper();
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper();
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingPlayer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper;
class UScriptStruct* FPixelStreamingRTCConfigWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper, (UObject*)Z_Construct_UPackage__Script_PixelStreamingPlayer(), TEXT("PixelStreamingRTCConfigWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.OuterSingleton;
}
template<> PIXELSTREAMINGPLAYER_API UScriptStruct* StaticStruct<FPixelStreamingRTCConfigWrapper>()
{
	return FPixelStreamingRTCConfigWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n * A blueprint wrapper for an RTCConfiguration from webrtc so it can be passed around in blueprints.\n */" },
		{ "ModuleRelativePath", "Public/PixelStreamingWebRTCWrappers.h" },
		{ "ToolTip", "A blueprint wrapper for an RTCConfiguration from webrtc so it can be passed around in blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPixelStreamingRTCConfigWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingPlayer,
		nullptr,
		&NewStructOps,
		"PixelStreamingRTCConfigWrapper",
		sizeof(FPixelStreamingRTCConfigWrapper),
		alignof(FPixelStreamingRTCConfigWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.InnerSingleton, Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper;
class UScriptStruct* FPixelStreamingSessionDescriptionWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper, (UObject*)Z_Construct_UPackage__Script_PixelStreamingPlayer(), TEXT("PixelStreamingSessionDescriptionWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.OuterSingleton;
}
template<> PIXELSTREAMINGPLAYER_API UScriptStruct* StaticStruct<FPixelStreamingSessionDescriptionWrapper>()
{
	return FPixelStreamingSessionDescriptionWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n * A blueprint wrapper for an SessionDescriptionInterface from webrtc so it can be passed around in blueprints.\n */" },
		{ "ModuleRelativePath", "Public/PixelStreamingWebRTCWrappers.h" },
		{ "ToolTip", "A blueprint wrapper for an SessionDescriptionInterface from webrtc so it can be passed around in blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPixelStreamingSessionDescriptionWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingPlayer,
		nullptr,
		&NewStructOps,
		"PixelStreamingSessionDescriptionWrapper",
		sizeof(FPixelStreamingSessionDescriptionWrapper),
		alignof(FPixelStreamingSessionDescriptionWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.InnerSingleton, Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper;
class UScriptStruct* FPixelStreamingIceCandidateWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper, (UObject*)Z_Construct_UPackage__Script_PixelStreamingPlayer(), TEXT("PixelStreamingIceCandidateWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.OuterSingleton;
}
template<> PIXELSTREAMINGPLAYER_API UScriptStruct* StaticStruct<FPixelStreamingIceCandidateWrapper>()
{
	return FPixelStreamingIceCandidateWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n * A blueprint wrapper for an IceCandidateInterface from webrtc so it can be passed around in blueprints.\n */" },
		{ "ModuleRelativePath", "Public/PixelStreamingWebRTCWrappers.h" },
		{ "ToolTip", "A blueprint wrapper for an IceCandidateInterface from webrtc so it can be passed around in blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPixelStreamingIceCandidateWrapper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingPlayer,
		nullptr,
		&NewStructOps,
		"PixelStreamingIceCandidateWrapper",
		sizeof(FPixelStreamingIceCandidateWrapper),
		alignof(FPixelStreamingIceCandidateWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.InnerSingleton, Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingWebRTCWrappers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingWebRTCWrappers_h_Statics::ScriptStructInfo[] = {
		{ FPixelStreamingRTCConfigWrapper::StaticStruct, Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper_Statics::NewStructOps, TEXT("PixelStreamingRTCConfigWrapper"), &Z_Registration_Info_UScriptStruct_PixelStreamingRTCConfigWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPixelStreamingRTCConfigWrapper), 3214905874U) },
		{ FPixelStreamingSessionDescriptionWrapper::StaticStruct, Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper_Statics::NewStructOps, TEXT("PixelStreamingSessionDescriptionWrapper"), &Z_Registration_Info_UScriptStruct_PixelStreamingSessionDescriptionWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPixelStreamingSessionDescriptionWrapper), 1162726789U) },
		{ FPixelStreamingIceCandidateWrapper::StaticStruct, Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper_Statics::NewStructOps, TEXT("PixelStreamingIceCandidateWrapper"), &Z_Registration_Info_UScriptStruct_PixelStreamingIceCandidateWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPixelStreamingIceCandidateWrapper), 2093416331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingWebRTCWrappers_h_1475978075(TEXT("/Script/PixelStreamingPlayer"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingWebRTCWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingWebRTCWrappers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
