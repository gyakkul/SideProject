// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DestroySessionCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroySessionCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	DEFINE_FUNCTION(UDestroySessionCallbackProxy::execDestroySession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDestroySessionCallbackProxy**)Z_Param__Result=UDestroySessionCallbackProxy::DestroySession(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UDestroySessionCallbackProxy::StaticRegisterNativesUDestroySessionCallbackProxy()
	{
		UClass* Class = UDestroySessionCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySession", &UDestroySessionCallbackProxy::execDestroySession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics
	{
		struct DestroySessionCallbackProxy_eventDestroySession_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UDestroySessionCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DestroySessionCallbackProxy_eventDestroySession_Parms, ReturnValue), Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Destroys a session previously created by the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Destroys a session previously created by the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDestroySessionCallbackProxy, nullptr, "DestroySession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::DestroySessionCallbackProxy_eventDestroySession_Parms), Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDestroySessionCallbackProxy);
	UClass* Z_Construct_UClass_UDestroySessionCallbackProxy_NoRegister()
	{
		return UDestroySessionCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UDestroySessionCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDestroySessionCallbackProxy_DestroySession, "DestroySession" }, // 2998832752
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DestroySessionCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful destroy\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestroySessionCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 2258189322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful destroy\n" },
		{ "ModuleRelativePath", "Classes/DestroySessionCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful destroy" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDestroySessionCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 2258189322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDestroySessionCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::ClassParams = {
		&UDestroySessionCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDestroySessionCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton, Z_Construct_UClass_UDestroySessionCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDestroySessionCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UDestroySessionCallbackProxy>()
	{
		return UDestroySessionCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDestroySessionCallbackProxy);
	UDestroySessionCallbackProxy::~UDestroySessionCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDestroySessionCallbackProxy, UDestroySessionCallbackProxy::StaticClass, TEXT("UDestroySessionCallbackProxy"), &Z_Registration_Info_UClass_UDestroySessionCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDestroySessionCallbackProxy), 1360942840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_262938807(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_DestroySessionCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
