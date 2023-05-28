// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCClient.h"
#include "OSCBundle.h"
#include "OSCMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OSC_API UClass* Z_Construct_UClass_UOSCClient();
	OSC_API UClass* Z_Construct_UClass_UOSCClient_NoRegister();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCMessage();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	DEFINE_FUNCTION(UOSCClient::execSendOSCBundle)
	{
		P_GET_STRUCT_REF(FOSCBundle,Z_Param_Out_Bundle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendOSCBundle(Z_Param_Out_Bundle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCClient::execSendOSCMessage)
	{
		P_GET_STRUCT_REF(FOSCMessage,Z_Param_Out_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendOSCMessage(Z_Param_Out_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCClient::execSetSendIPAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSendIPAddress(Z_Param_IPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOSCClient::execGetSendIPAddress)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_IPAddress);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSendIPAddress(Z_Param_Out_IPAddress,Z_Param_Out_Port);
		P_NATIVE_END;
	}
	void UOSCClient::StaticRegisterNativesUOSCClient()
	{
		UClass* Class = UOSCClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSendIPAddress", &UOSCClient::execGetSendIPAddress },
			{ "SendOSCBundle", &UOSCClient::execSendOSCBundle },
			{ "SendOSCMessage", &UOSCClient::execSendOSCMessage },
			{ "SetSendIPAddress", &UOSCClient::execSetSendIPAddress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics
	{
		struct OSCClient_eventGetSendIPAddress_Parms
		{
			FString IPAddress;
			int32 Port;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventGetSendIPAddress_Parms, IPAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventGetSendIPAddress_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::NewProp_Port,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Gets the OSC Client IP address and port. */" },
		{ "ModuleRelativePath", "Public/OSCClient.h" },
		{ "ToolTip", "Gets the OSC Client IP address and port." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCClient, nullptr, "GetSendIPAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::OSCClient_eventGetSendIPAddress_Parms), Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCClient_GetSendIPAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCClient_GetSendIPAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics
	{
		struct OSCClient_eventSendOSCBundle_Parms
		{
			FOSCBundle Bundle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bundle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::NewProp_Bundle = { "Bundle", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventSendOSCBundle_Parms, Bundle), Z_Construct_UScriptStruct_FOSCBundle, METADATA_PARAMS(nullptr, 0) }; // 3436399830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::NewProp_Bundle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Send OSC Bundle over the network. */" },
		{ "ModuleRelativePath", "Public/OSCClient.h" },
		{ "ToolTip", "Send OSC Bundle over the network." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCClient, nullptr, "SendOSCBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::OSCClient_eventSendOSCBundle_Parms), Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCClient_SendOSCBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCClient_SendOSCBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics
	{
		struct OSCClient_eventSendOSCMessage_Parms
		{
			FOSCMessage Message;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventSendOSCMessage_Parms, Message), Z_Construct_UScriptStruct_FOSCMessage, METADATA_PARAMS(nullptr, 0) }; // 3256038154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Send OSC message to  a specific address. */" },
		{ "ModuleRelativePath", "Public/OSCClient.h" },
		{ "ToolTip", "Send OSC message to  a specific address." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCClient, nullptr, "SendOSCMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::OSCClient_eventSendOSCMessage_Parms), Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCClient_SendOSCMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCClient_SendOSCMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics
	{
		struct OSCClient_eventSetSendIPAddress_Parms
		{
			FString IPAddress;
			int32 Port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_IPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventSetSendIPAddress_Parms, IPAddress), METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_Port_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OSCClient_eventSetSendIPAddress_Parms, Port), METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_Port_MetaData)) };
	void Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OSCClient_eventSetSendIPAddress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OSCClient_eventSetSendIPAddress_Parms), &Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|OSC" },
		{ "Comment", "/** Sets the OSC Client IP address and port. Returns whether\n\x09  * address and port was successfully set. */" },
		{ "ModuleRelativePath", "Public/OSCClient.h" },
		{ "ToolTip", "Sets the OSC Client IP address and port. Returns whether\naddress and port was successfully set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOSCClient, nullptr, "SetSendIPAddress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::OSCClient_eventSetSendIPAddress_Parms), Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOSCClient_SetSendIPAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOSCClient_SetSendIPAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOSCClient);
	UClass* Z_Construct_UClass_UOSCClient_NoRegister()
	{
		return UOSCClient::StaticClass();
	}
	struct Z_Construct_UClass_UOSCClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOSCClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOSCClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOSCClient_GetSendIPAddress, "GetSendIPAddress" }, // 1752789504
		{ &Z_Construct_UFunction_UOSCClient_SendOSCBundle, "SendOSCBundle" }, // 2317664240
		{ &Z_Construct_UFunction_UOSCClient_SendOSCMessage, "SendOSCMessage" }, // 2380302417
		{ &Z_Construct_UFunction_UOSCClient_SetSendIPAddress, "SetSendIPAddress" }, // 2525816757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOSCClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OSCClient.h" },
		{ "ModuleRelativePath", "Public/OSCClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOSCClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOSCClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOSCClient_Statics::ClassParams = {
		&UOSCClient::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOSCClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOSCClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOSCClient()
	{
		if (!Z_Registration_Info_UClass_UOSCClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOSCClient.OuterSingleton, Z_Construct_UClass_UOSCClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOSCClient.OuterSingleton;
	}
	template<> OSC_API UClass* StaticClass<UOSCClient>()
	{
		return UOSCClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOSCClient);
	UOSCClient::~UOSCClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOSCClient, UOSCClient::StaticClass, TEXT("UOSCClient"), &Z_Registration_Info_UClass_UOSCClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOSCClient), 2663309060U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_2387105846(TEXT("/Script/OSC"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
