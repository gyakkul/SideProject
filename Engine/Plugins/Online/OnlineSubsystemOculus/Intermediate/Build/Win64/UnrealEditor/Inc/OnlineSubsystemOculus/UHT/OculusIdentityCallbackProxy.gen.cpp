// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusIdentityCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusIdentityCallbackProxy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusIdentityCallbackProxy();
	ONLINESUBSYSTEMOCULUS_API UClass* Z_Construct_UClass_UOculusIdentityCallbackProxy_NoRegister();
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature();
	ONLINESUBSYSTEMOCULUS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemOculus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms
		{
			FString OculusId;
			FString OculusName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OculusName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::NewProp_OculusId = { "OculusId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms, OculusId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::NewProp_OculusName = { "OculusName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms, OculusName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::NewProp_OculusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::NewProp_OculusName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus, nullptr, "OculusIdentitySuccessResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::_Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOculusIdentitySuccessResult_DelegateWrapper(const FMulticastScriptDelegate& OculusIdentitySuccessResult, const FString& OculusId, const FString& OculusName)
{
	struct _Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms
	{
		FString OculusId;
		FString OculusName;
	};
	_Script_OnlineSubsystemOculus_eventOculusIdentitySuccessResult_Parms Parms;
	Parms.OculusId=OculusId;
	Parms.OculusName=OculusName;
	OculusIdentitySuccessResult.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus, nullptr, "OculusIdentityFailureResult__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOculusIdentityFailureResult_DelegateWrapper(const FMulticastScriptDelegate& OculusIdentityFailureResult)
{
	OculusIdentityFailureResult.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UOculusIdentityCallbackProxy::execGetOculusIdentity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOculusIdentityCallbackProxy**)Z_Param__Result=UOculusIdentityCallbackProxy::GetOculusIdentity(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	void UOculusIdentityCallbackProxy::StaticRegisterNativesUOculusIdentityCallbackProxy()
	{
		UClass* Class = UOculusIdentityCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOculusIdentity", &UOculusIdentityCallbackProxy::execGetOculusIdentity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics
	{
		struct OculusIdentityCallbackProxy_eventGetOculusIdentity_Parms
		{
			int32 LocalUserNum;
			UOculusIdentityCallbackProxy* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusIdentityCallbackProxy_eventGetOculusIdentity_Parms, LocalUserNum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OculusIdentityCallbackProxy_eventGetOculusIdentity_Parms, ReturnValue), Z_Construct_UClass_UOculusIdentityCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Oculus|Identity" },
		{ "Comment", "// Kick off GetOculusIdentity. Asynchronous-- see OnLoginCompleteDelegate for results.\n" },
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
		{ "ToolTip", "Kick off GetOculusIdentity. Asynchronous-- see OnLoginCompleteDelegate for results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusIdentityCallbackProxy, nullptr, "GetOculusIdentity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::OculusIdentityCallbackProxy_eventGetOculusIdentity_Parms), Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusIdentityCallbackProxy);
	UClass* Z_Construct_UClass_UOculusIdentityCallbackProxy_NoRegister()
	{
		return UOculusIdentityCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemOculus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusIdentityCallbackProxy_GetOculusIdentity, "GetOculusIdentity" }, // 1322453354
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes the oculus id of the Platform SDK for blueprint use.\n */" },
		{ "IncludePath", "OculusIdentityCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
		{ "ToolTip", "Exposes the oculus id of the Platform SDK for blueprint use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when it successfully gets back the oculus id\n" },
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
		{ "ToolTip", "Called when it successfully gets back the oculus id" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusIdentityCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentitySuccessResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1881010348
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when it fails to get the oculus id\n" },
		{ "ModuleRelativePath", "Classes/OculusIdentityCallbackProxy.h" },
		{ "ToolTip", "Called when it fails to get the oculus id" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusIdentityCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemOculus_OculusIdentityFailureResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnFailure_MetaData)) }; // 1162733354
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusIdentityCallbackProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::ClassParams = {
		&UOculusIdentityCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusIdentityCallbackProxy()
	{
		if (!Z_Registration_Info_UClass_UOculusIdentityCallbackProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusIdentityCallbackProxy.OuterSingleton, Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusIdentityCallbackProxy.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<UOculusIdentityCallbackProxy>()
	{
		return UOculusIdentityCallbackProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusIdentityCallbackProxy);
	UOculusIdentityCallbackProxy::~UOculusIdentityCallbackProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusIdentityCallbackProxy, UOculusIdentityCallbackProxy::StaticClass, TEXT("UOculusIdentityCallbackProxy"), &Z_Registration_Info_UClass_UOculusIdentityCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusIdentityCallbackProxy), 1593878983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_831963268(TEXT("/Script/OnlineSubsystemOculus"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
