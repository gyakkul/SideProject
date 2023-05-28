// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonNumericTextBlock.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonNumericTextBlock() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonNumericTextBlock();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonNumericTextBlock_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextBlock();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_ECommonNumericType();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERoundingMode();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions;
class UScriptStruct* FCommonNumberFormattingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonNumberFormattingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonNumberFormattingOptions>()
{
	return FCommonNumberFormattingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoundingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseGrouping_MetaData[];
#endif
		static void NewProp_UseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGrouping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumIntegralDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumIntegralDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFractionalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFractionalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonNumberFormattingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "Comment", "// The rounding mode to be used when the actual value can not be precisely represented due to restrictions on the number of integral or fractional digits. See values for details.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "The rounding mode to be used when the actual value can not be precisely represented due to restrictions on the number of integral or fractional digits. See values for details." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode = { "RoundingMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode_MetaData)) }; // 2729628499
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "Comment", "// Should the numerals use group separators. IE: \"1,000,000\"\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Should the numerals use group separators. IE: \"1,000,000\"" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_SetBit(void* Obj)
	{
		((FCommonNumberFormattingOptions*)Obj)->UseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping = { "UseGrouping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonNumberFormattingOptions), &Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many integral digits should be shown at minimum? May cause digit \"padding\". IE: A minimum of 3 integral digits means 1.0 -> \"001\".\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "How many integral digits should be shown at minimum? May cause digit \"padding\". IE: A minimum of 3 integral digits means 1.0 -> \"001\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MinimumIntegralDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many integral digits should be shown at maximum? May cause rounding. IE: A maximum of 2 integral digits means 100.0 -> \"99\".\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "How many integral digits should be shown at maximum? May cause rounding. IE: A maximum of 2 integral digits means 100.0 -> \"99\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MaximumIntegralDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many fractional digits should be shown at minimum? May cause digit \"padding\". IE: A minimum of 2 fractional digits means 1.0 -> \"1.00\".\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "How many fractional digits should be shown at minimum? May cause digit \"padding\". IE: A minimum of 2 fractional digits means 1.0 -> \"1.00\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MinimumFractionalDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many fractional digits should be shown at maximum? May cause rounding. IE: HalfFromZero rounding and a maximum of 2 fractional digits means 0.009 -> \"0.01\".\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "How many fractional digits should be shown at maximum? May cause rounding. IE: HalfFromZero rounding and a maximum of 2 fractional digits means 0.009 -> \"0.01\"." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonNumberFormattingOptions, MaximumFractionalDigits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_RoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_UseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewProp_MaximumFractionalDigits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonNumberFormattingOptions",
		sizeof(FCommonNumberFormattingOptions),
		alignof(FCommonNumberFormattingOptions),
		Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonNumberFormattingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.InnerSingleton, Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonNumericType;
	static UEnum* ECommonNumericType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonNumericType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonNumericType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_ECommonNumericType, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("ECommonNumericType"));
		}
		return Z_Registration_Info_UEnum_ECommonNumericType.OuterSingleton;
	}
	template<> COMMONUI_API UEnum* StaticEnum<ECommonNumericType>()
	{
		return ECommonNumericType_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enumerators[] = {
		{ "ECommonNumericType::Number", (int64)ECommonNumericType::Number },
		{ "ECommonNumericType::Percentage", (int64)ECommonNumericType::Percentage },
		{ "ECommonNumericType::Seconds", (int64)ECommonNumericType::Seconds },
		{ "ECommonNumericType::Distance", (int64)ECommonNumericType::Distance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Distance.Name", "ECommonNumericType::Distance" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "Number.Name", "ECommonNumericType::Number" },
		{ "Percentage.Name", "ECommonNumericType::Percentage" },
		{ "Seconds.Name", "ECommonNumericType::Seconds" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		"ECommonNumericType",
		"ECommonNumericType",
		Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUI_ECommonNumericType()
	{
		if (!Z_Registration_Info_UEnum_ECommonNumericType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonNumericType.InnerSingleton, Z_Construct_UEnum_CommonUI_ECommonNumericType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonNumericType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics
	{
		struct CommonNumericTextBlock_eventOnInterpolationStarted_Parms
		{
			UCommonNumericTextBlock* NumericTextBlock;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumericTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::NewProp_NumericTextBlock = { "NumericTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnInterpolationStarted_Parms, NumericTextBlock), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::NewProp_NumericTextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "OnInterpolationStarted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::CommonNumericTextBlock_eventOnInterpolationStarted_Parms), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonNumericTextBlock::FOnInterpolationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationStarted, UCommonNumericTextBlock* NumericTextBlock)
{
	struct CommonNumericTextBlock_eventOnInterpolationStarted_Parms
	{
		UCommonNumericTextBlock* NumericTextBlock;
	};
	CommonNumericTextBlock_eventOnInterpolationStarted_Parms Parms;
	Parms.NumericTextBlock=NumericTextBlock;
	OnInterpolationStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics
	{
		struct CommonNumericTextBlock_eventOnInterpolationUpdated_Parms
		{
			UCommonNumericTextBlock* NumericTextBlock;
			float LastValue;
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumericTextBlock;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NumericTextBlock = { "NumericTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnInterpolationUpdated_Parms, NumericTextBlock), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnInterpolationUpdated_Parms, LastValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnInterpolationUpdated_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NumericTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_LastValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "OnInterpolationUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::CommonNumericTextBlock_eventOnInterpolationUpdated_Parms), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonNumericTextBlock::FOnInterpolationUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationUpdated, UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
{
	struct CommonNumericTextBlock_eventOnInterpolationUpdated_Parms
	{
		UCommonNumericTextBlock* NumericTextBlock;
		float LastValue;
		float NewValue;
	};
	CommonNumericTextBlock_eventOnInterpolationUpdated_Parms Parms;
	Parms.NumericTextBlock=NumericTextBlock;
	Parms.LastValue=LastValue;
	Parms.NewValue=NewValue;
	OnInterpolationUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics
	{
		struct CommonNumericTextBlock_eventOnOutro_Parms
		{
			UCommonNumericTextBlock* NumericTextBlock;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumericTextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::NewProp_NumericTextBlock = { "NumericTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnOutro_Parms, NumericTextBlock), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::NewProp_NumericTextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "OnOutro__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::CommonNumericTextBlock_eventOnOutro_Parms), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonNumericTextBlock::FOnOutro_DelegateWrapper(const FMulticastScriptDelegate& OnOutro, UCommonNumericTextBlock* NumericTextBlock)
{
	struct CommonNumericTextBlock_eventOnOutro_Parms
	{
		UCommonNumericTextBlock* NumericTextBlock;
	};
	CommonNumericTextBlock_eventOnOutro_Parms Parms;
	Parms.NumericTextBlock=NumericTextBlock;
	OnOutro.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics
	{
		struct CommonNumericTextBlock_eventOnInterpolationEnded_Parms
		{
			UCommonNumericTextBlock* NumericTextBlock;
			bool HadCompleted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NumericTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HadCompleted_MetaData[];
#endif
		static void NewProp_HadCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_NumericTextBlock = { "NumericTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventOnInterpolationEnded_Parms, NumericTextBlock), Z_Construct_UClass_UCommonNumericTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_NumericTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted_SetBit(void* Obj)
	{
		((CommonNumericTextBlock_eventOnInterpolationEnded_Parms*)Obj)->HadCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted = { "HadCompleted", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonNumericTextBlock_eventOnInterpolationEnded_Parms), &Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_NumericTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::NewProp_HadCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "OnInterpolationEnded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::CommonNumericTextBlock_eventOnInterpolationEnded_Parms), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonNumericTextBlock::FOnInterpolationEnded_DelegateWrapper(const FMulticastScriptDelegate& OnInterpolationEnded, UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	struct CommonNumericTextBlock_eventOnInterpolationEnded_Parms
	{
		UCommonNumericTextBlock* NumericTextBlock;
		bool HadCompleted;
	};
	CommonNumericTextBlock_eventOnInterpolationEnded_Parms Parms;
	Parms.NumericTextBlock=NumericTextBlock;
	Parms.HadCompleted=HadCompleted ? true : false;
	OnInterpolationEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonNumericTextBlock::execSetNumericType)
	{
		P_GET_ENUM(ECommonNumericType,Z_Param_InNumericType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumericType(ECommonNumericType(Z_Param_InNumericType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonNumericTextBlock::execIsInterpolatingNumericValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInterpolatingNumericValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonNumericTextBlock::execInterpolateToValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TargetValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaximumInterpolationDuration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MinimumChangeRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutroOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterpolateToValue(Z_Param_TargetValue,Z_Param_MaximumInterpolationDuration,Z_Param_MinimumChangeRate,Z_Param_OutroOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonNumericTextBlock::execSetCurrentValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonNumericTextBlock::execGetTargetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTargetValue();
		P_NATIVE_END;
	}
	void UCommonNumericTextBlock::StaticRegisterNativesUCommonNumericTextBlock()
	{
		UClass* Class = UCommonNumericTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetValue", &UCommonNumericTextBlock::execGetTargetValue },
			{ "InterpolateToValue", &UCommonNumericTextBlock::execInterpolateToValue },
			{ "IsInterpolatingNumericValue", &UCommonNumericTextBlock::execIsInterpolatingNumericValue },
			{ "SetCurrentValue", &UCommonNumericTextBlock::execSetCurrentValue },
			{ "SetNumericType", &UCommonNumericTextBlock::execSetNumericType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics
	{
		struct CommonNumericTextBlock_eventGetTargetValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventGetTargetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Numeric Text Block" },
		{ "Comment", "// Returns the value this widget will ultimately show if it is interpolating, or the current value if it is not.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Returns the value this widget will ultimately show if it is interpolating, or the current value if it is not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "GetTargetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::CommonNumericTextBlock_eventGetTargetValue_Parms), Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics
	{
		struct CommonNumericTextBlock_eventInterpolateToValue_Parms
		{
			float TargetValue;
			float MaximumInterpolationDuration;
			float MinimumChangeRate;
			float OutroOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumInterpolationDuration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumChangeRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutroOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_TargetValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventInterpolateToValue_Parms, TargetValue), METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_TargetValue_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_MaximumInterpolationDuration = { "MaximumInterpolationDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventInterpolateToValue_Parms, MaximumInterpolationDuration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_MinimumChangeRate = { "MinimumChangeRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventInterpolateToValue_Parms, MinimumChangeRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_OutroOffset = { "OutroOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventInterpolateToValue_Parms, OutroOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_MaximumInterpolationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_MinimumChangeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::NewProp_OutroOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Numeric Interpolation" },
		{ "Comment", "/**\n\x09 * Starts an ongoing process of interpolating the current numeric value to the specified target value.\n\x09 * The interpolation process may take the specified maximum duration or complete sooner if the minimum change rate causes the target to be reached prematurely.\n\x09 * Optionally, an outro duration can be specified in order to trigger an outro event before interpolation completes.\n\x09 *\n\x09 * TargetValue\x09\x09\x09\x09\x09The value to be interpolated to.\n\x09 * MaximumInterpolationDuration\x09The duration, in seconds, for the interpolation to take, at most. Must be greater than 0.\n\x09 * MinimumChangeRate\x09\x09\x09The minimum change in numeric value per second. Must be greater than or equal to 0.\n\x09 * OutroDuration\x09\x09\x09\x09The time offset, in seconds, *before* the end of the InterpolationDuration elapses, at which to trigger an outro event. Must be less than or equal to MaximumInterpolationDuration\n\x09 */" },
		{ "CPP_Default_MaximumInterpolationDuration", "3.000000" },
		{ "CPP_Default_MinimumChangeRate", "1.000000" },
		{ "CPP_Default_OutroOffset", "0.000000" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Starts an ongoing process of interpolating the current numeric value to the specified target value.\nThe interpolation process may take the specified maximum duration or complete sooner if the minimum change rate causes the target to be reached prematurely.\nOptionally, an outro duration can be specified in order to trigger an outro event before interpolation completes.\n\nTargetValue                                  The value to be interpolated to.\nMaximumInterpolationDuration The duration, in seconds, for the interpolation to take, at most. Must be greater than 0.\nMinimumChangeRate                    The minimum change in numeric value per second. Must be greater than or equal to 0.\nOutroDuration                                The time offset, in seconds, *before* the end of the InterpolationDuration elapses, at which to trigger an outro event. Must be less than or equal to MaximumInterpolationDuration" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "InterpolateToValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::CommonNumericTextBlock_eventInterpolateToValue_Parms), Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics
	{
		struct CommonNumericTextBlock_eventIsInterpolatingNumericValue_Parms
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
	void Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonNumericTextBlock_eventIsInterpolatingNumericValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonNumericTextBlock_eventIsInterpolatingNumericValue_Parms), &Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Numeric Interpolation" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "IsInterpolatingNumericValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::CommonNumericTextBlock_eventIsInterpolatingNumericValue_Parms), Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics
	{
		struct CommonNumericTextBlock_eventSetCurrentValue_Parms
		{
			float NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventSetCurrentValue_Parms, NewValue), METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Numeric Text Block" },
		{ "Comment", "// Sets the current numeric value. NOTE: Cancels any ongoing interpolation!\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Sets the current numeric value. NOTE: Cancels any ongoing interpolation!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "SetCurrentValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::CommonNumericTextBlock_eventSetCurrentValue_Parms), Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics
	{
		struct CommonNumericTextBlock_eventSetNumericType_Parms
		{
			ECommonNumericType InNumericType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InNumericType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InNumericType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::NewProp_InNumericType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::NewProp_InNumericType = { "InNumericType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonNumericTextBlock_eventSetNumericType_Parms, InNumericType), Z_Construct_UEnum_CommonUI_ECommonNumericType, METADATA_PARAMS(nullptr, 0) }; // 3106527332
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::NewProp_InNumericType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::NewProp_InNumericType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Numeral Formating" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonNumericTextBlock, nullptr, "SetNumericType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::CommonNumericTextBlock_eventSetNumericType_Parms), Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonNumericTextBlock);
	UClass* Z_Construct_UClass_UCommonNumericTextBlock_NoRegister()
	{
		return UCommonNumericTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UCommonNumericTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterpolationStartedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpolationStartedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterpolationUpdatedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpolationUpdatedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOutroEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOutroEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInterpolationEndedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpolationEndedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumericValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentNumericValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumericType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormattingSpecification_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FormattingSpecification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EaseOutInterpolationExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EaseOutInterpolationExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationUpdateInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInterpolationShrinkDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostInterpolationShrinkDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerformSizeInterpolation_MetaData[];
#endif
		static void NewProp_PerformSizeInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PerformSizeInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPercentage_MetaData[];
#endif
		static void NewProp_IsPercentage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonNumericTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonNumericTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonNumericTextBlock_GetTargetValue, "GetTargetValue" }, // 3668755383
		{ &Z_Construct_UFunction_UCommonNumericTextBlock_InterpolateToValue, "InterpolateToValue" }, // 667224258
		{ &Z_Construct_UFunction_UCommonNumericTextBlock_IsInterpolatingNumericValue, "IsInterpolatingNumericValue" }, // 256503057
		{ &Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature, "OnInterpolationEnded__DelegateSignature" }, // 4025233444
		{ &Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature, "OnInterpolationStarted__DelegateSignature" }, // 149011955
		{ &Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature, "OnInterpolationUpdated__DelegateSignature" }, // 4098910150
		{ &Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature, "OnOutro__DelegateSignature" }, // 2267943977
		{ &Z_Construct_UFunction_UCommonNumericTextBlock_SetCurrentValue, "SetCurrentValue" }, // 1102750264
		{ &Z_Construct_UFunction_UCommonNumericTextBlock_SetNumericType, "SetNumericType" }, // 437018101
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Numeric text block that provides interpolation, and some type support (numbers, percents, seconds, distance).\n */" },
		{ "IncludePath", "CommonNumericTextBlock.h" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "PrioritizeCategories", "Content" },
		{ "ToolTip", "Numeric text block that provides interpolation, and some type support (numbers, percents, seconds, distance)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationStartedEvent_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "Comment", "// Event triggered when interpolation has started.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Event triggered when interpolation has started." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationStartedEvent = { "OnInterpolationStartedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, OnInterpolationStartedEvent), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationStartedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationStartedEvent_MetaData)) }; // 149011955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationUpdatedEvent_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "Comment", "// Event triggered when interpolation has updated.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Event triggered when interpolation has updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationUpdatedEvent = { "OnInterpolationUpdatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, OnInterpolationUpdatedEvent), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationUpdatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationUpdatedEvent_MetaData)) }; // 4098910150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnOutroEvent_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "Comment", "// Event triggered at a specified time before the interpolation completes, for \"outro\" purposes.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Event triggered at a specified time before the interpolation completes, for \"outro\" purposes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnOutroEvent = { "OnOutroEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, OnOutroEvent), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnOutro__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnOutroEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnOutroEvent_MetaData)) }; // 2267943977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationEndedEvent_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "Comment", "// Event triggered when interpolation has ended.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Event triggered when interpolation has ended." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationEndedEvent = { "OnInterpolationEndedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, OnInterpolationEndedEvent), Z_Construct_UDelegateFunction_UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationEndedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationEndedEvent_MetaData)) }; // 4025233444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_CurrentNumericValue_MetaData[] = {
		{ "Category", "Numeric Text Block" },
		{ "Comment", "// The current numeric value being formatted for display, potentially being interpolated from. NOTE: The displayed text is very likely not identical to this value, due to formatting.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "The current numeric value being formatted for display, potentially being interpolated from. NOTE: The displayed text is very likely not identical to this value, due to formatting." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_CurrentNumericValue = { "CurrentNumericValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, CurrentNumericValue), METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_CurrentNumericValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_CurrentNumericValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType_MetaData[] = {
		{ "Category", "Numeral Formating" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType = { "NumericType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, NumericType), Z_Construct_UEnum_CommonUI_ECommonNumericType, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType_MetaData)) }; // 3106527332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_FormattingSpecification_MetaData[] = {
		{ "Category", "Numeral Formatting" },
		{ "Comment", "// The specifications for how the current numeric value should be formatted in to numeral text.\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "The specifications for how the current numeric value should be formatted in to numeral text." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_FormattingSpecification = { "FormattingSpecification", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, FormattingSpecification), Z_Construct_UScriptStruct_FCommonNumberFormattingOptions, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_FormattingSpecification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_FormattingSpecification_MetaData)) }; // 2498094728
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_EaseOutInterpolationExponent_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Exponent parameter for the \"ease out\" interpolation curve. Must be > 0, but should be > 1 in order to \"ease out\". */" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Exponent parameter for the \"ease out\" interpolation curve. Must be > 0, but should be > 1 in order to \"ease out\"." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_EaseOutInterpolationExponent = { "EaseOutInterpolationExponent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, EaseOutInterpolationExponent), METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_EaseOutInterpolationExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_EaseOutInterpolationExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_InterpolationUpdateInterval_MetaData[] = {
		{ "Category", "Numeric Interpolation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The desired interval, in seconds, between interpolation updates. 0.0 implies per-frame updates. NOTE: Interpolation updates may occur further apart due to tick rates. */" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "The desired interval, in seconds, between interpolation updates. 0.0 implies per-frame updates. NOTE: Interpolation updates may occur further apart due to tick rates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_InterpolationUpdateInterval = { "InterpolationUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, InterpolationUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_InterpolationUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_InterpolationUpdateInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PostInterpolationShrinkDuration_MetaData[] = {
		{ "Category", "Size Interpolation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The desired width of the formatted text may change rapidly and erratically during interpolation due to font glyph dimensions.\n\x09 * To combat this, the desired width of the text will never shrink during interpolation.\n\x09 * Once interpolation completes, the desired width will shrink over the duration specified.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "The desired width of the formatted text may change rapidly and erratically during interpolation due to font glyph dimensions.\nTo combat this, the desired width of the text will never shrink during interpolation.\nOnce interpolation completes, the desired width will shrink over the duration specified." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PostInterpolationShrinkDuration = { "PostInterpolationShrinkDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonNumericTextBlock, PostInterpolationShrinkDuration), METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PostInterpolationShrinkDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PostInterpolationShrinkDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation_MetaData[] = {
		{ "Category", "Size Interpolation" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation_SetBit(void* Obj)
	{
		((UCommonNumericTextBlock*)Obj)->PerformSizeInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation = { "PerformSizeInterpolation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonNumericTextBlock), &Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage_MetaData[] = {
		{ "Comment", "// Should the current numeric value be presented as a percentage? IE: 1.0 -> \"100%\"\n" },
		{ "ModuleRelativePath", "Public/CommonNumericTextBlock.h" },
		{ "ToolTip", "Should the current numeric value be presented as a percentage? IE: 1.0 -> \"100%\"" },
	};
#endif
	void Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage_SetBit(void* Obj)
	{
		((UCommonNumericTextBlock*)Obj)->IsPercentage_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage = { "IsPercentage", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonNumericTextBlock), &Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonNumericTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationStartedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationUpdatedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnOutroEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_OnInterpolationEndedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_CurrentNumericValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_NumericType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_FormattingSpecification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_EaseOutInterpolationExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_InterpolationUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PostInterpolationShrinkDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_PerformSizeInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonNumericTextBlock_Statics::NewProp_IsPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonNumericTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonNumericTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonNumericTextBlock_Statics::ClassParams = {
		&UCommonNumericTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonNumericTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonNumericTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonNumericTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonNumericTextBlock()
	{
		if (!Z_Registration_Info_UClass_UCommonNumericTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonNumericTextBlock.OuterSingleton, Z_Construct_UClass_UCommonNumericTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonNumericTextBlock.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonNumericTextBlock>()
	{
		return UCommonNumericTextBlock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonNumericTextBlock);
	UCommonNumericTextBlock::~UCommonNumericTextBlock() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonNumericTextBlock)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::EnumInfo[] = {
		{ ECommonNumericType_StaticEnum, TEXT("ECommonNumericType"), &Z_Registration_Info_UEnum_ECommonNumericType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3106527332U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ScriptStructInfo[] = {
		{ FCommonNumberFormattingOptions::StaticStruct, Z_Construct_UScriptStruct_FCommonNumberFormattingOptions_Statics::NewStructOps, TEXT("CommonNumberFormattingOptions"), &Z_Registration_Info_UScriptStruct_CommonNumberFormattingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonNumberFormattingOptions), 2498094728U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonNumericTextBlock, UCommonNumericTextBlock::StaticClass, TEXT("UCommonNumericTextBlock"), &Z_Registration_Info_UClass_UCommonNumericTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonNumericTextBlock), 977146511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_3620616101(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonNumericTextBlock_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
