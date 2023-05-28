// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingPeerComponent.h"
#include "PixelStreamingWebRTCWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingPeerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingPeerComponent();
	PIXELSTREAMINGPLAYER_API UClass* Z_Construct_UClass_UPixelStreamingPeerComponent_NoRegister();
	PIXELSTREAMINGPLAYER_API UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature();
	PIXELSTREAMINGPLAYER_API UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature();
	PIXELSTREAMINGPLAYER_API UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature();
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper();
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper();
	PIXELSTREAMINGPLAYER_API UScriptStruct* Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper();
	UPackage* Z_Construct_UPackage__Script_PixelStreamingPlayer();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics
	{
		struct _Script_PixelStreamingPlayer_eventPixelStreamingOnIceCandidate_Parms
		{
			FPixelStreamingIceCandidateWrapper Candidate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Candidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::NewProp_Candidate = { "Candidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PixelStreamingPlayer_eventPixelStreamingOnIceCandidate_Parms, Candidate), Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper, METADATA_PARAMS(nullptr, 0) }; // 2093416331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::NewProp_Candidate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PixelStreamingPlayer, nullptr, "PixelStreamingOnIceCandidate__DelegateSignature", "PixelStreamingPeerComponent", "OnIceCandidate", sizeof(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::_Script_PixelStreamingPlayer_eventPixelStreamingOnIceCandidate_Parms), Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPixelStreamingOnIceCandidate_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceCandidate, FPixelStreamingIceCandidateWrapper Candidate)
{
	struct _Script_PixelStreamingPlayer_eventPixelStreamingOnIceCandidate_Parms
	{
		FPixelStreamingIceCandidateWrapper Candidate;
	};
	_Script_PixelStreamingPlayer_eventPixelStreamingOnIceCandidate_Parms Parms;
	Parms.Candidate=Candidate;
	PixelStreamingOnIceCandidate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics
	{
		struct _Script_PixelStreamingPlayer_eventPixelStreamingOnIceConnection_Parms
		{
			int32 Number;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PixelStreamingPlayer_eventPixelStreamingOnIceConnection_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::NewProp_Number,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PixelStreamingPlayer, nullptr, "PixelStreamingOnIceConnection__DelegateSignature", "PixelStreamingPeerComponent", "OnIceConnection", sizeof(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::_Script_PixelStreamingPlayer_eventPixelStreamingOnIceConnection_Parms), Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPixelStreamingOnIceConnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceConnection, int32 Number)
{
	struct _Script_PixelStreamingPlayer_eventPixelStreamingOnIceConnection_Parms
	{
		int32 Number;
	};
	_Script_PixelStreamingPlayer_eventPixelStreamingOnIceConnection_Parms Parms;
	Parms.Number=Number;
	PixelStreamingOnIceConnection.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PixelStreamingPlayer, nullptr, "PixelStreamingOnIceDisconnection__DelegateSignature", "PixelStreamingPeerComponent", "OnIceDisconnection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPixelStreamingOnIceDisconnection_DelegateWrapper(const FMulticastScriptDelegate& PixelStreamingOnIceDisconnection)
{
	PixelStreamingOnIceDisconnection.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UPixelStreamingPeerComponent::execReceiveIceCandidate)
	{
		P_GET_STRUCT_REF(FPixelStreamingIceCandidateWrapper,Z_Param_Out_Candidate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveIceCandidate(Z_Param_Out_Candidate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingPeerComponent::execReceiveAnswer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Offer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveAnswer(Z_Param_Offer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingPeerComponent::execCreateAnswer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Offer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPixelStreamingSessionDescriptionWrapper*)Z_Param__Result=P_THIS->CreateAnswer(Z_Param_Offer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingPeerComponent::execCreateOffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPixelStreamingSessionDescriptionWrapper*)Z_Param__Result=P_THIS->CreateOffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingPeerComponent::execSetConfig)
	{
		P_GET_STRUCT_REF(FPixelStreamingRTCConfigWrapper,Z_Param_Out_Config);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfig(Z_Param_Out_Config);
		P_NATIVE_END;
	}
	void UPixelStreamingPeerComponent::StaticRegisterNativesUPixelStreamingPeerComponent()
	{
		UClass* Class = UPixelStreamingPeerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateAnswer", &UPixelStreamingPeerComponent::execCreateAnswer },
			{ "CreateOffer", &UPixelStreamingPeerComponent::execCreateOffer },
			{ "ReceiveAnswer", &UPixelStreamingPeerComponent::execReceiveAnswer },
			{ "ReceiveIceCandidate", &UPixelStreamingPeerComponent::execReceiveIceCandidate },
			{ "SetConfig", &UPixelStreamingPeerComponent::execSetConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics
	{
		struct PixelStreamingPeerComponent_eventCreateAnswer_Parms
		{
			FString Offer;
			FPixelStreamingSessionDescriptionWrapper ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Offer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_Offer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_Offer = { "Offer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventCreateAnswer_Parms, Offer), METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_Offer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_Offer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventCreateAnswer_Parms, ReturnValue), Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper, METADATA_PARAMS(nullptr, 0) }; // 1162726789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_Offer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Creates an answer to the given offer objet that was provided.\n\x09 * @param Offer The offer SDP string to create an answer for. Should be obtained from the signalling server On Offer event.\n\x09 * @return The answer object generated. Send this to the signalling server to complete negotiation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Creates an answer to the given offer objet that was provided.\n@param Offer The offer SDP string to create an answer for. Should be obtained from the signalling server On Offer event.\n@return The answer object generated. Send this to the signalling server to complete negotiation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingPeerComponent, nullptr, "CreateAnswer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::PixelStreamingPeerComponent_eventCreateAnswer_Parms), Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics
	{
		struct PixelStreamingPeerComponent_eventCreateOffer_Parms
		{
			FPixelStreamingSessionDescriptionWrapper ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventCreateOffer_Parms, ReturnValue), Z_Construct_UScriptStruct_FPixelStreamingSessionDescriptionWrapper, METADATA_PARAMS(nullptr, 0) }; // 1162726789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Creates an offer.\n\x09 * @return The offer object generated. Send this to the signalling server to initiate negotiation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Creates an offer.\n@return The offer object generated. Send this to the signalling server to initiate negotiation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingPeerComponent, nullptr, "CreateOffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::PixelStreamingPeerComponent_eventCreateOffer_Parms), Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics
	{
		struct PixelStreamingPeerComponent_eventReceiveAnswer_Parms
		{
			FString Offer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Offer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::NewProp_Offer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::NewProp_Offer = { "Offer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventReceiveAnswer_Parms, Offer), METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::NewProp_Offer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::NewProp_Offer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::NewProp_Offer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Receives an answer from a streamer after we've sent an offer to receive.\n\x09 * @param Offer The answer SDP. Should be obtained from the signalling server On Answer event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Receives an answer from a streamer after we've sent an offer to receive.\n@param Offer The answer SDP. Should be obtained from the signalling server On Answer event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingPeerComponent, nullptr, "ReceiveAnswer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::PixelStreamingPeerComponent_eventReceiveAnswer_Parms), Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics
	{
		struct PixelStreamingPeerComponent_eventReceiveIceCandidate_Parms
		{
			FPixelStreamingIceCandidateWrapper Candidate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Candidate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Candidate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::NewProp_Candidate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::NewProp_Candidate = { "Candidate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventReceiveIceCandidate_Parms, Candidate), Z_Construct_UScriptStruct_FPixelStreamingIceCandidateWrapper, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::NewProp_Candidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::NewProp_Candidate_MetaData)) }; // 2093416331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::NewProp_Candidate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Notify the peer connection of an ICE candidate sent by the singalling connection.\n\x09 * @param Candidate Provided by the singalling connection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Notify the peer connection of an ICE candidate sent by the singalling connection.\n@param Candidate Provided by the singalling connection." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingPeerComponent, nullptr, "ReceiveIceCandidate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::PixelStreamingPeerComponent_eventReceiveIceCandidate_Parms), Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics
	{
		struct PixelStreamingPeerComponent_eventSetConfig_Parms
		{
			FPixelStreamingRTCConfigWrapper Config;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::NewProp_Config_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingPeerComponent_eventSetConfig_Parms, Config), Z_Construct_UScriptStruct_FPixelStreamingRTCConfigWrapper, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::NewProp_Config_MetaData)) }; // 3214905874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::NewProp_Config,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n\x09 * Sets the RTC Configuration for this Peer Connection.\n\x09 * @param Config The RTC configuration for this Peer Connection. Obtained from the signalling server On Config event.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Sets the RTC Configuration for this Peer Connection.\n@param Config The RTC configuration for this Peer Connection. Obtained from the signalling server On Config event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingPeerComponent, nullptr, "SetConfig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::PixelStreamingPeerComponent_eventSetConfig_Parms), Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingPeerComponent);
	UClass* Z_Construct_UClass_UPixelStreamingPeerComponent_NoRegister()
	{
		return UPixelStreamingPeerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingPeerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIceCandidate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIceCandidate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIceConnection_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIceConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnIceDisconnection_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnIceDisconnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoSinkPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VideoSinkPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreamingPlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateAnswer, "CreateAnswer" }, // 2670686805
		{ &Z_Construct_UFunction_UPixelStreamingPeerComponent_CreateOffer, "CreateOffer" }, // 3146171283
		{ &Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveAnswer, "ReceiveAnswer" }, // 2996573936
		{ &Z_Construct_UFunction_UPixelStreamingPeerComponent_ReceiveIceCandidate, "ReceiveIceCandidate" }, // 3854137997
		{ &Z_Construct_UFunction_UPixelStreamingPeerComponent_SetConfig, "SetConfig" }, // 4268244334
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "PixelStreaming" },
		{ "Comment", "/**\n * A blueprint representation of a Pixel Streaming Peer Connection. Should communicate with a Pixel Streaming Signalling Connection\n * and will accept video sinks to receive video data.\n */" },
		{ "DisplayName", "PixelStreaming Peer Component" },
		{ "IncludePath", "PixelStreamingPeerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "A blueprint representation of a Pixel Streaming Peer Connection. Should communicate with a Pixel Streaming Signalling Connection\nand will accept video sinks to receive video data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceCandidate_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Once negotiation is completed the Peer Connection can generate Ice Candidate objects. These need to be sent to a signalling server to allow proper connection.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Once negotiation is completed the Peer Connection can generate Ice Candidate objects. These need to be sent to a signalling server to allow proper connection." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceCandidate = { "OnIceCandidate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingPeerComponent, OnIceCandidate), Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceCandidate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceCandidate_MetaData)) }; // 1801387402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceConnection_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * Once a connection has been connected and streaming should be available.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "Once a connection has been connected and streaming should be available." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceConnection = { "OnIceConnection", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingPeerComponent, OnIceConnection), Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceConnection__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceConnection_MetaData)) }; // 3329231865
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceDisconnection_MetaData[] = {
		{ "Category", "Components|Activation" },
		{ "Comment", "/**\n\x09 * When an ice connection is lost.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "When an ice connection is lost." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceDisconnection = { "OnIceDisconnection", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingPeerComponent, OnIceDisconnection), Z_Construct_USparseDelegateFunction_PixelStreamingPlayer_PixelStreamingOnIceDisconnection__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceDisconnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceDisconnection_MetaData)) }; // 52801998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_VideoSinkPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Properties" },
		{ "Comment", "/**\n\x09 * A sink for the video data received once this connection has finished negotiating.\n\x09 */" },
		{ "DisplayName", "Pixel Streaming Video Sink Player" },
		{ "ModuleRelativePath", "Public/PixelStreamingPeerComponent.h" },
		{ "ToolTip", "A sink for the video data received once this connection has finished negotiating." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_VideoSinkPlayer = { "VideoSinkPlayer", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingPeerComponent, VideoSinkPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_VideoSinkPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_VideoSinkPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceCandidate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_OnIceDisconnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::NewProp_VideoSinkPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingPeerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::ClassParams = {
		&UPixelStreamingPeerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingPeerComponent()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingPeerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingPeerComponent.OuterSingleton, Z_Construct_UClass_UPixelStreamingPeerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingPeerComponent.OuterSingleton;
	}
	template<> PIXELSTREAMINGPLAYER_API UClass* StaticClass<UPixelStreamingPeerComponent>()
	{
		return UPixelStreamingPeerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingPeerComponent);
	UPixelStreamingPeerComponent::~UPixelStreamingPeerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingPeerComponent, UPixelStreamingPeerComponent::StaticClass, TEXT("UPixelStreamingPeerComponent"), &Z_Registration_Info_UClass_UPixelStreamingPeerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingPeerComponent), 1573889191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_2087863593(TEXT("/Script/PixelStreamingPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PixelStreamingPlayer_Source_PixelStreamingPlayer_Public_PixelStreamingPeerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
