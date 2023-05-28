// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JoinSessionCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoinSessionCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UJoinSessionCallbackProxy::execJoinSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_SearchResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJoinSessionCallbackProxy**)Z_Param__Result=UJoinSessionCallbackProxy::JoinSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_Out_SearchResult);
		P_NATIVE_END;
	}
	void UJoinSessionCallbackProxy::StaticRegisterNativesUJoinSessionCallbackProxy()
	{
		UClass* Class = UJoinSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JoinSession", &UJoinSessionCallbackProxy::execJoinSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics
	{
		struct JoinSessionCallbackProxy_eventJoinSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FBlueprintSessionResult SearchResult;
			UJoinSessionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchResult;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult = { "SearchResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, SearchResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult_MetaData)) }; // 399430119
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JoinSessionCallbackProxy_eventJoinSession_Parms, ReturnValue), Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_SearchResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Joins a remote session with the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Joins a remote session with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJoinSessionCallbackProxy, nullptr, "JoinSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::JoinSessionCallbackProxy_eventJoinSession_Parms), Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJoinSessionCallbackProxy);
	UClass* Z_Construct_UClass_UJoinSessionCallbackProxy_NoRegister()
	{
		return UJoinSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UJoinSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJoinSessionCallbackProxy_JoinSession, "JoinSession" }, // 3004185317
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JoinSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful join\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful join" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoinSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful join\n" },
		{ "ModuleRelativePath", "Classes/JoinSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful join" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJoinSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJoinSessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::ClassParams = {
		&UJoinSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJoinSessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UJoinSessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJoinSessionCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UJoinSessionCallbackProxy>()
	{
		return UJoinSessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJoinSessionCallbackProxy);
	UJoinSessionCallbackProxy::~UJoinSessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJoinSessionCallbackProxy, UJoinSessionCallbackProxy::StaticClass, TEXT("UJoinSessionCallbackProxy"), &Z_Registration_Info_UClass_UJoinSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJoinSessionCallbackProxy), 1350743572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_1759855980(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_JoinSessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
