// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusCreateSessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusCreateSessionCallbackProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusCreateSessionCallbackProxy();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusCreateSessionCallbackProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	DEFINE_FUNCTION(UOculusCreateSessionCallbackProxy::execCreateSession)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_PROPERTY(FStrProperty,Z_Param_OculusMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusCreateSessionCallbackProxy**)Z_Param__Result=UOculusCreateSessionCallbackProxy::CreateSession(Z_Param_PublicConnections,Z_Param_OculusMatchmakingPool);
		P_NATIVE_END;
	}
	void UOculusCreateSessionCallbackProxy::StaticRegisterNativesUOculusCreateSessionCallbackProxy()
	{
		UClass* Class = UOculusCreateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UOculusCreateSessionCallbackProxy::execCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics
	{
		struct OculusCreateSessionCallbackProxy_eventCreateSession_Parms
		{
			int32 PublicConnections;
			FString OculusMatchmakingPool;
			UOculusCreateSessionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusMatchmakingPool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusCreateSessionCallbackProxy_eventCreateSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_OculusMatchmakingPool = { "OculusMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusCreateSessionCallbackProxy_eventCreateSession_Parms, OculusMatchmakingPool), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusCreateSessionCallbackProxy_eventCreateSession_Parms, ReturnValue), Z_Construct_UClass_UOculusCreateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_OculusMatchmakingPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Oculus|Session" },
		{ "Comment", "// Kick off CreateSession check. Asynchronous-- see OnCreateSessionCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/OculusCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Kick off CreateSession check. Asynchronous-- see OnCreateSessionCompleteDelegate for results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusCreateSessionCallbackProxy, nullptr, "CreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::OculusCreateSessionCallbackProxy_eventCreateSession_Parms), Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusCreateSessionCallbackProxy);
	UClass* Z_Construct_UClass_UOculusCreateSessionCallbackProxy_NoRegister()
	{
		return UOculusCreateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusCreateSessionCallbackProxy_CreateSession, "CreateSession" }, // 4156169807
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes CreateSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "OculusCreateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/OculusCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Exposes CreateSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was created successfully\n" },
		{ "ModuleRelativePath", "Classes/OculusCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was created successfully" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusCreateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error creating the session\n" },
		{ "ModuleRelativePath", "Classes/OculusCreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error creating the session" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusCreateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusCreateSessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::ClassParams = {
		&UOculusCreateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusCreateSessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UOculusCreateSessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusCreateSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UOculusCreateSessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusCreateSessionCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusCreateSessionCallbackProxy>()
	{
		return UOculusCreateSessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusCreateSessionCallbackProxy);
	UOculusCreateSessionCallbackProxy::~UOculusCreateSessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusCreateSessionCallbackProxy, UOculusCreateSessionCallbackProxy::StaticClass, TEXT("UOculusCreateSessionCallbackProxy"), &Z_Registration_Info_UClass_UOculusCreateSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusCreateSessionCallbackProxy), 3132091754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_1822792532(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusCreateSessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
