// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LogoutCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogoutCallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULogoutCallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULogoutCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms
		{
			APlayerController* PlayerController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LogoutCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineLogoutResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnlineLogoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineLogoutResult, APlayerController* PlayerController)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms
	{
		APlayerController* PlayerController;
	};
	_Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms Parms;
	Parms.PlayerController=PlayerController;
	OnlineLogoutResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULogoutCallbackProxy::execLogout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULogoutCallbackProxy**)Z_Param__Result=ULogoutCallbackProxy::Logout(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void ULogoutCallbackProxy::StaticRegisterNativesULogoutCallbackProxy()
	{
		UClass* Class = ULogoutCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Logout", &ULogoutCallbackProxy::execLogout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics
	{
		struct LogoutCallbackProxy_eventLogout_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			ULogoutCallbackProxy* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LogoutCallbackProxy_eventLogout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LogoutCallbackProxy_eventLogout_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LogoutCallbackProxy_eventLogout_Parms, ReturnValue), Z_Construct_UClass_ULogoutCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online" },
		{ "Comment", "// Logs out of the online service\n" },
		{ "ModuleRelativePath", "Classes/LogoutCallbackProxy.h" },
		{ "ToolTip", "Logs out of the online service" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogoutCallbackProxy, nullptr, "Logout", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::LogoutCallbackProxy_eventLogout_Parms), Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULogoutCallbackProxy_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogoutCallbackProxy_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogoutCallbackProxy);
	UClass* Z_Construct_UClass_ULogoutCallbackProxy_NoRegister()
	{
		return ULogoutCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULogoutCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_ULogoutCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogoutCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogoutCallbackProxy_Logout, "Logout" }, // 812812802
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LogoutCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LogoutCallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the logout completed successfully\n" },
		{ "ModuleRelativePath", "Classes/LogoutCallbackProxy.h" },
		{ "ToolTip", "Called when the logout completed successfully" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogoutCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1752979314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when the logout completed unsuccessfully\n" },
		{ "ModuleRelativePath", "Classes/LogoutCallbackProxy.h" },
		{ "ToolTip", "Called when the logout completed unsuccessfully" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULogoutCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineLogoutResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 1752979314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogoutCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogoutCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogoutCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogoutCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogoutCallbackProxy_Statics::ClassParams = {
		&ULogoutCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULogoutCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULogoutCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogoutCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogoutCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton, Z_Construct_UClass_ULogoutCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogoutCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULogoutCallbackProxy>()
	{
		return ULogoutCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogoutCallbackProxy);
	ULogoutCallbackProxy::~ULogoutCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogoutCallbackProxy, ULogoutCallbackProxy::StaticClass, TEXT("ULogoutCallbackProxy"), &Z_Registration_Info_UClass_ULogoutCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogoutCallbackProxy), 609720674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_1748414366(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
