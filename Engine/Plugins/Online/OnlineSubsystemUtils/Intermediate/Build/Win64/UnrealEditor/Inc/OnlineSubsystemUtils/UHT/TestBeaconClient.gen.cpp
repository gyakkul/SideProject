// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestBeaconClient.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBeaconClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ATestBeaconClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(ATestBeaconClient::execServerPong)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerPong_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerPong_Validate"));
			return;
		}
		P_THIS->ServerPong_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestBeaconClient::execClientPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPing_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ATestBeaconClient_ClientPing = FName(TEXT("ClientPing"));
	void ATestBeaconClient::ClientPing()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestBeaconClient_ClientPing),NULL);
	}
	static FName NAME_ATestBeaconClient_ServerPong = FName(TEXT("ServerPong"));
	void ATestBeaconClient::ServerPong()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATestBeaconClient_ServerPong),NULL);
	}
	void ATestBeaconClient::StaticRegisterNativesATestBeaconClient()
	{
		UClass* Class = ATestBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientPing", &ATestBeaconClient::execClientPing },
			{ "ServerPong", &ATestBeaconClient::execServerPong },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send a ping RPC to the client */" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "Send a ping RPC to the client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestBeaconClient, nullptr, "ClientPing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestBeaconClient_ClientPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestBeaconClient_ClientPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send a pong RPC to the host */" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "Send a pong RPC to the host" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestBeaconClient, nullptr, "ServerPong", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestBeaconClient_ServerPong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestBeaconClient_ServerPong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestBeaconClient);
	UClass* Z_Construct_UClass_ATestBeaconClient_NoRegister()
	{
		return ATestBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ATestBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestBeaconClient_ClientPing, "ClientPing" }, // 1196302224
		{ &Z_Construct_UFunction_ATestBeaconClient_ServerPong, "ServerPong" }, // 3949271257
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for making reservations with an existing game session\n */" },
		{ "IncludePath", "TestBeaconClient.h" },
		{ "ModuleRelativePath", "Classes/TestBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBeaconClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestBeaconClient_Statics::ClassParams = {
		&ATestBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestBeaconClient()
	{
		if (!Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton, Z_Construct_UClass_ATestBeaconClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestBeaconClient.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ATestBeaconClient>()
	{
		return ATestBeaconClient::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBeaconClient);
	ATestBeaconClient::~ATestBeaconClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestBeaconClient, ATestBeaconClient::StaticClass, TEXT("ATestBeaconClient"), &Z_Registration_Info_UClass_ATestBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestBeaconClient), 3172418503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_1168217147(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_TestBeaconClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
