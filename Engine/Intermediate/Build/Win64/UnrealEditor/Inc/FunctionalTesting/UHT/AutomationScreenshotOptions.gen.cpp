// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AutomationScreenshotOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationScreenshotOptions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationViewSettings_NoRegister();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FComparisonToleranceAmount();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComparisonTolerance;
	static UEnum* EComparisonTolerance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EComparisonTolerance"));
		}
		return Z_Registration_Info_UEnum_EComparisonTolerance.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonTolerance>()
	{
		return EComparisonTolerance_StaticEnum();
	}
	struct Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enumerators[] = {
		{ "EComparisonTolerance::Zero", (int64)EComparisonTolerance::Zero },
		{ "EComparisonTolerance::Low", (int64)EComparisonTolerance::Low },
		{ "EComparisonTolerance::Medium", (int64)EComparisonTolerance::Medium },
		{ "EComparisonTolerance::High", (int64)EComparisonTolerance::High },
		{ "EComparisonTolerance::Custom", (int64)EComparisonTolerance::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "EComparisonTolerance::Custom" },
		{ "High.Name", "EComparisonTolerance::High" },
		{ "Low.Name", "EComparisonTolerance::Low" },
		{ "Medium.Name", "EComparisonTolerance::Medium" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "Zero.Name", "EComparisonTolerance::Zero" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		"EComparisonTolerance",
		"EComparisonTolerance",
		Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance()
	{
		if (!Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton, Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComparisonTolerance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount;
class UScriptStruct* FComparisonToleranceAmount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComparisonToleranceAmount, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("ComparisonToleranceAmount"));
	}
	return Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FComparisonToleranceAmount>()
{
	return FComparisonToleranceAmount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Red;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Green;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MinBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxBrightness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComparisonToleranceAmount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, Red), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, Green), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, Blue), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, Alpha), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness = { "MinBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, MinBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData[] = {
		{ "Category", "Tolerance" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness = { "MaxBrightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComparisonToleranceAmount, MaxBrightness), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Red,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Green,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Blue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MinBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewProp_MaxBrightness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"ComparisonToleranceAmount",
		sizeof(FComparisonToleranceAmount),
		alignof(FComparisonToleranceAmount),
		Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComparisonToleranceAmount()
	{
		if (!Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.InnerSingleton, Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions;
class UScriptStruct* FAutomationScreenshotOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationScreenshotOptions, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AutomationScreenshotOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAutomationScreenshotOptions>()
{
	return FAutomationScreenshotOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_OverrideTimeTo_MetaData[];
#endif
		static void NewProp_bOverride_OverrideTimeTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_OverrideTimeTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideTimeTo_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OverrideTimeTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableNoisyRenderingFeatures_MetaData[];
#endif
		static void NewProp_bDisableNoisyRenderingFeatures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableNoisyRenderingFeatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableTonemapping_MetaData[];
#endif
		static void NewProp_bDisableTonemapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableTonemapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VisualizeBuffer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToleranceAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToleranceAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLocalError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumLocalError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumGlobalError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumGlobalError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAntiAliasing_MetaData[];
#endif
		static void NewProp_bIgnoreAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreColors_MetaData[];
#endif
		static void NewProp_bIgnoreColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationScreenshotOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * The desired resolution of the screenshot, if none is provided, it will use the default for the\n\x09 * platform setup in the automation settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "The desired resolution of the screenshot, if none is provided, it will use the default for the\nplatform setup in the automation settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, Resolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * The delay before we take the screenshot (measured in seconds). Both this delay and the frame delay must be met before the screenshot is taken.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "The delay before we take the screenshot (measured in seconds). Both this delay and the frame delay must be met before the screenshot is taken." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_FrameDelay_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * The delay before we take the screenshot (measured in number of frames). Both this frame delay and the time delay must be met before the screenshot is taken.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "The delay before we take the screenshot (measured in number of frames). Both this frame delay and the time delay must be met before the screenshot is taken." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_FrameDelay = { "FrameDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, FrameDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_FrameDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_FrameDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bOverride_OverrideTimeTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo = { "bOverride_OverrideTimeTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * Overrides World Time, Real Time to the value provided.  Sets Delta Time to 0.  Only\n\x09 * affects the time being sent to the render thread and materials.  The time accumulating\n\x09 * on the game thread is unaffected.\n\x09 */" },
		{ "editcondition", "bOverride_OverrideTimeTo" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Overrides World Time, Real Time to the value provided.  Sets Delta Time to 0.  Only\naffects the time being sent to the render thread and materials.  The time accumulating\non the game thread is unaffected." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo = { "OverrideTimeTo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, OverrideTimeTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * Disables Anti-Aliasing, Motion Blur, Screen Space Reflections, Eye Adaptation, Tonemapper and Contact\n\x09 * Shadows, because those features contribute a lot to the noise in the final rendered image.  If you're\n\x09 * explicitly looking for changes \n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Disables Anti-Aliasing, Motion Blur, Screen Space Reflections, Eye Adaptation, Tonemapper and Contact\nShadows, because those features contribute a lot to the noise in the final rendered image.  If you're\nexplicitly looking for changes" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bDisableNoisyRenderingFeatures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures = { "bDisableNoisyRenderingFeatures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * Disables Eye Adaptation and sets Tonemapper to fixed gamma curve. Should generally be on unless\n\x09 * testing tone mapping or other post-processing results\n\x09 */" },
		{ "DisplayName", "Fixed Exposure" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Disables Eye Adaptation and sets Tonemapper to fixed gamma curve. Should generally be on unless\ntesting tone mapping or other post-processing results" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bDisableTonemapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping = { "bDisableTonemapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * Assign custom view settings to control which rendering options we allow on while taking the\n\x09 * screenshot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Assign custom view settings to control which rendering options we allow on while taking the\nscreenshot." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings = { "ViewSettings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, ViewSettings), Z_Construct_UClass_UAutomationViewSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData[] = {
		{ "Category", "Screenshot" },
		{ "Comment", "/**\n\x09 * Allows you to screenshot a buffer other than the default final lit scene image.  Useful if you're\n\x09 * trying to build a test for a specific GBuffer, that may be harder to tell if errors are introduced\n\x09 * in it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "Allows you to screenshot a buffer other than the default final lit scene image.  Useful if you're\ntrying to build a test for a specific GBuffer, that may be harder to tell if errors are introduced\nin it." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer = { "VisualizeBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, VisualizeBuffer), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Comparison" },
		{ "Comment", "/**\n\x09 * These are quick defaults for tolerance levels, we default to low, because generally there's some\n\x09 * constant variability in every pixel's color introduced by TxAA.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "These are quick defaults for tolerance levels, we default to low, because generally there's some\nconstant variability in every pixel's color introduced by TxAA." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_MetaData)) }; // 594704935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData[] = {
		{ "Category", "Comparison" },
		{ "Comment", "/**\n\x09 * For each channel and brightness levels you can control a region where the colors are found to be\n\x09 * essentially the same.  Generally this is necessary as modern rendering techniques tend to introduce\n\x09 * noise constantly to hide aliasing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "For each channel and brightness levels you can control a region where the colors are found to be\nessentially the same.  Generally this is necessary as modern rendering techniques tend to introduce\nnoise constantly to hide aliasing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount = { "ToleranceAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, ToleranceAmount), Z_Construct_UScriptStruct_FComparisonToleranceAmount, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount_MetaData)) }; // 3175831285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * After you've accounted for color tolerance changes, you now need to control for local acceptable error.\n\x09 * Which depending on how pixels were colored on triangle edges may be a few percent of the image being\n\x09 * outside the tolerance levels.  Unlike the MaximumGlobalError, the MaximumLocalError works by focusing\n\x09 * on a smaller subset of the image.  These chunks will have be compared to the local error, in an attempt\n\x09 * to locate hot spots of change that are important, that would be ignored by the global error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "After you've accounted for color tolerance changes, you now need to control for local acceptable error.\nWhich depending on how pixels were colored on triangle edges may be a few percent of the image being\noutside the tolerance levels.  Unlike the MaximumGlobalError, the MaximumLocalError works by focusing\non a smaller subset of the image.  These chunks will have be compared to the local error, in an attempt\nto locate hot spots of change that are important, that would be ignored by the global error." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError = { "MaximumLocalError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, MaximumLocalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData[] = {
		{ "Category", "Comparison" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * After you've accounted for color tolerance changes, you now need to control for total acceptable error.\n\x09 * Which depending on how pixels were colored on triangle edges may be a few percent of the image being\n\x09 * outside the tolerance levels.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "After you've accounted for color tolerance changes, you now need to control for total acceptable error.\nWhich depending on how pixels were colored on triangle edges may be a few percent of the image being\noutside the tolerance levels." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError = { "MaximumGlobalError", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationScreenshotOptions, MaximumGlobalError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData[] = {
		{ "Category", "Comparison" },
		{ "Comment", "/**\n\x09 * If this is true, we search neighboring pixels looking for the expected pixel as what may have happened, is\n\x09 * that the pixel shifted a little.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "If this is true, we search neighboring pixels looking for the expected pixel as what may have happened, is\nthat the pixel shifted a little." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bIgnoreAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing = { "bIgnoreAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData[] = {
		{ "Category", "Comparison" },
		{ "Comment", "/**\n\x09 * If this is true, all we compare is luminance of the scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationScreenshotOptions.h" },
		{ "ToolTip", "If this is true, all we compare is luminance of the scene." },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_SetBit(void* Obj)
	{
		((FAutomationScreenshotOptions*)Obj)->bIgnoreColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors = { "bIgnoreColors", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationScreenshotOptions), &Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_FrameDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bOverride_OverrideTimeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_OverrideTimeTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableNoisyRenderingFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bDisableTonemapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ViewSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_VisualizeBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_ToleranceAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumLocalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_MaximumGlobalError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewProp_bIgnoreColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"AutomationScreenshotOptions",
		sizeof(FAutomationScreenshotOptions),
		alignof(FAutomationScreenshotOptions),
		Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.InnerSingleton, Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::EnumInfo[] = {
		{ EComparisonTolerance_StaticEnum, TEXT("EComparisonTolerance"), &Z_Registration_Info_UEnum_EComparisonTolerance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 594704935U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::ScriptStructInfo[] = {
		{ FComparisonToleranceAmount::StaticStruct, Z_Construct_UScriptStruct_FComparisonToleranceAmount_Statics::NewStructOps, TEXT("ComparisonToleranceAmount"), &Z_Registration_Info_UScriptStruct_ComparisonToleranceAmount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComparisonToleranceAmount), 3175831285U) },
		{ FAutomationScreenshotOptions::StaticStruct, Z_Construct_UScriptStruct_FAutomationScreenshotOptions_Statics::NewStructOps, TEXT("AutomationScreenshotOptions"), &Z_Registration_Info_UScriptStruct_AutomationScreenshotOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationScreenshotOptions), 3322497681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_268287351(TEXT("/Script/FunctionalTesting"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationScreenshotOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
