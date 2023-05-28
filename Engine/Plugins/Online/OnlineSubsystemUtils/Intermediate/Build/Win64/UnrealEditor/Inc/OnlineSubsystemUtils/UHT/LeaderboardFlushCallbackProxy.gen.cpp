// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeaderboardFlushCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardFlushCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms
		{
			FName SessionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnLeaderboardFlushed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLeaderboardFlushed_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardFlushed, FName SessionName)
{
	struct _Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms
	{
		FName SessionName;
	};
	_Script_OnlineSubsystemUtils_eventOnLeaderboardFlushed_Parms Parms;
	Parms.SessionName=SessionName;
	OnLeaderboardFlushed.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULeaderboardFlushCallbackProxy::execCreateProxyObjectForFlush)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeaderboardFlushCallbackProxy**)Z_Param__Result=ULeaderboardFlushCallbackProxy::CreateProxyObjectForFlush(Z_Param_PlayerController,Z_Param_SessionName);
		P_NATIVE_END;
	}
	void ULeaderboardFlushCallbackProxy::StaticRegisterNativesULeaderboardFlushCallbackProxy()
	{
		UClass* Class = ULeaderboardFlushCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForFlush", &ULeaderboardFlushCallbackProxy::execCreateProxyObjectForFlush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics
	{
		struct LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms
		{
			APlayerController* PlayerController;
			FName SessionName;
			ULeaderboardFlushCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms, ReturnValue), Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "// Called to perform the query internally\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called to perform the query internally" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardFlushCallbackProxy, nullptr, "CreateProxyObjectForFlush", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::LeaderboardFlushCallbackProxy_eventCreateProxyObjectForFlush_Parms), Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardFlushCallbackProxy);
	UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy_NoRegister()
	{
		return ULeaderboardFlushCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush, "CreateProxyObjectForFlush" }, // 1120540616
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardFlushCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful leaderboard flush\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful leaderboard flush" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardFlushCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 4213291217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful leaderboard flush\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardFlushCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful leaderboard flush" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULeaderboardFlushCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnLeaderboardFlushed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 4213291217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardFlushCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::ClassParams = {
		&ULeaderboardFlushCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboardFlushCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton, Z_Construct_UClass_ULeaderboardFlushCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardFlushCallbackProxy>()
	{
		return ULeaderboardFlushCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardFlushCallbackProxy);
	ULeaderboardFlushCallbackProxy::~ULeaderboardFlushCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardFlushCallbackProxy, ULeaderboardFlushCallbackProxy::StaticClass, TEXT("ULeaderboardFlushCallbackProxy"), &Z_Registration_Info_UClass_ULeaderboardFlushCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardFlushCallbackProxy), 293787958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_387642116(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardFlushCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
