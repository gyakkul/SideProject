// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InAppPurchaseRestoreCallbackProxy2.h"
#include "InAppPurchaseCallbackProxy2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy2() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2;
class UScriptStruct* FInAppPurchaseRestoreInfo2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseRestoreInfo2"));
	}
	return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseRestoreInfo2>()
{
	return FInAppPurchaseRestoreInfo2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The item name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "The item name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInAppPurchaseRestoreInfo2, ValidationInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewProp_ValidationInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseRestoreInfo2",
		sizeof(FInAppPurchaseRestoreInfo2),
		alignof(FInAppPurchaseRestoreInfo2),
		Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2()
	{
		if (!Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms
		{
			EInAppPurchaseStatus PurchaseStatus;
			TArray<FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PurchaseStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseRestoreInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseRestoreInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppPurchaseRestoreInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(nullptr, 0) }; // 1205712008
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_Inner = { "InAppPurchaseRestoreInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2, METADATA_PARAMS(nullptr, 0) }; // 3687986198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo = { "InAppPurchaseRestoreInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms, InAppPurchaseRestoreInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_MetaData)) }; // 3687986198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_PurchaseStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::NewProp_InAppPurchaseRestoreInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseRestoreResult2__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInAppPurchaseRestoreResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseRestoreInfo2> const& InAppPurchaseRestoreInfo)
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms
	{
		EInAppPurchaseStatus PurchaseStatus;
		TArray<FInAppPurchaseRestoreInfo2> InAppPurchaseRestoreInfo;
	};
	_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult2_Parms Parms;
	Parms.PurchaseStatus=PurchaseStatus;
	Parms.InAppPurchaseRestoreInfo=InAppPurchaseRestoreInfo;
	InAppPurchaseRestoreResult2.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInAppPurchaseRestoreCallbackProxy2::execCreateProxyObjectForInAppPurchaseRestore)
	{
		P_GET_TARRAY_REF(FInAppPurchaseProductRequest2,Z_Param_Out_ConsumableProductFlags);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseRestoreCallbackProxy2**)Z_Param__Result=UInAppPurchaseRestoreCallbackProxy2::CreateProxyObjectForInAppPurchaseRestore(Z_Param_Out_ConsumableProductFlags,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UInAppPurchaseRestoreCallbackProxy2::StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2()
	{
		UClass* Class = UInAppPurchaseRestoreCallbackProxy2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseRestore", &UInAppPurchaseRestoreCallbackProxy2::execCreateProxyObjectForInAppPurchaseRestore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics
	{
		struct InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms
		{
			TArray<FInAppPurchaseProductRequest2> ConsumableProductFlags;
			APlayerController* PlayerController;
			UInAppPurchaseRestoreCallbackProxy2* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumableProductFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumableProductFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConsumableProductFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, METADATA_PARAMS(nullptr, 0) }; // 870997428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ConsumableProductFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData)) }; // 870997428
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Restore In-App Purchases2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseRestore", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::InAppPurchaseRestoreCallbackProxy2_eventCreateProxyObjectForInAppPurchaseRestore_Parms), Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseRestoreCallbackProxy2);
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_NoRegister()
	{
		return UInAppPurchaseRestoreCallbackProxy2::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore, "CreateProxyObjectForInAppPurchaseRestore" }, // 3442035565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess_MetaData)) }; // 2469551536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult2__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure_MetaData)) }; // 2469551536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseRestoreCallbackProxy2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::ClassParams = {
		&UInAppPurchaseRestoreCallbackProxy2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2()
	{
		if (!Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton, Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseRestoreCallbackProxy2>()
	{
		return UInAppPurchaseRestoreCallbackProxy2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseRestoreCallbackProxy2);
	UInAppPurchaseRestoreCallbackProxy2::~UInAppPurchaseRestoreCallbackProxy2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ScriptStructInfo[] = {
		{ FInAppPurchaseRestoreInfo2::StaticStruct, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics::NewStructOps, TEXT("InAppPurchaseRestoreInfo2"), &Z_Registration_Info_UScriptStruct_InAppPurchaseRestoreInfo2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInAppPurchaseRestoreInfo2), 3687986198U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2, UInAppPurchaseRestoreCallbackProxy2::StaticClass, TEXT("UInAppPurchaseRestoreCallbackProxy2"), &Z_Registration_Info_UClass_UInAppPurchaseRestoreCallbackProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseRestoreCallbackProxy2), 4010108928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_2394034982(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
