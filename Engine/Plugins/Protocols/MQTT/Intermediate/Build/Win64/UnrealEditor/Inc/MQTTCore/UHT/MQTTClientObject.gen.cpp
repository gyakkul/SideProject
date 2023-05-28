// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTClientObject.h"
#include "MQTTClientMessage.h"
#include "MQTTShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTClientObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTClientObject();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTClientObject_NoRegister();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTSubscriptionObject();
	MQTTCORE_API UClass* Z_Construct_UClass_UMQTTSubscriptionObject_NoRegister();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature();
	MQTTCORE_API UFunction* Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTClientMessage();
	MQTTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMQTTURL();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics
	{
		struct MQTTSubscriptionObject_eventOnMessageDelegate_Parms
		{
			FMQTTClientMessage Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubscriptionObject_eventOnMessageDelegate_Parms, Message), Z_Construct_UScriptStruct_FMQTTClientMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3631163495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubscriptionObject, nullptr, "OnMessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::MQTTSubscriptionObject_eventOnMessageDelegate_Parms), Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTSubscriptionObject::FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMQTTClientMessage const& Message)
{
	struct MQTTSubscriptionObject_eventOnMessageDelegate_Parms
	{
		FMQTTClientMessage Message;
	};
	MQTTSubscriptionObject_eventOnMessageDelegate_Parms Parms;
	Parms.Message=Message;
	OnMessageDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMQTTSubscriptionObject::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTSubscriptionObject::execSetOnMessageHandler)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnMessageCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnMessageHandler(FOnMessageDelegate(Z_Param_Out_OnMessageCallback));
		P_NATIVE_END;
	}
	void UMQTTSubscriptionObject::StaticRegisterNativesUMQTTSubscriptionObject()
	{
		UClass* Class = UMQTTSubscriptionObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsValid", &UMQTTSubscriptionObject::execIsValid },
			{ "SetOnMessageHandler", &UMQTTSubscriptionObject::execSetOnMessageHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics
	{
		struct MQTTSubscriptionObject_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MQTTSubscriptionObject_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MQTTSubscriptionObject_eventIsValid_Parms), &Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubscriptionObject, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::MQTTSubscriptionObject_eventIsValid_Parms), Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics
	{
		struct MQTTSubscriptionObject_eventSetOnMessageHandler_Parms
		{
			FScriptDelegate OnMessageCallback;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageCallback_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageCallback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::NewProp_OnMessageCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::NewProp_OnMessageCallback = { "OnMessageCallback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTSubscriptionObject_eventSetOnMessageHandler_Parms, OnMessageCallback), Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::NewProp_OnMessageCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::NewProp_OnMessageCallback_MetaData)) }; // 2127699276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::NewProp_OnMessageCallback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTSubscriptionObject, nullptr, "SetOnMessageHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::MQTTSubscriptionObject_eventSetOnMessageHandler_Parms), Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMQTTSubscriptionObject);
	UClass* Z_Construct_UClass_UMQTTSubscriptionObject_NoRegister()
	{
		return UMQTTSubscriptionObject::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTSubscriptionObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTSubscriptionObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTSubscriptionObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTSubscriptionObject_IsValid, "IsValid" }, // 1984079538
		{ &Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature, "OnMessageDelegate__DelegateSignature" }, // 2127699276
		{ &Z_Construct_UFunction_UMQTTSubscriptionObject_SetOnMessageHandler, "SetOnMessageHandler" }, // 3945548355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTSubscriptionObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MQTT Subscription" },
		{ "IncludePath", "MQTTClientObject.h" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTSubscriptionObject_Statics::NewProp_OnMessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMQTTSubscriptionObject_Statics::NewProp_OnMessageDelegate = { "OnMessageDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTSubscriptionObject, OnMessageDelegate), Z_Construct_UDelegateFunction_UMQTTSubscriptionObject_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMQTTSubscriptionObject_Statics::NewProp_OnMessageDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubscriptionObject_Statics::NewProp_OnMessageDelegate_MetaData)) }; // 2127699276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMQTTSubscriptionObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTSubscriptionObject_Statics::NewProp_OnMessageDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTSubscriptionObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTSubscriptionObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMQTTSubscriptionObject_Statics::ClassParams = {
		&UMQTTSubscriptionObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMQTTSubscriptionObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubscriptionObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTSubscriptionObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTSubscriptionObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTSubscriptionObject()
	{
		if (!Z_Registration_Info_UClass_UMQTTSubscriptionObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMQTTSubscriptionObject.OuterSingleton, Z_Construct_UClass_UMQTTSubscriptionObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMQTTSubscriptionObject.OuterSingleton;
	}
	template<> MQTTCORE_API UClass* StaticClass<UMQTTSubscriptionObject>()
	{
		return UMQTTSubscriptionObject::StaticClass();
	}
	UMQTTSubscriptionObject::UMQTTSubscriptionObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTSubscriptionObject);
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics
	{
		struct MQTTClientObject_eventOnConnectDelegate_Parms
		{
			EMQTTConnectReturnCode ReturnCode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnCode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::NewProp_ReturnCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventOnConnectDelegate_Parms, ReturnCode), Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode, METADATA_PARAMS(nullptr, 0) }; // 2257584140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::NewProp_ReturnCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::NewProp_ReturnCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnConnectDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::MQTTClientObject_eventOnConnectDelegate_Parms), Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate, EMQTTConnectReturnCode ReturnCode)
{
	struct MQTTClientObject_eventOnConnectDelegate_Parms
	{
		EMQTTConnectReturnCode ReturnCode;
	};
	MQTTClientObject_eventOnConnectDelegate_Parms Parms;
	Parms.ReturnCode=ReturnCode;
	OnConnectDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnDisconnectDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate)
{
	OnDisconnectDelegate.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnPublishDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate)
{
	OnPublishDelegate.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics
	{
		struct MQTTClientObject_eventOnSubscribeDelegate_Parms
		{
			EMQTTSubscribeReturnCode ReturnCode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnCode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_ReturnCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_ReturnCode = { "ReturnCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventOnSubscribeDelegate_Parms, ReturnCode), Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode, METADATA_PARAMS(nullptr, 0) }; // 3197732961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_ReturnCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::NewProp_ReturnCode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnSubscribeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::MQTTClientObject_eventOnSubscribeDelegate_Parms), Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, EMQTTSubscribeReturnCode ReturnCode)
{
	struct MQTTClientObject_eventOnSubscribeDelegate_Parms
	{
		EMQTTSubscribeReturnCode ReturnCode;
	};
	MQTTClientObject_eventOnSubscribeDelegate_Parms Parms;
	Parms.ReturnCode=ReturnCode;
	OnSubscribeDelegate.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnUnsubscribeDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate)
{
	OnUnsubscribeDelegate.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics
	{
		struct MQTTClientObject_eventOnMessageDelegate_Parms
		{
			FMQTTClientMessage Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventOnMessageDelegate_Parms, Message), Z_Construct_UScriptStruct_FMQTTClientMessage, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message_MetaData)) }; // 3631163495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "OnMessageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::MQTTClientObject_eventOnMessageDelegate_Parms), Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00520000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMQTTClientObject::FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMQTTClientMessage const& Message)
{
	struct MQTTClientObject_eventOnMessageDelegate_Parms
	{
		FMQTTClientMessage Message;
	};
	MQTTClientObject_eventOnMessageDelegate_Parms Parms;
	Parms.Message=Message;
	OnMessageDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMQTTClientObject::execGetURL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMQTTURL*)Z_Param__Result=P_THIS->GetURL();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execGetClientId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetClientId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execUnsubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTopic);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unsubscribe(Z_Param_InTopic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execSubscribeMany)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_InTopics);
		P_GET_TARRAY(EMQTTQualityOfService,Z_Param_InQoS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMQTTSubscriptionObject*>*)Z_Param__Result=P_THIS->SubscribeMany(Z_Param_Out_InTopics,Z_Param_InQoS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execSubscribe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTopic);
		P_GET_ENUM(EMQTTQualityOfService,Z_Param_InQoS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMQTTSubscriptionObject**)Z_Param__Result=P_THIS->Subscribe(Z_Param_InTopic,EMQTTQualityOfService(Z_Param_InQoS));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execPublish)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTopic);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_InPayload);
		P_GET_ENUM(EMQTTQualityOfService,Z_Param_InQoS);
		P_GET_UBOOL(Z_Param_bInRetain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Publish(Z_Param_InTopic,Z_Param_Out_InPayload,EMQTTQualityOfService(Z_Param_InQoS),Z_Param_bInRetain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execDisconnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InOnDisconnect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect(FOnDisconnectDelegate(Z_Param_Out_InOnDisconnect));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMQTTClientObject::execConnect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InOnConnect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Connect(FOnConnectDelegate(Z_Param_Out_InOnConnect));
		P_NATIVE_END;
	}
	void UMQTTClientObject::StaticRegisterNativesUMQTTClientObject()
	{
		UClass* Class = UMQTTClientObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UMQTTClientObject::execConnect },
			{ "Disconnect", &UMQTTClientObject::execDisconnect },
			{ "GetClientId", &UMQTTClientObject::execGetClientId },
			{ "GetURL", &UMQTTClientObject::execGetURL },
			{ "Publish", &UMQTTClientObject::execPublish },
			{ "Subscribe", &UMQTTClientObject::execSubscribe },
			{ "SubscribeMany", &UMQTTClientObject::execSubscribeMany },
			{ "Unsubscribe", &UMQTTClientObject::execUnsubscribe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMQTTClientObject_Connect_Statics
	{
		struct MQTTClientObject_eventConnect_Parms
		{
			FScriptDelegate InOnConnect;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOnConnect_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnConnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::NewProp_InOnConnect_MetaData[] = {
		{ "DisplayName", "OnConnect" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::NewProp_InOnConnect = { "InOnConnect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventConnect_Parms, InOnConnect), Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::NewProp_InOnConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::NewProp_InOnConnect_MetaData)) }; // 2575532208
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::NewProp_InOnConnect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::MQTTClientObject_eventConnect_Parms), Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics
	{
		struct MQTTClientObject_eventDisconnect_Parms
		{
			FScriptDelegate InOnDisconnect;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOnDisconnect_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InOnDisconnect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::NewProp_InOnDisconnect_MetaData[] = {
		{ "DisplayName", "OnDisconnect" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::NewProp_InOnDisconnect = { "InOnDisconnect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventDisconnect_Parms, InOnDisconnect), Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::NewProp_InOnDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::NewProp_InOnDisconnect_MetaData)) }; // 732418405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::NewProp_InOnDisconnect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "Disconnect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::MQTTClientObject_eventDisconnect_Parms), Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics
	{
		struct MQTTClientObject_eventGetClientId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventGetClientId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "GetClientId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::MQTTClientObject_eventGetClientId_Parms), Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_GetClientId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_GetClientId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics
	{
		struct MQTTClientObject_eventGetURL_Parms
		{
			FMQTTURL ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventGetURL_Parms, ReturnValue), Z_Construct_UScriptStruct_FMQTTURL, METADATA_PARAMS(nullptr, 0) }; // 2069467068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** URL for this client. */" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
		{ "ToolTip", "URL for this client." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "GetURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::MQTTClientObject_eventGetURL_Parms), Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_GetURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_GetURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_Publish_Statics
	{
		struct MQTTClientObject_eventPublish_Parms
		{
			FString InTopic;
			TArray<uint8> InPayload;
			EMQTTQualityOfService InQoS;
			bool bInRetain;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTopic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTopic;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPayload_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPayload_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPayload;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInRetain_MetaData[];
#endif
		static void NewProp_bInRetain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRetain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InTopic_MetaData[] = {
		{ "DisplayName", "Topic" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InTopic = { "InTopic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventPublish_Parms, InTopic), METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InTopic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InTopic_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload_Inner = { "InPayload", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload_MetaData[] = {
		{ "DisplayName", "Payload" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload = { "InPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventPublish_Parms, InPayload), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS_MetaData[] = {
		{ "DisplayName", "Quality of Service" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventPublish_Parms, InQoS), Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS_MetaData)) }; // 1181216296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain_SetBit(void* Obj)
	{
		((MQTTClientObject_eventPublish_Parms*)Obj)->bInRetain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain = { "bInRetain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MQTTClientObject_eventPublish_Parms), &Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InTopic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_InQoS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::NewProp_bInRetain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** OutMessageId can be used to match this request with the callback response. */" },
		{ "CPP_Default_bInRetain", "false" },
		{ "CPP_Default_InQoS", "Once" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
		{ "ToolTip", "OutMessageId can be used to match this request with the callback response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "Publish", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::MQTTClientObject_eventPublish_Parms), Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_Publish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_Publish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics
	{
		struct MQTTClientObject_eventSubscribe_Parms
		{
			FString InTopic;
			EMQTTQualityOfService InQoS;
			UMQTTSubscriptionObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTopic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTopic;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InTopic_MetaData[] = {
		{ "DisplayName", "Topic" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InTopic = { "InTopic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribe_Parms, InTopic), METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InTopic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InTopic_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS_MetaData[] = {
		{ "DisplayName", "Quality of Service" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribe_Parms, InQoS), Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS_MetaData)) }; // 1181216296
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribe_Parms, ReturnValue), Z_Construct_UClass_UMQTTSubscriptionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InTopic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_InQoS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** OutMessageId can be used to match this request with the callback response. */" },
		{ "CPP_Default_InQoS", "Once" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
		{ "ToolTip", "OutMessageId can be used to match this request with the callback response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "Subscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::MQTTClientObject_eventSubscribe_Parms), Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_Subscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_Subscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics
	{
		struct MQTTClientObject_eventSubscribeMany_Parms
		{
			TArray<FString> InTopics;
			TArray<EMQTTQualityOfService> InQoS;
			TArray<UMQTTSubscriptionObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTopics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTopics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTopics;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InQoS_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InQoS_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InQoS_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InQoS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics_Inner = { "InTopics", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics_MetaData[] = {
		{ "DisplayName", "Topics" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics = { "InTopics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribeMany_Parms, InTopics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_Inner = { "InQoS", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_MQTTCore_EMQTTQualityOfService, METADATA_PARAMS(nullptr, 0) }; // 1181216296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_MetaData[] = {
		{ "DisplayName", "Quality of Services" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS = { "InQoS", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribeMany_Parms, InQoS), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_MetaData)) }; // 1181216296
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMQTTSubscriptionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventSubscribeMany_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InTopics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_InQoS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** OutMessageId can be used to match this request with the callback response. */" },
		{ "DisplayName", "Subscribe (Multiple Topics)" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
		{ "ToolTip", "OutMessageId can be used to match this request with the callback response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "SubscribeMany", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::MQTTClientObject_eventSubscribeMany_Parms), Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_SubscribeMany()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_SubscribeMany_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics
	{
		struct MQTTClientObject_eventUnsubscribe_Parms
		{
			FString InTopic;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTopic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTopic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::NewProp_InTopic_MetaData[] = {
		{ "DisplayName", "Topic" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::NewProp_InTopic = { "InTopic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MQTTClientObject_eventUnsubscribe_Parms, InTopic), METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::NewProp_InTopic_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::NewProp_InTopic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::NewProp_InTopic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::Function_MetaDataParams[] = {
		{ "Category", "MQTT" },
		{ "Comment", "/** OutMessageId can be used to match this request with the callback response. */" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
		{ "ToolTip", "OutMessageId can be used to match this request with the callback response." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMQTTClientObject, nullptr, "Unsubscribe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::MQTTClientObject_eventUnsubscribe_Parms), Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMQTTClientObject_Unsubscribe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMQTTClientObject_Unsubscribe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMQTTClientObject);
	UClass* Z_Construct_UClass_UMQTTClientObject_NoRegister()
	{
		return UMQTTClientObject::StaticClass();
	}
	struct Z_Construct_UClass_UMQTTClientObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMessageDelegate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Subscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subscriptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMQTTClientObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MQTTCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMQTTClientObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMQTTClientObject_Connect, "Connect" }, // 4166224074
		{ &Z_Construct_UFunction_UMQTTClientObject_Disconnect, "Disconnect" }, // 709750550
		{ &Z_Construct_UFunction_UMQTTClientObject_GetClientId, "GetClientId" }, // 454696535
		{ &Z_Construct_UFunction_UMQTTClientObject_GetURL, "GetURL" }, // 3871139684
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature, "OnConnectDelegate__DelegateSignature" }, // 2575532208
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature, "OnDisconnectDelegate__DelegateSignature" }, // 732418405
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature, "OnMessageDelegate__DelegateSignature" }, // 2678678200
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnPublishDelegate__DelegateSignature, "OnPublishDelegate__DelegateSignature" }, // 341938099
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnSubscribeDelegate__DelegateSignature, "OnSubscribeDelegate__DelegateSignature" }, // 2735689812
		{ &Z_Construct_UDelegateFunction_UMQTTClientObject_OnUnsubscribeDelegate__DelegateSignature, "OnUnsubscribeDelegate__DelegateSignature" }, // 2677308902
		{ &Z_Construct_UFunction_UMQTTClientObject_Publish, "Publish" }, // 2186263879
		{ &Z_Construct_UFunction_UMQTTClientObject_Subscribe, "Subscribe" }, // 366968551
		{ &Z_Construct_UFunction_UMQTTClientObject_SubscribeMany, "SubscribeMany" }, // 516402376
		{ &Z_Construct_UFunction_UMQTTClientObject_Unsubscribe, "Unsubscribe" }, // 2500587841
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "MQTT Client" },
		{ "IncludePath", "MQTTClientObject.h" },
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnConnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnConnectDelegate = { "OnConnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientObject, OnConnectDelegate), Z_Construct_UDelegateFunction_UMQTTClientObject_OnConnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnConnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnConnectDelegate_MetaData)) }; // 2575532208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnDisconnectDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnDisconnectDelegate = { "OnDisconnectDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientObject, OnDisconnectDelegate), Z_Construct_UDelegateFunction_UMQTTClientObject_OnDisconnectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnDisconnectDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnDisconnectDelegate_MetaData)) }; // 732418405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnMessageDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnMessageDelegate = { "OnMessageDelegate", nullptr, (EPropertyFlags)0x0020080000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientObject, OnMessageDelegate), Z_Construct_UDelegateFunction_UMQTTClientObject_OnMessageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnMessageDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnMessageDelegate_MetaData)) }; // 2678678200
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions_Inner = { "Subscriptions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMQTTSubscriptionObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MQTTClientObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions = { "Subscriptions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMQTTClientObject, Subscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMQTTClientObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnConnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnDisconnectDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_OnMessageDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMQTTClientObject_Statics::NewProp_Subscriptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMQTTClientObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMQTTClientObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMQTTClientObject_Statics::ClassParams = {
		&UMQTTClientObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMQTTClientObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMQTTClientObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMQTTClientObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMQTTClientObject()
	{
		if (!Z_Registration_Info_UClass_UMQTTClientObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMQTTClientObject.OuterSingleton, Z_Construct_UClass_UMQTTClientObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMQTTClientObject.OuterSingleton;
	}
	template<> MQTTCORE_API UClass* StaticClass<UMQTTClientObject>()
	{
		return UMQTTClientObject::StaticClass();
	}
	UMQTTClientObject::UMQTTClientObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMQTTClientObject);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMQTTSubscriptionObject, UMQTTSubscriptionObject::StaticClass, TEXT("UMQTTSubscriptionObject"), &Z_Registration_Info_UClass_UMQTTSubscriptionObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMQTTSubscriptionObject), 2652957159U) },
		{ Z_Construct_UClass_UMQTTClientObject, UMQTTClientObject::StaticClass, TEXT("UMQTTClientObject"), &Z_Registration_Info_UClass_UMQTTClientObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMQTTClientObject), 207162102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_3671388441(TEXT("/Script/MQTTCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
