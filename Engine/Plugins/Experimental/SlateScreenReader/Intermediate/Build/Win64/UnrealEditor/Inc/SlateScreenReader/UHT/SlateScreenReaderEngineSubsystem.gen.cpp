// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateScreenReaderEngineSubsystem.h"
#include "Announcement/ScreenReaderAnnouncement.h"
#include "GenericPlatform/ScreenReaderReply.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateScreenReaderEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	SCREENREADER_API UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderAnnouncement();
	SCREENREADER_API UScriptStruct* Z_Construct_UScriptStruct_FScreenReaderReply();
	SLATESCREENREADER_API UClass* Z_Construct_UClass_USlateScreenReaderEngineSubsystem();
	SLATESCREENREADER_API UClass* Z_Construct_UClass_USlateScreenReaderEngineSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateScreenReader();
// End Cross Module References
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execIsSpeechMuted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeechMuted(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execUnmuteSpeech)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->UnmuteSpeech(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execMuteSpeech)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->MuteSpeech(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execSetSpeechRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->SetSpeechRate(Z_Param_InUserId,Z_Param_InRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execGetSpeechRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeechRate(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execSetSpeechVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->SetSpeechVolume(Z_Param_InUserId,Z_Param_InVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execGetSpeechVolume)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeechVolume(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execIsSpeaking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpeaking(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execStopSpeaking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->StopSpeaking(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execRequestSpeakFocusedWidget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->RequestSpeakFocusedWidget(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execRequestSpeak)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_GET_STRUCT(FScreenReaderAnnouncement,Z_Param_InAnnouncement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->RequestSpeak(Z_Param_InUserId,Z_Param_InAnnouncement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execIsUserRegistered)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUserRegistered(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execUnregisterUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->UnregisterUser(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execRegisterUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->RegisterUser(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execDeactivateUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->DeactivateUser(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execActivateUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScreenReaderReply*)Z_Param__Result=P_THIS->ActivateUser(Z_Param_InUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execIsScreenReaderActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsScreenReaderActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execDeactivateScreenReader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeactivateScreenReader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateScreenReaderEngineSubsystem::execActivateScreenReader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateScreenReader();
		P_NATIVE_END;
	}
	void USlateScreenReaderEngineSubsystem::StaticRegisterNativesUSlateScreenReaderEngineSubsystem()
	{
		UClass* Class = USlateScreenReaderEngineSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateScreenReader", &USlateScreenReaderEngineSubsystem::execActivateScreenReader },
			{ "ActivateUser", &USlateScreenReaderEngineSubsystem::execActivateUser },
			{ "DeactivateScreenReader", &USlateScreenReaderEngineSubsystem::execDeactivateScreenReader },
			{ "DeactivateUser", &USlateScreenReaderEngineSubsystem::execDeactivateUser },
			{ "GetSpeechRate", &USlateScreenReaderEngineSubsystem::execGetSpeechRate },
			{ "GetSpeechVolume", &USlateScreenReaderEngineSubsystem::execGetSpeechVolume },
			{ "IsScreenReaderActive", &USlateScreenReaderEngineSubsystem::execIsScreenReaderActive },
			{ "IsSpeaking", &USlateScreenReaderEngineSubsystem::execIsSpeaking },
			{ "IsSpeechMuted", &USlateScreenReaderEngineSubsystem::execIsSpeechMuted },
			{ "IsUserRegistered", &USlateScreenReaderEngineSubsystem::execIsUserRegistered },
			{ "MuteSpeech", &USlateScreenReaderEngineSubsystem::execMuteSpeech },
			{ "RegisterUser", &USlateScreenReaderEngineSubsystem::execRegisterUser },
			{ "RequestSpeak", &USlateScreenReaderEngineSubsystem::execRequestSpeak },
			{ "RequestSpeakFocusedWidget", &USlateScreenReaderEngineSubsystem::execRequestSpeakFocusedWidget },
			{ "SetSpeechRate", &USlateScreenReaderEngineSubsystem::execSetSpeechRate },
			{ "SetSpeechVolume", &USlateScreenReaderEngineSubsystem::execSetSpeechVolume },
			{ "StopSpeaking", &USlateScreenReaderEngineSubsystem::execStopSpeaking },
			{ "UnmuteSpeech", &USlateScreenReaderEngineSubsystem::execUnmuteSpeech },
			{ "UnregisterUser", &USlateScreenReaderEngineSubsystem::execUnregisterUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/** \n\x09* Activates the underlying screen reader. Use this to allow screen reader users to register with the screen reader \n\x09* and receive accessible feedback via text to speech and get access to other screen reader services.\n\x09* A basic workflow with activation would be:\n\x09* ActivateScreenReader() -> RegisterScreenReaderUser() -> ActivateScreenReaderUser()\n\x09* @see RegisterScreenReaderUser(), ActivateScreenReaderUser()\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Activates the underlying screen reader. Use this to allow screen reader users to register with the screen reader\nand receive accessible feedback via text to speech and get access to other screen reader services.\nA basic workflow with activation would be:\nActivateScreenReader() -> RegisterScreenReaderUser() -> ActivateScreenReaderUser()\n@see RegisterScreenReaderUser(), ActivateScreenReaderUser()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "ActivateScreenReader", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventActivateUser_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventActivateUser_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventActivateUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Activates a screen reader user and fulfill requests for accessibility services such as text to speech that clients can make.\n\x09* When screen reader users are first registered with a screen reader, they are deactivated by default. Users must explicitly activate the screen reader user.\n\x09* If the passed in user Id does not correspond to a registered screen reader user, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to request activation \n\x09* @return FScreenReaderReply::Handled() if the screen reader user is successfully activated. Else FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Activates a screen reader user and fulfill requests for accessibility services such as text to speech that clients can make.\nWhen screen reader users are first registered with a screen reader, they are deactivated by default. Users must explicitly activate the screen reader user.\nIf the passed in user Id does not correspond to a registered screen reader user, nothing will happen.\n@param InUserId The user Id of the screen reader user to request activation\n@return FScreenReaderReply::Handled() if the screen reader user is successfully activated. Else FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "ActivateUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::SlateScreenReaderEngineSubsystem_eventActivateUser_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Deactivates the underlying screen reader and prevents screen reader users from getting\n\x09* any accessible feedback via text to speech or using any other screen reader services.\n\x09* Note: When the screen reader is deactivated, none of the registered screen reader users will be unregistered or cleared. This allows you to \n\x09* deactivate the screen reader to prevent accessible services such as text to speech from triggering and then activate the screen reader again to continue those services.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Deactivates the underlying screen reader and prevents screen reader users from getting\nany accessible feedback via text to speech or using any other screen reader services.\nNote: When the screen reader is deactivated, none of the registered screen reader users will be unregistered or cleared. This allows you to\ndeactivate the screen reader to prevent accessible services such as text to speech from triggering and then activate the screen reader again to continue those services." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "DeactivateScreenReader", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventDeactivateUser_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventDeactivateUser_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventDeactivateUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Deactivates the screen reader and disables all announcement and text to speech services\n\x09* making them do nothing.\n\x09* If the passed in user Id does not correspond to a registered screen reader user, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to request deactivation. The Id should correspond to the Slate user id of an input device. If unsure, use Id 0. \n\x09* @return FScreenReaderReply::Handled() if the screen reader user is successfully deactivated. Else FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Deactivates the screen reader and disables all announcement and text to speech services\nmaking them do nothing.\nIf the passed in user Id does not correspond to a registered screen reader user, nothing will happen.\n@param InUserId The user Id of the screen reader user to request deactivation. The Id should correspond to the Slate user id of an input device. If unsure, use Id 0.\n@return FScreenReaderReply::Handled() if the screen reader user is successfully deactivated. Else FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "DeactivateUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::SlateScreenReaderEngineSubsystem_eventDeactivateUser_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventGetSpeechRate_Parms
		{
			int32 InUserId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventGetSpeechRate_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventGetSpeechRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns the rate text to speech will be speaking at for a screen reader user.  Value is between 0.0f and 1.0f.\n\x09* If the provided user Id doesn't exist, 0.0f will be returned.\n\x09* @param InUserId The user Id of the screen reader user to retrieve the text to speech rate for\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns the rate text to speech will be speaking at for a screen reader user.  Value is between 0.0f and 1.0f.\nIf the provided user Id doesn't exist, 0.0f will be returned.\n@param InUserId The user Id of the screen reader user to retrieve the text to speech rate for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "GetSpeechRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::SlateScreenReaderEngineSubsystem_eventGetSpeechRate_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventGetSpeechVolume_Parms
		{
			int32 InUserId;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventGetSpeechVolume_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventGetSpeechVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns the volume text to speech will be speaking at for a screen reader user.  Value is between 0.0f and 1.0f.\n\x09* If the provided user Id doesn't exist, 0.0f will be returned.\n\x09* @param InUserId The user Id of the screen reader user to retrieve the text to speech volume for \n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns the volume text to speech will be speaking at for a screen reader user.  Value is between 0.0f and 1.0f.\nIf the provided user Id doesn't exist, 0.0f will be returned.\n@param InUserId The user Id of the screen reader user to retrieve the text to speech volume for" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "GetSpeechVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::SlateScreenReaderEngineSubsystem_eventGetSpeechVolume_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventIsScreenReaderActive_Parms
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
	void Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateScreenReaderEngineSubsystem_eventIsScreenReaderActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateScreenReaderEngineSubsystem_eventIsScreenReaderActive_Parms), &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns true if the screen reader is currently active and accessibility services such as text to speech can be used by the screen reader users. \n\x09* Otherwise, it returns false.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns true if the screen reader is currently active and accessibility services such as text to speech can be used by the screen reader users.\nOtherwise, it returns false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "IsScreenReaderActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::SlateScreenReaderEngineSubsystem_eventIsScreenReaderActive_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventIsSpeaking_Parms
		{
			int32 InUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventIsSpeaking_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_InUserId_MetaData)) };
	void Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateScreenReaderEngineSubsystem_eventIsSpeaking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateScreenReaderEngineSubsystem_eventIsSpeaking_Parms), &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns true if the screen reader is speaking text to a particular user.\n\x09* Returns false if no no announcements are being spoken to the user or if the user Id is not registered.\n\x09* @param InUserId The user Id of the screen reader user to check if any announcements are being spoken to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns true if the screen reader is speaking text to a particular user.\nReturns false if no no announcements are being spoken to the user or if the user Id is not registered.\n@param InUserId The user Id of the screen reader user to check if any announcements are being spoken to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "IsSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::SlateScreenReaderEngineSubsystem_eventIsSpeaking_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventIsSpeechMuted_Parms
		{
			int32 InUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventIsSpeechMuted_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_InUserId_MetaData)) };
	void Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateScreenReaderEngineSubsystem_eventIsSpeechMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateScreenReaderEngineSubsystem_eventIsSpeechMuted_Parms), &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns true if text to speech for a screen reader user is muted. Otherwise false is returned.\n\x09* If the provided user Id doesn't exist, false will be returned.\n\x09* @param InUserId The screen reader user Id to check if text to speech is muted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns true if text to speech for a screen reader user is muted. Otherwise false is returned.\nIf the provided user Id doesn't exist, false will be returned.\n@param InUserId The screen reader user Id to check if text to speech is muted." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "IsSpeechMuted", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::SlateScreenReaderEngineSubsystem_eventIsSpeechMuted_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventIsUserRegistered_Parms
		{
			int32 InUserId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventIsUserRegistered_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_InUserId_MetaData)) };
	void Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateScreenReaderEngineSubsystem_eventIsUserRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateScreenReaderEngineSubsystem_eventIsUserRegistered_Parms), &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Returns true if the passed in screen reader user Id is already registered. Else false is returned.\n\x09* @param InUserId The user Id to check for registration.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Returns true if the passed in screen reader user Id is already registered. Else false is returned.\n@param InUserId The user Id to check for registration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "IsUserRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::SlateScreenReaderEngineSubsystem_eventIsUserRegistered_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventMuteSpeech_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventMuteSpeech_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventMuteSpeech_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Mutes the text to speech for a screen reader user.\n\x09* If the provided user Id doesn't exist, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to mute text to speech for.\n\x09* @return FScreenReaderReply::Handled() is returned if the screen reader user is successfully muted. Otherwise, FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Mutes the text to speech for a screen reader user.\nIf the provided user Id doesn't exist, nothing will happen.\n@param InUserId The user Id of the screen reader user to mute text to speech for.\n@return FScreenReaderReply::Handled() is returned if the screen reader user is successfully muted. Otherwise, FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "MuteSpeech", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::SlateScreenReaderEngineSubsystem_eventMuteSpeech_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventRegisterUser_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRegisterUser_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRegisterUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Registers a provided user Id to the screen reader framework and allows the screen reader user to receive and respond to accessible events and accessible input.\n\x09* Does nothing if the passed in Id is already registered.\n\x09* Note: A successfully registered screen reader user is deactivated by default and will not respond to accessible events or accessible input.\n\x09* You need to call ActivateUser() to allow the newly registered screen reader user to respond to the accessible events and accessible input.\n\x09* @param InUserId The user Id of the screen reader user to register. The Id should correspond to a valid Slate user Id for an active hardware input device. If unsure, use Id 0.\n\x09* @return FScreenReaderReply::Handled() if the screen reader user is successfully registered. Else FScreenReaderReply::Unhandled() is returned.\n\x09* @see ActivateUser()\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Registers a provided user Id to the screen reader framework and allows the screen reader user to receive and respond to accessible events and accessible input.\nDoes nothing if the passed in Id is already registered.\nNote: A successfully registered screen reader user is deactivated by default and will not respond to accessible events or accessible input.\nYou need to call ActivateUser() to allow the newly registered screen reader user to respond to the accessible events and accessible input.\n@param InUserId The user Id of the screen reader user to register. The Id should correspond to a valid Slate user Id for an active hardware input device. If unsure, use Id 0.\n@return FScreenReaderReply::Handled() if the screen reader user is successfully registered. Else FScreenReaderReply::Unhandled() is returned.\n@see ActivateUser()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "RegisterUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::SlateScreenReaderEngineSubsystem_eventRegisterUser_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventRequestSpeak_Parms
		{
			int32 InUserId;
			FScreenReaderAnnouncement InAnnouncement;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnnouncement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAnnouncement;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRequestSpeak_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InAnnouncement_MetaData[] = {
		{ "DisplayName", "Announcement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InAnnouncement = { "InAnnouncement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRequestSpeak_Parms, InAnnouncement), Z_Construct_UScriptStruct_FScreenReaderAnnouncement, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InAnnouncement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InAnnouncement_MetaData)) }; // 2625095201
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRequestSpeak_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_InAnnouncement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Requests an announcement to be spoken to the screen reader user. This is the main mechanism to provide text to speech auditory feedback\n\x09* to end users.\n\x09*Calling this function does not guarantee that the announcement will be spoken via text to speech and be\n\x09* heard by a user.\n\x09* All announcements spoken via text to speech will be asynchronous and will not block the game thread.\n\x09* If the screen reader user is active and no announcements are currently spoken, the announcement will be spoken immediately.\n\x09* If another announcement is currently being spoken, the passed in announcement could be queued or interrupt the currently spoken announcement.\n\x09* @param InUserId The user Id of the screen reader user the announcement is intended for \n\x09* @param InAnnouncement - The announcement requested to be spoken to the screen reader user\n\x09* @return FScreenReaderReply::Handled() if the request was successfully processed. Else return FScreenReader::Unhandled()\n\x09* @see FScreenReaderAnnouncement, FScreenReaderAnnouncementInfo\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Requests an announcement to be spoken to the screen reader user. This is the main mechanism to provide text to speech auditory feedback\nto end users.\nCalling this function does not guarantee that the announcement will be spoken via text to speech and be\nheard by a user.\nAll announcements spoken via text to speech will be asynchronous and will not block the game thread.\nIf the screen reader user is active and no announcements are currently spoken, the announcement will be spoken immediately.\nIf another announcement is currently being spoken, the passed in announcement could be queued or interrupt the currently spoken announcement.\n@param InUserId The user Id of the screen reader user the announcement is intended for\n@param InAnnouncement - The announcement requested to be spoken to the screen reader user\n@return FScreenReaderReply::Handled() if the request was successfully processed. Else return FScreenReader::Unhandled()\n@see FScreenReaderAnnouncement, FScreenReaderAnnouncementInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "RequestSpeak", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::SlateScreenReaderEngineSubsystem_eventRequestSpeak_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventRequestSpeakFocusedWidget_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRequestSpeakFocusedWidget_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventRequestSpeakFocusedWidget_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Requests the information about the accessibility widget a user is focused on to be read out.\n\x09* If nothing is currently being focused on by the screen reader user, nothing will be read out.\n\x09* The same guarantees about the announcement being spoken in RequestSpeak() apply for this function.\n\x09* Nothing will happen if the passed in user Id is not already registered with the screen reader.\n\x09* @param InUserId The user Id to request its accessible focus to be read out\n\x09* @return FScreenReaderReply::Handled() if the user's focused widget's information is successfully spoken. Else FScreenReaderReply::Unhandled() is returned. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Requests the information about the accessibility widget a user is focused on to be read out.\nIf nothing is currently being focused on by the screen reader user, nothing will be read out.\nThe same guarantees about the announcement being spoken in RequestSpeak() apply for this function.\nNothing will happen if the passed in user Id is not already registered with the screen reader.\n@param InUserId The user Id to request its accessible focus to be read out\n@return FScreenReaderReply::Handled() if the user's focused widget's information is successfully spoken. Else FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "RequestSpeakFocusedWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::SlateScreenReaderEngineSubsystem_eventRequestSpeakFocusedWidget_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventSetSpeechRate_Parms
		{
			int32 InUserId;
			float InRate;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechRate_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InRate_MetaData[] = {
		{ "DisplayName", "Rate" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechRate_Parms, InRate), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InRate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_InRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Sets the rate text to speech will be speaking at for a screen reader user.\n\x09* If the provided user Id doesn't exist, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to set the text to speech rate for\n\x09* @param InRate The rate text to speech will be set at for the provided screen reader user. Value will be clamped between 0.0f and 1.0f.\n\x09* @return FScreenReaderReply::Handled() is returned if the speech rate is successfully set for the screen reader user. Otherwise, FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Sets the rate text to speech will be speaking at for a screen reader user.\nIf the provided user Id doesn't exist, nothing will happen.\n@param InUserId The user Id of the screen reader user to set the text to speech rate for\n@param InRate The rate text to speech will be set at for the provided screen reader user. Value will be clamped between 0.0f and 1.0f.\n@return FScreenReaderReply::Handled() is returned if the speech rate is successfully set for the screen reader user. Otherwise, FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "SetSpeechRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::SlateScreenReaderEngineSubsystem_eventSetSpeechRate_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventSetSpeechVolume_Parms
		{
			int32 InUserId;
			float InVolume;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InVolume;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechVolume_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InVolume_MetaData[] = {
		{ "DisplayName", "Volume" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InVolume = { "InVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechVolume_Parms, InVolume), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InVolume_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventSetSpeechVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_InVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Sets the volume text to speech will be speaking at for a screen reader user.  \n\x09* If the provided user Id doesn't exist, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to set the text to speech volume for\n\x09* @param InVolume The volume text to speech will be set at for the provided screen reader user. Value will be clamped between 0.0f and 1.0f.\n\x09* @return FScreenReaderReply::Handled() is returned if the speech volume is successfully set for the screen reader user. Otherwise, FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Sets the volume text to speech will be speaking at for a screen reader user.\nIf the provided user Id doesn't exist, nothing will happen.\n@param InUserId The user Id of the screen reader user to set the text to speech volume for\n@param InVolume The volume text to speech will be set at for the provided screen reader user. Value will be clamped between 0.0f and 1.0f.\n@return FScreenReaderReply::Handled() is returned if the speech volume is successfully set for the screen reader user. Otherwise, FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "SetSpeechVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::SlateScreenReaderEngineSubsystem_eventSetSpeechVolume_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventStopSpeaking_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventStopSpeaking_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventStopSpeaking_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Immediately stops speaking any currently spoken announcement for a particular screen reader user.\n\x09* Does nothing if there is no announcement currently being spoken for the user or if the user Id is not registered with the screen reader.\n\x09* @param InUserId The user Id of the screen reader user to request announcements to be stopped.\n\x09* @return FScreenReader::Handled() if the request to stop speaking is successfully processed. Else FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Immediately stops speaking any currently spoken announcement for a particular screen reader user.\nDoes nothing if there is no announcement currently being spoken for the user or if the user Id is not registered with the screen reader.\n@param InUserId The user Id of the screen reader user to request announcements to be stopped.\n@return FScreenReader::Handled() if the request to stop speaking is successfully processed. Else FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "StopSpeaking", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::SlateScreenReaderEngineSubsystem_eventStopSpeaking_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventUnmuteSpeech_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventUnmuteSpeech_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventUnmuteSpeech_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Unmutes the text to speech for a screen reader user.\n\x09* If the provided user Id doesn't exist, nothing will happen.\n\x09* @param InUserId The user Id of the screen reader user to unmute text to speech for.\n\x09* @return FScreenReaderReply::Handled() is returned if the screen reader user is successfully unmuted. Otherwise, FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Unmutes the text to speech for a screen reader user.\nIf the provided user Id doesn't exist, nothing will happen.\n@param InUserId The user Id of the screen reader user to unmute text to speech for.\n@return FScreenReaderReply::Handled() is returned if the screen reader user is successfully unmuted. Otherwise, FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "UnmuteSpeech", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::SlateScreenReaderEngineSubsystem_eventUnmuteSpeech_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics
	{
		struct SlateScreenReaderEngineSubsystem_eventUnregisterUser_Parms
		{
			int32 InUserId;
			FScreenReaderReply ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUserId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InUserId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_InUserId_MetaData[] = {
		{ "DisplayName", "Screen Reader User Id" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_InUserId = { "InUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventUnregisterUser_Parms, InUserId), METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_InUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_InUserId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateScreenReaderEngineSubsystem_eventUnregisterUser_Parms, ReturnValue), Z_Construct_UScriptStruct_FScreenReaderReply, METADATA_PARAMS(nullptr, 0) }; // 1123592948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_InUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateScreenReader" },
		{ "Comment", "/**\n\x09* Unregisters a provided user Id from the screen reader framework and deactivates the user. The unregistered user will no longer receive or respond to accessible events and input.\n\x09* Nothing will happen if the provided user Id has not been registered with the screen reader.\n\x09* @param InUserId The user Id to unregister from the screen reader framework.\n\x09* @return FScreenReaderReply::Handled() if the screen reader user is successfully unregistered. Else FScreenReaderReply::Unhandled() is returned.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "Unregisters a provided user Id from the screen reader framework and deactivates the user. The unregistered user will no longer receive or respond to accessible events and input.\nNothing will happen if the provided user Id has not been registered with the screen reader.\n@param InUserId The user Id to unregister from the screen reader framework.\n@return FScreenReaderReply::Handled() if the screen reader user is successfully unregistered. Else FScreenReaderReply::Unhandled() is returned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateScreenReaderEngineSubsystem, nullptr, "UnregisterUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::SlateScreenReaderEngineSubsystem_eventUnregisterUser_Parms), Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateScreenReaderEngineSubsystem);
	UClass* Z_Construct_UClass_USlateScreenReaderEngineSubsystem_NoRegister()
	{
		return USlateScreenReaderEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateScreenReader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateScreenReader, "ActivateScreenReader" }, // 112675346
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_ActivateUser, "ActivateUser" }, // 3697944474
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateScreenReader, "DeactivateScreenReader" }, // 304446240
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_DeactivateUser, "DeactivateUser" }, // 4038897080
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechRate, "GetSpeechRate" }, // 4181741359
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_GetSpeechVolume, "GetSpeechVolume" }, // 2598105882
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsScreenReaderActive, "IsScreenReaderActive" }, // 3558310325
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeaking, "IsSpeaking" }, // 1228058333
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsSpeechMuted, "IsSpeechMuted" }, // 2136194325
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_IsUserRegistered, "IsUserRegistered" }, // 33030663
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_MuteSpeech, "MuteSpeech" }, // 406473026
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RegisterUser, "RegisterUser" }, // 365088536
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeak, "RequestSpeak" }, // 2716176128
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_RequestSpeakFocusedWidget, "RequestSpeakFocusedWidget" }, // 95449359
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechRate, "SetSpeechRate" }, // 871956283
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_SetSpeechVolume, "SetSpeechVolume" }, // 287311116
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_StopSpeaking, "StopSpeaking" }, // 1746157705
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnmuteSpeech, "UnmuteSpeech" }, // 1361721979
		{ &Z_Construct_UFunction_USlateScreenReaderEngineSubsystem_UnregisterUser, "UnregisterUser" }, // 3891716537
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* The engine subsystem for the Slate screen reader.\n* A screen reader is a framework that provides vision accessibility services for screen reader useres.\n* A screen reader user is a single user of the screen reader framework and can be thought of as a user of a hardware device such as keyboard/mouse or a controller.\n* Screen reader users must be registered with the screen reader framework for them to receive feedback from the accessibility services provided by the screen reader framework.\n* This class should be the entryway for C++ programmers and BP useres alike to interact with the screen reader system.\n* The subsystem must be activated before the screen reader services can be used.\n* For C++ users, please retrieve the screen reader and interact with the screen reader users from there.\n* Example:\n* USlateScreenReaderEngineSubsystem ::Get().ActivateScreenReader();\n* // Registers a screen reader user with Id 0. A screen reader user should correspond to a hardware input device such as a keyboard or controller like FSlateUser\n* USlateScreenReaderEngineSubsystem ::Get().GetScreenReader()->RegisterUser(0);\n* TSharedRef<FScreenReaderUser> User = USlateScreenReaderEngineSubsystem::Get().GetScreenReader()->GetUserChecked(0);\n* // Screen reader users are inactive when they are first registered and need to be explicitly activated.\n* User->Activate();\n* static const FText HelloWorld = LOCTEXT(\"HelloWorld\", \"Hello World\");\n* // Requests \"Hello World\" to be spoken to the screen reader user\n* User->RequestSpeak(FScreenReaderAnnouncement(HelloWorld.ToString(), FScreenReaderInfo::Important())); \n* @see FScreenReaderBase, FScreenReaderUser, FScreenReaderAnnouncement\n*/" },
		{ "IncludePath", "SlateScreenReaderEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/SlateScreenReaderEngineSubsystem.h" },
		{ "ToolTip", "The engine subsystem for the Slate screen reader.\nA screen reader is a framework that provides vision accessibility services for screen reader useres.\nA screen reader user is a single user of the screen reader framework and can be thought of as a user of a hardware device such as keyboard/mouse or a controller.\nScreen reader users must be registered with the screen reader framework for them to receive feedback from the accessibility services provided by the screen reader framework.\nThis class should be the entryway for C++ programmers and BP useres alike to interact with the screen reader system.\nThe subsystem must be activated before the screen reader services can be used.\nFor C++ users, please retrieve the screen reader and interact with the screen reader users from there.\nExample:\nUSlateScreenReaderEngineSubsystem ::Get().ActivateScreenReader();\n// Registers a screen reader user with Id 0. A screen reader user should correspond to a hardware input device such as a keyboard or controller like FSlateUser\nUSlateScreenReaderEngineSubsystem ::Get().GetScreenReader()->RegisterUser(0);\nTSharedRef<FScreenReaderUser> User = USlateScreenReaderEngineSubsystem::Get().GetScreenReader()->GetUserChecked(0);\n// Screen reader users are inactive when they are first registered and need to be explicitly activated.\nUser->Activate();\nstatic const FText HelloWorld = LOCTEXT(\"HelloWorld\", \"Hello World\");\n// Requests \"Hello World\" to be spoken to the screen reader user\nUser->RequestSpeak(FScreenReaderAnnouncement(HelloWorld.ToString(), FScreenReaderInfo::Important()));\n@see FScreenReaderBase, FScreenReaderUser, FScreenReaderAnnouncement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateScreenReaderEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::ClassParams = {
		&USlateScreenReaderEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateScreenReaderEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_USlateScreenReaderEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateScreenReaderEngineSubsystem.OuterSingleton, Z_Construct_UClass_USlateScreenReaderEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateScreenReaderEngineSubsystem.OuterSingleton;
	}
	template<> SLATESCREENREADER_API UClass* StaticClass<USlateScreenReaderEngineSubsystem>()
	{
		return USlateScreenReaderEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateScreenReaderEngineSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateScreenReaderEngineSubsystem, USlateScreenReaderEngineSubsystem::StaticClass, TEXT("USlateScreenReaderEngineSubsystem"), &Z_Registration_Info_UClass_USlateScreenReaderEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateScreenReaderEngineSubsystem), 1261442934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_1226295426(TEXT("/Script/SlateScreenReader"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SlateScreenReader_Source_SlateScreenReader_Public_SlateScreenReaderEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
