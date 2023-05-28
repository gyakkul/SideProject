// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnalyticsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsBlueprintLibrary() {}
// Cross Module References
	ANALYTICSBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnalyticsBlueprintLibrary();
	ANALYTICSBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnalyticsBlueprintLibrary_NoRegister();
	ANALYTICSBLUEPRINTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAnalyticsEventAttr();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnalyticsBlueprintLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnalyticsEventAttr;
class UScriptStruct* FAnalyticsEventAttr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalyticsEventAttr, (UObject*)Z_Construct_UPackage__Script_AnalyticsBlueprintLibrary(), TEXT("AnalyticsEventAttr"));
	}
	return Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.OuterSingleton;
}
template<> ANALYTICSBLUEPRINTLIBRARY_API UScriptStruct* StaticStruct<FAnalyticsEventAttr>()
{
	return FAnalyticsEventAttr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Blueprint accessible version of the analytics event struct */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Blueprint accessible version of the analytics event struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalyticsEventAttr>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Analytics" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnalyticsEventAttr, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Analytics" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnalyticsEventAttr, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnalyticsBlueprintLibrary,
		nullptr,
		&NewStructOps,
		"AnalyticsEventAttr",
		sizeof(FAnalyticsEventAttr),
		alignof(FAnalyticsEventAttr),
		Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnalyticsEventAttr()
	{
		if (!Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.InnerSingleton, Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnalyticsEventAttr.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProgressType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProgressName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordProgress(Z_Param_ProgressType,Z_Param_ProgressName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordProgressWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProgressType);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProgressName);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordProgressWithAttributes(Z_Param_ProgressType,Z_Param_ProgressName,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordProgressWithFullHierarchyAndAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProgressType);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProgressNames);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordProgressWithFullHierarchyAndAttributes(Z_Param_ProgressType,Z_Param_Out_ProgressNames,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordError(Z_Param_Error);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordErrorWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Error);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordErrorWithAttributes(Z_Param_Error,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetBuildInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BuildInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetBuildInfo(Z_Param_BuildInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetGender)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetGender(Z_Param_Gender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetAge)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Age);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetAge(Z_Param_Age);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetUserId(Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execGetUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAnalyticsBlueprintLibrary::GetUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execSetSessionId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::SetSessionId(Z_Param_SessionId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execGetSessionId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAnalyticsBlueprintLibrary::GetSessionId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execMakeEventAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnalyticsEventAttr*)Z_Param__Result=UAnalyticsBlueprintLibrary::MakeEventAttribute(Z_Param_AttributeName,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordCurrencyGivenWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameCurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameCurrencyAmount);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordCurrencyGivenWithAttributes(Z_Param_GameCurrencyType,Z_Param_GameCurrencyAmount,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordCurrencyGiven)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameCurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameCurrencyAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordCurrencyGiven(Z_Param_GameCurrencyType,Z_Param_GameCurrencyAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordCurrencyPurchase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameCurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameCurrencyAmount);
		P_GET_PROPERTY(FStrProperty,Z_Param_RealCurrencyType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RealMoneyCost);
		P_GET_PROPERTY(FStrProperty,Z_Param_PaymentProvider);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordCurrencyPurchase(Z_Param_GameCurrencyType,Z_Param_GameCurrencyAmount,Z_Param_RealCurrencyType,Z_Param_RealMoneyCost,Z_Param_PaymentProvider);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordSimpleCurrencyPurchaseWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameCurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameCurrencyAmount);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchaseWithAttributes(Z_Param_GameCurrencyType,Z_Param_GameCurrencyAmount,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordSimpleCurrencyPurchase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GameCurrencyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameCurrencyAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordSimpleCurrencyPurchase(Z_Param_GameCurrencyType,Z_Param_GameCurrencyAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordSimpleItemPurchaseWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemQuantity);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordSimpleItemPurchaseWithAttributes(Z_Param_ItemId,Z_Param_ItemQuantity,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordSimpleItemPurchase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordSimpleItemPurchase(Z_Param_ItemId,Z_Param_ItemQuantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordItemPurchase)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Currency);
		P_GET_PROPERTY(FIntProperty,Z_Param_PerItemCost);
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordItemPurchase(Z_Param_ItemId,Z_Param_Currency,Z_Param_PerItemCost,Z_Param_ItemQuantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordEventWithAttributes)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordEventWithAttributes(Z_Param_EventName,Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordEventWithAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordEventWithAttribute(Z_Param_EventName,Z_Param_AttributeName,Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execRecordEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::RecordEvent(Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execFlushEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::FlushEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnalyticsBlueprintLibrary::EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execStartSessionWithAttributes)
	{
		P_GET_TARRAY_REF(FAnalyticsEventAttr,Z_Param_Out_Attributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnalyticsBlueprintLibrary::StartSessionWithAttributes(Z_Param_Out_Attributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnalyticsBlueprintLibrary::execStartSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnalyticsBlueprintLibrary::StartSession();
		P_NATIVE_END;
	}
	void UAnalyticsBlueprintLibrary::StaticRegisterNativesUAnalyticsBlueprintLibrary()
	{
		UClass* Class = UAnalyticsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSession", &UAnalyticsBlueprintLibrary::execEndSession },
			{ "FlushEvents", &UAnalyticsBlueprintLibrary::execFlushEvents },
			{ "GetSessionId", &UAnalyticsBlueprintLibrary::execGetSessionId },
			{ "GetUserId", &UAnalyticsBlueprintLibrary::execGetUserId },
			{ "MakeEventAttribute", &UAnalyticsBlueprintLibrary::execMakeEventAttribute },
			{ "RecordCurrencyGiven", &UAnalyticsBlueprintLibrary::execRecordCurrencyGiven },
			{ "RecordCurrencyGivenWithAttributes", &UAnalyticsBlueprintLibrary::execRecordCurrencyGivenWithAttributes },
			{ "RecordCurrencyPurchase", &UAnalyticsBlueprintLibrary::execRecordCurrencyPurchase },
			{ "RecordError", &UAnalyticsBlueprintLibrary::execRecordError },
			{ "RecordErrorWithAttributes", &UAnalyticsBlueprintLibrary::execRecordErrorWithAttributes },
			{ "RecordEvent", &UAnalyticsBlueprintLibrary::execRecordEvent },
			{ "RecordEventWithAttribute", &UAnalyticsBlueprintLibrary::execRecordEventWithAttribute },
			{ "RecordEventWithAttributes", &UAnalyticsBlueprintLibrary::execRecordEventWithAttributes },
			{ "RecordItemPurchase", &UAnalyticsBlueprintLibrary::execRecordItemPurchase },
			{ "RecordProgress", &UAnalyticsBlueprintLibrary::execRecordProgress },
			{ "RecordProgressWithAttributes", &UAnalyticsBlueprintLibrary::execRecordProgressWithAttributes },
			{ "RecordProgressWithFullHierarchyAndAttributes", &UAnalyticsBlueprintLibrary::execRecordProgressWithFullHierarchyAndAttributes },
			{ "RecordSimpleCurrencyPurchase", &UAnalyticsBlueprintLibrary::execRecordSimpleCurrencyPurchase },
			{ "RecordSimpleCurrencyPurchaseWithAttributes", &UAnalyticsBlueprintLibrary::execRecordSimpleCurrencyPurchaseWithAttributes },
			{ "RecordSimpleItemPurchase", &UAnalyticsBlueprintLibrary::execRecordSimpleItemPurchase },
			{ "RecordSimpleItemPurchaseWithAttributes", &UAnalyticsBlueprintLibrary::execRecordSimpleItemPurchaseWithAttributes },
			{ "SetAge", &UAnalyticsBlueprintLibrary::execSetAge },
			{ "SetBuildInfo", &UAnalyticsBlueprintLibrary::execSetBuildInfo },
			{ "SetGender", &UAnalyticsBlueprintLibrary::execSetGender },
			{ "SetLocation", &UAnalyticsBlueprintLibrary::execSetLocation },
			{ "SetSessionId", &UAnalyticsBlueprintLibrary::execSetSessionId },
			{ "SetUserId", &UAnalyticsBlueprintLibrary::execSetUserId },
			{ "StartSession", &UAnalyticsBlueprintLibrary::execStartSession },
			{ "StartSessionWithAttributes", &UAnalyticsBlueprintLibrary::execStartSessionWithAttributes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Ends an analytics session */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Ends an analytics session" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "EndSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Requests that any cached events be sent immediately */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Requests that any cached events be sent immediately" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "FlushEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics
	{
		struct AnalyticsBlueprintLibrary_eventGetSessionId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventGetSessionId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Gets the current session id from the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Gets the current session id from the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "GetSessionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::AnalyticsBlueprintLibrary_eventGetSessionId_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics
	{
		struct AnalyticsBlueprintLibrary_eventGetUserId_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventGetUserId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Gets the current user id from the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Gets the current user id from the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "GetUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::AnalyticsBlueprintLibrary_eventGetUserId_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics
	{
		struct AnalyticsBlueprintLibrary_eventMakeEventAttribute_Parms
		{
			FString AttributeName;
			FString AttributeValue;
			FAnalyticsEventAttr ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventMakeEventAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventMakeEventAttribute_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventMakeEventAttribute_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Builds a struct from the attribute name and value */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Builds a struct from the attribute name and value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "MakeEventAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::AnalyticsBlueprintLibrary_eventMakeEventAttribute_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordCurrencyGiven_Parms
		{
			FString GameCurrencyType;
			int32 GameCurrencyAmount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCurrencyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameCurrencyAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyType = { "GameCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyGiven_Parms, GameCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyAmount = { "GameCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyGiven_Parms, GameCurrencyAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::NewProp_GameCurrencyAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game currency was granted by the game with no real-world money being involved */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game currency was granted by the game with no real-world money being involved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordCurrencyGiven", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::AnalyticsBlueprintLibrary_eventRecordCurrencyGiven_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordCurrencyGivenWithAttributes_Parms
		{
			FString GameCurrencyType;
			int32 GameCurrencyAmount;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCurrencyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameCurrencyAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyType = { "GameCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyGivenWithAttributes_Parms, GameCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyAmount = { "GameCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyGivenWithAttributes_Parms, GameCurrencyAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyGivenWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_GameCurrencyAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game currency was granted by the game with no real-world money being involved */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game currency was granted by the game with no real-world money being involved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordCurrencyGivenWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordCurrencyGivenWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms
		{
			FString GameCurrencyType;
			int32 GameCurrencyAmount;
			FString RealCurrencyType;
			float RealMoneyCost;
			FString PaymentProvider;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCurrencyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameCurrencyAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RealCurrencyType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RealMoneyCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaymentProvider_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PaymentProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyType = { "GameCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms, GameCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyAmount = { "GameCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms, GameCurrencyAmount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealCurrencyType = { "RealCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms, RealCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealCurrencyType_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealMoneyCost = { "RealMoneyCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms, RealMoneyCost), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_PaymentProvider_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_PaymentProvider = { "PaymentProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms, PaymentProvider), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_PaymentProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_PaymentProvider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_GameCurrencyAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_RealMoneyCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::NewProp_PaymentProvider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game currency was purchased using real-world money */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game currency was purchased using real-world money" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordCurrencyPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::AnalyticsBlueprintLibrary_eventRecordCurrencyPurchase_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordError_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordError_Parms, Error), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::NewProp_Error_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an error event has happened */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an error event has happened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::AnalyticsBlueprintLibrary_eventRecordError_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordErrorWithAttributes_Parms
		{
			FString Error;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordErrorWithAttributes_Parms, Error), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Error_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordErrorWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an error event has happened with attributes */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an error event has happened with attributes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordErrorWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordErrorWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordEvent_Parms
		{
			FString EventName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEvent_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an event has happened by name without any attributes (an event counter) */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an event has happened by name without any attributes (an event counter)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::AnalyticsBlueprintLibrary_eventRecordEvent_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordEventWithAttribute_Parms
		{
			FString EventName;
			FString AttributeName;
			FString AttributeValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEventWithAttribute_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEventWithAttribute_Parms, AttributeName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEventWithAttribute_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::NewProp_AttributeValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an event has happened by name with a single attribute */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an event has happened by name with a single attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordEventWithAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::AnalyticsBlueprintLibrary_eventRecordEventWithAttribute_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordEventWithAttributes_Parms
		{
			FString EventName;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEventWithAttributes_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_EventName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordEventWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an event has happened by name with a single attribute */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an event has happened by name with a single attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordEventWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordEventWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms
		{
			FString ItemId;
			FString Currency;
			int32 PerItemCost;
			int32 ItemQuantity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerItemCost;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_Currency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_Currency_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_PerItemCost = { "PerItemCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms, PerItemCost), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms, ItemQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_Currency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_PerItemCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::NewProp_ItemQuantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game item was purchased using the specified in-game currency */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game item was purchased using the specified in-game currency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordItemPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::AnalyticsBlueprintLibrary_eventRecordItemPurchase_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordProgress_Parms
		{
			FString ProgressType;
			FString ProgressName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressType = { "ProgressType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgress_Parms, ProgressType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressName = { "ProgressName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgress_Parms, ProgressName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::NewProp_ProgressName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records a user progress event has happened */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records a user progress event has happened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::AnalyticsBlueprintLibrary_eventRecordProgress_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordProgressWithAttributes_Parms
		{
			FString ProgressType;
			FString ProgressName;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressType = { "ProgressType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithAttributes_Parms, ProgressType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressName = { "ProgressName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithAttributes_Parms, ProgressName), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_ProgressName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records a user progress event has happened with attributes */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records a user progress event has happened with attributes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordProgressWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordProgressWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordProgressWithFullHierarchyAndAttributes_Parms
		{
			FString ProgressType;
			TArray<FString> ProgressNames;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProgressNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProgressNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressType = { "ProgressType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithFullHierarchyAndAttributes_Parms, ProgressType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressType_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames_Inner = { "ProgressNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames = { "ProgressNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithFullHierarchyAndAttributes_Parms, ProgressNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordProgressWithFullHierarchyAndAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_ProgressNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records a user progress event has happened with a full list of progress hierarchy names and with attributes */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records a user progress event has happened with a full list of progress hierarchy names and with attributes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordProgressWithFullHierarchyAndAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordProgressWithFullHierarchyAndAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchase_Parms
		{
			FString GameCurrencyType;
			int32 GameCurrencyAmount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCurrencyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameCurrencyAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyType = { "GameCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchase_Parms, GameCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyAmount = { "GameCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchase_Parms, GameCurrencyAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::NewProp_GameCurrencyAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game currency was purchased using real-world money */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game currency was purchased using real-world money" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordSimpleCurrencyPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchase_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchaseWithAttributes_Parms
		{
			FString GameCurrencyType;
			int32 GameCurrencyAmount;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameCurrencyType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GameCurrencyType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameCurrencyAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyType = { "GameCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchaseWithAttributes_Parms, GameCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyType_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyAmount = { "GameCurrencyAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchaseWithAttributes_Parms, GameCurrencyAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchaseWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_GameCurrencyAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game currency was purchased using real-world money */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game currency was purchased using real-world money" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordSimpleCurrencyPurchaseWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordSimpleCurrencyPurchaseWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchase_Parms
		{
			FString ItemId;
			int32 ItemQuantity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchase_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchase_Parms, ItemQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::NewProp_ItemQuantity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game item was purchased */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game item was purchased" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordSimpleItemPurchase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchase_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchaseWithAttributes_Parms
		{
			FString ItemId;
			int32 ItemQuantity;
			TArray<FAnalyticsEventAttr> Attributes;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ItemQuantity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchaseWithAttributes_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemId_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemQuantity = { "ItemQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchaseWithAttributes_Parms, ItemQuantity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchaseWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_ItemQuantity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::NewProp_Attributes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Records an in-game item was purchased with attributes */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Records an in-game item was purchased with attributes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "RecordSimpleItemPurchaseWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::AnalyticsBlueprintLibrary_eventRecordSimpleItemPurchaseWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetAge_Parms
		{
			int32 Age;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Age;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::NewProp_Age = { "Age", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetAge_Parms, Age), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::NewProp_Age,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the user's age (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the user's age (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetAge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::AnalyticsBlueprintLibrary_eventSetAge_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetBuildInfo_Parms
		{
			FString BuildInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::NewProp_BuildInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::NewProp_BuildInfo = { "BuildInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetBuildInfo_Parms, BuildInfo), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::NewProp_BuildInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::NewProp_BuildInfo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::NewProp_BuildInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the game's build info (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the game's build info (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetBuildInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::AnalyticsBlueprintLibrary_eventSetBuildInfo_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetGender_Parms
		{
			FString Gender;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetGender_Parms, Gender), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::NewProp_Gender_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::NewProp_Gender,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the user's gender (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the user's gender (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetGender", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::AnalyticsBlueprintLibrary_eventSetGender_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetLocation_Parms
		{
			FString Location;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetLocation_Parms, Location), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the user's location (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the user's location (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::AnalyticsBlueprintLibrary_eventSetLocation_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetSessionId_Parms
		{
			FString SessionId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetSessionId_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::NewProp_SessionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::NewProp_SessionId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the session id (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the session id (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetSessionId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::AnalyticsBlueprintLibrary_eventSetSessionId_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics
	{
		struct AnalyticsBlueprintLibrary_eventSetUserId_Parms
		{
			FString UserId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventSetUserId_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::NewProp_UserId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Sets the user id (if supported) on the analytics provider */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Sets the user id (if supported) on the analytics provider" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "SetUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::AnalyticsBlueprintLibrary_eventSetUserId_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics
	{
		struct AnalyticsBlueprintLibrary_eventStartSession_Parms
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
	void Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnalyticsBlueprintLibrary_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnalyticsBlueprintLibrary_eventStartSession_Parms), &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Starts an analytics session without any custom attributes specified */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Starts an analytics session without any custom attributes specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "StartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::AnalyticsBlueprintLibrary_eventStartSession_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics
	{
		struct AnalyticsBlueprintLibrary_eventStartSessionWithAttributes_Parms
		{
			TArray<FAnalyticsEventAttr> Attributes;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnalyticsEventAttr, METADATA_PARAMS(nullptr, 0) }; // 4211131233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnalyticsBlueprintLibrary_eventStartSessionWithAttributes_Parms, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes_MetaData)) }; // 4211131233
	void Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnalyticsBlueprintLibrary_eventStartSessionWithAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnalyticsBlueprintLibrary_eventStartSessionWithAttributes_Parms), &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics" },
		{ "Comment", "/** Starts an analytics session with custom attributes specified */" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ToolTip", "Starts an analytics session with custom attributes specified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnalyticsBlueprintLibrary, nullptr, "StartSessionWithAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::AnalyticsBlueprintLibrary_eventStartSessionWithAttributes_Parms), Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalyticsBlueprintLibrary);
	UClass* Z_Construct_UClass_UAnalyticsBlueprintLibrary_NoRegister()
	{
		return UAnalyticsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnalyticsBlueprintLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_EndSession, "EndSession" }, // 1350043374
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_FlushEvents, "FlushEvents" }, // 3258999345
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetSessionId, "GetSessionId" }, // 2855528470
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_GetUserId, "GetUserId" }, // 1587924788
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_MakeEventAttribute, "MakeEventAttribute" }, // 2487533340
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGiven, "RecordCurrencyGiven" }, // 2748962493
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes, "RecordCurrencyGivenWithAttributes" }, // 2936233944
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordCurrencyPurchase, "RecordCurrencyPurchase" }, // 1820175907
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordError, "RecordError" }, // 3409648063
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordErrorWithAttributes, "RecordErrorWithAttributes" }, // 1602626986
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEvent, "RecordEvent" }, // 2584557043
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttribute, "RecordEventWithAttribute" }, // 3809715930
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordEventWithAttributes, "RecordEventWithAttributes" }, // 2184546860
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordItemPurchase, "RecordItemPurchase" }, // 1159589541
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgress, "RecordProgress" }, // 1493821809
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithAttributes, "RecordProgressWithAttributes" }, // 2732415049
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes, "RecordProgressWithFullHierarchyAndAttributes" }, // 3058852510
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase, "RecordSimpleCurrencyPurchase" }, // 3048656342
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes, "RecordSimpleCurrencyPurchaseWithAttributes" }, // 912449962
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase, "RecordSimpleItemPurchase" }, // 4203933152
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes, "RecordSimpleItemPurchaseWithAttributes" }, // 719896205
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetAge, "SetAge" }, // 2804320527
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetBuildInfo, "SetBuildInfo" }, // 431644870
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetGender, "SetGender" }, // 203360987
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetLocation, "SetLocation" }, // 965939783
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetSessionId, "SetSessionId" }, // 2639454620
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_SetUserId, "SetUserId" }, // 3715507165
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSession, "StartSession" }, // 3729227728
		{ &Z_Construct_UFunction_UAnalyticsBlueprintLibrary_StartSessionWithAttributes, "StartSessionWithAttributes" }, // 3698624058
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnalyticsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/AnalyticsBlueprintLibrary.h" },
		{ "ScriptName", "AnalyticsLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::ClassParams = {
		&UAnalyticsBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnalyticsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalyticsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAnalyticsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalyticsBlueprintLibrary.OuterSingleton;
	}
	template<> ANALYTICSBLUEPRINTLIBRARY_API UClass* StaticClass<UAnalyticsBlueprintLibrary>()
	{
		return UAnalyticsBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsBlueprintLibrary);
	UAnalyticsBlueprintLibrary::~UAnalyticsBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FAnalyticsEventAttr::StaticStruct, Z_Construct_UScriptStruct_FAnalyticsEventAttr_Statics::NewStructOps, TEXT("AnalyticsEventAttr"), &Z_Registration_Info_UScriptStruct_AnalyticsEventAttr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnalyticsEventAttr), 4211131233U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalyticsBlueprintLibrary, UAnalyticsBlueprintLibrary::StaticClass, TEXT("UAnalyticsBlueprintLibrary"), &Z_Registration_Info_UClass_UAnalyticsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalyticsBlueprintLibrary), 3184340554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_2391274014(TEXT("/Script/AnalyticsBlueprintLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsBlueprintLibrary_Source_AnalyticsBlueprintLibrary_Classes_AnalyticsBlueprintLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
