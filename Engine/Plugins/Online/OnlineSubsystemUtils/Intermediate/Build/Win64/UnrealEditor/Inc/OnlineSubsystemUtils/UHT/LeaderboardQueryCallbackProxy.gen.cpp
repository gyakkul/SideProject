// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeaderboardQueryCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardQueryCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms
		{
			int32 LeaderboardValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LeaderboardValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue = { "LeaderboardValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms, LeaderboardValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "LeaderboardQueryResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLeaderboardQueryResult_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardQueryResult, int32 LeaderboardValue)
{
	struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms
	{
		int32 LeaderboardValue;
	};
	_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms Parms;
	Parms.LeaderboardValue=LeaderboardValue;
	LeaderboardQueryResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeaderboardQueryCallbackProxy**)Z_Param__Result=ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(Z_Param_PlayerController,Z_Param_StatName);
		P_NATIVE_END;
	}
	void ULeaderboardQueryCallbackProxy::StaticRegisterNativesULeaderboardQueryCallbackProxy()
	{
		UClass* Class = ULeaderboardQueryCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForIntQuery", &ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics
	{
		struct LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms
		{
			APlayerController* PlayerController;
			FName StatName;
			ULeaderboardQueryCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, ReturnValue), Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboard" },
		{ "Comment", "// Queries a leaderboard for an integer value\n" },
		{ "DisplayName", "Read Leaderboard Integer" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Queries a leaderboard for an integer value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardQueryCallbackProxy, nullptr, "CreateProxyObjectForIntQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms), Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardQueryCallbackProxy);
	UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister()
	{
		return ULeaderboardQueryCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery, "CreateProxyObjectForIntQuery" }, // 2582500182
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful leaderboard query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3893871458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful leaderboard query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 3893871458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardQueryCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams = {
		&ULeaderboardQueryCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton, Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardQueryCallbackProxy>()
	{
		return ULeaderboardQueryCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardQueryCallbackProxy);
	ULeaderboardQueryCallbackProxy::~ULeaderboardQueryCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardQueryCallbackProxy, ULeaderboardQueryCallbackProxy::StaticClass, TEXT("ULeaderboardQueryCallbackProxy"), &Z_Registration_Info_UClass_ULeaderboardQueryCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardQueryCallbackProxy), 1862030195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_2281689545(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
