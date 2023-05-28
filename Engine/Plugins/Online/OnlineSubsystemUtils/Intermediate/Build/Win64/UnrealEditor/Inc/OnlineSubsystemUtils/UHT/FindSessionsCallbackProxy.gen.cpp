// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintSessionResult;
class UScriptStruct* FBlueprintSessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintSessionResult, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("BlueprintSessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FBlueprintSessionResult>()
{
	return FBlueprintSessionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintSessionResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"BlueprintSessionResult",
		sizeof(FBlueprintSessionResult),
		alignof(FBlueprintSessionResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms
		{
			TArray<FBlueprintSessionResult> Results;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(nullptr, 0) }; // 399430119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_MetaData)) }; // 399430119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "BlueprintFindSessionsResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBlueprintFindSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindSessionsResultDelegate, TArray<FBlueprintSessionResult> const& Results)
{
	struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms
	{
		TArray<FBlueprintSessionResult> Results;
	};
	_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms Parms;
	Parms.Results=Results;
	BlueprintFindSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetMaxPlayers)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetCurrentPlayers)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetServerName)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetPingInMs)
	{
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFindSessionsCallbackProxy::execFindSessions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN);
		P_NATIVE_END;
	}
	void UFindSessionsCallbackProxy::StaticRegisterNativesUFindSessionsCallbackProxy()
	{
		UClass* Class = UFindSessionsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSessions", &UFindSessionsCallbackProxy::execFindSessions },
			{ "GetCurrentPlayers", &UFindSessionsCallbackProxy::execGetCurrentPlayers },
			{ "GetMaxPlayers", &UFindSessionsCallbackProxy::execGetMaxPlayers },
			{ "GetPingInMs", &UFindSessionsCallbackProxy::execGetPingInMs },
			{ "GetServerName", &UFindSessionsCallbackProxy::execGetServerName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics
	{
		struct FindSessionsCallbackProxy_eventFindSessions_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 MaxResults;
			bool bUseLAN;
			UFindSessionsCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((FindSessionsCallbackProxy_eventFindSessions_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FindSessionsCallbackProxy_eventFindSessions_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Searches for advertised sessions with the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for advertised sessions with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "FindSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FindSessionsCallbackProxy_eventFindSessions_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics
	{
		struct FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms
		{
			FBlueprintSessionResult Result;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result_MetaData)) }; // 399430119
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetCurrentPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics
	{
		struct FindSessionsCallbackProxy_eventGetMaxPlayers_Parms
		{
			FBlueprintSessionResult Result;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetMaxPlayers_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result_MetaData)) }; // 399430119
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetMaxPlayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetMaxPlayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FindSessionsCallbackProxy_eventGetMaxPlayers_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics
	{
		struct FindSessionsCallbackProxy_eventGetPingInMs_Parms
		{
			FBlueprintSessionResult Result;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetPingInMs_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result_MetaData)) }; // 399430119
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetPingInMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetPingInMs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FindSessionsCallbackProxy_eventGetPingInMs_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics
	{
		struct FindSessionsCallbackProxy_eventGetServerName_Parms
		{
			FBlueprintSessionResult Result;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetServerName_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result_MetaData)) }; // 399430119
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetServerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetServerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FindSessionsCallbackProxy_eventGetServerName_Parms), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindSessionsCallbackProxy);
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister()
	{
		return UFindSessionsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFindSessionsCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions, "FindSessions" }, // 582646686
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers, "GetCurrentPlayers" }, // 1287946911
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers, "GetMaxPlayers" }, // 360595613
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs, "GetPingInMs" }, // 1985635673
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName, "GetServerName" }, // 1425993459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindSessionsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3584058354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFindSessionsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 3584058354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::ClassParams = {
		&UFindSessionsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindSessionsCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton, Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UFindSessionsCallbackProxy>()
	{
		return UFindSessionsCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxy);
	UFindSessionsCallbackProxy::~UFindSessionsCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintSessionResult::StaticStruct, Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::NewStructOps, TEXT("BlueprintSessionResult"), &Z_Registration_Info_UScriptStruct_BlueprintSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintSessionResult), 399430119U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFindSessionsCallbackProxy, UFindSessionsCallbackProxy::StaticClass, TEXT("UFindSessionsCallbackProxy"), &Z_Registration_Info_UClass_UFindSessionsCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindSessionsCallbackProxy), 130092580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_2079305007(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
