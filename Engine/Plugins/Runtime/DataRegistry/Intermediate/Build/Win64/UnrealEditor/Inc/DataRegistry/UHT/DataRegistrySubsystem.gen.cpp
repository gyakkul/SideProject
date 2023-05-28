// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistrySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "DataRegistryId.h"
#include "DataRegistryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistrySubsystem() {}
// Cross Module References
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySubsystem();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySubsystem_NoRegister();
	DATAREGISTRY_API UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult();
	DATAREGISTRY_API UFunction* Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryId();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryLookup();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryType();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult;
	static UEnum* EDataRegistrySubsystemGetItemResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("EDataRegistrySubsystemGetItemResult"));
		}
		return Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.OuterSingleton;
	}
	template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistrySubsystemGetItemResult>()
	{
		return EDataRegistrySubsystemGetItemResult_StaticEnum();
	}
	struct Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enumerators[] = {
		{ "EDataRegistrySubsystemGetItemResult::Found", (int64)EDataRegistrySubsystemGetItemResult::Found },
		{ "EDataRegistrySubsystemGetItemResult::NotFound", (int64)EDataRegistrySubsystemGetItemResult::NotFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum used to indicate success or failure of EvaluateCurveTableRow. */" },
		{ "Found.Comment", "/** Found the row successfully. */" },
		{ "Found.Name", "EDataRegistrySubsystemGetItemResult::Found" },
		{ "Found.ToolTip", "Found the row successfully." },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "NotFound.Comment", "/** Failed to find the row. */" },
		{ "NotFound.Name", "EDataRegistrySubsystemGetItemResult::NotFound" },
		{ "NotFound.ToolTip", "Failed to find the row." },
		{ "ToolTip", "Enum used to indicate success or failure of EvaluateCurveTableRow." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		"EDataRegistrySubsystemGetItemResult",
		"EDataRegistrySubsystemGetItemResult",
		Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult()
	{
		if (!Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.InnerSingleton, Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execNotEqual_DataRegistryId)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_A);
		P_GET_STRUCT(FDataRegistryId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::NotEqual_DataRegistryId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execEqualEqual_DataRegistryId)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_A);
		P_GET_STRUCT(FDataRegistryId,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::EqualEqual_DataRegistryId(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execConv_DataRegistryIdToString)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_DataRegistryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDataRegistrySubsystem::Conv_DataRegistryIdToString(Z_Param_DataRegistryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execIsValidDataRegistryId)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_DataRegistryId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::IsValidDataRegistryId(Z_Param_DataRegistryId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execNotEqual_DataRegistryType)
	{
		P_GET_STRUCT(FDataRegistryType,Z_Param_A);
		P_GET_STRUCT(FDataRegistryType,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::NotEqual_DataRegistryType(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execEqualEqual_DataRegistryType)
	{
		P_GET_STRUCT(FDataRegistryType,Z_Param_A);
		P_GET_STRUCT(FDataRegistryType,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::EqualEqual_DataRegistryType(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execConv_DataRegistryTypeToString)
	{
		P_GET_STRUCT(FDataRegistryType,Z_Param_DataRegistryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDataRegistrySubsystem::Conv_DataRegistryTypeToString(Z_Param_DataRegistryType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execIsValidDataRegistryType)
	{
		P_GET_STRUCT(FDataRegistryType,Z_Param_DataRegistryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::IsValidDataRegistryType(Z_Param_DataRegistryType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execEvaluateDataRegistryCurve)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_ItemId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InputValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_ENUM_REF(EDataRegistrySubsystemGetItemResult,Z_Param_Out_OutResult);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataRegistrySubsystem::EvaluateDataRegistryCurve(Z_Param_ItemId,Z_Param_InputValue,Z_Param_DefaultValue,(EDataRegistrySubsystemGetItemResult&)(Z_Param_Out_OutResult),Z_Param_Out_OutValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataRegistrySubsystem::execAcquireItemBP)
	{
		P_GET_STRUCT(FDataRegistryId,Z_Param_ItemId);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_AcquireCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDataRegistrySubsystem::AcquireItemBP(Z_Param_ItemId,FDataRegistryItemAcquiredBPCallback(Z_Param_AcquireCallback));
		P_NATIVE_END;
	}
	void UDataRegistrySubsystem::StaticRegisterNativesUDataRegistrySubsystem()
	{
		UClass* Class = UDataRegistrySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireItemBP", &UDataRegistrySubsystem::execAcquireItemBP },
			{ "Conv_DataRegistryIdToString", &UDataRegistrySubsystem::execConv_DataRegistryIdToString },
			{ "Conv_DataRegistryTypeToString", &UDataRegistrySubsystem::execConv_DataRegistryTypeToString },
			{ "EqualEqual_DataRegistryId", &UDataRegistrySubsystem::execEqualEqual_DataRegistryId },
			{ "EqualEqual_DataRegistryType", &UDataRegistrySubsystem::execEqualEqual_DataRegistryType },
			{ "EvaluateDataRegistryCurve", &UDataRegistrySubsystem::execEvaluateDataRegistryCurve },
			{ "FindCachedItemBP", &UDataRegistrySubsystem::execFindCachedItemBP },
			{ "GetCachedItemBP", &UDataRegistrySubsystem::execGetCachedItemBP },
			{ "GetCachedItemFromLookupBP", &UDataRegistrySubsystem::execGetCachedItemFromLookupBP },
			{ "IsValidDataRegistryId", &UDataRegistrySubsystem::execIsValidDataRegistryId },
			{ "IsValidDataRegistryType", &UDataRegistrySubsystem::execIsValidDataRegistryType },
			{ "NotEqual_DataRegistryId", &UDataRegistrySubsystem::execNotEqual_DataRegistryId },
			{ "NotEqual_DataRegistryType", &UDataRegistrySubsystem::execNotEqual_DataRegistryType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics
	{
		struct DataRegistrySubsystem_eventAcquireItemBP_Parms
		{
			FDataRegistryId ItemId;
			FScriptDelegate AcquireCallback;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_AcquireCallback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventAcquireItemBP_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_AcquireCallback = { "AcquireCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventAcquireItemBP_Parms, AcquireCallback), Z_Construct_UDelegateFunction_DataRegistry_DataRegistryItemAcquiredBPCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 298596253
	void Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventAcquireItemBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventAcquireItemBP_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_AcquireCallback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/**\n\x09 * Starts an asynchronous acquire of a data registry item that may not yet be cached.\n\x09 *\n\x09 * @param ItemID\x09\x09\x09Item identifier to lookup in cache\n\x09 * @param AcquireCallback\x09""Delegate that will be called after acquire succeeds or failed\n\x09 * @returns\x09\x09\x09\x09\x09Returns true if request was started, false on unrecoverable error\n\x09 */" },
		{ "DisplayName", "Acquire Data Registry Item (experimental)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ToolTip", "Starts an asynchronous acquire of a data registry item that may not yet be cached.\n\n@param ItemID                        Item identifier to lookup in cache\n@param AcquireCallback       Delegate that will be called after acquire succeeds or failed\n@returns                                     Returns true if request was started, false on unrecoverable error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "AcquireItemBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::DataRegistrySubsystem_eventAcquireItemBP_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics
	{
		struct DataRegistrySubsystem_eventConv_DataRegistryIdToString_Parms
		{
			FDataRegistryId DataRegistryId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataRegistryId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::NewProp_DataRegistryId = { "DataRegistryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventConv_DataRegistryIdToString_Parms, DataRegistryId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventConv_DataRegistryIdToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::NewProp_DataRegistryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Converts a Data Registry Id to a string. The other direction is not provided because it cannot be validated */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (DataRegistryId)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptMethod", "ToString" },
		{ "ToolTip", "Converts a Data Registry Id to a string. The other direction is not provided because it cannot be validated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "Conv_DataRegistryIdToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::DataRegistrySubsystem_eventConv_DataRegistryIdToString_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics
	{
		struct DataRegistrySubsystem_eventConv_DataRegistryTypeToString_Parms
		{
			FDataRegistryType DataRegistryType;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataRegistryType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::NewProp_DataRegistryType = { "DataRegistryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventConv_DataRegistryTypeToString_Parms, DataRegistryType), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventConv_DataRegistryTypeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::NewProp_DataRegistryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Converts a Data Registry Type to a string. The other direction is not provided because it cannot be validated */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (DataRegistryType)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptMethod", "ToString" },
		{ "ToolTip", "Converts a Data Registry Type to a string. The other direction is not provided because it cannot be validated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "Conv_DataRegistryTypeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::DataRegistrySubsystem_eventConv_DataRegistryTypeToString_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics
	{
		struct DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms
		{
			FDataRegistryId A;
			FDataRegistryId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms, A), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms, B), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	void Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (DataRegistryId)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "EqualEqual_DataRegistryId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::DataRegistrySubsystem_eventEqualEqual_DataRegistryId_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics
	{
		struct DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms
		{
			FDataRegistryType A;
			FDataRegistryType B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms, A), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms, B), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	void Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (DataRegistryType)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptOperator", "==" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "EqualEqual_DataRegistryType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::DataRegistrySubsystem_eventEqualEqual_DataRegistryType_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics
	{
		struct DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms
		{
			FDataRegistryId ItemId;
			float InputValue;
			float DefaultValue;
			EDataRegistrySubsystemGetItemResult OutResult;
			float OutValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms, InputValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms, OutResult), Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult, METADATA_PARAMS(nullptr, 0) }; // 1239914552
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms, OutValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::NewProp_OutValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/**\n\x09 * Attempts to evaluate a curve stored in a DataRegistry cache using a specific input value\n\x09 *\n\x09 * @param ItemID\x09\x09Item identifier to lookup in cache\n\x09 * @param InputValue\x09Time/level/parameter input value used to evaluate curve at certain position\n\x09 * @param DefaultValue\x09Value to use if no curve found or input is outside acceptable range\n\x09 * @param OutValue\x09\x09Result will be replaced with evaluated value, or default if that fails\n\x09 */" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ToolTip", "Attempts to evaluate a curve stored in a DataRegistry cache using a specific input value\n\n@param ItemID                Item identifier to lookup in cache\n@param InputValue    Time/level/parameter input value used to evaluate curve at certain position\n@param DefaultValue  Value to use if no curve found or input is outside acceptable range\n@param OutValue              Result will be replaced with evaluated value, or default if that fails" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "EvaluateDataRegistryCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::DataRegistrySubsystem_eventEvaluateDataRegistryCurve_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics
	{
		struct DataRegistrySubsystem_eventFindCachedItemBP_Parms
		{
			FDataRegistryId ItemId;
			EDataRegistrySubsystemGetItemResult OutResult;
			FTableRowBase OutItem;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventFindCachedItemBP_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventFindCachedItemBP_Parms, OutResult), Z_Construct_UEnum_DataRegistry_EDataRegistrySubsystemGetItemResult, METADATA_PARAMS(nullptr, 0) }; // 1239914552
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutItem = { "OutItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventFindCachedItemBP_Parms, OutItem), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) }; // 3056277985
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::NewProp_OutItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/**\n\x09 * Attempts to get cached structure data stored in a DataRegistry, modifying OutItem if the item is available\n\x09 * (EXPERIMENTAL) this version has an output param and enum result\n\x09 *\n\x09 * @param ItemID\x09\x09Item identifier to lookup in cache\n\x09 * @param OutItem\x09\x09This must be the same type as the registry, if the item is found this will be filled in with the found data\n\x09 * @returns\x09\x09\x09\x09Returns true if the item was found and OutItem was modified\n\x09 */" },
		{ "CustomStructureParam", "OutItem" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Find Data Registry Item (experimental)" },
		{ "ExpandEnumAsExecs", "OutResult" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ToolTip", "Attempts to get cached structure data stored in a DataRegistry, modifying OutItem if the item is available\n(EXPERIMENTAL) this version has an output param and enum result\n\n@param ItemID                Item identifier to lookup in cache\n@param OutItem               This must be the same type as the registry, if the item is found this will be filled in with the found data\n@returns                             Returns true if the item was found and OutItem was modified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "FindCachedItemBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::DataRegistrySubsystem_eventFindCachedItemBP_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics
	{
		struct DataRegistrySubsystem_eventGetCachedItemBP_Parms
		{
			FDataRegistryId ItemId;
			FTableRowBase OutItem;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventGetCachedItemBP_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_OutItem = { "OutItem", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventGetCachedItemBP_Parms, OutItem), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) }; // 3056277985
	void Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventGetCachedItemBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventGetCachedItemBP_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_OutItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/**\n\x09 * Attempts to get cached structure data stored in a DataRegistry, modifying OutItem if the item is available\n\x09 * (EXPERIMENTAL) this version has an input param and simple bool return\n\x09 *\n\x09 * @param ItemID\x09\x09Item identifier to lookup in cache\n\x09 * @param OutItem\x09\x09This must be the same type as the registry, if the item is found this will be filled in with the found data\n\x09 * @returns\x09\x09\x09\x09Returns true if the item was found and OutItem was modified\n\x09 */" },
		{ "CustomStructureParam", "OutItem" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Get Data Registry Item (experimental)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ToolTip", "Attempts to get cached structure data stored in a DataRegistry, modifying OutItem if the item is available\n(EXPERIMENTAL) this version has an input param and simple bool return\n\n@param ItemID                Item identifier to lookup in cache\n@param OutItem               This must be the same type as the registry, if the item is found this will be filled in with the found data\n@returns                             Returns true if the item was found and OutItem was modified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "GetCachedItemBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::DataRegistrySubsystem_eventGetCachedItemBP_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics
	{
		struct DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms
		{
			FDataRegistryId ItemId;
			FDataRegistryLookup ResolvedLookup;
			FTableRowBase OutItem;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedLookup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedLookup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutItem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms, ItemId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ResolvedLookup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ResolvedLookup = { "ResolvedLookup", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms, ResolvedLookup), Z_Construct_UScriptStruct_FDataRegistryLookup, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ResolvedLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ResolvedLookup_MetaData)) }; // 3506840247
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_OutItem = { "OutItem", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms, OutItem), Z_Construct_UScriptStruct_FTableRowBase, METADATA_PARAMS(nullptr, 0) }; // 3056277985
	void Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ResolvedLookup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_OutItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/**\n\x09 * Attempts to get structure data stored in a DataRegistry cache after an async acquire, modifying OutItem if the item is available\n\x09 *\n\x09 * @param ItemID\x09\x09\x09Item identifier to lookup in cache\n\x09 * @param ResolvedLookup\x09Resolved identifier returned by acquire function\n\x09 * @param OutItem\x09\x09\x09This must be the same type as the registry, if the item is found this will be filled in with the found data\n\x09 * @returns\x09\x09\x09\x09\x09Returns true if the item was found and OutItem was modified\n\x09 */" },
		{ "CustomStructureParam", "OutItem" },
		{ "CustomThunk", "true" },
		{ "DisplayName", "Get Data Registry Item From Lookup (experimental)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ToolTip", "Attempts to get structure data stored in a DataRegistry cache after an async acquire, modifying OutItem if the item is available\n\n@param ItemID                        Item identifier to lookup in cache\n@param ResolvedLookup        Resolved identifier returned by acquire function\n@param OutItem                       This must be the same type as the registry, if the item is found this will be filled in with the found data\n@returns                                     Returns true if the item was found and OutItem was modified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "GetCachedItemFromLookupBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::DataRegistrySubsystem_eventGetCachedItemFromLookupBP_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics
	{
		struct DataRegistrySubsystem_eventIsValidDataRegistryId_Parms
		{
			FDataRegistryId DataRegistryId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataRegistryId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_DataRegistryId = { "DataRegistryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventIsValidDataRegistryId_Parms, DataRegistryId), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	void Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventIsValidDataRegistryId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventIsValidDataRegistryId_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_DataRegistryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "AssetManager" },
		{ "Comment", "/** Returns true if this is a non-empty item identifier, does not check if it is currently registered */" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptMethod", "IsValid" },
		{ "ScriptOperator", "bool" },
		{ "ToolTip", "Returns true if this is a non-empty item identifier, does not check if it is currently registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "IsValidDataRegistryId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::DataRegistrySubsystem_eventIsValidDataRegistryId_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics
	{
		struct DataRegistrySubsystem_eventIsValidDataRegistryType_Parms
		{
			FDataRegistryType DataRegistryType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataRegistryType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_DataRegistryType = { "DataRegistryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventIsValidDataRegistryType_Parms, DataRegistryType), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	void Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventIsValidDataRegistryType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventIsValidDataRegistryType_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_DataRegistryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Returns true if this is a non-empty type, does not check if it is currently registered */" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptMethod", "IsValid" },
		{ "ScriptOperator", "bool" },
		{ "ToolTip", "Returns true if this is a non-empty type, does not check if it is currently registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "IsValidDataRegistryType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::DataRegistrySubsystem_eventIsValidDataRegistryType_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics
	{
		struct DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms
		{
			FDataRegistryId A;
			FDataRegistryId B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms, A), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms, B), Z_Construct_UScriptStruct_FDataRegistryId, METADATA_PARAMS(nullptr, 0) }; // 2704397205
	void Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (DataRegistryId)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "NotEqual_DataRegistryId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::DataRegistrySubsystem_eventNotEqual_DataRegistryId_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics
	{
		struct DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms
		{
			FDataRegistryType A;
			FDataRegistryType B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms, A), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms, B), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(nullptr, 0) }; // 1634035463
	void Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms), &Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (DataRegistryType)" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "ScriptOperator", "!=" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataRegistrySubsystem, nullptr, "NotEqual_DataRegistryType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::DataRegistrySubsystem_eventNotEqual_DataRegistryType_Parms), Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistrySubsystem);
	UClass* Z_Construct_UClass_UDataRegistrySubsystem_NoRegister()
	{
		return UDataRegistrySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistrySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistrySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataRegistrySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_AcquireItemBP, "AcquireItemBP" }, // 2626512139
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryIdToString, "Conv_DataRegistryIdToString" }, // 68329127
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_Conv_DataRegistryTypeToString, "Conv_DataRegistryTypeToString" }, // 279854894
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryId, "EqualEqual_DataRegistryId" }, // 1302555211
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_EqualEqual_DataRegistryType, "EqualEqual_DataRegistryType" }, // 3827591416
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_EvaluateDataRegistryCurve, "EvaluateDataRegistryCurve" }, // 1339480830
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_FindCachedItemBP, "FindCachedItemBP" }, // 3301879251
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemBP, "GetCachedItemBP" }, // 3518073106
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_GetCachedItemFromLookupBP, "GetCachedItemFromLookupBP" }, // 192402760
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryId, "IsValidDataRegistryId" }, // 2768665288
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_IsValidDataRegistryType, "IsValidDataRegistryType" }, // 2969763088
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryId, "NotEqual_DataRegistryId" }, // 505042981
		{ &Z_Construct_UFunction_UDataRegistrySubsystem_NotEqual_DataRegistryType, "NotEqual_DataRegistryType" }, // 1076391513
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Singleton manager that provides synchronous and asynchronous access to data registries */" },
		{ "IncludePath", "DataRegistrySubsystem.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySubsystem.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Singleton manager that provides synchronous and asynchronous access to data registries" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistrySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistrySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistrySubsystem_Statics::ClassParams = {
		&UDataRegistrySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistrySubsystem()
	{
		if (!Z_Registration_Info_UClass_UDataRegistrySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistrySubsystem.OuterSingleton, Z_Construct_UClass_UDataRegistrySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistrySubsystem.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistrySubsystem>()
	{
		return UDataRegistrySubsystem::StaticClass();
	}
	UDataRegistrySubsystem::UDataRegistrySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistrySubsystem);
	UDataRegistrySubsystem::~UDataRegistrySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::EnumInfo[] = {
		{ EDataRegistrySubsystemGetItemResult_StaticEnum, TEXT("EDataRegistrySubsystemGetItemResult"), &Z_Registration_Info_UEnum_EDataRegistrySubsystemGetItemResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1239914552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistrySubsystem, UDataRegistrySubsystem::StaticClass, TEXT("UDataRegistrySubsystem"), &Z_Registration_Info_UClass_UDataRegistrySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistrySubsystem), 3658098339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_3369654476(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
