// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PixelStreamingBlueprints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreamingBlueprints() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingBlueprints();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingBlueprints_NoRegister();
	PIXELSTREAMING_API UClass* Z_Construct_UClass_UPixelStreamingDelegates_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PixelStreaming();
// End Cross Module References
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execGetPixelStreamingDelegates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPixelStreamingDelegates**)Z_Param__Result=UPixelStreamingBlueprints::GetPixelStreamingDelegates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execGetDefaultStreamerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPixelStreamingBlueprints::GetDefaultStreamerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execStreamerKickPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::StreamerKickPlayer(Z_Param_StreamerId,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execKickPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::KickPlayer(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execStreamerUnfreezeStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::StreamerUnfreezeStream(Z_Param_StreamerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execStreamerFreezeStream)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::StreamerFreezeStream(Z_Param_StreamerId,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execUnfreezeFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::UnfreezeFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execFreezeFrame)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::FreezeFrame(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execForceKeyFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::ForceKeyFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execStreamerSendFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filepath);
		P_GET_PROPERTY(FStrProperty,Z_Param_MimeType);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::StreamerSendFile(Z_Param_StreamerId,Z_Param_Filepath,Z_Param_MimeType,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execSendFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filepath);
		P_GET_PROPERTY(FStrProperty,Z_Param_MimeType);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::SendFile(Z_Param_Filepath,Z_Param_MimeType,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execStreamerSendFileAsByteArray)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StreamerId);
		P_GET_TARRAY(uint8,Z_Param_ByteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_MimeType);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::StreamerSendFileAsByteArray(Z_Param_StreamerId,Z_Param_ByteArray,Z_Param_MimeType,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPixelStreamingBlueprints::execSendFileAsByteArray)
	{
		P_GET_TARRAY(uint8,Z_Param_ByteArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_MimeType);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPixelStreamingBlueprints::SendFileAsByteArray(Z_Param_ByteArray,Z_Param_MimeType,Z_Param_FileExtension);
		P_NATIVE_END;
	}
	void UPixelStreamingBlueprints::StaticRegisterNativesUPixelStreamingBlueprints()
	{
		UClass* Class = UPixelStreamingBlueprints::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceKeyFrame", &UPixelStreamingBlueprints::execForceKeyFrame },
			{ "FreezeFrame", &UPixelStreamingBlueprints::execFreezeFrame },
			{ "GetDefaultStreamerID", &UPixelStreamingBlueprints::execGetDefaultStreamerID },
			{ "GetPixelStreamingDelegates", &UPixelStreamingBlueprints::execGetPixelStreamingDelegates },
			{ "KickPlayer", &UPixelStreamingBlueprints::execKickPlayer },
			{ "SendFile", &UPixelStreamingBlueprints::execSendFile },
			{ "SendFileAsByteArray", &UPixelStreamingBlueprints::execSendFileAsByteArray },
			{ "StreamerFreezeStream", &UPixelStreamingBlueprints::execStreamerFreezeStream },
			{ "StreamerKickPlayer", &UPixelStreamingBlueprints::execStreamerKickPlayer },
			{ "StreamerSendFile", &UPixelStreamingBlueprints::execStreamerSendFile },
			{ "StreamerSendFileAsByteArray", &UPixelStreamingBlueprints::execStreamerSendFileAsByteArray },
			{ "StreamerUnfreezeStream", &UPixelStreamingBlueprints::execStreamerUnfreezeStream },
			{ "UnfreezeFrame", &UPixelStreamingBlueprints::execUnfreezeFrame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Force a key frame to be sent.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Force a key frame to be sent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "ForceKeyFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics
	{
		struct PixelStreamingBlueprints_eventFreezeFrame_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventFreezeFrame_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Freeze Pixel Streaming.\n\x09 * @param   Texture         The freeze frame to display. If null then the back buffer is captured.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Freeze Pixel Streaming.\n@param   Texture         The freeze frame to display. If null then the back buffer is captured." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "FreezeFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::PixelStreamingBlueprints_eventFreezeFrame_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics
	{
		struct PixelStreamingBlueprints_eventGetDefaultStreamerID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventGetDefaultStreamerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Get the default Streamer ID\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Get the default Streamer ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "GetDefaultStreamerID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::PixelStreamingBlueprints_eventGetDefaultStreamerID_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics
	{
		struct PixelStreamingBlueprints_eventGetPixelStreamingDelegates_Parms
		{
			UPixelStreamingDelegates* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventGetPixelStreamingDelegates_Parms, ReturnValue), Z_Construct_UClass_UPixelStreamingDelegates_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Get the singleton. This allows application-specific blueprints to bind\n\x09 * to delegates of interest.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Get the singleton. This allows application-specific blueprints to bind\nto delegates of interest." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "GetPixelStreamingDelegates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::PixelStreamingBlueprints_eventGetPixelStreamingDelegates_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics
	{
		struct PixelStreamingBlueprints_eventKickPlayer_Parms
		{
			FString PlayerId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventKickPlayer_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Kick a player.\n\x09 * @param   PlayerId         The ID of the player to kick.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Kick a player.\n@param   PlayerId         The ID of the player to kick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "KickPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::PixelStreamingBlueprints_eventKickPlayer_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics
	{
		struct PixelStreamingBlueprints_eventSendFile_Parms
		{
			FString Filepath;
			FString MimeType;
			FString FileExtension;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filepath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MimeType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_Filepath = { "Filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFile_Parms, Filepath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_MimeType = { "MimeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFile_Parms, MimeType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFile_Parms, FileExtension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_Filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_MimeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::NewProp_FileExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n     * Send a specified file over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end \n     * \n     * @param   FilePath        The path to the file that will be sent\n     * @param   MimeType        The mime type of the file. Used for file reconstruction on the front end\n     * @param   FileExtension   The file extension. Used for file reconstruction on the front end\n     */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Send a specified file over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end\n\n@param   FilePath        The path to the file that will be sent\n@param   MimeType        The mime type of the file. Used for file reconstruction on the front end\n@param   FileExtension   The file extension. Used for file reconstruction on the front end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "SendFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::PixelStreamingBlueprints_eventSendFile_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics
	{
		struct PixelStreamingBlueprints_eventSendFileAsByteArray_Parms
		{
			TArray<uint8> ByteArray;
			FString MimeType;
			FString FileExtension;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MimeType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFileAsByteArray_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_MimeType = { "MimeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFileAsByteArray_Parms, MimeType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventSendFileAsByteArray_Parms, FileExtension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_MimeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::NewProp_FileExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n     * Send a specified byte array over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end \n     * \n     * @param   ByteArray       The raw data that will be sent over the data channel\n     * @param   MimeType        The mime type of the file. Used for reconstruction on the front end\n     * @param   FileExtension   The file extension. Used for file reconstruction on the front end\n     */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Send a specified byte array over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end\n\n@param   ByteArray       The raw data that will be sent over the data channel\n@param   MimeType        The mime type of the file. Used for reconstruction on the front end\n@param   FileExtension   The file extension. Used for file reconstruction on the front end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "SendFileAsByteArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::PixelStreamingBlueprints_eventSendFileAsByteArray_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics
	{
		struct PixelStreamingBlueprints_eventStreamerFreezeStream_Parms
		{
			FString StreamerId;
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerFreezeStream_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerFreezeStream_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Freeze Pixel Streaming.\n\x09 * @param\x09StreamerId\x09\x09The id of the streamer to freeze.\n\x09 * @param   Texture         The freeze frame to display. If null then the back buffer is captured.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Freeze Pixel Streaming.\n@param       StreamerId              The id of the streamer to freeze.\n@param   Texture         The freeze frame to display. If null then the back buffer is captured." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "StreamerFreezeStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::PixelStreamingBlueprints_eventStreamerFreezeStream_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics
	{
		struct PixelStreamingBlueprints_eventStreamerKickPlayer_Parms
		{
			FString StreamerId;
			FString PlayerId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerKickPlayer_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerKickPlayer_Parms, PlayerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Kick a player.\n\x09 * @param\x09StreamerId\x09\x09The streamer which the player belongs\n\x09 * @param   PlayerId        The ID of the player to kick.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Kick a player.\n@param       StreamerId              The streamer which the player belongs\n@param   PlayerId        The ID of the player to kick." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "StreamerKickPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::PixelStreamingBlueprints_eventStreamerKickPlayer_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics
	{
		struct PixelStreamingBlueprints_eventStreamerSendFile_Parms
		{
			FString StreamerId;
			FString Filepath;
			FString MimeType;
			FString FileExtension;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filepath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MimeType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFile_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_Filepath = { "Filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFile_Parms, Filepath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_MimeType = { "MimeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFile_Parms, MimeType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFile_Parms, FileExtension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_Filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_MimeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::NewProp_FileExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n     * Send a specified file over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end \n     * \n\x09 * @param\x09StreamerId\x09\x09The streamer use when sending the data\n     * @param   FilePath        The path to the file that will be sent\n     * @param   MimeType        The mime type of the file. Used for file reconstruction on the front end\n     * @param   FileExtension   The file extension. Used for file reconstruction on the front end\n     */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Send a specified file over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end\n\n@param       StreamerId              The streamer use when sending the data\n@param   FilePath        The path to the file that will be sent\n@param   MimeType        The mime type of the file. Used for file reconstruction on the front end\n@param   FileExtension   The file extension. Used for file reconstruction on the front end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "StreamerSendFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::PixelStreamingBlueprints_eventStreamerSendFile_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics
	{
		struct PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms
		{
			FString StreamerId;
			TArray<uint8> ByteArray;
			FString MimeType;
			FString FileExtension;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MimeType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_MimeType = { "MimeType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms, MimeType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_FileExtension = { "FileExtension", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms, FileExtension), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_StreamerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_ByteArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_ByteArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_MimeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::NewProp_FileExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n     * Send a specified byte array over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end \n     * \n\x09 * @param\x09StreamerId\x09\x09The streamer use when sending the data\n     * @param   ByteArray       The raw data that will be sent over the data channel\n     * @param   MimeType        The mime type of the file. Used for reconstruction on the front end\n     * @param   FileExtension   The file extension. Used for file reconstruction on the front end\n     */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Send a specified byte array over the WebRTC peer connection data channel. The extension and mime type are used for file reconstruction on the front end\n\n@param       StreamerId              The streamer use when sending the data\n@param   ByteArray       The raw data that will be sent over the data channel\n@param   MimeType        The mime type of the file. Used for reconstruction on the front end\n@param   FileExtension   The file extension. Used for file reconstruction on the front end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "StreamerSendFileAsByteArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::PixelStreamingBlueprints_eventStreamerSendFileAsByteArray_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics
	{
		struct PixelStreamingBlueprints_eventStreamerUnfreezeStream_Parms
		{
			FString StreamerId;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StreamerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::NewProp_StreamerId = { "StreamerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PixelStreamingBlueprints_eventStreamerUnfreezeStream_Parms, StreamerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::NewProp_StreamerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Unfreeze Pixel Streaming. \n\x09 * @param StreamerId\x09\x09The id of the streamer to unfreeze.\n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Unfreeze Pixel Streaming.\n@param StreamerId            The id of the streamer to unfreeze." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "StreamerUnfreezeStream", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::PixelStreamingBlueprints_eventStreamerUnfreezeStream_Parms), Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pixel Streaming" },
		{ "Comment", "/**\n\x09 * Unfreeze Pixel Streaming. \n\x09 */" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
		{ "ToolTip", "Unfreeze Pixel Streaming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPixelStreamingBlueprints, nullptr, "UnfreezeFrame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPixelStreamingBlueprints);
	UClass* Z_Construct_UClass_UPixelStreamingBlueprints_NoRegister()
	{
		return UPixelStreamingBlueprints::StaticClass();
	}
	struct Z_Construct_UClass_UPixelStreamingBlueprints_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPixelStreamingBlueprints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelStreaming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPixelStreamingBlueprints_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_ForceKeyFrame, "ForceKeyFrame" }, // 1587167532
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_FreezeFrame, "FreezeFrame" }, // 4211847315
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_GetDefaultStreamerID, "GetDefaultStreamerID" }, // 86119076
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_GetPixelStreamingDelegates, "GetPixelStreamingDelegates" }, // 2176625917
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_KickPlayer, "KickPlayer" }, // 3706368783
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_SendFile, "SendFile" }, // 1572868457
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_SendFileAsByteArray, "SendFileAsByteArray" }, // 2449276386
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerFreezeStream, "StreamerFreezeStream" }, // 3514209618
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerKickPlayer, "StreamerKickPlayer" }, // 1844654795
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFile, "StreamerSendFile" }, // 3777130983
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerSendFileAsByteArray, "StreamerSendFileAsByteArray" }, // 2855420447
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_StreamerUnfreezeStream, "StreamerUnfreezeStream" }, // 540693560
		{ &Z_Construct_UFunction_UPixelStreamingBlueprints_UnfreezeFrame, "UnfreezeFrame" }, // 326330132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPixelStreamingBlueprints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PixelStreamingBlueprints.h" },
		{ "ModuleRelativePath", "Private/PixelStreamingBlueprints.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPixelStreamingBlueprints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPixelStreamingBlueprints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPixelStreamingBlueprints_Statics::ClassParams = {
		&UPixelStreamingBlueprints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPixelStreamingBlueprints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPixelStreamingBlueprints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPixelStreamingBlueprints()
	{
		if (!Z_Registration_Info_UClass_UPixelStreamingBlueprints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPixelStreamingBlueprints.OuterSingleton, Z_Construct_UClass_UPixelStreamingBlueprints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPixelStreamingBlueprints.OuterSingleton;
	}
	template<> PIXELSTREAMING_API UClass* StaticClass<UPixelStreamingBlueprints>()
	{
		return UPixelStreamingBlueprints::StaticClass();
	}
	UPixelStreamingBlueprints::UPixelStreamingBlueprints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPixelStreamingBlueprints);
	UPixelStreamingBlueprints::~UPixelStreamingBlueprints() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPixelStreamingBlueprints, UPixelStreamingBlueprints::StaticClass, TEXT("UPixelStreamingBlueprints"), &Z_Registration_Info_UClass_UPixelStreamingBlueprints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPixelStreamingBlueprints), 4255636275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_755753977(TEXT("/Script/PixelStreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_PixelStreaming_Source_PixelStreaming_Private_PixelStreamingBlueprints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
