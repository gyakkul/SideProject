// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusFindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusFindSessionsCallbackProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusFindSessionsCallbackProxy();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusFindSessionsCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	DEFINE_FUNCTION(UOculusFindSessionsCallbackProxy::execFindModeratedSessions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusFindSessionsCallbackProxy**)Z_Param__Result=UOculusFindSessionsCallbackProxy::FindModeratedSessions(Z_Param_MaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusFindSessionsCallbackProxy::execFindMatchmakingSessions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
		P_GET_PROPERTY(FStrProperty,Z_Param_OculusMatchmakingPool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusFindSessionsCallbackProxy**)Z_Param__Result=UOculusFindSessionsCallbackProxy::FindMatchmakingSessions(Z_Param_MaxResults,Z_Param_OculusMatchmakingPool);
		P_NATIVE_END;
	}
	void UOculusFindSessionsCallbackProxy::StaticRegisterNativesUOculusFindSessionsCallbackProxy()
	{
		UClass* Class = UOculusFindSessionsCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindMatchmakingSessions", &UOculusFindSessionsCallbackProxy::execFindMatchmakingSessions },
			{ "FindModeratedSessions", &UOculusFindSessionsCallbackProxy::execFindModeratedSessions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics
	{
		struct OculusFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms
		{
			int32 MaxResults;
			FString OculusMatchmakingPool;
			UOculusFindSessionsCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusMatchmakingPool;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_OculusMatchmakingPool = { "OculusMatchmakingPool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, OculusMatchmakingPool), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms, ReturnValue), Z_Construct_UClass_UOculusFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_OculusMatchmakingPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Oculus|Session" },
		{ "Comment", "// Searches for matchmaking room sessions with the oculus online subsystem\n" },
		{ "ModuleRelativePath", "Classes/OculusFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for matchmaking room sessions with the oculus online subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFindSessionsCallbackProxy, nullptr, "FindMatchmakingSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::OculusFindSessionsCallbackProxy_eventFindMatchmakingSessions_Parms), Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics
	{
		struct OculusFindSessionsCallbackProxy_eventFindModeratedSessions_Parms
		{
			int32 MaxResults;
			UOculusFindSessionsCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, MaxResults), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusFindSessionsCallbackProxy_eventFindModeratedSessions_Parms, ReturnValue), Z_Construct_UClass_UOculusFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_MaxResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Oculus|Session" },
		{ "Comment", "// Searches for moderated room sessions with the oculus online subsystem\n" },
		{ "ModuleRelativePath", "Classes/OculusFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for moderated room sessions with the oculus online subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusFindSessionsCallbackProxy, nullptr, "FindModeratedSessions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::OculusFindSessionsCallbackProxy_eventFindModeratedSessions_Parms), Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusFindSessionsCallbackProxy);
	UClass* Z_Construct_UClass_UOculusFindSessionsCallbackProxy_NoRegister()
	{
		return UOculusFindSessionsCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindMatchmakingSessions, "FindMatchmakingSessions" }, // 1487133042
		{ &Z_Construct_UFunction_UOculusFindSessionsCallbackProxy_FindModeratedSessions, "FindModeratedSessions" }, // 1566851184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes FindSession of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "OculusFindSessionsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/OculusFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Exposes FindSession of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/OculusFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFindSessionsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 3584058354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/OculusFindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFindSessionsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 3584058354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusFindSessionsCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::ClassParams = {
		&UOculusFindSessionsCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusFindSessionsCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UOculusFindSessionsCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusFindSessionsCallbackProxy.OuterSingleton, Z_Construct_UClass_UOculusFindSessionsCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusFindSessionsCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusFindSessionsCallbackProxy>()
	{
		return UOculusFindSessionsCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusFindSessionsCallbackProxy);
	UOculusFindSessionsCallbackProxy::~UOculusFindSessionsCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusFindSessionsCallbackProxy, UOculusFindSessionsCallbackProxy::StaticClass, TEXT("UOculusFindSessionsCallbackProxy"), &Z_Registration_Info_UClass_UOculusFindSessionsCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusFindSessionsCallbackProxy), 415116377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_3657558300(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusFindSessionsCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
