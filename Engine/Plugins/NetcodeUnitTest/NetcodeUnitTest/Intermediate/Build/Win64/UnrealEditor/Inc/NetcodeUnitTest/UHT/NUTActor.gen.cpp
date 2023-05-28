// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NUTActor.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNUTActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_ANUTActor();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_ANUTActor_NoRegister();
	NETCODEUNITTEST_API UFunction* Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics
	{
		struct _Script_NetcodeUnitTest_eventExecuteOnServer_Parms
		{
			ANUTActor* InNUTActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InNUTActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::NewProp_InNUTActor = { "InNUTActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NetcodeUnitTest_eventExecuteOnServer_Parms, InNUTActor), Z_Construct_UClass_ANUTActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::NewProp_InNUTActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate for executing a unit test function on the server\n *\n * @param InNUTActor\x09The serverside NUTActor triggering the delegate\n */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Delegate for executing a unit test function on the server\n\n@param InNUTActor   The serverside NUTActor triggering the delegate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NetcodeUnitTest, nullptr, "ExecuteOnServer__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::_Script_NetcodeUnitTest_eventExecuteOnServer_Parms), Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FExecuteOnServer_DelegateWrapper(const FScriptDelegate& ExecuteOnServer, ANUTActor* InNUTActor)
{
	struct _Script_NetcodeUnitTest_eventExecuteOnServer_Parms
	{
		ANUTActor* InNUTActor;
	};
	_Script_NetcodeUnitTest_eventExecuteOnServer_Parms Parms;
	Parms.InNUTActor=InNUTActor;
	ExecuteOnServer.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ANUTActor::execServerExecute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerExecute_Validate(Z_Param_InDelegate))
		{
			RPC_ValidateFailed(TEXT("ServerExecute_Validate"));
			return;
		}
		P_THIS->ServerExecute_Implementation(Z_Param_InDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execNetMulticastPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMulticastPing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execServerClientPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerClientPing_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerClientPing_Validate"));
			return;
		}
		P_THIS->ServerClientPing_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execServerReceiveText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReceiveText_Validate(Z_Param_InText))
		{
			RPC_ValidateFailed(TEXT("ServerReceiveText_Validate"));
			return;
		}
		P_THIS->ServerReceiveText_Implementation(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execServerClientStillAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerClientStillAlive_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerClientStillAlive_Validate"));
			return;
		}
		P_THIS->ServerClientStillAlive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execWait)
	{
		P_GET_PROPERTY(FUInt16Property,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Wait(Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execNetFlush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetFlush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execUnitTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnitTravel(Z_Param_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execUnitSeamlessTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Dest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnitSeamlessTravel(Z_Param_Dest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execServerAdmin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerAdmin_Validate(Z_Param_Command))
		{
			RPC_ValidateFailed(TEXT("ServerAdmin_Validate"));
			return;
		}
		P_THIS->ServerAdmin_Implementation(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANUTActor::execAdmin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Admin(Z_Param_Command);
		P_NATIVE_END;
	}
	struct NUTActor_eventServerAdmin_Parms
	{
		FString Command;
	};
	struct NUTActor_eventServerExecute_Parms
	{
		FString InDelegate;
	};
	struct NUTActor_eventServerReceiveText_Parms
	{
		FText InText;
	};
	static FName NAME_ANUTActor_NetMulticastPing = FName(TEXT("NetMulticastPing"));
	void ANUTActor::NetMulticastPing()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_NetMulticastPing),NULL);
	}
	static FName NAME_ANUTActor_ServerAdmin = FName(TEXT("ServerAdmin"));
	void ANUTActor::ServerAdmin(const FString& Command)
	{
		NUTActor_eventServerAdmin_Parms Parms;
		Parms.Command=Command;
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_ServerAdmin),&Parms);
	}
	static FName NAME_ANUTActor_ServerClientPing = FName(TEXT("ServerClientPing"));
	void ANUTActor::ServerClientPing()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_ServerClientPing),NULL);
	}
	static FName NAME_ANUTActor_ServerClientStillAlive = FName(TEXT("ServerClientStillAlive"));
	void ANUTActor::ServerClientStillAlive()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_ServerClientStillAlive),NULL);
	}
	static FName NAME_ANUTActor_ServerExecute = FName(TEXT("ServerExecute"));
	void ANUTActor::ServerExecute(const FString& InDelegate)
	{
		NUTActor_eventServerExecute_Parms Parms;
		Parms.InDelegate=InDelegate;
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_ServerExecute),&Parms);
	}
	static FName NAME_ANUTActor_ServerReceiveText = FName(TEXT("ServerReceiveText"));
	void ANUTActor::ServerReceiveText(FText const& InText)
	{
		NUTActor_eventServerReceiveText_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_ANUTActor_ServerReceiveText),&Parms);
	}
	void ANUTActor::StaticRegisterNativesANUTActor()
	{
		UClass* Class = ANUTActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Admin", &ANUTActor::execAdmin },
			{ "NetFlush", &ANUTActor::execNetFlush },
			{ "NetMulticastPing", &ANUTActor::execNetMulticastPing },
			{ "ServerAdmin", &ANUTActor::execServerAdmin },
			{ "ServerClientPing", &ANUTActor::execServerClientPing },
			{ "ServerClientStillAlive", &ANUTActor::execServerClientStillAlive },
			{ "ServerExecute", &ANUTActor::execServerExecute },
			{ "ServerReceiveText", &ANUTActor::execServerReceiveText },
			{ "UnitSeamlessTravel", &ANUTActor::execUnitSeamlessTravel },
			{ "UnitTravel", &ANUTActor::execUnitTravel },
			{ "Wait", &ANUTActor::execWait },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANUTActor_Admin_Statics
	{
		struct NUTActor_eventAdmin_Parms
		{
			FString Command;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANUTActor_Admin_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventAdmin_Parms, Command), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_Admin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_Admin_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_Admin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Executes a console command on the server\n\x09 *\n\x09 * @param Command\x09The command to be executed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Executes a console command on the server\n\n@param Command       The command to be executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_Admin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "Admin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANUTActor_Admin_Statics::NUTActor_eventAdmin_Parms), Z_Construct_UFunction_ANUTActor_Admin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_Admin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_Admin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_Admin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_Admin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_Admin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_NetFlush_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_NetFlush_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Flushes all pending net connection packets\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Flushes all pending net connection packets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_NetFlush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "NetFlush", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_NetFlush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_NetFlush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_NetFlush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_NetFlush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Received by all clients, emits a ping to log\n\x09 */// @todo #JohnBRefactor: When the VM reflection helper is finished, remove NETCODEUNITTEST_API from this, and use reflection instead\n" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Received by all clients, emits a ping to log\n        // @todo #JohnBRefactor: When the VM reflection helper is finished, remove NETCODEUNITTEST_API from this, and use reflection instead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "NetMulticastPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC2, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_NetMulticastPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_NetMulticastPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventServerAdmin_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::NewProp_Command_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "ServerAdmin", nullptr, nullptr, sizeof(NUTActor_eventServerAdmin_Parms), Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_ServerAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_ServerAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Send a 'ping' RPC to all clients, to make them log a ping, which unit tests then use to verify the presence of a client process\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Send a 'ping' RPC to all clients, to make them log a ping, which unit tests then use to verify the presence of a client process" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "ServerClientPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_ServerClientPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_ServerClientPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notifies the server that the client is still around\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Notifies the server that the client is still around" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "ServerClientStillAlive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_ServerClientStillAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_ServerClientStillAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_ServerExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventServerExecute_Parms, InDelegate), METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::NewProp_InDelegate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::NewProp_InDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Takes a string representing a delegate (can't replicate delegate parameters), and executes that delegate on the server\n\x09 *\n\x09 * @param InDelegate\x09""A string representing the delegate to be executed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Takes a string representing a delegate (can't replicate delegate parameters), and executes that delegate on the server\n\n@param InDelegate    A string representing the delegate to be executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "ServerExecute", nullptr, nullptr, sizeof(NUTActor_eventServerExecute_Parms), Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_ServerExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_ServerExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventServerReceiveText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Test log function\n\x09 *\n\x09 * @param InText\x09The FText passed from the client\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Test log function\n\n@param InText        The FText passed from the client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "ServerReceiveText", nullptr, nullptr, sizeof(NUTActor_eventServerReceiveText_Parms), Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_ServerReceiveText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_ServerReceiveText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics
	{
		struct NUTActor_eventUnitSeamlessTravel_Parms
		{
			FString Dest;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventUnitSeamlessTravel_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::NewProp_Dest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Triggers seamless travel\n\x09 *\n\x09 * @param Dest\x09The travel destination\n\x09 */" },
		{ "CPP_Default_Dest", " " },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Triggers seamless travel\n\n@param Dest  The travel destination" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "UnitSeamlessTravel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::NUTActor_eventUnitSeamlessTravel_Parms), Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_UnitTravel_Statics
	{
		struct NUTActor_eventUnitTravel_Parms
		{
			FString Dest;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventUnitTravel_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::NewProp_Dest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Triggers normal travel\n\x09 *\n\x09 * @param Dest\x09The travel destination\n\x09 */" },
		{ "CPP_Default_Dest", " " },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Triggers normal travel\n\n@param Dest  The travel destination" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "UnitTravel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::NUTActor_eventUnitTravel_Parms), Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_UnitTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_UnitTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANUTActor_Wait_Statics
	{
		struct NUTActor_eventWait_Parms
		{
			uint16 Seconds;
		};
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_ANUTActor_Wait_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NUTActor_eventWait_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANUTActor_Wait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANUTActor_Wait_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANUTActor_Wait_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Makes the game thread wait for the specified number of seconds\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "Makes the game thread wait for the specified number of seconds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANUTActor_Wait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANUTActor, nullptr, "Wait", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANUTActor_Wait_Statics::NUTActor_eventWait_Parms), Z_Construct_UFunction_ANUTActor_Wait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_Wait_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANUTActor_Wait_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANUTActor_Wait_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANUTActor_Wait()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANUTActor_Wait_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANUTActor);
	UClass* Z_Construct_UClass_ANUTActor_NoRegister()
	{
		return ANUTActor::StaticClass();
	}
	struct Z_Construct_UClass_ANUTActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TempDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_TempDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANUTActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANUTActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANUTActor_Admin, "Admin" }, // 2626970810
		{ &Z_Construct_UFunction_ANUTActor_NetFlush, "NetFlush" }, // 1975044575
		{ &Z_Construct_UFunction_ANUTActor_NetMulticastPing, "NetMulticastPing" }, // 426541263
		{ &Z_Construct_UFunction_ANUTActor_ServerAdmin, "ServerAdmin" }, // 3000296168
		{ &Z_Construct_UFunction_ANUTActor_ServerClientPing, "ServerClientPing" }, // 3676920793
		{ &Z_Construct_UFunction_ANUTActor_ServerClientStillAlive, "ServerClientStillAlive" }, // 3302498251
		{ &Z_Construct_UFunction_ANUTActor_ServerExecute, "ServerExecute" }, // 3910056653
		{ &Z_Construct_UFunction_ANUTActor_ServerReceiveText, "ServerReceiveText" }, // 427957690
		{ &Z_Construct_UFunction_ANUTActor_UnitSeamlessTravel, "UnitSeamlessTravel" }, // 3842027630
		{ &Z_Construct_UFunction_ANUTActor_UnitTravel, "UnitTravel" }, // 3184964063
		{ &Z_Construct_UFunction_ANUTActor_Wait, "Wait" }, // 3526829753
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANUTActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NUTActor.h" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANUTActor_Statics::NewProp_TempDelegate_MetaData[] = {
		{ "Comment", "/** A delegate property, used solely for converting strings to delegates */" },
		{ "ModuleRelativePath", "Classes/NUTActor.h" },
		{ "ToolTip", "A delegate property, used solely for converting strings to delegates" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_ANUTActor_Statics::NewProp_TempDelegate = { "TempDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANUTActor, TempDelegate), Z_Construct_UDelegateFunction_NetcodeUnitTest_ExecuteOnServer__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANUTActor_Statics::NewProp_TempDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANUTActor_Statics::NewProp_TempDelegate_MetaData)) }; // 2930126960
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANUTActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANUTActor_Statics::NewProp_TempDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANUTActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANUTActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANUTActor_Statics::ClassParams = {
		&ANUTActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANUTActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANUTActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANUTActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANUTActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANUTActor()
	{
		if (!Z_Registration_Info_UClass_ANUTActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANUTActor.OuterSingleton, Z_Construct_UClass_ANUTActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANUTActor.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<ANUTActor>()
	{
		return ANUTActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANUTActor);
	ANUTActor::~ANUTActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANUTActor, ANUTActor::StaticClass, TEXT("ANUTActor"), &Z_Registration_Info_UClass_ANUTActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANUTActor), 3016505889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_2852768331(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_NUTActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
