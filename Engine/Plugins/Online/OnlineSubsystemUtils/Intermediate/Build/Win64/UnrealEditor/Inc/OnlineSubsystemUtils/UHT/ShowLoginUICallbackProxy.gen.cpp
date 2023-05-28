// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShowLoginUICallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShowLoginUICallbackProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UShowLoginUICallbackProxy();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineShowLoginUIResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnlineShowLoginUIResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineShowLoginUIResult, APlayerController* PlayerController)
{
	struct _Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms
	{
		APlayerController* PlayerController;
	};
	_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms Parms;
	Parms.PlayerController=PlayerController;
	OnlineShowLoginUIResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UShowLoginUICallbackProxy::execShowExternalLoginUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_InPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UShowLoginUICallbackProxy**)Z_Param__Result=UShowLoginUICallbackProxy::ShowExternalLoginUI(Z_Param_WorldContextObject,Z_Param_InPlayerController);
		P_NATIVE_END;
	}
	void UShowLoginUICallbackProxy::StaticRegisterNativesUShowLoginUICallbackProxy()
	{
		UClass* Class = UShowLoginUICallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowExternalLoginUI", &UShowLoginUICallbackProxy::execShowExternalLoginUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics
	{
		struct ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms
		{
			UObject* WorldContextObject;
			APlayerController* InPlayerController;
			UShowLoginUICallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_InPlayerController = { "InPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, InPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms, ReturnValue), Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_InPlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online" },
		{ "Comment", "// Shows the login UI for the currently active online subsystem, if the subsystem supports a login UI.\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Shows the login UI for the currently active online subsystem, if the subsystem supports a login UI." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShowLoginUICallbackProxy, nullptr, "ShowExternalLoginUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::ShowLoginUICallbackProxy_eventShowExternalLoginUI_Parms), Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShowLoginUICallbackProxy);
	UClass* Z_Construct_UClass_UShowLoginUICallbackProxy_NoRegister()
	{
		return UShowLoginUICallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UShowLoginUICallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShowLoginUICallbackProxy_ShowExternalLoginUI, "ShowExternalLoginUI" }, // 2456711468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShowLoginUICallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowLoginUICallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 926496199
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/ShowLoginUICallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShowLoginUICallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineShowLoginUIResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 926496199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShowLoginUICallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::ClassParams = {
		&UShowLoginUICallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShowLoginUICallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton, Z_Construct_UClass_UShowLoginUICallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShowLoginUICallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UShowLoginUICallbackProxy>()
	{
		return UShowLoginUICallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShowLoginUICallbackProxy);
	UShowLoginUICallbackProxy::~UShowLoginUICallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShowLoginUICallbackProxy, UShowLoginUICallbackProxy::StaticClass, TEXT("UShowLoginUICallbackProxy"), &Z_Registration_Info_UClass_UShowLoginUICallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShowLoginUICallbackProxy), 3387075128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_3193989423(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
