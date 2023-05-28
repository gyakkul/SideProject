// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CreateSessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateSessionCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UCreateSessionCallbackProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UCreateSessionCallbackProxy::execCreateSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_PublicConnections);
		P_GET_UBOOL(Z_Param_bUseLAN);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCreateSessionCallbackProxy**)Z_Param__Result=UCreateSessionCallbackProxy::CreateSession(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_PublicConnections,Z_Param_bUseLAN);
		P_NATIVE_END;
	}
	void UCreateSessionCallbackProxy::StaticRegisterNativesUCreateSessionCallbackProxy()
	{
		UClass* Class = UCreateSessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSession", &UCreateSessionCallbackProxy::execCreateSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics
	{
		struct CreateSessionCallbackProxy_eventCreateSession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			int32 PublicConnections;
			bool bUseLAN;
			UCreateSessionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PublicConnections;
		static void NewProp_bUseLAN_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxy_eventCreateSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxy_eventCreateSession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections = { "PublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxy_eventCreateSession_Parms, PublicConnections), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
	{
		((CreateSessionCallbackProxy_eventCreateSession_Parms*)Obj)->bUseLAN = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CreateSessionCallbackProxy_eventCreateSession_Parms), &Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CreateSessionCallbackProxy_eventCreateSession_Parms, ReturnValue), Z_Construct_UClass_UCreateSessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_PublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_bUseLAN,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Creates a session with the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxy.h" },
		{ "ToolTip", "Creates a session with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCreateSessionCallbackProxy, nullptr, "CreateSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::CreateSessionCallbackProxy_eventCreateSession_Parms), Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateSessionCallbackProxy);
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxy_NoRegister()
	{
		return UCreateSessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCreateSessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCreateSessionCallbackProxy_CreateSession, "CreateSession" }, // 2132708630
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateSessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the session was created successfully\n" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when the session was created successfully" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateSessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there was an error creating the session\n" },
		{ "ModuleRelativePath", "Classes/CreateSessionCallbackProxy.h" },
		{ "ToolTip", "Called when there was an error creating the session" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateSessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateSessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::ClassParams = {
		&UCreateSessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateSessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UCreateSessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateSessionCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UCreateSessionCallbackProxy>()
	{
		return UCreateSessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateSessionCallbackProxy);
	UCreateSessionCallbackProxy::~UCreateSessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateSessionCallbackProxy, UCreateSessionCallbackProxy::StaticClass, TEXT("UCreateSessionCallbackProxy"), &Z_Registration_Info_UClass_UCreateSessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateSessionCallbackProxy), 2555898736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_491039282(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_CreateSessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
