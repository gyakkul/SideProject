// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTSubsystem.h"
#include "JsonObjectWrapper.h"
#include "MQTTClientMessage.h"
#include "MQTTShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTClientObject_NoRegister();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTSubsystem();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTSubsystem_NoRegister();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTClientMessage();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTURL();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	DEFINE_FUNCTION(UMQTTSubsystem::execGetPayloadJson)
	{
		P_GET_OBJECT(UObject,Z_Param_InParent);
		P_GET_STRUCT_REF(FMQTTClientMessage,Z_Param_Out_InClientMessage);
		P_GET_STRUCT_REF(FJsonObjectWrapper,Z_Param_Out_OutJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMQTTSubsystem::GetPayloadJson(Z_Param_InParent,Z_Param_Out_InClientMessage,Z_Param_Out_OutJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTSubsystem::execGetPayloadString)
	{
		P_GET_STRUCT_REF(FMQTTClientMessage,Z_Param_Out_InClientMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMQTTSubsystem::GetPayloadString(Z_Param_Out_InClientMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTSubsystem::execGetOrCreateClient)
	{
		P_GET_OBJECT(UObject,Z_Param_InParent);
		P_GET_STRUCT_REF(FMQTTURL,Z_Param_Out_InURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMQTTClientObject**)Z_Param__Result=UMQTTSubsystem::GetOrCreateClient(Z_Param_InParent,Z_Param_Out_InURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTSubsystem::execGetOrCreateClient_WithProjectURL)
	{
		P_GET_OBJECT(UObject,Z_Param_InParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMQTTClientObject**)Z_Param__Result=UMQTTSubsystem::GetOrCreateClient_WithProjectURL(Z_Param_InParent);
		P_NATIVE_END;
	}
	void UMQTTSubsystem::StaticRegisterNativesUMQTTSubsystem()
	{
		UClass* Class = UMQTTSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOrCreateClient", &UMQTTSubsystem::execGetOrCreateClient },
			{ "GetOrCreateClient_WithProjectURL", &UMQTTSubsystem::execGetOrCreateClient_WithProjectURL },
			{ "GetPayloadJson", &UMQTTSubsystem::execGetPayloadJson },
			{ "GetPayloadString", &UMQTTSubsystem::execGetPayloadString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics
	{
		struct MQTTSubsystem_eventGetOrCreateClient_Parms
		{
			UObject* InParent;
			FMQTTURL InURL;
			UMQTTClientObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InURL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InURL;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InParent_MetaData[] = {
		{ "DisplayName", "Parent" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetOrCreateClient_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InURL_MetaData[] = {
		{ "DisplayName", "URL" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InURL = { "InURL", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetOrCreateClient_Parms, InURL), Z_Construct_UScriptStruct_FMQTTURL, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InURL_MetaData)) }; // 2069467068
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetOrCreateClient_Parms, ReturnValue), Z_Construct_UClass_UMQTTClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_InURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "DefaultToSelf", "InParent" },
		{ "DisplayName", "Create Client (From URL)" },
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubsystem, nullptr, "GetOrCreateClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::MQTTSubsystem_eventGetOrCreateClient_Parms), Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics
	{
		struct MQTTSubsystem_eventGetOrCreateClient_WithProjectURL_Parms
		{
			UObject* InParent;
			UMQTTClientObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_InParent_MetaData[] = {
		{ "DisplayName", "Parent" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetOrCreateClient_WithProjectURL_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_InParent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetOrCreateClient_WithProjectURL_Parms, ReturnValue), Z_Construct_UClass_UMQTTClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "DefaultToSelf", "InParent" },
		{ "DisplayName", "Create Client (From Project URL)" },
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubsystem, nullptr, "GetOrCreateClient_WithProjectURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::MQTTSubsystem_eventGetOrCreateClient_WithProjectURL_Parms), Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics
	{
		struct MQTTSubsystem_eventGetPayloadJson_Parms
		{
			UObject* InParent;
			FMQTTClientMessage InClientMessage;
			FJsonObjectWrapper OutJson;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InClientMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InClientMessage;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutJson;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InParent_MetaData[] = {
		{ "DisplayName", "Parent" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetPayloadJson_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InClientMessage_MetaData[] = {
		{ "DisplayName", "ClientMessage" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InClientMessage = { "InClientMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetPayloadJson_Parms, InClientMessage), Z_Construct_UScriptStruct_FMQTTClientMessage, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InClientMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InClientMessage_MetaData)) }; // 3631163495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_OutJson = { "OutJson", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetPayloadJson_Parms, OutJson), Z_Construct_UScriptStruct_FJsonObjectWrapper, METADATA_PARAMS(nullptr, 0) }; // 1979233586
	void Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MQTTSubsystem_eventGetPayloadJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MQTTSubsystem_eventGetPayloadJson_Parms), &Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_InClientMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_OutJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "DefaultToSelf", "InParent" },
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubsystem, nullptr, "GetPayloadJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::MQTTSubsystem_eventGetPayloadJson_Parms), Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics
	{
		struct MQTTSubsystem_eventGetPayloadString_Parms
		{
			FMQTTClientMessage InClientMessage;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InClientMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InClientMessage;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_InClientMessage_MetaData[] = {
		{ "DisplayName", "ClientMessage" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_InClientMessage = { "InClientMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetPayloadString_Parms, InClientMessage), Z_Construct_UScriptStruct_FMQTTClientMessage, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_InClientMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_InClientMessage_MetaData)) }; // 3631163495
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubsystem_eventGetPayloadString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_InClientMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubsystem, nullptr, "GetPayloadString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::MQTTSubsystem_eventGetPayloadString_Parms), Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMQTTSubsystem);
	UClass* Z_Construct_UClass_UMQTTSubsystem_NoRegister()
	{
		return UMQTTSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Clients_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Clients_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clients_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Clients;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient, "GetOrCreateClient" }, // 1892495460
		{ &Z_Construct_UFunction_UMQTTSubsystem_GetOrCreateClient_WithProjectURL, "GetOrCreateClient_WithProjectURL" }, // 138135754
		{ &Z_Construct_UFunction_UMQTTSubsystem_GetPayloadJson, "GetPayloadJson" }, // 176449454
		{ &Z_Construct_UFunction_UMQTTSubsystem_GetPayloadString, "GetPayloadString" }, // 2749748535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Provides persistent access to clients\n*/" },
		{ "IncludePath", "MQTTSubsystem.h" },
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
		{ "ToolTip", "Provides persistent access to clients" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_ValueProp = { "Clients", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMQTTClientObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_Key_KeyProp = { "Clients_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients = { "Clients", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTSubsystem, Clients), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMQTTSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTSubsystem_Statics::NewProp_Clients,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMQTTSubsystem_Statics::ClassParams = {
		&UMQTTSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMQTTSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMQTTSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMQTTSubsystem.OuterSingleton, Z_Construct_UClass_UMQTTSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMQTTSubsystem.OuterSingleton;
	}
	template<> MQTTCORE_API UClass* StaticClass<UMQTTSubsystem>()
	{
		return UMQTTSubsystem::StaticClass();
	}
	UMQTTSubsystem::UMQTTSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTSubsystem);
	UMQTTSubsystem::~UMQTTSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMQTTSubsystem, UMQTTSubsystem::StaticClass, TEXT("UMQTTSubsystem"), &Z_Registration_Info_UClass_UMQTTSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMQTTSubsystem), 2290246446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_3243095513(TEXT("/Script/MQTTCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
