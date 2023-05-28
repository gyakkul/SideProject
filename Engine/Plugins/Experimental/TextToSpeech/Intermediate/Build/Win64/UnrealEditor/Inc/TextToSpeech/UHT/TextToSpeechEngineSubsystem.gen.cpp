// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextToSpeechEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextToSpeechEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	TEXTTOSPEECH_API UClass* Z_Construct_UClass_UTextToSpeechEngineSubsystem();
	TEXTTOSPEECH_API UClass* Z_Construct_UClass_UTextToSpeechEngineSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TextToSpeech();
// End Cross Module References
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execGetNumChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execDoesChannelExist)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesChannelExist(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execRemoveAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execRemoveChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execAddCustomChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InNewChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomChannel(Z_Param_InNewChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execAddDefaultChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InNewChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDefaultChannel(Z_Param_InNewChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execIsChannelActive)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChannelActive(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execDeactivateAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execDeactivateChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execActivateAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execActivateChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execIsChannelMuted)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChannelMuted(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execUnmuteChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnmuteChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execMuteChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MuteChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execSetRateOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRateOnChannel(Z_Param_InChannelId,Z_Param_InRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execGetRateOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRateOnChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execSetVolumeOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumeOnChannel(Z_Param_InChannelId,Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execGetVolumeOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetVolumeOnChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execIsSpeakingOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeakingOnChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execStopSpeakingOnAllChannels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSpeakingOnAllChannels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execStopSpeakingOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSpeakingOnChannel(Z_Param_InChannelId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextToSpeechEngineSubsystem::execSpeakOnChannel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InChannelId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InStringToSpeak);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeakOnChannel(Z_Param_InChannelId,Z_Param_Out_InStringToSpeak);
		P_NATIVE_END;
	}
	void UTextToSpeechEngineSubsystem::StaticRegisterNativesUTextToSpeechEngineSubsystem()
	{
		UClass* Class = UTextToSpeechEngineSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAllChannels", &UTextToSpeechEngineSubsystem::execActivateAllChannels },
			{ "ActivateChannel", &UTextToSpeechEngineSubsystem::execActivateChannel },
			{ "AddCustomChannel", &UTextToSpeechEngineSubsystem::execAddCustomChannel },
			{ "AddDefaultChannel", &UTextToSpeechEngineSubsystem::execAddDefaultChannel },
			{ "DeactivateAllChannels", &UTextToSpeechEngineSubsystem::execDeactivateAllChannels },
			{ "DeactivateChannel", &UTextToSpeechEngineSubsystem::execDeactivateChannel },
			{ "DoesChannelExist", &UTextToSpeechEngineSubsystem::execDoesChannelExist },
			{ "GetNumChannels", &UTextToSpeechEngineSubsystem::execGetNumChannels },
			{ "GetRateOnChannel", &UTextToSpeechEngineSubsystem::execGetRateOnChannel },
			{ "GetVolumeOnChannel", &UTextToSpeechEngineSubsystem::execGetVolumeOnChannel },
			{ "IsChannelActive", &UTextToSpeechEngineSubsystem::execIsChannelActive },
			{ "IsChannelMuted", &UTextToSpeechEngineSubsystem::execIsChannelMuted },
			{ "IsSpeakingOnChannel", &UTextToSpeechEngineSubsystem::execIsSpeakingOnChannel },
			{ "MuteChannel", &UTextToSpeechEngineSubsystem::execMuteChannel },
			{ "RemoveAllChannels", &UTextToSpeechEngineSubsystem::execRemoveAllChannels },
			{ "RemoveChannel", &UTextToSpeechEngineSubsystem::execRemoveChannel },
			{ "SetRateOnChannel", &UTextToSpeechEngineSubsystem::execSetRateOnChannel },
			{ "SetVolumeOnChannel", &UTextToSpeechEngineSubsystem::execSetVolumeOnChannel },
			{ "SpeakOnChannel", &UTextToSpeechEngineSubsystem::execSpeakOnChannel },
			{ "StopSpeakingOnAllChannels", &UTextToSpeechEngineSubsystem::execStopSpeakingOnAllChannels },
			{ "StopSpeakingOnChannel", &UTextToSpeechEngineSubsystem::execStopSpeakingOnChannel },
			{ "UnmuteChannel", &UTextToSpeechEngineSubsystem::execUnmuteChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** Activates all text to speech channels to accept requests for text to speech functionality. */" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Activates all text to speech channels to accept requests for text to speech functionality." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "ActivateAllChannels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventActivateChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventActivateChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/**\n\x09* Activates a text to speech channel to accept requests to perform text to speech functionality.\n\x09* If the provided channel Id does not exist, nothing will happen. \n\x09* @param InChannelId The Id of the channel to activate. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Activates a text to speech channel to accept requests to perform text to speech functionality.\nIf the provided channel Id does not exist, nothing will happen.\n@param InChannelId The Id of the channel to activate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "ActivateChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::TextToSpeechEngineSubsystem_eventActivateChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventAddCustomChannel_Parms
		{
			FName InNewChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNewChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::NewProp_InNewChannelId_MetaData[] = {
		{ "DisplayName", "New Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::NewProp_InNewChannelId = { "InNewChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventAddCustomChannel_Parms, InNewChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::NewProp_InNewChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::NewProp_InNewChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::NewProp_InNewChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Creates a new text to speech channel where text to speech requests are fulfilled by a user implemented C++ text to speech class. \n\x09* If you have not specified a custom text to speech class to be used, use AddDefaultChannel instead.\n\x09* This will not add a channel if the channel Id is not unique or if the user has not specified a custom text to speech class to be used in ITextToSpeechModule.\n\x09* Newly added channels must be activated to use text to speech functionalities.\n\x09* @see ITextToSpeechModule, AddDefaultChannel, ActivateChannel, ActivateAllChannels\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Creates a new text to speech channel where text to speech requests are fulfilled by a user implemented C++ text to speech class.\nIf you have not specified a custom text to speech class to be used, use AddDefaultChannel instead.\nThis will not add a channel if the channel Id is not unique or if the user has not specified a custom text to speech class to be used in ITextToSpeechModule.\nNewly added channels must be activated to use text to speech functionalities.\n@see ITextToSpeechModule, AddDefaultChannel, ActivateChannel, ActivateAllChannels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "AddCustomChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::TextToSpeechEngineSubsystem_eventAddCustomChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventAddDefaultChannel_Parms
		{
			FName InNewChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InNewChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::NewProp_InNewChannelId_MetaData[] = {
		{ "DisplayName", "New Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::NewProp_InNewChannelId = { "InNewChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventAddDefaultChannel_Parms, InNewChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::NewProp_InNewChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::NewProp_InNewChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::NewProp_InNewChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/**\n\x09* Creates a new  channel for text to speech requests to be made to a platform C++ text to speech class. \n\x09* This will not create the channel if the provided channel id is not unique.\n\x09* Newly added channels must be activated to use text to speech functionalities.\n\x09* For out-of-the-box text to speech support, this is most likely the channel creation method you want.\n\x09* @param InChannelId The Id of the channel you want to add\n\x09* @see ActivateChannel, ActivateAllChannels\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Creates a new  channel for text to speech requests to be made to a platform C++ text to speech class.\nThis will not create the channel if the provided channel id is not unique.\nNewly added channels must be activated to use text to speech functionalities.\nFor out-of-the-box text to speech support, this is most likely the channel creation method you want.\n@param InChannelId The Id of the channel you want to add\n@see ActivateChannel, ActivateAllChannels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "AddDefaultChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::TextToSpeechEngineSubsystem_eventAddDefaultChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** Deactivates all text to speech channels making all requests for text to speech functionality do nothing. */" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Deactivates all text to speech channels making all requests for text to speech functionality do nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "DeactivateAllChannels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventDeactivateChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventDeactivateChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/**\n\x09* Deactivates a text to speech channel and stops any vocalized strings on that channel. Future Requests for text to speech functionality will do nothing.\n\x09* If the provided channel Id does not exist, nothing will happen. \n\x09* @param InChannelId The Id for the channel to deactivate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Deactivates a text to speech channel and stops any vocalized strings on that channel. Future Requests for text to speech functionality will do nothing.\nIf the provided channel Id does not exist, nothing will happen.\n@param InChannelId The Id for the channel to deactivate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "DeactivateChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::TextToSpeechEngineSubsystem_eventDeactivateChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics
	{
		struct TextToSpeechEngineSubsystem_eventDoesChannelExist_Parms
		{
			FName InChannelId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventDoesChannelExist_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_InChannelId_MetaData)) };
	void Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextToSpeechEngineSubsystem_eventDoesChannelExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextToSpeechEngineSubsystem_eventDoesChannelExist_Parms), &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/**\n\x09* Returns true if a text to speech channel associated with a channel Id exists. Otherwise, the function returns false.\n\x09* @param InChannelId The channel Id to test if it is associated with a channel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns true if a text to speech channel associated with a channel Id exists. Otherwise, the function returns false.\n@param InChannelId The channel Id to test if it is associated with a channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "DoesChannelExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::TextToSpeechEngineSubsystem_eventDoesChannelExist_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics
	{
		struct TextToSpeechEngineSubsystem_eventGetNumChannels_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventGetNumChannels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** Returns the number of text to speech channels that have been added. */" },
		{ "DisplayName", "Get Number Of Channels" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns the number of text to speech channels that have been added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "GetNumChannels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::TextToSpeechEngineSubsystem_eventGetNumChannels_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventGetRateOnChannel_Parms
		{
			FName InChannelId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventGetRateOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventGetRateOnChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Returns the current speech rate strings are vocalized on a text to speech channel. Value is between 0.0 and 1.0.\n\x09* If the provided channel Id does not exist, 0.0f will be returned. \n\x09* @param InChannelId The Id for the channel to get the speech rate from. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns the current speech rate strings are vocalized on a text to speech channel. Value is between 0.0 and 1.0.\nIf the provided channel Id does not exist, 0.0f will be returned.\n@param InChannelId The Id for the channel to get the speech rate from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "GetRateOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::TextToSpeechEngineSubsystem_eventGetRateOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventGetVolumeOnChannel_Parms
		{
			FName InChannelId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventGetVolumeOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventGetVolumeOnChannel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Returns the current volume strings are vocalized on a text to speech channel.  Value is between 0.0f and 1.0f.\n\x09* If the provided channel Id doesn't exist, 0.0f will be returned. \n\x09* @param InChannelId The Id for the channel to retrieve the volume from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns the current volume strings are vocalized on a text to speech channel.  Value is between 0.0f and 1.0f.\nIf the provided channel Id doesn't exist, 0.0f will be returned.\n@param InChannelId The Id for the channel to retrieve the volume from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "GetVolumeOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::TextToSpeechEngineSubsystem_eventGetVolumeOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics
	{
		struct TextToSpeechEngineSubsystem_eventIsChannelActive_Parms
		{
			FName InChannelId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventIsChannelActive_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_InChannelId_MetaData)) };
	void Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextToSpeechEngineSubsystem_eventIsChannelActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextToSpeechEngineSubsystem_eventIsChannelActive_Parms), &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Returns true if the text to speech channel is active, otherwise false.\n\x09* @param InChannelId The Id for the channel to check if it is active. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns true if the text to speech channel is active, otherwise false.\n@param InChannelId The Id for the channel to check if it is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "IsChannelActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::TextToSpeechEngineSubsystem_eventIsChannelActive_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics
	{
		struct TextToSpeechEngineSubsystem_eventIsChannelMuted_Parms
		{
			FName InChannelId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventIsChannelMuted_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_InChannelId_MetaData)) };
	void Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextToSpeechEngineSubsystem_eventIsChannelMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextToSpeechEngineSubsystem_eventIsChannelMuted_Parms), &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Returns true if the text to speech channel is muted, otherwise false.\n\x09* @param InChannelId The Id for the channel to check if it is muted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Returns true if the text to speech channel is muted, otherwise false.\n@param InChannelId The Id for the channel to check if it is muted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "IsChannelMuted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::TextToSpeechEngineSubsystem_eventIsChannelMuted_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventIsSpeakingOnChannel_Parms
		{
			FName InChannelId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventIsSpeakingOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData)) };
	void Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextToSpeechEngineSubsystem_eventIsSpeakingOnChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextToSpeechEngineSubsystem_eventIsSpeakingOnChannel_Parms), &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Return true when the targeted text to speech channel is vocalising, otherwise false.\n\x09* @param InChannelId The id of the channel to check if a string is being vocalized.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Return true when the targeted text to speech channel is vocalising, otherwise false.\n@param InChannelId The id of the channel to check if a string is being vocalized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "IsSpeakingOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::TextToSpeechEngineSubsystem_eventIsSpeakingOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventMuteChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventMuteChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Mutes a text to speech channel so no vocalized strings are audible on that channel.\n\x09* If the requested channel is already muted, nothing will happen.\n\x09* @param InChannelId The Id for the channel to mute.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Mutes a text to speech channel so no vocalized strings are audible on that channel.\nIf the requested channel is already muted, nothing will happen.\n@param InChannelId The Id for the channel to mute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "MuteChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::TextToSpeechEngineSubsystem_eventMuteChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** Removes all text to speech channels, preventin future requests for text to speech functionality on all channels. */" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Removes all text to speech channels, preventin future requests for text to speech functionality on all channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "RemoveAllChannels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventRemoveChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventRemoveChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Removes a text to speech channel, preventing all further requests for text to speech functionality from the channel. \n\x09* If the provided channel Id does not exist, nothing will happen.\n\x09* @param InChannelId The Id for the channel you want removed. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Removes a text to speech channel, preventing all further requests for text to speech functionality from the channel.\nIf the provided channel Id does not exist, nothing will happen.\n@param InChannelId The Id for the channel you want removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "RemoveChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::TextToSpeechEngineSubsystem_eventRemoveChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventSetRateOnChannel_Parms
		{
			FName InChannelId;
			float InRate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSetRateOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InRate_MetaData[] = {
		{ "DisplayName", "Rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSetRateOnChannel_Parms, InRate), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::NewProp_InRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Sets the current speech rate strings should be vocalized on a text to speech channel.\n\x09* If the provided channel does not exist, nothing will happen. \n\x09* @param InChannelId The Id for the channel to set the speech rate on.\n\x09* @param InRate The speech rate to set for the channel. Value will be clamped between 0.0f and 1.0f.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Sets the current speech rate strings should be vocalized on a text to speech channel.\nIf the provided channel does not exist, nothing will happen.\n@param InChannelId The Id for the channel to set the speech rate on.\n@param InRate The speech rate to set for the channel. Value will be clamped between 0.0f and 1.0f." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "SetRateOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::TextToSpeechEngineSubsystem_eventSetRateOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventSetVolumeOnChannel_Parms
		{
			FName InChannelId;
			float InVolume;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSetVolumeOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InVolume_MetaData[] = {
		{ "DisplayName", "Volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSetVolumeOnChannel_Parms, InVolume), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::NewProp_InVolume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Sets the volume for strings vocalized on a text to speech channel. \n\x09* If the provided channel Id does not exist, nothing will happen.\n\x09* @param InChannelId The Id for the channel to set for.\n\x09* @param InVolume The volume to be set on the channel. The value will be clamped between 0.0f and 1.0f. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Sets the volume for strings vocalized on a text to speech channel.\nIf the provided channel Id does not exist, nothing will happen.\n@param InChannelId The Id for the channel to set for.\n@param InVolume The volume to be set on the channel. The value will be clamped between 0.0f and 1.0f." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "SetVolumeOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::TextToSpeechEngineSubsystem_eventSetVolumeOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventSpeakOnChannel_Parms
		{
			FName InChannelId;
			FString InStringToSpeak;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStringToSpeak_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStringToSpeak;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSpeakOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InStringToSpeak_MetaData[] = {
		{ "DisplayName", "String To Speak" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InStringToSpeak = { "InStringToSpeak", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventSpeakOnChannel_Parms, InStringToSpeak), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InStringToSpeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InStringToSpeak_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::NewProp_InStringToSpeak,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/**\n\x09* Immediately vocalizes the requested string asynchronously on the requested text to speech channel, interrupting any string that is already being vocalized on the channel.\n\x09* If the provided channel Id does not exist, nothing will be vocalized.\n\x09* Before executing this function, a text to speech channel must be added and activated.\n\x09* To create a platform default text to speech channel, use AddDefaultChannel.\n\x09* To create a custom text to speech channel with a user-implemented C++ text to speech class, use AddCustomChannel.\n\x09* This function is not intended for long strings that span multiple sentences or paragraphs.\n\x09* @param InChannelId The Id of the channel to speak on.\n\x09* @param InStringToSpeak The string to speak on the requested channel.\n\x09* @see AddDefaultChannel, AddCustomChannel, ActivateChannel, ActivateAllChannels\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Immediately vocalizes the requested string asynchronously on the requested text to speech channel, interrupting any string that is already being vocalized on the channel.\nIf the provided channel Id does not exist, nothing will be vocalized.\nBefore executing this function, a text to speech channel must be added and activated.\nTo create a platform default text to speech channel, use AddDefaultChannel.\nTo create a custom text to speech channel with a user-implemented C++ text to speech class, use AddCustomChannel.\nThis function is not intended for long strings that span multiple sentences or paragraphs.\n@param InChannelId The Id of the channel to speak on.\n@param InStringToSpeak The string to speak on the requested channel.\n@see AddDefaultChannel, AddCustomChannel, ActivateChannel, ActivateAllChannels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "SpeakOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::TextToSpeechEngineSubsystem_eventSpeakOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** Immediately stops strings from being vocalized on all text to speech channels. */" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Immediately stops strings from being vocalized on all text to speech channels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "StopSpeakingOnAllChannels", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventStopSpeakingOnChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventStopSpeakingOnChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Immediately stops any currently vocalized string on the channel.\n\x09* If the provided channel Id does not exist, nothing will happen.\n\x09* @param InChannelId The Id of the channel speech should be stopped on. \n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Immediately stops any currently vocalized string on the channel.\nIf the provided channel Id does not exist, nothing will happen.\n@param InChannelId The Id of the channel speech should be stopped on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "StopSpeakingOnChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::TextToSpeechEngineSubsystem_eventStopSpeakingOnChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics
	{
		struct TextToSpeechEngineSubsystem_eventUnmuteChannel_Parms
		{
			FName InChannelId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::NewProp_InChannelId_MetaData[] = {
		{ "DisplayName", "Channel Id" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::NewProp_InChannelId = { "InChannelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextToSpeechEngineSubsystem_eventUnmuteChannel_Parms, InChannelId), METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::NewProp_InChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::NewProp_InChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::NewProp_InChannelId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextToSpeech" },
		{ "Comment", "/** \n\x09* Unmutes a text to speech channel so vocalized strings are audible on the channel.\n\x09* If the requested channel is already unmuted, nothing will happen.\n\x09@param InChannelId The Id for the channel to unmute.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Unmutes a text to speech channel so vocalized strings are audible on the channel.\nIf the requested channel is already unmuted, nothing will happen.\n       @param InChannelId The Id for the channel to unmute." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextToSpeechEngineSubsystem, nullptr, "UnmuteChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::TextToSpeechEngineSubsystem_eventUnmuteChannel_Parms), Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextToSpeechEngineSubsystem);
	UClass* Z_Construct_UClass_UTextToSpeechEngineSubsystem_NoRegister()
	{
		return UTextToSpeechEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TextToSpeech,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateAllChannels, "ActivateAllChannels" }, // 3785916272
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_ActivateChannel, "ActivateChannel" }, // 198412679
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddCustomChannel, "AddCustomChannel" }, // 3929628524
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_AddDefaultChannel, "AddDefaultChannel" }, // 1097101637
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateAllChannels, "DeactivateAllChannels" }, // 2183614344
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DeactivateChannel, "DeactivateChannel" }, // 1561420667
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_DoesChannelExist, "DoesChannelExist" }, // 1814679052
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetNumChannels, "GetNumChannels" }, // 2764393765
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetRateOnChannel, "GetRateOnChannel" }, // 1991578928
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_GetVolumeOnChannel, "GetVolumeOnChannel" }, // 100012351
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelActive, "IsChannelActive" }, // 1351652031
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsChannelMuted, "IsChannelMuted" }, // 2001983976
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_IsSpeakingOnChannel, "IsSpeakingOnChannel" }, // 3988132822
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_MuteChannel, "MuteChannel" }, // 3366327139
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveAllChannels, "RemoveAllChannels" }, // 1725153980
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_RemoveChannel, "RemoveChannel" }, // 2851780757
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetRateOnChannel, "SetRateOnChannel" }, // 2174897217
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SetVolumeOnChannel, "SetVolumeOnChannel" }, // 413695115
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_SpeakOnChannel, "SpeakOnChannel" }, // 1398129473
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnAllChannels, "StopSpeakingOnAllChannels" }, // 1602608800
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_StopSpeakingOnChannel, "StopSpeakingOnChannel" }, // 3459369692
		{ &Z_Construct_UFunction_UTextToSpeechEngineSubsystem_UnmuteChannel, "UnmuteChannel" }, // 324855400
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Subsystem for interacting with the text to speech system via blueprints.\n* The subsystem consists of a number of text to speech channels associated with a text to speech channel Id.\n* Each text to speech channel provides text to speech functionality such as vocalizing a string, stopping a vocalized string, controlling the audio settings of the channel and muting/unmuting a channel. \n* Most of the functions take a text to speech channel Id which allows you to request text to speech functionality on the requested channel.\n* All newly added text to speech channels start off deactivated and must be activated before any text to speech functionality can be used.\n*/" },
		{ "IncludePath", "TextToSpeechEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/TextToSpeechEngineSubsystem.h" },
		{ "ToolTip", "Subsystem for interacting with the text to speech system via blueprints.\nThe subsystem consists of a number of text to speech channels associated with a text to speech channel Id.\nEach text to speech channel provides text to speech functionality such as vocalizing a string, stopping a vocalized string, controlling the audio settings of the channel and muting/unmuting a channel.\nMost of the functions take a text to speech channel Id which allows you to request text to speech functionality on the requested channel.\nAll newly added text to speech channels start off deactivated and must be activated before any text to speech functionality can be used." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextToSpeechEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::ClassParams = {
		&UTextToSpeechEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextToSpeechEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTextToSpeechEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextToSpeechEngineSubsystem.OuterSingleton, Z_Construct_UClass_UTextToSpeechEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextToSpeechEngineSubsystem.OuterSingleton;
	}
	template<> TEXTTOSPEECH_API UClass* StaticClass<UTextToSpeechEngineSubsystem>()
	{
		return UTextToSpeechEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextToSpeechEngineSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextToSpeechEngineSubsystem, UTextToSpeechEngineSubsystem::StaticClass, TEXT("UTextToSpeechEngineSubsystem"), &Z_Registration_Info_UClass_UTextToSpeechEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextToSpeechEngineSubsystem), 2541720428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_3033631181(TEXT("/Script/TextToSpeech"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_TextToSpeech_Source_TextToSpeech_Public_TextToSpeechEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
