// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCServer.h"
#include "OSCAddress.h"
#include "OSCBundle.h"
#include "OSCMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCServer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OSC_API UClass* Z_Construct_UClass_UOSCServer();
	OSC_API UClass* Z_Construct_UClass_UOSCServer_NoRegister();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature();
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCAddress();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics
	{
		struct _Script_OSC_eventOSCReceivedMessageEvent_Parms
		{
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedMessageEvent_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedMessageEvent_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedMessageEvent_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegates\n" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, nullptr, "OSCReceivedMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::_Script_OSC_eventOSCReceivedMessageEvent_Parms), Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOSCReceivedMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedMessageEvent, FOSCMessage const& Message, const FString& IPAddress, int32 Port)
{
	struct _Script_OSC_eventOSCReceivedMessageEvent_Parms
	{
		FOSCMessage Message;
		FString IPAddress;
		int32 Port;
	};
	_Script_OSC_eventOSCReceivedMessageEvent_Parms Parms;
	Parms.Message=Message;
	Parms.IPAddress=IPAddress;
	Parms.Port=Port;
	OSCReceivedMessageEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics
	{
		struct _Script_OSC_eventOSCDispatchMessageEvent_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEvent_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_AddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEvent_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEvent_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEvent_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_AddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OSCServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, nullptr, "OSCDispatchMessageEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::_Script_OSC_eventOSCDispatchMessageEvent_Parms), Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOSCDispatchMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCDispatchMessageEvent, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port)
{
	struct _Script_OSC_eventOSCDispatchMessageEvent_Parms
	{
		FOSCAddress AddressPattern;
		FOSCMessage Message;
		FString IPAddress;
		int32 Port;
	};
	_Script_OSC_eventOSCDispatchMessageEvent_Parms Parms;
	Parms.AddressPattern=AddressPattern;
	Parms.Message=Message;
	Parms.IPAddress=IPAddress;
	Parms.Port=Port;
	OSCDispatchMessageEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics
	{
		struct _Script_OSC_eventOSCReceivedBundleEvent_Parms
		{
			FOSCBundle Bundle;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bundle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Bundle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedBundleEvent_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Bundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Bundle_MetaData)) }; // 3436399830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedBundleEvent_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCReceivedBundleEvent_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Bundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OSCServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, nullptr, "OSCReceivedBundleEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::_Script_OSC_eventOSCReceivedBundleEvent_Parms), Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOSCReceivedBundleEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedBundleEvent, FOSCBundle const& Bundle, const FString& IPAddress, int32 Port)
{
	struct _Script_OSC_eventOSCReceivedBundleEvent_Parms
	{
		FOSCBundle Bundle;
		FString IPAddress;
		int32 Port;
	};
	_Script_OSC_eventOSCReceivedBundleEvent_Parms Parms;
	Parms.Bundle=Bundle;
	Parms.IPAddress=IPAddress;
	Parms.Port=Port;
	OSCReceivedBundleEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics
	{
		struct _Script_OSC_eventOSCDispatchMessageEventBP_Parms
		{
			FOSCAddress AddressPattern;
			FOSCMessage Message;
			FString IPAddress;
			int32 Port;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_AddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_AddressPattern = { "AddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEventBP_Parms, AddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_AddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_AddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEventBP_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3256038154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEventBP_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OSC_eventOSCDispatchMessageEventBP_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_AddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OSCServer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, nullptr, "OSCDispatchMessageEventBP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::_Script_OSC_eventOSCDispatchMessageEventBP_Parms), Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOSCDispatchMessageEventBP_DelegateWrapper(const FScriptDelegate& OSCDispatchMessageEventBP, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port)
{
	struct _Script_OSC_eventOSCDispatchMessageEventBP_Parms
	{
		FOSCAddress AddressPattern;
		FOSCMessage Message;
		FString IPAddress;
		int32 Port;
	};
	_Script_OSC_eventOSCDispatchMessageEventBP_Parms Parms;
	Parms.AddressPattern=AddressPattern;
	Parms.Message=Message;
	Parms.IPAddress=IPAddress;
	Parms.Port=Port;
	OSCDispatchMessageEventBP.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UOSCServer::execGetBoundOSCAddressPatterns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOSCAddress>*)Z_Param__Result=P_THIS->GetBoundOSCAddressPatterns();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execUnbindAllEventsFromOnOSCAddressPatternMatching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllEventsFromOnOSCAddressPatternMatching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execUnbindAllEventsFromOnOSCAddressPatternMatchesPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_OSCAddressPattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllEventsFromOnOSCAddressPatternMatchesPath(Z_Param_Out_OSCAddressPattern);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execUnbindEventFromOnOSCAddressPatternMatchesPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_OSCAddressPattern);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindEventFromOnOSCAddressPatternMatchesPath(Z_Param_Out_OSCAddressPattern,FOSCDispatchMessageEventBP(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execBindEventToOnOSCAddressPatternMatchesPath)
	{
		P_GET_STRUCT_REF(FOSCAddress,Z_Param_Out_OSCAddressPattern);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindEventToOnOSCAddressPatternMatchesPath(Z_Param_Out_OSCAddressPattern,FOSCDispatchMessageEventBP(Z_Param_Out_Event));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execGetAllowlistedClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FString>*)Z_Param__Result=P_THIS->GetAllowlistedClients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execGetPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execGetIpAddress)
	{
		P_GET_UBOOL(Z_Param_bIncludePort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIpAddress(Z_Param_bIncludePort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execClearAllowlistedClients)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllowlistedClients();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execRemoveAllowlistedClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllowlistedClient(Z_Param_IPAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execAddAllowlistedClient)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllowlistedClient(Z_Param_IPAddress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execSetAllowlistClientsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowlistClientsEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execSetMulticastLoopback)
	{
		P_GET_UBOOL(Z_Param_bMulticastLoopback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMulticastLoopback(Z_Param_bMulticastLoopback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execSetAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiveIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAddress(Z_Param_ReceiveIPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execListen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Listen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCServer::execGetMulticastLoopback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMulticastLoopback();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UOSCServer::execSetTickInEditor)
	{
		P_GET_UBOOL(Z_Param_bInTickInEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickInEditor(Z_Param_bInTickInEditor);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UOSCServer::StaticRegisterNativesUOSCServer()
	{
		UClass* Class = UOSCServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllowlistedClient", &UOSCServer::execAddAllowlistedClient },
			{ "BindEventToOnOSCAddressPatternMatchesPath", &UOSCServer::execBindEventToOnOSCAddressPatternMatchesPath },
			{ "ClearAllowlistedClients", &UOSCServer::execClearAllowlistedClients },
			{ "GetAllowlistedClients", &UOSCServer::execGetAllowlistedClients },
			{ "GetBoundOSCAddressPatterns", &UOSCServer::execGetBoundOSCAddressPatterns },
			{ "GetIpAddress", &UOSCServer::execGetIpAddress },
			{ "GetMulticastLoopback", &UOSCServer::execGetMulticastLoopback },
			{ "GetPort", &UOSCServer::execGetPort },
			{ "IsActive", &UOSCServer::execIsActive },
			{ "Listen", &UOSCServer::execListen },
			{ "RemoveAllowlistedClient", &UOSCServer::execRemoveAllowlistedClient },
			{ "SetAddress", &UOSCServer::execSetAddress },
			{ "SetAllowlistClientsEnabled", &UOSCServer::execSetAllowlistClientsEnabled },
			{ "SetMulticastLoopback", &UOSCServer::execSetMulticastLoopback },
#if WITH_EDITOR
			{ "SetTickInEditor", &UOSCServer::execSetTickInEditor },
#endif // WITH_EDITOR
			{ "Stop", &UOSCServer::execStop },
			{ "UnbindAllEventsFromOnOSCAddressPatternMatchesPath", &UOSCServer::execUnbindAllEventsFromOnOSCAddressPatternMatchesPath },
			{ "UnbindAllEventsFromOnOSCAddressPatternMatching", &UOSCServer::execUnbindAllEventsFromOnOSCAddressPatternMatching },
			{ "UnbindEventFromOnOSCAddressPatternMatchesPath", &UOSCServer::execUnbindEventFromOnOSCAddressPatternMatchesPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics
	{
		struct OSCServer_eventAddAllowlistedClient_Parms
		{
			FString IPAddress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventAddAllowlistedClient_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::NewProp_IPAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds client to allowlist of clients to listen for. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Adds client to allowlist of clients to listen for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "AddAllowlistedClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::OSCServer_eventAddAllowlistedClient_Parms), Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_AddAllowlistedClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_AddAllowlistedClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics
	{
		struct OSCServer_eventBindEventToOnOSCAddressPatternMatchesPath_Parms
		{
			FOSCAddress OSCAddressPattern;
			FScriptDelegate Event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSCAddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OSCAddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern = { "OSCAddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventBindEventToOnOSCAddressPatternMatchesPath_Parms, OSCAddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventBindEventToOnOSCAddressPatternMatchesPath_Parms, Event), Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData)) }; // 2283562137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Adds event to dispatch when OSCAddressPattern is matched. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Adds event to dispatch when OSCAddressPattern is matched." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "BindEventToOnOSCAddressPatternMatchesPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::OSCServer_eventBindEventToOnOSCAddressPatternMatchesPath_Parms), Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Clears client allowlist to listen for. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Clears client allowlist to listen for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "ClearAllowlistedClients", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics
	{
		struct OSCServer_eventGetAllowlistedClients_Parms
		{
			TSet<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventGetAllowlistedClients_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns set of allowlisted clients. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Returns set of allowlisted clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "GetAllowlistedClients", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::OSCServer_eventGetAllowlistedClients_Parms), Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_GetAllowlistedClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_GetAllowlistedClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics
	{
		struct OSCServer_eventGetBoundOSCAddressPatterns_Parms
		{
			TArray<FOSCAddress> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventGetBoundOSCAddressPatterns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns set of OSCAddressPatterns currently listening for matches to dispatch. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Returns set of OSCAddressPatterns currently listening for matches to dispatch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "GetBoundOSCAddressPatterns", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::OSCServer_eventGetBoundOSCAddressPatterns_Parms), Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics
	{
		struct OSCServer_eventGetIpAddress_Parms
		{
			bool bIncludePort;
			FString ReturnValue;
		};
		static void NewProp_bIncludePort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludePort;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_bIncludePort_SetBit(void* Obj)
	{
		((OSCServer_eventGetIpAddress_Parms*)Obj)->bIncludePort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_bIncludePort = { "bIncludePort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventGetIpAddress_Parms), &Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_bIncludePort_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventGetIpAddress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_bIncludePort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns the IP for the server if connected as a string. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Returns the IP for the server if connected as a string." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "GetIpAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::OSCServer_eventGetIpAddress_Parms), Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_GetIpAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_GetIpAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics
	{
		struct OSCServer_eventGetMulticastLoopback_Parms
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
	void Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCServer_eventGetMulticastLoopback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventGetMulticastLoopback_Parms), &Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Gets whether or not to loopback if ReceiveIPAddress provided is multicast. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Gets whether or not to loopback if ReceiveIPAddress provided is multicast." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "GetMulticastLoopback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::OSCServer_eventGetMulticastLoopback_Parms), Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_GetMulticastLoopback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_GetMulticastLoopback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_GetPort_Statics
	{
		struct OSCServer_eventGetPort_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCServer_GetPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventGetPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_GetPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_GetPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_GetPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns the port for the server if connected. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Returns the port for the server if connected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_GetPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "GetPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_GetPort_Statics::OSCServer_eventGetPort_Parms), Z_Construct_UFunction_UOSCServer_GetPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_GetPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_GetPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_GetPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_GetPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_IsActive_Statics
	{
		struct OSCServer_eventIsActive_Parms
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
	void Z_Construct_UFunction_UOSCServer_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCServer_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventIsActive_Parms), &Z_Construct_UFunction_UOSCServer_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Returns whether server is actively listening to incoming messages. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Returns whether server is actively listening to incoming messages." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_IsActive_Statics::OSCServer_eventIsActive_Parms), Z_Construct_UFunction_UOSCServer_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_Listen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_Listen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets the IP address and port to listen for OSC data. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Sets the IP address and port to listen for OSC data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_Listen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "Listen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_Listen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_Listen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_Listen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_Listen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics
	{
		struct OSCServer_eventRemoveAllowlistedClient_Parms
		{
			FString IPAddress;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventRemoveAllowlistedClient_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::NewProp_IPAddress_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::NewProp_IPAddress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Removes allowlisted client to listen for. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Removes allowlisted client to listen for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "RemoveAllowlistedClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::OSCServer_eventRemoveAllowlistedClient_Parms), Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_SetAddress_Statics
	{
		struct OSCServer_eventSetAddress_Parms
		{
			FString ReceiveIPAddress;
			int32 Port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveIPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveIPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReceiveIPAddress = { "ReceiveIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventSetAddress_Parms, ReceiveIPAddress), METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventSetAddress_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCServer_eventSetAddress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventSetAddress_Parms), &Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_SetAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReceiveIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_SetAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set the address and port of server. Fails if server is currently active. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Set the address and port of server. Fails if server is currently active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_SetAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "SetAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::OSCServer_eventSetAddress_Parms), Z_Construct_UFunction_UOSCServer_SetAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_SetAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_SetAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics
	{
		struct OSCServer_eventSetAllowlistClientsEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((OSCServer_eventSetAllowlistClientsEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventSetAllowlistClientsEnabled_Parms), &Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** When set to true, server will only process received \n\x09  * messages from allowlisted clients.\n\x09  */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "When set to true, server will only process received\nmessages from allowlisted clients." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "SetAllowlistClientsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::OSCServer_eventSetAllowlistClientsEnabled_Parms), Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics
	{
		struct OSCServer_eventSetMulticastLoopback_Parms
		{
			bool bMulticastLoopback;
		};
		static void NewProp_bMulticastLoopback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMulticastLoopback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::NewProp_bMulticastLoopback_SetBit(void* Obj)
	{
		((OSCServer_eventSetMulticastLoopback_Parms*)Obj)->bMulticastLoopback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::NewProp_bMulticastLoopback = { "bMulticastLoopback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventSetMulticastLoopback_Parms), &Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::NewProp_bMulticastLoopback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::NewProp_bMulticastLoopback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set whether or not to loopback if ReceiveIPAddress provided is multicast. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Set whether or not to loopback if ReceiveIPAddress provided is multicast." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "SetMulticastLoopback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::OSCServer_eventSetMulticastLoopback_Parms), Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_SetMulticastLoopback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_SetMulticastLoopback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics
	{
		struct OSCServer_eventSetTickInEditor_Parms
		{
			bool bInTickInEditor;
		};
		static void NewProp_bInTickInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInTickInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::NewProp_bInTickInEditor_SetBit(void* Obj)
	{
		((OSCServer_eventSetTickInEditor_Parms*)Obj)->bInTickInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::NewProp_bInTickInEditor = { "bInTickInEditor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCServer_eventSetTickInEditor_Parms), &Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::NewProp_bInTickInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::NewProp_bInTickInEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Set whether server instance can be ticked in-editor (editor only and available to blueprint\n\x09  * for use in editor utility scripts/script actions).\n\x09  */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Set whether server instance can be ticked in-editor (editor only and available to blueprint\nfor use in editor utility scripts/script actions)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "SetTickInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::OSCServer_eventSetTickInEditor_Parms), Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_SetTickInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_SetTickInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UOSCServer_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Stop and tidy up network socket. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Stop and tidy up network socket." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics
	{
		struct OSCServer_eventUnbindAllEventsFromOnOSCAddressPatternMatchesPath_Parms
		{
			FOSCAddress OSCAddressPattern;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSCAddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OSCAddressPattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern = { "OSCAddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventUnbindAllEventsFromOnOSCAddressPatternMatchesPath_Parms, OSCAddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData)) }; // 1476147242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Removes OSCAddressPattern from sending dispatch events. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Removes OSCAddressPattern from sending dispatch events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "UnbindAllEventsFromOnOSCAddressPatternMatchesPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::OSCServer_eventUnbindAllEventsFromOnOSCAddressPatternMatchesPath_Parms), Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Removes all events from OSCAddressPatterns to dispatch. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Removes all events from OSCAddressPatterns to dispatch." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "UnbindAllEventsFromOnOSCAddressPatternMatching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics
	{
		struct OSCServer_eventUnbindEventFromOnOSCAddressPatternMatchesPath_Parms
		{
			FOSCAddress OSCAddressPattern;
			FScriptDelegate Event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSCAddressPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OSCAddressPattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern = { "OSCAddressPattern", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventUnbindEventFromOnOSCAddressPatternMatchesPath_Parms, OSCAddressPattern), Z_Construct_UScriptStruct_FOSCAddress, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern_MetaData)) }; // 1476147242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCServer_eventUnbindEventFromOnOSCAddressPatternMatchesPath_Parms, Event), Z_Construct_UDelegateFunction_OSC_OSCDispatchMessageEventBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_Event_MetaData)) }; // 2283562137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_OSCAddressPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Unbinds specific event from OSCAddress pattern. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Unbinds specific event from OSCAddress pattern." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCServer, nullptr, "UnbindEventFromOnOSCAddressPatternMatchesPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::OSCServer_eventUnbindEventFromOnOSCAddressPatternMatchesPath_Parms), Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOSCServer);
	UClass* Z_Construct_UClass_UOSCServer_NoRegister()
	{
		return UOSCServer::StaticClass();
	}
	struct Z_Construct_UClass_UOSCServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOscMessageReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOscMessageReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOscBundleReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOscBundleReceived;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOSCServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOSCServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOSCServer_AddAllowlistedClient, "AddAllowlistedClient" }, // 921317743
		{ &Z_Construct_UFunction_UOSCServer_BindEventToOnOSCAddressPatternMatchesPath, "BindEventToOnOSCAddressPatternMatchesPath" }, // 2152777258
		{ &Z_Construct_UFunction_UOSCServer_ClearAllowlistedClients, "ClearAllowlistedClients" }, // 458387559
		{ &Z_Construct_UFunction_UOSCServer_GetAllowlistedClients, "GetAllowlistedClients" }, // 359961902
		{ &Z_Construct_UFunction_UOSCServer_GetBoundOSCAddressPatterns, "GetBoundOSCAddressPatterns" }, // 3747371588
		{ &Z_Construct_UFunction_UOSCServer_GetIpAddress, "GetIpAddress" }, // 3598759961
		{ &Z_Construct_UFunction_UOSCServer_GetMulticastLoopback, "GetMulticastLoopback" }, // 2075791087
		{ &Z_Construct_UFunction_UOSCServer_GetPort, "GetPort" }, // 3468216074
		{ &Z_Construct_UFunction_UOSCServer_IsActive, "IsActive" }, // 2089022028
		{ &Z_Construct_UFunction_UOSCServer_Listen, "Listen" }, // 449330133
		{ &Z_Construct_UFunction_UOSCServer_RemoveAllowlistedClient, "RemoveAllowlistedClient" }, // 3971377976
		{ &Z_Construct_UFunction_UOSCServer_SetAddress, "SetAddress" }, // 4039187782
		{ &Z_Construct_UFunction_UOSCServer_SetAllowlistClientsEnabled, "SetAllowlistClientsEnabled" }, // 1519076627
		{ &Z_Construct_UFunction_UOSCServer_SetMulticastLoopback, "SetMulticastLoopback" }, // 2907130521
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UOSCServer_SetTickInEditor, "SetTickInEditor" }, // 583885123
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UOSCServer_Stop, "Stop" }, // 1394362544
		{ &Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatchesPath, "UnbindAllEventsFromOnOSCAddressPatternMatchesPath" }, // 2167228289
		{ &Z_Construct_UFunction_UOSCServer_UnbindAllEventsFromOnOSCAddressPatternMatching, "UnbindAllEventsFromOnOSCAddressPatternMatching" }, // 3971235669
		{ &Z_Construct_UFunction_UOSCServer_UnbindEventFromOnOSCAddressPatternMatchesPath, "UnbindEventFromOnOSCAddressPatternMatchesPath" }, // 2963965577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCServer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OSCServer.h" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscMessageReceived_MetaData[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Event that gets called when an OSC message is received. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Event that gets called when an OSC message is received." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscMessageReceived = { "OnOscMessageReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOSCServer, OnOscMessageReceived), Z_Construct_UDelegateFunction_OSC_OSCReceivedMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscMessageReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscMessageReceived_MetaData)) }; // 1251595371
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscBundleReceived_MetaData[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Event that gets called when an OSC bundle is received. */" },
		{ "ModuleRelativePath", "Public/OSCServer.h" },
		{ "ToolTip", "Event that gets called when an OSC bundle is received." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscBundleReceived = { "OnOscBundleReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOSCServer, OnOscBundleReceived), Z_Construct_UDelegateFunction_OSC_OSCReceivedBundleEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscBundleReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscBundleReceived_MetaData)) }; // 1736291182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOSCServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscMessageReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOSCServer_Statics::NewProp_OnOscBundleReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOSCServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOSCServer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOSCServer_Statics::ClassParams = {
		&UOSCServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOSCServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOSCServer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOSCServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOSCServer()
	{
		if (!Z_Registration_Info_UClass_UOSCServer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOSCServer.OuterSingleton, Z_Construct_UClass_UOSCServer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOSCServer.OuterSingleton;
	}
	template<> OSC_API UClass* StaticClass<UOSCServer>()
	{
		return UOSCServer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOSCServer);
	UOSCServer::~UOSCServer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOSCServer, UOSCServer::StaticClass, TEXT("UOSCServer"), &Z_Registration_Info_UClass_UOSCServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOSCServer), 3315471234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_1716325855(TEXT("/Script/OSC"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
