// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MicroTransactionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMicroTransactionBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase();
	ENGINE_API UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMicroTransactionDelegate;
	static UEnum* EMicroTransactionDelegate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionDelegate"));
		}
		return Z_Registration_Info_UEnum_EMicroTransactionDelegate.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMicroTransactionDelegate>()
	{
		return EMicroTransactionDelegate_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enumerators[] = {
		{ "MTD_PurchaseQueryComplete", (int64)MTD_PurchaseQueryComplete },
		{ "MTD_PurchaseComplete", (int64)MTD_PurchaseComplete },
		{ "MTD_MAX", (int64)MTD_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** All the types of delegate callbacks that a MicroTransaction subclass may receive from C++. */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "MTD_MAX.Name", "MTD_MAX" },
		{ "MTD_PurchaseComplete.Comment", "/**\n\x09 * Data:Result code, and identifier of the product that completed.\n\x09 * Type:Custom\n\x09 * Desc:IntValue will have one of the enums in EMicroTransactionResult, and StringValue\n\x09 *      will have the Identifier from the PurchaseInfo that was bought with BeginPurchase\n\x09 *      If MTR_Failed was returned, then LastError and LastErrorSolution should be filled\n\x09 *\x09\x09out with the most recent localized and possible resolutions.\n\x09 */" },
		{ "MTD_PurchaseComplete.Name", "MTD_PurchaseComplete" },
		{ "MTD_PurchaseComplete.ToolTip", "Data:Result code, and identifier of the product that completed.\nType:Custom\nDesc:IntValue will have one of the enums in EMicroTransactionResult, and StringValue\n     will have the Identifier from the PurchaseInfo that was bought with BeginPurchase\n     If MTR_Failed was returned, then LastError and LastErrorSolution should be filled\n             out with the most recent localized and possible resolutions." },
		{ "MTD_PurchaseQueryComplete.Comment", "/**\n\x09 * Data:None\n\x09 * Desc:QueryForAvailablePurchases() is complete and AvailableProducts is ready for use.\n\x09 */" },
		{ "MTD_PurchaseQueryComplete.Name", "MTD_PurchaseQueryComplete" },
		{ "MTD_PurchaseQueryComplete.ToolTip", "Data:None\nDesc:QueryForAvailablePurchases() is complete and AvailableProducts is ready for use." },
		{ "ToolTip", "All the types of delegate callbacks that a MicroTransaction subclass may receive from C++." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMicroTransactionDelegate",
		"EMicroTransactionDelegate",
		Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMicroTransactionDelegate()
	{
		if (!Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton, Z_Construct_UEnum_Engine_EMicroTransactionDelegate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMicroTransactionDelegate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMicroTransactionResult;
	static UEnum* EMicroTransactionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMicroTransactionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMicroTransactionResult"));
		}
		return Z_Registration_Info_UEnum_EMicroTransactionResult.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMicroTransactionResult>()
	{
		return EMicroTransactionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enumerators[] = {
		{ "MTR_Succeeded", (int64)MTR_Succeeded },
		{ "MTR_Failed", (int64)MTR_Failed },
		{ "MTR_Canceled", (int64)MTR_Canceled },
		{ "MTR_RestoredFromServer", (int64)MTR_RestoredFromServer },
		{ "MTR_MAX", (int64)MTR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Result of a purchase. */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "MTR_Canceled.Name", "MTR_Canceled" },
		{ "MTR_Failed.Name", "MTR_Failed" },
		{ "MTR_MAX.Name", "MTR_MAX" },
		{ "MTR_RestoredFromServer.Name", "MTR_RestoredFromServer" },
		{ "MTR_Succeeded.Name", "MTR_Succeeded" },
		{ "ToolTip", "Result of a purchase." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMicroTransactionResult",
		"EMicroTransactionResult",
		Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMicroTransactionResult()
	{
		if (!Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton, Z_Construct_UEnum_Engine_EMicroTransactionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMicroTransactionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PurchaseInfo;
class UScriptStruct* FPurchaseInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchaseInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PurchaseInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PurchaseInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPurchaseInfo>()
{
	return FPurchaseInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPurchaseInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayPrice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Purchase information structure\n */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Purchase information structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchaseInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Comment", "/** Unique identifier for the purchase */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Unique identifier for the purchase" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Name displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Name displayable to the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription_MetaData[] = {
		{ "Comment", "/** Description displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Description displayable to the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice_MetaData[] = {
		{ "Comment", "/** Price displayable to the user */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "Price displayable to the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPurchaseInfo, DisplayPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewProp_DisplayPrice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchaseInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PurchaseInfo",
		sizeof(FPurchaseInfo),
		alignof(FPurchaseInfo),
		Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchaseInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchaseInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton, Z_Construct_UScriptStruct_FPurchaseInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PurchaseInfo.InnerSingleton;
	}
	void UMicroTransactionBase::StaticRegisterNativesUMicroTransactionBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMicroTransactionBase);
	UClass* Z_Construct_UClass_UMicroTransactionBase_NoRegister()
	{
		return UMicroTransactionBase::StaticClass();
	}
	struct Z_Construct_UClass_UMicroTransactionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableProducts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableProducts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableProducts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastError_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastErrorSolution_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastErrorSolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMicroTransactionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicroTransactionBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/MicroTransactionBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_Inner = { "AvailableProducts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPurchaseInfo, METADATA_PARAMS(nullptr, 0) }; // 4092680442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_MetaData[] = {
		{ "Comment", "/** The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "The list of products available to purchase, filled out by the time a MTD_PurchaseQueryComplete is fired" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts = { "AvailableProducts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicroTransactionBase, AvailableProducts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_MetaData)) }; // 4092680442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError_MetaData[] = {
		{ "Comment", "/** In case of errors, this will describe the most recent error */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "In case of errors, this will describe the most recent error" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError = { "LastError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicroTransactionBase, LastError), METADATA_PARAMS(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution_MetaData[] = {
		{ "Comment", "/** In case of errors, this will describe possible solutions (if there are any) */" },
		{ "ModuleRelativePath", "Classes/Engine/MicroTransactionBase.h" },
		{ "ToolTip", "In case of errors, this will describe possible solutions (if there are any)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution = { "LastErrorSolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMicroTransactionBase, LastErrorSolution), METADATA_PARAMS(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_AvailableProducts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMicroTransactionBase_Statics::NewProp_LastErrorSolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMicroTransactionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMicroTransactionBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMicroTransactionBase_Statics::ClassParams = {
		&UMicroTransactionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMicroTransactionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMicroTransactionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMicroTransactionBase()
	{
		if (!Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton, Z_Construct_UClass_UMicroTransactionBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMicroTransactionBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMicroTransactionBase>()
	{
		return UMicroTransactionBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMicroTransactionBase);
	UMicroTransactionBase::~UMicroTransactionBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::EnumInfo[] = {
		{ EMicroTransactionDelegate_StaticEnum, TEXT("EMicroTransactionDelegate"), &Z_Registration_Info_UEnum_EMicroTransactionDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 356575654U) },
		{ EMicroTransactionResult_StaticEnum, TEXT("EMicroTransactionResult"), &Z_Registration_Info_UEnum_EMicroTransactionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3898776862U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ScriptStructInfo[] = {
		{ FPurchaseInfo::StaticStruct, Z_Construct_UScriptStruct_FPurchaseInfo_Statics::NewStructOps, TEXT("PurchaseInfo"), &Z_Registration_Info_UScriptStruct_PurchaseInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPurchaseInfo), 4092680442U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMicroTransactionBase, UMicroTransactionBase::StaticClass, TEXT("UMicroTransactionBase"), &Z_Registration_Info_UClass_UMicroTransactionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMicroTransactionBase), 1667271160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_383999508(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MicroTransactionBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
