// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelStreamingAudioComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingAudioComponent() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USynthComponent();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingAudioComponent();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingAudioComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreaming();
// End Cross Module References
	DEFINE_FUNCTION(UPixelStreamingAudioComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingAudioComponent::execIsListeningToPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsListeningToPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingAudioComponent::execStreamerListenTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToListenTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StreamerListenTo(Z_Param_StreamerId,Z_Param_PlayerToListenTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingAudioComponent::execListenTo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerToListenTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ListenTo(Z_Param_PlayerToListenTo);
		P_NATIVE_END;
	}
	void UPixelStreamingAudioComponent::StaticRegisterNativesUPixelStreamingAudioComponent()
	{
		UClass* Class = UPixelStreamingAudioComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsListeningToPlayer", &UPixelStreamingAudioComponent::execIsListeningToPlayer },
			{ "ListenTo", &UPixelStreamingAudioComponent::execListenTo },
			{ "Reset", &UPixelStreamingAudioComponent::execReset },
			{ "StreamerListenTo", &UPixelStreamingAudioComponent::execStreamerListenTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics
	{
		struct PixelStreamingAudioComponent_eventIsListeningToPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PixelStreamingAudioComponent_eventIsListeningToPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingAudioComponent_eventIsListeningToPlayer_Parms), &Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "// True if listening to a connected WebRTC peer through Pixel Streaming.\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "True if listening to a connected WebRTC peer through Pixel Streaming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingAudioComponent, nullptr, "IsListeningToPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::PixelStreamingAudioComponent_eventIsListeningToPlayer_Parms), Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics
	{
		struct PixelStreamingAudioComponent_eventListenTo_Parms
		{
			FString PlayerToListenTo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToListenTo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_PlayerToListenTo = { "PlayerToListenTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingAudioComponent_eventListenTo_Parms, PlayerToListenTo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PixelStreamingAudioComponent_eventListenTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingAudioComponent_eventListenTo_Parms), &Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_PlayerToListenTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "// Listen to a specific player on the default streamer. If the player is not found this component will be silent.\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "Listen to a specific player on the default streamer. If the player is not found this component will be silent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingAudioComponent, nullptr, "ListenTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::PixelStreamingAudioComponent_eventListenTo_Parms), Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "// Stops listening to any connected player/peer and resets internal state so component is ready to listen again.\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "Stops listening to any connected player/peer and resets internal state so component is ready to listen again." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingAudioComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics
	{
		struct PixelStreamingAudioComponent_eventStreamerListenTo_Parms
		{
			FString StreamerId;
			FString PlayerToListenTo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToListenTo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingAudioComponent_eventStreamerListenTo_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_PlayerToListenTo = { "PlayerToListenTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingAudioComponent_eventStreamerListenTo_Parms, PlayerToListenTo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PixelStreamingAudioComponent_eventStreamerListenTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PixelStreamingAudioComponent_eventStreamerListenTo_Parms), &Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_PlayerToListenTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "// Listen to a specific player. If the player is not found this component will be silent.\n" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "Listen to a specific player. If the player is not found this component will be silent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingAudioComponent, nullptr, "StreamerListenTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::PixelStreamingAudioComponent_eventStreamerListenTo_Parms), Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingAudioComponent);
	UClass* Z_Construct_UClass_UPixelStreamingAudioComponent_NoRegister()
	{
		return UPixelStreamingAudioComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingAudioComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamerToHear_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerToHear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToHear_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerToHear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFindPeer_MetaData[];
#endif
		static void NewProp_bAutoFindPeer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFindPeer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USynthComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreaming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelStreamingAudioComponent_IsListeningToPlayer, "IsListeningToPlayer" }, // 3557458153
		{ &Z_Construct_UFunction_UPixelStreamingAudioComponent_ListenTo, "ListenTo" }, // 3106877439
		{ &Z_Construct_UFunction_UPixelStreamingAudioComponent_Reset, "Reset" }, // 427323024
		{ &Z_Construct_UFunction_UPixelStreamingAudioComponent_StreamerListenTo, "StreamerListenTo" }, // 1822947200
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "PixelStreaming" },
		{ "Comment", "/**\n * Allows in-engine playback of incoming WebRTC audio from a particular Pixel Streaming player/peer using their mic in the browser.\n * Note: Each audio component associates itself with a particular Pixel Streaming player/peer (using the the Pixel Streaming player id).\n */" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "PixelStreamingAudioComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows in-engine playback of incoming WebRTC audio from a particular Pixel Streaming player/peer using their mic in the browser.\nNote: Each audio component associates itself with a particular Pixel Streaming player/peer (using the the Pixel Streaming player id)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_StreamerToHear_MetaData[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "/**\n\x09 *   The Pixel Streaming streamer of the player that we wish to listen to.\n\x09 *   If this is left blank this component will use the default Pixel Streaming streamer\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "The Pixel Streaming streamer of the player that we wish to listen to.\nIf this is left blank this component will use the default Pixel Streaming streamer" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_StreamerToHear = { "StreamerToHear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingAudioComponent, StreamerToHear), METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_StreamerToHear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_StreamerToHear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_PlayerToHear_MetaData[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "/**\n\x09 *   The Pixel Streaming player/peer whose audio we wish to listen to.\n\x09 *   If this is left blank this component will listen to the first non-listened to peer that connects after this component is ready.\n\x09 *   Note: that when the listened to peer disconnects this component is reset to blank and will once again listen to the next non-listened to peer that connects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "The Pixel Streaming player/peer whose audio we wish to listen to.\nIf this is left blank this component will listen to the first non-listened to peer that connects after this component is ready.\nNote: that when the listened to peer disconnects this component is reset to blank and will once again listen to the next non-listened to peer that connects." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_PlayerToHear = { "PlayerToHear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPixelStreamingAudioComponent, PlayerToHear), METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_PlayerToHear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_PlayerToHear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer_MetaData[] = {
		{ "Category", "Pixel Streaming Audio Component" },
		{ "Comment", "/**\n\x09 *  If not already listening to a player/peer will try to attach for listening to the \"PlayerToHear\" each tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PixelStreamingAudioComponent.h" },
		{ "ToolTip", "If not already listening to a player/peer will try to attach for listening to the \"PlayerToHear\" each tick." },
	};
#endif
	void Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer_SetBit(void* Obj)
	{
		((UPixelStreamingAudioComponent*)Obj)->bAutoFindPeer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer = { "bAutoFindPeer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPixelStreamingAudioComponent), &Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_StreamerToHear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_PlayerToHear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::NewProp_bAutoFindPeer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingAudioComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::ClassParams = {
		&UPixelStreamingAudioComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingAudioComponent()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingAudioComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingAudioComponent.OuterSingleton, Z_Construct_UClass_UPixelStreamingAudioComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingAudioComponent.OuterSingleton;
	}
	template<> PIXELSTREAMING_API UClass* StaticClass<UPixelStreamingAudioComponent>()
	{
		return UPixelStreamingAudioComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingAudioComponent);
	UPixelStreamingAudioComponent::~UPixelStreamingAudioComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingAudioComponent, UPixelStreamingAudioComponent::StaticClass, TEXT("UPixelStreamingAudioComponent"), &Z_Registration_Info_UClass_UPixelStreamingAudioComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingAudioComponent), 3813451089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_4187342558(TEXT("/Script/PixelStreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Public_PixelStreamingAudioComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
