// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusEntitlementCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusEntitlementCallbackProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusEntitlementCallbackProxy();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusEntitlementCallbackProxy_NoRegister();
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/OculusEntitlementCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus, nullptr, "OculusEntitlementCheckResult__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOculusEntitlementCheckResult_DelegateWrapper(const FMulticastScriptDelegate& OculusEntitlementCheckResult)
{
	OculusEntitlementCheckResult.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UOculusEntitlementCallbackProxy::execVerifyEntitlement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusEntitlementCallbackProxy**)Z_Param__Result=UOculusEntitlementCallbackProxy::VerifyEntitlement();
		P_NATIVE_END;
	}
	void UOculusEntitlementCallbackProxy::StaticRegisterNativesUOculusEntitlementCallbackProxy()
	{
		UClass* Class = UOculusEntitlementCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VerifyEntitlement", &UOculusEntitlementCallbackProxy::execVerifyEntitlement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics
	{
		struct OculusEntitlementCallbackProxy_eventVerifyEntitlement_Parms
		{
			UOculusEntitlementCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusEntitlementCallbackProxy_eventVerifyEntitlement_Parms, ReturnValue), Z_Construct_UClass_UOculusEntitlementCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Oculus|Entitlement" },
		{ "Comment", "// Kick off entitlement check. Asynchronous-- see OnUserPrivilegeCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/OculusEntitlementCallbackProxy.h" },
		{ "ToolTip", "Kick off entitlement check. Asynchronous-- see OnUserPrivilegeCompleteDelegate for results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusEntitlementCallbackProxy, nullptr, "VerifyEntitlement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::OculusEntitlementCallbackProxy_eventVerifyEntitlement_Parms), Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusEntitlementCallbackProxy);
	UClass* Z_Construct_UClass_UOculusEntitlementCallbackProxy_NoRegister()
	{
		return UOculusEntitlementCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusEntitlementCallbackProxy_VerifyEntitlement, "VerifyEntitlement" }, // 2296085623
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes some of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "OculusEntitlementCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/OculusEntitlementCallbackProxy.h" },
		{ "ToolTip", "Exposes some of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful entitlement check\n" },
		{ "ModuleRelativePath", "Classes/OculusEntitlementCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful entitlement check" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusEntitlementCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 4119635467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful entitlement check\n" },
		{ "ModuleRelativePath", "Classes/OculusEntitlementCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful entitlement check" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusEntitlementCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusEntitlementCheckResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 4119635467
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusEntitlementCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::ClassParams = {
		&UOculusEntitlementCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusEntitlementCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UOculusEntitlementCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusEntitlementCallbackProxy.OuterSingleton, Z_Construct_UClass_UOculusEntitlementCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusEntitlementCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusEntitlementCallbackProxy>()
	{
		return UOculusEntitlementCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusEntitlementCallbackProxy);
	UOculusEntitlementCallbackProxy::~UOculusEntitlementCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusEntitlementCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusEntitlementCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusEntitlementCallbackProxy, UOculusEntitlementCallbackProxy::StaticClass, TEXT("UOculusEntitlementCallbackProxy"), &Z_Registration_Info_UClass_UOculusEntitlementCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusEntitlementCallbackProxy), 2121610130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusEntitlementCallbackProxy_h_886518426(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusEntitlementCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusEntitlementCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
