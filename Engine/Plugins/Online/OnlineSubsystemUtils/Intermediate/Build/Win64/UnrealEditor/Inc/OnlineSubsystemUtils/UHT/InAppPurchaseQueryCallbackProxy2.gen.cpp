// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InAppPurchaseQueryCallbackProxy2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy2() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType();
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType;
	static UEnum* EOnlineProxyStoreOfferDiscountType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EOnlineProxyStoreOfferDiscountType"));
		}
		return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineProxyStoreOfferDiscountType>()
	{
		return EOnlineProxyStoreOfferDiscountType_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enumerators[] = {
		{ "EOnlineProxyStoreOfferDiscountType::NotOnSale", (int64)EOnlineProxyStoreOfferDiscountType::NotOnSale },
		{ "EOnlineProxyStoreOfferDiscountType::Percentage", (int64)EOnlineProxyStoreOfferDiscountType::Percentage },
		{ "EOnlineProxyStoreOfferDiscountType::DiscountAmount", (int64)EOnlineProxyStoreOfferDiscountType::DiscountAmount },
		{ "EOnlineProxyStoreOfferDiscountType::PayAmount", (int64)EOnlineProxyStoreOfferDiscountType::PayAmount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DiscountAmount.Comment", "/** Offer price should be displayed as an amount off regular price */" },
		{ "DiscountAmount.DisplayName", "DiscountAmount" },
		{ "DiscountAmount.Name", "EOnlineProxyStoreOfferDiscountType::DiscountAmount" },
		{ "DiscountAmount.ToolTip", "Offer price should be displayed as an amount off regular price" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "NotOnSale.Comment", "/** Offer isn't on sale*/" },
		{ "NotOnSale.DisplayName", "NotOnSale" },
		{ "NotOnSale.Name", "EOnlineProxyStoreOfferDiscountType::NotOnSale" },
		{ "NotOnSale.ToolTip", "Offer isn't on sale" },
		{ "PayAmount.Comment", "/** Offer price should be displayed as a new price */" },
		{ "PayAmount.DisplayName", "PayAmount" },
		{ "PayAmount.Name", "EOnlineProxyStoreOfferDiscountType::PayAmount" },
		{ "PayAmount.ToolTip", "Offer price should be displayed as a new price" },
		{ "Percentage.Comment", "/** Offer price should be displayed as a percentage of regular price */" },
		{ "Percentage.DisplayName", "Percentage" },
		{ "Percentage.Name", "EOnlineProxyStoreOfferDiscountType::Percentage" },
		{ "Percentage.ToolTip", "Offer price should be displayed as a percentage of regular price" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		"EOnlineProxyStoreOfferDiscountType",
		"EOnlineProxyStoreOfferDiscountType",
		Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType()
	{
		if (!Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer;
class UScriptStruct* FOnlineProxyStoreOffer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("OnlineProxyStoreOffer"));
	}
	return Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FOnlineProxyStoreOffer>()
{
	return FOnlineProxyStoreOffer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OfferId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LongDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularPriceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RegularPriceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegularPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PriceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericPrice_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumericPrice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationDate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DiscountType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscountType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DiscountType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicFields_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFields_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Offer entry for display from online store\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Offer entry for display from online store" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Unique offer identifier */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Unique offer identifier" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Title for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Title for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Short description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Short description for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Full description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Full description for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, LongDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price as text for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText = { "RegularPriceText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPriceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price in numeric form for comparison/sorting" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice = { "RegularPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Pricing (Post-Sales/Discounts) as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Pricing (Post-Sales/Discounts) as text for display" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, PriceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice = { "NumericPrice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, NumericPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Price currency code */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Price currency code" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date the offer was released */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date the offer was released" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date this information is no longer valid (maybe due to sale ending, etc) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date this information is no longer valid (maybe due to sale ending, etc)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, ExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Type of discount currently running on this offer (if any) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Type of discount currently running on this offer (if any)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType = { "DiscountType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, DiscountType), Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData)) }; // 1449968590
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp = { "DynamicFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp = { "DynamicFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields = { "DynamicFields", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOnlineProxyStoreOffer, DynamicFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"OnlineProxyStoreOffer",
		sizeof(FOnlineProxyStoreOffer),
		alignof(FOnlineProxyStoreOffer),
		Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms
		{
			TArray<FOnlineProxyStoreOffer> InAppOfferInformation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAppOfferInformation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppOfferInformation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InAppOfferInformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, METADATA_PARAMS(nullptr, 0) }; // 2778115344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms, InAppOfferInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData)) }; // 2778115344
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseQuery2Result__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInAppPurchaseQuery2Result_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseQuery2Result, TArray<FOnlineProxyStoreOffer> const& InAppOfferInformation)
{
	struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms
	{
		TArray<FOnlineProxyStoreOffer> InAppOfferInformation;
	};
	_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms Parms;
	Parms.InAppOfferInformation=InAppOfferInformation;
	InAppPurchaseQuery2Result.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseQueryCallbackProxy2**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers);
		P_NATIVE_END;
	}
	void UInAppPurchaseQueryCallbackProxy2::StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2()
	{
		UClass* Class = UInAppPurchaseQueryCallbackProxy2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseQuery", &UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics
	{
		struct InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms
		{
			APlayerController* PlayerController;
			TArray<FString> ProductIdentifiers;
			UInAppPurchaseQueryCallbackProxy2* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductIdentifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProductIdentifiers;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ProductIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Queries a InAppPurchase for an integer value\n" },
		{ "DisplayName", "Read In App Purchase Information2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Queries a InAppPurchase for an integer value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms), Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInAppPurchaseQueryCallbackProxy2);
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister()
	{
		return UInAppPurchaseQueryCallbackProxy2::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery, "CreateProxyObjectForInAppPurchaseQuery" }, // 2937269122
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseQueryCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful InAppPurchase query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData)) }; // 1076703656
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful InAppPurchase query" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData)) }; // 1076703656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseQueryCallbackProxy2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams = {
		&UInAppPurchaseQueryCallbackProxy2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2()
	{
		if (!Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton, Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseQueryCallbackProxy2>()
	{
		return UInAppPurchaseQueryCallbackProxy2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseQueryCallbackProxy2);
	UInAppPurchaseQueryCallbackProxy2::~UInAppPurchaseQueryCallbackProxy2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::EnumInfo[] = {
		{ EOnlineProxyStoreOfferDiscountType_StaticEnum, TEXT("EOnlineProxyStoreOfferDiscountType"), &Z_Registration_Info_UEnum_EOnlineProxyStoreOfferDiscountType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1449968590U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ScriptStructInfo[] = {
		{ FOnlineProxyStoreOffer::StaticStruct, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewStructOps, TEXT("OnlineProxyStoreOffer"), &Z_Registration_Info_UScriptStruct_OnlineProxyStoreOffer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlineProxyStoreOffer), 2778115344U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, UInAppPurchaseQueryCallbackProxy2::StaticClass, TEXT("UInAppPurchaseQueryCallbackProxy2"), &Z_Registration_Info_UClass_UInAppPurchaseQueryCallbackProxy2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInAppPurchaseQueryCallbackProxy2), 1128994729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_3308575177(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
